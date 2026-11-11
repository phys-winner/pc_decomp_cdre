#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17023A0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A0Cu);

L_17023A0C:
    esp = POP32_VAL(esp); /* 0x17023A0C: pop esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x697A006Fu);
    eax = eax & 0x697A006Fu; /* 0x17023A0D: and eax, 0x697a006f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (CMP_O(_flag_a, _flag_b)) goto L_17023A14; /* 0x17023A12: jo 0x17023a14 */
L_17023A14:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_17023A7D; /* 0x17023A14: js 0x17023a7d */
L_17023A17:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17023A17: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x78)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x78) = (uint8_t)(MEM8(eax + eax + 0x78) + HI8(eax)); /* 0x17023A1B: add byte ptr [eax + eax + 0x78], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x17023A1F: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ecx; /* 0x17023A24: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A25: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A26: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A28: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A2E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A30: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A36: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A38: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A40: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A46: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
L_17023A7D:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A7D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A7E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A80: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A10u);

L_17023A10:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_17023A7B; /* 0x17023A10: jp 0x17023a7b */
L_17023A12:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_17023A14; /* 0x17023A12: jo 0x17023a14 */
L_17023A14:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_17023A7D; /* 0x17023A14: js 0x17023a7d */
L_17023A17:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17023A17: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x78)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x78) = (uint8_t)(MEM8(eax + eax + 0x78) + HI8(eax)); /* 0x17023A1B: add byte ptr [eax + eax + 0x78], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x17023A1F: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ecx; /* 0x17023A24: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A25: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A26: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A28: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A2E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A30: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A36: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A38: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A40: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A46: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
L_17023A7B:
    _seg_ss = POP32_VAL(esp); /* 0x17023A7B: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A7C: lahf  */
L_17023A7D:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A7D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A7E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A80: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A14u);

L_17023A14:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_17023A7D; /* 0x17023A14: js 0x17023a7d */
L_17023A17:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17023A17: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x78)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x78) = (uint8_t)(MEM8(eax + eax + 0x78) + HI8(eax)); /* 0x17023A1B: add byte ptr [eax + eax + 0x78], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x17023A1F: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ecx; /* 0x17023A24: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A25: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A26: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A28: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A2E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A30: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A36: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A38: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A40: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A46: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
L_17023A7D:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A7D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A7E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A80: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A18u);

L_17023A18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A18: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x78)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x78) = (uint8_t)(MEM8(eax + eax + 0x78) + HI8(eax)); /* 0x17023A1B: add byte ptr [eax + eax + 0x78], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x17023A1F: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ecx; /* 0x17023A24: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A25: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A26: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A28: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A2E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A30: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A36: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A38: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A40: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A46: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A1Cu);

L_17023A1C:
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) + HI8(ebx)); /* 0x17023A1C: add byte ptr fs:[eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A20: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x12171AA6)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x12171AA6) = (uint8_t)(MEM8(ecx + 0x12171AA6) + LO8(edx)); /* 0x17023A23: add byte ptr [ecx + 0x12171aa6], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(ecx, 0x21u); /* 0x17023A29: mov cl, 0x21 */
    _seg_ss = POP32_VAL(esp); /* 0x17023A2B: pop ss */
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A2C: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A32: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A34: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3A: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A3C: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A42: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x582BE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A44: adc dh, byte ptr [ecx - 0x582be8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A24u);

L_17023A24:
    { uint32_t _tmp = ecx; /* 0x17023A24: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A25: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A26: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A28: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A2E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A30: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A36: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A38: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A3E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A40: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023A46: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A48u);

L_17023A48:
    void_lift_trap(0x17023A48u, "aam 0xa7");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A4C: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A4D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A4E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A50u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A57: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A58: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A59: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A5A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A5C: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023A6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A6Cu);

L_17023A6C:
    void_lift_trap(0x17023A6Cu, "cli ");
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023A6D: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A6E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023A70: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A71: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A72: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023A74u, "ljmp 0x1aa5:0x72171aa6");
    _seg_ss = POP32_VAL(esp); /* 0x17023A7B: pop ss */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17023A7C: lahf  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17023A7D: movsd dword ptr es:[edi], dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A7E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17023A80: retf 0x1aa5 */
    RECOMP_REGS_OUT();
}

void sub_17023AB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023AB4u);

L_17023AB4:
    MEM8(0x1648171B) = (uint8_t)(LO8(edx)); /* 0x17023AB4: mov byte ptr [0x1648171b], dl */
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023ABA: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x17023ABC: pushfd  */
    SET_LO8(eax, 0x1Au); /* 0x17023ABD: mov al, 0x1a */
    _seg_ss = POP32_VAL(esp); /* 0x17023ABF: pop ss */
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + 0x15711721), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AC0: adc dh, byte ptr [ecx + 0x15711721] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AC6: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x17023AC8: lodsb al, byte ptr [esi] */
    { uint32_t _aa = eax, _ab = 0x161C171Bu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AC9: adc eax, 0x161c171b */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023ACE: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023AD0: dec eax */
    _flag_k = FK_DEC;
    ebx = 0xBB481712u; /* 0x17023AD1: mov ebx, 0xbb481712 */
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AD6: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AD8: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023ADE: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1648171A)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + MEM8(edi + 0x1648171A)); /* 0x17023AE0: add dh, byte ptr [edi + 0x1648171a] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AE6: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((LO8(eax) | 0xB4u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xB4u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xB4u); /* 0x17023AE8: or al, 0xb4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AEA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023AECu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023AE0u);

L_17023AE0:
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1648171A)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + MEM8(edi + 0x1648171A)); /* 0x17023AE0: add dh, byte ptr [edi + 0x1648171a] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AE6: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((LO8(eax) | 0xB4u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xB4u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xB4u); /* 0x17023AE8: or al, 0xb4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023AEA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023AECu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023B3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023B3Cu);

L_17023B3C:
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1648171A)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + MEM8(edi + 0x1648171A)); /* 0x17023B3C: add dh, byte ptr [edi + 0x1648171a] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B42: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023B44u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023B68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023B68u);

    goto L_17023B68;
L_17023B30:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4AF1E8E6)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4AF1E8E6)); /* 0x17023B30: add esi, dword ptr [ebp - 0x4af1e8e6] */
    _flag_k = FK_ADD;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B36: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x48FDE8E6)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x48FDE8E6)); /* 0x17023B38: sub esi, dword ptr [ebp - 0x48fde8e6] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B3E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B40: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_ss); /* 0x17023B41: push ss */
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B42: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023B44u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17023B5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B5C: dec eax */
    _flag_k = FK_DEC;
    ebx = 0xBB481712u; /* 0x17023B5D: mov ebx, 0xbb481712 */
    goto L_17023B62; /* falls through past a gap */
L_17023B5F:
    _seg_ss = POP32_VAL(esp); /* 0x17023B5F: pop ss */
L_17023B60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B60: dec eax */
    _flag_k = FK_DEC;
    ebx = 0xC0481712u; /* 0x17023B61: mov ebx, 0xc0481712 */
    goto L_17023B66; /* falls through past a gap */
L_17023B62:
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B62: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B64: dec eax */
    _flag_k = FK_DEC;
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((0x17u) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x17023B65: rcr byte ptr [edx], 0x17 */
    goto L_17023B68; /* falls through past a gap */
L_17023B66:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B66: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17023B68:
    /* in: no port I/O under Win32 */ /* 0x17023B68: in eax, dx */
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023B69: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B6A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi) = eax; edi += _df * 4; /* 0x17023B6C: stosd dword ptr es:[edi], eax */
    ecx = 0xB438171Au; /* 0x17023B6D: mov ecx, 0xb438171a */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B72: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023B74: inc esi */
    _flag_k = FK_INC;
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023B75: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B76: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B30; /* 0x17023B78: loop 0x17023b30 */
L_17023B7A:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B7A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = MEM32(ecx + (-0x4F3DE8E6)); _seg_ds = MEM16(ecx + (-0x4F3DE8E6) + 4); /* 0x17023B7C: lds edi, ptr [ecx - 0x4f3de8e6] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B82: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM8(eax + (-0x43C8E8E6)), 0x1Au */ /* 0x17023B84: cmp byte ptr [eax - 0x43c8e8e6], 0x1a */
    _flag_a = (uint32_t)(MEM8(eax + (-0x43C8E8E6))) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17023B8B: pop ss */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1648171A)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + MEM8(edi + 0x1648171A)); /* 0x17023B8C: add dh, byte ptr [edi + 0x1648171a] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B92: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM8(ecx + (-0x4670E8E6)), 0x1Au */ /* 0x17023B94: cmp byte ptr [ecx - 0x4670e8e6], 0x1a */
    _flag_a = (uint32_t)(MEM8(ecx + (-0x4670E8E6))) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17023B9B: pop ss */
    { uint32_t _aa = MEM32(edi + (-0x48DFE8E6)), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B9C: adc dword ptr [edi - 0x48dfe8e6], esi */
      MEM32(edi + (-0x48DFE8E6)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BA2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B5F; /* 0x17023BA4: loop 0x17023b5f */
L_17023BA6:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BA6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B5C; /* 0x17023BA8: loop 0x17023b5c */
L_17023BAA:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BAA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_17023B60; /* 0x17023BAC: jae 0x17023b60 */
L_17023BAE:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BAE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023BB0u, "int1 ");
    ecx = 0xB99E171Au; /* 0x17023BB1: mov ecx, 0xb99e171a */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BB6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023BB8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023B8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023B8Cu);

    goto L_17023B8C;
L_17023B30:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4AF1E8E6)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x4AF1E8E6)); /* 0x17023B30: add esi, dword ptr [ebp - 0x4af1e8e6] */
    _flag_k = FK_ADD;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B36: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x48FDE8E6)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x48FDE8E6)); /* 0x17023B38: sub esi, dword ptr [ebp - 0x48fde8e6] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B3E: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B40: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_ss); /* 0x17023B41: push ss */
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B42: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023B44u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17023B5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B5C: dec eax */
    _flag_k = FK_DEC;
    ebx = 0xBB481712u; /* 0x17023B5D: mov ebx, 0xbb481712 */
    goto L_17023B62; /* falls through past a gap */
L_17023B5F:
    _seg_ss = POP32_VAL(esp); /* 0x17023B5F: pop ss */
L_17023B60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B60: dec eax */
    _flag_k = FK_DEC;
    ebx = 0xC0481712u; /* 0x17023B61: mov ebx, 0xc0481712 */
    goto L_17023B66; /* falls through past a gap */
L_17023B62:
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B62: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17023B64: dec eax */
    _flag_k = FK_DEC;
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((0x17u) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x17023B65: rcr byte ptr [edx], 0x17 */
    goto L_17023B68; /* falls through past a gap */
L_17023B66:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B66: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17023B68:
    /* in: no port I/O under Win32 */ /* 0x17023B68: in eax, dx */
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023B69: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B6A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi) = eax; edi += _df * 4; /* 0x17023B6C: stosd dword ptr es:[edi], eax */
    ecx = 0xB438171Au; /* 0x17023B6D: mov ecx, 0xb438171a */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B72: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023B74: inc esi */
    _flag_k = FK_INC;
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17023B75: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B76: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B30; /* 0x17023B78: loop 0x17023b30 */
L_17023B7A:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B7A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = MEM32(ecx + (-0x4F3DE8E6)); _seg_ds = MEM16(ecx + (-0x4F3DE8E6) + 4); /* 0x17023B7C: lds edi, ptr [ecx - 0x4f3de8e6] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B82: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM8(eax + (-0x43C8E8E6)), 0x1Au */ /* 0x17023B84: cmp byte ptr [eax - 0x43c8e8e6], 0x1a */
    _flag_a = (uint32_t)(MEM8(eax + (-0x43C8E8E6))) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17023B8B: pop ss */
L_17023B8C:
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1648171A)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(edx, HI8(edx) + MEM8(edi + 0x1648171A)); /* 0x17023B8C: add dh, byte ptr [edi + 0x1648171a] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = edx, _sb = MEM32(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B92: sbb edx, dword ptr [edi] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM8(ecx + (-0x4670E8E6)), 0x1Au */ /* 0x17023B94: cmp byte ptr [ecx - 0x4670e8e6], 0x1a */
    _flag_a = (uint32_t)(MEM8(ecx + (-0x4670E8E6))) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17023B9B: pop ss */
    { uint32_t _aa = MEM32(edi + (-0x48DFE8E6)), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023B9C: adc dword ptr [edi - 0x48dfe8e6], esi */
      MEM32(edi + (-0x48DFE8E6)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BA2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B5F; /* 0x17023BA4: loop 0x17023b5f */
L_17023BA6:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BA6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (--ecx != 0) goto L_17023B5C; /* 0x17023BA8: loop 0x17023b5c */
L_17023BAA:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BAA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_17023B60; /* 0x17023BAC: jae 0x17023b60 */
L_17023BAE:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BAE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17023BB0u, "int1 ");
    ecx = 0xB99E171Au; /* 0x17023BB1: mov ecx, 0xb99e171a */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023BB6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023BB8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023C74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023C74u);

    goto L_17023C74;
L_17023C43:
    _seg_ss = POP32_VAL(esp); /* 0x17023C43: pop ss */
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023C44: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17023C4A: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x17023C4Cu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17023C74:
    /* in: no port I/O under Win32 */ /* 0x17023C74: in eax, dx */
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((0x17u) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x17023C75: rcr byte ptr [edx], 0x17 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023C78: inc esi */
    _flag_k = FK_INC;
    { uint32_t _rv = (MEM32(edx)) & 0xFFFFFFFFu, _rn = ((0x17u) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(edx) = _rv; } /* 0x17023C79: rcr dword ptr [edx], 0x17 */
    PUSHAD(); /* 0x17023C7C: pushal  */
    { uint32_t _rv = (MEM32(edx)) & 0xFFFFFFFFu, _rn = ((0x17u) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(edx) = _rv; } /* 0x17023C7D: rcr dword ptr [edx], 0x17 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_17023C43; /* 0x17023C80: jp 0x17023c43 */
L_17023C82:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023C82: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test LO8(eax), 0xC1u */ /* 0x17023C84: test al, 0xc1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC1u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023C86: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = eax, _ab = 0x8B171AC2u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023C88: adc eax, 0x8b171ac2 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023C8Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17025764(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17025764u);

L_17025764:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025764: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(0x1010101)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x1010101) = MEM32(0x1010101) + eax; /* 0x17025766: add dword ptr [0x1010101], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x1702576C: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702576E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025770: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025772: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025774: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025776: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025778: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x17025779: push es */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702577A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(esi), 0 */ /* 0x1702577C: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702577F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025781: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x13)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x13) = (uint8_t)(MEM8(eax + 0x13) + LO8(ecx)); /* 0x17025783: add byte ptr [eax + 0x13], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025789: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x1702578B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702578D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x1702578F: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025791: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x17025793: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025795: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x17025797: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025799: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x1702579B: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702579D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x1702579F: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x170257A3: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x170257A7: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x170257AB: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x170257AF: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ebx)); /* 0x170257B3: add byte ptr [ecx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x170257B7: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x170257BB: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170257BF: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0C000000u; /* 0x170257C4: add eax, 0xc000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x170257CB: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x170257CF: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x170257D3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x170257D7: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x170257DB: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x170257DF: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x170257E3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x170257E7: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x170257EB: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x06000000u)); _flag_b = (uint32_t)((eax | 0x06000000u));
    eax = eax | 0x06000000u; /* 0x170257F0: or eax, 0x6000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x170257F7: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x170257FB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x1C000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x1C000000) = (uint8_t)(MEM8(0x1C000000) + LO8(edx)); /* 0x170257FF: add byte ptr [0x1c000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025805: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x17025807: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025809: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x1702580B: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702580D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(edx)); /* 0x1702580F: add byte ptr [ecx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025811: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x17025813: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025815: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x17025817: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025819: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x1702581B: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702581D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x1702581F: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025821: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x17025823: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025826: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x16000000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025828: sbb eax, 0x16000000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702582D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1702582F: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x17025833: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x17025837: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025839: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x2C000000)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C000000) = (uint8_t)(MEM8(0x2C000000) + HI8(eax)); /* 0x1702583B: add byte ptr [0x2c000000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025841: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x17025843: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025845: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x17025847: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025849: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x1702584B: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702584D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(edx)); /* 0x1702584F: add byte ptr [eax + eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x26000000u; /* 0x17025854: sub eax, 0x26000000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025859: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x1702585B: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702585D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x1702585F: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025861: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17025863: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025865: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3C000000)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3C000000) = (uint8_t)(MEM8(0x3C000000) + HI8(edx)); /* 0x17025867: add byte ptr [0x3c000000], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702586D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x36000000)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x36000000) = (uint8_t)(MEM8(0x36000000) + HI8(ebx)); /* 0x1702586F: add byte ptr [0x36000000], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025875: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x17025877: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025879: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(edx)); /* 0x1702587B: add byte ptr [edi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702587D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x1702587F: add byte ptr [esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025881: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025883: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025885: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025887: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025889: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702588D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025891: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025893: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025895: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025897: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025899: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702589D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258C3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x170258CB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x170258CF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170258D3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258D8: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258DC: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170258E0: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170258E4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170258ED: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x170258F1: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170258F5: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258F9: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258FD: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17025901: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025903: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025905: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025908: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702590A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1702590Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17025788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17025788u);

L_17025788:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025788: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702578A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1702578C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702578E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x17025790: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025792: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025794: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025796: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025798: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702579A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1702579C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702579E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x170257A0: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x170257A4: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257A8: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257AC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170257B0: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257B4: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257B8: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x170257BC: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170257C0: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0C000000u; /* 0x170257C4: add eax, 0xc000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x170257CB: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x170257CF: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x170257D3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x170257D7: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x170257DB: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x170257DF: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x170257E3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x170257E7: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x170257EB: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x06000000u)); _flag_b = (uint32_t)((eax | 0x06000000u));
    eax = eax | 0x06000000u; /* 0x170257F0: or eax, 0x6000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x170257F7: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x170257FB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x1C000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x1C000000) = (uint8_t)(MEM8(0x1C000000) + LO8(edx)); /* 0x170257FF: add byte ptr [0x1c000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025805: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x17025807: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025809: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x1702580B: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702580D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(edx)); /* 0x1702580F: add byte ptr [ecx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025811: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x17025813: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025815: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x17025817: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025819: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x1702581B: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702581D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x1702581F: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025821: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x17025823: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025826: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x16000000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025828: sbb eax, 0x16000000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702582D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1702582F: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x17025833: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x17025837: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025839: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x2C000000)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C000000) = (uint8_t)(MEM8(0x2C000000) + HI8(eax)); /* 0x1702583B: add byte ptr [0x2c000000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025841: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x17025843: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025845: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x17025847: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025849: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x1702584B: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702584D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(edx)); /* 0x1702584F: add byte ptr [eax + eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x26000000u; /* 0x17025854: sub eax, 0x26000000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025859: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x1702585B: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702585D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x1702585F: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025861: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17025863: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025865: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3C000000)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3C000000) = (uint8_t)(MEM8(0x3C000000) + HI8(edx)); /* 0x17025867: add byte ptr [0x3c000000], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702586D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x36000000)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x36000000) = (uint8_t)(MEM8(0x36000000) + HI8(ebx)); /* 0x1702586F: add byte ptr [0x36000000], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025875: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x17025877: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025879: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(edx)); /* 0x1702587B: add byte ptr [edi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702587D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x1702587F: add byte ptr [esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025881: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025883: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025885: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025887: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025889: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702588D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025891: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025893: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025895: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025897: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025899: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702589D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258C3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x170258CB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x170258CF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170258D3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258D8: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258DC: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170258E0: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170258E4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170258ED: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x170258F1: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170258F5: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258F9: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258FD: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17025901: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025903: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025905: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025908: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702590A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1702590Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1702578C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702578Cu);

L_1702578C:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1702578C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702578E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x17025790: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025792: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025794: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025796: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025798: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702579A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1702579C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702579E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x170257A0: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x170257A4: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257A8: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(eax), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257AC: sbb byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170257B0: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257B4: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257B6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = MEM8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170257B8: adc al, byte ptr [eax] */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | MEM32(eax))); _flag_b = (uint32_t)((eax | MEM32(eax)));
    eax = eax | MEM32(eax); /* 0x170257BC: or eax, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170257C0: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0C000000u; /* 0x170257C4: add eax, 0xc000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x170257CB: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x170257CF: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x170257D3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x170257D7: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x170257DB: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x170257DF: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x170257E3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ebx)); /* 0x170257E7: add byte ptr [ebx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(edx)); /* 0x170257EB: add byte ptr [eax + eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x06000000u)); _flag_b = (uint32_t)((eax | 0x06000000u));
    eax = eax | 0x06000000u; /* 0x170257F0: or eax, 0x6000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x170257F7: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x170257FB: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170257FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x1C000000)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x1C000000) = (uint8_t)(MEM8(0x1C000000) + LO8(edx)); /* 0x170257FF: add byte ptr [0x1c000000], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025805: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x17025807: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025809: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x1702580B: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702580D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(edx)); /* 0x1702580F: add byte ptr [ecx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025811: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x17025813: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025815: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x17025817: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025819: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x1702581B: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702581D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x1702581F: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025821: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x17025823: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025826: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x16000000u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025828: sbb eax, 0x16000000 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702582D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1702582F: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(edx)); /* 0x17025833: add byte ptr [edi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ebx)); /* 0x17025837: add byte ptr [esi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025839: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x2C000000)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x2C000000) = (uint8_t)(MEM8(0x2C000000) + HI8(eax)); /* 0x1702583B: add byte ptr [0x2c000000], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025841: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x17025843: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025845: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x17025847: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025849: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ebx)); /* 0x1702584B: add byte ptr [ebx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702584D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(edx)); /* 0x1702584F: add byte ptr [eax + eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x26000000u; /* 0x17025854: sub eax, 0x26000000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025859: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ebx)); /* 0x1702585B: add byte ptr [edi], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702585D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x1702585F: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025861: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x17025863: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025865: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3C000000)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3C000000) = (uint8_t)(MEM8(0x3C000000) + HI8(edx)); /* 0x17025867: add byte ptr [0x3c000000], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702586D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x36000000)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x36000000) = (uint8_t)(MEM8(0x36000000) + HI8(ebx)); /* 0x1702586F: add byte ptr [0x36000000], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025875: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x17025877: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025879: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(edx)); /* 0x1702587B: add byte ptr [edi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702587D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ebx)); /* 0x1702587F: add byte ptr [esi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025881: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025883: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025885: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025887: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025889: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702588D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702588F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025891: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025893: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025895: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x17025897: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025899: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589B: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702589D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702589F: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258A7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258AF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258B7: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BB: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258BF: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x170258C3: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x170258CB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x170258CF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170258D3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258D8: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258DC: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170258E0: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170258E4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170258ED: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x170258F1: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170258F5: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x170258F9: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170258FD: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170258FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17025901: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025903: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025905: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025908: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702590A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1702590Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170259F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170259F8u);

L_170259F8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170259F8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170259FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170259FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x170259FEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17025A38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17025A38u);

L_17025A38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A38: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A3A: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A3C: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A3E: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A40: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A42: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A44: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A46: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x17025A48: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A4A: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A4C: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) | eax)); _flag_b = (uint32_t)((MEM32(eax) | eax));
    MEM32(eax) = MEM32(eax) | eax; /* 0x17025A4E: or dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17025A50: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A52: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A54: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17025A56: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _seg_es = POP32_VAL(esp); /* 0x17025A58: pop es */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x17025A59: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x17025A5B: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x17025A5D: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x17025A5F: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x17025A61: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x17025A63: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x17025A65: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17025A67: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17025A69: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17025A6B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17025A6D: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17025A6F: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17025A71: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17025A73: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17025A75: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025A77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025A79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025A7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025A7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x17025A7Fu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17025AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17025AD0u);

    goto L_17025AD0;
L_17025AC2:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17025AC2: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AC4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17025AC8: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025ACA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17025ACCu, "cli ");
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x17025ACD: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebx + esi + 0x64)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi + 0x64) = (uint8_t)(MEM8(ebx + esi + 0x64) + HI8(eax)); /* 0x17025ACF: add byte ptr [ebx + esi + 0x64], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_17025AD3; /* falls through past a gap */
L_17025AD0:
    _flag_a = (uint32_t)((esp ^ MEM32(FS_BASE + (eax + edi * 2)))); _flag_b = (uint32_t)((esp ^ MEM32(FS_BASE + (eax + edi * 2))));
    esp = esp ^ MEM32(FS_BASE + (eax + edi * 2)); /* 0x17025AD0: xor esp, dword ptr fs:[eax + edi*2] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17025AD5; /* falls through past a gap */
L_17025AD3:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17025AD5; /* 0x17025AD3: js 0x17025ad5 */
L_17025AD5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x504D4554)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x504D4554) = (uint8_t)(MEM8(0x504D4554) + HI8(eax)); /* 0x17025AD7: add byte ptr [0x504d4554], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAB5D0000u);
    eax = eax & 0xAB5D0000u; /* 0x17025ADD: and eax, 0xab5d0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_17025AC2; /* 0x17025AE2: jb 0x17025ac2 */
L_17025AE4:
    PUSH32(esp, ebp); /* 0x17025AE4: push ebp */
    /* test LO8(eax), 1 */ /* 0x17025AE5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025AE7: inc eax */
    _flag_k = FK_INC;
    ebx = 0x7A7BC720u; /* 0x17025AE8: mov ebx, 0x7a7bc720 */
    PUSH32(esp, ecx); /* 0x17025AED: push ecx */
    { uint32_t _aa = MEM32(eax + 0x3B), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AEE: adc dword ptr [eax + 0x3b], eax */
      MEM32(eax + 0x3B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0x2469C0A7u; /* 0x17025AF1: mov edi, 0x2469c0a7 */
    { uint32_t _sa = MEM32(eax + (-0x56)), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AF6: sbb dword ptr [eax - 0x56], eax */
      MEM32(eax + (-0x56)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(edi + ebp * 8 + 0x62), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AF9: adc dword ptr [edi + ebp*8 + 0x62], ebp */
      MEM32(edi + ebp * 8 + 0x62) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((MEM8(edx)) >> 7) & 1u); /* 0x17025AFD: shl byte ptr [edx], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edx) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edx) = (uint8_t)(MEM8(edx) << 1u); /* 0x17025AFD: shl byte ptr [edx], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025AFF: inc eax */
    _flag_k = FK_INC;
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17025B00: retf 0x4d6f */
    RECOMP_REGS_OUT();
}

void sub_17025AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17025AD8u);

    goto L_17025AD8;
L_17025AC2:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17025AC2: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AC4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17025AC8: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025ACA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17025ACCu, "cli ");
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x17025ACD: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebx + esi + 0x64)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi + 0x64) = (uint8_t)(MEM8(ebx + esi + 0x64) + HI8(eax)); /* 0x17025ACF: add byte ptr [ebx + esi + 0x64], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17025AD5; /* 0x17025AD3: js 0x17025ad5 */
L_17025AD5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17025AD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x504D4554)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x504D4554) = (uint8_t)(MEM8(0x504D4554) + HI8(eax)); /* 0x17025AD7: add byte ptr [0x504d4554], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_17025ADD; /* falls through past a gap */
L_17025AD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x504D4554u);
    eax = eax & 0x504D4554u; /* 0x17025AD8: and eax, 0x504d4554 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17025ADD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAB5D0000u);
    eax = eax & 0xAB5D0000u; /* 0x17025ADD: and eax, 0xab5d0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_17025AC2; /* 0x17025AE2: jb 0x17025ac2 */
L_17025AE4:
    PUSH32(esp, ebp); /* 0x17025AE4: push ebp */
    /* test LO8(eax), 1 */ /* 0x17025AE5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025AE7: inc eax */
    _flag_k = FK_INC;
    ebx = 0x7A7BC720u; /* 0x17025AE8: mov ebx, 0x7a7bc720 */
    PUSH32(esp, ecx); /* 0x17025AED: push ecx */
    { uint32_t _aa = MEM32(eax + 0x3B), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AEE: adc dword ptr [eax + 0x3b], eax */
      MEM32(eax + 0x3B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0x2469C0A7u; /* 0x17025AF1: mov edi, 0x2469c0a7 */
    { uint32_t _sa = MEM32(eax + (-0x56)), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AF6: sbb dword ptr [eax - 0x56], eax */
      MEM32(eax + (-0x56)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(edi + ebp * 8 + 0x62), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17025AF9: adc dword ptr [edi + ebp*8 + 0x62], ebp */
      MEM32(edi + ebp * 8 + 0x62) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((MEM8(edx)) >> 7) & 1u); /* 0x17025AFD: shl byte ptr [edx], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edx) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edx) = (uint8_t)(MEM8(edx) << 1u); /* 0x17025AFD: shl byte ptr [edx], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17025AFF: inc eax */
    _flag_k = FK_INC;
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x17025B00: retf 0x4d6f */
    RECOMP_REGS_OUT();
}

void sub_17027D5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17027D5Cu);

L_17027D5C:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    SET_HI8(ebx, HI8(ebx) & MEM8(eax)); /* 0x17027D5C: and bh, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_ds); /* 0x17027D5E: push ds */
    _seg_ss = POP32_VAL(esp); /* 0x17027D5F: pop ss */
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17027D60: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17027D66: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17027D68: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17027D6E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17027D70: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17027D76: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17027D78: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17027D7E: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + (-0x4EEDE8DF)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17027D80: adc dh, byte ptr [ecx - 0x4eede8df] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x17027D86: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x333F86BC) = (uint8_t)(LO8(eax)); /* 0x17027D88: mov byte ptr [0x333f86bc], al */
    _flag_a = (uint32_t)((esi ^ MEM32(ebx + 0x3F))); _flag_b = (uint32_t)((esi ^ MEM32(ebx + 0x3F)));
    esi = esi ^ MEM32(ebx + 0x3F); /* 0x17027D8D: xor esi, dword ptr [ebx + 0x3f] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* in: no port I/O under Win32 */ /* 0x17027D90: in al, 0x38 */
    RECOMP_ITAIL(0x17027D92u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17027DF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17027DF8u);

L_17027DF8:
    ebp = 0x1717201Eu; /* 0x17027DF8: mov ebp, 0x1717201e */
    SET_HI8(ebx, 0xD1u); /* 0x17027DFD: mov bh, 0xd1 */
    /* cmp MEM8(edx), LO8(ecx) */ /* 0x17027DFF: cmp byte ptr [edx], cl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* 0x17027E01: xlatb  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx * 8 + (-0xC0B334)));
    edi = edi & MEM32(ecx * 8 + (-0xC0B334)); /* 0x17027E02: and edi, dword ptr [ecx*8 - 0xc0b334] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x17027E09u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17027FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17027FACu);

L_17027FAC:
    MEM8(edi) = (uint8_t)(HI8(edx)); /* 0x17027FAC: mov byte ptr [edi], dh */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) & LO8(edx)); /* 0x17027FAE: and byte ptr [edi], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ITAIL(0x17027FB0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17028B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17028B78u);

L_17028B78:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17028B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05001000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x05001000u; /* 0x17028B7A: add eax, 0x5001000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x17028B7F: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001800)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001800) = (uint8_t)(MEM8(0x5001800) + LO8(eax)); /* 0x17028B81: add byte ptr [0x5001800], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x17028B87: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05001400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x05001400u; /* 0x17028B8A: add eax, 0x5001400 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(ecx)); /* 0x17028B8F: add byte ptr [eax + eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05001C00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x05001C00u; /* 0x17028B92: add eax, 0x5001c00 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17028B97: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001200)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001200) = (uint8_t)(MEM8(0x5001200) + LO8(eax)); /* 0x17028B99: add byte ptr [0x5001200], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x17028B9F: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001A00)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001A00) = (uint8_t)(MEM8(0x5001A00) + LO8(eax)); /* 0x17028BA1: add byte ptr [0x5001a00], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x17028BA7: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001600)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001600) = (uint8_t)(MEM8(0x5001600) + LO8(eax)); /* 0x17028BA9: add byte ptr [0x5001600], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x17028BAF: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001E00)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001E00) = (uint8_t)(MEM8(0x5001E00) + LO8(eax)); /* 0x17028BB1: add byte ptr [0x5001e00], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17028BB7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001100)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001100) = (uint8_t)(MEM8(0x5001100) + LO8(eax)); /* 0x17028BB9: add byte ptr [0x5001100], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x17028BBF: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001900)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001900) = (uint8_t)(MEM8(0x5001900) + LO8(eax)); /* 0x17028BC1: add byte ptr [0x5001900], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x15000500)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x15000500) = (uint8_t)(MEM8(0x15000500) + LO8(eax)); /* 0x17028BC7: add byte ptr [0x15000500], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5000D00)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5000D00) = (uint8_t)(MEM8(0x5000D00) + LO8(eax)); /* 0x17028BCD: add byte ptr [0x5000d00], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3000500)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3000500) = (uint8_t)(MEM8(0x3000500) + LO8(ebx)); /* 0x17028BD3: add byte ptr [0x3000500], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001300)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001300) = (uint8_t)(MEM8(0x5001300) + LO8(eax)); /* 0x17028BD9: add byte ptr [0x5001300], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x17028BDF: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001B00)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001B00) = (uint8_t)(MEM8(0x5001B00) + LO8(eax)); /* 0x17028BE1: add byte ptr [0x5001b00], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x17028BE7: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x5001700)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x5001700) = (uint8_t)(MEM8(0x5001700) + LO8(eax)); /* 0x17028BE9: add byte ptr [0x5001700], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17028BEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x17028BF1: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + eax); /* 0x17028BF3: add eax, dword ptr [esp + eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x06060605u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x06060605u; /* 0x17028BF6: add eax, 0x6060605 */
    _flag_k = FK_ADD;
    PUSH32(esp, _seg_es); /* 0x17028BFB: push es */
    _seg_es = POP32_VAL(esp); /* 0x17028BFC: pop es */
    _seg_es = POP32_VAL(esp); /* 0x17028BFD: pop es */
    _seg_es = POP32_VAL(esp); /* 0x17028BFE: pop es */
    _seg_es = POP32_VAL(esp); /* 0x17028BFF: pop es */
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ecx)); /* 0x17028C00: or byte ptr [eax], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ecx)); /* 0x17028C02: or byte ptr [eax], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ecx)); /* 0x17028C04: or byte ptr [eax], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ecx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ecx)); /* 0x17028C06: or byte ptr [eax], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(ecx) | ecx)); _flag_b = (uint32_t)((MEM32(ecx) | ecx));
    MEM32(ecx) = MEM32(ecx) | ecx; /* 0x17028C08: or dword ptr [ecx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) | ecx)); _flag_b = (uint32_t)((MEM32(ecx) | ecx));
    MEM32(ecx) = MEM32(ecx) | ecx; /* 0x17028C0A: or dword ptr [ecx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) | ecx)); _flag_b = (uint32_t)((MEM32(ecx) | ecx));
    MEM32(ecx) = MEM32(ecx) | ecx; /* 0x17028C0C: or dword ptr [ecx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) | ecx)); _flag_b = (uint32_t)((MEM32(ecx) | ecx));
    MEM32(ecx) = MEM32(ecx) | ecx; /* 0x17028C0E: or dword ptr [ecx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C10: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C12: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C14: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C16: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C18: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C1A: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C1C: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | MEM8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | MEM8(edx)); /* 0x17028C1E: or cl, byte ptr [edx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C20: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C22: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C24: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C26: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C28: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C2A: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C2C: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebx))); _flag_b = (uint32_t)((ecx | MEM32(ebx)));
    ecx = ecx | MEM32(ebx); /* 0x17028C2E: or ecx, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C30: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C32: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C34: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C36: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C38: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C3A: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C3C: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C3E: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C40: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C42: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C44: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C46: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C48: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C4A: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C4C: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xCu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xCu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xCu); /* 0x17028C4E: or al, 0xc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C50: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C55: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C5A: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C5F: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C64: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0D0D0D0Du)); _flag_b = (uint32_t)((eax | 0x0D0D0D0Du));
    eax = eax | 0x0D0D0D0Du; /* 0x17028C69: or eax, 0xd0d0d0d */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x0E0E0E0Du)); _flag_b = (uint32_t)((eax | 0x0E0E0E0Du));
    eax = eax | 0x0E0E0E0Du; /* 0x17028C6E: or eax, 0xe0e0e0d */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, _seg_cs); /* 0x17028C73: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C74: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C75: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C76: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C77: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C78: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C79: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7A: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7B: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7C: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7D: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7E: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C7F: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C80: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C81: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C82: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C83: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C84: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C85: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C86: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C87: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C88: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C89: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8A: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8B: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8C: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8D: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8E: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C8F: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C90: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C91: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C92: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C93: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C94: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C95: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C96: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C97: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C98: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C99: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9A: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9B: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9C: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9D: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9E: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028C9F: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA0: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA1: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA2: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA3: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA4: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA5: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA6: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA7: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA8: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CA9: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAA: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAB: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAC: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAD: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAE: push cs */
    PUSH32(esp, _seg_cs); /* 0x17028CAF: push cs */
    RECOMP_ITAIL(0x17028CB0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1702A830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702A830u);

L_1702A830:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702A830: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702A832: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702A834: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702A836: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702A838: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702A83A: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702A83C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ebx)); /* 0x1702A83E: add byte ptr [edi], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1702A840u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1702B005(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B005u);

L_1702B005:
    edi = edi; /* 0x1702B005: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B007: push ebp */
    ebp = esp; /* 0x1702B008: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1702B00A: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B019; /* 0x1702B00E: jne 0x1702b019 */
L_1702B010:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B010: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001198)); /* 0x1702B013: call dword ptr [0x17001198] */
    RECOMP_FLAGS_IN();
L_1702B019:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B019: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702B01B: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1702B01C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B01D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B025(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B025u);

L_1702B025:
    edi = edi; /* 0x1702B025: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B027: push ebp */
    ebp = esp; /* 0x1702B028: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1702B02A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x1702B02D: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20u */ /* 0x1702B032: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B042; /* 0x1702B035: jne 0x1702b042 */
L_1702B037:
    /* cmp MEM32(ebp + 0xC), 0x1Fu */ /* 0x1702B037: cmp dword ptr [ebp + 0xc], 0x1f */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B042; /* 0x1702B03B: jne 0x1702b042 */
L_1702B03D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B03D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702B03F: inc eax */
    _flag_k = FK_INC;
    goto L_1702B044; /* 0x1702B040: jmp 0x1702b044 */
L_1702B042:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B042: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B044:
    ebp = POP32_VAL(esp); /* 0x1702B044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702B045: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702B04D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B04Du);

L_1702B04D:
    edi = edi; /* 0x1702B04D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B04F: push ebp */
    ebp = esp; /* 0x1702B050: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x140u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x140u; /* 0x1702B052: sub esp, 0x140 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1702B058: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702B059: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1702B05C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B0A1; /* 0x1702B05E: je 0x1702b0a1 */
L_1702B060:
    eax = MEM32(esi); /* 0x1702B060: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x10); /* 0x1702B062: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1702B065: push ecx */
    PUSH32(esp, esi); /* 0x1702B066: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1702B067: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B06A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702B0A1; /* 0x1702B06C: jl 0x1702b0a1 */
L_1702B06E:
    eax = MEM32(esi); /* 0x1702B06E: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x1702B070: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1702B073: push ecx */
    PUSH32(esp, esi); /* 0x1702B074: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1702B075: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B078: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702B0A1; /* 0x1702B07A: jl 0x1702b0a1 */
L_1702B07C:
    eax = MEM32(ebp + 0x8); /* 0x1702B07C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1702B07F: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x140); /* 0x1702B081: lea edx, [ebp - 0x140] */
    PUSH32(esp, edx); /* 0x1702B087: push edx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1702B088: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1702B08B: push dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1702B08E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x1702B08F: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B092: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1702B094: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1702B097: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702B099: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702B09A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1702B09D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B0A5; /* 0x1702B09F: jge 0x1702b0a5 */
L_1702B0A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B0A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702B0C4; /* 0x1702B0A3: jmp 0x1702b0c4 */
L_1702B0A5:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x1702B0A5: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702B0B2; /* 0x1702B0A9: je 0x1702b0b2 */
L_1702B0AB:
    eax = 0x384u; /* 0x1702B0AB: mov eax, 0x384 */
    goto L_1702B0C4; /* 0x1702B0B0: jmp 0x1702b0c4 */
L_1702B0B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B0B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + (-0x84)) */ /* 0x1702B0B4: cmp eax, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x84)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702B0BA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    eax = eax & 0x64u; /* 0x1702B0BC: and eax, 0x64 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2BCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2BCu; /* 0x1702B0BF: add eax, 0x2bc */
    _flag_k = FK_ADD;
L_1702B0C4:
    esi = POP32_VAL(esp); /* 0x1702B0C4: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B0C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B0C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B0CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B0CEu);

L_1702B0CE:
    edi = edi; /* 0x1702B0CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B0D0: push ebp */
    ebp = esp; /* 0x1702B0D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B0D3: push esi */
    esi = ecx; /* 0x1702B0D4: mov esi, ecx */
    RECOMP_CALL(sub_1702C161); /* 0x1702B0D6: call 0x1702c161 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B0DB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B0E8; /* 0x1702B0DF: je 0x1702b0e8 */
L_1702B0E1:
    PUSH32(esp, esi); /* 0x1702B0E1: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B0E2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B0E7: pop ecx */
L_1702B0E8:
    eax = esi; /* 0x1702B0E8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B0EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B0EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B0EC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B0F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B0F4u);

L_1702B0F4:
    edi = edi; /* 0x1702B0F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B0F6: push ebp */
    ebp = esp; /* 0x1702B0F7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B0F9: push esi */
    esi = ecx; /* 0x1702B0FA: mov esi, ecx */
    RECOMP_CALL(sub_1702E068); /* 0x1702B0FC: call 0x1702e068 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B101: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B10E; /* 0x1702B105: je 0x1702b10e */
L_1702B107:
    PUSH32(esp, esi); /* 0x1702B107: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B108: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B10D: pop ecx */
L_1702B10E:
    eax = esi; /* 0x1702B10E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B110: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B111: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B112: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B11A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B11Au);

L_1702B11A:
    edi = edi; /* 0x1702B11A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B11C: push ebp */
    ebp = esp; /* 0x1702B11D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702B11F: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1702B120: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1702B123: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B12E; /* 0x1702B125: jne 0x1702b12e */
L_1702B127:
    eax = 0x8876086Cu; /* 0x1702B127: mov eax, 0x8876086c */
    goto L_1702B17F; /* 0x1702B12C: jmp 0x1702b17f */
L_1702B12E:
    PUSH32(esp, esi); /* 0x1702B12E: push esi */
    PUSH32(esp, 0x584u); /* 0x1702B12F: push 0x584 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B134: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B139: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B13B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B149; /* 0x1702B13C: je 0x1702b149 */
L_1702B13E:
    ecx = eax; /* 0x1702B13E: mov ecx, eax */
    RECOMP_CALL(sub_1702F293); /* 0x1702B140: call 0x1702f293 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B145: mov esi, eax */
    goto L_1702B14B; /* 0x1702B147: jmp 0x1702b14b */
L_1702B149:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B149: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B14B:
    /* test esi, esi */ /* 0x1702B14B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B156; /* 0x1702B14D: jne 0x1702b156 */
L_1702B14F:
    eax = 0x8007000Eu; /* 0x1702B14F: mov eax, 0x8007000e */
    goto L_1702B17E; /* 0x1702B154: jmp 0x1702b17e */
L_1702B156:
    PUSH32(esp, edi); /* 0x1702B156: push edi */
    PUSH32(esp, 1); /* 0x1702B157: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702B159: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1702B15C: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B15E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1702E232); /* 0x1702B161: call 0x1702e232 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B166: mov edi, eax */
    /* test edi, edi */ /* 0x1702B168: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B179; /* 0x1702B16A: jge 0x1702b179 */
L_1702B16C:
    PUSH32(esp, 1); /* 0x1702B16C: push 1 */
    ecx = esi; /* 0x1702B16E: mov ecx, esi */
    RECOMP_CALL(sub_1702B0F4); /* 0x1702B170: call 0x1702b0f4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B175: mov eax, edi */
    goto L_1702B17D; /* 0x1702B177: jmp 0x1702b17d */
L_1702B179:
    MEM32(ebx) = esi; /* 0x1702B179: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B17B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B17D:
    edi = POP32_VAL(esp); /* 0x1702B17D: pop edi */
L_1702B17E:
    esi = POP32_VAL(esp); /* 0x1702B17E: pop esi */
L_1702B17F:
    ebx = POP32_VAL(esp); /* 0x1702B17F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702B180: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B181: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B189(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B189u);

L_1702B189:
    edi = edi; /* 0x1702B189: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B18B: push ebp */
    ebp = esp; /* 0x1702B18C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B18E: push esi */
    esi = ecx; /* 0x1702B18F: mov esi, ecx */
    RECOMP_CALL(sub_17031F67); /* 0x1702B191: call 0x17031f67 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B196: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B1A3; /* 0x1702B19A: je 0x1702b1a3 */
L_1702B19C:
    PUSH32(esp, esi); /* 0x1702B19C: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B19D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B1A2: pop ecx */
L_1702B1A3:
    eax = esi; /* 0x1702B1A3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B1A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B1A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B1A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B1AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B1AFu);

L_1702B1AF:
    edi = edi; /* 0x1702B1AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B1B1: push ebp */
    ebp = esp; /* 0x1702B1B2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B1B4: push esi */
    esi = ecx; /* 0x1702B1B5: mov esi, ecx */
    RECOMP_CALL(sub_170327C8); /* 0x1702B1B7: call 0x170327c8 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B1BC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B1C9; /* 0x1702B1C0: je 0x1702b1c9 */
L_1702B1C2:
    PUSH32(esp, esi); /* 0x1702B1C2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B1C3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B1C8: pop ecx */
L_1702B1C9:
    eax = esi; /* 0x1702B1C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B1CB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B1CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B1CD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B1D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B1D5u);

L_1702B1D5:
    edi = edi; /* 0x1702B1D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B1D7: push ebp */
    ebp = esp; /* 0x1702B1D8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B1DA: push esi */
    esi = ecx; /* 0x1702B1DB: mov esi, ecx */
    RECOMP_CALL(sub_17034186); /* 0x1702B1DD: call 0x17034186 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B1E2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B1EF; /* 0x1702B1E6: je 0x1702b1ef */
L_1702B1E8:
    PUSH32(esp, esi); /* 0x1702B1E8: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B1E9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B1EE: pop ecx */
L_1702B1EF:
    eax = esi; /* 0x1702B1EF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B1F1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B1F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B1F3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B1FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B1FBu);

L_1702B1FB:
    edi = edi; /* 0x1702B1FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B1FD: push ebp */
    ebp = esp; /* 0x1702B1FE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x1702B200: sub esp, 0x98 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x1723C8A0), 0 */ /* 0x1702B206: cmp dword ptr [0x1723c8a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C8A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1702B20D: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702B212: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702B21E; /* 0x1702B215: je 0x1702b21e */
L_1702B217:
    eax = MEM32(0x1723C89C); /* 0x1702B217: mov eax, dword ptr [0x1723c89c] */
    goto L_1702B250; /* 0x1702B21C: jmp 0x1702b250 */
L_1702B21E:
    eax = ebp + (-0x98); /* 0x1702B21E: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1702B224: push eax */
    MEM32(0x1723C8A0) = 1; /* 0x1702B225: mov dword ptr [0x1723c8a0], 1 */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x1702B22F: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x1700119C)); /* 0x1702B239: call dword ptr [0x1700119c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B23F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x1702B241: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1702B248: sete al */
    MEM32(0x1723C89C) = eax; /* 0x1702B24B: mov dword ptr [0x1723c89c], eax */
L_1702B250:
    ecx = MEM32(ebp + (-0x4)); /* 0x1702B250: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x1702B253: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B258: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702B259: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702B25F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B25Fu);

L_1702B25F:
    edi = edi; /* 0x1702B25F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B261: push ebp */
    ebp = esp; /* 0x1702B262: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B264: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1702B266: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B272; /* 0x1702B269: jne 0x1702b272 */
L_1702B26B:
    eax = 0x80070057u; /* 0x1702B26B: mov eax, 0x80070057 */
    goto L_1702B298; /* 0x1702B270: jmp 0x1702b298 */
L_1702B272:
    edx = MEM32(ebp + 0x8); /* 0x1702B272: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702B275: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1702B276: mov esi, dword ptr [ebp + 0x10] */
L_1702B279:
    SET_LO8(ecx, MEM8(esi)); /* 0x1702B279: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1702B27B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B288; /* 0x1702B27D: je 0x1702b288 */
L_1702B27F:
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x1702B27F: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1702B281: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702B282: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1702B283: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1702B279; /* 0x1702B286: jne 0x1702b279 */
L_1702B288:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1702B288: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1702B28C: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B295; /* 0x1702B28D: jne 0x1702b295 */
L_1702B28F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1702B28F: dec edx */
    _flag_k = FK_DEC;
    eax = 0x8007007Au; /* 0x1702B290: mov eax, 0x8007007a */
L_1702B295:
    MEM8(edx) = (uint8_t)(0); /* 0x1702B295: mov byte ptr [edx], 0 */
L_1702B298:
    ebp = POP32_VAL(esp); /* 0x1702B298: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B299: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B2A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B2A1u);

L_1702B2A1:
    edi = edi; /* 0x1702B2A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B2A3: push ebp */
    ebp = esp; /* 0x1702B2A4: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B2A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1702B2A8: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B2B4; /* 0x1702B2AB: jne 0x1702b2b4 */
L_1702B2AD:
    eax = 0x80070057u; /* 0x1702B2AD: mov eax, 0x80070057 */
    goto L_1702B2E1; /* 0x1702B2B2: jmp 0x1702b2e1 */
L_1702B2B4:
    edx = MEM32(ebp + 0x8); /* 0x1702B2B4: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702B2B7: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1702B2B8: mov esi, dword ptr [ebp + 0x10] */
L_1702B2BB:
    SET_LO16(ecx, MEM16(esi)); /* 0x1702B2BB: mov cx, word ptr [esi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1702B2BE: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B2CF; /* 0x1702B2C1: je 0x1702b2cf */
L_1702B2C3:
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1702B2C3: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1702B2C6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1702B2C7: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702B2C8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702B2C9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1702B2CA: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1702B2BB; /* 0x1702B2CD: jne 0x1702b2bb */
L_1702B2CF:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1702B2CF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1702B2D3: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B2DD; /* 0x1702B2D4: jne 0x1702b2dd */
L_1702B2D6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1702B2D6: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1702B2D7: dec edx */
    _flag_k = FK_DEC;
    eax = 0x8007007Au; /* 0x1702B2D8: mov eax, 0x8007007a */
L_1702B2DD:
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) & 0); /* 0x1702B2DD: and word ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1702B2E1:
    ebp = POP32_VAL(esp); /* 0x1702B2E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B2E2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B2EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B2EAu);

L_1702B2EA:
    edi = edi; /* 0x1702B2EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B2EC: push ebp */
    ebp = esp; /* 0x1702B2ED: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1702B2EF: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B2FC; /* 0x1702B2F3: jne 0x1702b2fc */
L_1702B2F5:
    eax = 0x8876086Cu; /* 0x1702B2F5: mov eax, 0x8876086c */
    goto L_1702B358; /* 0x1702B2FA: jmp 0x1702b358 */
L_1702B2FC:
    PUSH32(esp, ebx); /* 0x1702B2FC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702B2FD: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702B300: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B30B; /* 0x1702B302: jne 0x1702b30b */
L_1702B304:
    eax = 0x8876086Cu; /* 0x1702B304: mov eax, 0x8876086c */
    goto L_1702B357; /* 0x1702B309: jmp 0x1702b357 */
L_1702B30B:
    PUSH32(esp, esi); /* 0x1702B30B: push esi */
    PUSH32(esp, 0xF0u); /* 0x1702B30C: push 0xf0 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B311: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B318: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B326; /* 0x1702B319: je 0x1702b326 */
L_1702B31B:
    ecx = eax; /* 0x1702B31B: mov ecx, eax */
    RECOMP_CALL(sub_1702D934); /* 0x1702B31D: call 0x1702d934 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B322: mov esi, eax */
    goto L_1702B328; /* 0x1702B324: jmp 0x1702b328 */
L_1702B326:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B326: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B328:
    /* test esi, esi */ /* 0x1702B328: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B333; /* 0x1702B32A: jne 0x1702b333 */
L_1702B32C:
    eax = 0x8007000Eu; /* 0x1702B32C: mov eax, 0x8007000e */
    goto L_1702B356; /* 0x1702B331: jmp 0x1702b356 */
L_1702B333:
    PUSH32(esp, edi); /* 0x1702B333: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B334: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702B337: mov ecx, esi */
    RECOMP_CALL(sub_1702C2A5); /* 0x1702B339: call 0x1702c2a5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B33E: mov edi, eax */
    /* test edi, edi */ /* 0x1702B340: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B351; /* 0x1702B342: jge 0x1702b351 */
L_1702B344:
    PUSH32(esp, 1); /* 0x1702B344: push 1 */
    ecx = esi; /* 0x1702B346: mov ecx, esi */
    RECOMP_CALL(sub_1702B0CE); /* 0x1702B348: call 0x1702b0ce */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B34D: mov eax, edi */
    goto L_1702B355; /* 0x1702B34F: jmp 0x1702b355 */
L_1702B351:
    MEM32(ebx) = esi; /* 0x1702B351: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B353: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B355:
    edi = POP32_VAL(esp); /* 0x1702B355: pop edi */
L_1702B356:
    esi = POP32_VAL(esp); /* 0x1702B356: pop esi */
L_1702B357:
    ebx = POP32_VAL(esp); /* 0x1702B357: pop ebx */
L_1702B358:
    ebp = POP32_VAL(esp); /* 0x1702B358: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702B359: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702B361(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B361u);

L_1702B361:
    edi = edi; /* 0x1702B361: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B363: push ebp */
    ebp = esp; /* 0x1702B364: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702B366: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1702B367: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1702B36A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B375; /* 0x1702B36C: jne 0x1702b375 */
L_1702B36E:
    eax = 0x8876086Cu; /* 0x1702B36E: mov eax, 0x8876086c */
    goto L_1702B3C6; /* 0x1702B373: jmp 0x1702b3c6 */
L_1702B375:
    PUSH32(esp, esi); /* 0x1702B375: push esi */
    PUSH32(esp, 0x584u); /* 0x1702B376: push 0x584 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B37B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B380: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B382: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B390; /* 0x1702B383: je 0x1702b390 */
L_1702B385:
    ecx = eax; /* 0x1702B385: mov ecx, eax */
    RECOMP_CALL(sub_1702F293); /* 0x1702B387: call 0x1702f293 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B38C: mov esi, eax */
    goto L_1702B392; /* 0x1702B38E: jmp 0x1702b392 */
L_1702B390:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B390: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B392:
    /* test esi, esi */ /* 0x1702B392: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B39D; /* 0x1702B394: jne 0x1702b39d */
L_1702B396:
    eax = 0x8007000Eu; /* 0x1702B396: mov eax, 0x8007000e */
    goto L_1702B3C5; /* 0x1702B39B: jmp 0x1702b3c5 */
L_1702B39D:
    PUSH32(esp, edi); /* 0x1702B39D: push edi */
    PUSH32(esp, 0); /* 0x1702B39E: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702B3A0: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1702B3A3: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B3A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1702E232); /* 0x1702B3A8: call 0x1702e232 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B3AD: mov edi, eax */
    /* test edi, edi */ /* 0x1702B3AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B3C0; /* 0x1702B3B1: jge 0x1702b3c0 */
L_1702B3B3:
    PUSH32(esp, 1); /* 0x1702B3B3: push 1 */
    ecx = esi; /* 0x1702B3B5: mov ecx, esi */
    RECOMP_CALL(sub_1702B0F4); /* 0x1702B3B7: call 0x1702b0f4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B3BC: mov eax, edi */
    goto L_1702B3C4; /* 0x1702B3BE: jmp 0x1702b3c4 */
L_1702B3C0:
    MEM32(ebx) = esi; /* 0x1702B3C0: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B3C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B3C4:
    edi = POP32_VAL(esp); /* 0x1702B3C4: pop edi */
L_1702B3C5:
    esi = POP32_VAL(esp); /* 0x1702B3C5: pop esi */
L_1702B3C6:
    ebx = POP32_VAL(esp); /* 0x1702B3C6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702B3C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B3C8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B3D0u);

L_1702B3D0:
    edi = edi; /* 0x1702B3D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B3D2: push ebp */
    ebp = esp; /* 0x1702B3D3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1702B3D5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B3E2; /* 0x1702B3D9: jne 0x1702b3e2 */
L_1702B3DB:
    eax = 0x8876086Cu; /* 0x1702B3DB: mov eax, 0x8876086c */
    goto L_1702B44A; /* 0x1702B3E0: jmp 0x1702b44a */
L_1702B3E2:
    PUSH32(esp, ebx); /* 0x1702B3E2: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1702B3E3: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x1702B3E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B3F1; /* 0x1702B3E8: jne 0x1702b3f1 */
L_1702B3EA:
    eax = 0x8876086Cu; /* 0x1702B3EA: mov eax, 0x8876086c */
    goto L_1702B449; /* 0x1702B3EF: jmp 0x1702b449 */
L_1702B3F1:
    PUSH32(esp, esi); /* 0x1702B3F1: push esi */
    PUSH32(esp, 0x54u); /* 0x1702B3F2: push 0x54 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B3F4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B3F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B3FB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B409; /* 0x1702B3FC: je 0x1702b409 */
L_1702B3FE:
    ecx = eax; /* 0x1702B3FE: mov ecx, eax */
    RECOMP_CALL(sub_17031FDE); /* 0x1702B400: call 0x17031fde */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B405: mov esi, eax */
    goto L_1702B40B; /* 0x1702B407: jmp 0x1702b40b */
L_1702B409:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B409: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B40B:
    /* test esi, esi */ /* 0x1702B40B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B416; /* 0x1702B40D: jne 0x1702b416 */
L_1702B40F:
    eax = 0x8007000Eu; /* 0x1702B40F: mov eax, 0x8007000e */
    goto L_1702B448; /* 0x1702B414: jmp 0x1702b448 */
L_1702B416:
    PUSH32(esp, edi); /* 0x1702B416: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1702B417: push dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1702B41A: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1702B41C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1702B41F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1702B422: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702B425: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B428: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17031A2E); /* 0x1702B42B: call 0x17031a2e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B430: mov edi, eax */
    /* test edi, edi */ /* 0x1702B432: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B443; /* 0x1702B434: jge 0x1702b443 */
L_1702B436:
    PUSH32(esp, 1); /* 0x1702B436: push 1 */
    ecx = esi; /* 0x1702B438: mov ecx, esi */
    RECOMP_CALL(sub_1702B189); /* 0x1702B43A: call 0x1702b189 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B43F: mov eax, edi */
    goto L_1702B447; /* 0x1702B441: jmp 0x1702b447 */
L_1702B443:
    MEM32(ebx) = esi; /* 0x1702B443: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B445: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B447:
    edi = POP32_VAL(esp); /* 0x1702B447: pop edi */
L_1702B448:
    esi = POP32_VAL(esp); /* 0x1702B448: pop esi */
L_1702B449:
    ebx = POP32_VAL(esp); /* 0x1702B449: pop ebx */
L_1702B44A:
    ebp = POP32_VAL(esp); /* 0x1702B44A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1702B44B: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1702B453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B453u);

L_1702B453:
    edi = edi; /* 0x1702B453: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B455: push ebp */
    ebp = esp; /* 0x1702B456: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1702B458: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B465; /* 0x1702B45C: jne 0x1702b465 */
L_1702B45E:
    eax = 0x8876086Cu; /* 0x1702B45E: mov eax, 0x8876086c */
    goto L_1702B4D0; /* 0x1702B463: jmp 0x1702b4d0 */
L_1702B465:
    PUSH32(esp, ebx); /* 0x1702B465: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1702B466: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x1702B469: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B474; /* 0x1702B46B: jne 0x1702b474 */
L_1702B46D:
    eax = 0x8876086Cu; /* 0x1702B46D: mov eax, 0x8876086c */
    goto L_1702B4CF; /* 0x1702B472: jmp 0x1702b4cf */
L_1702B474:
    PUSH32(esp, esi); /* 0x1702B474: push esi */
    PUSH32(esp, 0x498u); /* 0x1702B475: push 0x498 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B47A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B47F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B481: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B48F; /* 0x1702B482: je 0x1702b48f */
L_1702B484:
    ecx = eax; /* 0x1702B484: mov ecx, eax */
    RECOMP_CALL(sub_17033872); /* 0x1702B486: call 0x17033872 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B48B: mov esi, eax */
    goto L_1702B491; /* 0x1702B48D: jmp 0x1702b491 */
L_1702B48F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B48F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B491:
    /* test esi, esi */ /* 0x1702B491: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B49C; /* 0x1702B493: jne 0x1702b49c */
L_1702B495:
    eax = 0x8007000Eu; /* 0x1702B495: mov eax, 0x8007000e */
    goto L_1702B4CE; /* 0x1702B49A: jmp 0x1702b4ce */
L_1702B49C:
    PUSH32(esp, edi); /* 0x1702B49C: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1702B49D: push dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1702B4A0: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1702B4A2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1702B4A5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1702B4A8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702B4AB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B4AE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17032033); /* 0x1702B4B1: call 0x17032033 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B4B6: mov edi, eax */
    /* test edi, edi */ /* 0x1702B4B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B4C9; /* 0x1702B4BA: jge 0x1702b4c9 */
L_1702B4BC:
    PUSH32(esp, 1); /* 0x1702B4BC: push 1 */
    ecx = esi; /* 0x1702B4BE: mov ecx, esi */
    RECOMP_CALL(sub_1702B1AF); /* 0x1702B4C0: call 0x1702b1af */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B4C5: mov eax, edi */
    goto L_1702B4CD; /* 0x1702B4C7: jmp 0x1702b4cd */
L_1702B4C9:
    MEM32(ebx) = esi; /* 0x1702B4C9: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B4CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B4CD:
    edi = POP32_VAL(esp); /* 0x1702B4CD: pop edi */
L_1702B4CE:
    esi = POP32_VAL(esp); /* 0x1702B4CE: pop esi */
L_1702B4CF:
    ebx = POP32_VAL(esp); /* 0x1702B4CF: pop ebx */
L_1702B4D0:
    ebp = POP32_VAL(esp); /* 0x1702B4D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1702B4D1: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1702B4D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B4D9u);

L_1702B4D9:
    edi = edi; /* 0x1702B4D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B4DB: push ebp */
    ebp = esp; /* 0x1702B4DC: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1702B4DE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B4EB; /* 0x1702B4E2: jne 0x1702b4eb */
L_1702B4E4:
    eax = 0x8876086Cu; /* 0x1702B4E4: mov eax, 0x8876086c */
    goto L_1702B544; /* 0x1702B4E9: jmp 0x1702b544 */
L_1702B4EB:
    PUSH32(esp, ebx); /* 0x1702B4EB: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702B4EC: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702B4EF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B4FA; /* 0x1702B4F1: jne 0x1702b4fa */
L_1702B4F3:
    eax = 0x8876086Cu; /* 0x1702B4F3: mov eax, 0x8876086c */
    goto L_1702B543; /* 0x1702B4F8: jmp 0x1702b543 */
L_1702B4FA:
    PUSH32(esp, esi); /* 0x1702B4FA: push esi */
    PUSH32(esp, 0x60u); /* 0x1702B4FB: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B4FD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B502: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B504: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B512; /* 0x1702B505: je 0x1702b512 */
L_1702B507:
    ecx = eax; /* 0x1702B507: mov ecx, eax */
    RECOMP_CALL(sub_1703668E); /* 0x1702B509: call 0x1703668e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B50E: mov esi, eax */
    goto L_1702B514; /* 0x1702B510: jmp 0x1702b514 */
L_1702B512:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B512: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B514:
    /* test esi, esi */ /* 0x1702B514: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B51F; /* 0x1702B516: jne 0x1702b51f */
L_1702B518:
    eax = 0x8007000Eu; /* 0x1702B518: mov eax, 0x8007000e */
    goto L_1702B542; /* 0x1702B51D: jmp 0x1702b542 */
L_1702B51F:
    PUSH32(esp, edi); /* 0x1702B51F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B520: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702B523: mov ecx, esi */
    RECOMP_CALL(sub_170341FA); /* 0x1702B525: call 0x170341fa */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B52A: mov edi, eax */
    /* test edi, edi */ /* 0x1702B52C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B53D; /* 0x1702B52E: jge 0x1702b53d */
L_1702B530:
    PUSH32(esp, 1); /* 0x1702B530: push 1 */
    ecx = esi; /* 0x1702B532: mov ecx, esi */
    RECOMP_CALL(sub_1702B1D5); /* 0x1702B534: call 0x1702b1d5 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702B539: mov eax, edi */
    goto L_1702B541; /* 0x1702B53B: jmp 0x1702b541 */
L_1702B53D:
    MEM32(ebx) = esi; /* 0x1702B53D: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B53F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B541:
    edi = POP32_VAL(esp); /* 0x1702B541: pop edi */
L_1702B542:
    esi = POP32_VAL(esp); /* 0x1702B542: pop esi */
L_1702B543:
    ebx = POP32_VAL(esp); /* 0x1702B543: pop ebx */
L_1702B544:
    ebp = POP32_VAL(esp); /* 0x1702B544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702B545: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702B54D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B54Du);

L_1702B54D:
    edi = edi; /* 0x1702B54D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B54F: push ebp */
    ebp = esp; /* 0x1702B550: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1702B552: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1702B555: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1702B55A: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702B55B: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B55E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1702B560: push esi */
    PUSH32(esp, edi); /* 0x1702B561: push edi */
    edx = MEM32(ebp + 0x30); /* 0x1702B562: mov edx, dword ptr [ebp + 0x30] */
    /* test edx, edx */ /* 0x1702B565: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1702B567: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x34); /* 0x1702B56A: mov ebx, dword ptr [ebp + 0x34] */
    PUSH32(esp, 0xEu); /* 0x1702B56D: push 0xe */
    ecx = POP32_VAL(esp); /* 0x1702B56F: pop ecx */
    edi = ebp + (-0x3C); /* 0x1702B570: lea edi, [ebp - 0x3c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1702B573: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x1702B575: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1702B578: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1702B57B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1702B57E: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0x14); /* 0x1702B581: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1702B584: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x1702B587: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1702B58A: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1702B58D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1702B590: mov dword ptr [ebp - 0x2c], eax */
    SET_LO8(eax, MEM8(ebp + 0x20)); /* 0x1702B593: mov al, byte ptr [ebp + 0x20] */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x1702B596: mov byte ptr [ebp - 0x28], al */
    SET_LO8(eax, MEM8(ebp + 0x24)); /* 0x1702B599: mov al, byte ptr [ebp + 0x24] */
    MEM8(ebp + (-0x27)) = (uint8_t)(LO8(eax)); /* 0x1702B59C: mov byte ptr [ebp - 0x27], al */
    SET_LO8(eax, MEM8(ebp + 0x28)); /* 0x1702B59F: mov al, byte ptr [ebp + 0x28] */
    MEM8(ebp + (-0x26)) = (uint8_t)(LO8(eax)); /* 0x1702B5A2: mov byte ptr [ebp - 0x26], al */
    SET_LO8(eax, MEM8(ebp + 0x2C)); /* 0x1702B5A5: mov al, byte ptr [ebp + 0x2c] */
    MEM8(ebp + (-0x25)) = (uint8_t)(LO8(eax)); /* 0x1702B5A8: mov byte ptr [ebp - 0x25], al */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B5B9; /* 0x1702B5AB: je 0x1702b5b9 */
L_1702B5AD:
    PUSH32(esp, edx); /* 0x1702B5AD: push edx */
    PUSH32(esp, 0x20u); /* 0x1702B5AE: push 0x20 */
    eax = ebp + (-0x24); /* 0x1702B5B0: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1702B5B3: push eax */
    RECOMP_CALL(sub_1702B25F); /* 0x1702B5B4: call 0x1702b25f */
    RECOMP_FLAGS_IN();
L_1702B5B9:
    PUSH32(esp, ebx); /* 0x1702B5B9: push ebx */
    eax = ebp + (-0x3C); /* 0x1702B5BA: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1702B5BD: push eax */
    PUSH32(esp, esi); /* 0x1702B5BE: push esi */
    RECOMP_CALL(sub_1702B361); /* 0x1702B5BF: call 0x1702b361 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1702B5C4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1702B5C7: pop edi */
    esi = POP32_VAL(esp); /* 0x1702B5C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702B5C9: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1702B5CA: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B5CF: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1702B5D0: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1702B5D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B5D8u);

L_1702B5D8:
    edi = edi; /* 0x1702B5D8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B5DA: push ebp */
    ebp = esp; /* 0x1702B5DB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1702B5DD: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1702B5E0: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1702B5E5: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702B5E6: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B5E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1702B5EB: push esi */
    PUSH32(esp, edi); /* 0x1702B5EC: push edi */
    edx = MEM32(ebp + 0x30); /* 0x1702B5ED: mov edx, dword ptr [ebp + 0x30] */
    /* test edx, edx */ /* 0x1702B5F0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1702B5F2: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x34); /* 0x1702B5F5: mov ebx, dword ptr [ebp + 0x34] */
    PUSH32(esp, 0x16u); /* 0x1702B5F8: push 0x16 */
    ecx = POP32_VAL(esp); /* 0x1702B5FA: pop ecx */
    edi = ebp + (-0x5C); /* 0x1702B5FB: lea edi, [ebp - 0x5c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1702B5FE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x1702B600: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1702B603: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1702B606: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x58)) = eax; /* 0x1702B609: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + 0x14); /* 0x1702B60C: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x54)) = eax; /* 0x1702B60F: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + 0x18); /* 0x1702B612: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1702B615: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1702B618: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1702B61B: mov dword ptr [ebp - 0x4c], eax */
    SET_LO8(eax, MEM8(ebp + 0x20)); /* 0x1702B61E: mov al, byte ptr [ebp + 0x20] */
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x1702B621: mov byte ptr [ebp - 0x48], al */
    SET_LO8(eax, MEM8(ebp + 0x24)); /* 0x1702B624: mov al, byte ptr [ebp + 0x24] */
    MEM8(ebp + (-0x47)) = (uint8_t)(LO8(eax)); /* 0x1702B627: mov byte ptr [ebp - 0x47], al */
    SET_LO8(eax, MEM8(ebp + 0x28)); /* 0x1702B62A: mov al, byte ptr [ebp + 0x28] */
    MEM8(ebp + (-0x46)) = (uint8_t)(LO8(eax)); /* 0x1702B62D: mov byte ptr [ebp - 0x46], al */
    SET_LO8(eax, MEM8(ebp + 0x2C)); /* 0x1702B630: mov al, byte ptr [ebp + 0x2c] */
    MEM8(ebp + (-0x45)) = (uint8_t)(LO8(eax)); /* 0x1702B633: mov byte ptr [ebp - 0x45], al */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B644; /* 0x1702B636: je 0x1702b644 */
L_1702B638:
    PUSH32(esp, edx); /* 0x1702B638: push edx */
    PUSH32(esp, 0x20u); /* 0x1702B639: push 0x20 */
    eax = ebp + (-0x44); /* 0x1702B63B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1702B63E: push eax */
    RECOMP_CALL(sub_1702B2A1); /* 0x1702B63F: call 0x1702b2a1 */
    RECOMP_FLAGS_IN();
L_1702B644:
    PUSH32(esp, ebx); /* 0x1702B644: push ebx */
    eax = ebp + (-0x5C); /* 0x1702B645: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1702B648: push eax */
    PUSH32(esp, esi); /* 0x1702B649: push esi */
    RECOMP_CALL(sub_1702B11A); /* 0x1702B64A: call 0x1702b11a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1702B64F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1702B652: pop edi */
    esi = POP32_VAL(esp); /* 0x1702B653: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702B654: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1702B655: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B65A: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1702B65B: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1702B663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B663u);

L_1702B663:
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x1702B663: push dword ptr [ecx + 0xc] */
    MEM32(ecx) = 0x17001434u; /* 0x1702B666: mov dword ptr [ecx], 0x17001434 */
    RECOMP_CALL(sub_1721B010); /* 0x1702B66C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B671: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702B672: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702B678(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B678u);

L_1702B678:
    edi = edi; /* 0x1702B678: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B67A: push ebp */
    ebp = esp; /* 0x1702B67B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B67D: push esi */
    PUSH32(esp, edi); /* 0x1702B67E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1702B67F: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1702B682: push edi */
    esi = ecx; /* 0x1702B683: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B685: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B68A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B68C: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x1702B68D: mov dword ptr [esi + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B699; /* 0x1702B690: jne 0x1702b699 */
L_1702B692:
    eax = 0x8007000Eu; /* 0x1702B692: mov eax, 0x8007000e */
    goto L_1702B69E; /* 0x1702B697: jmp 0x1702b69e */
L_1702B699:
    MEM32(esi + 0x8) = edi; /* 0x1702B699: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B69C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B69E:
    edi = POP32_VAL(esp); /* 0x1702B69E: pop edi */
    esi = POP32_VAL(esp); /* 0x1702B69F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B6A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B6A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B6A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B6A9u);

L_1702B6A9:
    edi = edi; /* 0x1702B6A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B6AB: push ebp */
    ebp = esp; /* 0x1702B6AC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B6AE: push esi */
    esi = ecx; /* 0x1702B6AF: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1702B6B1: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1702B6B4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1702B6B9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = eax; /* 0x1702B6BC: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x1702B6BF: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1702B6C2: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x1702B6C3: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B6C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702B6C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B6C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702B6CA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702B6D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B6D2u);

L_1702B6D2:
    edi = edi; /* 0x1702B6D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B6D4: push ebp */
    ebp = esp; /* 0x1702B6D5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1702B6D7: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x1702B6DA: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, 1 */ /* 0x1702B6DD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1702B6E0: push esi */
    esi = eax + (-0x1); /* 0x1702B6E1: lea esi, [eax - 1] */
    MEM32(ecx + 0x4) = esi; /* 0x1702B6E4: mov dword ptr [ecx + 4], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702B6F0; /* 0x1702B6E7: jne 0x1702b6f0 */
L_1702B6E9:
    eax = MEM32(ecx); /* 0x1702B6E9: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1702B6EB: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1702B6ED: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1702B6F0:
    eax = esi; /* 0x1702B6F0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B6F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B6F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B6F4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B6FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B6FCu);

L_1702B6FC:
    edi = edi; /* 0x1702B6FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B6FE: push ebp */
    ebp = esp; /* 0x1702B6FF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702B701: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1702B702: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1702B705: push ebx */
    ebx = ecx; /* 0x1702B706: mov ebx, ecx */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x1702B708: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1702B70B: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702B750; /* 0x1702B70C: jbe 0x1702b750 */
L_1702B70E:
    PUSH32(esp, eax); /* 0x1702B70E: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B70F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B714: mov edi, eax */
    /* test edi, edi */ /* 0x1702B716: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B718: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1702B719: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B725; /* 0x1702B71C: jne 0x1702b725 */
L_1702B71E:
    eax = 0x8007000Eu; /* 0x1702B71E: mov eax, 0x8007000e */
    goto L_1702B752; /* 0x1702B723: jmp 0x1702b752 */
L_1702B725:
    ecx = MEM32(ebx + 0x8); /* 0x1702B725: mov ecx, dword ptr [ebx + 8] */
    eax = ecx; /* 0x1702B728: mov eax, ecx */
    PUSH32(esp, esi); /* 0x1702B72A: push esi */
    esi = MEM32(ebx + 0xC); /* 0x1702B72B: mov esi, dword ptr [ebx + 0xc] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702B72E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702B72E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702B731: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702B733: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702B735: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702B738: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1702B73A: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1702B73D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1702B742: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1702B745: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + 0x8); /* 0x1702B748: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1702B74B: pop ecx */
    MEM32(ebx + 0x8) = eax; /* 0x1702B74C: mov dword ptr [ebx + 8], eax */
    esi = POP32_VAL(esp); /* 0x1702B74F: pop esi */
L_1702B750:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B750: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B752:
    edi = POP32_VAL(esp); /* 0x1702B752: pop edi */
    ebx = POP32_VAL(esp); /* 0x1702B753: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B754: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B755: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B75D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B75Du);

    goto L_1702B75D;
L_1702B663:
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x1702B663: push dword ptr [ecx + 0xc] */
    MEM32(ecx) = 0x17001434u; /* 0x1702B666: mov dword ptr [ecx], 0x17001434 */
    RECOMP_CALL(sub_1721B010); /* 0x1702B66C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B671: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702B672: ret  */
L_1702B75D:
    eax = MEM32(ecx + 0xC); /* 0x1702B75D: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x1702B760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x17001454u; /* 0x1702B762: mov dword ptr [ecx], 0x17001454 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B773; /* 0x1702B768: je 0x1702b773 */
L_1702B76A:
    edx = (uint32_t)MEM8(eax + (-0x1)); /* 0x1702B76A: movzx edx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1702B76E: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ecx + 0xC) = eax; /* 0x1702B770: mov dword ptr [ecx + 0xc], eax */
L_1702B773:
    RECOMP_BACKEDGE();
    goto L_1702B663; /* 0x1702B773: jmp 0x1702b663 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1702B77D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B77Du);

L_1702B77D:
    edi = edi; /* 0x1702B77D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B77F: push ebp */
    ebp = esp; /* 0x1702B780: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B782: push esi */
    esi = ecx; /* 0x1702B783: mov esi, ecx */
    RECOMP_CALL(sub_1702B75D); /* 0x1702B785: call 0x1702b75d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B78A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B797; /* 0x1702B78E: je 0x1702b797 */
L_1702B790:
    PUSH32(esp, esi); /* 0x1702B790: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B791: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B796: pop ecx */
L_1702B797:
    eax = esi; /* 0x1702B797: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B799: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B79A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B79B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B7A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B7A3u);

L_1702B7A3:
    edi = edi; /* 0x1702B7A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B7A5: push ebp */
    ebp = esp; /* 0x1702B7A6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1702B7A8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702B7AB: push esi */
    esi = ecx; /* 0x1702B7AC: mov esi, ecx */
    MEM32(esi + 0x8) = eax; /* 0x1702B7AE: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1702B7B1: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1702B7B4: push eax */
    RECOMP_CALL(sub_1702B678); /* 0x1702B7B5: call 0x1702b678 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702B7D4; /* 0x1702B7BC: jl 0x1702b7d4 */
L_1702B7BE:
    SET_LO8(edx, MEM8(esi + 0xC)); /* 0x1702B7BE: mov dl, byte ptr [esi + 0xc] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x1702B7C1: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, 0x10u); /* 0x1702B7C4: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x1702B7C6: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = (uint32_t)LO8(ecx); /* 0x1702B7C8: movzx edx, cl */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + edx; /* 0x1702B7CB: add dword ptr [esi + 0xc], edx */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x1702B7CE: mov esi, dword ptr [esi + 0xc] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1702B7D1: mov byte ptr [esi - 1], cl */
L_1702B7D4:
    esi = POP32_VAL(esp); /* 0x1702B7D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B7D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B7D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B7DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B7DEu);

L_1702B7DE:
    edi = edi; /* 0x1702B7DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B7E0: push ebp */
    ebp = esp; /* 0x1702B7E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B7E3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B7E4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1702B7E7: mov esi, ecx */
    RECOMP_CALL(sub_1702B678); /* 0x1702B7E9: call 0x1702b678 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B7EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702B802; /* 0x1702B7F0: jl 0x1702b802 */
L_1702B7F2:
    eax = MEM32(esi + 0xC); /* 0x1702B7F2: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1702B7F5: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1702B7F8: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x1702B7FA: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = ecx; /* 0x1702B7FD: mov dword ptr [esi + 0x14], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B800: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B802:
    esi = POP32_VAL(esp); /* 0x1702B802: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B803: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B804: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B80C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B80Cu);

L_1702B80C:
    edi = edi; /* 0x1702B80C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B80E: push ebp */
    ebp = esp; /* 0x1702B80F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1702B811: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1702B814: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1702B817: push ebx */
    PUSH32(esp, esi); /* 0x1702B818: push esi */
    PUSH32(esp, edi); /* 0x1702B819: push edi */
    ebx = ecx; /* 0x1702B81A: mov ebx, ecx */
    esi = eax + 0x1; /* 0x1702B81C: lea esi, [eax + 1] */
L_1702B81F:
    SET_LO8(ecx, MEM8(eax)); /* 0x1702B81F: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702B821: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1702B822: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B81F; /* 0x1702B824: jne 0x1702b81f */
L_1702B826:
    ecx = MEM32(ebx + 0x10); /* 0x1702B826: mov ecx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1702B829: sub eax, esi */
    _flag_k = FK_CMP;
    edi = eax; /* 0x1702B82B: mov edi, eax */
    eax = MEM32(ebx + 0x14); /* 0x1702B82D: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1702B830: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1702B832: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1702B833: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1702B836: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edi; /* 0x1702B838: mov dword ptr [ebp - 0x10], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702B8EE; /* 0x1702B83B: jbe 0x1702b8ee */
L_1702B841:
    esi = MEM32(ebx + 0x8); /* 0x1702B841: mov esi, dword ptr [ebx + 8] */
    fp_push((double)(int32_t)MEM32(ebx + 0x8)); /* 0x1702B844: fild dword ptr [ebx + 8] */
    /* test esi, esi */ /* 0x1702B847: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702B851; /* 0x1702B849: jge 0x1702b851 */
L_1702B84B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702B84B: fadd dword ptr [0x1700142c] */
L_1702B851:
    _st[0] *= (double)*(float*)ADDR(0x17001474); /* 0x1702B851: fmul dword ptr [0x17001474] */
    RECOMP_CALL(sub_1721B050); /* 0x1702B857: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = esi + edi; /* 0x1702B85C: lea ecx, [esi + edi] */
    /* cmp ecx, eax */ /* 0x1702B85F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1702B861: mov dword ptr [ebp - 4], ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1702B869; /* 0x1702B864: ja 0x1702b869 */
L_1702B866:
    MEM32(ebp + (-0x4)) = eax; /* 0x1702B866: mov dword ptr [ebp - 4], eax */
L_1702B869:
    edi = MEM32(ebp + (-0x4)); /* 0x1702B869: mov edi, dword ptr [ebp - 4] */
    eax = edi + 0x3; /* 0x1702B86C: lea eax, [edi + 3] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1702B86F: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1702B86F: shr eax, 2 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1702B872: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1702B872: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1702B875: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B876: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1702B87B: mov edx, eax */
    /* test edx, edx */ /* 0x1702B87D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B87F: pop ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1702B880: mov dword ptr [ebp - 8], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B88F; /* 0x1702B883: jne 0x1702b88f */
L_1702B885:
    eax = 0x8007000Eu; /* 0x1702B885: mov eax, 0x8007000e */
    goto L_1702B91D; /* 0x1702B88A: jmp 0x1702b91d */
L_1702B88F:
    esi = MEM32(ebx + 0x14); /* 0x1702B88F: mov esi, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1702B892: mov ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1702B895: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x8); /* 0x1702B897: add ecx, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1702B89A: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1702B89C: mov eax, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1702B89E: add edx, edi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702B8A0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702B8A0: shr ecx, 2 */
    edi = edx; /* 0x1702B8A3: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702B8A5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702B8A7: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702B8A9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702B8AC: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x1702B8AE: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(ebx + 0xC); /* 0x1702B8B1: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1702B8B4: mov dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0x14); /* 0x1702B8B7: sub edx, dword ptr [ebx + 0x14] */
    _flag_k = FK_CMP;
    goto L_1702B8C8; /* 0x1702B8BA: jmp 0x1702b8c8 */
L_1702B8BC:
    ecx = MEM32(eax); /* 0x1702B8BC: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1702B8BE: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x1702B8C0: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1702B8C2: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1702B8C5: add eax, 4 */
    _flag_k = FK_ADD;
L_1702B8C8:
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x1702B8C8: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702B8BC; /* 0x1702B8CB: jb 0x1702b8bc */
L_1702B8CD:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1702B8CD: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1702B8D0: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1702B8D5: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x10)); /* 0x1702B8D8: mov edi, dword ptr [ebp - 0x10] */
    MEM32(ebx + 0xC) = eax; /* 0x1702B8DB: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1702B8DE: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x8) = eax; /* 0x1702B8E1: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1702B8E4: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x1702B8E7: pop ecx */
    MEM32(ebx + 0x10) = esi; /* 0x1702B8E8: mov dword ptr [ebx + 0x10], esi */
    MEM32(ebx + 0x14) = eax; /* 0x1702B8EB: mov dword ptr [ebx + 0x14], eax */
L_1702B8EE:
    esi = MEM32(ebp + 0x8); /* 0x1702B8EE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702B8F1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1702B8F4: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax; /* 0x1702B8F6: add dword ptr [ebx + 0x14], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x14); /* 0x1702B8F9: mov eax, dword ptr [ebx + 0x14] */
    ecx = edi + 0x1; /* 0x1702B8FC: lea ecx, [edi + 1] */
    edi = eax; /* 0x1702B8FF: mov edi, eax */
    eax = ecx; /* 0x1702B901: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702B903: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702B903: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702B906: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702B908: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702B90A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702B90D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0x10); /* 0x1702B90F: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebx + 0x14); /* 0x1702B912: mov ecx, dword ptr [ebx + 0x14] */
    MEM32(eax) = ecx; /* 0x1702B915: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 4; /* 0x1702B917: add dword ptr [ebx + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B91B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B91D:
    edi = POP32_VAL(esp); /* 0x1702B91D: pop edi */
    esi = POP32_VAL(esp); /* 0x1702B91E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702B91F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702B920: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B921: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B929(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B929u);

L_1702B929:
    edi = edi; /* 0x1702B929: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B92B: push ebp */
    ebp = esp; /* 0x1702B92C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702B92E: push esi */
    esi = ecx; /* 0x1702B92F: mov esi, ecx */
    RECOMP_CALL(sub_1702B663); /* 0x1702B931: call 0x1702b663 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1702B936: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B943; /* 0x1702B93A: je 0x1702b943 */
L_1702B93C:
    PUSH32(esp, esi); /* 0x1702B93C: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1702B93D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702B942: pop ecx */
L_1702B943:
    eax = esi; /* 0x1702B943: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1702B945: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B946: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702B947: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702B94F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B94Fu);

L_1702B94F:
    edi = edi; /* 0x1702B94F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B951: push ebp */
    ebp = esp; /* 0x1702B952: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1702B954: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1702B957: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1702B95A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702B95B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1702B95E: push edi */
    PUSH32(esp, 4); /* 0x1702B95F: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702B961: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1702B962: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702B967: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702B969: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1702B97E; /* 0x1702B96B: je 0x1702b97e */
L_1702B96D:
    esi = MEM32(ebp + 0xC); /* 0x1702B96D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1702B970: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702B972: pop ecx */
    edi = 0x17001CA0u; /* 0x1702B973: mov edi, 0x17001ca0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702B978: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702B97A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1702B98D; /* 0x1702B97C: jne 0x1702b98d */
L_1702B97E:
    ecx = MEM32(ebp + 0x8); /* 0x1702B97E: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1702B981: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1702B983: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1702B985: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1702B986: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702B989: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702B992; /* 0x1702B98B: jmp 0x1702b992 */
L_1702B98D:
    eax = 0x80004002u; /* 0x1702B98D: mov eax, 0x80004002 */
L_1702B992:
    edi = POP32_VAL(esp); /* 0x1702B992: pop edi */
    esi = POP32_VAL(esp); /* 0x1702B993: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702B994: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702B995: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702B99D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B99Du);

L_1702B99D:
    eax = ecx; /* 0x1702B99D: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x1702B99F: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x1702B9A3: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x17001434u; /* 0x1702B9A7: mov dword ptr [eax], 0x17001434 */
    MEM32(eax + 0x4) = 1; /* 0x1702B9AD: mov dword ptr [eax + 4], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702B9B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702B9BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702B9BAu);

L_1702B9BA:
    edi = edi; /* 0x1702B9BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B9BC: push ebp */
    ebp = esp; /* 0x1702B9BD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702B9BF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702B9C0: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702B9C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B9CE; /* 0x1702B9C5: jne 0x1702b9ce */
L_1702B9C7:
    eax = 0x8876086Cu; /* 0x1702B9C7: mov eax, 0x8876086c */
    goto L_1702BA17; /* 0x1702B9CC: jmp 0x1702ba17 */
L_1702B9CE:
    PUSH32(esp, esi); /* 0x1702B9CE: push esi */
    PUSH32(esp, 0x10u); /* 0x1702B9CF: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B9D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B9D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B9D8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B9E6; /* 0x1702B9D9: je 0x1702b9e6 */
L_1702B9DB:
    ecx = eax; /* 0x1702B9DB: mov ecx, eax */
    RECOMP_CALL(sub_1702B99D); /* 0x1702B9DD: call 0x1702b99d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B9E2: mov esi, eax */
    goto L_1702B9E8; /* 0x1702B9E4: jmp 0x1702b9e8 */
L_1702B9E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B9E6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B9E8:
    /* test esi, esi */ /* 0x1702B9E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B9F3; /* 0x1702B9EA: jne 0x1702b9f3 */
L_1702B9EC:
    eax = 0x8007000Eu; /* 0x1702B9EC: mov eax, 0x8007000e */
    goto L_1702BA16; /* 0x1702B9F1: jmp 0x1702ba16 */
L_1702B9F3:
    eax = MEM32(esi); /* 0x1702B9F3: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1702B9F5: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B9F6: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702B9F9: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1702B9FB: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B9FE: mov edi, eax */
    /* test edi, edi */ /* 0x1702BA00: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702BA11; /* 0x1702BA02: jge 0x1702ba11 */
L_1702BA04:
    eax = MEM32(esi); /* 0x1702BA04: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1702BA06: push 1 */
    ecx = esi; /* 0x1702BA08: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1702BA0A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702BA0D: mov eax, edi */
    goto L_1702BA15; /* 0x1702BA0F: jmp 0x1702ba15 */
L_1702BA11:
    MEM32(ebx) = esi; /* 0x1702BA11: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BA13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BA15:
    edi = POP32_VAL(esp); /* 0x1702BA15: pop edi */
L_1702BA16:
    esi = POP32_VAL(esp); /* 0x1702BA16: pop esi */
L_1702BA17:
    ebx = POP32_VAL(esp); /* 0x1702BA17: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702BA18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BA19: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702BA21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BA21u);

L_1702BA21:
    RECOMP_CALL(sub_1702B99D); /* 0x1702BA21: call 0x1702b99d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0; /* 0x1702BA26: and dword ptr [ecx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0; /* 0x1702BA2A: and dword ptr [ecx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x17001478u; /* 0x1702BA2E: mov dword ptr [ecx], 0x17001478 */
    eax = ecx; /* 0x1702BA34: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702BA36: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702BA3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BA3Cu);

L_1702BA3C:
    edi = edi; /* 0x1702BA3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BA3E: push ebp */
    ebp = esp; /* 0x1702BA3F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702BA41: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702BA42: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702BA45: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BA50; /* 0x1702BA47: jne 0x1702ba50 */
L_1702BA49:
    eax = 0x8876086Cu; /* 0x1702BA49: mov eax, 0x8876086c */
    goto L_1702BA99; /* 0x1702BA4E: jmp 0x1702ba99 */
L_1702BA50:
    PUSH32(esp, esi); /* 0x1702BA50: push esi */
    PUSH32(esp, 0x18u); /* 0x1702BA51: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702BA53: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BA58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702BA5A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BA68; /* 0x1702BA5B: je 0x1702ba68 */
L_1702BA5D:
    ecx = eax; /* 0x1702BA5D: mov ecx, eax */
    RECOMP_CALL(sub_1702BA21); /* 0x1702BA5F: call 0x1702ba21 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702BA64: mov esi, eax */
    goto L_1702BA6A; /* 0x1702BA66: jmp 0x1702ba6a */
L_1702BA68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702BA68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BA6A:
    /* test esi, esi */ /* 0x1702BA6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BA75; /* 0x1702BA6C: jne 0x1702ba75 */
L_1702BA6E:
    eax = 0x8007000Eu; /* 0x1702BA6E: mov eax, 0x8007000e */
    goto L_1702BA98; /* 0x1702BA73: jmp 0x1702ba98 */
L_1702BA75:
    eax = MEM32(esi); /* 0x1702BA75: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1702BA77: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BA78: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702BA7B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1702BA7D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702BA80: mov edi, eax */
    /* test edi, edi */ /* 0x1702BA82: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702BA93; /* 0x1702BA84: jge 0x1702ba93 */
L_1702BA86:
    eax = MEM32(esi); /* 0x1702BA86: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1702BA88: push 1 */
    ecx = esi; /* 0x1702BA8A: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1702BA8C: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702BA8F: mov eax, edi */
    goto L_1702BA97; /* 0x1702BA91: jmp 0x1702ba97 */
L_1702BA93:
    MEM32(ebx) = esi; /* 0x1702BA93: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BA95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BA97:
    edi = POP32_VAL(esp); /* 0x1702BA97: pop edi */
L_1702BA98:
    esi = POP32_VAL(esp); /* 0x1702BA98: pop esi */
L_1702BA99:
    ebx = POP32_VAL(esp); /* 0x1702BA99: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702BA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BA9B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702BAA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BAA3u);

    goto L_1702BAA3;
L_1702B9BA:
    edi = edi; /* 0x1702B9BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702B9BC: push ebp */
    ebp = esp; /* 0x1702B9BD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702B9BF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702B9C0: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702B9C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B9CE; /* 0x1702B9C5: jne 0x1702b9ce */
L_1702B9C7:
    eax = 0x8876086Cu; /* 0x1702B9C7: mov eax, 0x8876086c */
    goto L_1702BA17; /* 0x1702B9CC: jmp 0x1702ba17 */
L_1702B9CE:
    PUSH32(esp, esi); /* 0x1702B9CE: push esi */
    PUSH32(esp, 0x10u); /* 0x1702B9CF: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702B9D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702B9D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702B9D8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702B9E6; /* 0x1702B9D9: je 0x1702b9e6 */
L_1702B9DB:
    ecx = eax; /* 0x1702B9DB: mov ecx, eax */
    RECOMP_CALL(sub_1702B99D); /* 0x1702B9DD: call 0x1702b99d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702B9E2: mov esi, eax */
    goto L_1702B9E8; /* 0x1702B9E4: jmp 0x1702b9e8 */
L_1702B9E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702B9E6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702B9E8:
    /* test esi, esi */ /* 0x1702B9E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702B9F3; /* 0x1702B9EA: jne 0x1702b9f3 */
L_1702B9EC:
    eax = 0x8007000Eu; /* 0x1702B9EC: mov eax, 0x8007000e */
    goto L_1702BA16; /* 0x1702B9F1: jmp 0x1702ba16 */
L_1702B9F3:
    eax = MEM32(esi); /* 0x1702B9F3: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1702B9F5: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702B9F6: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702B9F9: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1702B9FB: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702B9FE: mov edi, eax */
    /* test edi, edi */ /* 0x1702BA00: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702BA11; /* 0x1702BA02: jge 0x1702ba11 */
L_1702BA04:
    eax = MEM32(esi); /* 0x1702BA04: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1702BA06: push 1 */
    ecx = esi; /* 0x1702BA08: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1702BA0A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702BA0D: mov eax, edi */
    goto L_1702BA15; /* 0x1702BA0F: jmp 0x1702ba15 */
L_1702BA11:
    MEM32(ebx) = esi; /* 0x1702BA11: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BA13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BA15:
    edi = POP32_VAL(esp); /* 0x1702BA15: pop edi */
L_1702BA16:
    esi = POP32_VAL(esp); /* 0x1702BA16: pop esi */
L_1702BA17:
    ebx = POP32_VAL(esp); /* 0x1702BA17: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702BA18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BA19: ret 8 */
L_1702BAA3:
    edi = edi; /* 0x1702BAA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BAA5: push ebp */
    ebp = esp; /* 0x1702BAA6: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1702BAA8: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1702B9BA; /* 0x1702BAA9: jmp 0x1702b9ba */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1702BAB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BAB3u);

L_1702BAB3:
    edi = edi; /* 0x1702BAB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BAB5: push ebp */
    ebp = esp; /* 0x1702BAB6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702BAB8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1702BAB9: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1702BABC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BAC7; /* 0x1702BABE: jne 0x1702bac7 */
L_1702BAC0:
    eax = 0x8876086Cu; /* 0x1702BAC0: mov eax, 0x8876086c */
    goto L_1702BB16; /* 0x1702BAC5: jmp 0x1702bb16 */
L_1702BAC7:
    PUSH32(esp, esi); /* 0x1702BAC7: push esi */
    PUSH32(esp, 0x10u); /* 0x1702BAC8: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x1702BACA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BACF: pop ecx */
    ecx = eax; /* 0x1702BAD0: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1702BAD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BAE5; /* 0x1702BAD4: je 0x1702bae5 */
L_1702BAD6:
    RECOMP_CALL(sub_1702B99D); /* 0x1702BAD6: call 0x1702b99d */
    RECOMP_FLAGS_IN();
    MEM32(ecx) = 0x17001454u; /* 0x1702BADB: mov dword ptr [ecx], 0x17001454 */
    esi = ecx; /* 0x1702BAE1: mov esi, ecx */
    goto L_1702BAE7; /* 0x1702BAE3: jmp 0x1702bae7 */
L_1702BAE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702BAE5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BAE7:
    /* test esi, esi */ /* 0x1702BAE7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BAF2; /* 0x1702BAE9: jne 0x1702baf2 */
L_1702BAEB:
    eax = 0x8007000Eu; /* 0x1702BAEB: mov eax, 0x8007000e */
    goto L_1702BB15; /* 0x1702BAF0: jmp 0x1702bb15 */
L_1702BAF2:
    eax = MEM32(esi); /* 0x1702BAF2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1702BAF4: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BAF5: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1702BAF8: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1702BAFA: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702BAFD: mov edi, eax */
    /* test edi, edi */ /* 0x1702BAFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702BB10; /* 0x1702BB01: jge 0x1702bb10 */
L_1702BB03:
    eax = MEM32(esi); /* 0x1702BB03: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1702BB05: push 1 */
    ecx = esi; /* 0x1702BB07: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1702BB09: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1702BB0C: mov eax, edi */
    goto L_1702BB14; /* 0x1702BB0E: jmp 0x1702bb14 */
L_1702BB10:
    MEM32(ebx) = esi; /* 0x1702BB10: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BB12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BB14:
    edi = POP32_VAL(esp); /* 0x1702BB14: pop edi */
L_1702BB15:
    esi = POP32_VAL(esp); /* 0x1702BB15: pop esi */
L_1702BB16:
    ebx = POP32_VAL(esp); /* 0x1702BB16: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702BB17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BB18: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702BB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BB20u);

L_1702BB20:
    edi = edi; /* 0x1702BB20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BB22: push ebp */
    ebp = esp; /* 0x1702BB23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702BB25: push ecx */
    /* cmp MEM32(0x1723C8AC), 0 */ /* 0x1702BB26: cmp dword ptr [0x1723c8ac], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C8AC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C8A4); /* 0x1702BB2D: mov eax, dword ptr [0x1723c8a4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702BB32: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1702BB35: mov eax, dword ptr [ebp + 8] */
    MEM32(0x1723C8A4) = eax; /* 0x1702BB38: mov dword ptr [0x1723c8a4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBA2; /* 0x1702BB3D: jne 0x1702bba2 */
L_1702BB3F:
    /* cmp MEM32(0x1723C8A8), 0 */ /* 0x1702BB3F: cmp dword ptr [0x1723c8a8], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C8A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBA2; /* 0x1702BB46: jne 0x1702bba2 */
L_1702BB48:
    PUSH32(esp, ebx); /* 0x1702BB48: push ebx */
    PUSH32(esp, esi); /* 0x1702BB49: push esi */
    PUSH32(esp, edi); /* 0x1702BB4A: push edi */
    esi = 0x170014E4u; /* 0x1702BB4B: mov esi, 0x170014e4 */
    PUSH32(esp, esi); /* 0x1702BB50: push esi */
    RECOMP_ICALL(MEM32(0x17001128)); /* 0x1702BB51: call dword ptr [0x17001128] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(0x170011A4); /* 0x1702BB59: mov ebx, dword ptr [0x170011a4] */
    edi = MEM32(0x170011A0); /* 0x1702BB5F: mov edi, dword ptr [0x170011a0] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB7B; /* 0x1702BB65: je 0x1702bb7b */
L_1702BB67:
    PUSH32(esp, esi); /* 0x1702BB67: push esi */
    RECOMP_ICALL(edi); /* 0x1702BB68: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB7B; /* 0x1702BB6C: je 0x1702bb7b */
L_1702BB6E:
    PUSH32(esp, 0x170014D4u); /* 0x1702BB6E: push 0x170014d4 */
    PUSH32(esp, eax); /* 0x1702BB73: push eax */
    RECOMP_ICALL(ebx); /* 0x1702BB74: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x1723C8AC) = eax; /* 0x1702BB76: mov dword ptr [0x1723c8ac], eax */
L_1702BB7B:
    esi = 0x170014C8u; /* 0x1702BB7B: mov esi, 0x170014c8 */
    PUSH32(esp, esi); /* 0x1702BB80: push esi */
    RECOMP_ICALL(MEM32(0x17001128)); /* 0x1702BB81: call dword ptr [0x17001128] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB9F; /* 0x1702BB89: je 0x1702bb9f */
L_1702BB8B:
    PUSH32(esp, esi); /* 0x1702BB8B: push esi */
    RECOMP_ICALL(edi); /* 0x1702BB8C: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB9F; /* 0x1702BB90: je 0x1702bb9f */
L_1702BB92:
    PUSH32(esp, 0x170014D4u); /* 0x1702BB92: push 0x170014d4 */
    PUSH32(esp, eax); /* 0x1702BB97: push eax */
    RECOMP_ICALL(ebx); /* 0x1702BB98: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x1723C8A8) = eax; /* 0x1702BB9A: mov dword ptr [0x1723c8a8], eax */
L_1702BB9F:
    edi = POP32_VAL(esp); /* 0x1702BB9F: pop edi */
    esi = POP32_VAL(esp); /* 0x1702BBA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702BBA1: pop ebx */
L_1702BBA2:
    /* cmp MEM32(0x17224000), 0xFFFFFFFFu */ /* 0x1702BBA2: cmp dword ptr [0x17224000], -1 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBDB; /* 0x1702BBA9: jne 0x1702bbdb */
L_1702BBAB:
    PUSH32(esp, 4); /* 0x1702BBAB: push 4 */
    PUSH32(esp, 0x17224000u); /* 0x1702BBAD: push 0x17224000 */
    PUSH32(esp, 0x170014B8u); /* 0x1702BBB2: push 0x170014b8 */
    PUSH32(esp, 4); /* 0x1702BBB7: push 4 */
    RECOMP_CALL(sub_1704A239); /* 0x1702BBB9: call 0x1704a239 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BBBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BBC8; /* 0x1702BBC0: jne 0x1702bbc8 */
L_1702BBC2:
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(eax);
    MEM32(0x17224000) = MEM32(0x17224000) & eax; /* 0x1702BBC2: and dword ptr [0x17224000], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BBC8:
    /* cmp MEM32(0x17224000), 0 */ /* 0x1702BBC8: cmp dword ptr [0x17224000], 0 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BBE4; /* 0x1702BBCF: je 0x1702bbe4 */
L_1702BBD1:
    MEM32(0x17224000) = 1; /* 0x1702BBD1: mov dword ptr [0x17224000], 1 */
L_1702BBDB:
    /* cmp MEM32(0x17224000), 0 */ /* 0x1702BBDB: cmp dword ptr [0x17224000], 0 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BC02; /* 0x1702BBE2: jne 0x1702bc02 */
L_1702BBE4:
    eax = MEM32(0x1723C8AC); /* 0x1702BBE4: mov eax, dword ptr [0x1723c8ac] */
    /* test eax, eax */ /* 0x1702BBE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BBF3; /* 0x1702BBEB: je 0x1702bbf3 */
L_1702BBED:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BBED: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1702BBF0: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BBF2: pop ecx */
L_1702BBF3:
    eax = MEM32(0x1723C8A8); /* 0x1702BBF3: mov eax, dword ptr [0x1723c8a8] */
    /* test eax, eax */ /* 0x1702BBF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC02; /* 0x1702BBFA: je 0x1702bc02 */
L_1702BBFC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BBFC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1702BBFF: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BC01: pop ecx */
L_1702BC02:
    eax = MEM32(ebp + (-0x4)); /* 0x1702BC02: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702BC05: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BC06: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702BC0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BC0Eu);

    goto L_1702BC0E;
L_1702BB20:
    edi = edi; /* 0x1702BB20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BB22: push ebp */
    ebp = esp; /* 0x1702BB23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702BB25: push ecx */
    /* cmp MEM32(0x1723C8AC), 0 */ /* 0x1702BB26: cmp dword ptr [0x1723c8ac], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C8AC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C8A4); /* 0x1702BB2D: mov eax, dword ptr [0x1723c8a4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702BB32: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1702BB35: mov eax, dword ptr [ebp + 8] */
    MEM32(0x1723C8A4) = eax; /* 0x1702BB38: mov dword ptr [0x1723c8a4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBA2; /* 0x1702BB3D: jne 0x1702bba2 */
L_1702BB3F:
    /* cmp MEM32(0x1723C8A8), 0 */ /* 0x1702BB3F: cmp dword ptr [0x1723c8a8], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C8A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBA2; /* 0x1702BB46: jne 0x1702bba2 */
L_1702BB48:
    PUSH32(esp, ebx); /* 0x1702BB48: push ebx */
    PUSH32(esp, esi); /* 0x1702BB49: push esi */
    PUSH32(esp, edi); /* 0x1702BB4A: push edi */
    esi = 0x170014E4u; /* 0x1702BB4B: mov esi, 0x170014e4 */
    PUSH32(esp, esi); /* 0x1702BB50: push esi */
    RECOMP_ICALL(MEM32(0x17001128)); /* 0x1702BB51: call dword ptr [0x17001128] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(0x170011A4); /* 0x1702BB59: mov ebx, dword ptr [0x170011a4] */
    edi = MEM32(0x170011A0); /* 0x1702BB5F: mov edi, dword ptr [0x170011a0] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB7B; /* 0x1702BB65: je 0x1702bb7b */
L_1702BB67:
    PUSH32(esp, esi); /* 0x1702BB67: push esi */
    RECOMP_ICALL(edi); /* 0x1702BB68: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB7B; /* 0x1702BB6C: je 0x1702bb7b */
L_1702BB6E:
    PUSH32(esp, 0x170014D4u); /* 0x1702BB6E: push 0x170014d4 */
    PUSH32(esp, eax); /* 0x1702BB73: push eax */
    RECOMP_ICALL(ebx); /* 0x1702BB74: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x1723C8AC) = eax; /* 0x1702BB76: mov dword ptr [0x1723c8ac], eax */
L_1702BB7B:
    esi = 0x170014C8u; /* 0x1702BB7B: mov esi, 0x170014c8 */
    PUSH32(esp, esi); /* 0x1702BB80: push esi */
    RECOMP_ICALL(MEM32(0x17001128)); /* 0x1702BB81: call dword ptr [0x17001128] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB9F; /* 0x1702BB89: je 0x1702bb9f */
L_1702BB8B:
    PUSH32(esp, esi); /* 0x1702BB8B: push esi */
    RECOMP_ICALL(edi); /* 0x1702BB8C: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BB8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BB9F; /* 0x1702BB90: je 0x1702bb9f */
L_1702BB92:
    PUSH32(esp, 0x170014D4u); /* 0x1702BB92: push 0x170014d4 */
    PUSH32(esp, eax); /* 0x1702BB97: push eax */
    RECOMP_ICALL(ebx); /* 0x1702BB98: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x1723C8A8) = eax; /* 0x1702BB9A: mov dword ptr [0x1723c8a8], eax */
L_1702BB9F:
    edi = POP32_VAL(esp); /* 0x1702BB9F: pop edi */
    esi = POP32_VAL(esp); /* 0x1702BBA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702BBA1: pop ebx */
L_1702BBA2:
    /* cmp MEM32(0x17224000), 0xFFFFFFFFu */ /* 0x1702BBA2: cmp dword ptr [0x17224000], -1 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BBDB; /* 0x1702BBA9: jne 0x1702bbdb */
L_1702BBAB:
    PUSH32(esp, 4); /* 0x1702BBAB: push 4 */
    PUSH32(esp, 0x17224000u); /* 0x1702BBAD: push 0x17224000 */
    PUSH32(esp, 0x170014B8u); /* 0x1702BBB2: push 0x170014b8 */
    PUSH32(esp, 4); /* 0x1702BBB7: push 4 */
    RECOMP_CALL(sub_1704A239); /* 0x1702BBB9: call 0x1704a239 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BBBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BBC8; /* 0x1702BBC0: jne 0x1702bbc8 */
L_1702BBC2:
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(eax);
    MEM32(0x17224000) = MEM32(0x17224000) & eax; /* 0x1702BBC2: and dword ptr [0x17224000], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BBC8:
    /* cmp MEM32(0x17224000), 0 */ /* 0x1702BBC8: cmp dword ptr [0x17224000], 0 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BBE4; /* 0x1702BBCF: je 0x1702bbe4 */
L_1702BBD1:
    MEM32(0x17224000) = 1; /* 0x1702BBD1: mov dword ptr [0x17224000], 1 */
L_1702BBDB:
    /* cmp MEM32(0x17224000), 0 */ /* 0x1702BBDB: cmp dword ptr [0x17224000], 0 */
    _flag_a = (uint32_t)(MEM32(0x17224000)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BC02; /* 0x1702BBE2: jne 0x1702bc02 */
L_1702BBE4:
    eax = MEM32(0x1723C8AC); /* 0x1702BBE4: mov eax, dword ptr [0x1723c8ac] */
    /* test eax, eax */ /* 0x1702BBE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BBF3; /* 0x1702BBEB: je 0x1702bbf3 */
L_1702BBED:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BBED: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1702BBF0: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BBF2: pop ecx */
L_1702BBF3:
    eax = MEM32(0x1723C8A8); /* 0x1702BBF3: mov eax, dword ptr [0x1723c8a8] */
    /* test eax, eax */ /* 0x1702BBF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC02; /* 0x1702BBFA: je 0x1702bc02 */
L_1702BBFC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702BBFC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1702BBFF: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BC01: pop ecx */
L_1702BC02:
    eax = MEM32(ebp + (-0x4)); /* 0x1702BC02: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702BC05: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BC06: ret 4 */
L_1702BC0E:
    edi = edi; /* 0x1702BC0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BC10: push ebp */
    ebp = esp; /* 0x1702BC11: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1702BC13: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1702BB20; /* 0x1702BC14: jmp 0x1702bb20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1702BC1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BC1Eu);

L_1702BC1E:
    edi = edi; /* 0x1702BC1E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BC20: push ebp */
    ebp = esp; /* 0x1702BC21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702BC23: push ecx */
    PUSH32(esp, ebx); /* 0x1702BC24: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1702BC25: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1723C8B0), ebx */ /* 0x1702BC27: cmp dword ptr [0x1723c8b0], ebx */
    _flag_a = (uint32_t)(MEM32(0x1723C8B0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BCAA; /* 0x1702BC2D: jne 0x1702bcaa */
L_1702BC2F:
    PUSH32(esp, esi); /* 0x1702BC2F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702BC30: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1702BC32: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702BC33: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x1702BC34: push ebx */
    MEM32(0x1723C8B0) = esi; /* 0x1702BC35: mov dword ptr [0x1723c8b0], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1702BC3B: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1702BC3E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1702BC43: push ebx */
    edi = eax; /* 0x1702BC44: mov edi, eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702BC46: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1702BC4B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702BC4D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1702BC4E: pop ecx */
    ebx = eax; /* 0x1702BC4F: mov ebx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC5B; /* 0x1702BC51: je 0x1702bc5b */
L_1702BC53:
    /* test ebx, ebx */ /* 0x1702BC53: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC5B; /* 0x1702BC55: je 0x1702bc5b */
L_1702BC57:
    /* cmp edi, ebx */ /* 0x1702BC57: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BC5E; /* 0x1702BC59: jne 0x1702bc5e */
L_1702BC5B:
    MEM32(ebp + (-0x4)) = esi; /* 0x1702BC5B: mov dword ptr [ebp - 4], esi */
L_1702BC5E:
    /* test edi, edi */ /* 0x1702BC5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC69; /* 0x1702BC60: je 0x1702bc69 */
L_1702BC62:
    PUSH32(esp, edi); /* 0x1702BC62: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1702BC63: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BC68: pop ecx */
L_1702BC69:
    /* test ebx, ebx */ /* 0x1702BC69: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BC78; /* 0x1702BC6B: je 0x1702bc78 */
L_1702BC6D:
    /* cmp ebx, edi */ /* 0x1702BC6D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BC78; /* 0x1702BC6F: je 0x1702bc78 */
L_1702BC71:
    PUSH32(esp, ebx); /* 0x1702BC71: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1702BC72: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702BC77: pop ecx */
L_1702BC78:
    PUSH32(esp, 0); /* 0x1702BC78: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1702BC7A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1702BC7F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1702BC83: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BCA8; /* 0x1702BC84: je 0x1702bca8 */
L_1702BC86:
    esi = MEM32(0x17001124); /* 0x1702BC86: mov esi, dword ptr [0x17001124] */
    PUSH32(esp, 0x170015D8u); /* 0x1702BC8C: push 0x170015d8 */
    RECOMP_ICALL(esi); /* 0x1702BC91: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17001578u); /* 0x1702BC93: push 0x17001578 */
    RECOMP_ICALL(esi); /* 0x1702BC98: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17001520u); /* 0x1702BC9A: push 0x17001520 */
    RECOMP_ICALL(esi); /* 0x1702BC9F: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170014F0u); /* 0x1702BCA1: push 0x170014f0 */
    RECOMP_ICALL(esi); /* 0x1702BCA6: call esi */
    RECOMP_FLAGS_IN();
L_1702BCA8:
    edi = POP32_VAL(esp); /* 0x1702BCA8: pop edi */
    esi = POP32_VAL(esp); /* 0x1702BCA9: pop esi */
L_1702BCAA:
    ebx = POP32_VAL(esp); /* 0x1702BCAA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702BCAB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702BCAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702BCB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BCB2u);

L_1702BCB2:
    edi = edi; /* 0x1702BCB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BCB4: push ebp */
    ebp = esp; /* 0x1702BCB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702BCB7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702BCB8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1702BCBB: push edi */
    PUSH32(esp, 4); /* 0x1702BCBC: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702BCBE: pop ecx */
    edi = 0x17001C90u; /* 0x1702BCBF: mov edi, 0x17001c90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BCC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702BCC6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1702BCDB; /* 0x1702BCC8: je 0x1702bcdb */
L_1702BCCA:
    esi = MEM32(ebp + 0xC); /* 0x1702BCCA: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1702BCCD: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702BCCF: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1702BCD0: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BCD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702BCD7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1702BCED; /* 0x1702BCD9: jne 0x1702bced */
L_1702BCDB:
    eax = MEM32(ebp + 0x8); /* 0x1702BCDB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1702BCDE: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1702BCE1: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x1702BCE3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BCE5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1702BCE6: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BCE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702BCF8; /* 0x1702BCEB: jmp 0x1702bcf8 */
L_1702BCED:
    eax = MEM32(ebp + 0x10); /* 0x1702BCED: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1702BCF0: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80004002u; /* 0x1702BCF3: mov eax, 0x80004002 */
L_1702BCF8:
    edi = POP32_VAL(esp); /* 0x1702BCF8: pop edi */
    esi = POP32_VAL(esp); /* 0x1702BCF9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702BCFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702BCFB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702BD03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BD03u);

L_1702BD03:
    edi = edi; /* 0x1702BD03: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BD05: push ebp */
    ebp = esp; /* 0x1702BD06: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1702BD08: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1702BD0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BD16; /* 0x1702BD0D: jne 0x1702bd16 */
L_1702BD0F:
    eax = 0x8876086Cu; /* 0x1702BD0F: mov eax, 0x8876086c */
    goto L_1702BD29; /* 0x1702BD14: jmp 0x1702bd29 */
L_1702BD16:
    eax = MEM32(ebp + 0x8); /* 0x1702BD16: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0xC); /* 0x1702BD19: mov edx, dword ptr [eax + 0xc] */
    MEM32(ecx) = edx; /* 0x1702BD1C: mov dword ptr [ecx], edx */
    eax = MEM32(eax + 0xC); /* 0x1702BD1E: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1702BD21: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BD23: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1702BD24: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BD27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BD29:
    ebp = POP32_VAL(esp); /* 0x1702BD29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BD2A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702BD32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BD32u);

L_1702BD32:
    edi = edi; /* 0x1702BD32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BD34: push ebp */
    ebp = esp; /* 0x1702BD35: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1702BD37: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1702BD38: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1702BD3B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BD46; /* 0x1702BD3D: jne 0x1702bd46 */
L_1702BD3F:
    eax = 0x8876086Cu; /* 0x1702BD3F: mov eax, 0x8876086c */
    goto L_1702BD55; /* 0x1702BD44: jmp 0x1702bd55 */
L_1702BD46:
    eax = MEM32(ebp + 0x8); /* 0x1702BD46: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702BD49: push esi */
    esi = MEM32(eax + 0x70); /* 0x1702BD4A: mov esi, dword ptr [eax + 0x70] */
    PUSH32(esp, 0x10u); /* 0x1702BD4D: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1702BD4F: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702BD50: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BD52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702BD54: pop esi */
L_1702BD55:
    edi = POP32_VAL(esp); /* 0x1702BD55: pop edi */
    ebp = POP32_VAL(esp); /* 0x1702BD56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702BD57: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702BD5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BD5Fu);

L_1702BD5F:
    edi = edi; /* 0x1702BD5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BD61: push ebp */
    ebp = esp; /* 0x1702BD62: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1702BD64: fld dword ptr [ebp + 8] */
    _st[0] = sqrt(_st[0]); /* 0x1702BD67: fsqrt  */
    ebp = POP32_VAL(esp); /* 0x1702BD69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BD6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702BD72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BD72u);

L_1702BD72:
    edi = edi; /* 0x1702BD72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BD74: push ebp */
    ebp = esp; /* 0x1702BD75: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702BD77: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702BD78: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0xAC), 0 */ /* 0x1702BD7B: cmp dword ptr [esi + 0xac], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702BD8B; /* 0x1702BD82: jne 0x1702bd8b */
L_1702BD84:
    eax = 0x8876086Cu; /* 0x1702BD84: mov eax, 0x8876086c */
    goto L_1702BE09; /* 0x1702BD89: jmp 0x1702be09 */
L_1702BD8B:
    /* cmp MEM32(esi + 0xC4), 0 */ /* 0x1702BD8B: cmp dword ptr [esi + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1702BD92: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BD9F; /* 0x1702BD93: je 0x1702bd9f */
L_1702BD95:
    eax = MEM32(esi); /* 0x1702BD95: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1702BD97: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1702BD98: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1702BD9B: mov ebx, eax */
    goto L_1702BDA1; /* 0x1702BD9D: jmp 0x1702bda1 */
L_1702BD9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1702BD9F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BDA1:
    PUSH32(esp, 1); /* 0x1702BDA1: push 1 */
    RECOMP_CALL(sub_1702BB20); /* 0x1702BDA3: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0xB0), 3 */ /* 0x1702BDA8: test byte ptr [esi + 0xb0], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB0)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BDBE; /* 0x1702BDAF: jne 0x1702bdbe */
L_1702BDB1:
    eax = MEM32(esi + 0x24); /* 0x1702BDB1: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x1702BDB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDBE; /* 0x1702BDB6: je 0x1702bdbe */
L_1702BDB8:
    ecx = MEM32(eax); /* 0x1702BDB8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BDBA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702BDBB: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702BDBE:
    eax = MEM32(esi + 0xB0); /* 0x1702BDBE: mov eax, dword ptr [esi + 0xb0] */
    /* test LO8(eax), 0x10u */ /* 0x1702BDC4: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDD9; /* 0x1702BDC6: je 0x1702bdd9 */
L_1702BDC8:
    /* test LO8(eax), 1 */ /* 0x1702BDC8: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BDD9; /* 0x1702BDCA: jne 0x1702bdd9 */
L_1702BDCC:
    eax = MEM32(esi + 0x2C); /* 0x1702BDCC: mov eax, dword ptr [esi + 0x2c] */
    /* test eax, eax */ /* 0x1702BDCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDD9; /* 0x1702BDD1: je 0x1702bdd9 */
L_1702BDD3:
    ecx = MEM32(eax); /* 0x1702BDD3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BDD5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702BDD6: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702BDD9:
    eax = MEM32(esi + 0xB0); /* 0x1702BDD9: mov eax, dword ptr [esi + 0xb0] */
    /* test LO8(eax), 4 */ /* 0x1702BDDF: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDE7; /* 0x1702BDE1: je 0x1702bde7 */
L_1702BDE3:
    /* test LO8(eax), 8 */ /* 0x1702BDE3: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDF8; /* 0x1702BDE5: je 0x1702bdf8 */
L_1702BDE7:
    /* test LO8(eax), 1 */ /* 0x1702BDE7: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BDF8; /* 0x1702BDE9: jne 0x1702bdf8 */
L_1702BDEB:
    eax = MEM32(esi + 0x34); /* 0x1702BDEB: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x1702BDEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BDF8; /* 0x1702BDF0: je 0x1702bdf8 */
L_1702BDF2:
    ecx = MEM32(eax); /* 0x1702BDF2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BDF4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702BDF5: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702BDF8:
    PUSH32(esp, 0); /* 0x1702BDF8: push 0 */
    RECOMP_CALL(sub_1702BB20); /* 0x1702BDFA: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) & 0; /* 0x1702BDFF: and dword ptr [esi + 0xac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1702BE06: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1702BE08: pop ebx */
L_1702BE09:
    esi = POP32_VAL(esp); /* 0x1702BE09: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702BE0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BE0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702BE13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BE13u);

L_1702BE13:
    edi = edi; /* 0x1702BE13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BE15: push ebp */
    ebp = esp; /* 0x1702BE16: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702BE18: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702BE19: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x1702BE1C: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, edi); /* 0x1702BE1F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702BE20: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1702BE22: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xAC) = edi; /* 0x1702BE24: mov dword ptr [esi + 0xac], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE35; /* 0x1702BE2A: je 0x1702be35 */
L_1702BE2C:
    ecx = MEM32(eax); /* 0x1702BE2C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE2F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = edi; /* 0x1702BE32: mov dword ptr [esi + 0x14], edi */
L_1702BE35:
    eax = MEM32(esi + 0x18); /* 0x1702BE35: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edi */ /* 0x1702BE38: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE45; /* 0x1702BE3A: je 0x1702be45 */
L_1702BE3C:
    ecx = MEM32(eax); /* 0x1702BE3C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE3E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE3F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = edi; /* 0x1702BE42: mov dword ptr [esi + 0x18], edi */
L_1702BE45:
    eax = MEM32(esi + 0x28); /* 0x1702BE45: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, edi */ /* 0x1702BE48: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE55; /* 0x1702BE4A: je 0x1702be55 */
L_1702BE4C:
    ecx = MEM32(eax); /* 0x1702BE4C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE4E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE4F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = edi; /* 0x1702BE52: mov dword ptr [esi + 0x28], edi */
L_1702BE55:
    eax = MEM32(esi + 0x24); /* 0x1702BE55: mov eax, dword ptr [esi + 0x24] */
    /* cmp eax, edi */ /* 0x1702BE58: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE65; /* 0x1702BE5A: je 0x1702be65 */
L_1702BE5C:
    ecx = MEM32(eax); /* 0x1702BE5C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE5E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE5F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = edi; /* 0x1702BE62: mov dword ptr [esi + 0x24], edi */
L_1702BE65:
    eax = MEM32(esi + 0x30); /* 0x1702BE65: mov eax, dword ptr [esi + 0x30] */
    /* cmp eax, edi */ /* 0x1702BE68: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE75; /* 0x1702BE6A: je 0x1702be75 */
L_1702BE6C:
    ecx = MEM32(eax); /* 0x1702BE6C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE6E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE6F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x30) = edi; /* 0x1702BE72: mov dword ptr [esi + 0x30], edi */
L_1702BE75:
    eax = MEM32(esi + 0x2C); /* 0x1702BE75: mov eax, dword ptr [esi + 0x2c] */
    /* cmp eax, edi */ /* 0x1702BE78: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE85; /* 0x1702BE7A: je 0x1702be85 */
L_1702BE7C:
    ecx = MEM32(eax); /* 0x1702BE7C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE7E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE7F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x2C) = edi; /* 0x1702BE82: mov dword ptr [esi + 0x2c], edi */
L_1702BE85:
    eax = MEM32(esi + 0x38); /* 0x1702BE85: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, edi */ /* 0x1702BE88: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BE95; /* 0x1702BE8A: je 0x1702be95 */
L_1702BE8C:
    ecx = MEM32(eax); /* 0x1702BE8C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE8E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE8F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = edi; /* 0x1702BE92: mov dword ptr [esi + 0x38], edi */
L_1702BE95:
    eax = MEM32(esi + 0x34); /* 0x1702BE95: mov eax, dword ptr [esi + 0x34] */
    /* cmp eax, edi */ /* 0x1702BE98: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702BEA5; /* 0x1702BE9A: je 0x1702bea5 */
L_1702BE9C:
    ecx = MEM32(eax); /* 0x1702BE9C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BE9E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BE9F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = edi; /* 0x1702BEA2: mov dword ptr [esi + 0x34], edi */
L_1702BEA5:
    edi = POP32_VAL(esp); /* 0x1702BEA5: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BEA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702BEA8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702BEA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BEAA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702BEB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BEB2u);

L_1702BEB2:
    edi = edi; /* 0x1702BEB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BEB4: push ebp */
    ebp = esp; /* 0x1702BEB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1702BEB7: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1702BEBA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702BEBB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xC); /* 0x1702BEBE: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) & 0; /* 0x1702BEC1: and dword ptr [esi + 0xac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + 0x8; /* 0x1702BEC8: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1702BECB: push edx */
    PUSH32(esp, 0); /* 0x1702BECC: push 0 */
    MEM32(esi + 0x5C) = 1; /* 0x1702BECE: mov dword ptr [esi + 0x5c], 1 */
    ecx = MEM32(eax); /* 0x1702BED5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BED7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x98)); /* 0x1702BED8: call dword ptr [ecx + 0x98] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BEDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702BF2F; /* 0x1702BEE0: jl 0x1702bf2f */
L_1702BEE2:
    eax = MEM32(ebp + 0x8); /* 0x1702BEE2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1702BEE5: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x30); /* 0x1702BEE7: lea edx, [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x1702BEEA: push edx */
    PUSH32(esp, eax); /* 0x1702BEEB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1702BEEC: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702BEEF: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702BEF2: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1702BEF4: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1702BEF7: push edx */
    PUSH32(esp, 0); /* 0x1702BEF8: push 0 */
    PUSH32(esp, eax); /* 0x1702BEFA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1702BEFB: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1702BEFE: push dword ptr [ebp - 0x30] */
    eax = MEM32(esi + 0x8); /* 0x1702BF01: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1702BF04: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x1702BF06: push 1 */
    PUSH32(esp, 0x00080001u); /* 0x1702BF08: push 0x80001 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1702BF0D: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x1702BF10: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x1702BF13: push dword ptr [esi + 0x40] */
    PUSH32(esp, eax); /* 0x1702BF16: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1702BF17: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702BF1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702BF22; /* 0x1702BF1C: jge 0x1702bf22 */
L_1702BF1E:
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0; /* 0x1702BF1E: and dword ptr [esi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702BF22:
    eax = MEM32(ebp + 0x8); /* 0x1702BF22: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1702BF25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702BF2F; /* 0x1702BF27: je 0x1702bf2f */
L_1702BF29:
    ecx = MEM32(eax); /* 0x1702BF29: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702BF2B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702BF2C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1702BF2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BF2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702BF31: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702BF32: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702BF33: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702BF3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BF3Bu);

L_1702BF3B:
    edi = edi; /* 0x1702BF3B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BF3D: push ebp */
    ebp = esp; /* 0x1702BF3E: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1702BF40: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0xB8); /* 0x1702BF43: mov eax, dword ptr [ecx + 0xb8] */
    edx = MEM32(ebp + 0x8); /* 0x1702BF49: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702BF4C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702BF4D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1702BF50: push edi */
    edi = MEM32(eax + edx * 4); /* 0x1702BF51: mov edi, dword ptr [eax + edx*4] */
    /* cmp edi, MEM32(eax + esi * 4) */ /* 0x1702BF54: cmp edi, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + esi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702BF5E; /* 0x1702BF57: jbe 0x1702bf5e */
L_1702BF59:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702BF59: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702BF79; /* 0x1702BF5C: jmp 0x1702bf79 */
L_1702BF5E:
    eax = MEM32(ecx + 0xB8); /* 0x1702BF5E: mov eax, dword ptr [ecx + 0xb8] */
    ecx = MEM32(eax + edx * 4); /* 0x1702BF64: mov ecx, dword ptr [eax + edx*4] */
    /* cmp ecx, MEM32(eax + esi * 4) */ /* 0x1702BF67: cmp ecx, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + esi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1702BF71; /* 0x1702BF6A: jae 0x1702bf71 */
L_1702BF6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BF6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702BF6E: inc eax */
    _flag_k = FK_INC;
    goto L_1702BF79; /* 0x1702BF6F: jmp 0x1702bf79 */
L_1702BF71:
    /* cmp esi, edx */ /* 0x1702BF71: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702BF59; /* 0x1702BF73: ja 0x1702bf59 */
L_1702BF75:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702BF75: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702BF77: neg eax */
    _flag_k = FK_CMP;
L_1702BF79:
    edi = POP32_VAL(esp); /* 0x1702BF79: pop edi */
    esi = POP32_VAL(esp); /* 0x1702BF7A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702BF7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702BF7C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702BF84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BF84u);

L_1702BF84:
    edi = edi; /* 0x1702BF84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BF86: push ebp */
    ebp = esp; /* 0x1702BF87: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1702BF89: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0xBC); /* 0x1702BF8C: mov eax, dword ptr [ecx + 0xbc] */
    edx = MEM32(ebp + 0x8); /* 0x1702BF92: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x1702BF95: fld dword ptr [eax + edx*4] */
    PUSH32(esp, esi); /* 0x1702BF98: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702BF99: mov esi, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + esi * 4)); /* 0x1702BF9C: fcomp dword ptr [eax + esi*4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702BF9F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702BFA1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702BFAB; /* 0x1702BFA4: jp 0x1702bfab */
L_1702BFA6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702BFA6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702BFCB; /* 0x1702BFA9: jmp 0x1702bfcb */
L_1702BFAB:
    eax = MEM32(ecx + 0xBC); /* 0x1702BFAB: mov eax, dword ptr [ecx + 0xbc] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x1702BFB1: fld dword ptr [eax + edx*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + esi * 4)); /* 0x1702BFB4: fcomp dword ptr [eax + esi*4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702BFB7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702BFB9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BFC3; /* 0x1702BFBC: jne 0x1702bfc3 */
L_1702BFBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702BFBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702BFC0: inc eax */
    _flag_k = FK_INC;
    goto L_1702BFCB; /* 0x1702BFC1: jmp 0x1702bfcb */
L_1702BFC3:
    /* cmp esi, edx */ /* 0x1702BFC3: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702BFA6; /* 0x1702BFC5: ja 0x1702bfa6 */
L_1702BFC7:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702BFC7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702BFC9: neg eax */
    _flag_k = FK_CMP;
L_1702BFCB:
    esi = POP32_VAL(esp); /* 0x1702BFCB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702BFCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702BFCD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702BFD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702BFD5u);

L_1702BFD5:
    edi = edi; /* 0x1702BFD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702BFD7: push ebp */
    ebp = esp; /* 0x1702BFD8: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1702BFDA: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0xBC); /* 0x1702BFDD: mov eax, dword ptr [ecx + 0xbc] */
    edx = MEM32(ebp + 0x8); /* 0x1702BFE3: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x1702BFE6: fld dword ptr [eax + edx*4] */
    PUSH32(esp, esi); /* 0x1702BFE9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702BFEA: mov esi, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + esi * 4)); /* 0x1702BFED: fcomp dword ptr [eax + esi*4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702BFF0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702BFF2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702BFFC; /* 0x1702BFF5: jne 0x1702bffc */
L_1702BFF7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702BFF7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702C01C; /* 0x1702BFFA: jmp 0x1702c01c */
L_1702BFFC:
    eax = MEM32(ecx + 0xBC); /* 0x1702BFFC: mov eax, dword ptr [ecx + 0xbc] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x1702C002: fld dword ptr [eax + edx*4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + esi * 4)); /* 0x1702C005: fcomp dword ptr [eax + esi*4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C008: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702C00A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C014; /* 0x1702C00D: jp 0x1702c014 */
L_1702C00F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C00F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702C011: inc eax */
    _flag_k = FK_INC;
    goto L_1702C01C; /* 0x1702C012: jmp 0x1702c01c */
L_1702C014:
    /* cmp esi, edx */ /* 0x1702C014: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702BFF7; /* 0x1702C016: ja 0x1702bff7 */
L_1702C018:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702C018: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702C01A: neg eax */
    _flag_k = FK_CMP;
L_1702C01C:
    esi = POP32_VAL(esp); /* 0x1702C01C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702C01D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702C01E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702C026(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C026u);

L_1702C026:
    edi = edi; /* 0x1702C026: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C028: push ebp */
    ebp = esp; /* 0x1702C029: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1702C02B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1702C02E: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1702C02F: mov esi, dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0xBC); /* 0x1702C032: mov eax, dword ptr [esi + 0xbc] */
    PUSH32(esp, edi); /* 0x1702C038: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1702C039: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x1702C03C: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1702C03E: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1702C03E: shl ecx, 2 */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x1702C041: fld dword ptr [eax + ecx] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1702C044: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1702C044: shl edx, 2 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + edx)); /* 0x1702C047: fcomp dword ptr [eax + edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C04A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702C04C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C056; /* 0x1702C04F: jp 0x1702c056 */
L_1702C051:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702C051: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702C093; /* 0x1702C054: jmp 0x1702c093 */
L_1702C056:
    eax = MEM32(esi + 0xBC); /* 0x1702C056: mov eax, dword ptr [esi + 0xbc] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x1702C05C: fld dword ptr [eax + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + edx)); /* 0x1702C05F: fcomp dword ptr [eax + edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C062: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702C064: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C06E; /* 0x1702C067: jne 0x1702c06e */
L_1702C069:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C069: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702C06B: inc eax */
    _flag_k = FK_INC;
    goto L_1702C093; /* 0x1702C06C: jmp 0x1702c093 */
L_1702C06E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xB8u; /* 0x1702C06E: add esi, 0xb8 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1702C074: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1702C076: push ebx */
    ebx = MEM32(eax + ecx); /* 0x1702C077: mov ebx, dword ptr [eax + ecx] */
    /* cmp ebx, MEM32(eax + edx) */ /* 0x1702C07A: cmp ebx, dword ptr [eax + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1702C07D: pop ebx */
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702C051; /* 0x1702C07E: ja 0x1702c051 */
L_1702C080:
    esi = eax; /* 0x1702C080: mov esi, eax */
    eax = MEM32(esi + ecx); /* 0x1702C082: mov eax, dword ptr [esi + ecx] */
    /* cmp eax, MEM32(esi + edx) */ /* 0x1702C085: cmp eax, dword ptr [esi + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702C069; /* 0x1702C088: jb 0x1702c069 */
L_1702C08A:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1702C08A: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702C051; /* 0x1702C08D: ja 0x1702c051 */
L_1702C08F:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702C08F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702C091: neg eax */
    _flag_k = FK_CMP;
L_1702C093:
    edi = POP32_VAL(esp); /* 0x1702C093: pop edi */
    esi = POP32_VAL(esp); /* 0x1702C094: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702C095: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702C096: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702C09E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C09Eu);

L_1702C09E:
    edi = edi; /* 0x1702C09E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C0A0: push ebp */
    ebp = esp; /* 0x1702C0A1: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1702C0A3: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1702C0A6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1702C0A7: mov esi, dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0xBC); /* 0x1702C0AA: mov eax, dword ptr [esi + 0xbc] */
    PUSH32(esp, edi); /* 0x1702C0B0: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1702C0B1: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x1702C0B4: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1702C0B6: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1702C0B6: shl ecx, 2 */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x1702C0B9: fld dword ptr [eax + ecx] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1702C0BC: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1702C0BC: shl edx, 2 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + edx)); /* 0x1702C0BF: fcomp dword ptr [eax + edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C0C2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702C0C4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C0CE; /* 0x1702C0C7: jne 0x1702c0ce */
L_1702C0C9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1702C0C9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702C10B; /* 0x1702C0CC: jmp 0x1702c10b */
L_1702C0CE:
    eax = MEM32(esi + 0xBC); /* 0x1702C0CE: mov eax, dword ptr [esi + 0xbc] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x1702C0D4: fld dword ptr [eax + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + edx)); /* 0x1702C0D7: fcomp dword ptr [eax + edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C0DA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702C0DC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C0E6; /* 0x1702C0DF: jp 0x1702c0e6 */
L_1702C0E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C0E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702C0E3: inc eax */
    _flag_k = FK_INC;
    goto L_1702C10B; /* 0x1702C0E4: jmp 0x1702c10b */
L_1702C0E6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xB8u; /* 0x1702C0E6: add esi, 0xb8 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1702C0EC: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1702C0EE: push ebx */
    ebx = MEM32(eax + ecx); /* 0x1702C0EF: mov ebx, dword ptr [eax + ecx] */
    /* cmp ebx, MEM32(eax + edx) */ /* 0x1702C0F2: cmp ebx, dword ptr [eax + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1702C0F5: pop ebx */
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702C0C9; /* 0x1702C0F6: ja 0x1702c0c9 */
L_1702C0F8:
    esi = eax; /* 0x1702C0F8: mov esi, eax */
    eax = MEM32(esi + ecx); /* 0x1702C0FA: mov eax, dword ptr [esi + ecx] */
    /* cmp eax, MEM32(esi + edx) */ /* 0x1702C0FD: cmp eax, dword ptr [esi + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702C0E1; /* 0x1702C100: jb 0x1702c0e1 */
L_1702C102:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1702C102: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1702C0C9; /* 0x1702C105: ja 0x1702c0c9 */
L_1702C107:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702C107: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702C109: neg eax */
    _flag_k = FK_CMP;
L_1702C10B:
    edi = POP32_VAL(esp); /* 0x1702C10B: pop edi */
    esi = POP32_VAL(esp); /* 0x1702C10C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702C10D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702C10E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702C116(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C116u);

L_1702C116:
    edi = edi; /* 0x1702C116: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C118: push ebp */
    ebp = esp; /* 0x1702C119: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1702C11B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1702C11E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1702C136; /* 0x1702C11F: js 0x1702c136 */
L_1702C121:
    PUSH32(esp, esi); /* 0x1702C121: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702C122: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1702C125: push edi */
    edi = eax + 0x1; /* 0x1702C126: lea edi, [eax + 1] */
L_1702C129:
    ecx = esi; /* 0x1702C129: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1702C12B: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x1702C12E: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1702C131: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1702C129; /* 0x1702C132: jne 0x1702c129 */
L_1702C134:
    edi = POP32_VAL(esp); /* 0x1702C134: pop edi */
    esi = POP32_VAL(esp); /* 0x1702C135: pop esi */
L_1702C136:
    ebp = POP32_VAL(esp); /* 0x1702C136: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1702C137: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1702C161(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C161u);

L_1702C161:
    edi = edi; /* 0x1702C161: mov edi, edi */
    PUSH32(esp, esi); /* 0x1702C163: push esi */
    PUSH32(esp, edi); /* 0x1702C164: push edi */
    esi = ecx; /* 0x1702C165: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702C167: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xB8), edi */ /* 0x1702C169: cmp dword ptr [esi + 0xb8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x17001650u; /* 0x1702C16F: mov dword ptr [esi], 0x17001650 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1AA; /* 0x1702C175: je 0x1702c1aa */
L_1702C177:
    PUSH32(esp, ebx); /* 0x1702C177: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1702C178: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC4), edi */ /* 0x1702C17A: cmp dword ptr [esi + 0xc4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702C1A9; /* 0x1702C180: jbe 0x1702c1a9 */
L_1702C182:
    eax = MEM32(esi + 0xB8); /* 0x1702C182: mov eax, dword ptr [esi + 0xb8] */
    eax = eax + ebx * 4; /* 0x1702C188: lea eax, [eax + ebx*4] */
    /* cmp MEM32(eax), edi */ /* 0x1702C18B: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1A0; /* 0x1702C18D: je 0x1702c1a0 */
L_1702C18F:
    eax = MEM32(eax); /* 0x1702C18F: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1702C191: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C193: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C194: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB8); /* 0x1702C197: mov eax, dword ptr [esi + 0xb8] */
    MEM32(eax + ebx * 4) = edi; /* 0x1702C19D: mov dword ptr [eax + ebx*4], edi */
L_1702C1A0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1702C1A0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0xC4) */ /* 0x1702C1A1: cmp ebx, dword ptr [esi + 0xc4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702C182; /* 0x1702C1A7: jb 0x1702c182 */
L_1702C1A9:
    ebx = POP32_VAL(esp); /* 0x1702C1A9: pop ebx */
L_1702C1AA:
    eax = MEM32(esi + 0x8); /* 0x1702C1AA: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x1702C1AD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1BA; /* 0x1702C1AF: je 0x1702c1ba */
L_1702C1B1:
    ecx = MEM32(eax); /* 0x1702C1B1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C1B3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C1B4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = edi; /* 0x1702C1B7: mov dword ptr [esi + 8], edi */
L_1702C1BA:
    eax = MEM32(esi + 0xC); /* 0x1702C1BA: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, edi */ /* 0x1702C1BD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1CA; /* 0x1702C1BF: je 0x1702c1ca */
L_1702C1C1:
    ecx = MEM32(eax); /* 0x1702C1C1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C1C3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C1C4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = edi; /* 0x1702C1C7: mov dword ptr [esi + 0xc], edi */
L_1702C1CA:
    eax = MEM32(esi + 0x10); /* 0x1702C1CA: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, edi */ /* 0x1702C1CD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1DA; /* 0x1702C1CF: je 0x1702c1da */
L_1702C1D1:
    ecx = MEM32(eax); /* 0x1702C1D1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C1D3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C1D4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = edi; /* 0x1702C1D7: mov dword ptr [esi + 0x10], edi */
L_1702C1DA:
    eax = MEM32(esi + 0x14); /* 0x1702C1DA: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x1702C1DD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1EA; /* 0x1702C1DF: je 0x1702c1ea */
L_1702C1E1:
    ecx = MEM32(eax); /* 0x1702C1E1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C1E3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C1E4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = edi; /* 0x1702C1E7: mov dword ptr [esi + 0x14], edi */
L_1702C1EA:
    eax = MEM32(esi + 0x18); /* 0x1702C1EA: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edi */ /* 0x1702C1ED: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C1FA; /* 0x1702C1EF: je 0x1702c1fa */
L_1702C1F1:
    ecx = MEM32(eax); /* 0x1702C1F1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C1F3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C1F4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = edi; /* 0x1702C1F7: mov dword ptr [esi + 0x18], edi */
L_1702C1FA:
    eax = MEM32(esi + 0x28); /* 0x1702C1FA: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, edi */ /* 0x1702C1FD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C20A; /* 0x1702C1FF: je 0x1702c20a */
L_1702C201:
    ecx = MEM32(eax); /* 0x1702C201: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C203: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C204: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = edi; /* 0x1702C207: mov dword ptr [esi + 0x28], edi */
L_1702C20A:
    eax = MEM32(esi + 0x24); /* 0x1702C20A: mov eax, dword ptr [esi + 0x24] */
    /* cmp eax, edi */ /* 0x1702C20D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C21A; /* 0x1702C20F: je 0x1702c21a */
L_1702C211:
    ecx = MEM32(eax); /* 0x1702C211: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C213: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C214: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = edi; /* 0x1702C217: mov dword ptr [esi + 0x24], edi */
L_1702C21A:
    eax = MEM32(esi + 0x30); /* 0x1702C21A: mov eax, dword ptr [esi + 0x30] */
    /* cmp eax, edi */ /* 0x1702C21D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C22A; /* 0x1702C21F: je 0x1702c22a */
L_1702C221:
    ecx = MEM32(eax); /* 0x1702C221: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C223: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C224: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x30) = edi; /* 0x1702C227: mov dword ptr [esi + 0x30], edi */
L_1702C22A:
    eax = MEM32(esi + 0x2C); /* 0x1702C22A: mov eax, dword ptr [esi + 0x2c] */
    /* cmp eax, edi */ /* 0x1702C22D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C23A; /* 0x1702C22F: je 0x1702c23a */
L_1702C231:
    ecx = MEM32(eax); /* 0x1702C231: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C233: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C234: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x2C) = edi; /* 0x1702C237: mov dword ptr [esi + 0x2c], edi */
L_1702C23A:
    eax = MEM32(esi + 0x38); /* 0x1702C23A: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, edi */ /* 0x1702C23D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C24A; /* 0x1702C23F: je 0x1702c24a */
L_1702C241:
    ecx = MEM32(eax); /* 0x1702C241: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C243: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C244: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = edi; /* 0x1702C247: mov dword ptr [esi + 0x38], edi */
L_1702C24A:
    eax = MEM32(esi + 0x34); /* 0x1702C24A: mov eax, dword ptr [esi + 0x34] */
    /* cmp eax, edi */ /* 0x1702C24D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C25A; /* 0x1702C24F: je 0x1702c25a */
L_1702C251:
    ecx = MEM32(eax); /* 0x1702C251: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C253: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702C254: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = edi; /* 0x1702C257: mov dword ptr [esi + 0x34], edi */
L_1702C25A:
    eax = MEM32(esi + 0x70); /* 0x1702C25A: mov eax, dword ptr [esi + 0x70] */
    /* cmp eax, edi */ /* 0x1702C25D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C26E; /* 0x1702C25F: je 0x1702c26e */
L_1702C261:
    ecx = (uint32_t)MEM8(eax + (-0x1)); /* 0x1702C261: movzx ecx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1702C265: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1702C267: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1702C268: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702C26D: pop ecx */
L_1702C26E:
    PUSH32(esp, MEM32(esi + 0xB4)); /* 0x1702C26E: push dword ptr [esi + 0xb4] */
    RECOMP_CALL(sub_1721B010); /* 0x1702C274: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xB8)); /* 0x1702C279: push dword ptr [esi + 0xb8] */
    RECOMP_CALL(sub_1721B010); /* 0x1702C27F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xBC)); /* 0x1702C284: push dword ptr [esi + 0xbc] */
    RECOMP_CALL(sub_1721B010); /* 0x1702C28A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC0)); /* 0x1702C28F: push dword ptr [esi + 0xc0] */
    RECOMP_CALL(sub_1721B010); /* 0x1702C295: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1702C29A: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1702C29D: pop edi */
    esi = POP32_VAL(esp); /* 0x1702C29E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702C29F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702C2A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C2A5u);

L_1702C2A5:
    edi = edi; /* 0x1702C2A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C2A7: push ebp */
    ebp = esp; /* 0x1702C2A8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14Cu; /* 0x1702C2AA: sub esp, 0x14c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1702C2B0: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1702C2B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1702C2B5: push ebx */
    ebx = ecx; /* 0x1702C2B6: mov ebx, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C2C4; /* 0x1702C2B8: jne 0x1702c2c4 */
L_1702C2BA:
    eax = 0x8876086Cu; /* 0x1702C2BA: mov eax, 0x8876086c */
    goto L_1702C520; /* 0x1702C2BF: jmp 0x1702c520 */
L_1702C2C4:
    MEM32(ebx + 0xC) = eax; /* 0x1702C2C4: mov dword ptr [ebx + 0xc], eax */
    ecx = MEM32(eax); /* 0x1702C2C7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C2C9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1702C2CA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x1702C2CD: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702C2D0: mov ecx, dword ptr [eax] */
    edx = ebx + 0x8; /* 0x1702C2D2: lea edx, [ebx + 8] */
    PUSH32(esp, edx); /* 0x1702C2D5: push edx */
    PUSH32(esp, eax); /* 0x1702C2D6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1702C2D7: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702C2DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702C520; /* 0x1702C2DC: jl 0x1702c520 */
L_1702C2E2:
    eax = MEM32(ebx + 0xC); /* 0x1702C2E2: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702C2E5: mov ecx, dword ptr [eax] */
    edx = ebx + 0x10; /* 0x1702C2E7: lea edx, [ebx + 0x10] */
    PUSH32(esp, edx); /* 0x1702C2EA: push edx */
    PUSH32(esp, 0x17001630u); /* 0x1702C2EB: push 0x17001630 */
    PUSH32(esp, eax); /* 0x1702C2F0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x158)); /* 0x1702C2F1: call dword ptr [ecx + 0x158] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702C2F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702C520; /* 0x1702C2F9: jl 0x1702c520 */
L_1702C2FF:
    eax = MEM32(ebx + 0xC); /* 0x1702C2FF: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702C302: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1702C304: push esi */
    edx = ebp + (-0x14C); /* 0x1702C305: lea edx, [ebp - 0x14c] */
    PUSH32(esp, edx); /* 0x1702C30B: push edx */
    PUSH32(esp, eax); /* 0x1702C30C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1702C30D: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14C)); /* 0x1702C310: mov eax, dword ptr [ebp - 0x14c] */
    MEM32(ebx + 0x3C) = eax; /* 0x1702C316: mov dword ptr [ebx + 0x3c], eax */
    eax = MEM32(ebp + (-0x148)); /* 0x1702C319: mov eax, dword ptr [ebp - 0x148] */
    MEM32(ebx + 0x40) = eax; /* 0x1702C31F: mov dword ptr [ebx + 0x40], eax */
    eax = MEM32(ebp + (-0x10C)); /* 0x1702C322: mov eax, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x1702C328: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x08000000u)); _flag_b = (uint32_t)((eax | 0x08000000u));
    eax = eax | 0x08000000u; /* 0x1702C32D: or eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (26u) _cf = (((eax) >> 25) & 1u); /* 0x1702C332: shr eax, 0x1a */
    if (26u) { _flag_a = recomp_flags_pack((eax >> 26u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 26u; /* 0x1702C332: shr eax, 0x1a */
    MEM32(ebx + 0x48) = eax; /* 0x1702C335: mov dword ptr [ebx + 0x48], eax */
    eax = MEM32(ebp + (-0x10C)); /* 0x1702C338: mov eax, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x1702C33E: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x1702C343: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (10u) _cf = (((eax) >> 9) & 1u); /* 0x1702C348: shr eax, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((eax >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 10u; /* 0x1702C348: shr eax, 0xa */
    /* test MEM8(ebp + (-0x10A)), 2 */ /* 0x1702C34B: test byte ptr [ebp - 0x10a], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10A))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebx + 0x4C) = eax; /* 0x1702C352: mov dword ptr [ebx + 0x4c], eax */
    PUSH32(esp, 0); /* 0x1702C355: push 0 */
    eax = POP32_VAL(esp); /* 0x1702C357: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1702C358: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702C35B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x1C); /* 0x1702C35D: lea edx, [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702C360: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1702C361: push edx */
    MEM32(ebx + 0x5C) = esi; /* 0x1702C362: mov dword ptr [ebx + 0x5c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702C365: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx + 0x50) = eax; /* 0x1702C366: mov dword ptr [ebx + 0x50], eax */
    eax = MEM32(ebp + (-0xE0)); /* 0x1702C369: mov eax, dword ptr [ebp - 0xe0] */
    MEM32(ebx + 0x54) = eax; /* 0x1702C36F: mov dword ptr [ebx + 0x54], eax */
    eax = MEM32(ebp + (-0x118)); /* 0x1702C372: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x1702C378: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x58) = eax; /* 0x1702C37B: mov dword ptr [ebx + 0x58], eax */
    eax = MEM32(ebx + 0xC); /* 0x1702C37E: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702C381: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C383: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1702C384: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + (-0x10))); /* 0x1702C387: mov al, byte ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xA0u); /* 0x1702C38A: and al, 0xa0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1702C38C: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0xD0u); /* 0x1702C38E: push 0xd0 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702C393: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1702C395: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x44) = eax; /* 0x1702C398: mov dword ptr [ebx + 0x44], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702C39B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702C3A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702C3A2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702C3CD; /* 0x1702C3A3: je 0x1702c3cd */
L_1702C3A5:
    SET_LO8(edx, LO8(eax)); /* 0x1702C3A5: mov dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x1702C3A7: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, 0x10u); /* 0x1702C3AA: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x1702C3AC: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0x1706E47Eu); /* 0x1702C3AE: push 0x1706e47e */
    edx = (uint32_t)LO8(ecx); /* 0x1702C3B3: movzx edx, cl */
    PUSH32(esp, 3); /* 0x1702C3B6: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1702C3B8: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x40u); /* 0x1702C3BA: push 0x40 */
    PUSH32(esp, eax); /* 0x1702C3BC: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1702C3BD: mov dword ptr [ebp + 8], eax */
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1702C3C0: mov byte ptr [eax - 1], cl */
    RECOMP_CALL(sub_1702C116); /* 0x1702C3C3: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1702C3C8: mov eax, dword ptr [ebp + 8] */
    goto L_1702C3CF; /* 0x1702C3CB: jmp 0x1702c3cf */
L_1702C3CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C3CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702C3CF:
    /* test eax, eax */ /* 0x1702C3CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x70) = eax; /* 0x1702C3D1: mov dword ptr [ebx + 0x70], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C3E0; /* 0x1702C3D4: jne 0x1702c3e0 */
L_1702C3D6:
    eax = 0x8007000Eu; /* 0x1702C3D6: mov eax, 0x8007000e */
    goto L_1702C51F; /* 0x1702C3DB: jmp 0x1702c51f */
L_1702C3E0:
    ecx = eax + 0x40; /* 0x1702C3E0: lea ecx, [eax + 0x40] */
    fp_push(0.0); /* 0x1702C3E3: fldz  */
    MEM32(ebx + 0x80) = ecx; /* 0x1702C3E5: mov dword ptr [ebx + 0x80], ecx */
    ecx = eax + 0x80; /* 0x1702C3EB: lea ecx, [eax + 0x80] */
    MEM32(ebx + 0x90) = ecx; /* 0x1702C3F1: mov dword ptr [ebx + 0x90], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1702C3F7: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x1702C3FA: fldz  */
    PUSH32(esp, edi); /* 0x1702C3FC: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1702C3FD: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1702C400: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1702C402: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1702C405: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1702C407: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1702C40A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1702C40C: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x1702C40F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1702C411: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1702C414: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1702C416: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1702C419: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1702C41B: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1702C41E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1702C420: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1702C423: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1702C425: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1702C428: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1702C42A: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1702C42D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1702C42F: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1702C432: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1702C434: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x1702C437: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1702C439: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1702C43C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1702C43E: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1702C441: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1702C443: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x1702C445: fldz  */
    eax = MEM32(ebx + 0x80); /* 0x1702C447: mov eax, dword ptr [ebx + 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1702C44D: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x1702C450: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1702C452: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1702C455: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1702C457: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1702C45A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1702C45C: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1702C45F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1702C461: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x1702C464: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1702C466: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1702C469: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1702C46B: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1702C46E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1702C470: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1702C473: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1702C475: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1702C478: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1702C47A: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1702C47D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1702C47F: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1702C482: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1702C484: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1702C487: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1702C489: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x1702C48C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1702C48E: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1702C491: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1702C493: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1702C496: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1702C498: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x1702C49A: fldz  */
    eax = MEM32(ebx + 0x90); /* 0x1702C49C: mov eax, dword ptr [ebx + 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1702C4A2: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x1702C4A5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1702C4A7: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1702C4AA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1702C4AC: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1702C4AF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1702C4B1: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1702C4B4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1702C4B6: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x1702C4B9: fldz  */
    MEM32(ebp + (-0x4)) = 0xBF800000u; /* 0x1702C4BB: mov dword ptr [ebp - 4], 0xbf800000 */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1702C4C2: fstp dword ptr [eax + 0x20] */
    edi = ebx + 0x94; /* 0x1702C4C5: lea edi, [ebx + 0x94] */
    fp_push(0.0); /* 0x1702C4CB: fldz  */
    PUSH32(esp, ebx); /* 0x1702C4CD: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1702C4CE: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1702C4D1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1702C4D3: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1702C4D6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1702C4D8: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1702C4DB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1702C4DD: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1702C4E0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1702C4E2: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1702C4E5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1702C4E7: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1702C4EA: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1702C4EC: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x1702C4EF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1702C4F1: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1702C4F4: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1702C4F6: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1702C4F9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1702C4FB: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x1702C4FD: fldz  */
    eax = MEM32(ebx); /* 0x1702C4FF: mov eax, dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1702C501: fstp dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x60) = esi; /* 0x1702C504: mov dword ptr [ebx + 0x60], esi */
    MEM32(ebx + 0x64) = esi; /* 0x1702C507: mov dword ptr [ebx + 0x64], esi */
    fp_push(0.0); /* 0x1702C50A: fldz  */
    esi = ebp + (-0xC); /* 0x1702C50C: lea esi, [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702C50F: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702C512: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702C513: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702C514: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1702C515: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702C518: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1702C51A: pop edi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702C51F; /* 0x1702C51B: jl 0x1702c51f */
L_1702C51D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C51D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702C51F:
    esi = POP32_VAL(esp); /* 0x1702C51F: pop esi */
L_1702C520:
    ebx = POP32_VAL(esp); /* 0x1702C520: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702C521: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702C522: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702C52A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C52Au);

L_1702C52A:
    edi = edi; /* 0x1702C52A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C52C: push ebp */
    ebp = esp; /* 0x1702C52D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702C52F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702C530: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1702C533: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C541; /* 0x1702C535: jne 0x1702c541 */
L_1702C537:
    eax = 0x8876086Cu; /* 0x1702C537: mov eax, 0x8876086c */
    goto L_1702C6CA; /* 0x1702C53C: jmp 0x1702c6ca */
L_1702C541:
    PUSH32(esp, ebx); /* 0x1702C541: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702C542: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0xAC), 0 */ /* 0x1702C545: cmp dword ptr [ebx + 0xac], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C597; /* 0x1702C54C: je 0x1702c597 */
L_1702C54E:
    /* cmp MEM32(ebx + 0x60), 0 */ /* 0x1702C54E: cmp dword ptr [ebx + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702C58B; /* 0x1702C552: jne 0x1702c58b */
L_1702C554:
    /* test MEM8(ebx + 0xB0), 8 */ /* 0x1702C554: test byte ptr [ebx + 0xb0], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C58B; /* 0x1702C55B: jne 0x1702c58b */
L_1702C55D:
    eax = MEM32(ebx + 0xCC); /* 0x1702C55D: mov eax, dword ptr [ebx + 0xcc] */
    edx = MEM32(ebx + 0xC0); /* 0x1702C563: mov edx, dword ptr [ebx + 0xc0] */
    ecx = eax + eax * 2; /* 0x1702C569: lea ecx, [eax + eax*2] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x1702C56C: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x1702C56C: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1702C56F: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0xC4); /* 0x1702C571: mov edx, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1702C577: sub edx, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1702C579: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1702C579: shl edx, 2 */
    PUSH32(esp, edx); /* 0x1702C57C: push edx */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x1702C57D: push dword ptr [ebx + 0x70] */
    PUSH32(esp, 0x18u); /* 0x1702C580: push 0x18 */
    PUSH32(esp, ecx); /* 0x1702C582: push ecx */
    PUSH32(esp, 0x18u); /* 0x1702C583: push 0x18 */
    PUSH32(esp, ecx); /* 0x1702C585: push ecx */
    RECOMP_CALL(sub_17040E9E); /* 0x1702C586: call 0x17040e9e */
    RECOMP_FLAGS_IN();
L_1702C58B:
    eax = MEM32(ebx + 0xC4); /* 0x1702C58B: mov eax, dword ptr [ebx + 0xc4] */
    MEM32(ebx + 0xCC) = eax; /* 0x1702C591: mov dword ptr [ebx + 0xcc], eax */
L_1702C597:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702C597: fld dword ptr [0x17001424] */
    PUSH32(esp, edi); /* 0x1702C59D: push edi */
    edi = MEM32(ebx + 0x70); /* 0x1702C59E: mov edi, dword ptr [ebx + 0x70] */
    PUSH32(esp, 0x10u); /* 0x1702C5A1: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1702C5A3: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702C5A4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx + 0x70); /* 0x1702C5A6: mov ecx, dword ptr [ebx + 0x70] */
    edi = POP32_VAL(esp); /* 0x1702C5A9: pop edi */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1702C5AA: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C5AC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C5AE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C5B0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BE; /* 0x1702C5B3: jp 0x1702c6be */
L_1702C5B9:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1702C5B9: fld dword ptr [0x17001430] */
    fp_push(_st[0]); /* 0x1702C5BF: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1702C5C1: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C5C4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C5C6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C5C8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C5CB: jp 0x1702c6bc */
L_1702C5D1:
    fp_push(_st[0]); /* 0x1702C5D1: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1702C5D3: fld dword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C5D6: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C5D8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C5DA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C5DD: jp 0x1702c6bc */
L_1702C5E3:
    fp_push(_st[0]); /* 0x1702C5E3: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1702C5E5: fld dword ptr [ecx + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C5E8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C5EA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C5EC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C5EF: jp 0x1702c6bc */
L_1702C5F5:
    fp_push(_st[0]); /* 0x1702C5F5: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1702C5F7: fld dword ptr [ecx + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C5FA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C5FC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C5FE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C601: jp 0x1702c6bc */
L_1702C607:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702C607: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1702C60D: fld dword ptr [ecx + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C610: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C612: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C614: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C617: jp 0x1702c6bc */
L_1702C61D:
    fp_push(_st[0]); /* 0x1702C61D: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1702C61F: fld dword ptr [ecx + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C622: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C624: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C626: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C629: jp 0x1702c6bc */
L_1702C62F:
    fp_push(_st[0]); /* 0x1702C62F: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1702C631: fld dword ptr [ecx + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C634: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C636: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C638: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C63B: jp 0x1702c6bc */
L_1702C63D:
    fp_push(_st[0]); /* 0x1702C63D: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1702C63F: fld dword ptr [ecx + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C642: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C644: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C646: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C649: jp 0x1702c6bc */
L_1702C64B:
    fp_push(_st[0]); /* 0x1702C64B: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x1702C64D: fld dword ptr [ecx + 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C650: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C652: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C654: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C657: jp 0x1702c6bc */
L_1702C659:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702C659: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x1702C65F: fld dword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C662: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C664: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C666: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C669: jp 0x1702c6bc */
L_1702C66B:
    fp_push(_st[0]); /* 0x1702C66B: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1702C66D: fld dword ptr [ecx + 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C670: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C672: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C674: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C677: jp 0x1702c6bc */
L_1702C679:
    fp_push(_st[0]); /* 0x1702C679: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x1702C67B: fld dword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C67E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C680: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C682: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C685: jp 0x1702c6bc */
L_1702C687:
    fp_push(_st[0]); /* 0x1702C687: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x1702C689: fld dword ptr [ecx + 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C68C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C68E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C690: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BC; /* 0x1702C693: jp 0x1702c6bc */
L_1702C695:
    fp_push(_st[0]); /* 0x1702C695: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x1702C697: fld dword ptr [ecx + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C69A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C69C: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702C69E: fstp st(0) */
    /* test HI8(eax), 0x44u */ /* 0x1702C6A0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BE; /* 0x1702C6A3: jp 0x1702c6be */
L_1702C6A5:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702C6A5: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x1702C6AB: fld dword ptr [ecx + 0x3c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702C6AE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702C6B0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1702C6B2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702C6BE; /* 0x1702C6B5: jp 0x1702c6be */
L_1702C6B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C6B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702C6B9: inc eax */
    _flag_k = FK_INC;
    goto L_1702C6C0; /* 0x1702C6BA: jmp 0x1702c6c0 */
L_1702C6BC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702C6BC: fstp st(0) */
L_1702C6BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C6BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702C6C0:
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x64) = MEM32(ebx + 0x64) & 0; /* 0x1702C6C0: and dword ptr [ebx + 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x60) = eax; /* 0x1702C6C4: mov dword ptr [ebx + 0x60], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C6C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1702C6C9: pop ebx */
L_1702C6CA:
    esi = POP32_VAL(esp); /* 0x1702C6CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702C6CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702C6CC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702C6D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C6D4u);

L_1702C6D4:
    edi = edi; /* 0x1702C6D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C6D6: push ebp */
    ebp = esp; /* 0x1702C6D7: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702C6D9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702C6DA: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0xAC), 0 */ /* 0x1702C6DD: cmp dword ptr [ebx + 0xac], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C6F0; /* 0x1702C6E4: je 0x1702c6f0 */
L_1702C6E6:
    eax = 0x8876086Cu; /* 0x1702C6E6: mov eax, 0x8876086c */
    goto L_1702C7B1; /* 0x1702C6EB: jmp 0x1702c7b1 */
L_1702C6F0:
    PUSH32(esp, esi); /* 0x1702C6F0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702C6F1: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1702C6F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1702C6F6: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C764; /* 0x1702C6F7: jne 0x1702c764 */
L_1702C6F9:
    esi = MEM32(ebp + 0x10); /* 0x1702C6F9: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1702C6FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C757; /* 0x1702C6FE: jne 0x1702c757 */
L_1702C700:
    eax = MEM32(ebx + 0x80); /* 0x1702C700: mov eax, dword ptr [ebx + 0x80] */
    fp_push(0.0); /* 0x1702C706: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1702C708: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x1702C70B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1702C70D: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1702C710: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1702C712: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1702C715: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1702C717: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1702C71A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1702C71C: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x1702C71F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1702C721: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1702C724: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1702C726: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1702C729: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1702C72B: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1702C72E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1702C730: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1702C733: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1702C735: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1702C738: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1702C73A: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1702C73D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1702C73F: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1702C742: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1702C744: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x1702C747: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1702C749: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1702C74C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1702C74E: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1702C751: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1702C753: fstp dword ptr [eax] */
    goto L_1702C779; /* 0x1702C755: jmp 0x1702c779 */
L_1702C757:
    edi = MEM32(ebx + 0x80); /* 0x1702C757: mov edi, dword ptr [ebx + 0x80] */
    PUSH32(esp, 0x10u); /* 0x1702C75D: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1702C75F: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702C760: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1702C779; /* 0x1702C762: jmp 0x1702c779 */
L_1702C764:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1702C764: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C757; /* 0x1702C768: je 0x1702c757 */
L_1702C76A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1702C76A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1702C76D: push esi */
    PUSH32(esp, MEM32(ebx + 0x80)); /* 0x1702C76E: push dword ptr [ebx + 0x80] */
    RECOMP_CALL(sub_17041794); /* 0x1702C774: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_1702C779:
    eax = MEM32(ebx + 0x80); /* 0x1702C779: mov eax, dword ptr [ebx + 0x80] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1702C77F: fld dword ptr [eax + 8] */
    ecx = ebx + 0x94; /* 0x1702C782: lea ecx, [ebx + 0x94] */
    _st[0] = -_st[0]; /* 0x1702C788: fchs  */
    PUSH32(esp, ecx); /* 0x1702C78A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1702C78B: fstp dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1702C78D: push ecx */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1702C78E: fld dword ptr [eax + 0x18] */
    _st[0] = -_st[0]; /* 0x1702C791: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x98) = _v; } /* 0x1702C793: fstp dword ptr [ebx + 0x98] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x1702C799: fld dword ptr [eax + 0x28] */
    _st[0] = -_st[0]; /* 0x1702C79C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x9C) = _v; } /* 0x1702C79E: fstp dword ptr [ebx + 0x9c] */
    RECOMP_CALL(sub_17040B68); /* 0x1702C7A4: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x64) = MEM32(ebx + 0x64) & 0; /* 0x1702C7A9: and dword ptr [ebx + 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1702C7AD: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C7AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702C7B0: pop esi */
L_1702C7B1:
    ebx = POP32_VAL(esp); /* 0x1702C7B1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702C7B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702C7B3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702C7BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C7BBu);

L_1702C7BB:
    edi = edi; /* 0x1702C7BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C7BD: push ebp */
    ebp = esp; /* 0x1702C7BE: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1702C7C0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702C7C1: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0xAC), 0 */ /* 0x1702C7C4: cmp dword ptr [ebx + 0xac], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C7D7; /* 0x1702C7CB: je 0x1702c7d7 */
L_1702C7CD:
    eax = 0x8876086Cu; /* 0x1702C7CD: mov eax, 0x8876086c */
    goto L_1702C892; /* 0x1702C7D2: jmp 0x1702c892 */
L_1702C7D7:
    PUSH32(esp, esi); /* 0x1702C7D7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702C7D8: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1702C7DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1702C7DD: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C84B; /* 0x1702C7DE: jne 0x1702c84b */
L_1702C7E0:
    esi = MEM32(ebp + 0x10); /* 0x1702C7E0: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1702C7E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702C83E; /* 0x1702C7E5: jne 0x1702c83e */
L_1702C7E7:
    eax = MEM32(ebx + 0x80); /* 0x1702C7E7: mov eax, dword ptr [ebx + 0x80] */
    fp_push(0.0); /* 0x1702C7ED: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1702C7EF: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x1702C7F2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1702C7F4: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1702C7F7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1702C7F9: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1702C7FC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1702C7FE: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1702C801: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1702C803: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x1702C806: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1702C808: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1702C80B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1702C80D: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1702C810: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1702C812: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1702C815: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1702C817: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1702C81A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1702C81C: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1702C81F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1702C821: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1702C824: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1702C826: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1702C829: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1702C82B: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x1702C82E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1702C830: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1702C833: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1702C835: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x1702C838: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1702C83A: fstp dword ptr [eax] */
    goto L_1702C860; /* 0x1702C83C: jmp 0x1702c860 */
L_1702C83E:
    edi = MEM32(ebx + 0x80); /* 0x1702C83E: mov edi, dword ptr [ebx + 0x80] */
    PUSH32(esp, 0x10u); /* 0x1702C844: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1702C846: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702C847: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1702C860; /* 0x1702C849: jmp 0x1702c860 */
L_1702C84B:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1702C84B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702C83E; /* 0x1702C84F: je 0x1702c83e */
L_1702C851:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1702C851: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1702C854: push esi */
    PUSH32(esp, MEM32(ebx + 0x80)); /* 0x1702C855: push dword ptr [ebx + 0x80] */
    RECOMP_CALL(sub_17041794); /* 0x1702C85B: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_1702C860:
    eax = MEM32(ebx + 0x80); /* 0x1702C860: mov eax, dword ptr [ebx + 0x80] */
    edx = MEM32(eax + 0x8); /* 0x1702C866: mov edx, dword ptr [eax + 8] */
    ecx = ebx + 0x94; /* 0x1702C869: lea ecx, [ebx + 0x94] */
    MEM32(ecx) = edx; /* 0x1702C86F: mov dword ptr [ecx], edx */
    edx = MEM32(eax + 0x18); /* 0x1702C871: mov edx, dword ptr [eax + 0x18] */
    MEM32(ebx + 0x98) = edx; /* 0x1702C874: mov dword ptr [ebx + 0x98], edx */
    eax = MEM32(eax + 0x28); /* 0x1702C87A: mov eax, dword ptr [eax + 0x28] */
    PUSH32(esp, ecx); /* 0x1702C87D: push ecx */
    PUSH32(esp, ecx); /* 0x1702C87E: push ecx */
    MEM32(ebx + 0x9C) = eax; /* 0x1702C87F: mov dword ptr [ebx + 0x9c], eax */
    RECOMP_CALL(sub_17040B68); /* 0x1702C885: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x64) = MEM32(ebx + 0x64) & 0; /* 0x1702C88A: and dword ptr [ebx + 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1702C88E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702C88F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702C891: pop esi */
L_1702C892:
    ebx = POP32_VAL(esp); /* 0x1702C892: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1702C893: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702C894: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702C89C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702C89Cu);

L_1702C89C:
    edi = edi; /* 0x1702C89C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702C89E: push ebp */
    ebp = esp; /* 0x1702C89F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1702C8A1: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1702C8A4: push ebx */
    PUSH32(esp, esi); /* 0x1702C8A5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702C8A6: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1702C8A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xAC), ebx */ /* 0x1702C8AB: cmp dword ptr [esi + 0xac], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702C8BD; /* 0x1702C8B1: jne 0x1702c8bd */
L_1702C8B3:
    eax = MEM32(ebp + 0xC); /* 0x1702C8B3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, 0xFFFFFF00u */ /* 0x1702C8B6: test eax, 0xffffff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702C8C7; /* 0x1702C8BB: je 0x1702c8c7 */
L_1702C8BD:
    eax = 0x8876086Cu; /* 0x1702C8BD: mov eax, 0x8876086c */
    goto L_1702CFE3; /* 0x1702C8C2: jmp 0x1702cfe3 */
L_1702C8C7:
    /* test LO8(eax), 8 */ /* 0x1702C8C7: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0xB0) = eax; /* 0x1702C8C9: mov dword ptr [esi + 0xb0], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702C8DA; /* 0x1702C8CF: je 0x1702c8da */
L_1702C8D1:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1702C8D1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xB0) = eax; /* 0x1702C8D4: mov dword ptr [esi + 0xb0], eax */
L_1702C8DA:
    PUSH32(esp, edi); /* 0x1702C8DA: push edi */
    edi = esi + 0x14; /* 0x1702C8DB: lea edi, [esi + 0x14] */
    /* cmp MEM32(edi), ebx */ /* 0x1702C8DE: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702C96B; /* 0x1702C8E0: jne 0x1702c96b */
L_1702C8E6:
    eax = MEM32(esi + 0xC); /* 0x1702C8E6: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C8E9: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702C8EB: push ebx */
    PUSH32(esp, edi); /* 0x1702C8EC: push edi */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x1702C8ED: push dword ptr [esi + 0x44] */
    PUSH32(esp, 0x65u); /* 0x1702C8F0: push 0x65 */
    PUSH32(esp, 8); /* 0x1702C8F2: push 8 */
    PUSH32(esp, 0xC000u); /* 0x1702C8F4: push 0xc000 */
    PUSH32(esp, eax); /* 0x1702C8F9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x6C)); /* 0x1702C8FA: call dword ptr [ecx + 0x6c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1702C8FD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1702CFE2; /* 0x1702C8FF: jl 0x1702cfe2 */
L_1702C905:
    eax = MEM32(edi); /* 0x1702C905: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x1702C907: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702C909: push ebx */
    edx = ebp + 0x8; /* 0x1702C90A: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1702C90D: push edx */
    PUSH32(esp, ebx); /* 0x1702C90E: push ebx */
    PUSH32(esp, ebx); /* 0x1702C90F: push ebx */
    PUSH32(esp, eax); /* 0x1702C910: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1702C911: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x1702C914: push 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702C916: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1702C918: pop eax */
L_1702C919:
    edx = MEM32(ebp + 0x8); /* 0x1702C919: mov edx, dword ptr [ebp + 8] */
    MEM16(eax + edx + (-0x6)) = (uint16_t)(LO16(ecx)); /* 0x1702C91C: mov word ptr [eax + edx - 6], cx */
    edi = MEM32(ebp + 0x8); /* 0x1702C921: mov edi, dword ptr [ebp + 8] */
    edx = ecx + 0x1; /* 0x1702C924: lea edx, [ecx + 1] */
    MEM16(eax + edi + (-0x4)) = (uint16_t)(LO16(edx)); /* 0x1702C927: mov word ptr [eax + edi - 4], dx */
    edi = MEM32(ebp + 0x8); /* 0x1702C92C: mov edi, dword ptr [ebp + 8] */
    edx = ecx + 0x2; /* 0x1702C92F: lea edx, [ecx + 2] */
    MEM16(eax + edi + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x1702C932: mov word ptr [eax + edi - 2], dx */
    edi = MEM32(ebp + 0x8); /* 0x1702C937: mov edi, dword ptr [ebp + 8] */
    MEM16(eax + edi) = (uint16_t)(LO16(edx)); /* 0x1702C93A: mov word ptr [eax + edi], dx */
    edi = MEM32(ebp + 0x8); /* 0x1702C93E: mov edi, dword ptr [ebp + 8] */
    edx = ecx + 0x1; /* 0x1702C941: lea edx, [ecx + 1] */
    MEM16(eax + edi + 0x2) = (uint16_t)(LO16(edx)); /* 0x1702C944: mov word ptr [eax + edi + 2], dx */
    edi = MEM32(ebp + 0x8); /* 0x1702C949: mov edi, dword ptr [ebp + 8] */
    edx = ecx + 0x3; /* 0x1702C94C: lea edx, [ecx + 3] */
    MEM16(eax + edi + 0x4) = (uint16_t)(LO16(edx)); /* 0x1702C94F: mov word ptr [eax + edi + 4], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1702C954: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1702C957: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x4000u */ /* 0x1702C95A: cmp ecx, 0x4000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702C919; /* 0x1702C960: jb 0x1702c919 */
L_1702C962:
    eax = MEM32(esi + 0x14); /* 0x1702C962: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(eax); /* 0x1702C965: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C967: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1702C968: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1702C96B:
    ecx = esi + 0x18; /* 0x1702C96B: lea ecx, [esi + 0x18] */
    /* cmp MEM32(ecx), ebx */ /* 0x1702C96E: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702C999; /* 0x1702C970: jne 0x1702c999 */
L_1702C972:
    eax = MEM32(esi + 0xC); /* 0x1702C972: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(eax); /* 0x1702C975: mov edx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702C977: push ebx */
    PUSH32(esp, ecx); /* 0x1702C978: push ecx */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x1702C979: push dword ptr [esi + 0x44] */
    PUSH32(esp, ebx); /* 0x1702C97C: push ebx */
    PUSH32(esp, 0x208u); /* 0x1702C97D: push 0x208 */
    PUSH32(esp, 0x00060000u); /* 0x1702C982: push 0x60000 */
    PUSH32(esp, eax); /* 0x1702C987: push eax */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x1702C988: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1702C98B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1702CFE2; /* 0x1702C98D: jl 0x1702cfe2 */
L_1702C993:
    MEM32(esi + 0x1C) = ebx; /* 0x1702C993: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x1702C996: mov dword ptr [esi + 0x20], ebx */
L_1702C999:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702C999: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1702C99B: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1702C99C: push edi */
    RECOMP_CALL(sub_1702BB20); /* 0x1702C99D: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x1702C9A2: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CCB0; /* 0x1702C9A5: jne 0x1702ccb0 */
L_1702C9AB:
    MEM32(ebp + 0x8) = ebx; /* 0x1702C9AB: mov dword ptr [ebp + 8], ebx */
L_1702C9AE:
    eax = MEM32(esi + 0xC); /* 0x1702C9AE: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C9B1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C9B3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x1702C9B4: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702C9BA: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1702C9BD: push dword ptr [esi + 0x10] */
    ecx = MEM32(eax); /* 0x1702C9C0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702C9C2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1702C9C3: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702C9C9: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C9CC: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702C9CE: push ebx */
    PUSH32(esp, eax); /* 0x1702C9CF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x170)); /* 0x1702C9D0: call dword ptr [ecx + 0x170] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702C9D6: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C9D9: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702C9DB: push ebx */
    PUSH32(esp, eax); /* 0x1702C9DC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x1702C9DD: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702C9E3: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C9E6: mov ecx, dword ptr [eax] */
    PUSH32(esp, 3); /* 0x1702C9E8: push 3 */
    PUSH32(esp, 8); /* 0x1702C9EA: push 8 */
    PUSH32(esp, eax); /* 0x1702C9EC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702C9ED: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702C9F3: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702C9F6: mov ecx, dword ptr [eax] */
    PUSH32(esp, 2); /* 0x1702C9F8: push 2 */
    PUSH32(esp, 9); /* 0x1702C9FA: push 9 */
    PUSH32(esp, eax); /* 0x1702C9FC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702C9FD: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA03: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA06: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CA08: push edi */
    PUSH32(esp, 0x16u); /* 0x1702CA09: push 0x16 */
    PUSH32(esp, eax); /* 0x1702CA0B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA0C: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA12: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA15: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA17: push ebx */
    PUSH32(esp, 0x80u); /* 0x1702CA18: push 0x80 */
    PUSH32(esp, eax); /* 0x1702CA1D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA1E: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA24: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA27: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CA29: push edi */
    PUSH32(esp, 0x88u); /* 0x1702CA2A: push 0x88 */
    PUSH32(esp, eax); /* 0x1702CA2F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA30: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA36: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA39: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA3B: push ebx */
    PUSH32(esp, 0x97u); /* 0x1702CA3C: push 0x97 */
    PUSH32(esp, eax); /* 0x1702CA41: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA42: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA48: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA4B: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA4D: push ebx */
    PUSH32(esp, 0x98u); /* 0x1702CA4E: push 0x98 */
    PUSH32(esp, eax); /* 0x1702CA53: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA54: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1702CA5A: fldz  */
    eax = MEM32(esi + 0xC); /* 0x1702CA5C: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA5F: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1702CA61: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1702CA62: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1702CA65: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x13C)); /* 0x1702CA66: call dword ptr [ecx + 0x13c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA6C: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA6F: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA71: push ebx */
    PUSH32(esp, 0xA7u); /* 0x1702CA72: push 0xa7 */
    PUSH32(esp, eax); /* 0x1702CA77: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA78: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA7E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA81: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA83: push ebx */
    PUSH32(esp, 0xB8u); /* 0x1702CA84: push 0xb8 */
    PUSH32(esp, eax); /* 0x1702CA89: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA8A: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CA90: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CA93: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CA95: push ebx */
    PUSH32(esp, 0xC2u); /* 0x1702CA96: push 0xc2 */
    PUSH32(esp, eax); /* 0x1702CA9B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CA9C: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAA2: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAA5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xFu); /* 0x1702CAA7: push 0xf */
    PUSH32(esp, 0xA8u); /* 0x1702CAA9: push 0xa8 */
    PUSH32(esp, eax); /* 0x1702CAAE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CAAF: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAB5: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAB8: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CABA: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1702CABB: push 0x1c */
    PUSH32(esp, eax); /* 0x1702CABD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CABE: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAC4: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAC7: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CAC9: push ebx */
    PUSH32(esp, 0x30u); /* 0x1702CACA: push 0x30 */
    PUSH32(esp, eax); /* 0x1702CACC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CACD: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAD3: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAD6: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CAD8: push ebx */
    PUSH32(esp, 0x1Du); /* 0x1702CAD9: push 0x1d */
    PUSH32(esp, eax); /* 0x1702CADB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CADC: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAE2: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAE5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CAE7: push ebx */
    PUSH32(esp, 0x34u); /* 0x1702CAE8: push 0x34 */
    PUSH32(esp, eax); /* 0x1702CAEA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CAEB: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CAF1: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CAF4: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CAF6: push ebx */
    PUSH32(esp, 0x89u); /* 0x1702CAF7: push 0x89 */
    PUSH32(esp, eax); /* 0x1702CAFC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CAFD: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB03: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB06: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CB08: push edi */
    PUSH32(esp, 0x91u); /* 0x1702CB09: push 0x91 */
    PUSH32(esp, eax); /* 0x1702CB0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CB0F: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB15: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB18: mov ecx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x1702CB1A: push 4 */
    PUSH32(esp, edi); /* 0x1702CB1C: push edi */
    PUSH32(esp, ebx); /* 0x1702CB1D: push ebx */
    PUSH32(esp, eax); /* 0x1702CB1E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB1F: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB25: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB28: mov ecx, dword ptr [eax] */
    PUSH32(esp, 2); /* 0x1702CB2A: push 2 */
    PUSH32(esp, 2); /* 0x1702CB2C: push 2 */
    PUSH32(esp, ebx); /* 0x1702CB2E: push ebx */
    PUSH32(esp, eax); /* 0x1702CB2F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB30: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB36: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB39: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CB3B: push ebx */
    PUSH32(esp, 3); /* 0x1702CB3C: push 3 */
    PUSH32(esp, ebx); /* 0x1702CB3E: push ebx */
    PUSH32(esp, eax); /* 0x1702CB3F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB40: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB46: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB49: mov ecx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x1702CB4B: push 4 */
    PUSH32(esp, 4); /* 0x1702CB4D: push 4 */
    PUSH32(esp, ebx); /* 0x1702CB4F: push ebx */
    PUSH32(esp, eax); /* 0x1702CB50: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB51: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB57: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB5A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 2); /* 0x1702CB5C: push 2 */
    PUSH32(esp, 5); /* 0x1702CB5E: push 5 */
    PUSH32(esp, ebx); /* 0x1702CB60: push ebx */
    PUSH32(esp, eax); /* 0x1702CB61: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB62: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB68: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB6B: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CB6D: push ebx */
    PUSH32(esp, 6); /* 0x1702CB6E: push 6 */
    PUSH32(esp, ebx); /* 0x1702CB70: push ebx */
    PUSH32(esp, eax); /* 0x1702CB71: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB72: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB78: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CB7D: push ebx */
    PUSH32(esp, 0xBu); /* 0x1702CB7E: push 0xb */
    PUSH32(esp, ebx); /* 0x1702CB80: push ebx */
    PUSH32(esp, eax); /* 0x1702CB81: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB82: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB88: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB8B: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CB8D: push ebx */
    PUSH32(esp, 0x18u); /* 0x1702CB8E: push 0x18 */
    PUSH32(esp, ebx); /* 0x1702CB90: push ebx */
    PUSH32(esp, eax); /* 0x1702CB91: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CB92: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CB98: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CB9B: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CB9D: push edi */
    PUSH32(esp, edi); /* 0x1702CB9E: push edi */
    PUSH32(esp, edi); /* 0x1702CB9F: push edi */
    PUSH32(esp, eax); /* 0x1702CBA0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CBA1: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CBA7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CBAA: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CBAC: push edi */
    PUSH32(esp, 4); /* 0x1702CBAD: push 4 */
    PUSH32(esp, edi); /* 0x1702CBAF: push edi */
    PUSH32(esp, eax); /* 0x1702CBB0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x1702CBB1: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CBB7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CBBA: mov ecx, dword ptr [eax] */
    PUSH32(esp, 3); /* 0x1702CBBC: push 3 */
    PUSH32(esp, edi); /* 0x1702CBBE: push edi */
    PUSH32(esp, ebx); /* 0x1702CBBF: push ebx */
    PUSH32(esp, eax); /* 0x1702CBC0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CBC1: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CBC7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CBCA: mov ecx, dword ptr [eax] */
    PUSH32(esp, 3); /* 0x1702CBCC: push 3 */
    PUSH32(esp, 2); /* 0x1702CBCE: push 2 */
    PUSH32(esp, ebx); /* 0x1702CBD0: push ebx */
    PUSH32(esp, eax); /* 0x1702CBD1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CBD2: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x1702CBD8: push dword ptr [esi + 0x48] */
    eax = MEM32(esi + 0xC); /* 0x1702CBDB: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CBDE: mov ecx, dword ptr [eax] */
    PUSH32(esp, 5); /* 0x1702CBE0: push 5 */
    PUSH32(esp, ebx); /* 0x1702CBE2: push ebx */
    PUSH32(esp, eax); /* 0x1702CBE3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CBE4: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x1702CBEA: push dword ptr [esi + 0x4c] */
    eax = MEM32(esi + 0xC); /* 0x1702CBED: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CBF0: mov ecx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1702CBF2: push 6 */
    PUSH32(esp, ebx); /* 0x1702CBF4: push ebx */
    PUSH32(esp, eax); /* 0x1702CBF5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CBF6: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1702CBFC: push dword ptr [esi + 0x50] */
    eax = MEM32(esi + 0xC); /* 0x1702CBFF: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC02: mov ecx, dword ptr [eax] */
    PUSH32(esp, 7); /* 0x1702CC04: push 7 */
    PUSH32(esp, ebx); /* 0x1702CC06: push ebx */
    PUSH32(esp, eax); /* 0x1702CC07: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CC08: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC0E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC11: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC13: push ebx */
    PUSH32(esp, 8); /* 0x1702CC14: push 8 */
    PUSH32(esp, ebx); /* 0x1702CC16: push ebx */
    PUSH32(esp, eax); /* 0x1702CC17: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CC18: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC1E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC21: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC23: push ebx */
    PUSH32(esp, 9); /* 0x1702CC24: push 9 */
    PUSH32(esp, ebx); /* 0x1702CC26: push ebx */
    PUSH32(esp, eax); /* 0x1702CC27: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CC28: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x1702CC2E: push dword ptr [esi + 0x54] */
    eax = MEM32(esi + 0xC); /* 0x1702CC31: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC34: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xAu); /* 0x1702CC36: push 0xa */
    PUSH32(esp, ebx); /* 0x1702CC38: push ebx */
    PUSH32(esp, eax); /* 0x1702CC39: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CC3A: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC40: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC43: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC45: push ebx */
    PUSH32(esp, 0xBu); /* 0x1702CC46: push 0xb */
    PUSH32(esp, ebx); /* 0x1702CC48: push ebx */
    PUSH32(esp, eax); /* 0x1702CC49: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x1702CC4A: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1702CC50: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CF76; /* 0x1702CC53: jne 0x1702cf76 */
L_1702CC59:
    eax = MEM32(esi + 0xC); /* 0x1702CC59: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1702CC5C: push dword ptr [esi + 0x10] */
    ecx = MEM32(eax); /* 0x1702CC5F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CC61: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1702CC62: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC68: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC6B: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC6D: push ebx */
    PUSH32(esp, eax); /* 0x1702CC6E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1A0)); /* 0x1702CC6F: call dword ptr [ecx + 0x1a0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC75: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC78: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC7A: push ebx */
    PUSH32(esp, ebx); /* 0x1702CC7B: push ebx */
    PUSH32(esp, ebx); /* 0x1702CC7C: push ebx */
    PUSH32(esp, ebx); /* 0x1702CC7D: push ebx */
    PUSH32(esp, eax); /* 0x1702CC7E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x1702CC7F: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CC85: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CC88: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CC8A: push ebx */
    PUSH32(esp, ebx); /* 0x1702CC8B: push ebx */
    PUSH32(esp, eax); /* 0x1702CC8C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x1702CC8D: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x24; /* 0x1702CC93: lea ecx, [esi + 0x24] */
L_1702CC96:
    eax = MEM32(esi + 0xC); /* 0x1702CC96: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(eax); /* 0x1702CC99: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1702CC9B: push ecx */
    PUSH32(esp, eax); /* 0x1702CC9C: push eax */
    RECOMP_ICALL(MEM32(edx + 0xF4)); /* 0x1702CC9D: call dword ptr [edx + 0xf4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1702CCA3: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x1702CCA6: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702C9AE; /* 0x1702CCAA: jb 0x1702c9ae */
L_1702CCB0:
    /* cmp MEM32(esi + 0x2C), ebx */ /* 0x1702CCB0: cmp dword ptr [esi + 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CD8B; /* 0x1702CCB3: jne 0x1702cd8b */
L_1702CCB9:
    MEM32(ebp + 0x8) = ebx; /* 0x1702CCB9: mov dword ptr [ebp + 8], ebx */
L_1702CCBC:
    eax = MEM32(esi + 0xC); /* 0x1702CCBC: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CCBF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CCC1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x1702CCC2: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CCC8: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CCCB: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702CCCD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x58), ebx */ /* 0x1702CCCF: cmp dword ptr [esi + 0x58], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1702CCD2: setne dl */
    PUSH32(esp, edx); /* 0x1702CCD5: push edx */
    PUSH32(esp, 0xFu); /* 0x1702CCD6: push 0xf */
    PUSH32(esp, eax); /* 0x1702CCD8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CCD9: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x5C); /* 0x1702CCDF: mov edx, dword ptr [esi + 0x5c] */
    eax = MEM32(esi + 0xC); /* 0x1702CCE2: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CCE5: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1702CCE7: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702CCE9: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFC1u);
    edx = edx & 0xFFFFFFC1u; /* 0x1702CCEB: and edx, 0xffffffc1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x3Fu; /* 0x1702CCEE: add edx, 0x3f */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1702CCF1: push edx */
    PUSH32(esp, 0x18u); /* 0x1702CCF2: push 0x18 */
    PUSH32(esp, eax); /* 0x1702CCF4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CCF5: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CCFB: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CCFE: mov ecx, dword ptr [eax] */
    PUSH32(esp, 5); /* 0x1702CD00: push 5 */
    PUSH32(esp, 0x19u); /* 0x1702CD02: push 0x19 */
    PUSH32(esp, eax); /* 0x1702CD04: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD05: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CD0B: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD0E: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702CD10: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x5C), ebx */ /* 0x1702CD12: cmp dword ptr [esi + 0x5c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1702CD15: setne dl */
    PUSH32(esp, edx); /* 0x1702CD18: push edx */
    PUSH32(esp, 0x1Bu); /* 0x1702CD19: push 0x1b */
    PUSH32(esp, eax); /* 0x1702CD1B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD1C: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CD22: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD25: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1702CD27: push ebx */
    PUSH32(esp, 0xCEu); /* 0x1702CD28: push 0xce */
    PUSH32(esp, eax); /* 0x1702CD2D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD2E: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CD34: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD37: mov ecx, dword ptr [eax] */
    PUSH32(esp, 5); /* 0x1702CD39: push 5 */
    PUSH32(esp, 0x13u); /* 0x1702CD3B: push 0x13 */
    PUSH32(esp, eax); /* 0x1702CD3D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD3E: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CD44: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD47: mov ecx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1702CD49: push 6 */
    PUSH32(esp, 0x14u); /* 0x1702CD4B: push 0x14 */
    PUSH32(esp, eax); /* 0x1702CD4D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD4E: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CD54: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD57: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702CD59: push edi */
    PUSH32(esp, 0xABu); /* 0x1702CD5A: push 0xab */
    PUSH32(esp, eax); /* 0x1702CD5F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x1702CD60: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1702CD66: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi + 0x30; /* 0x1702CD69: lea ecx, [esi + 0x30] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CD71; /* 0x1702CD6C: jne 0x1702cd71 */
L_1702CD6E:
    ecx = esi + 0x2C; /* 0x1702CD6E: lea ecx, [esi + 0x2c] */
L_1702CD71:
    eax = MEM32(esi + 0xC); /* 0x1702CD71: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(eax); /* 0x1702CD74: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1702CD76: push ecx */
    PUSH32(esp, eax); /* 0x1702CD77: push eax */
    RECOMP_ICALL(MEM32(edx + 0xF4)); /* 0x1702CD78: call dword ptr [edx + 0xf4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1702CD7E: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x1702CD81: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702CCBC; /* 0x1702CD85: jb 0x1702ccbc */
L_1702CD8B:
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x1702CD8B: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CE52; /* 0x1702CD8E: jne 0x1702ce52 */
L_1702CD94:
    MEM32(ebp + 0x8) = ebx; /* 0x1702CD94: mov dword ptr [ebp + 8], ebx */
L_1702CD97:
    eax = MEM32(esi + 0xC); /* 0x1702CD97: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CD9A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CD9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x1702CD9D: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1702CDA3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1702CDA5: fstp dword ptr [ebp - 0x20] */
    eax = MEM32(esi + 0xC); /* 0x1702CDA8: mov eax, dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x1702CDAB: fldz  */
    edx = ebp + (-0x58); /* 0x1702CDAD: lea edx, [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702CDB0: fstp dword ptr [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x1702CDB3: push edx */
    fp_push(0.0); /* 0x1702CDB4: fldz  */
    PUSH32(esp, 0x100u); /* 0x1702CDB6: push 0x100 */
    PUSH32(esp, eax); /* 0x1702CDBB: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1702CDBC: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1702CDBF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1702CDC1: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x1702CDC4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1702CDC6: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x1702CDC9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1702CDCB: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x1702CDCE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1702CDD0: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x1702CDD3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1702CDD5: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1702CDD8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1702CDDA: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x1702CDDD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1702CDDF: fstp dword ptr [ebp - 0x4c] */
    fp_push(0.0); /* 0x1702CDE2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1702CDE4: fstp dword ptr [ebp - 0x50] */
    fp_push(0.0); /* 0x1702CDE7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1702CDE9: fstp dword ptr [ebp - 0x54] */
    fp_push(1.0); /* 0x1702CDEC: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1702CDEE: fstp dword ptr [ebp - 0x1c] */
    fp_push(1.0); /* 0x1702CDF1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1702CDF3: fstp dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x1702CDF6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1702CDF8: fstp dword ptr [ebp - 0x44] */
    fp_push(1.0); /* 0x1702CDFB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1702CDFD: fstp dword ptr [ebp - 0x58] */
    ecx = MEM32(eax); /* 0x1702CE00: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x1702CE02: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CE08: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CE0B: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1702CE0D: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1702CE10: push edx */
    PUSH32(esp, 2); /* 0x1702CE11: push 2 */
    PUSH32(esp, eax); /* 0x1702CE13: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x1702CE14: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1702CE1A: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702CF7E; /* 0x1702CE1D: jne 0x1702cf7e */
L_1702CE23:
    eax = MEM32(esi + 0xC); /* 0x1702CE23: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CE26: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1702CE28: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1702CE2B: push edx */
    PUSH32(esp, 3); /* 0x1702CE2C: push 3 */
    PUSH32(esp, eax); /* 0x1702CE2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x1702CE2F: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x34; /* 0x1702CE35: lea ecx, [esi + 0x34] */
L_1702CE38:
    eax = MEM32(esi + 0xC); /* 0x1702CE38: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(eax); /* 0x1702CE3B: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1702CE3D: push ecx */
    PUSH32(esp, eax); /* 0x1702CE3E: push eax */
    RECOMP_ICALL(MEM32(edx + 0xF4)); /* 0x1702CE3F: call dword ptr [edx + 0xf4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1702CE45: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x1702CE48: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702CD97; /* 0x1702CE4C: jb 0x1702cd97 */
L_1702CE52:
    eax = MEM32(esi + 0xB0); /* 0x1702CE52: mov eax, dword ptr [esi + 0xb0] */
    /* test LO8(eax), 2 */ /* 0x1702CE58: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CE72; /* 0x1702CE5A: jne 0x1702ce72 */
L_1702CE5C:
    /* test LO8(eax), 1 */ /* 0x1702CE5C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CE69; /* 0x1702CE5E: jne 0x1702ce69 */
L_1702CE60:
    eax = MEM32(esi + 0x24); /* 0x1702CE60: mov eax, dword ptr [esi + 0x24] */
    ecx = MEM32(eax); /* 0x1702CE63: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CE65: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1702CE66: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1702CE69:
    eax = MEM32(esi + 0x28); /* 0x1702CE69: mov eax, dword ptr [esi + 0x28] */
    ecx = MEM32(eax); /* 0x1702CE6C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CE6E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702CE6F: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702CE72:
    eax = MEM32(esi + 0xB0); /* 0x1702CE72: mov eax, dword ptr [esi + 0xb0] */
    /* test LO8(eax), 0x10u */ /* 0x1702CE78: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702CE92; /* 0x1702CE7A: je 0x1702ce92 */
L_1702CE7C:
    /* test LO8(eax), 1 */ /* 0x1702CE7C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CE89; /* 0x1702CE7E: jne 0x1702ce89 */
L_1702CE80:
    eax = MEM32(esi + 0x2C); /* 0x1702CE80: mov eax, dword ptr [esi + 0x2c] */
    ecx = MEM32(eax); /* 0x1702CE83: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CE85: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1702CE86: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1702CE89:
    eax = MEM32(esi + 0x30); /* 0x1702CE89: mov eax, dword ptr [esi + 0x30] */
    ecx = MEM32(eax); /* 0x1702CE8C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CE8E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702CE8F: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702CE92:
    eax = MEM32(esi + 0xB0); /* 0x1702CE92: mov eax, dword ptr [esi + 0xb0] */
    /* test LO8(eax), 4 */ /* 0x1702CE98: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CF86; /* 0x1702CE9A: jne 0x1702cf86 */
L_1702CEA0:
    /* test LO8(eax), 1 */ /* 0x1702CEA0: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CEAD; /* 0x1702CEA2: jne 0x1702cead */
L_1702CEA4:
    eax = MEM32(esi + 0x34); /* 0x1702CEA4: mov eax, dword ptr [esi + 0x34] */
    ecx = MEM32(eax); /* 0x1702CEA7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CEA9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1702CEAA: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1702CEAD:
    eax = MEM32(esi + 0x38); /* 0x1702CEAD: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(eax); /* 0x1702CEB0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CEB2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702CEB3: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x1702CEB6: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1702CEB9: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x18); /* 0x1702CEBB: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1702CEBE: push edx */
    PUSH32(esp, eax); /* 0x1702CEBF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC0)); /* 0x1702CEC0: call dword ptr [ecx + 0xc0] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702CEC6: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + (-0x10)); /* 0x1702CECC: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1702CECF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1702CED1: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1702CED4: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702CEDF; /* 0x1702CED7: jge 0x1702cedf */
L_1702CED9:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702CED9: fadd dword ptr [0x1700142c] */
L_1702CEDF:
    eax = MEM32(ebp + (-0xC)); /* 0x1702CEDF: mov eax, dword ptr [ebp - 0xc] */
    _st[0] = _st[1] / _st[0]; /* 0x1702CEE2: fdivr st(1) */
    /* test eax, eax */ /* 0x1702CEE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x1702CEE6: fild dword ptr [ebp - 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702CEF1; /* 0x1702CEE9: jge 0x1702cef1 */
L_1702CEEB:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702CEEB: fadd dword ptr [0x1700142c] */
L_1702CEF1:
    _st[0] = _st[2] / _st[0]; /* 0x1702CEF1: fdivr st(2) */
    PUSH32(esp, 0x10u); /* 0x1702CEF3: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702CEF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702CEF7: pop ecx */
    edi = ebp + (-0x58); /* 0x1702CEF8: lea edi, [ebp - 0x58] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1702CEFB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x18)); /* 0x1702CEFD: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1702CF00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1702CF02: mov dword ptr [ebp + 0xc], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1702CF05: fstp dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1702CF08: fld st(0) */
    _st[0] += _st[1]; /* 0x1702CF0A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1702CF0C: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(0x17001688)); /* 0x1702CF0F: fld dword ptr [0x17001688] */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1702CF15: fild dword ptr [ebp + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702CF20; /* 0x1702CF18: jge 0x1702cf20 */
L_1702CF1A:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702CF1A: fadd dword ptr [0x1700142c] */
L_1702CF20:
    _st[0] *= _st[2]; /* 0x1702CF20: fmul st(2) */
    eax = MEM32(ebp + (-0x14)); /* 0x1702CF22: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x1702CF25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x1702CF27: fmul st(1) */
    _st[0] -= _st[2]; /* 0x1702CF29: fsub st(2) */
    _st[0] -= _st[3]; /* 0x1702CF2B: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1702CF2D: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1702CF30: fld dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x1702CF33: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1702CF35: fstp dword ptr [ebp - 0x44] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702CF38: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702CF3A: fstp st(0) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x1702CF3C: fild dword ptr [ebp - 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702CF47; /* 0x1702CF3F: jge 0x1702cf47 */
L_1702CF41:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702CF41: fadd dword ptr [0x1700142c] */
L_1702CF47:
    _st[0] += _st[0]; /* 0x1702CF47: fadd st(0), st(0) */
    eax = MEM32(esi + 0xC); /* 0x1702CF49: mov eax, dword ptr [esi + 0xc] */
    edx = ebp + (-0x58); /* 0x1702CF4C: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1702CF4F: push edx */
    _st[0] += _st[1]; /* 0x1702CF50: fadd st(1) */
    PUSH32(esp, 3); /* 0x1702CF52: push 3 */
    PUSH32(esp, eax); /* 0x1702CF54: push eax */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1702CF55: fmul dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x1702CF58: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702CF5A: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702CF5D: fstp st(0) */
    fp_push(1.0); /* 0x1702CF5F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1702CF61: fstp dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x1702CF64: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1702CF66: fstp dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1702CF69: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x1702CF6B: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702CF71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1702CF73: inc edi */
    _flag_k = FK_INC;
    goto L_1702CFA0; /* 0x1702CF74: jmp 0x1702cfa0 */
L_1702CF76:
    ecx = esi + 0x28; /* 0x1702CF76: lea ecx, [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_1702CC96; /* 0x1702CF79: jmp 0x1702cc96 */
L_1702CF7E:
    ecx = esi + 0x38; /* 0x1702CF7E: lea ecx, [esi + 0x38] */
    RECOMP_BACKEDGE();
    goto L_1702CE38; /* 0x1702CF81: jmp 0x1702ce38 */
L_1702CF86:
    /* test LO8(eax), 8 */ /* 0x1702CF86: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702CFA0; /* 0x1702CF88: je 0x1702cfa0 */
L_1702CF8A:
    /* test LO8(eax), 1 */ /* 0x1702CF8A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702CF97; /* 0x1702CF8C: jne 0x1702cf97 */
L_1702CF8E:
    eax = MEM32(esi + 0x34); /* 0x1702CF8E: mov eax, dword ptr [esi + 0x34] */
    ecx = MEM32(eax); /* 0x1702CF91: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CF93: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1702CF94: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1702CF97:
    eax = MEM32(esi + 0x38); /* 0x1702CF97: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(eax); /* 0x1702CF9A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702CF9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1702CF9D: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
L_1702CFA0:
    PUSH32(esp, ebx); /* 0x1702CFA0: push ebx */
    RECOMP_CALL(sub_1702BB20); /* 0x1702CFA1: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1702CFA6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xE0) = _v; } /* 0x1702CFA8: fstp dword ptr [esi + 0xe0] */
    MEM32(esi + 0xC4) = ebx; /* 0x1702CFAE: mov dword ptr [esi + 0xc4], ebx */
    fp_push(0.0); /* 0x1702CFB4: fldz  */
    MEM32(esi + 0xCC) = ebx; /* 0x1702CFB6: mov dword ptr [esi + 0xcc], ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xE4) = _v; } /* 0x1702CFBC: fstp dword ptr [esi + 0xe4] */
    MEM32(esi + 0xD0) = ebx; /* 0x1702CFC2: mov dword ptr [esi + 0xd0], ebx */
    MEM32(esi + 0xD4) = ebx; /* 0x1702CFC8: mov dword ptr [esi + 0xd4], ebx */
    MEM32(esi + 0xD8) = ebx; /* 0x1702CFCE: mov dword ptr [esi + 0xd8], ebx */
    MEM32(esi + 0xDC) = ebx; /* 0x1702CFD4: mov dword ptr [esi + 0xdc], ebx */
    MEM32(esi + 0xAC) = edi; /* 0x1702CFDA: mov dword ptr [esi + 0xac], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702CFE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702CFE2:
    edi = POP32_VAL(esp); /* 0x1702CFE2: pop edi */
L_1702CFE3:
    esi = POP32_VAL(esp); /* 0x1702CFE3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702CFE4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702CFE5: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702CFE6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702CFEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702CFEEu);

L_1702CFEE:
    edi = edi; /* 0x1702CFEE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702CFF0: push ebp */
    ebp = esp; /* 0x1702CFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1702CFF3: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1702CFF6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702CFF7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702CFFA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702CFFB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xAC), esi */ /* 0x1702CFFD: cmp dword ptr [ebx + 0xac], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xAC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D00C; /* 0x1702D003: je 0x1702d00c */
L_1702D005:
    eax = MEM32(ebp + 0xC); /* 0x1702D005: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, esi */ /* 0x1702D008: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D016; /* 0x1702D00A: jne 0x1702d016 */
L_1702D00C:
    eax = 0x8876086Cu; /* 0x1702D00C: mov eax, 0x8876086c */
    goto L_1702D4F4; /* 0x1702D011: jmp 0x1702d4f4 */
L_1702D016:
    ecx = MEM32(ebx + 0xC8); /* 0x1702D016: mov ecx, dword ptr [ebx + 0xc8] */
    /* cmp MEM32(ebx + 0xC4), ecx */ /* 0x1702D01C: cmp dword ptr [ebx + 0xc4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1702D022: push edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D14F; /* 0x1702D023: jb 0x1702d14f */
L_1702D029:
    /* cmp ecx, esi */ /* 0x1702D029: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D035; /* 0x1702D02B: je 0x1702d035 */
L_1702D02D:
    eax = ecx + ecx; /* 0x1702D02D: lea eax, [ecx + ecx] */
    MEM32(ebp + 0x8) = eax; /* 0x1702D030: mov dword ptr [ebp + 8], eax */
    goto L_1702D03C; /* 0x1702D033: jmp 0x1702d03c */
L_1702D035:
    MEM32(ebp + 0x8) = 0x40u; /* 0x1702D035: mov dword ptr [ebp + 8], 0x40 */
L_1702D03C:
    eax = MEM32(ebp + 0x8); /* 0x1702D03C: mov eax, dword ptr [ebp + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1702D03F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1702D03F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1702D042: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702D043: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702D046: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702D04B: mov edi, eax */
    /* cmp edi, esi */ /* 0x1702D04D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1702D04F: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D05C; /* 0x1702D050: jne 0x1702d05c */
L_1702D052:
    eax = 0x8007000Eu; /* 0x1702D052: mov eax, 0x8007000e */
    goto L_1702D4F3; /* 0x1702D057: jmp 0x1702d4f3 */
L_1702D05C:
    esi = ebx + 0xB4; /* 0x1702D05C: lea esi, [ebx + 0xb4] */
    PUSH32(esp, MEM32(esi)); /* 0x1702D062: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1702D064: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1702D069: push dword ptr [ebp - 4] */
    MEM32(esi) = edi; /* 0x1702D06C: mov dword ptr [esi], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1702D06E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702D073: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702D075: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1702D076: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702D077: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D052; /* 0x1702D07A: je 0x1702d052 */
L_1702D07C:
    ecx = MEM32(ebx + 0xC4); /* 0x1702D07C: mov ecx, dword ptr [ebx + 0xc4] */
    esi = MEM32(ebx + 0xB8); /* 0x1702D082: mov esi, dword ptr [ebx + 0xb8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1702D088: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1702D088: shl ecx, 2 */
    edi = eax; /* 0x1702D08B: mov edi, eax */
    eax = ecx; /* 0x1702D08D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702D08F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702D08F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702D092: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702D094: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702D096: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702D099: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xB8)); /* 0x1702D09B: push dword ptr [ebx + 0xb8] */
    RECOMP_CALL(sub_1721B010); /* 0x1702D0A1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1702D0A6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1702D0A9: mov eax, dword ptr [ebp - 4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1702D0AC: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1702D0AC: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1702D0AF: push esi */
    MEM32(ebx + 0xB8) = eax; /* 0x1702D0B0: mov dword ptr [ebx + 0xb8], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702D0B6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702D0BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702D0BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1702D0BE: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702D0BF: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D052; /* 0x1702D0C2: je 0x1702d052 */
L_1702D0C4:
    edi = ebx + 0xBC; /* 0x1702D0C4: lea edi, [ebx + 0xbc] */
    PUSH32(esp, MEM32(edi)); /* 0x1702D0CA: push dword ptr [edi] */
    RECOMP_CALL(sub_1721B010); /* 0x1702D0CC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1702D0D1: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = eax; /* 0x1702D0D4: mov dword ptr [edi], eax */
    eax = esi + esi * 2; /* 0x1702D0D6: lea eax, [esi + esi*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1702D0D9: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1702D0D9: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1702D0DC: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702D0DD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702D0E2: mov edi, eax */
    /* test edi, edi */ /* 0x1702D0E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702D0E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1702D0E7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D0FD; /* 0x1702D0E8: je 0x1702d0fd */
L_1702D0EA:
    PUSH32(esp, 0x1706E47Eu); /* 0x1702D0EA: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1702D0EF: push esi */
    PUSH32(esp, 0x18u); /* 0x1702D0F0: push 0x18 */
    PUSH32(esp, edi); /* 0x1702D0F2: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1702D0F3: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1702D0F8: mov dword ptr [ebp - 4], edi */
    goto L_1702D101; /* 0x1702D0FB: jmp 0x1702d101 */
L_1702D0FD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1702D0FD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D101:
    edi = MEM32(ebp + (-0x4)); /* 0x1702D101: mov edi, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x1702D104: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D052; /* 0x1702D106: je 0x1702d052 */
L_1702D10C:
    eax = MEM32(ebx + 0xC4); /* 0x1702D10C: mov eax, dword ptr [ebx + 0xc4] */
    esi = MEM32(ebx + 0xC0); /* 0x1702D112: mov esi, dword ptr [ebx + 0xc0] */
    ecx = eax + eax * 2; /* 0x1702D118: lea ecx, [eax + eax*2] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x1702D11B: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x1702D11B: shl ecx, 5 */
    eax = ecx; /* 0x1702D11E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702D120: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702D120: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702D123: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702D125: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702D127: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702D12A: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xC0)); /* 0x1702D12C: push dword ptr [ebx + 0xc0] */
    RECOMP_CALL(sub_1721B010); /* 0x1702D132: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1702D137: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC0) = eax; /* 0x1702D13A: mov dword ptr [ebx + 0xc0], eax */
    eax = MEM32(ebp + 0x8); /* 0x1702D140: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0xC8) = eax; /* 0x1702D143: mov dword ptr [ebx + 0xc8], eax */
    eax = MEM32(ebp + 0xC); /* 0x1702D149: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1702D14C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702D14D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D14F:
    /* cmp MEM32(ebx + 0xD4), eax */ /* 0x1702D14F: cmp dword ptr [ebx + 0xd4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D1C0; /* 0x1702D155: je 0x1702d1c0 */
L_1702D157:
    /* cmp MEM32(ebx + 0xC4), esi */ /* 0x1702D157: cmp dword ptr [ebx + 0xc4], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0xD4) = eax; /* 0x1702D15D: mov dword ptr [ebx + 0xd4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D16B; /* 0x1702D163: je 0x1702d16b */
L_1702D165:
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xD0) = MEM32(ebx + 0xD0) + 1; /* 0x1702D165: inc dword ptr [ebx + 0xd0] */
    _flag_k = FK_INC;
L_1702D16B:
    ecx = MEM32(eax); /* 0x1702D16B: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20); /* 0x1702D16D: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x1702D170: push edx */
    PUSH32(esp, esi); /* 0x1702D171: push esi */
    PUSH32(esp, eax); /* 0x1702D172: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1702D173: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1702D176: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + (-0x8)); /* 0x1702D17C: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1702D17F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x1702D181: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + 0x8) = eax; /* 0x1702D184: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1702D187: fild dword ptr [ebp + 8] */
    MEM32(ebx + 0xD8) = eax; /* 0x1702D18A: mov dword ptr [ebx + 0xd8], eax */
    MEM32(ebx + 0xDC) = ecx; /* 0x1702D190: mov dword ptr [ebx + 0xdc], ecx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702D19E; /* 0x1702D196: jge 0x1702d19e */
L_1702D198:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702D198: fadd dword ptr [0x1700142c] */
L_1702D19E:
    /* test ecx, ecx */ /* 0x1702D19E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = _st[1] / _st[0]; /* 0x1702D1A0: fdivr st(1) */
    MEM32(ebp + 0x8) = ecx; /* 0x1702D1A2: mov dword ptr [ebp + 8], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xE0) = _v; } /* 0x1702D1A5: fstp dword ptr [ebx + 0xe0] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1702D1AB: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1702D1B6; /* 0x1702D1AE: jge 0x1702d1b6 */
L_1702D1B0:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1702D1B0: fadd dword ptr [0x1700142c] */
L_1702D1B6:
    _st[0] = _st[1] / _st[0]; /* 0x1702D1B6: fdivr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xE4) = _v; } /* 0x1702D1B8: fstp dword ptr [ebx + 0xe4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D1BE: fstp st(0) */
L_1702D1C0:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1702D1C0: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D1D7; /* 0x1702D1C3: je 0x1702d1d7 */
L_1702D1C5:
    esi = MEM32(ebp + 0x10); /* 0x1702D1C5: mov esi, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x10); /* 0x1702D1C8: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D1CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D1CC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D1CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D1CE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x4)); /* 0x1702D1CF: mov edi, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x8)); /* 0x1702D1D2: mov esi, dword ptr [ebp - 8] */
    goto L_1702D1EF; /* 0x1702D1D5: jmp 0x1702d1ef */
L_1702D1D7:
    edi = MEM32(ebx + 0xDC); /* 0x1702D1D7: mov edi, dword ptr [ebx + 0xdc] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1702D1DD: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1702D1E0: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebx + 0xD8); /* 0x1702D1E3: mov esi, dword ptr [ebx + 0xd8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1702D1E9: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1702D1EC: mov dword ptr [ebp - 4], edi */
L_1702D1EF:
    eax = MEM32(ebx + 0xC4); /* 0x1702D1EF: mov eax, dword ptr [ebx + 0xc4] */
    ecx = MEM32(ebx + 0xB8); /* 0x1702D1F5: mov ecx, dword ptr [ebx + 0xb8] */
    edx = MEM32(ebx + 0xD4); /* 0x1702D1FB: mov edx, dword ptr [ebx + 0xd4] */
    MEM32(ecx + eax * 4) = edx; /* 0x1702D201: mov dword ptr [ecx + eax*4], edx */
    eax = MEM32(ebp + 0xC); /* 0x1702D204: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1702D207: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702D209: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1702D20A: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x10)); /* 0x1702D20D: sub esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x1702D210: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* test MEM8(ebx + 0xB0), 8 */ /* 0x1702D213: test byte ptr [ebx + 0xb0], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0xC) = esi; /* 0x1702D21A: mov dword ptr [ebp + 0xc], esi */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1702D21D: fild dword ptr [ebp + 0xc] */
    MEM32(ebp + 0xC) = edi; /* 0x1702D220: mov dword ptr [ebp + 0xc], edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1702D223: fst dword ptr [ebp + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1702D226: fild dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1702D229: fstp dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D395; /* 0x1702D22C: je 0x1702d395 */
L_1702D232:
    /* cmp MEM32(ebx + 0x64), 0 */ /* 0x1702D232: cmp dword ptr [ebx + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D236: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D321; /* 0x1702D238: jne 0x1702d321 */
L_1702D23E:
    PUSH32(esp, MEM32(ebx + 0x80)); /* 0x1702D23E: push dword ptr [ebx + 0x80] */
    esi = ebx + 0x90; /* 0x1702D244: lea esi, [ebx + 0x90] */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x1702D24A: push dword ptr [ebx + 0x70] */
    MEM32(ebx + 0x64) = 1; /* 0x1702D24D: mov dword ptr [ebx + 0x64], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x1702D254: push dword ptr [esi] */
    RECOMP_CALL(sub_17041794); /* 0x1702D256: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1702D25B: mov eax, dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1702D25D: fld dword ptr [eax + 8] */
    ecx = MEM32(ebx + 0x70); /* 0x1702D260: mov ecx, dword ptr [ebx + 0x70] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1702D263: fld dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1702D266: fld dword ptr [eax] */
    fp_push(_st[0]); /* 0x1702D268: fld st(0) */
    _st[0] *= _st[1]; /* 0x1702D26A: fmul st(1) */
    fp_push(_st[2]); /* 0x1702D26C: fld st(2) */
    _st[0] *= _st[3]; /* 0x1702D26E: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D270: faddp st(1) */
    fp_push(_st[3]); /* 0x1702D272: fld st(3) */
    _st[0] *= _st[4]; /* 0x1702D274: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D276: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1702D278: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1702D27A: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D27C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D27E: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA0) = _v; } /* 0x1702D280: fstp dword ptr [ebx + 0xa0] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1702D286: fld dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1702D289: fld dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1702D28C: fld dword ptr [eax + 0x10] */
    fp_push(_st[0]); /* 0x1702D28F: fld st(0) */
    _st[0] *= _st[1]; /* 0x1702D291: fmul st(1) */
    fp_push(_st[2]); /* 0x1702D293: fld st(2) */
    _st[0] *= _st[3]; /* 0x1702D295: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D297: faddp st(1) */
    fp_push(_st[3]); /* 0x1702D299: fld st(3) */
    _st[0] *= _st[4]; /* 0x1702D29B: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D29D: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1702D29F: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1702D2A1: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D2A3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D2A5: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA4) = _v; } /* 0x1702D2A7: fstp dword ptr [ebx + 0xa4] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x1702D2AD: fld dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x1702D2B0: fld dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x1702D2B3: fld dword ptr [eax + 0x20] */
    fp_push(_st[0]); /* 0x1702D2B6: fld st(0) */
    _st[0] *= _st[1]; /* 0x1702D2B8: fmul st(1) */
    fp_push(_st[2]); /* 0x1702D2BA: fld st(2) */
    _st[0] *= _st[3]; /* 0x1702D2BC: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D2BE: faddp st(1) */
    fp_push(_st[3]); /* 0x1702D2C0: fld st(3) */
    _st[0] *= _st[4]; /* 0x1702D2C2: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D2C4: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1702D2C6: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1702D2C8: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D2CA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D2CC: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA8) = _v; } /* 0x1702D2CE: fstp dword ptr [ebx + 0xa8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1702D2D4: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x1702D2DA: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D2DC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702D2DE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D2F1; /* 0x1702D2E1: jne 0x1702d2f1 */
L_1702D2E3:
    fp_push(*(float*)&MEM32(ebx + 0xA0)); /* 0x1702D2E3: fld dword ptr [ebx + 0xa0] */
    _st[0] = -_st[0]; /* 0x1702D2E9: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA0) = _v; } /* 0x1702D2EB: fstp dword ptr [ebx + 0xa0] */
L_1702D2F1:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x14)); /* 0x1702D2F1: fcom dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D2F4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702D2F6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D309; /* 0x1702D2F9: jne 0x1702d309 */
L_1702D2FB:
    fp_push(*(float*)&MEM32(ebx + 0xA4)); /* 0x1702D2FB: fld dword ptr [ebx + 0xa4] */
    _st[0] = -_st[0]; /* 0x1702D301: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA4) = _v; } /* 0x1702D303: fstp dword ptr [ebx + 0xa4] */
L_1702D309:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x28)); /* 0x1702D309: fcomp dword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D30C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702D30E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D321; /* 0x1702D311: jne 0x1702d321 */
L_1702D313:
    fp_push(*(float*)&MEM32(ebx + 0xA8)); /* 0x1702D313: fld dword ptr [ebx + 0xa8] */
    _st[0] = -_st[0]; /* 0x1702D319: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xA8) = _v; } /* 0x1702D31B: fstp dword ptr [ebx + 0xa8] */
L_1702D321:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1702D321: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebx + 0x90)); /* 0x1702D325: push dword ptr [ebx + 0x90] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D332; /* 0x1702D32B: je 0x1702d332 */
L_1702D32D:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1702D32D: push dword ptr [ebp + 0x18] */
    goto L_1702D345; /* 0x1702D330: jmp 0x1702d345 */
L_1702D332:
    fp_push(0.0); /* 0x1702D332: fldz  */
    eax = ebp + (-0x2C); /* 0x1702D334: lea eax, [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1702D337: fstp dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1702D33A: push eax */
    fp_push(0.0); /* 0x1702D33B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1702D33D: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1702D340: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702D342: fstp dword ptr [ebp - 0x24] */
L_1702D345:
    eax = ebp + (-0x38); /* 0x1702D345: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1702D348: push eax */
    RECOMP_CALL(sub_17040E7B); /* 0x1702D349: call 0x17040e7b */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1702D34E: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xA0); /* 0x1702D351: fmul dword ptr [ebx + 0xa0] */
    eax = MEM32(ebp + 0x14); /* 0x1702D357: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1702D35A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1702D35C: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xA4); /* 0x1702D35F: fmul dword ptr [ebx + 0xa4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1702D365: fstp dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D3D5; /* 0x1702D368: je 0x1702d3d5 */
L_1702D36A:
    fp_push(*(float*)&MEM32(eax)); /* 0x1702D36A: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xA0); /* 0x1702D36C: fmul dword ptr [ebx + 0xa0] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x38)) - _st[0]; /* 0x1702D372: fsubr dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1702D375: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1702D378: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xA4); /* 0x1702D37B: fmul dword ptr [ebx + 0xa4] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x34)) - _st[0]; /* 0x1702D381: fsubr dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1702D384: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebx + 0xA8)); /* 0x1702D387: fld dword ptr [ebx + 0xa8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1702D38D: fmul dword ptr [eax + 8] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x30)) - _st[0]; /* 0x1702D390: fsubr dword ptr [ebp - 0x30] */
    goto L_1702D3D2; /* 0x1702D393: jmp 0x1702d3d2 */
L_1702D395:
    esi = MEM32(ebp + 0x18); /* 0x1702D395: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1702D398: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x38); /* 0x1702D39A: lea edi, [ebp - 0x38] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D3B1; /* 0x1702D39D: jne 0x1702d3b1 */
L_1702D39F:
    fp_push(0.0); /* 0x1702D39F: fldz  */
    esi = ebp + (-0x2C); /* 0x1702D3A1: lea esi, [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1702D3A4: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x1702D3A7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1702D3A9: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1702D3AC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702D3AE: fstp dword ptr [ebp - 0x24] */
L_1702D3B1:
    eax = MEM32(ebp + 0x14); /* 0x1702D3B1: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1702D3B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D3B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D3B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D3B8: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D3D5; /* 0x1702D3B9: je 0x1702d3d5 */
L_1702D3BB:
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1702D3BB: fld dword ptr [ebp - 0x38] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1702D3BE: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1702D3C0: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1702D3C3: fld dword ptr [ebp - 0x34] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1702D3C6: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1702D3C9: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1702D3CC: fld dword ptr [ebp - 0x30] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1702D3CF: fsub dword ptr [eax + 8] */
L_1702D3D2:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1702D3D2: fstp dword ptr [ebp - 0x30] */
L_1702D3D5:
    fp_push((double)(int32_t)MEM32(ebp + (-0x10))); /* 0x1702D3D5: fild dword ptr [ebp - 0x10] */
    eax = ebx + 0xE0; /* 0x1702D3D8: lea eax, [ebx + 0xe0] */
    ecx = ebx + 0xE4; /* 0x1702D3DE: lea ecx, [ebx + 0xe4] */
    esi = ebp + (-0xC); /* 0x1702D3E4: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1702D3E7: fmul dword ptr [eax] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x1702D3E9: fild dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1702D3EC: fmul dword ptr [ecx] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x1702D3EE: fild dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1702D3F1: fmul dword ptr [eax] */
    eax = MEM32(ebx + 0xC4); /* 0x1702D3F3: mov eax, dword ptr [ebx + 0xc4] */
    eax = eax + eax * 2; /* 0x1702D3F9: lea eax, [eax + eax*2] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1702D3FC: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1702D3FC: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0xC0); /* 0x1702D3FF: add eax, dword ptr [ebx + 0xc0] */
    _flag_k = FK_ADD;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1702D405: fst dword ptr [ebp - 0x28] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1702D408: fild dword ptr [ebp - 4] */
    edi = eax; /* 0x1702D40B: mov edi, eax */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1702D40D: fmul dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1702D40F: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1702D412: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x1702D415: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1702D418: mov dword ptr [ebp - 8], ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702D41B: fst dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x30)); /* 0x1702D41E: mov ecx, dword ptr [ebp - 0x30] */
    fp_push(_st[3]); /* 0x1702D421: fld st(3) */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1702D423: mov dword ptr [ebp - 4], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D426: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D427: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D428: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702D429: fstp dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x1702D42C: fld st(2) */
    edx = MEM32(ebp + (-0x8)); /* 0x1702D42E: mov edx, dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1702D431: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x1C); /* 0x1702D434: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0x10) = edx; /* 0x1702D437: mov dword ptr [eax + 0x10], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1702D43A: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = edx; /* 0x1702D43D: mov dword ptr [eax + 0x14], edx */
    MEM32(eax + 0xC) = ecx; /* 0x1702D440: mov dword ptr [eax + 0xc], ecx */
    edx = MEM32(ebp + (-0x38)); /* 0x1702D443: mov edx, dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1702D446: fld dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1702D449: mov dword ptr [ebp - 0xc], edx */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x1702D44C: fadd dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x30)); /* 0x1702D44F: mov edx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1702D452: mov dword ptr [ebp - 4], edx */
    edi = eax + 0x18; /* 0x1702D455: lea edi, [eax + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702D458: fstp dword ptr [ebp - 8] */
    esi = ebp + (-0xC); /* 0x1702D45B: lea esi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D45E: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[3]); /* 0x1702D45F: fld st(3) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D461: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D462: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702D463: fstp dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x1702D466: mov edx, dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1702D469: fstp dword ptr [ebp - 4] */
    MEM32(eax + 0x28) = edx; /* 0x1702D46C: mov dword ptr [eax + 0x28], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1702D46F: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x2C) = edx; /* 0x1702D472: mov dword ptr [eax + 0x2c], edx */
    MEM32(eax + 0x24) = ecx; /* 0x1702D475: mov dword ptr [eax + 0x24], ecx */
    edx = MEM32(ebp + (-0x34)); /* 0x1702D478: mov edx, dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1702D47B: fld dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1702D47E: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + (-0x30)); /* 0x1702D481: mov edx, dword ptr [ebp - 0x30] */
    _st[0] += _st[4]; /* 0x1702D484: fadd st(4) */
    MEM32(ebp + (-0x4)) = edx; /* 0x1702D486: mov dword ptr [ebp - 4], edx */
    edi = eax + 0x30; /* 0x1702D489: lea edi, [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1702D48C: fstp dword ptr [ebp - 0xc] */
    esi = ebp + (-0xC); /* 0x1702D48F: lea esi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D492: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D493: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D494: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702D495: fstp dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x1702D498: mov edx, dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1702D49B: fst dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D49E: fstp st(0) */
    MEM32(eax + 0x40) = edx; /* 0x1702D4A0: mov dword ptr [eax + 0x40], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1702D4A3: mov edx, dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D4A6: fstp st(0) */
    MEM32(eax + 0x3C) = ecx; /* 0x1702D4A8: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x44) = edx; /* 0x1702D4AB: mov dword ptr [eax + 0x44], edx */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1702D4AE: fld dword ptr [ebp - 0x38] */
    _st[0] += _st[1]; /* 0x1702D4B1: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1702D4B3: fstp dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x30)); /* 0x1702D4B6: mov edx, dword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1702D4B9: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1702D4BB: fld dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1702D4BE: mov dword ptr [ebp - 4], edx */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x1702D4C1: fadd dword ptr [ebp + 0xc] */
    edi = eax + 0x48; /* 0x1702D4C4: lea edi, [eax + 0x48] */
    esi = ebp + (-0xC); /* 0x1702D4C7: lea esi, [ebp - 0xc] */
    MEM32(eax + 0x54) = ecx; /* 0x1702D4CA: mov dword ptr [eax + 0x54], ecx */
    ecx = MEM32(ebp + (-0x28)); /* 0x1702D4CD: mov ecx, dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1702D4D0: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D4D3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D4D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1702D4D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1702D4D6: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1702D4D9: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1702D4DC: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1702D4DF: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x58) = ecx; /* 0x1702D4E2: mov dword ptr [eax + 0x58], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1702D4E5: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x5C) = ecx; /* 0x1702D4E8: mov dword ptr [eax + 0x5c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xC4) = MEM32(ebx + 0xC4) + 1; /* 0x1702D4EB: inc dword ptr [ebx + 0xc4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D4F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D4F3:
    edi = POP32_VAL(esp); /* 0x1702D4F3: pop edi */
L_1702D4F4:
    esi = POP32_VAL(esp); /* 0x1702D4F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702D4F5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702D4F6: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1702D4F7: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1702D4FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702D4FFu);

L_1702D4FF:
    edi = edi; /* 0x1702D4FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702D501: push ebp */
    ebp = esp; /* 0x1702D502: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1702D504: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1702D507: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702D508: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1702D50B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702D50C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xAC), edi */ /* 0x1702D50E: cmp dword ptr [ebx + 0xac], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xAC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D520; /* 0x1702D514: jne 0x1702d520 */
L_1702D516:
    eax = 0x8876086Cu; /* 0x1702D516: mov eax, 0x8876086c */
    goto L_1702D929; /* 0x1702D51B: jmp 0x1702d929 */
L_1702D520:
    /* cmp MEM32(ebx + 0x60), edi */ /* 0x1702D520: cmp dword ptr [ebx + 0x60], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x60)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D55C; /* 0x1702D523: jne 0x1702d55c */
L_1702D525:
    /* test MEM8(ebx + 0xB0), 8 */ /* 0x1702D525: test byte ptr [ebx + 0xb0], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D55C; /* 0x1702D52C: jne 0x1702d55c */
L_1702D52E:
    eax = MEM32(ebx + 0xCC); /* 0x1702D52E: mov eax, dword ptr [ebx + 0xcc] */
    edx = MEM32(ebx + 0xC0); /* 0x1702D534: mov edx, dword ptr [ebx + 0xc0] */
    ecx = eax + eax * 2; /* 0x1702D53A: lea ecx, [eax + eax*2] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x1702D53D: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x1702D53D: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1702D540: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0xC4); /* 0x1702D542: mov edx, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1702D548: sub edx, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1702D54A: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1702D54A: shl edx, 2 */
    PUSH32(esp, edx); /* 0x1702D54D: push edx */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x1702D54E: push dword ptr [ebx + 0x70] */
    PUSH32(esp, 0x18u); /* 0x1702D551: push 0x18 */
    PUSH32(esp, ecx); /* 0x1702D553: push ecx */
    PUSH32(esp, 0x18u); /* 0x1702D554: push 0x18 */
    PUSH32(esp, ecx); /* 0x1702D556: push ecx */
    RECOMP_CALL(sub_17040E9E); /* 0x1702D557: call 0x17040e9e */
    RECOMP_FLAGS_IN();
L_1702D55C:
    ecx = MEM32(ebx + 0xB0); /* 0x1702D55C: mov ecx, dword ptr [ebx + 0xb0] */
    /* test LO8(ecx), 0xC0u */ /* 0x1702D562: test cl, 0xc0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebx + 0xC4); /* 0x1702D565: mov eax, dword ptr [ebx + 0xc4] */
    MEM32(ebx + 0xCC) = eax; /* 0x1702D56B: mov dword ptr [ebx + 0xcc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1702D571: mov dword ptr [ebp - 8], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D744; /* 0x1702D574: je 0x1702d744 */
L_1702D57A:
    /* test LO8(ecx), 4 */ /* 0x1702D57A: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = 0x7F7FFFFFu; /* 0x1702D57D: mov dword ptr [ebp - 4], 0x7f7fffff */
    MEM32(ebp + 0x8) = 0xFF7FFFFFu; /* 0x1702D584: mov dword ptr [ebp + 8], 0xff7fffff */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D640; /* 0x1702D58B: je 0x1702d640 */
L_1702D591:
    /* test LO8(ecx), 8 */ /* 0x1702D591: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D640; /* 0x1702D594: jne 0x1702d640 */
L_1702D59A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702D59A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1702D59C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D691; /* 0x1702D59E: jbe 0x1702d691 */
L_1702D5A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702D5A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D5A6:
    eax = MEM32(ebx + 0xC0); /* 0x1702D5A6: mov eax, dword ptr [ebx + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1702D5AC: add eax, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1702D5AE: fld dword ptr [eax + 0x18] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1702D5B1: fadd dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x1702D5B3: fld dword ptr [eax + 0x1c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x1702D5B6: fadd dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x1702D5B9: fld dword ptr [eax + 0x20] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1702D5BC: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1702D5BF: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x1702D5C2: fld st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x1702D5C4: fadd dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1702D5C7: fstp dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x1702D5CA: fadd dword ptr [eax + 0x34] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1702D5CD: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1702D5CF: fld dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x1702D5D2: fadd dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1702D5D5: fld dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(eax + 0x48); /* 0x1702D5D8: fadd dword ptr [eax + 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1702D5DB: fstp dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x1702D5DE: fld st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x4C); /* 0x1702D5E0: fadd dword ptr [eax + 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1702D5E3: fstp dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x50); /* 0x1702D5E6: fadd dword ptr [eax + 0x50] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1702D5E9: fstp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x9C); /* 0x1702D5EB: fmul dword ptr [ebx + 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1702D5F1: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x98); /* 0x1702D5F4: fmul dword ptr [ebx + 0x98] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D5FA: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1702D5FC: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x94); /* 0x1702D5FF: fmul dword ptr [ebx + 0x94] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1702D605: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1702D607: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702D60A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D60C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702D60E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D616; /* 0x1702D611: jne 0x1702d616 */
L_1702D613:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1702D613: fst dword ptr [ebp - 4] */
L_1702D616:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1702D616: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702D619: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D61B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702D61D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702D625; /* 0x1702D620: jp 0x1702d625 */
L_1702D622:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1702D622: fst dword ptr [ebp + 8] */
L_1702D625:
    eax = MEM32(ebx + 0xBC); /* 0x1702D625: mov eax, dword ptr [ebx + 0xbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1702D62B: fstp dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1702D62E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x60u; /* 0x1702D62F: add edx, 0x60 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0xC4) */ /* 0x1702D632: cmp ecx, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D5A6; /* 0x1702D638: jb 0x1702d5a6 */
L_1702D63E:
    goto L_1702D691; /* 0x1702D63E: jmp 0x1702d691 */
L_1702D640:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702D640: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1702D642: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D691; /* 0x1702D644: jbe 0x1702d691 */
L_1702D646:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702D646: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D648:
    eax = MEM32(ebx + 0xC0); /* 0x1702D648: mov eax, dword ptr [ebx + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1702D64E: add eax, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x50)); /* 0x1702D650: fld dword ptr [eax + 0x50] */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x1702D653: fadd dword ptr [eax + 0x38] */
    _st[0] += (double)*(float*)ADDR(eax + 0x20); /* 0x1702D656: fadd dword ptr [eax + 0x20] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1702D659: fadd dword ptr [eax + 8] */
    _st[0] = -_st[0]; /* 0x1702D65C: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1702D65E: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702D661: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D663: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1702D665: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702D66D; /* 0x1702D668: jne 0x1702d66d */
L_1702D66A:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1702D66A: fst dword ptr [ebp - 4] */
L_1702D66D:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1702D66D: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702D670: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D672: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1702D674: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702D67C; /* 0x1702D677: jp 0x1702d67c */
L_1702D679:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1702D679: fst dword ptr [ebp + 8] */
L_1702D67C:
    eax = MEM32(ebx + 0xBC); /* 0x1702D67C: mov eax, dword ptr [ebx + 0xbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1702D682: fstp dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1702D685: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x60u; /* 0x1702D686: add edx, 0x60 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0xC4) */ /* 0x1702D689: cmp ecx, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D648; /* 0x1702D68F: jb 0x1702d648 */
L_1702D691:
    /* test MEM8(ebx + 0xB0), 0x20u */ /* 0x1702D691: test byte ptr [ebx + 0xb0], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1702D698: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1702D69B: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1702D69E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1702D6A0: fnstsw ax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D6FB; /* 0x1702D6A2: je 0x1702d6fb */
L_1702D6A4:
    /* test HI8(eax), 0x44u */ /* 0x1702D6A4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1702D6B5; /* 0x1702D6A7: jp 0x1702d6b5 */
L_1702D6A9:
    /* cmp MEM32(ebx + 0xD0), edi */ /* 0x1702D6A9: cmp dword ptr [ebx + 0xd0], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D787; /* 0x1702D6AF: je 0x1702d787 */
L_1702D6B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D6B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xC4), edi */ /* 0x1702D6B7: cmp dword ptr [ebx + 0xc4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D6D1; /* 0x1702D6BD: jbe 0x1702d6d1 */
L_1702D6BF:
    ecx = MEM32(ebx + 0xB4); /* 0x1702D6BF: mov ecx, dword ptr [ebx + 0xb4] */
    MEM32(ecx + eax * 4) = eax; /* 0x1702D6C5: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702D6C8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebx + 0xC4) */ /* 0x1702D6C9: cmp eax, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D6BF; /* 0x1702D6CF: jb 0x1702d6bf */
L_1702D6D1:
    /* test MEM8(ebx + 0xB0), 0x40u */ /* 0x1702D6D1: test byte ptr [ebx + 0xb0], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebx); /* 0x1702D6D8: push ebx */
    PUSH32(esp, MEM32(ebx + 0xC4)); /* 0x1702D6D9: push dword ptr [ebx + 0xc4] */
    PUSH32(esp, MEM32(ebx + 0xB4)); /* 0x1702D6DF: push dword ptr [ebx + 0xb4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D6F1; /* 0x1702D6E5: je 0x1702d6f1 */
L_1702D6E7:
    PUSH32(esp, 0x1702C026u); /* 0x1702D6E7: push 0x1702c026 */
    goto L_1702D77B; /* 0x1702D6EC: jmp 0x1702d77b */
L_1702D6F1:
    PUSH32(esp, 0x1702C09Eu); /* 0x1702D6F1: push 0x1702c09e */
    goto L_1702D77B; /* 0x1702D6F6: jmp 0x1702d77b */
L_1702D6FB:
    /* test HI8(eax), 0x44u */ /* 0x1702D6FB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1702D787; /* 0x1702D6FE: jnp 0x1702d787 */
L_1702D704:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D704: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xC4), edi */ /* 0x1702D706: cmp dword ptr [ebx + 0xc4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D720; /* 0x1702D70C: jbe 0x1702d720 */
L_1702D70E:
    ecx = MEM32(ebx + 0xB4); /* 0x1702D70E: mov ecx, dword ptr [ebx + 0xb4] */
    MEM32(ecx + eax * 4) = eax; /* 0x1702D714: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702D717: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebx + 0xC4) */ /* 0x1702D718: cmp eax, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D70E; /* 0x1702D71E: jb 0x1702d70e */
L_1702D720:
    /* test MEM8(ebx + 0xB0), 0x40u */ /* 0x1702D720: test byte ptr [ebx + 0xb0], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB0)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebx); /* 0x1702D727: push ebx */
    PUSH32(esp, MEM32(ebx + 0xC4)); /* 0x1702D728: push dword ptr [ebx + 0xc4] */
    PUSH32(esp, MEM32(ebx + 0xB4)); /* 0x1702D72E: push dword ptr [ebx + 0xb4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D73D; /* 0x1702D734: je 0x1702d73d */
L_1702D736:
    PUSH32(esp, 0x1702BF84u); /* 0x1702D736: push 0x1702bf84 */
    goto L_1702D77B; /* 0x1702D73B: jmp 0x1702d77b */
L_1702D73D:
    PUSH32(esp, 0x1702BFD5u); /* 0x1702D73D: push 0x1702bfd5 */
    goto L_1702D77B; /* 0x1702D742: jmp 0x1702d77b */
L_1702D744:
    /* test LO8(ecx), 0x20u */ /* 0x1702D744: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702D787; /* 0x1702D747: je 0x1702d787 */
L_1702D749:
    /* cmp MEM32(ebx + 0xD0), edi */ /* 0x1702D749: cmp dword ptr [ebx + 0xd0], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D787; /* 0x1702D74F: je 0x1702d787 */
L_1702D751:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702D751: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1702D753: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D769; /* 0x1702D755: jbe 0x1702d769 */
L_1702D757:
    eax = MEM32(ebx + 0xB4); /* 0x1702D757: mov eax, dword ptr [ebx + 0xb4] */
    MEM32(eax + ecx * 4) = ecx; /* 0x1702D75D: mov dword ptr [eax + ecx*4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1702D760: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0xC4) */ /* 0x1702D761: cmp ecx, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D757; /* 0x1702D767: jb 0x1702d757 */
L_1702D769:
    PUSH32(esp, ebx); /* 0x1702D769: push ebx */
    PUSH32(esp, MEM32(ebx + 0xC4)); /* 0x1702D76A: push dword ptr [ebx + 0xc4] */
    PUSH32(esp, MEM32(ebx + 0xB4)); /* 0x1702D770: push dword ptr [ebx + 0xb4] */
    PUSH32(esp, 0x1702BF3Bu); /* 0x1702D776: push 0x1702bf3b */
L_1702D77B:
    RECOMP_CALL(sub_1715B74D); /* 0x1702D77B: call 0x1715b74d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = 1; /* 0x1702D780: mov dword ptr [ebp - 8], 1 */
L_1702D787:
    eax = MEM32(ebx + 0xC); /* 0x1702D787: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702D78A: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1702D78C: push esi */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1702D78D: push dword ptr [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x1702D790: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1702D791: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x1702D797: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1702D79A: push dword ptr [ebx + 0x14] */
    ecx = MEM32(eax); /* 0x1702D79D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702D79F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1A0)); /* 0x1702D7A0: call dword ptr [ecx + 0x1a0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x1702D7A6: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702D7A9: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x18u); /* 0x1702D7AB: push 0x18 */
    PUSH32(esp, edi); /* 0x1702D7AD: push edi */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1702D7AE: push dword ptr [ebx + 0x18] */
    PUSH32(esp, edi); /* 0x1702D7B1: push edi */
    PUSH32(esp, eax); /* 0x1702D7B2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x1702D7B3: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1702D7B9: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1702D7BC: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D7CB; /* 0x1702D7BF: je 0x1702d7cb */
L_1702D7C1:
    eax = MEM32(ebx + 0xB4); /* 0x1702D7C1: mov eax, dword ptr [ebx + 0xb4] */
    esi = MEM32(eax); /* 0x1702D7C7: mov esi, dword ptr [eax] */
    goto L_1702D7CD; /* 0x1702D7C9: jmp 0x1702d7cd */
L_1702D7CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1702D7CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D7CD:
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 0xFFFFFFFFu; /* 0x1702D7CD: or dword ptr [ebp + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xC4), edi */ /* 0x1702D7D1: cmp dword ptr [ebx + 0xc4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702D8F2; /* 0x1702D7D7: jbe 0x1702d8f2 */
L_1702D7DD:
    eax = MEM32(ebx + 0xB8); /* 0x1702D7DD: mov eax, dword ptr [ebx + 0xb8] */
    eax = MEM32(eax + esi * 4); /* 0x1702D7E3: mov eax, dword ptr [eax + esi*4] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1702D7E6: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D7FE; /* 0x1702D7E9: je 0x1702d7fe */
L_1702D7EB:
    MEM32(ebp + 0x8) = eax; /* 0x1702D7EB: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702D7EE: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xC); /* 0x1702D7F1: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702D7F4: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1702D7F6: push edi */
    PUSH32(esp, eax); /* 0x1702D7F7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x1702D7F8: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
L_1702D7FE:
    edx = MEM32(ebx + 0x20); /* 0x1702D7FE: mov edx, dword ptr [ebx + 0x20] */
    eax = MEM32(ebx + 0x18); /* 0x1702D801: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(eax); /* 0x1702D804: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1702D806: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1702D808: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFF000u);
    edx = edx & 0xFFFFF000u; /* 0x1702D80A: and edx, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x2000u; /* 0x1702D810: add edx, 0x2000 */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1702D816: push edx */
    edx = ebp + (-0x14); /* 0x1702D817: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1702D81A: push edx */
    PUSH32(esp, edi); /* 0x1702D81B: push edi */
    PUSH32(esp, edi); /* 0x1702D81C: push edi */
    PUSH32(esp, eax); /* 0x1702D81D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1702D81E: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x1C); /* 0x1702D821: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1702D824: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0x20); /* 0x1702D827: mov eax, dword ptr [ebx + 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1702D82A: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1702D82D: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0xC4) */ /* 0x1702D830: cmp eax, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1702D89D; /* 0x1702D836: jae 0x1702d89d */
L_1702D838:
    eax = MEM32(ebx + 0xB8); /* 0x1702D838: mov eax, dword ptr [ebx + 0xb8] */
    ecx = MEM32(ebp + 0x8); /* 0x1702D83E: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + esi * 4) */ /* 0x1702D841: cmp ecx, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + esi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702D89D; /* 0x1702D844: jne 0x1702d89d */
L_1702D846:
    eax = MEM32(ebx + 0x20); /* 0x1702D846: mov eax, dword ptr [ebx + 0x20] */
    /* cmp eax, 0x4000u */ /* 0x1702D849: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1702D89D; /* 0x1702D84E: jae 0x1702d89d */
L_1702D850:
    ecx = MEM32(ebp + (-0x14)); /* 0x1702D850: mov ecx, dword ptr [ebp - 0x14] */
    esi = esi + esi * 2; /* 0x1702D853: lea esi, [esi + esi*2] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x1702D856: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x1702D856: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC0); /* 0x1702D859: add esi, dword ptr [ebx + 0xc0] */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x1702D85F: lea eax, [eax + eax*2] */
    edi = ecx + eax * 8; /* 0x1702D862: lea edi, [ecx + eax*8] */
    PUSH32(esp, 0x18u); /* 0x1702D865: push 0x18 */
    ecx = POP32_VAL(esp); /* 0x1702D867: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702D868: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x4)); /* 0x1702D86A: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + 4; /* 0x1702D86D: add dword ptr [ebx + 0x20], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 6; /* 0x1702D871: add dword ptr [ebx + 0x1c], 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1702D875: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1702D876: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1702D87A: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702D88A; /* 0x1702D87D: je 0x1702d88a */
L_1702D87F:
    eax = MEM32(ebx + 0xB4); /* 0x1702D87F: mov eax, dword ptr [ebx + 0xb4] */
    esi = MEM32(eax + edi * 4); /* 0x1702D885: mov esi, dword ptr [eax + edi*4] */
    goto L_1702D88C; /* 0x1702D888: jmp 0x1702d88c */
L_1702D88A:
    esi = edi; /* 0x1702D88A: mov esi, edi */
L_1702D88C:
    eax = MEM32(ebp + 0x8); /* 0x1702D88C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1702D88F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702D891: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1702D892: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(ebx + 0xC4) */ /* 0x1702D895: cmp edi, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D838; /* 0x1702D89B: jb 0x1702d838 */
L_1702D89D:
    eax = MEM32(ebx + 0x18); /* 0x1702D89D: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(eax); /* 0x1702D8A0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702D8A2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1702D8A3: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x1702D8A6: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x1702D8A9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x1C); /* 0x1702D8AB: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x1702D8AE: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x1702D8B1: push 3 */
    edi = POP32_VAL(esp); /* 0x1702D8B3: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702D8B4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1702D8B6: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1702D8B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1702D8BA: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1702D8BB: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebx + 0x20); /* 0x1702D8BE: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x1702D8C1: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1702D8C4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1702D8C5: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1702D8C8: push edi */
    PUSH32(esp, 4); /* 0x1702D8C9: push 4 */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1702D8CB: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(ecx + 0x148)); /* 0x1702D8CE: call dword ptr [ecx + 0x148] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x20), 0x4000u */ /* 0x1702D8D4: cmp dword ptr [ebx + 0x20], 0x4000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D8E3; /* 0x1702D8DB: jb 0x1702d8e3 */
L_1702D8DD:
    MEM32(ebx + 0x20) = edi; /* 0x1702D8DD: mov dword ptr [ebx + 0x20], edi */
    MEM32(ebx + 0x1C) = edi; /* 0x1702D8E0: mov dword ptr [ebx + 0x1c], edi */
L_1702D8E3:
    eax = MEM32(ebp + (-0x4)); /* 0x1702D8E3: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx + 0xC4) */ /* 0x1702D8E6: cmp eax, dword ptr [ebx + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702D7DD; /* 0x1702D8EC: jb 0x1702d7dd */
L_1702D8F2:
    fp_push(0.0); /* 0x1702D8F2: fldz  */
    MEM32(ebx + 0xC4) = edi; /* 0x1702D8F4: mov dword ptr [ebx + 0xc4], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xE0) = _v; } /* 0x1702D8FA: fstp dword ptr [ebx + 0xe0] */
    MEM32(ebx + 0xCC) = edi; /* 0x1702D900: mov dword ptr [ebx + 0xcc], edi */
    fp_push(0.0); /* 0x1702D906: fldz  */
    MEM32(ebx + 0xD0) = edi; /* 0x1702D908: mov dword ptr [ebx + 0xd0], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xE4) = _v; } /* 0x1702D90E: fstp dword ptr [ebx + 0xe4] */
    MEM32(ebx + 0xD4) = edi; /* 0x1702D914: mov dword ptr [ebx + 0xd4], edi */
    MEM32(ebx + 0xD8) = edi; /* 0x1702D91A: mov dword ptr [ebx + 0xd8], edi */
    MEM32(ebx + 0xDC) = edi; /* 0x1702D920: mov dword ptr [ebx + 0xdc], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D926: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1702D928: pop esi */
L_1702D929:
    edi = POP32_VAL(esp); /* 0x1702D929: pop edi */
    ebx = POP32_VAL(esp); /* 0x1702D92A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702D92B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702D92C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702D934(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702D934u);

L_1702D934:
    eax = ecx; /* 0x1702D934: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702D936: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1702D938: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1702D93A: inc edx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x17001650u; /* 0x1702D93B: mov dword ptr [eax], 0x17001650 */
    MEM32(eax + 0x4) = edx; /* 0x1702D941: mov dword ptr [eax + 4], edx */
    MEM32(eax + 0x8) = ecx; /* 0x1702D944: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1702D947: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x1702D94A: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x1702D94D: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x1702D950: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x1702D953: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x1702D956: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x1702D959: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x1702D95C: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x1702D95F: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x1702D962: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x60) = edx; /* 0x1702D965: mov dword ptr [eax + 0x60], edx */
    MEM32(eax + 0x64) = ecx; /* 0x1702D968: mov dword ptr [eax + 0x64], ecx */
    MEM32(eax + 0x70) = ecx; /* 0x1702D96B: mov dword ptr [eax + 0x70], ecx */
    MEM32(eax + 0x80) = ecx; /* 0x1702D96E: mov dword ptr [eax + 0x80], ecx */
    MEM32(eax + 0x90) = ecx; /* 0x1702D974: mov dword ptr [eax + 0x90], ecx */
    MEM32(eax + 0xAC) = ecx; /* 0x1702D97A: mov dword ptr [eax + 0xac], ecx */
    MEM32(eax + 0xB0) = ecx; /* 0x1702D980: mov dword ptr [eax + 0xb0], ecx */
    MEM32(eax + 0xB4) = ecx; /* 0x1702D986: mov dword ptr [eax + 0xb4], ecx */
    MEM32(eax + 0xB8) = ecx; /* 0x1702D98C: mov dword ptr [eax + 0xb8], ecx */
    MEM32(eax + 0xBC) = ecx; /* 0x1702D992: mov dword ptr [eax + 0xbc], ecx */
    MEM32(eax + 0xC0) = ecx; /* 0x1702D998: mov dword ptr [eax + 0xc0], ecx */
    MEM32(eax + 0xC8) = ecx; /* 0x1702D99E: mov dword ptr [eax + 0xc8], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1702D9A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1702D9AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702D9AAu);

L_1702D9AA:
    edi = edi; /* 0x1702D9AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702D9AC: push ebp */
    ebp = esp; /* 0x1702D9AD: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1702D9AF: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1702D9B2: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x1702D9B5: mov eax, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1702D9C3; /* 0x1702D9B8: jne 0x1702d9c3 */
L_1702D9BA:
    PUSH32(esp, 1); /* 0x1702D9BA: push 1 */
    RECOMP_CALL(sub_1702B0CE); /* 0x1702D9BC: call 0x1702b0ce */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D9C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702D9C3:
    ebp = POP32_VAL(esp); /* 0x1702D9C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702D9C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702D9CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702D9CCu);

L_1702D9CC:
    edi = edi; /* 0x1702D9CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702D9CE: push ebp */
    ebp = esp; /* 0x1702D9CF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1702D9D1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702D9D2: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1702D9D5: push edi */
    PUSH32(esp, 4); /* 0x1702D9D6: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702D9D8: pop ecx */
    edi = 0x17001C80u; /* 0x1702D9D9: mov edi, 0x17001c80 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D9DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702D9E0: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1702D9F5; /* 0x1702D9E2: je 0x1702d9f5 */
L_1702D9E4:
    esi = MEM32(ebp + 0xC); /* 0x1702D9E4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1702D9E7: push 4 */
    ecx = POP32_VAL(esp); /* 0x1702D9E9: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1702D9EA: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702D9EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1702D9F1: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1702DA07; /* 0x1702D9F3: jne 0x1702da07 */
L_1702D9F5:
    eax = MEM32(ebp + 0x8); /* 0x1702D9F5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1702D9F8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1702D9FB: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x1702D9FD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702D9FF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1702DA00: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DA03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1702DA12; /* 0x1702DA05: jmp 0x1702da12 */
L_1702DA07:
    eax = MEM32(ebp + 0x10); /* 0x1702DA07: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1702DA0A: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80004002u; /* 0x1702DA0D: mov eax, 0x80004002 */
L_1702DA12:
    edi = POP32_VAL(esp); /* 0x1702DA12: pop edi */
    esi = POP32_VAL(esp); /* 0x1702DA13: pop esi */
    ebp = POP32_VAL(esp); /* 0x1702DA14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1702DA15: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1702DA1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DA1Du);

L_1702DA1D:
    edi = edi; /* 0x1702DA1D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DA1F: push ebp */
    ebp = esp; /* 0x1702DA20: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1702DA22: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1702DA25: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x1702DA2A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702DA2B: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1702DA2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1702DA30: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1702DA31: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702DA34: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702DA4C; /* 0x1702DA37: je 0x1702da4c */
L_1702DA39:
    eax = ebp + (-0x40); /* 0x1702DA39: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1702DA3C: push eax */
    PUSH32(esp, 0x3Cu); /* 0x1702DA3D: push 0x3c */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1702DA3F: push dword ptr [edi + 0x14] */
    RECOMP_ICALL(MEM32(0x17001078)); /* 0x1702DA42: call dword ptr [0x17001078] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702DA48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702DA53; /* 0x1702DA4A: jne 0x1702da53 */
L_1702DA4C:
    eax = 0x8876086Cu; /* 0x1702DA4C: mov eax, 0x8876086c */
    goto L_1702DA99; /* 0x1702DA51: jmp 0x1702da99 */
L_1702DA53:
    eax = MEM32(ebp + (-0x40)); /* 0x1702DA53: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi) = eax; /* 0x1702DA56: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1702DA58: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(esi + 0x4) = eax; /* 0x1702DA5B: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1702DA5E: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi + 0x8) = eax; /* 0x1702DA61: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4FC); /* 0x1702DA64: mov eax, dword ptr [edi + 0x4fc] */
    MEM32(esi + 0xC) = eax; /* 0x1702DA6A: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)MEM8(ebp + (-0x2C)); /* 0x1702DA6D: movzx eax, byte ptr [ebp - 0x2c] */
    MEM32(esi + 0x10) = eax; /* 0x1702DA71: mov dword ptr [esi + 0x10], eax */
    SET_LO8(eax, MEM8(ebp + (-0x29))); /* 0x1702DA74: mov al, byte ptr [ebp - 0x29] */
    MEM8(esi + 0x14) = (uint8_t)(LO8(eax)); /* 0x1702DA77: mov byte ptr [esi + 0x14], al */
    SET_LO8(eax, MEM8(ebp + (-0x28))); /* 0x1702DA7A: mov al, byte ptr [ebp - 0x28] */
    MEM8(esi + 0x15) = (uint8_t)(LO8(eax)); /* 0x1702DA7D: mov byte ptr [esi + 0x15], al */
    SET_LO8(eax, MEM8(ebp + (-0x26))); /* 0x1702DA80: mov al, byte ptr [ebp - 0x26] */
    MEM8(esi + 0x16) = (uint8_t)(LO8(eax)); /* 0x1702DA83: mov byte ptr [esi + 0x16], al */
    SET_LO8(eax, MEM8(ebp + (-0x25))); /* 0x1702DA86: mov al, byte ptr [ebp - 0x25] */
    MEM8(esi + 0x17) = (uint8_t)(LO8(eax)); /* 0x1702DA89: mov byte ptr [esi + 0x17], al */
    edi = esi + 0x18; /* 0x1702DA8C: lea edi, [esi + 0x18] */
    PUSH32(esp, 8); /* 0x1702DA8F: push 8 */
    ecx = POP32_VAL(esp); /* 0x1702DA91: pop ecx */
    esi = ebp + (-0x24); /* 0x1702DA92: lea esi, [ebp - 0x24] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702DA95: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DA97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702DA99:
    ecx = MEM32(ebp + (-0x4)); /* 0x1702DA99: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1702DA9C: pop edi */
    esi = POP32_VAL(esp); /* 0x1702DA9D: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x1702DA9E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702DAA3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DAA4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702DAAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DAACu);

L_1702DAAC:
    edi = edi; /* 0x1702DAAC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DAAE: push ebp */
    ebp = esp; /* 0x1702DAAF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x1702DAB1: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1702DAB4: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x1702DAB9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1702DABA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1702DABD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1702DABF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1702DAC0: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1702DAC3: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702DB3D; /* 0x1702DAC6: je 0x1702db3d */
L_1702DAC8:
    /* cmp MEM32(0x1723C89C), 0 */ /* 0x1702DAC8: cmp dword ptr [0x1723c89c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723C89C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702DB2A; /* 0x1702DACF: je 0x1702db2a */
L_1702DAD1:
    eax = ebp + (-0x60); /* 0x1702DAD1: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1702DAD4: push eax */
    PUSH32(esp, 0x5Cu); /* 0x1702DAD5: push 0x5c */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1702DAD7: push dword ptr [edi + 0x14] */
    RECOMP_ICALL(MEM32(0x17001074)); /* 0x1702DADA: call dword ptr [0x17001074] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702DAE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702DB3D; /* 0x1702DAE2: je 0x1702db3d */
L_1702DAE4:
    eax = MEM32(ebp + (-0x60)); /* 0x1702DAE4: mov eax, dword ptr [ebp - 0x60] */
    MEM32(esi) = eax; /* 0x1702DAE7: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x5C)); /* 0x1702DAE9: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(esi + 0x4) = eax; /* 0x1702DAEC: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x1702DAEF: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi + 0x8) = eax; /* 0x1702DAF2: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4FC); /* 0x1702DAF5: mov eax, dword ptr [edi + 0x4fc] */
    MEM32(esi + 0xC) = eax; /* 0x1702DAFB: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)MEM8(ebp + (-0x4C)); /* 0x1702DAFE: movzx eax, byte ptr [ebp - 0x4c] */
    MEM32(esi + 0x10) = eax; /* 0x1702DB02: mov dword ptr [esi + 0x10], eax */
    SET_LO8(eax, MEM8(ebp + (-0x49))); /* 0x1702DB05: mov al, byte ptr [ebp - 0x49] */
    MEM8(esi + 0x14) = (uint8_t)(LO8(eax)); /* 0x1702DB08: mov byte ptr [esi + 0x14], al */
    SET_LO8(eax, MEM8(ebp + (-0x48))); /* 0x1702DB0B: mov al, byte ptr [ebp - 0x48] */
    MEM8(esi + 0x15) = (uint8_t)(LO8(eax)); /* 0x1702DB0E: mov byte ptr [esi + 0x15], al */
    SET_LO8(eax, MEM8(ebp + (-0x46))); /* 0x1702DB11: mov al, byte ptr [ebp - 0x46] */
    MEM8(esi + 0x16) = (uint8_t)(LO8(eax)); /* 0x1702DB14: mov byte ptr [esi + 0x16], al */
    SET_LO8(eax, MEM8(ebp + (-0x45))); /* 0x1702DB17: mov al, byte ptr [ebp - 0x45] */
    MEM8(esi + 0x17) = (uint8_t)(LO8(eax)); /* 0x1702DB1A: mov byte ptr [esi + 0x17], al */
    edi = esi + 0x18; /* 0x1702DB1D: lea edi, [esi + 0x18] */
    PUSH32(esp, 0x10u); /* 0x1702DB20: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1702DB22: pop ecx */
    esi = ebp + (-0x44); /* 0x1702DB23: lea esi, [ebp - 0x44] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702DB26: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1702DB98; /* 0x1702DB28: jmp 0x1702db98 */
L_1702DB2A:
    eax = ebp + (-0x40); /* 0x1702DB2A: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1702DB2D: push eax */
    PUSH32(esp, 0x3Cu); /* 0x1702DB2E: push 0x3c */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1702DB30: push dword ptr [edi + 0x14] */
    RECOMP_ICALL(MEM32(0x17001078)); /* 0x1702DB33: call dword ptr [0x17001078] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702DB39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702DB44; /* 0x1702DB3B: jne 0x1702db44 */
L_1702DB3D:
    eax = 0x8876086Cu; /* 0x1702DB3D: mov eax, 0x8876086c */
    goto L_1702DB9A; /* 0x1702DB42: jmp 0x1702db9a */
L_1702DB44:
    eax = MEM32(ebp + (-0x40)); /* 0x1702DB44: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi) = eax; /* 0x1702DB47: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1702DB49: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(esi + 0x4) = eax; /* 0x1702DB4C: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1702DB4F: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi + 0x8) = eax; /* 0x1702DB52: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4FC); /* 0x1702DB55: mov eax, dword ptr [edi + 0x4fc] */
    MEM32(esi + 0xC) = eax; /* 0x1702DB5B: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)MEM8(ebp + (-0x2C)); /* 0x1702DB5E: movzx eax, byte ptr [ebp - 0x2c] */
    MEM32(esi + 0x10) = eax; /* 0x1702DB62: mov dword ptr [esi + 0x10], eax */
    SET_LO8(eax, MEM8(ebp + (-0x29))); /* 0x1702DB65: mov al, byte ptr [ebp - 0x29] */
    MEM8(esi + 0x14) = (uint8_t)(LO8(eax)); /* 0x1702DB68: mov byte ptr [esi + 0x14], al */
    SET_LO8(eax, MEM8(ebp + (-0x28))); /* 0x1702DB6B: mov al, byte ptr [ebp - 0x28] */
    MEM8(esi + 0x15) = (uint8_t)(LO8(eax)); /* 0x1702DB6E: mov byte ptr [esi + 0x15], al */
    SET_LO8(eax, MEM8(ebp + (-0x26))); /* 0x1702DB71: mov al, byte ptr [ebp - 0x26] */
    MEM8(esi + 0x16) = (uint8_t)(LO8(eax)); /* 0x1702DB74: mov byte ptr [esi + 0x16], al */
    SET_LO8(eax, MEM8(ebp + (-0x25))); /* 0x1702DB77: mov al, byte ptr [ebp - 0x25] */
    PUSH32(esp, 0x20u); /* 0x1702DB7A: push 0x20 */
    MEM8(esi + 0x17) = (uint8_t)(LO8(eax)); /* 0x1702DB7C: mov byte ptr [esi + 0x17], al */
    eax = esi + 0x18; /* 0x1702DB7F: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1702DB82: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1702DB83: push -1 */
    eax = ebp + (-0x24); /* 0x1702DB85: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1702DB88: push eax */
    PUSH32(esp, 0); /* 0x1702DB89: push 0 */
    PUSH32(esp, 0); /* 0x1702DB8B: push 0 */
    RECOMP_ICALL(MEM32(0x17001120)); /* 0x1702DB8D: call dword ptr [0x17001120] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM16(esi + 0x56)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi + 0x56) = (uint16_t)(MEM16(esi + 0x56) & 0); /* 0x1702DB93: and word ptr [esi + 0x56], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1702DB98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DB98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702DB9A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1702DB9A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1702DB9D: pop edi */
    esi = POP32_VAL(esp); /* 0x1702DB9E: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x1702DB9F: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702DBA4: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DBA5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702DBAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DBADu);

L_1702DBAD:
    edi = edi; /* 0x1702DBAD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DBAF: push ebp */
    ebp = esp; /* 0x1702DBB0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702DBB2: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1702DBB5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1702DBB8: push dword ptr [eax + 0x10] */
    RECOMP_ICALL(MEM32(0x17001070)); /* 0x1702DBBB: call dword ptr [0x17001070] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1702DBC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DBC2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702DBCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DBCAu);

L_1702DBCA:
    edi = edi; /* 0x1702DBCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DBCC: push ebp */
    ebp = esp; /* 0x1702DBCD: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1702DBCF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1702DBD0: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DBD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1702DBD5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702DBE7; /* 0x1702DBD7: je 0x1702dbe7 */
L_1702DBD9:
    PUSH32(esp, esi); /* 0x1702DBD9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1702DBDA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFu); /* 0x1702DBDD: push 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x1702DBDF: add esi, 0x30 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1702DBE2: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702DBE3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1702DBE5: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1702DBE6: pop esi */
L_1702DBE7:
    edi = POP32_VAL(esp); /* 0x1702DBE7: pop edi */
    ebp = POP32_VAL(esp); /* 0x1702DBE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DBE9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702DBF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DBF1u);

L_1702DBF1:
    edi = edi; /* 0x1702DBF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DBF3: push ebp */
    ebp = esp; /* 0x1702DBF4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1702DBF6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x1702DBF9: mov eax, dword ptr [eax + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1702DBFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702DBFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702DC05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DC05u);

L_1702DC05:
    edi = edi; /* 0x1702DC05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DC07: push ebp */
    ebp = esp; /* 0x1702DC08: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1702DC0A: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x1702DC0D: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702DC20; /* 0x1702DC11: je 0x1702dc20 */
L_1702DC13:
    eax = MEM32(eax + 0xC); /* 0x1702DC13: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1702DC16: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702DC18: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1702DC19: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702DC1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702DC22; /* 0x1702DC1E: jl 0x1702dc22 */
L_1702DC20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DC20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702DC22:
    ebp = POP32_VAL(esp); /* 0x1702DC22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702DC23: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702DC2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DC2Bu);

L_1702DC2B:
    edi = edi; /* 0x1702DC2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DC2D: push ebp */
    ebp = esp; /* 0x1702DC2E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1702DC30: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x1702DC33: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1702DC46; /* 0x1702DC37: je 0x1702dc46 */
L_1702DC39:
    eax = MEM32(eax + 0xC); /* 0x1702DC39: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1702DC3C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1702DC3E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1702DC3F: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1702DC42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1702DC48; /* 0x1702DC44: jl 0x1702dc48 */
L_1702DC46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DC46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702DC48:
    ebp = POP32_VAL(esp); /* 0x1702DC48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702DC49: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702DC51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DC51u);

L_1702DC51:
    edi = edi; /* 0x1702DC51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DC53: push ebp */
    ebp = esp; /* 0x1702DC54: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1702DC56: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1700168Cu); /* 0x1702DC59: push 0x1700168c */
    PUSH32(esp, 0); /* 0x1702DC5E: push 0 */
    PUSH32(esp, 0); /* 0x1702DC60: push 0 */
    eax = ebp + (-0x14); /* 0x1702DC62: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1702DC65: push eax */
    PUSH32(esp, 0x80u); /* 0x1702DC66: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1702DC6B: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x1702DC6E: push dword ptr [ecx + 0x10] */
    RECOMP_ICALL(MEM32(0x1700106C)); /* 0x1702DC71: call dword ptr [0x1700106c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1702DC77: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1702DC79: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1702DC7C: setne cl */
    eax = ecx; /* 0x1702DC7F: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702DC81: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1702DC82: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1702DC8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DC8Au);

L_1702DC8A:
    edi = edi; /* 0x1702DC8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DC8C: push ebp */
    ebp = esp; /* 0x1702DC8D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702DC8F: push ecx */
    PUSH32(esp, ebx); /* 0x1702DC90: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1702DC91: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1702DC94: push esi */
    PUSH32(esp, edi); /* 0x1702DC95: push edi */
    edi = MEM32(ebx); /* 0x1702DC96: mov edi, dword ptr [ebx] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebx + 0x4)); /* 0x1702DC98: imul edi, dword ptr [ebx + 4] */
    edi = edi * 4 + 0x28; /* 0x1702DC9C: lea edi, [edi*4 + 0x28] */
    PUSH32(esp, edi); /* 0x1702DCA3: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1702DCA4: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1702DCA7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1702DCAC: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DCAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1702DCB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702DCB2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1702DD09; /* 0x1702DCB3: je 0x1702dd09 */
L_1702DCB5:
    ecx = edi; /* 0x1702DCB5: mov ecx, edi */
    edx = ecx; /* 0x1702DCB7: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702DCB9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702DCB9: shr ecx, 2 */
    edi = esi; /* 0x1702DCBC: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1702DCBE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1702DCC0: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702DCC2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1702DCC5: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    MEM32(esi) = 0x28u; /* 0x1702DCC7: mov dword ptr [esi], 0x28 */
    eax = MEM32(ebx); /* 0x1702DCCD: mov eax, dword ptr [ebx] */
    MEM32(esi + 0x4) = eax; /* 0x1702DCCF: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebx + 0x4); /* 0x1702DCD2: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1702DCD5: neg eax */
    _flag_k = FK_CMP;
    MEM32(esi + 0x8) = eax; /* 0x1702DCD7: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DCDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1702DCDC: push eax */
    PUSH32(esp, eax); /* 0x1702DCDD: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1702DCDE: push dword ptr [ebp + 0xc] */
    MEM32(esi + 0x10) = eax; /* 0x1702DCE1: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, eax); /* 0x1702DCE4: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1702DCE5: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1702DCE8: push esi */
    MEM16(esi + 0xC) = (uint16_t)(1); /* 0x1702DCE9: mov word ptr [esi + 0xc], 1 */
    MEM16(esi + 0xE) = (uint16_t)(0x20u); /* 0x1702DCEF: mov word ptr [esi + 0xe], 0x20 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1702DCF5: push dword ptr [eax + 0x10] */
    RECOMP_ICALL(MEM32(0x17001068)); /* 0x1702DCF8: call dword ptr [0x17001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1702DCFE: push esi */
    edi = eax; /* 0x1702DCFF: mov edi, eax */
    RECOMP_CALL(sub_1721B010); /* 0x1702DD01: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1702DD06: pop ecx */
    eax = edi; /* 0x1702DD07: mov eax, edi */
L_1702DD09:
    edi = POP32_VAL(esp); /* 0x1702DD09: pop edi */
    esi = POP32_VAL(esp); /* 0x1702DD0A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1702DD0B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702DD0C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DD0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1702DD15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702DD15u);

L_1702DD15:
    edi = edi; /* 0x1702DD15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1702DD17: push ebp */
    ebp = esp; /* 0x1702DD18: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1702DD1A: push ecx */
    PUSH32(esp, ebx); /* 0x1702DD1B: push ebx */
    ebx = ecx; /* 0x1702DD1C: mov ebx, ecx */
    eax = MEM32(ebx + 0x4); /* 0x1702DD1E: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1702DD21: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x1702DD24: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1702DD26: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1702DD8D; /* 0x1702DD27: jbe 0x1702dd8d */
L_1702DD29:
    /* test eax, eax */ /* 0x1702DD29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702DD36; /* 0x1702DD2B: jne 0x1702dd36 */
L_1702DD2D:
    MEM32(ebp + 0x8) = 0x10u; /* 0x1702DD2D: mov dword ptr [ebp + 8], 0x10 */
    goto L_1702DD3B; /* 0x1702DD34: jmp 0x1702dd3b */
L_1702DD36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1702DD36: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1702DD38: mov dword ptr [ebp + 8], eax */
L_1702DD3B:
    eax = MEM32(ebp + 0x8); /* 0x1702DD3B: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x1702DD3E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1702DD36; /* 0x1702DD40: jb 0x1702dd36 */
L_1702DD42:
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1702DD42: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1702DD42: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1702DD45: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1702DD46: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1702DD4B: mov edi, eax */
    /* test edi, edi */ /* 0x1702DD4D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1702DD4F: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1702DD50: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1702DD5C; /* 0x1702DD53: jne 0x1702dd5c */
L_1702DD55:
    eax = 0x8007000Eu; /* 0x1702DD55: mov eax, 0x8007000e */
    goto L_1702DD8F; /* 0x1702DD5A: jmp 0x1702dd8f */
L_1702DD5C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1702DD5C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1702DD7A; /* 0x1702DD60: jne 0x1702dd7a */
L_1702DD62:
    ecx = MEM32(ebx + 0x4); /* 0x1702DD62: mov ecx, dword ptr [ebx + 4] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1702DD65: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1702DD65: shl ecx, 3 */
    eax = ecx; /* 0x1702DD68: mov eax, ecx */
    PUSH32(esp, esi); /* 0x1702DD6A: push esi */
    esi = MEM32(ebx); /* 0x1702DD6B: mov esi, dword ptr [ebx] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1702DD6D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1702DD6D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1702DD70: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1702DD72: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1702DD74: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1702DD77: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1702DD79: pop esi */
L_1702DD7A:
    PUSH32(esp, MEM32(ebx)); /* 0x1702DD7A: push dword ptr [ebx] */
    RECOMP_CALL(sub_1721B010); /* 0x1702DD7C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1702DD81: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x1702DD84: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0x8); /* 0x1702DD86: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1702DD89: pop ecx */
    MEM32(ebx + 0x4) = eax; /* 0x1702DD8A: mov dword ptr [ebx + 4], eax */
L_1702DD8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1702DD8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1702DD8F:
    edi = POP32_VAL(esp); /* 0x1702DD8F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1702DD90: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1702DD91: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1702DD92: ret 8 */
    RECOMP_REGS_OUT();
}
