#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17001630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001630u);

L_17001630:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001630: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001632: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x17001634: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001636: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001638: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x1700163A: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1700163C; /* falls through past a gap */
L_1700163B:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x1700163B: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1700163E; /* falls through past a gap */
L_1700163C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x1700163C: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1700163E:
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1700163E: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001640: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001642: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17001644: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFF00u; /* 0x17001646: add eax, 0xff00 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1700164B: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700164D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x461702BC)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x461702BC) = (uint8_t)(MEM8(edx + 0x461702BC) + HI8(edx)); /* 0x1700164F: add byte ptr [edx + 0x461702bc], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(edi) = eax; edi += _df * 4; /* 0x17001655: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02D9AA17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x02D9AA17u; /* 0x17001656: add eax, 0x2d9aa17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1700165B: pop ss */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x42CDE8FE)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x42CDE8FE)); /* 0x1700165C: add edi, dword ptr [ebp - 0x42cde8fe] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001662: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - HI8(ecx)); /* 0x17001664: sub al, ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001666: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17001668u, "aam 0xc6");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700166A: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = 0x9C1702C7u; /* 0x1700166C: mov ebx, 0x9c1702c7 */
    PUSH32(esp, ebp); ebp = esp; esp -= 0x1702u; /* 0x17001671: enter 0x1702, -0x12 */
    void_lift_trap(0x17001675u, "iretd ");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001676: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(esp); /* 0x17001678: call esp */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700167A: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1700163B; /* 0x1700167C: jb 0x1700163b */
L_1700167E:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700167E: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = edi, _ab = MEM32(esi + (-0x414DE8FE)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001680: adc edi, dword ptr [esi - 0x414de8fe] */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001686: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001688: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x1700168A: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700168C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700168E: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001690: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001692: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001694: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001696: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001698: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700169A: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x170016A0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17001650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001650u);

    goto L_17001650;
L_1700163B:
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x1700163B: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1700163E: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001640: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001642: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17001644: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFF00u; /* 0x17001646: add eax, 0xff00 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1700164B: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700164D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x461702BC)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x461702BC) = (uint8_t)(MEM8(edx + 0x461702BC) + HI8(edx)); /* 0x1700164F: add byte ptr [edx + 0x461702bc], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_17001655; /* falls through past a gap */
L_17001650:
    SET_LO8(edx, 0xBCu); /* 0x17001650: mov dl, 0xbc */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001652: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17001654: inc esi */
    _flag_k = FK_INC;
L_17001655:
    MEM32(edi) = eax; edi += _df * 4; /* 0x17001655: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02D9AA17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x02D9AA17u; /* 0x17001656: add eax, 0x2d9aa17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1700165B: pop ss */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x42CDE8FE)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x42CDE8FE)); /* 0x1700165C: add edi, dword ptr [ebp - 0x42cde8fe] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001662: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - HI8(ecx)); /* 0x17001664: sub al, ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001666: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17001668u, "aam 0xc6");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700166A: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = 0x9C1702C7u; /* 0x1700166C: mov ebx, 0x9c1702c7 */
    PUSH32(esp, ebp); ebp = esp; esp -= 0x1702u; /* 0x17001671: enter 0x1702, -0x12 */
    void_lift_trap(0x17001675u, "iretd ");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001676: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(esp); /* 0x17001678: call esp */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700167A: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1700163B; /* 0x1700167C: jb 0x1700163b */
L_1700167E:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x1700167E: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = edi, _ab = MEM32(esi + (-0x414DE8FE)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001680: adc edi, dword ptr [esi - 0x414de8fe] */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17001686: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001688: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x1700168A: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700168C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700168E: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001690: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001692: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001694: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001696: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001698: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700169A: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x170016A0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1700168C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1700168Cu);

L_1700168C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700168C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700168E: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001690: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001692: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001694: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001696: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17001698: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1700169A: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700169E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x170016A0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170016A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170016A0u);

L_170016A0:
    void_lift_trap(0x170016A0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17001898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001898u);

L_17001898:
    RECOMP_ICALL(0x5D171BBFu); /* 0x17001898: call 0x5d171bbf */ /* not lifted */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; edi += _df * 4; /* 0x1700189D: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0338DF17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0338DF17u; /* 0x1700189E: add eax, 0x338df17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x170018A3: pop ss */
    void_lift_trap(0x170018A4u, "iretd ");
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170018A5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x170018A6: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    /* test MEM8(edx), LO8(ebx) */ /* 0x170018A8: test byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x170018AA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    eax = eax & MEM32(ebx); /* 0x170018AC: and eax, dword ptr ss:[ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_ss = POP32_VAL(esp); /* 0x170018AF: pop ss */
    eax = MEM32(esi); esi += _df * 4; /* 0x170018B0: lodsd eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    eax = eax & MEM32(ebx); /* 0x170018B1: and eax, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_ss = POP32_VAL(esp); /* 0x170018B3: pop ss */
    /* cmp MEM8(ebx + eax), HI8(eax) */ /* 0x170018B4: cmp byte ptr [ebx + eax], ah */
    _flag_a = (uint32_t)(MEM8(ebx + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170018B7: pop ss */
    { uint32_t _aa = LO8(eax), _ab = 0x25u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170018B8: adc al, 0x25 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x170018BA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x170018BC: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170018BD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x170018BE: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170018C0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170018C1: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x170018C2: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x170018C4u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001950u);

L_17001950:
    /* in: no port I/O under Win32 */ /* 0x17001950: in al, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17001951: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + ebp * 2 + (-0x69BC1D08)) = ebp; /* 0x17001952: mov dword ptr [ebp + ebp*2 - 0x69bc1d08], ebp */
    _st[0] = _st[0] / (double)(int16_t)MEM16(ecx); /* 0x17001959: fidiv word ptr [ecx] */
    _df = 1; /* 0x1700195B: cld  */
    _flag_a = (uint32_t)((eax ^ 0x0D9E6DF9u)); _flag_b = (uint32_t)((eax ^ 0x0D9E6DF9u));
    eax = eax ^ 0x0D9E6DF9u; /* 0x1700195C: xor eax, 0xd9e6df9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17001961: dec eax */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 2160; { RECOMP_REGS_OUT(); return; } /* 0x17001962: ret 0x86c */
    RECOMP_REGS_OUT();
}

void sub_170019C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170019C0u);

L_170019C0:
    RECOMP_FLAGS_OUT(); esp += 11280; { RECOMP_REGS_OUT(); return; } /* 0x170019C0: ret 0x2c0c */
    RECOMP_REGS_OUT();
}

void sub_170019D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170019D0u);

L_170019D0:
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170019D0: clc  */
    /* cmp eax, 0x5DAA7A3Eu */ /* 0x170019D1: cmp eax, 0x5daa7a3e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5DAA7A3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170019D7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(eax), 0x57u */ /* 0x170019D8: test al, 0x57 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = 0x8475D401u; /* 0x170019DA: mov edx, 0x8475d401 */
    RECOMP_ITAIL(0x170019DFu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170019F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170019F0u);

L_170019F0:
    SET_LO8(ebx, 0); /* 0x170019F0: mov bl, 0 */
    /* fwait */ /* 0x170019F2: wait  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_17001A1A; /* 0x170019F3: jg 0x17001a1a */
L_170019F5:
    void_lift_trap(0x170019F5u, "int1 ");
    /* nop */ /* 0x170019F6: nop  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170019F7: dec eax */
    _flag_k = FK_DEC;
    { uint32_t _tmp = MEM32(esi + 0x1C); /* 0x170019F8: xchg dword ptr [esi + 0x1c], ebp */
      MEM32(esi + 0x1C) = ebp;
      ebp = _tmp; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170019FB: inc edx */
    _flag_k = FK_INC;
    edi = 0x434D7C69u; /* 0x170019FC: mov edi, 0x434d7c69 */
    edx = POP32_VAL(esp); /* 0x17001A01: pop edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17001A02: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (eax >> 8) & 0xD5u; _flag_b = 0; _cf = _flag_a & 1u; _flag_k = FK_EFLAGS; /* 0x17001A03: sahf  */
    _flag_k = FK_EFLAGS;
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17001A04: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    if ((!RECOMP_PF((_flag_a - _flag_b), 0))) goto L_17001A7A; /* 0x17001A05: jnp 0x17001a7a */
L_17001A07:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17001A07: dec edx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = MEM32(ebx + (-0x49)); /* 0x17001A08: xchg dword ptr [ebx - 0x49], eax */
      MEM32(ebx + (-0x49)) = eax;
      eax = _tmp; }
    /* cmp eax, 0x7684E847u */ /* 0x17001A0B: cmp eax, 0x7684e847 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7684E847u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* in: no port I/O under Win32 */ /* 0x17001A10: in al, 0xf7 */
    _flag_a = (uint32_t)((ebx ^ esp)); _flag_b = (uint32_t)((ebx ^ esp));
    ebx = ebx ^ esp; /* 0x17001A12: xor ebx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17001A14: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x998E4CC2u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x998E4CC2u; /* 0x17001A15: add eax, 0x998e4cc2 */
    _flag_k = FK_ADD;
L_17001A1A:
    { uint32_t _sa = LO8(eax), _sb = 0xECu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A1A: sbb al, 0xec */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_ss); /* 0x17001A1C: push ss */
    PUSH32(esp, edi); /* 0x17001A1D: push edi */
    { uint32_t _tmp = edx; /* 0x17001A1E: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    RECOMP_ITAIL(0x17001A1Fu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    goto L_17001A7E; /* falls through past a gap */
L_17001A7A:
    { uint32_t _aa = eax, _ab = 0x280A755Au, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A7A: adc eax, 0x280a755a */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_17001A7F; /* falls through past a gap */
L_17001A7E:
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A7F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBF22E553u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBF22E553u; /* 0x17001A7F: sub eax, 0xbf22e553 */
    _flag_k = FK_CMP;
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A00u);

L_17001A00:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17001A00: inc ebx */
    _flag_k = FK_INC;
    edx = POP32_VAL(esp); /* 0x17001A01: pop edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17001A02: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (eax >> 8) & 0xD5u; _flag_b = 0; _cf = _flag_a & 1u; _flag_k = FK_EFLAGS; /* 0x17001A03: sahf  */
    _flag_k = FK_EFLAGS;
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17001A04: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    if ((!RECOMP_PF((_flag_a - _flag_b), 0))) goto L_17001A7A; /* 0x17001A05: jnp 0x17001a7a */
L_17001A07:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17001A07: dec edx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = MEM32(ebx + (-0x49)); /* 0x17001A08: xchg dword ptr [ebx - 0x49], eax */
      MEM32(ebx + (-0x49)) = eax;
      eax = _tmp; }
    /* cmp eax, 0x7684E847u */ /* 0x17001A0B: cmp eax, 0x7684e847 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7684E847u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* in: no port I/O under Win32 */ /* 0x17001A10: in al, 0xf7 */
    _flag_a = (uint32_t)((ebx ^ esp)); _flag_b = (uint32_t)((ebx ^ esp));
    ebx = ebx ^ esp; /* 0x17001A12: xor ebx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17001A14: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x998E4CC2u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x998E4CC2u; /* 0x17001A15: add eax, 0x998e4cc2 */
    _flag_k = FK_ADD;
    { uint32_t _sa = LO8(eax), _sb = 0xECu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A1A: sbb al, 0xec */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_ss); /* 0x17001A1C: push ss */
    PUSH32(esp, edi); /* 0x17001A1D: push edi */
    { uint32_t _tmp = edx; /* 0x17001A1E: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    RECOMP_ITAIL(0x17001A1Fu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    goto L_17001A7E; /* falls through past a gap */
L_17001A7A:
    { uint32_t _aa = eax, _ab = 0x280A755Au, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A7A: adc eax, 0x280a755a */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_17001A7F; /* falls through past a gap */
L_17001A7E:
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A7F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBF22E553u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBF22E553u; /* 0x17001A7F: sub eax, 0xbf22e553 */
    _flag_k = FK_CMP;
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A10u);

L_17001A10:
    /* in: no port I/O under Win32 */ /* 0x17001A10: in al, 0xf7 */
    _flag_a = (uint32_t)((ebx ^ esp)); _flag_b = (uint32_t)((ebx ^ esp));
    ebx = ebx ^ esp; /* 0x17001A12: xor ebx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17001A14: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x998E4CC2u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x998E4CC2u; /* 0x17001A15: add eax, 0x998e4cc2 */
    _flag_k = FK_ADD;
    { uint32_t _sa = LO8(eax), _sb = 0xECu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A1A: sbb al, 0xec */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_ss); /* 0x17001A1C: push ss */
    PUSH32(esp, edi); /* 0x17001A1D: push edi */
    { uint32_t _tmp = edx; /* 0x17001A1E: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    RECOMP_ITAIL(0x17001A1Fu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A60u);

    goto L_17001A60;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
L_17001A60:
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A70u);

    goto L_17001A70;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
L_17001A70:
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A80u);

    goto L_17001A80;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A80:
    PUSH32(esp, ebx); /* 0x17001A80: push ebx */
    /* in: no port I/O under Win32 */ /* 0x17001A81: in eax, 0x22 */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001A90u);

    goto L_17001A90;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001AA0u);

    goto L_17001AA0;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001AA1; /* falls through past a gap */
L_17001AA0:
    PUSH32(esp, _seg_cs); /* 0x17001AA0: push cs */
L_17001AA1:
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001AB0u);

    goto L_17001AB0;
L_17001A55:
    { uint32_t _tmp = ebp; /* 0x17001A55: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    /* test eax, 0x2A8A904Du */ /* 0x17001A56: test eax, 0x2a8a904d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2A8A904Du);
    _cf = 0;
    _flag_k = FK_TEST;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001A5B: stc  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17001A5C: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(eax), 0xE7u */ /* 0x17001A5D: cmp al, 0xe7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE7u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ss); /* 0x17001A5F: push ss */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17001A6B; /* 0x17001A60: jle 0x17001a6b */
L_17001A62:
    ebx = POP32_VAL(esp); /* 0x17001A62: pop ebx */
    void_lift_trap(0x17001A63u, "aad 0xb6");
    ebp = 0x3DB04C52u; /* 0x17001A65: mov ebp, 0x3db04c52 */
    PUSHAD(); /* 0x17001A6A: pushal  */
L_17001A6B:
    PUSH32(esp, ecx); /* 0x17001A6B: push ecx */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xE9Du; /* 0x17001A6C: enter 0xe9d, 0x42 */
    SET_LO8(ebx, 0xE2u); /* 0x17001A70: mov bl, 0xe2 */
    void_lift_trap(0x17001A72u, "iretd ");
    void_lift_trap(0x17001A73u, "int1 ");
    if (ecx == 0) goto L_17001A83; /* 0x17001A74: jecxz 0x17001a83 */
L_17001A76:
    _flag_a = (uint32_t)(MEM8(esi + (-0x51))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(esi + (-0x51)) = (uint8_t)(MEM8(esi + (-0x51)) - LO8(ecx)); /* 0x17001A76: sub byte ptr [esi - 0x51], cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(0xA755A15); /* 0x17001A79: mov eax, dword ptr [0xa755a15] */
    _flag_a = (uint32_t)(MEM8((-0x40DD1AAD))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8((-0x40DD1AAD)) = (uint8_t)(MEM8((-0x40DD1AAD)) - HI8(ecx)); /* 0x17001A7E: sub byte ptr [0xbf22e553], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_17001A84; /* falls through past a gap */
L_17001A83:
    edi = 0x4781292Cu; /* 0x17001A83: mov edi, 0x4781292c */
    goto L_17001A88; /* falls through past a gap */
L_17001A84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x29u); /* 0x17001A84: sub al, 0x29 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + (-0x61))); _flag_b = (uint32_t)(0x55BD62EAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + (-0x61)) = MEM32(edi + (-0x61)) + 0x55BD62EAu; /* 0x17001A86: add dword ptr [edi - 0x61], 0x55bd62ea */
    _flag_k = FK_ADD;
    goto L_17001A8D; /* falls through past a gap */
L_17001A88:
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x17001A88: lahf  */
    void_lift_trap(0x17001A89u, "ljmp 0x93dd:0x4b55bd62");
    goto L_17001A90; /* falls through past a gap */
L_17001A8D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17001A8D: dec ebx */
    _flag_k = FK_DEC;
    *(double*)ADDR(ebx + (-0x8ADB9E4)) = _st[0]; /* 0x17001A8E: fst qword ptr [ebx - 0x8adb9e4] */
    goto L_17001A94; /* falls through past a gap */
L_17001A90:
    { uint32_t _sa = LO8(eax), _sb = 0x46u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A90: sbb al, 0x46 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x17001A92: push edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebx)); /* 0x17001A93: mul dword ptr [ebx] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    goto L_17001A95; /* falls through past a gap */
L_17001A94:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    ebx = ebx & MEM32(esi); /* 0x17001A94: and ebx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17001A96; /* falls through past a gap */
L_17001A95:
    PUSH32(esp, _seg_ds); /* 0x17001A95: push ds */
L_17001A96:
    /* test MEM8(eax + (-0x47)), 0xFFFFFFF8u */ /* 0x17001A96: test byte ptr [eax - 0x47], -8 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x47))) << 24; _flag_b = (uint32_t)(0xFFFFFFF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + (-0x7B)), _ab = 0xFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001A9A: adc dword ptr [eax - 0x7b], 0xf */
      MEM32(eax + (-0x7B)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ebp ^ MEM32(edi + 0xE))); _flag_b = (uint32_t)((ebp ^ MEM32(edi + 0xE)));
    ebp = ebp ^ MEM32(edi + 0xE); /* 0x17001A9E: xor ebp, dword ptr [edi + 0xe] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((HI8(eax) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(ebx))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(ebx)); /* 0x17001AA1: or ah, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_HI8(edx, 0xF9u); /* 0x17001AA3: mov dh, 0xf9 */
    (void)(MEM16(ebx + (-0x13526BB2))) /* seg reg write */; /* 0x17001AA5: mov es, word ptr [ebx - 0x13526bb2] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFC0B0u; /* 0x17001AAB: enter -0x3f50, 0x48 */
    { uint32_t _tmp = edi; /* 0x17001AAF: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
L_17001AB0:
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001AB0: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17001AB2: dec esp */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x17001AB3: push edi */
    SET_LO8(ebx, 0xF0u); /* 0x17001AB4: mov bl, 0xf0 */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + (-0x7E)))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + (-0x7E))));
    eax = eax ^ MEM32(ebx + (-0x7E)); /* 0x17001AB6: xor eax, dword ptr [ebx - 0x7e] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A8E893u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xA0A8E893u; /* 0x17001AB9: sub eax, 0xa0a8e893 */
    _flag_k = FK_CMP;
    (void)(MEM16(edi + 0x4)) /* seg reg write */; /* 0x17001ABE: mov cs, word ptr [edi + 4] */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_LE(_flag_a, _flag_b)) goto L_17001A55; /* 0x17001AC2: jle 0x17001a55 */
L_17001AC4:
    PUSH32(esp, _seg_ds); /* 0x17001AC4: push ds */
    RECOMP_ITAIL(0x17001AC5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001AF0u);

L_17001AF0:
    void_lift_trap(0x17001AF0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17001B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001B40u);

L_17001B40:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_17001B84; /* 0x17001B40: js 0x17001b84 */
L_17001B42:
    /* cmp HI8(ecx), MEM8(eax + 0x5F) */ /* 0x17001B42: cmp ch, byte ptr [eax + 0x5f] */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x5F)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    void_lift_trap(0x17001B45u, "int 0x24");
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x17001B47: dec ebp */
    _flag_k = FK_DEC;
    /* nop */ /* 0x17001B48: nop  */
    eax = MEM32(esi); esi += _df * 4; /* 0x17001B49: lodsd eax, dword ptr [esi] */
    RECOMP_ITAIL(0x17001B4Au); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17001B84:
    _flag_a = SSE_COMI(_st[0], _st[4]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17001B84: fcomi st(4) */
    _flag_k = FK_EFLAGS;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17001B87: inc esp */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7)) = ecx; /* 0x17001B88: mov dword ptr [ebp - 7], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17001B8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_17001B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001B60u);

L_17001B60:
    void_lift_trap(0x17001B60u, "aam 0x58");
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17001B63: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    RECOMP_ITAIL(0x17001B64u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001B80u);

L_17001B80:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    SET_LO8(ecx, LO8(ecx) & HI8(eax)); /* 0x17001B80: and cl, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* out: no port I/O under Win32 */ /* 0x17001B82: out 0x3c, al */
    _flag_a = SSE_COMI(_st[0], _st[4]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17001B84: fcomi st(4) */
    _flag_k = FK_EFLAGS;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17001B87: inc esp */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7)) = ecx; /* 0x17001B88: mov dword ptr [ebp - 7], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17001B8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_17001B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001B90u);

L_17001B90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17001B90: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17001B91: movsd dword ptr es:[edi], dword ptr [esi] */
    void_lift_trap(0x17001B92u, "ljmp 0xae4d:0x49f9a611");
    PUSH32(esp, 0xFFFFFFE1u); /* 0x17001B99: push -0x1f */
    { uint32_t _tmp = edx; /* 0x17001B9B: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x17001B9C: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) | 0xC4u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xC4u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xC4u); /* 0x17001B9E: or al, 0xc4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ITAIL(0x17001BA0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001BB0u);

L_17001BB0:
    void_lift_trap(0x17001BB0u, "lcall 0x88d5, 0x79887576");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17001BB7: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17001BB8: stosb byte ptr es:[edi], al */
    goto L_17001C0E; /* 0x17001BB9: jmp 0x17001c0e */
L_17001C0E:
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ecx))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ecx))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ecx)); /* 0x17001C0E: xor al, byte ptr [ecx] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _df = 1; /* 0x17001C10: cld  */
    RECOMP_ITAIL(0x17001C11u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001BC0u);

L_17001BC0:
    RECOMP_FLAGS_OUT(); esp += 8425; { RECOMP_REGS_OUT(); return; } /* 0x17001BC0: ret 0x20e5 */
    RECOMP_REGS_OUT();
}

void sub_17001BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001BE0u);

L_17001BE0:
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + 0x297B4FCE)); _flag_b = (uint32_t)(1);
    MEM32(eax + esi * 8 + 0x297B4FCE) = MEM32(eax + esi * 8 + 0x297B4FCE) - 1; /* 0x17001BE0: dec dword ptr [eax + esi*8 + 0x297b4fce] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17001BE7: inc esp */
    _flag_k = FK_INC;
    { uint32_t _tmp = esi; /* 0x17001BE8: xchg esi, eax */
      esi = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    SET_LO8(eax, LO8(eax) & 0x2Au); /* 0x17001BE9: and al, 0x2a */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)((int32_t)MEM32(edx) * (int32_t)0xFE013293u); /* 0x17001BEB: imul ecx, dword ptr [edx], 0xfe013293 */
    RECOMP_ITAIL(0x17001BF1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001BF0u);

L_17001BF0:
    _flag_a = (uint32_t)(MEM8(eax + esi * 8 + 0x297B4FCE)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + esi * 8 + 0x297B4FCE) = (uint8_t)(MEM8(eax + esi * 8 + 0x297B4FCE) - 1); /* 0x17001BF0: dec byte ptr [eax + esi*8 + 0x297b4fce] */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17001BF7: inc esp */
    _flag_k = FK_INC;
    { uint32_t _tmp = esi; /* 0x17001BF8: xchg esi, eax */
      esi = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    SET_LO8(eax, LO8(eax) & 0x2Au); /* 0x17001BF9: and al, 0x2a */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = (uint32_t)((int32_t)MEM32(edx) * (int32_t)0xFD013293u); /* 0x17001BFB: imul ecx, dword ptr [edx], 0xfd013293 */
    RECOMP_ITAIL(0x17001C01u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001C00u);

L_17001C00:
    _df = -1; /* 0x17001C00: std  */
    RECOMP_ITAIL(0x17001C01u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001C10u);

L_17001C10:
    _df = 1; /* 0x17001C10: cld  */
    RECOMP_ITAIL(0x17001C11u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001C20u);

L_17001C20:
    void_lift_trap(0x17001C20u, "sti ");
    RECOMP_ITAIL(0x17001C21u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001C30u);

L_17001C30:
    void_lift_trap(0x17001C30u, "cli ");
    RECOMP_ITAIL(0x17001C31u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001C40u);

L_17001C40:
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17001C40: stc  */
    RECOMP_ITAIL(0x17001C41u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17001DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001DB8u);

L_17001DB8:
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((LO8(ecx)) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x17001DB8: rol byte ptr [edx], cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x17001DBA: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x17001DBC: push es */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + edx); /* 0x17001DBD: add eax, dword ptr [edi + edx] */
    _flag_k = FK_ADD;
    { uint32_t _aa = HI8(edx), _ab = MEM8(ecx + 0x3AE1721), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17001DC0: adc dh, byte ptr [ecx + 0x3ae1721] */
      SET_HI8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x17001DC6: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17001DC8: dec edx */
    _flag_k = FK_DEC;
    { uint32_t _fl = POP32_VAL(esp); /* 0x17001DC9: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DCA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17001DCC: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _fl = POP32_VAL(esp); /* 0x17001DCD: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DCE: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    ebx = 0x421703A4u; /* 0x17001DD0: mov ebx, 0x421703a4 */
    eax = MEM32(0xA78E1717); /* 0x17001DD5: mov eax, dword ptr [0xa78e1717] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DDA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 939; { RECOMP_REGS_OUT(); return; } /* 0x17001DDC: ret 0x3a7 */
    RECOMP_REGS_OUT();
}

void sub_17001DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001DC8u);

L_17001DC8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17001DC8: dec edx */
    _flag_k = FK_DEC;
    { uint32_t _fl = POP32_VAL(esp); /* 0x17001DC9: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DCA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17001DCC: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _fl = POP32_VAL(esp); /* 0x17001DCD: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DCE: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    ebx = 0x421703A4u; /* 0x17001DD0: mov ebx, 0x421703a4 */
    eax = MEM32(0xA78E1717); /* 0x17001DD5: mov eax, dword ptr [0xa78e1717] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17001DDA: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 939; { RECOMP_REGS_OUT(); return; } /* 0x17001DDC: ret 0x3a7 */
    RECOMP_REGS_OUT();
}

void sub_17001E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17001E08u);

L_17001E08:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x17001E08: dec ebp */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 5895; { RECOMP_REGS_OUT(); return; } /* 0x17001E09: ret 0x1703 */
    RECOMP_REGS_OUT();
}

void sub_17007570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007570u);

L_17007570:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC8C017)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC8C017)); /* 0x17007570: add ah, byte ptr [esp + ecx + 0xcc8c017] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007577: pop ss */
    esi = MEM32(edx + 0xC); _seg_es = MEM16(edx + 0xC + 4); /* 0x17007578: les esi, ptr [edx + 0xc] */
    _seg_ss = POP32_VAL(esp); /* 0x1700757B: pop ss */
    ebp = POP32_VAL(esp); /* 0x1700757C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700757D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700757E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC1FB17)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC1FB17)); /* 0x17007580: add ah, byte ptr [esp + ecx + 0xcc1fb17] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007587: pop ss */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xC75u; /* 0x17007588: enter 0xc75, 0x17 */
    ebp = POP32_VAL(esp); /* 0x1700758C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700758D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700758E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC2E217)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC2E217)); /* 0x17007590: add ah, byte ptr [esp + ecx + 0xcc2e217] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007597: pop ss */
    /* cmp MEM8(ecx + 0xC), 0x17u */ /* 0x17007598: cmp byte ptr [ecx + 0xc], 0x17 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebp = POP32_VAL(esp); /* 0x1700759C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700759D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700759E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC39917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC39917)); /* 0x170075A0: add ah, byte ptr [esp + ecx + 0xcc39917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075A7: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170075B7; /* 0x170075A8: jge 0x170075b7 */
L_170075AB:
    _seg_ss = POP32_VAL(esp); /* 0x170075AB: pop ss */
    ebp = POP32_VAL(esp); /* 0x170075AC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075AD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075AE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC44617)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC44617)); /* 0x170075B0: add ah, byte ptr [esp + ecx + 0xcc44617] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_170075B7:
    _seg_ss = POP32_VAL(esp); /* 0x170075B7: pop ss */
    PUSH32(esp, ecx); /* 0x170075B8: push ecx */
    _flag_a = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24; _flag_b = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24;
    MEM8(edi + edx) = (uint8_t)(MEM8(edi + edx) | 0x5Du); /* 0x170075B9: or byte ptr [edi + edx], 0x5d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075BD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075BE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_17007580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007580u);

L_17007580:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC1FB17)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC1FB17)); /* 0x17007580: add ah, byte ptr [esp + ecx + 0xcc1fb17] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007587: pop ss */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xC75u; /* 0x17007588: enter 0xc75, 0x17 */
    ebp = POP32_VAL(esp); /* 0x1700758C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700758D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700758E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC2E217)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC2E217)); /* 0x17007590: add ah, byte ptr [esp + ecx + 0xcc2e217] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007597: pop ss */
    /* cmp MEM8(ecx + 0xC), 0x17u */ /* 0x17007598: cmp byte ptr [ecx + 0xc], 0x17 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebp = POP32_VAL(esp); /* 0x1700759C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700759D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700759E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC39917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC39917)); /* 0x170075A0: add ah, byte ptr [esp + ecx + 0xcc39917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075A7: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170075B7; /* 0x170075A8: jge 0x170075b7 */
L_170075AB:
    _seg_ss = POP32_VAL(esp); /* 0x170075AB: pop ss */
    ebp = POP32_VAL(esp); /* 0x170075AC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075AD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075AE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC44617)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC44617)); /* 0x170075B0: add ah, byte ptr [esp + ecx + 0xcc44617] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_170075B7:
    _seg_ss = POP32_VAL(esp); /* 0x170075B7: pop ss */
    PUSH32(esp, ecx); /* 0x170075B8: push ecx */
    _flag_a = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24; _flag_b = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24;
    MEM8(edi + edx) = (uint8_t)(MEM8(edi + edx) | 0x5Du); /* 0x170075B9: or byte ptr [edi + edx], 0x5d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075BD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075BE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_17007590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007590u);

L_17007590:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC2E217)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC2E217)); /* 0x17007590: add ah, byte ptr [esp + ecx + 0xcc2e217] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007597: pop ss */
    /* cmp MEM8(ecx + 0xC), 0x17u */ /* 0x17007598: cmp byte ptr [ecx + 0xc], 0x17 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebp = POP32_VAL(esp); /* 0x1700759C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700759D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700759E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC39917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC39917)); /* 0x170075A0: add ah, byte ptr [esp + ecx + 0xcc39917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075A7: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170075B7; /* 0x170075A8: jge 0x170075b7 */
L_170075AB:
    _seg_ss = POP32_VAL(esp); /* 0x170075AB: pop ss */
    ebp = POP32_VAL(esp); /* 0x170075AC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075AD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075AE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC44617)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC44617)); /* 0x170075B0: add ah, byte ptr [esp + ecx + 0xcc44617] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_170075B7:
    _seg_ss = POP32_VAL(esp); /* 0x170075B7: pop ss */
    PUSH32(esp, ecx); /* 0x170075B8: push ecx */
    _flag_a = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24; _flag_b = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24;
    MEM8(edi + edx) = (uint8_t)(MEM8(edi + edx) | 0x5Du); /* 0x170075B9: or byte ptr [edi + edx], 0x5d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075BD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075BE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_170075A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075A0u);

L_170075A0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC39917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC39917)); /* 0x170075A0: add ah, byte ptr [esp + ecx + 0xcc39917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075A7: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170075B7; /* 0x170075A8: jge 0x170075b7 */
L_170075AB:
    _seg_ss = POP32_VAL(esp); /* 0x170075AB: pop ss */
    ebp = POP32_VAL(esp); /* 0x170075AC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075AD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075AE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC44617)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC44617)); /* 0x170075B0: add ah, byte ptr [esp + ecx + 0xcc44617] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_170075B7:
    _seg_ss = POP32_VAL(esp); /* 0x170075B7: pop ss */
    PUSH32(esp, ecx); /* 0x170075B8: push ecx */
    _flag_a = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24; _flag_b = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24;
    MEM8(edi + edx) = (uint8_t)(MEM8(edi + edx) | 0x5Du); /* 0x170075B9: or byte ptr [edi + edx], 0x5d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075BD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075BE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_170075B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075B0u);

L_170075B0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC44617)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC44617)); /* 0x170075B0: add ah, byte ptr [esp + ecx + 0xcc44617] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075B7: pop ss */
    PUSH32(esp, ecx); /* 0x170075B8: push ecx */
    _flag_a = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24; _flag_b = (uint32_t)((MEM8(edi + edx) | 0x5Du)) << 24;
    MEM8(edi + edx) = (uint8_t)(MEM8(edi + edx) | 0x5Du); /* 0x170075B9: or byte ptr [edi + edx], 0x5d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075BD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075BE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_170075C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075C0u);

L_170075C0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC4E917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC4E917)); /* 0x170075C0: add ah, byte ptr [esp + ecx + 0xcc4e917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075C7: pop ss */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x170075C8: retf  */
    RECOMP_REGS_OUT();
}

void sub_170075D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075D0u);

L_170075D0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC5D017)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC5D017)); /* 0x170075D0: add ah, byte ptr [esp + ecx + 0xcc5d017] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075D7: pop ss */
    /* test MEM32(esi + 0x4E5D170C), eax */ /* 0x170075D8: test dword ptr [esi + 0x4e5d170c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4E5D170C)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075DE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC96C17)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC96C17)); /* 0x170075E0: add ah, byte ptr [esp + ecx + 0xcc96c17] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075E7: pop ss */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170075E8: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edi + edx)); /* 0x170075E9: mov cl, byte ptr [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x170075EC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075ED: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075EE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA0117)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA0117)); /* 0x170075F0: add ah, byte ptr [esp + ecx + 0xcca0117] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075F7: pop ss */
    (void)(MEM16(esp + ecx + 0xC4E5D17)) /* seg reg write */; /* 0x170075F8: mov cs, word ptr [esp + ecx + 0xc4e5d17] */
    _seg_ss = POP32_VAL(esp); /* 0x170075FF: pop ss */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA7517)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA7517)); /* 0x17007600: add ah, byte ptr [esp + ecx + 0xcca7517] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007607: pop ss */
    edx = POP32_VAL(esp); /* 0x17007608: pop edx */
    ecx = edi + edx; /* 0x17007609: lea ecx, [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x1700760C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700760D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700760E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCAF417)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCAF417)); /* 0x17007610: add ah, byte ptr [esp + ecx + 0xccaf417] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007617: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17007618: dec eax */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x17007619u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170075E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075E0u);

L_170075E0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCC96C17)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCC96C17)); /* 0x170075E0: add ah, byte ptr [esp + ecx + 0xcc96c17] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075E7: pop ss */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170075E8: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edi + edx)); /* 0x170075E9: mov cl, byte ptr [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x170075EC: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170075ED: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x170075EE: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA0117)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA0117)); /* 0x170075F0: add ah, byte ptr [esp + ecx + 0xcca0117] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075F7: pop ss */
    (void)(MEM16(esp + ecx + 0xC4E5D17)) /* seg reg write */; /* 0x170075F8: mov cs, word ptr [esp + ecx + 0xc4e5d17] */
    _seg_ss = POP32_VAL(esp); /* 0x170075FF: pop ss */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA7517)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA7517)); /* 0x17007600: add ah, byte ptr [esp + ecx + 0xcca7517] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007607: pop ss */
    edx = POP32_VAL(esp); /* 0x17007608: pop edx */
    ecx = edi + edx; /* 0x17007609: lea ecx, [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x1700760C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700760D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700760E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCAF417)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCAF417)); /* 0x17007610: add ah, byte ptr [esp + ecx + 0xccaf417] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007617: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17007618: dec eax */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x17007619u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170075F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170075F0u);

L_170075F0:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA0117)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA0117)); /* 0x170075F0: add ah, byte ptr [esp + ecx + 0xcca0117] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170075F7: pop ss */
    (void)(MEM16(esp + ecx + 0xC4E5D17)) /* seg reg write */; /* 0x170075F8: mov cs, word ptr [esp + ecx + 0xc4e5d17] */
    _seg_ss = POP32_VAL(esp); /* 0x170075FF: pop ss */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA7517)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA7517)); /* 0x17007600: add ah, byte ptr [esp + ecx + 0xcca7517] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007607: pop ss */
    edx = POP32_VAL(esp); /* 0x17007608: pop edx */
    ecx = edi + edx; /* 0x17007609: lea ecx, [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x1700760C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700760D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700760E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCAF417)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCAF417)); /* 0x17007610: add ah, byte ptr [esp + ecx + 0xccaf417] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007617: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17007618: dec eax */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x17007619u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17007600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007600u);

L_17007600:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCA7517)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCA7517)); /* 0x17007600: add ah, byte ptr [esp + ecx + 0xcca7517] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007607: pop ss */
    edx = POP32_VAL(esp); /* 0x17007608: pop edx */
    ecx = edi + edx; /* 0x17007609: lea ecx, [edi + edx] */
    ebp = POP32_VAL(esp); /* 0x1700760C: pop ebp */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1700760D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0x17u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x17u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x17u); /* 0x1700760E: or al, 0x17 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCAF417)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCAF417)); /* 0x17007610: add ah, byte ptr [esp + ecx + 0xccaf417] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007617: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17007618: dec eax */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x17007619u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17007610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007610u);

L_17007610:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCCAF417)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCCAF417)); /* 0x17007610: add ah, byte ptr [esp + ecx + 0xccaf417] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007617: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17007618: dec eax */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x17007619u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17007700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007700u);

L_17007700:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esp + ecx + 0xCD57217)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + MEM8(esp + ecx + 0xCD57217)); /* 0x17007700: add ah, byte ptr [esp + ecx + 0xcd57217] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17007707: pop ss */
    RECOMP_FLAGS_OUT(); esp += 3258; { RECOMP_REGS_OUT(); return; } /* 0x17007708: ret 0xcb6 */
    RECOMP_REGS_OUT();
}

void sub_17007888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007888u);

L_17007888:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17007888: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17007889: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edx); /* 0x1700788A: push edx */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x1700788B: dec ebp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1700788C: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, esp); /* 0x1700788D: push esp */
    /* cmp eax, 0x523F2300u */ /* 0x1700788E: cmp eax, 0x523f2300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x523F2300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17007893: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17007894: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17007895: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17007896: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17007897: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17007898: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x17007899: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700789A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1700789Cu, "int 0xcc");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1700789E: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700789F: add byte ptr ds:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edx + (-0x7F))); _flag_b = (uint32_t)(1);
    MEM32(edx + (-0x7F)) = MEM32(edx + (-0x7F)) + 1; /* 0x170078A2: inc dword ptr [edx - 0x7f] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + 0x3Cu); /* 0x170078A5: add byte ptr [eax], 0x3c */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078A8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebx), 0 */ /* 0x170078AA: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x253E1249)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x253E1249) = (uint8_t)(MEM8(0x253E1249) + HI8(eax)); /* 0x170078AF: add byte ptr [0x253e1249], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170078B5: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x170078B6: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    SET_HI8(ebx, 0x6Du); /* 0x170078B7: mov bh, 0x6d */
    fp_st80((uint8_t*)ADDR(esi), fp_pop()); /* 0x170078BA: fstp xword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6E3F1249u);
    eax = eax & 0x6E3F1249u; /* 0x170078BC: and eax, 0x6e3f1249 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x170078C1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17007890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007890u);

L_17007890:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edi));
    edi = edi & MEM32(edi); /* 0x17007890: and edi, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x17007892: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17007893: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x17007894: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17007895: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17007896: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17007897: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17007898: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x17007899: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700789A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1700789Cu, "int 0xcc");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1700789E: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700789F: add byte ptr ds:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(edx + (-0x7F))); _flag_b = (uint32_t)(1);
    MEM32(edx + (-0x7F)) = MEM32(edx + (-0x7F)) + 1; /* 0x170078A2: inc dword ptr [edx - 0x7f] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + 0x3Cu); /* 0x170078A5: add byte ptr [eax], 0x3c */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078A8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebx), 0 */ /* 0x170078AA: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x253E1249)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x253E1249) = (uint8_t)(MEM8(0x253E1249) + HI8(eax)); /* 0x170078AF: add byte ptr [0x253e1249], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170078B5: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x170078B6: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    SET_HI8(ebx, 0x6Du); /* 0x170078B7: mov bh, 0x6d */
    fp_st80((uint8_t*)ADDR(esi), fp_pop()); /* 0x170078BA: fstp xword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6E3F1249u);
    eax = eax & 0x6E3F1249u; /* 0x170078BC: and eax, 0x6e3f1249 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x170078C1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170078AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170078ACu);

L_170078AC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x253E1249u);
    eax = eax & 0x253E1249u; /* 0x170078B0: and eax, 0x253e1249 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170078B5: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x170078B6: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    SET_HI8(ebx, 0x6Du); /* 0x170078B7: mov bh, 0x6d */
    fp_st80((uint8_t*)ADDR(esi), fp_pop()); /* 0x170078BA: fstp xword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6E3F1249u);
    eax = eax & 0x6E3F1249u; /* 0x170078BC: and eax, 0x6e3f1249 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x170078C1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170078EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170078ECu);

L_170078EC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170078EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x170078F0u, "int 0xcc");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x170078F2: dec esp */
    _flag_k = FK_DEC;
    void_lift_trap(0x170078F3u, "int 0xcc");
    void_lift_trap(0x170078F6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17007904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007904u);

L_17007904:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007904: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(edi), 0xCDu */ /* 0x17007906: cmp byte ptr [edi], 0xcd */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0xCDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    void_lift_trap(0x17007909u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17007958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007958u);

L_17007958:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007958: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700795A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700795C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700795E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17007960: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007962: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17007964: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007966: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007968: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700796A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700796C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700796E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17007970: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007972: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007974: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_170079B6; } /* 0x17007976: loopne 0x170079b6 */
L_17007978:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007978: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700797C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17007980: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007982: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17007984: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007986: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x06000000u; /* 0x17007988: add eax, 0x6000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700798D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x1700798F: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007991: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17007993: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007995: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007997: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007999: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x1700799B: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700799D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x1700799F: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170079A3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x01000000u; /* 0x170079A8: add eax, 0x1000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x170079AF: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170079B3; /* 0x170079B1: jge 0x170079b3 */
L_170079B3:
    _seg_ss = POP32_VAL(esp); /* 0x170079B3: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; } /* falls through */
    L_170079B6: RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_17007968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007968u);

L_17007968:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007968: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700796A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700796C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700796E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17007970: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007972: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007974: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_170079B6; } /* 0x17007976: loopne 0x170079b6 */
L_17007978:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007978: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700797C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17007980: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007982: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17007984: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007986: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x06000000u; /* 0x17007988: add eax, 0x6000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700798D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x1700798F: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007991: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17007993: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007995: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007997: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007999: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x1700799B: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700799D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x1700799F: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170079A3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x01000000u; /* 0x170079A8: add eax, 0x1000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x170079AF: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170079B3; /* 0x170079B1: jge 0x170079b3 */
L_170079B3:
    _seg_ss = POP32_VAL(esp); /* 0x170079B3: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; } /* falls through */
    L_170079B6: RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_17007978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007978u);

L_17007978:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007978: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700797C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700797E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x17007980: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007982: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17007984: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007986: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x06000000u; /* 0x17007988: add eax, 0x6000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700798D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x1700798F: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007991: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x17007993: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007995: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007997: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007999: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x1700799B: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700799D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x1700799F: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x170079A3: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x01000000u; /* 0x170079A8: add eax, 0x1000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x170079AF: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170079B3; /* 0x170079B1: jge 0x170079b3 */
L_170079B3:
    _seg_ss = POP32_VAL(esp); /* 0x170079B3: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17007998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17007998u);

L_17007998:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17007998: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700799A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1700799C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700799E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x170079A0: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x170079A4: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x01000000u; /* 0x170079A8: add eax, 0x1000000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x170079AF: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_170079B3; /* 0x170079B1: jge 0x170079b3 */
L_170079B3:
    _seg_ss = POP32_VAL(esp); /* 0x170079B3: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170079B4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x170079B6u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1700B530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1700B530u);

L_1700B530:
    /* test LO8(eax), 0x90u */ /* 0x1700B530: test al, 0x90 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1700B532: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x1700B534u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1700B53C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1700B53Cu);

L_1700B53C:
    /* test LO8(eax), 0x90u */ /* 0x1700B53C: test al, 0x90 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x90u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1700B53E: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x1700B540u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1700EF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1700EF40u);

L_1700EF40:
    { uint32_t _aa = MEM8(esi + (-0x54B9E8F2)), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1700EF40: adc byte ptr [esi - 0x54b9e8f2], ch */
      MEM8(esi + (-0x54B9E8F2)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0EBDC917u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0EBDC917u; /* 0x1700EF46: add eax, 0xebdc917 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1700EF4B: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700EF4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1700EF4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + ecx; /* 0x1700EF50: add dword ptr [ecx], ecx */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x1700EF52u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17013F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17013F00u);

L_17013F00:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x17013F00: dec esp */
    _flag_k = FK_DEC;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17013F01: stosb byte ptr es:[edi], al */
    MEM64((-0x69E8F056)) = _xmm[6].u64[1]; /* 0x17013F02: movhps qword ptr [0x96170faa], xmm6 */
    SET_LO8(edx, 0xFu); /* 0x17013F09: mov dl, 0xf */
    _seg_ss = POP32_VAL(esp); /* 0x17013F0B: pop ss */
    ebx = 0xF16C170Fu; /* 0x17013F0C: mov ebx, 0xf16c170f */
    MEM64(esi) = _xmm[7].u64[1]; /* 0x17013F12: movhps qword ptr [esi], xmm7 */
    esp = 0xE4CD170Fu; /* 0x17013F15: mov esp, 0xe4cd170f */
    MEM64(edx + edx * 2 + (-0x18B6E8F0)) = _xmm[1].u64[1]; /* 0x17013F1A: movhps qword ptr [edx + edx*2 - 0x18b6e8f0], xmm1 */
    RECOMP_ITAIL(0x17013F22u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17016BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17016BC0u);

L_17016BC0:
    ecx = POP32_VAL(esp); /* 0x17016BC0: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BC1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + ebp * 4 + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + ebp * 4 + 0x1) = (uint8_t)(MEM8(edx + ebp * 4 + 0x1) + LO8(ebx)); /* 0x17016BC3: add byte ptr [edx + ebp*4 + 1], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17016BC7: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17016BC8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_CALL(sub_17186D3F); /* 0x17016BD0: call 0x17186d3f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x17016BD7: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(ecx) * (int32_t)0x17u); /* 0x17016BD9: imul eax, dword ptr [ecx], 0x17 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17016BDC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17016BE0: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x17016BE4: pushal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_17016BE7; /* 0x17016BE5: jg 0x17016be7 */
L_17016BE7:
    _seg_ss = POP32_VAL(esp); /* 0x17016BE7: pop ss */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17016BE8: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x18186D5Fu); /* 0x17016BF0: call 0x18186d5f */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x17016BF7: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(ecx) * (int32_t)0x17u); /* 0x17016BF9: imul eax, dword ptr [ecx], 0x17 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17016BFC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17016C00: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C14: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C20: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C24: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C28: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C30: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C32: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C34: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C36: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C50: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C52: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C54: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C56: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C64: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C66: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17016C68: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x17016C69: xchg dword ptr [eax], eax */
      MEM32(eax) = eax;
      eax = _tmp; }
    _seg_ss = POP32_VAL(esp); /* 0x17016C6B: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17016C6C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17016C74: clc  */
    PUSH32(esp, 1); /* 0x17016C75: push 1 */
    _seg_ss = POP32_VAL(esp); /* 0x17016C77: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x6Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x6Bu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x6Bu); /* 0x17016C7C: xor al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + edx; /* 0x17016C7E: add dword ptr [edi], edx */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x17016C80u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17016BC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17016BC4u);

L_17016BC4:
    esp = POP32_VAL(esp); /* 0x17016BC4: pop esp */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17016BC5: stosb byte ptr es:[edi], al */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + edx; /* 0x17016BC6: add dword ptr [edi], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17016BC8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BCE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_CALL(sub_17186D3F); /* 0x17016BD0: call 0x17186d3f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ebx)); /* 0x17016BD7: add byte ptr [eax], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(ecx) * (int32_t)0x17u); /* 0x17016BD9: imul eax, dword ptr [ecx], 0x17 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17016BDC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17016BE0: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x17016BE4: pushal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_17016BE7; /* 0x17016BE5: jg 0x17016be7 */
L_17016BE7:
    _seg_ss = POP32_VAL(esp); /* 0x17016BE7: pop ss */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17016BE8: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x18186D5Fu); /* 0x17016BF0: call 0x18186d5f */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x17016BF7: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(ecx) * (int32_t)0x17u); /* 0x17016BF9: imul eax, dword ptr [ecx], 0x17 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x17016BFC: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016BFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x17016C00: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C14: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C20: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C24: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C28: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C30: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C32: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C34: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C36: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C50: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C52: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C54: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C56: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C64: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C66: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17016C68: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x17016C69: xchg dword ptr [eax], eax */
      MEM32(eax) = eax;
      eax = _tmp; }
    _seg_ss = POP32_VAL(esp); /* 0x17016C6B: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x17016C6C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17016C74: clc  */
    PUSH32(esp, 1); /* 0x17016C75: push 1 */
    _seg_ss = POP32_VAL(esp); /* 0x17016C77: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17016C7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x6Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x6Bu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x6Bu); /* 0x17016C7C: xor al, 0x6b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + edx; /* 0x17016C7E: add dword ptr [edi], edx */
    _flag_k = FK_ADD;
    RECOMP_ITAIL(0x17016C80u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701BDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701BDC0u);

L_1701BDC0:
    edi = 0x35171295u; /* 0x1701BDC0: mov edi, 0x35171295 */
    eax = MEM32(0x9E951712); /* 0x1701BDC5: mov eax, dword ptr [0x9e951712] */
    { uint32_t _aa = LO8(edx), _ab = MEM8(edi), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1701BDCA: adc dl, byte ptr [edi] */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x1701BDCCu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701ED18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701ED18u);

L_1701ED18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701ED18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701ED1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701ED1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701ED1Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701EE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701EE18u);

L_1701EE18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EE18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EE1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EE1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701EE1Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701EF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701EF18u);

L_1701EF18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EF18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EF1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701EF1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701EF1Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F018(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F018u);

L_1701F018:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F018: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F01A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F01C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F01Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F118(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F118u);

L_1701F118:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F118: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F11A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F11C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F11Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F218u);

L_1701F218:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F218: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F21A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F21C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F21Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F2F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F2F8u);

L_1701F2F8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F2F8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F2FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F2FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F2FEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F3D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F3D8u);

L_1701F3D8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F3D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F3DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F3DC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F3DEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F4B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F4B8u);

L_1701F4B8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F4B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F4BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F4BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F4BEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F598u);

L_1701F598:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F598: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F59A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F59C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F59Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F6B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F6B8u);

L_1701F6B8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F6B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F6BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F6BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F6BEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F7B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F7B8u);

L_1701F7B8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F7B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F7BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F7BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F7BEu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F8B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F8B8u);

L_1701F8B8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1701F8BE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1701F8C0: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1701F8C4: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8CC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8CE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8DC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x1701F8DE: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1701F8E0: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1701F8E4: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8F4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F8F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebx); /* 0x1701F8F8: push ebx */
    PUSH32(esp, eax); /* 0x1701F8F9: push eax */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1701F8FA: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1701F8FB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1701F8FC: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1701F8FD: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1701F8FE: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi + 0x4F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x4F) = (uint8_t)(MEM8(esi + 0x4F) + LO8(edx)); /* 0x1701F8FF: add byte ptr [esi + 0x4f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1701F902: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x1701F903: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F904: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F908u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F8F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F8F8u);

L_1701F8F8:
    PUSH32(esp, ebx); /* 0x1701F8F8: push ebx */
    PUSH32(esp, eax); /* 0x1701F8F9: push eax */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1701F8FA: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1701F8FB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1701F8FC: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1701F8FD: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1701F8FE: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi + 0x4F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + 0x4F) = (uint8_t)(MEM8(esi + 0x4F) + LO8(edx)); /* 0x1701F8FF: add byte ptr [esi + 0x4f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1701F902: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x1701F903: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F904: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F908u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1701F900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1701F900u);

L_1701F900:
    PUSH32(esp, esi); /* 0x1701F900: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1701F901: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1701F902: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x1701F903: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F904: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1701F906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1701F908u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17021ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17021ED0u);

L_17021ED0:
    RECOMP_FLAGS_OUT(); esp += 5986; { RECOMP_REGS_OUT(); return; } /* 0x17021ED0: ret 0x175e */
    RECOMP_REGS_OUT();
}

void sub_17021F08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17021F08u);

    goto L_17021F08;
L_17021EBB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17021EBB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17021EBD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x17021EBF: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17021EC1u, "int3 ");
L_17021F08:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4617178Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4617178Eu; /* 0x17021F08: add eax, 0x4617178e */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17021F0D: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17894917u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x17894917u; /* 0x17021F0E: add eax, 0x17894917 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x17021F13: pop ss */
    { uint32_t _rv = (HI8(ecx)) & 255u, _rn = ((LO8(ecx)) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_HI8(ecx, _rv); } /* 0x17021F14: rcl ch, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x17021F16: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x17021F18: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17021F1E; /* 0x17021F19: js 0x17021f1e */
L_17021F1B:
    _seg_ss = POP32_VAL(esp); /* 0x17021F1B: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_17021F9B; /* 0x17021F1C: jg 0x17021f9b */
L_17021F1E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17021F1E: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    { uint32_t _tmp = ebp; /* 0x17021F20: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17021F21: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_cs); /* 0x17021F22: push cs */
    _seg_ss = POP32_VAL(esp); /* 0x17021F23: pop ss */
    void_lift_trap(0x17021F24u, "int1 ");
    fp_push((double)(int32_t)MEM32(edx)); /* 0x17021F25: fild dword ptr [edx] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F27: pop ss */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17021F28: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(0x8E531717); /* 0x17021F29: mov eax, dword ptr [0x8e531717] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F2E: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F2F: pop ss */
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_17021EBB; /* 0x17021F30: jge 0x17021ebb */
L_17021F32:
    _seg_ss = POP32_VAL(esp); /* 0x17021F32: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F33: pop ss */
    RECOMP_ITAIL(0x17021F34u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17021F9B:
    _seg_ss = POP32_VAL(esp); /* 0x17021F9B: pop ss */
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17021F9C: stc  */
    MEM8(0xA5411717) = (uint8_t)(LO8(eax)); /* 0x17021F9D: mov byte ptr [0xa5411717], al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FA2: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FA3: pop ss */
    PUSH32(esp, esi); /* 0x17021FA4: push esi */
    eax = MEM32(0xF3831717); /* 0x17021FA5: mov eax, dword ptr [0xf3831717] */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17021FAA: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = 0xC21717ADu; /* 0x17021FAC: mov ecx, 0xc21717ad */
    eax = MEM32(esi); esi += _df * 4; /* 0x17021FB1: lodsd eax, dword ptr [esi] */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB2: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB3: pop ss */
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x17021FB4: les esi, ptr [edi + eax + 0x17] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17021FB8: leave  */
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17021FB9: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _seg_ss = POP32_VAL(esp); /* 0x17021FBA: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBB: pop ss */
    void_lift_trap(0x17021FBCu, "sti ");
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17021FBD: stosb byte ptr es:[edi], al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBE: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBF: pop ss */
    /* test eax, 0x7E171820u */ /* 0x17021FC0: test eax, 0x7e171820 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E171820u);
    _cf = 0;
    _flag_k = FK_TEST;
    /* in: no port I/O under Win32 */ /* 0x17021FC5: in al, 0x17 */
    _seg_ss = POP32_VAL(esp); /* 0x17021FC7: pop ss */
    esi = 0xBB1717C5u; /* 0x17021FC8: mov esi, 0xbb1717c5 */
    RECOMP_ITAIL(0x17021FCDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17021F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17021F60u);

    goto L_17021F60;
L_17021EBB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17021EBB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17021EBD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x17021EBF: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x17021EC1u, "int3 ");
L_17021F03:
    void_lift_trap(0x17021F03u, "fisttp dword ptr cs:[edi]");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17021F06: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17021F07: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4617178Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4617178Eu; /* 0x17021F08: add eax, 0x4617178e */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17021F0D: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17894917u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x17894917u; /* 0x17021F0E: add eax, 0x17894917 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x17021F13: pop ss */
    { uint32_t _rv = (HI8(ecx)) & 255u, _rn = ((LO8(ecx)) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_HI8(ecx, _rv); } /* 0x17021F14: rcl ch, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x17021F16: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = ebx; /* 0x17021F18: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17021F1E; /* 0x17021F19: js 0x17021f1e */
L_17021F1B:
    _seg_ss = POP32_VAL(esp); /* 0x17021F1B: pop ss */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_17021F9B; /* 0x17021F1C: jg 0x17021f9b */
L_17021F1E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17021F1E: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    { uint32_t _tmp = ebp; /* 0x17021F20: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17021F21: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_cs); /* 0x17021F22: push cs */
    _seg_ss = POP32_VAL(esp); /* 0x17021F23: pop ss */
    void_lift_trap(0x17021F24u, "int1 ");
    fp_push((double)(int32_t)MEM32(edx)); /* 0x17021F25: fild dword ptr [edx] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F27: pop ss */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17021F28: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(0x8E531717); /* 0x17021F29: mov eax, dword ptr [0x8e531717] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F2E: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F2F: pop ss */
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_17021EBB; /* 0x17021F30: jge 0x17021ebb */
L_17021F32:
    _seg_ss = POP32_VAL(esp); /* 0x17021F32: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F33: pop ss */
    RECOMP_ITAIL(0x17021F34u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17021F60:
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_17021F03; /* 0x17021F60: jl 0x17021f03 */
L_17021F62:
    _seg_ss = POP32_VAL(esp); /* 0x17021F62: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F63: pop ss */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17021F64: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17021F65: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x179B2817u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x179B2817u; /* 0x17021F66: add eax, 0x179b2817 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x17021F6B: pop ss */
    _flag_a = (uint32_t)((MEM32(edx + 0xE) | 0x03789317u)); _flag_b = (uint32_t)((MEM32(edx + 0xE) | 0x03789317u));
    MEM32(edx + 0xE) = MEM32(edx + 0xE) | 0x03789317u; /* 0x17021F6C: or dword ptr [edx + 0xe], 0x3789317 */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_ss = POP32_VAL(esp); /* 0x17021F73: pop ss */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17021FF3; /* 0x17021F74: jg 0x17021ff3 */
L_17021F76:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi); /* 0x17021F76: add edx, dword ptr [edi] */
    _flag_k = FK_ADD;
    PUSH32(esp, _seg_es); /* 0x17021F78: push es */
    eax = MEM32(0xA11A1717); /* 0x17021F79: mov eax, dword ptr [0xa11a1717] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F7E: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F7F: pop ss */
    eax = MEM32(0xDBF11717); /* 0x17021F80: mov eax, dword ptr cs:[0xdbf11717] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi)); /* 0x17021F86: add dl, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17021F88: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(0xA1CA1717); /* 0x17021F89: mov eax, dword ptr [0xa1ca1717] */
    _seg_ss = POP32_VAL(esp); /* 0x17021F8E: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F8F: pop ss */
    PUSH32(esp, edx); /* 0x17021F90: push edx */
    /* fwait */ /* 0x17021F91: wait  */
    _seg_ss = POP32_VAL(esp); /* 0x17021F92: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F93: pop ss */
    SET_LO8(ecx, 0x9Bu); /* 0x17021F94: mov cl, 0x9b */
    _seg_ss = POP32_VAL(esp); /* 0x17021F96: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021F97: pop ss */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi + edx + 0x17A2F917)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + MEM8(edi + edx + 0x17A2F917)); /* 0x17021F98: add bl, byte ptr [edi + edx + 0x17a2f917] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_17021F9F; /* falls through past a gap */
L_17021F9B:
    _seg_ss = POP32_VAL(esp); /* 0x17021F9B: pop ss */
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x17021F9C: stc  */
    MEM8(0xA5411717) = (uint8_t)(LO8(eax)); /* 0x17021F9D: mov byte ptr [0xa5411717], al */
    goto L_17021FA2; /* falls through past a gap */
L_17021F9F:
    _seg_ss = POP32_VAL(esp); /* 0x17021F9F: pop ss */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17021FA0: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17021FA1: movsd dword ptr es:[edi], dword ptr [esi] */
L_17021FA2:
    _seg_ss = POP32_VAL(esp); /* 0x17021FA2: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FA3: pop ss */
    PUSH32(esp, esi); /* 0x17021FA4: push esi */
    eax = MEM32(0xF3831717); /* 0x17021FA5: mov eax, dword ptr [0xf3831717] */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17021FAA: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = 0xC21717ADu; /* 0x17021FAC: mov ecx, 0xc21717ad */
    eax = MEM32(esi); esi += _df * 4; /* 0x17021FB1: lodsd eax, dword ptr [esi] */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB2: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB3: pop ss */
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x17021FB4: les esi, ptr [edi + eax + 0x17] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17021FB8: leave  */
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17021FB9: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _seg_ss = POP32_VAL(esp); /* 0x17021FBA: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBB: pop ss */
    void_lift_trap(0x17021FBCu, "sti ");
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17021FBD: stosb byte ptr es:[edi], al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBE: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBF: pop ss */
    /* test eax, 0x7E171820u */ /* 0x17021FC0: test eax, 0x7e171820 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E171820u);
    _cf = 0;
    _flag_k = FK_TEST;
    /* in: no port I/O under Win32 */ /* 0x17021FC5: in al, 0x17 */
    _seg_ss = POP32_VAL(esp); /* 0x17021FC7: pop ss */
    esi = 0xBB1717C5u; /* 0x17021FC8: mov esi, 0xbb1717c5 */
    RECOMP_ITAIL(0x17021FCDu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17021FF3:
    _seg_ss = POP32_VAL(esp); /* 0x17021FF3: pop ss */
    PUSH32(esp, 0x2C17181Fu); /* 0x17021FF4: push 0x2c17181f */
    /* out: no port I/O under Win32 */ /* 0x17021FF9: out dx, al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FFA: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FFB: pop ss */
    PUSH32(esp, _seg_ds); /* 0x17021FFC: push ds */
    eax = MEM32(0x9381718); /* 0x17021FFD: mov eax, dword ptr [0x9381718] */
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17022002: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17022004: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _seg_ss = POP32_VAL(esp); /* 0x17022005: pop ss */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17022006: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = POP32_VAL(esp); /* 0x17022008: pop eax */
    SET_LO8(ecx, 0x18u); /* 0x17022009: mov cl, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x1702200B: pop ss */
    esp = POP32_VAL(esp); /* 0x1702200C: pop esp */
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x1702200D: clc  */
    _seg_ss = POP32_VAL(esp); /* 0x1702200E: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x1702200F: pop ss */
    ebx = POP32_VAL(esp); /* 0x17022010: pop ebx */
    /* test LO8(eax), 0x18u */ /* 0x17022011: test al, 0x18 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17022013: pop ss */
    void_lift_trap(0x17022014u, "aam 0xbd");
    _seg_ss = POP32_VAL(esp); /* 0x17022016: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17022017: pop ss */
    void_lift_trap(0x17022018u, "int 1");
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1702201A: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM8(edx + (-0x2AE0E8E9)), HI8(edx) */ /* 0x1702201C: cmp byte ptr [edx - 0x2ae0e8e9], dh */
    _flag_a = (uint32_t)(MEM8(edx + (-0x2AE0E8E9))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x17022022: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17022023: pop ss */
    MEM16(eax) = (uint16_t)(_seg_cs); /* 0x17022024: mov word ptr [eax], cs */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17022026: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17022028: dec eax */
    _flag_k = FK_DEC;
    ebx = 0x08B31712u; /* 0x17022029: mov ebx, 0x8b31712 */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1702202E: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x17022030u, "ficom dword ptr [edi]");
    _seg_ss = POP32_VAL(esp); /* 0x17022033: pop ss */
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x17022034: fstp st(5) */
    _seg_ss = POP32_VAL(esp); /* 0x17022036: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17022037: pop ss */
    /* cmp MEM8(esi + 0x17), LO8(ecx) */ /* 0x17022038: cmp byte ptr [esi + 0x17], cl */
    _flag_a = (uint32_t)(MEM8(esi + 0x17)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_ss = POP32_VAL(esp); /* 0x1702203B: pop ss */
    _flag_a = (uint32_t)(MEM8(edi + edx + 0x17)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    MEM8(edi + edx + 0x17) = (uint8_t)(MEM8(edi + edx + 0x17) & LO8(ebx)); /* 0x1702203C: and byte ptr [edi + edx + 0x17], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x17022040: push esi */
    esp = POP32_VAL(esp); /* 0x17022041: pop esp */
    _seg_ss = POP32_VAL(esp); /* 0x17022042: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17022043: pop ss */
    (void)(MEM16(esi)) /* seg reg write */; /* 0x17022044: mov es, word ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x17182D4E)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x17182D4E) = (uint8_t)(MEM8(edi + 0x17182D4E) + HI8(ebx)); /* 0x17022046: add byte ptr [edi + 0x17182d4e], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1702204C: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1702204D: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x182D9C17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x182D9C17u; /* 0x1702204E: add eax, 0x182d9c17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x17022053: pop ss */
    /* cmp HI8(ecx), MEM8((-0x2A41E8E8)) */ /* 0x17022054: cmp ch, byte ptr [0xd5be1718] */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8((-0x2A41E8E8))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x1702205A: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x23u); /* 0x1702205C: push 0x23 */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1702205E: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26D21718u);
    eax = eax & 0x26D21718u; /* 0x17022060: and eax, 0x26d21718 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17022066: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17022068u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17021FA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17021FA8u);

L_17021FA8:
    _flag_a = (uint32_t)((ebx ^ 0x18u)); _flag_b = (uint32_t)((ebx ^ 0x18u));
    ebx = ebx ^ 0x18u; /* 0x17021FA8: xor ebx, 0x18 */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_ss = POP32_VAL(esp); /* 0x17021FAB: pop ss */
    ecx = 0xC21717ADu; /* 0x17021FAC: mov ecx, 0xc21717ad */
    eax = MEM32(esi); esi += _df * 4; /* 0x17021FB1: lodsd eax, dword ptr [esi] */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB2: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FB3: pop ss */
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x17021FB4: les esi, ptr [edi + eax + 0x17] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17021FB8: leave  */
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17021FB9: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _seg_ss = POP32_VAL(esp); /* 0x17021FBA: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBB: pop ss */
    void_lift_trap(0x17021FBCu, "sti ");
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17021FBD: stosb byte ptr es:[edi], al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBE: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBF: pop ss */
    /* test eax, 0x7E171820u */ /* 0x17021FC0: test eax, 0x7e171820 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E171820u);
    _cf = 0;
    _flag_k = FK_TEST;
    /* in: no port I/O under Win32 */ /* 0x17021FC5: in al, 0x17 */
    _seg_ss = POP32_VAL(esp); /* 0x17021FC7: pop ss */
    esi = 0xBB1717C5u; /* 0x17021FC8: mov esi, 0xbb1717c5 */
    RECOMP_ITAIL(0x17021FCDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17021FB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17021FB8u);

L_17021FB8:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17021FB8: leave  */
    { uint32_t _a, _b; _a = eax; _b = MEM32(edi); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x17021FB9: scasd eax, dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _seg_ss = POP32_VAL(esp); /* 0x17021FBA: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBB: pop ss */
    void_lift_trap(0x17021FBCu, "sti ");
    MEM8(edi) = LO8(eax); edi += _df; /* 0x17021FBD: stosb byte ptr es:[edi], al */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBE: pop ss */
    _seg_ss = POP32_VAL(esp); /* 0x17021FBF: pop ss */
    /* test eax, 0x7E171820u */ /* 0x17021FC0: test eax, 0x7e171820 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E171820u);
    _cf = 0;
    _flag_k = FK_TEST;
    /* in: no port I/O under Win32 */ /* 0x17021FC5: in al, 0x17 */
    _seg_ss = POP32_VAL(esp); /* 0x17021FC7: pop ss */
    esi = 0xBB1717C5u; /* 0x17021FC8: mov esi, 0xbb1717c5 */
    RECOMP_ITAIL(0x17021FCDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17022048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17022048u);

L_17022048:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17022048: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAB461718u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAB461718u; /* 0x17022049: sub eax, 0xab461718 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x182D9C17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x182D9C17u; /* 0x1702204E: add eax, 0x182d9c17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x17022053: pop ss */
    /* cmp HI8(ecx), MEM8((-0x2A41E8E8)) */ /* 0x17022054: cmp ch, byte ptr [0xd5be1718] */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(MEM8((-0x2A41E8E8))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x17u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x17u); /* 0x1702205A: add al, 0x17 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x23u); /* 0x1702205C: push 0x23 */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1702205E: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26D21718u);
    eax = eax & 0x26D21718u; /* 0x17022060: and eax, 0x26d21718 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17022066: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17022068u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170221B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170221B8u);

L_170221B8:
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221B8: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221B9: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221BB: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221BC: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221BC: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221BF: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221C0: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221C1: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221C2: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x170221C4: add edi, edi */
    _flag_k = FK_ADD;
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221C6: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x170221C8: les esi, ptr [edi + eax + 0x17] */
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221CC: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221CD: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221CF: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221D0: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221D0: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221D3: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221D4: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221D5: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221D6: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test MEM8(eax), LO8(eax) */ /* 0x170221D8: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221DA: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x170221DC: les esi, ptr [edi + eax + 0x17] */
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221E0: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221E1: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221E3: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221E4: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221E4: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221E7: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221E8: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221E9: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221EA: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0xC4171902u; /* 0x170221EC: mov edi, 0xc4171902 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170221FA; /* 0x170221F1: je 0x170221fa */
L_170221F3:
    _seg_ss = POP32_VAL(esp); /* 0x170221F3: pop ss */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170221F4: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221F6: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x170221F8: mov al, byte ptr [ecx + ebx] */
    goto L_170221FB; /* falls through past a gap */
L_170221FA:
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221FA: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_170221FC; /* falls through past a gap */
L_170221FB:
    _seg_ss = POP32_VAL(esp); /* 0x170221FB: pop ss */
L_170221FC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17022200: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x17022202u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170221CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170221CCu);

L_170221CC:
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221CC: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221CD: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221CF: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221D0: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221D0: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221D3: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221D4: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221D5: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221D6: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test MEM8(eax), LO8(eax) */ /* 0x170221D8: test byte ptr [eax], al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221DA: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = MEM32(edi + eax + 0x17); _seg_es = MEM16(edi + eax + 0x17 + 4); /* 0x170221DC: les esi, ptr [edi + eax + 0x17] */
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221E0: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221E1: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221E3: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221E4: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221E4: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221E7: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221E8: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221E9: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221EA: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0xC4171902u; /* 0x170221EC: mov edi, 0xc4171902 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170221FA; /* 0x170221F1: je 0x170221fa */
L_170221F3:
    _seg_ss = POP32_VAL(esp); /* 0x170221F3: pop ss */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170221F4: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221F6: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x170221F8: mov al, byte ptr [ecx + ebx] */
    goto L_170221FB; /* falls through past a gap */
L_170221FA:
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221FA: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_170221FC; /* falls through past a gap */
L_170221FB:
    _seg_ss = POP32_VAL(esp); /* 0x170221FB: pop ss */
L_170221FC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17022200: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x17022202u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170221E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170221E0u);

L_170221E0:
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170221E0: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x19u); /* 0x170221E1: add al, 0x19 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ss = POP32_VAL(esp); /* 0x170221E3: pop ss */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x170221E4: sal edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x170221E4: sal edx, 0x18 */
    _seg_ss = POP32_VAL(esp); /* 0x170221E7: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170221E8: dec eax */
    _flag_k = FK_DEC;
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170221E9: clc  */
    { uint32_t _sa = MEM8(edi), _sb = LO8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221EA: sbb byte ptr [edi], dl */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0xC4171902u; /* 0x170221EC: mov edi, 0xc4171902 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170221FA; /* 0x170221F1: je 0x170221fa */
L_170221F3:
    _seg_ss = POP32_VAL(esp); /* 0x170221F3: pop ss */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170221F4: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221F6: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x170221F8: mov al, byte ptr [ecx + ebx] */
    goto L_170221FB; /* falls through past a gap */
L_170221FA:
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221FA: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_170221FC; /* falls through past a gap */
L_170221FB:
    _seg_ss = POP32_VAL(esp); /* 0x170221FB: pop ss */
L_170221FC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17022200: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x17022202u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170221F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170221F4u);

L_170221F4:
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170221F4: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _sa = MEM32(edi), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170221F6: sbb dword ptr [edi], edx */
      MEM32(edi) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x170221F8: mov al, byte ptr [ecx + ebx] */
    _seg_ss = POP32_VAL(esp); /* 0x170221FB: pop ss */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170221FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x17022200: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x17022202u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_170238C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170238C4u);

L_170238C4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170238C4: inc ecx */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 5918; { RECOMP_REGS_OUT(); return; } /* 0x170238C5: ret 0x171a */
    RECOMP_REGS_OUT();
}

void sub_17023944(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023944u);

L_17023944:
    ebx = POP32_VAL(esp); /* 0x17023944: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17023945: pop ebp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023949: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x72)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x72) = (uint8_t)(MEM8(ecx + 0x72) + HI8(eax)); /* 0x1702394B: add byte ptr [ecx + 0x72], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_170239B1; /* 0x1702394E: jb 0x170239b1 */
L_17023950:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_17023972; /* 0x17023950: jns 0x17023972 */
L_17023952:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x73252073u);
    eax = eax & 0x73252073u; /* 0x17023952: and eax, 0x73252073 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x73252073)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x73252073) = (uint8_t)(MEM8(0x73252073) + HI8(eax)); /* 0x17023957: add byte ptr [0x73252073], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702395D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + (-0x3E))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + (-0x3E)) = (uint8_t)(MEM8(ecx + (-0x3E)) + LO8(eax)); /* 0x1702395F: add byte ptr [ecx - 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023962: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023964: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17023965: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1AC29A17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1AC29A17u; /* 0x17023966: add eax, 0x1ac29a17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1702396B: pop ss */
    esi = 0x95171AC2u; /* 0x1702396C: mov esi, 0x95171ac2 */
    void_lift_trap(0x17023971u, "aam 0x1a");
    goto L_17023973; /* falls through past a gap */
L_17023972:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023972: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023974u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17023973:
    _seg_ss = POP32_VAL(esp); /* 0x17023973: pop ss */
    RECOMP_ITAIL(0x17023974u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_170239B1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_170239CD; /* 0x170239B1: jnp 0x170239cd */
L_170239B3:
    _seg_ss = POP32_VAL(esp); /* 0x170239B3: pop ss */
    void_lift_trap(0x170239B4u, "ljmp 0x1aab:0x6d171aab");
    _seg_ss = POP32_VAL(esp); /* 0x170239BB: pop ss */
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170239BC: clc  */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x170239BD: stosb byte ptr es:[edi], al */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239BE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x170239C0u, "mov gs, word ptr [esi - 0x5571e8e6]");
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239C6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170239C8: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x170239C9: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1A52AE17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1A52AE17u; /* 0x170239CA: add eax, 0x1a52ae17 */
    _flag_k = FK_ADD;
    goto L_170239CF; /* falls through past a gap */
L_170239CD:
    PUSH32(esp, edx); /* 0x170239CD: push edx */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239CE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_170239D0; /* falls through past a gap */
L_170239CF:
    _seg_ss = POP32_VAL(esp); /* 0x170239CF: pop ss */
L_170239D0:
    esi = 0x18171AC2u; /* 0x170239D0: mov esi, 0x18171ac2 */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D5: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239D6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D8: lodsd eax, dword ptr ds:[esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170239DC: clc  */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239DD: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239E0: inc ebx */
    _flag_k = FK_INC;
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170239E1: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239E2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17))); _flag_b = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17)));
    edi = edi ^ MEM32(edx + ebx + 0x17); /* 0x170239E4: xor edi, dword ptr [edx + ebx + 0x17] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170239E8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170239E9: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170239EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170239EB: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x170239EC: push edx */
    ecx = POP32_VAL(esp); /* 0x170239ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x170239EE: pop edi */
    PUSH32(esp, edx); /* 0x170239EF: push edx */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F0: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x170239F1: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170239F2: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebp); /* 0x170239F3: push ebp */
    PUSH32(esp, edx); /* 0x170239F4: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239F5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F6: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170239F7: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x170239F9: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_1702394C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1702394Cu);

L_1702394C:
    POPAD(); /* 0x1702394C: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_170239C1; /* 0x1702394D: jb 0x170239c1 */
L_1702394F:
    POPAD(); /* 0x1702394F: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_17023972; /* 0x17023950: jns 0x17023972 */
L_17023952:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x73252073u);
    eax = eax & 0x73252073u; /* 0x17023952: and eax, 0x73252073 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(0x73252073)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x73252073) = (uint8_t)(MEM8(0x73252073) + HI8(eax)); /* 0x17023957: add byte ptr [0x73252073], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702395D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + (-0x3E))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + (-0x3E)) = (uint8_t)(MEM8(ecx + (-0x3E)) + LO8(eax)); /* 0x1702395F: add byte ptr [ecx - 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023962: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023964: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17023965: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1AC29A17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1AC29A17u; /* 0x17023966: add eax, 0x1ac29a17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1702396B: pop ss */
    esi = 0x95171AC2u; /* 0x1702396C: mov esi, 0x95171ac2 */
    void_lift_trap(0x17023971u, "aam 0x1a");
    goto L_17023973; /* falls through past a gap */
L_17023972:
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023972: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x17023974u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_17023973:
    _seg_ss = POP32_VAL(esp); /* 0x17023973: pop ss */
    RECOMP_ITAIL(0x17023974u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_170239C1:
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170239C1: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239C2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x170239C4u, "mov gs, word ptr [edx - 0x54b9e8e6]");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1A52AE17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1A52AE17u; /* 0x170239CA: add eax, 0x1a52ae17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x170239CF: pop ss */
    esi = 0x18171AC2u; /* 0x170239D0: mov esi, 0x18171ac2 */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D5: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239D6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D8: lodsd eax, dword ptr ds:[esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170239DC: clc  */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239DD: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239E0: inc ebx */
    _flag_k = FK_INC;
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170239E1: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239E2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17))); _flag_b = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17)));
    edi = edi ^ MEM32(edx + ebx + 0x17); /* 0x170239E4: xor edi, dword ptr [edx + ebx + 0x17] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170239E8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170239E9: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170239EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170239EB: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x170239EC: push edx */
    ecx = POP32_VAL(esp); /* 0x170239ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x170239EE: pop edi */
    PUSH32(esp, edx); /* 0x170239EF: push edx */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F0: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x170239F1: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170239F2: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebp); /* 0x170239F3: push ebp */
    PUSH32(esp, edx); /* 0x170239F4: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239F5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F6: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170239F7: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x170239F9: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_17023958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023958u);

L_17023958:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x73252073u);
    eax = eax & 0x73252073u; /* 0x17023958: and eax, 0x73252073 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1702395D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + (-0x3E))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + (-0x3E)) = (uint8_t)(MEM8(ecx + (-0x3E)) + LO8(eax)); /* 0x1702395F: add byte ptr [ecx - 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023962: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17023964: inc esi */
    _flag_k = FK_INC;
    MEM32(edi) = eax; edi += _df * 4; /* 0x17023965: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1AC29A17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1AC29A17u; /* 0x17023966: add eax, 0x1ac29a17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x1702396B: pop ss */
    esi = 0x95171AC2u; /* 0x1702396C: mov esi, 0x95171ac2 */
    void_lift_trap(0x17023971u, "aam 0x1a");
    _seg_ss = POP32_VAL(esp); /* 0x17023973: pop ss */
    RECOMP_ITAIL(0x17023974u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17023960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023960u);

L_17023960:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023960: inc ecx */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 5918; { RECOMP_REGS_OUT(); return; } /* 0x17023961: ret 0x171a */
    RECOMP_REGS_OUT();
}

void sub_170239C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239C4u);

L_170239C4:
    void_lift_trap(0x170239C4u, "mov gs, word ptr [edx - 0x54b9e8e6]");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1A52AE17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1A52AE17u; /* 0x170239CA: add eax, 0x1a52ae17 */
    _flag_k = FK_ADD;
    _seg_ss = POP32_VAL(esp); /* 0x170239CF: pop ss */
    esi = 0x18171AC2u; /* 0x170239D0: mov esi, 0x18171ac2 */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D5: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239D6: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(esi); esi += _df * 4; /* 0x170239D8: lodsd eax, dword ptr ds:[esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DA: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x170239DC: clc  */
    eax = MEM32(esi); esi += _df * 4; /* 0x170239DD: lodsd eax, dword ptr [esi] */
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239DE: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239E0: inc ebx */
    _flag_k = FK_INC;
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x170239E1: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170239E2: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17))); _flag_b = (uint32_t)((edi ^ MEM32(edx + ebx + 0x17)));
    edi = edi ^ MEM32(edx + ebx + 0x17); /* 0x170239E4: xor edi, dword ptr [edx + ebx + 0x17] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170239E8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170239E9: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170239EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170239EB: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x170239EC: push edx */
    ecx = POP32_VAL(esp); /* 0x170239ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x170239EE: pop edi */
    PUSH32(esp, edx); /* 0x170239EF: push edx */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F0: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x170239F1: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170239F2: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebp); /* 0x170239F3: push ebp */
    PUSH32(esp, edx); /* 0x170239F4: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239F5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F6: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170239F7: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x170239F9: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_170239E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239E8u);

L_170239E8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170239E8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170239E9: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170239EA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170239EB: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x170239EC: push edx */
    ecx = POP32_VAL(esp); /* 0x170239ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x170239EE: pop edi */
    PUSH32(esp, edx); /* 0x170239EF: push edx */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F0: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x170239F1: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170239F2: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebp); /* 0x170239F3: push ebp */
    PUSH32(esp, edx); /* 0x170239F4: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170239F5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x170239F6: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x170239F7: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x170239F9: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_170239F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239F9u);

L_170239F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x170239F9: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_170239FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239FAu);

L_170239FA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(ecx)); /* 0x170239FA: add al, byte ptr [ecx] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17023A00: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17023A01: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_170239FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239FBu);

L_170239FB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x170239FB: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x49)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x49) = (uint8_t)(MEM8(edx + 0x49) + LO8(eax)); /* 0x170239FF: add byte ptr [edx + 0x49], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_170239FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170239FCu);

L_170239FC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x170239FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17023A00: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17023A01: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_17023A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A00u);

L_17023A00:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17023A00: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17023A01: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17023A02: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17023A03: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x17023A04: push edx */
    ecx = POP32_VAL(esp); /* 0x17023A05: pop ecx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x17023A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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

void sub_17023A08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17023A08u);

L_17023A08:
    PUSH32(esp, esp); /* 0x17023A08: push esp */
    { uint32_t _fl = POP32_VAL(esp); /* 0x17023A09: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    { uint32_t _sa = LO8(edx), _sb = MEM8(edi), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17023A0A: sbb dl, byte ptr [edi] */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
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
