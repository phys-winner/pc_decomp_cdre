#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_11006804(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006804u);

L_11006804:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006804: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006806: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006808: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100680A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100680C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100680E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x11006810: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11006811: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006812: push es */
    { uint32_t _aa = MEM32(eax + 0x6D), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006813: adc dword ptr [eax + 0x6d], ecx */
      MEM32(eax + 0x6D) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006816: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006818: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006820: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006822: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11006824: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006827: adc dword ptr [eax], esi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1100682B; /* 0x11006829: jne 0x1100682b */
L_1100682B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100682B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100682D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x1100682F: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006833: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ebx)); /* 0x11006837: add al, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x11006839: push ebp */
    PUSH32(esp, _seg_es); /* 0x1100683A: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100683B: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100683E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006840: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006842: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006844: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006846: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006848: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100684A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_110068B3; } /* 0x1100684C: loopne 0x110068b3 */
L_1100684E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100684E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006850: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006854: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006856: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006858: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100685A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x20110651u); /* 0x1100685C: push 0x20110651 */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006863; /* 0x11006861: jne 0x11006863 */
L_11006863:
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006863: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11006865: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006866: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006867: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006869: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100686F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006871u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_110068B3:
    _flag_a = (uint32_t)(MEM8(edx + esi * 2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + esi * 2) = (uint8_t)(MEM8(edx + esi * 2) + LO8(ebx)); /* 0x110068B3: add byte ptr [edx + esi*2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110068B6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi + 0x6), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068B8: adc byte ptr [edi + 6], cl */
      MEM8(edi + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068BB: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110068C3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110068C5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006818u);

L_11006818:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006818: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100681E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006820: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006822: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11006824: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006827: adc dword ptr [eax], esi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1100682B; /* 0x11006829: jne 0x1100682b */
L_1100682B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100682B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100682D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x1100682F: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006833: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ebx)); /* 0x11006837: add al, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x11006839: push ebp */
    PUSH32(esp, _seg_es); /* 0x1100683A: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100683B: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100683E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006840: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006842: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006844: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006846: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006848: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100684A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_110068B3; } /* 0x1100684C: loopne 0x110068b3 */
L_1100684E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100684E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006850: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006854: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006856: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006858: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100685A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x20110651u); /* 0x1100685C: push 0x20110651 */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006863; /* 0x11006861: jne 0x11006863 */
L_11006863:
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006863: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11006865: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006866: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006867: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006869: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100686F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006871u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_110068B3:
    _flag_a = (uint32_t)(MEM8(edx + esi * 2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + esi * 2) = (uint8_t)(MEM8(edx + esi * 2) + LO8(ebx)); /* 0x110068B3: add byte ptr [edx + esi*2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110068B6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi + 0x6), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068B8: adc byte ptr [edi + 6], cl */
      MEM8(edi + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068BB: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110068C3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110068C5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1100682C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100682Cu);

L_1100682C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100682C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100682E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_11006832; } /* 0x11006830: loopne 0x11006832 */
L_11006832:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006832: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006834: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006836: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x11006838: clc  */
    PUSH32(esp, ebp); /* 0x11006839: push ebp */
    PUSH32(esp, _seg_es); /* 0x1100683A: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100683B: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100683E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006840: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006842: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006844: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006846: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006848: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100684A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_110068B3; } /* 0x1100684C: loopne 0x110068b3 */
L_1100684E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100684E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006850: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006854: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006856: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006858: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100685A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x20110651u); /* 0x1100685C: push 0x20110651 */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006863; /* 0x11006861: jne 0x11006863 */
L_11006863:
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006863: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11006865: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006866: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006867: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006869: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100686F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006871u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_110068B3:
    _flag_a = (uint32_t)(MEM8(edx + esi * 2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + esi * 2) = (uint8_t)(MEM8(edx + esi * 2) + LO8(ebx)); /* 0x110068B3: add byte ptr [edx + esi*2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110068B6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi + 0x6), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068B8: adc byte ptr [edi + 6], cl */
      MEM8(edi + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068BB: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110068C3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110068C5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006850u);

L_11006850:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006850: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006852: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006854: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006856: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006858: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100685A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x20110651u); /* 0x1100685C: push 0x20110651 */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006863; /* 0x11006861: jne 0x11006863 */
L_11006863:
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006863: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11006865: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006866: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006867: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006869: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100686D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100686F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006871u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110068F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110068F0u);

L_110068F0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068F4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068F8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110068FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x110068FC: pushal  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110068FD: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x110068FE: push es */
    { uint32_t _aa = MEM32(eax + ebp * 2 + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110068FF: adc dword ptr [eax + ebp*2 + 0x1100], ecx */
      MEM32(eax + ebp * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006906: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006908: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100690A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1100690C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100690E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1100697F; /* 0x11006910: je 0x1100697f */
L_11006912:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006912: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(eax, 0x63u); /* 0x11006914: mov ah, 0x63 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006916: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006918: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100691A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100691C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100691E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006920: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006922: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006924: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006926: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (17u) _cf = 0u; /* 0x11006928: shr byte ptr [edi], 0x11 */
    if (17u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edi) >> 17u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi) = (uint8_t)(MEM8(edi) >> 17u); /* 0x11006928: shr byte ptr [edi], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100692C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100692E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006930: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006932: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006934: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006936: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(edx + 0x6)) & 255u, _rn = ((0x11u) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx + 0x6) = (uint8_t)(_rv); } /* 0x11006938: rcl byte ptr [edx + 6], 0x11 */
    SET_LO8(eax, 0x6Fu); /* 0x1100693C: mov al, 0x6f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100693E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x6Du)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x6Du)) << 24;
    SET_LO8(eax, LO8(eax) | 0x6Du); /* 0x11006940: or al, 0x6d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006942: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x11006944: push eax */
    PUSH32(esp, 0); /* 0x11006945: push 0 */
    { uint32_t _aa = MEM32(ecx + ebp * 2 + 0x6F181100), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006947: adc dword ptr [ecx + ebp*2 + 0x6f181100], edx */
      MEM32(ecx + ebp * 2 + 0x6F181100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100694E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006950: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006952: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006954: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006956: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006958: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x11006960: clc  */
    PUSH32(esp, ebp); /* 0x11006961: push ebp */
    PUSH32(esp, _seg_es); /* 0x11006962: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006963: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006966: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x11006968: push esp */
    PUSH32(esp, ebx); /* 0x11006969: push ebx */
    PUSH32(esp, _seg_es); /* 0x1100696A: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100696B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006971: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006973: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006975u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1100697F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x1100697F: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + LO8(edx)); /* 0x11006981: add byte ptr [bx + di], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006984: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006986: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006988: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100698A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1100698C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100698E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0x6Fu */ /* 0x11006990: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006992: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] *= *(double*)ADDR(ebx + 0x6); /* 0x11006994: fmul qword ptr [ebx + 6] */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006997: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006999: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100699B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100699D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100699F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110069A1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1100692C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100692Cu);

L_1100692C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100692C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100692E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006930: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006932: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006934: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006936: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(edx + 0x6)) & 255u, _rn = ((0x11u) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx + 0x6) = (uint8_t)(_rv); } /* 0x11006938: rcl byte ptr [edx + 6], 0x11 */
    SET_LO8(eax, 0x6Fu); /* 0x1100693C: mov al, 0x6f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100693E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x6Du)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x6Du)) << 24;
    SET_LO8(eax, LO8(eax) | 0x6Du); /* 0x11006940: or al, 0x6d */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006942: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x11006944: push eax */
    PUSH32(esp, 0); /* 0x11006945: push 0 */
    { uint32_t _aa = MEM32(ecx + ebp * 2 + 0x6F181100), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006947: adc dword ptr [ecx + ebp*2 + 0x6f181100], edx */
      MEM32(ecx + ebp * 2 + 0x6F181100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100694E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006950: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006952: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006954: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006956: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006958: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x11006960: clc  */
    PUSH32(esp, ebp); /* 0x11006961: push ebp */
    PUSH32(esp, _seg_es); /* 0x11006962: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006963: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006966: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x11006968: push esp */
    PUSH32(esp, ebx); /* 0x11006969: push ebx */
    PUSH32(esp, _seg_es); /* 0x1100696A: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100696B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006971: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006973: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006975u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006954(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006954u);

L_11006954:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006954: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006956: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006958: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100695E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x11006960: clc  */
    PUSH32(esp, ebp); /* 0x11006961: push ebp */
    PUSH32(esp, _seg_es); /* 0x11006962: push es */
    { uint32_t _aa = MEM32(esp + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006963: adc dword ptr [esp + esi*2], esi */
      MEM32(esp + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006966: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x11006968: push esp */
    PUSH32(esp, ebx); /* 0x11006969: push ebx */
    PUSH32(esp, _seg_es); /* 0x1100696A: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100696B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100696F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006971: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006973: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006975u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006A10u);

L_11006A10:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A14: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11006A1C: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11006A1E: push es */
    { uint32_t _aa = MEM32(ecx + ebp * 2 + 0x1100), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A1F: adc dword ptr [ecx + ebp*2 + 0x1100], eax */
      MEM32(ecx + ebp * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A28: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A2A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006A2C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006A30: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    /* outsd: no port I/O under Win32 */ /* 0x11006A31: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006A32: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(eax + 0x6)) & 255u, _rn = ((1) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _cf) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(eax + 0x6) = (uint8_t)(_rv); } /* 0x11006A34: rcl byte ptr [eax + 6] */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A37: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A39: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A3B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A3D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006A3F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006A41u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006A6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006A6Cu);

L_11006A6C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A6C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_11006A72; } /* 0x11006A70: loopne 0x11006a72 */
L_11006A72:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A74: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_11006AC6; /* 0x11006A78: js 0x11006ac6 */
L_11006A7A:
    PUSH32(esp, _seg_es); /* 0x11006A7A: push es */
    { uint32_t _aa = esp, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A7B: adc esp, ebx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0); /* 0x11006A7D: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A7F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A87: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A8B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ecx); /* 0x11006A8D: push ecx */
    PUSH32(esp, _seg_es); /* 0x11006A8E: push es */
    { uint32_t _aa = MEM32(esi + ebp * 2 + 0x71701100), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A8F: adc dword ptr [esi + ebp*2 + 0x71701100], ebx */
      MEM32(esi + ebp * 2 + 0x71701100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006A96: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] -= (double)*(float*)ADDR(eax + eax + 0x11); /* 0x11006A98: fsub dword ptr [eax + eax + 0x11] */
    SET_LO8(eax, MEM8(0x110075)); /* 0x11006A9C: mov al, byte ptr [0x110075] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AA1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x5A)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x5A) = (uint8_t)(MEM8(eax + 0x5A) + HI8(ebx)); /* 0x11006AA3: add byte ptr [eax + 0x5a], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006AA6: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006AA7: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AA9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AAB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AAD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006AAF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006AB1u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11006AC6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AC8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ACA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006ACCu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006A80u);

L_11006A80:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A84: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006A8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x6) = (uint8_t)(MEM8(ecx + 0x6) + LO8(edx)); /* 0x11006A8C: add byte ptr [ecx + 6], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(esi + ebp * 2 + 0x71701100), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006A8F: adc dword ptr [esi + ebp*2 + 0x71701100], ebx */
      MEM32(esi + ebp * 2 + 0x71701100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006A96: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] -= (double)*(float*)ADDR(eax + eax + 0x11); /* 0x11006A98: fsub dword ptr [eax + eax + 0x11] */
    SET_LO8(eax, MEM8(0x110075)); /* 0x11006A9C: mov al, byte ptr [0x110075] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AA1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x5A)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x5A) = (uint8_t)(MEM8(eax + 0x5A) + HI8(ebx)); /* 0x11006AA3: add byte ptr [eax + 0x5a], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006AA6: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006AA7: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AA9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AAB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006AAD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006AAF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006AB1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006B88u);

L_11006B88:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B90: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 0x4Fu); /* 0x11006B94: mov al, 0x4f */
    PUSH32(esp, _seg_es); /* 0x11006B96: push es */
    { uint32_t _aa = MEM32(edi + ebp * 2 + 0x1100), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006B97: adc dword ptr [edi + ebp*2 + 0x1100], eax */
      MEM32(edi + ebp * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x49u); /* 0x11006BA8: sub al, 0x49 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11006BAA: push es */
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BAB: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11006BB7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x11006BBB: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + LO8(edx)); /* 0x11006BBD: add byte ptr fs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11006BC0: dec eax */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x11006BC1: pop ecx */
    PUSH32(esp, _seg_es); /* 0x11006BC2: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BC3: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006BCB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006BCDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006B9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006B9Cu);

L_11006B9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006B9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x49u); /* 0x11006BA8: sub al, 0x49 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11006BAA: push es */
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BAB: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11006BB7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BB9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x11006BBB: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + LO8(edx)); /* 0x11006BBD: add byte ptr fs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11006BC0: dec eax */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x11006BC1: pop ecx */
    PUSH32(esp, _seg_es); /* 0x11006BC2: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006BC3: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006BC9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006BCB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006BCDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006C30u);

L_11006C30:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C30: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C32: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C34: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C36: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) & LO8(ecx)); /* 0x11006C3C: and byte ptr [edx + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C3F: adc dword ptr [eax], ebp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_11006C43; /* 0x11006C41: jno 0x11006c43 */
L_11006C43:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C43: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C47: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C4B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C4D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x59)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x59) = (uint8_t)(MEM8(eax + 0x59) + LO8(ecx)); /* 0x11006C4F: add byte ptr [eax + 0x59], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006C52: push es */
    { uint32_t _aa = MEM32(esp), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C53: adc dword ptr [esp], ebx */
      MEM32(esp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006C56: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_11006C5E; } /* 0x11006C5C: loopne 0x11006c5e */
L_11006C5E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x11006C64: nop  */
    PUSH32(esp, ebx); /* 0x11006C65: push ebx */
    PUSH32(esp, _seg_es); /* 0x11006C66: push es */
    { uint32_t _aa = MEM32(esi + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C67: adc dword ptr [esi + 0x1100], ecx */
      MEM32(esi + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006C74: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = MEM32(eax + eax + 0x11); _seg_es = MEM16(eax + eax + 0x11 + 4); /* 0x11006C78: les ebp, ptr [eax + eax + 0x11] */
    MEM8(ebp + 0x6) = (uint8_t)(LO8(ecx)); /* 0x11006C7C: mov byte ptr [ebp + 6], cl */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C7F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006C87: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006C89u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006C44u);

L_11006C44:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11006C50: dec eax */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x11006C51: pop ecx */
    PUSH32(esp, _seg_es); /* 0x11006C52: push es */
    { uint32_t _aa = MEM32(esp), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C53: adc dword ptr [esp], ebx */
      MEM32(esp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006C56: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_11006C5E; } /* 0x11006C5C: loopne 0x11006c5e */
L_11006C5E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x11006C64: nop  */
    PUSH32(esp, ebx); /* 0x11006C65: push ebx */
    PUSH32(esp, _seg_es); /* 0x11006C66: push es */
    { uint32_t _aa = MEM32(esi + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C67: adc dword ptr [esi + 0x1100], ecx */
      MEM32(esi + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006C74: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = MEM32(eax + eax + 0x11); _seg_es = MEM16(eax + eax + 0x11 + 4); /* 0x11006C78: les ebp, ptr [eax + eax + 0x11] */
    MEM8(ebp + 0x6) = (uint8_t)(LO8(ecx)); /* 0x11006C7C: mov byte ptr [ebp + 6], cl */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C7F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006C87: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006C89u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006C58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006C58u);

L_11006C58:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_11006C5E; } /* 0x11006C5C: loopne 0x11006c5e */
L_11006C5E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x11006C64: nop  */
    PUSH32(esp, ebx); /* 0x11006C65: push ebx */
    PUSH32(esp, _seg_es); /* 0x11006C66: push es */
    { uint32_t _aa = MEM32(esi + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C67: adc dword ptr [esi + 0x1100], ecx */
      MEM32(esi + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006C74: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = MEM32(eax + eax + 0x11); _seg_es = MEM16(eax + eax + 0x11 + 4); /* 0x11006C78: les ebp, ptr [eax + eax + 0x11] */
    MEM8(ebp + 0x6) = (uint8_t)(LO8(ecx)); /* 0x11006C7C: mov byte ptr [ebp + 6], cl */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006C7F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006C85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006C87: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006C89u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006D34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006D34u);

L_11006D34:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D34: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D36: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x5Bu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D40: adc al, 0x5b */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x11006D42: push es */
    { uint32_t _aa = MEM32(edx + esi * 2), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D43: adc dword ptr [edx + esi*2], ebx */
      MEM32(edx + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006D46: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006D50: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D52: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] = *(double*)ADDR(ecx) - _st[0]; /* 0x11006D54: fsubr qword ptr [ecx] */
    { uint32_t _aa = MEM32(eax + 0x45), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D57: adc dword ptr [eax + 0x45], edx */
      MEM32(eax + 0x45) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x11006D5A: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D5B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D5D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D5F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006D63: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006D65u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006D8Cu);

L_11006D8C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D90: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006D96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi + 0x6), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D98: adc byte ptr [edi + 6], cl */
      MEM8(edi + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D9B: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_11006D9F; /* 0x11006D9D: jae 0x11006d9f */
L_11006D9F:
    { uint32_t _aa = MEM32(esi + ebp * 2), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006D9F: adc dword ptr [esi + ebp*2], esp */
      MEM32(esi + ebp * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DA2: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x73u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x73u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x73u); /* 0x11006DA4: xor al, 0x73 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DA6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(eax)); /* 0x11006DA8: and byte ptr [esi], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ebp), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DAB: adc dword ptr [ebp], edx */
      MEM32(ebp) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + 0x67), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DAF: adc dword ptr [eax + 0x67], edx */
      MEM32(eax + 0x67) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DB2: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DB4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DB6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = POP32_VAL(esp); /* 0x11006DB8: pop eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11006DBB; /* 0x11006DB9: je 0x11006dbb */
L_11006DBB:
    { uint32_t _aa = MEM32(eax + 0x110064), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DBB: adc dword ptr [eax + 0x110064], ecx */
      MEM32(eax + 0x110064) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DC1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) + LO8(ebx)); /* 0x11006DC3: add byte ptr [eax + 0x64], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DC6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11006E3D; /* 0x11006DC8: je 0x11006e3d */
L_11006DCA:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DCA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x11006DCC: lodsb al, byte ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x11006DCD: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DCE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(ebx)); /* 0x11006DE0: mov byte ptr [ebx + 6], bl */
    { uint32_t _aa = esp, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DE3: adc esp, edx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0x6A501100u); /* 0x11006DE5: push 0x6a501100 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DEA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006DEC: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x11u); /* 0x11006DED: imul eax, dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x11006DF3: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x11006DF5: pop edx */
    PUSH32(esp, _seg_es); /* 0x11006DF6: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DF7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DFB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006DFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006E01u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11006E3D:
    PUSH32(esp, 0x1100u); /* 0x11006E3D: push 0x1100 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x6) = (uint8_t)(MEM8(ecx + 0x6) + LO8(ecx)); /* 0x11006E4C: add byte ptr [ecx + 6], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(edx + esi * 2), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E4F: adc dword ptr [edx + esi*2], ecx */
      MEM32(edx + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E52: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x11006E54: in al, dx */
    void_lift_trap(0x11006E55u, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(eax + 0x110064), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E57: adc dword ptr [eax + 0x110064], ecx */
      MEM32(eax + 0x110064) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E5D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E5F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x11006E63: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x50)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x50) = (uint8_t)(MEM8(eax + 0x50) + HI8(ecx)); /* 0x11006E6B: add byte ptr [eax + 0x50], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E6E: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E6F: adc dword ptr [eax + esi*2], eax */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E73: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11006E7F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x11006E81: push esi */
    PUSH32(esp, _seg_es); /* 0x11006E82: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E83: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E91: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edx * 2)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edx * 2) = (uint8_t)(MEM8(esp + edx * 2) + LO8(ecx)); /* 0x11006E93: add byte ptr [esp + edx*2], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E96: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E97: adc dword ptr [eax + esi*2], esi */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E9A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006EA4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006EA8: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006EAB; /* 0x11006EA9: jne 0x11006eab */
L_11006EAB:
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x11006EAD: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006EAE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006EB7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EB9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006DD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006DD4u);

L_11006DD4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DD8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(ebx)); /* 0x11006DE0: mov byte ptr [ebx + 6], bl */
    { uint32_t _aa = esp, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DE3: adc esp, edx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0x6A501100u); /* 0x11006DE5: push 0x6a501100 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006DEA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006DEC: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x11u); /* 0x11006DED: imul eax, dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x11006DF3: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x11006DF5: pop edx */
    PUSH32(esp, _seg_es); /* 0x11006DF6: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006DF7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DFB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006DFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006DFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006E01u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E10u);

L_11006E10:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E14: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = POP32_VAL(esp); /* 0x11006E1C: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11006E1D: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11006E1E: push es */
    { uint32_t _aa = MEM32(eax + 0x60110070), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E1F: adc dword ptr [eax + 0x60110070], ebp */
      MEM32(eax + 0x60110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x11006E25: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11006E26: push es */
    { uint32_t _aa = MEM32(eax + eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E27: adc dword ptr [eax + eax], eax */
      MEM32(eax + eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E2A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E2C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006E30u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E40u);

L_11006E40:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x6) = (uint8_t)(MEM8(ecx + 0x6) + LO8(ecx)); /* 0x11006E4C: add byte ptr [ecx + 6], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(edx + esi * 2), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E4F: adc dword ptr [edx + esi*2], ecx */
      MEM32(edx + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E52: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x11006E54: in al, dx */
    void_lift_trap(0x11006E55u, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(eax + 0x110064), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E57: adc dword ptr [eax + 0x110064], ecx */
      MEM32(eax + 0x110064) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E5D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E5F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x11006E63: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x50)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x50) = (uint8_t)(MEM8(eax + 0x50) + HI8(ecx)); /* 0x11006E6B: add byte ptr [eax + 0x50], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E6E: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E6F: adc dword ptr [eax + esi*2], eax */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E73: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11006E7F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x11006E81: push esi */
    PUSH32(esp, _seg_es); /* 0x11006E82: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E83: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E91: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edx * 2)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edx * 2) = (uint8_t)(MEM8(esp + edx * 2) + LO8(ecx)); /* 0x11006E93: add byte ptr [esp + edx*2], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E96: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E97: adc dword ptr [eax + esi*2], esi */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E9A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006EA4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006EA8: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006EAB; /* 0x11006EA9: jne 0x11006eab */
L_11006EAB:
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x11006EAD: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006EAE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006EB7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EB9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E60u);

L_11006E60:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x11006E69u); /* 0x11006E64: call 0x11006e69 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x50)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x50) = (uint8_t)(MEM8(eax + 0x50) + HI8(ecx)); /* 0x11006E6B: add byte ptr [eax + 0x50], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E6E: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E6F: adc dword ptr [eax + esi*2], eax */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E73: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11006E7F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x11006E81: push esi */
    PUSH32(esp, _seg_es); /* 0x11006E82: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E83: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E91: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edx * 2)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edx * 2) = (uint8_t)(MEM8(esp + edx * 2) + LO8(ecx)); /* 0x11006E93: add byte ptr [esp + edx*2], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E96: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E97: adc dword ptr [eax + esi*2], esi */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E9A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006EA4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006EA8: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006EAB; /* 0x11006EA9: jne 0x11006eab */
L_11006EAB:
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x11006EAD: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006EAE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006EB7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EB9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E69u);

L_11006E69:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x50)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x50) = (uint8_t)(MEM8(eax + 0x50) + HI8(ecx)); /* 0x11006E6B: add byte ptr [eax + 0x50], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E6E: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E6F: adc dword ptr [eax + esi*2], eax */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E73: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11006E7F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x11006E81: push esi */
    PUSH32(esp, _seg_es); /* 0x11006E82: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E83: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E91: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edx * 2)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edx * 2) = (uint8_t)(MEM8(esp + edx * 2) + LO8(ecx)); /* 0x11006E93: add byte ptr [esp + edx*2], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006E96: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E97: adc dword ptr [eax + esi*2], esi */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E9A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006EA4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006EA8: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006EAB; /* 0x11006EA9: jne 0x11006eab */
L_11006EAB:
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x11006EAD: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006EAE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006EB7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EB9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E74u);

L_11006E74:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E74: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006E80u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006E88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006E88u);

L_11006E88:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E90: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x54u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x54u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x54u); /* 0x11006E94: or al, 0x54 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x11006E96: push es */
    { uint32_t _aa = MEM32(eax + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006E97: adc dword ptr [eax + esi*2], esi */
      MEM32(eax + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006E9A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006E9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006EA4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11006EA8: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11006EAB; /* 0x11006EA9: jne 0x11006eab */
L_11006EAB:
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x11006EAD: inc ebp */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x11006EAE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006EAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11006EB7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EB9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006EC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006EC8u);

L_11006EC8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EC8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ECA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ECC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ECE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ED0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006ED2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + 0x6) = (uint8_t)(LO8(ecx)); /* 0x11006ED4: mov byte ptr [ebp + 6], cl */
    { uint32_t _aa = MEM32(edx + esi * 2 + 0x1100), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006ED7: adc dword ptr [edx + esi*2 + 0x1100], esi */
      MEM32(edx + esi * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EE0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006EE4: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EE6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x11006EE8: clc  */
    void_lift_trap(0x11006EE9u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006EEA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + eax + 0x11)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + eax + 0x11) = (uint8_t)(MEM8(esi + eax + 0x11) + LO8(eax)); /* 0x11006EEC: add byte ptr [esi + eax + 0x11], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EF4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006EF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006EF8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006F44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006F44u);

L_11006F44:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F48: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F4C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F4E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Cu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x4Cu); /* 0x11006F50: add al, 0x4c */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11006F52: push es */
    { uint32_t _aa = MEM32(esi + 0x730C1100), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006F53: adc dword ptr [esi + 0x730c1100], ebp */
      MEM32(esi + 0x730C1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006F5A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_11006FC1; /* 0x11006F5C: jo 0x11006fc1 */
L_11006F5E:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006F5E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x69116FD9u); /* 0x11006F60: call 0x69116fd9 */ /* not lifted */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11006F65u, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(ecx + ebp * 2 + 0x700C1100), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006F67: adc dword ptr [ecx + ebp*2 + 0x700c1100], edx */
      MEM32(ecx + ebp * 2 + 0x700C1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006F6E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F74: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11006F7C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0x6Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x6Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x6Fu); /* 0x11006F80: xor al, 0x6f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006F82: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F84: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006F8C: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) - HI8(ecx)); /* 0x11006F90: sub byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = esp, _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006F93: adc esp, ebp */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* outsb: no port I/O under Win32 */ /* 0x11006F95: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006F96: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F98: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F9A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24;
    MEM8(ebx + 0x6) = (uint8_t)(MEM8(ebx + 0x6) | LO8(eax)); /* 0x11006FA8: or byte ptr [ebx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx + esi * 2), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FAB: adc dword ptr [edx + esi*2], esp */
      MEM32(edx + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11006FB7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) + LO8(ebx)); /* 0x11006FBB: add byte ptr [eax + 0x72], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006FBE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x11006FC0: lodsb al, byte ptr [esi] */
L_11006FC1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11006FC3; /* 0x11006FC1: je 0x11006fc3 */
L_11006FC3:
    { uint32_t _aa = MEM32(eax + 0x110069), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FC3: adc dword ptr [eax + 0x110069], esi */
      MEM32(eax + 0x110069) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FC9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ebp * 2 + 0x1100)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ebp * 2 + 0x1100) = (uint8_t)(MEM8(ecx + ebp * 2 + 0x1100) + LO8(edx)); /* 0x11006FCB: add byte ptr [ecx + ebp*2 + 0x1100], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006FDC: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006FE0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006F9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006F9Cu);

L_11006F9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006F9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24;
    MEM8(ebx + 0x6) = (uint8_t)(MEM8(ebx + 0x6) | LO8(eax)); /* 0x11006FA8: or byte ptr [ebx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx + esi * 2), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FAB: adc dword ptr [edx + esi*2], esp */
      MEM32(edx + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FAF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11006FB7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FB9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) + LO8(ebx)); /* 0x11006FBB: add byte ptr [eax + 0x72], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006FBE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x11006FC0: lodsb al, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11006FC3; /* 0x11006FC1: je 0x11006fc3 */
L_11006FC3:
    { uint32_t _aa = MEM32(eax + 0x110069), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FC3: adc dword ptr [eax + 0x110069], esi */
      MEM32(eax + 0x110069) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FC9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ebp * 2 + 0x1100)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ebp * 2 + 0x1100) = (uint8_t)(MEM8(ecx + ebp * 2 + 0x1100) + LO8(edx)); /* 0x11006FCB: add byte ptr [ecx + ebp*2 + 0x1100], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FD8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11006FDC: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11006FE0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11006FE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11006FE4u);

L_11006FE4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FE4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FE6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FE8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11006FEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi + eax + 0x11) = (uint8_t)(LO8(eax)); /* 0x11006FF0: mov byte ptr [esi + eax + 0x11], al */
    SET_LO8(eax, 0x6Bu); /* 0x11006FF4: mov al, 0x6b */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11006FF6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebp), HI8(eax) */ /* 0x11006FF8: cmp byte ptr [ebp], ah */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11006FFB: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11006FFD: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007000: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007002: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x6Cu); /* 0x11007004: add al, 0x6c */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007006: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007008: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100700A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(edx + 0x6)) & 255u, _rn = ((1) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx + 0x6) = (uint8_t)(_rv); } /* 0x1100700C: rcr byte ptr [edx + 6], 1 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100700F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007011: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x11007013: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007015: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007017: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007019u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007054u);

L_11007054:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007054: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007056: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007058: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100705A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100705C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100705E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_110070BC; /* 0x11007060: js 0x110070bc */
L_11007062:
    PUSH32(esp, _seg_es); /* 0x11007062: push es */
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007063: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x11007065u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007066: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007068: pushal  */
    PUSH32(esp, edx); /* 0x11007069: push edx */
    PUSH32(esp, _seg_es); /* 0x1100706A: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100706B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100706D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100706F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007071: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007073: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007075u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_110070BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ecx + 0x6), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070C4: adc byte ptr [ecx + 6], bl */
      MEM8(ecx + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + 0x6B), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070C7: adc dword ptr [eax + 0x6b], edi */
      MEM32(eax + 0x6B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110070CA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_11007124; /* 0x110070CC: jo 0x11007124 */
L_110070CE:
    PUSH32(esp, _seg_es); /* 0x110070CE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070CF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110070D7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110070D9u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11007124:
    PUSHAD(); /* 0x11007124: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_11007127; /* 0x11007125: jno 0x11007127 */
L_11007127:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007127: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007129: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x1100712B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100712D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x1100712F: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007132: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11007134: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x11u); /* 0x11007135: imul eax, dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007141: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x11007143: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11007145: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11007146: push es */
    { uint32_t _aa = MEM32(esi), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007147: adc dword ptr [esi], edi */
      MEM32(esi) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100714A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007154: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007158: pushal  */
    PUSH32(esp, edx); /* 0x11007159: push edx */
    PUSH32(esp, _seg_es); /* 0x1100715A: push es */
    { uint32_t _aa = MEM32(eax + 0x72), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100715B: adc dword ptr [eax + 0x72], ecx */
      MEM32(eax + 0x72) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100715E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007160: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007162: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007164: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007166: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11007168: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100716A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x66u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100716C: adc al, 0x66 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100716E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11007170: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007173: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007175: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007177: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007179: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100717B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100717Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007084u);

L_11007084:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007084: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007086: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007088: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100708A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100708C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100708E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0xD4110656u; /* 0x11007090: mov esp, 0xd4110656 */
    /* outsd: no port I/O under Win32 */ /* 0x11007095: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007096: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007098: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100709A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x1100709C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100709E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x110070A0: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x110070A4: pop esp */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110070A5: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070A8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x110070B0: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(ebp) = (uint16_t)(_seg_fs); /* 0x110070B4: mov word ptr [ebp], fs */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070B7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x110070C3: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = POP32_VAL(esp); /* 0x110070C5: pop ecx */
    PUSH32(esp, _seg_es); /* 0x110070C6: push es */
    { uint32_t _aa = MEM32(eax + 0x6B), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070C7: adc dword ptr [eax + 0x6b], edi */
      MEM32(eax + 0x6B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110070CA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_11007124; /* 0x110070CC: jo 0x11007124 */
L_110070CE:
    PUSH32(esp, _seg_es); /* 0x110070CE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070CF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110070D7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110070D9u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11007124:
    PUSHAD(); /* 0x11007124: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_11007127; /* 0x11007125: jno 0x11007127 */
L_11007127:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007127: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007129: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x1100712B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100712D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x1100712F: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007132: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11007134: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x11u); /* 0x11007135: imul eax, dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007141: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x11007143: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11007145: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11007146: push es */
    { uint32_t _aa = MEM32(esi), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007147: adc dword ptr [esi], edi */
      MEM32(esi) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100714A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007154: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007158: pushal  */
    PUSH32(esp, edx); /* 0x11007159: push edx */
    PUSH32(esp, _seg_es); /* 0x1100715A: push es */
    { uint32_t _aa = MEM32(eax + 0x72), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100715B: adc dword ptr [eax + 0x72], ecx */
      MEM32(eax + 0x72) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100715E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007160: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007162: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007164: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007166: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11007168: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100716A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x66u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100716C: adc al, 0x66 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100716E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11007170: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007173: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007175: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007177: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007179: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100717B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100717Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110070B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110070B8u);

L_110070B8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070B8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ecx + 0x6), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070C4: adc byte ptr [ecx + 6], bl */
      MEM8(ecx + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + 0x6B), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070C7: adc dword ptr [eax + 0x6b], edi */
      MEM32(eax + 0x6B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110070CA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_11007124; /* 0x110070CC: jo 0x11007124 */
L_110070CE:
    PUSH32(esp, _seg_es); /* 0x110070CE: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070CF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110070D7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110070D9u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11007124:
    PUSHAD(); /* 0x11007124: pushal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_11007127; /* 0x11007125: jno 0x11007127 */
L_11007127:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007127: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007129: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x1100712B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100712D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x1100712F: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007132: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11007134: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x11u); /* 0x11007135: imul eax, dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007141: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x11007143: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11007145: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x11007146: push es */
    { uint32_t _aa = MEM32(esi), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007147: adc dword ptr [esi], edi */
      MEM32(esi) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100714A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007154: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007158: pushal  */
    PUSH32(esp, edx); /* 0x11007159: push edx */
    PUSH32(esp, _seg_es); /* 0x1100715A: push es */
    { uint32_t _aa = MEM32(eax + 0x72), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100715B: adc dword ptr [eax + 0x72], ecx */
      MEM32(eax + 0x72) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100715E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007160: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007162: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007164: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007166: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11007168: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100716A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x66u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100716C: adc al, 0x66 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100716E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11007170: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007173: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007175: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007177: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007179: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100717B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100717Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110070E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110070E8u);

L_110070E8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x110070F1u); /* 0x110070EC: call 0x110070f1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4F) = (uint8_t)(MEM8(eax + 0x4F) + HI8(eax)); /* 0x110070F3: add byte ptr [eax + 0x4f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x110070F6: push es */
    { uint32_t _aa = MEM32(eax + ebp * 2 + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070F7: adc dword ptr [eax + ebp*2 + 0x1100], ecx */
      MEM32(eax + ebp * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007100: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007102: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007104: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007106: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (17u) _cf = 0u; /* 0x11007108: shl byte ptr [ebp], 0x11 */
    if (17u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(ebp) << 17u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(ebp) = (uint8_t)(MEM8(ebp) << 17u); /* 0x11007108: shl byte ptr [ebp], 0x11 */
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ebx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ebx)); /* 0x1100710C: or byte ptr [eax + 6], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100710F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007111: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007113: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007115: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007117: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007119u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110070F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110070F1u);

L_110070F1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4F)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4F) = (uint8_t)(MEM8(eax + 0x4F) + HI8(eax)); /* 0x110070F3: add byte ptr [eax + 0x4f], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x110070F6: push es */
    { uint32_t _aa = MEM32(eax + ebp * 2 + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110070F7: adc dword ptr [eax + ebp*2 + 0x1100], ecx */
      MEM32(eax + ebp * 2 + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110070FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007100: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007102: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007104: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007106: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (17u) _cf = 0u; /* 0x11007108: shl byte ptr [ebp], 0x11 */
    if (17u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(ebp) << 17u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(ebp) = (uint8_t)(MEM8(ebp) << 17u); /* 0x11007108: shl byte ptr [ebp], 0x11 */
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ebx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ebx)); /* 0x1100710C: or byte ptr [eax + 6], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100710F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007111: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007113: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007115: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007117: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007119u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007138(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007138u);

L_11007138:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007138: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100713E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007140: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007142: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8(eax + 0x6)) & 255u, _rn = ((0x11u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(eax + 0x6) = (uint8_t)(_rv); } /* 0x11007144: ror byte ptr [eax + 6], 0x11 */
    /* cmp LO8(eax), 0x66u */ /* 0x11007148: cmp al, 0x66 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100714A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007154: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007158: pushal  */
    PUSH32(esp, edx); /* 0x11007159: push edx */
    PUSH32(esp, _seg_es); /* 0x1100715A: push es */
    { uint32_t _aa = MEM32(eax + 0x72), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100715B: adc dword ptr [eax + 0x72], ecx */
      MEM32(eax + 0x72) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100715E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007160: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007162: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007164: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007166: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11007168: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100716A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x66u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100716C: adc al, 0x66 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100716E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11007170: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007173: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007175: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007177: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007179: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100717B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100717Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1100714C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100714Cu);

L_1100714C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100714E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007150: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007154: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007156: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x11007158: pushal  */
    PUSH32(esp, edx); /* 0x11007159: push edx */
    PUSH32(esp, _seg_es); /* 0x1100715A: push es */
    { uint32_t _aa = MEM32(eax + 0x72), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100715B: adc dword ptr [eax + 0x72], ecx */
      MEM32(eax + 0x72) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100715E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007160: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007162: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007164: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007166: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x11007168: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100716A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x66u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100716C: adc al, 0x66 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100716E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) | LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) | LO8(ecx)); /* 0x11007170: or byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007173: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007175: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007177: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007179: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100717B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100717Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007198u);

L_11007198:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007198: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100719A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100719C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100719E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071A0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + 0x6) = (uint8_t)(LO8(eax)); /* 0x110071A4: mov byte ptr [ecx + 6], al */
    { uint32_t _aa = MEM32(eax + 0x68), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110071A7: adc dword ptr [eax + 0x68], eax */
      MEM32(eax + 0x68) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110071AA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x69117225u); /* 0x110071AC: call 0x69117225 */ /* not lifted */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110071B1u, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(ecx + ebp * 2 + 0x700C1100), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110071B3: adc dword ptr [ecx + ebp*2 + 0x700c1100], edx */
      MEM32(ecx + ebp * 2 + 0x700C1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110071BA: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00110070u); /* 0x110071C0: push 0x110070 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x110071D3: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x110071D5: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x110071D6: push es */
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110071D7: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x110071D9u, "arpl word ptr [eax], ax");
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110071DB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110071E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x110068)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x110068) = (uint8_t)(MEM8(eax + 0x110068) + LO8(eax)); /* 0x110071E7: add byte ptr [eax + 0x110068], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110071F3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x110071F7: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x110071F9: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007200: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007202: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x11007204: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007206: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x11007208: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1100720B; /* 0x11007209: jae 0x1100720b */
L_1100720B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100720B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100720D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100720F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007211: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11007213: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007215: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x11007217: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1100721B; /* 0x11007219: je 0x1100721b */
L_1100721B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100721B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100721D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100721F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007221: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11007223: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007225: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x17EEFF9B))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x17EEFF9B)) = (uint8_t)(MEM8(eax + (-0x17EEFF9B)) + LO8(eax)); /* 0x11007227: add byte ptr [eax - 0x17eeff9b], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1100722D: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x1100722E: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100722F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007231: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007233: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007235: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007237: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007239u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110071C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110071C8u);

L_110071C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071CE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0xE9117823u); /* 0x110071D4: call 0xe9117823 */ /* not lifted */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110071D9u, "arpl word ptr [eax], ax");
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110071DB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110071E3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x110068)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x110068) = (uint8_t)(MEM8(eax + 0x110068) + LO8(eax)); /* 0x110071E7: add byte ptr [eax + 0x110068], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110071F3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x110071F7: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x110071F9: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110071FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007200: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007202: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x11007204: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007206: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x11007208: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_1100720B; /* 0x11007209: jae 0x1100720b */
L_1100720B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100720B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100720D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100720F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007211: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11007213: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007215: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x11007217: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1100721B; /* 0x11007219: je 0x1100721b */
L_1100721B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100721B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100721D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100721F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007221: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x11007223: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007225: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x17EEFF9B))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x17EEFF9B)) = (uint8_t)(MEM8(eax + (-0x17EEFF9B)) + LO8(eax)); /* 0x11007227: add byte ptr [eax - 0x17eeff9b], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1100722D: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, _seg_es); /* 0x1100722E: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100722F: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007231: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007233: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007235: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007237: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007239u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007274u);

L_11007274:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007274: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007276: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007278: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100727A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100727C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100727E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_110072C7; } /* 0x11007280: loopne 0x110072c7 */
L_11007282:
    PUSH32(esp, _seg_es); /* 0x11007282: push es */
    { uint32_t _aa = esp, _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007283: adc esp, ebp */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_11007287; /* 0x11007285: jno 0x11007287 */
L_11007287:
    { uint32_t _aa = MEM32(eax + 0x211065B), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007287: adc dword ptr [eax + 0x211065b], ecx */
      MEM32(eax + 0x211065B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100728D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100728F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007291: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007293: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007295u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_110072C7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x110072CF: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110072D1: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x110072D2: push es */
    { uint32_t _aa = MEM32(eax), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110072D3: adc dword ptr [eax], ecx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* outsd: no port I/O under Win32 */ /* 0x110072D5: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110072D6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00110069u); /* 0x110072D8: push 0x110069 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110072E7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(eax)); /* 0x110072EB: add ah, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x110072EDu, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110072EF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110072F7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ebp * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ebp * 2) = (uint8_t)(MEM8(ecx + ebp * 2) + LO8(edx)); /* 0x110072FB: add byte ptr [ecx + ebp*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110072FE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_1100736E; /* 0x11007300: jl 0x1100736e */
L_11007302:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007302: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebp), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007304: adc byte ptr [ebp], ah */
      MEM8(ebp) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007307: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007309: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ebx)); /* 0x1100730B: add al, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1100730D: push ebp */
    PUSH32(esp, _seg_es); /* 0x1100730E: push es */
    { uint32_t _aa = MEM32(0), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100730F: adc dword ptr [0], eax */
      MEM32(0) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007315: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007317: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007319u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1100736E:
    PUSH32(esp, _seg_es); /* 0x1100736E: push es */
    { uint32_t _aa = MEM32(eax), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100736F: adc dword ptr [eax], esp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x11007371u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007372: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24;
    MEM8(ebx + 0x6) = (uint8_t)(MEM8(ebx + 0x6) | LO8(eax)); /* 0x11007374: or byte ptr [ebx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007377: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100737F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007381u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110072C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110072C4u);

L_110072C4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072CC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072CE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ecx + 0x6) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + 0x6) ^ LO8(eax))) << 24;
    MEM8(ecx + 0x6) = (uint8_t)(MEM8(ecx + 0x6) ^ LO8(eax)); /* 0x110072D0: xor byte ptr [ecx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110072D3: adc dword ptr [eax], ecx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* outsd: no port I/O under Win32 */ /* 0x110072D5: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110072D6: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00110069u); /* 0x110072D8: push 0x110069 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110072E7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(eax)); /* 0x110072EB: add ah, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x110072EDu, "bound eax, qword ptr [eax]");
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110072EF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x110072F7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110072F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ebp * 2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ebp * 2) = (uint8_t)(MEM8(ecx + ebp * 2) + LO8(edx)); /* 0x110072FB: add byte ptr [ecx + ebp*2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110072FE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_1100736E; /* 0x11007300: jl 0x1100736e */
L_11007302:
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007302: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebp), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007304: adc byte ptr [ebp], ah */
      MEM8(ebp) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007307: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007309: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ebx)); /* 0x1100730B: add al, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1100730D: push ebp */
    PUSH32(esp, _seg_es); /* 0x1100730E: push es */
    { uint32_t _aa = MEM32(0), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100730F: adc dword ptr [0], eax */
      MEM32(0) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007315: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007317: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007319u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1100736E:
    PUSH32(esp, _seg_es); /* 0x1100736E: push es */
    { uint32_t _aa = MEM32(eax), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100736F: adc dword ptr [eax], esp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x11007371u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007372: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24;
    MEM8(ebx + 0x6) = (uint8_t)(MEM8(ebx + 0x6) | LO8(eax)); /* 0x11007374: or byte ptr [ebx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007377: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100737F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007381u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007360u);

L_11007360:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007360: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007362: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007364: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007366: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007368: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100736A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x2011064Du; /* 0x1100736C: mov eax, 0x2011064d */
    void_lift_trap(0x11007371u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007372: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x6) | LO8(eax))) << 24;
    MEM8(ebx + 0x6) = (uint8_t)(MEM8(ebx + 0x6) | LO8(eax)); /* 0x11007374: or byte ptr [ebx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007377: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100737D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100737F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007381u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110073C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110073C4u);

L_110073C4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x110073CDu); /* 0x110073C8: call 0x110073cd */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x110073CF: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x110073D1: push esi */
    PUSH32(esp, _seg_es); /* 0x110073D2: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073D3: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110073DF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x110073E3: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_110073E7; /* 0x110073E5: jo 0x110073e7 */
L_110073E7:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073E7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4C110643)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4C110643) = (uint8_t)(MEM8(eax + 0x4C110643) + LO8(ebx)); /* 0x110073F3: add byte ptr [eax + 0x4c110643], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110073F9: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007400: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007402: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007404: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007406: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x110073)); /* 0x11007408: mov al, byte ptr [0x110073] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007411: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007413: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007415: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x2FEEF9B5))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x2FEEF9B5)) = (uint8_t)(MEM8(eax + (-0x2FEEF9B5)) + LO8(ecx)); /* 0x11007417: add byte ptr [eax - 0x2feef9b5], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x1100741D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x11007420: pop esp */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11007423; /* 0x11007421: jne 0x11007423 */
L_11007423:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007423: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007425: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007428: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100742A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1100742C: in al, dx */
    PUSH32(esp, 0); /* 0x1100742D: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100742F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007431: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007433: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007435: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x11007437: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007439: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x1100743B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100743D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) + LO8(ebx)); /* 0x1100743F: add byte ptr [eax + 0x6f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007442: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007444: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007446: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007448: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) | LO8(eax)); /* 0x11007450: or byte ptr [edx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x73), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007453: adc dword ptr [eax + 0x73], edx */
      MEM32(eax + 0x73) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007456: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x11007458: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100745B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007461: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007463: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007465u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110073CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110073CDu);

L_110073CD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x110073CF: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x110073D1: push esi */
    PUSH32(esp, _seg_es); /* 0x110073D2: push es */
    { uint32_t _aa = MEM32(eax + 0x110070), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073D3: adc dword ptr [eax + 0x110070], ebx */
      MEM32(eax + 0x110070) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110073DF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x110073E3: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_110073E7; /* 0x110073E5: jo 0x110073e7 */
L_110073E7:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073E7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x4C110643)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x4C110643) = (uint8_t)(MEM8(eax + 0x4C110643) + LO8(ebx)); /* 0x110073F3: add byte ptr [eax + 0x4c110643], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110073F9: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007400: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007402: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007404: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007406: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x110073)); /* 0x11007408: mov al, byte ptr [0x110073] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007411: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007413: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007415: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x2FEEF9B5))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x2FEEF9B5)) = (uint8_t)(MEM8(eax + (-0x2FEEF9B5)) + LO8(ecx)); /* 0x11007417: add byte ptr [eax - 0x2feef9b5], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x1100741D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x11007420: pop esp */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11007423; /* 0x11007421: jne 0x11007423 */
L_11007423:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007423: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007425: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007428: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100742A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1100742C: in al, dx */
    PUSH32(esp, 0); /* 0x1100742D: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100742F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007431: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007433: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007435: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x11007437: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007439: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x1100743B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100743D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) + LO8(ebx)); /* 0x1100743F: add byte ptr [eax + 0x6f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007442: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007444: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007446: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007448: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) | LO8(eax)); /* 0x11007450: or byte ptr [edx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x73), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007453: adc dword ptr [eax + 0x73], edx */
      MEM32(eax + 0x73) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007456: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x11007458: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100745B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007461: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007463: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007465u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110073E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110073E8u);

L_110073E8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110073F4: cwde  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110073F5: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x110073F6: push es */
    { uint32_t _aa = MEM32(esi), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073F7: adc dword ptr [esi], ecx */
      MEM32(esi) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110073FB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110073FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007401: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x11007403: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007405: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x110073)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x110073) = (uint8_t)(MEM8(eax + 0x110073) + HI8(eax)); /* 0x11007407: add byte ptr [eax + 0x110073], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007411: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007413: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007415: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x2FEEF9B5))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x2FEEF9B5)) = (uint8_t)(MEM8(eax + (-0x2FEEF9B5)) + LO8(ecx)); /* 0x11007417: add byte ptr [eax - 0x2feef9b5], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x1100741D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x11007420: pop esp */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11007423; /* 0x11007421: jne 0x11007423 */
L_11007423:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007423: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007425: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007428: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100742A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1100742C: in al, dx */
    PUSH32(esp, 0); /* 0x1100742D: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100742F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007431: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007433: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007435: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x11007437: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007439: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x1100743B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100743D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) + LO8(ebx)); /* 0x1100743F: add byte ptr [eax + 0x6f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007442: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007444: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007446: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007448: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) | LO8(eax)); /* 0x11007450: or byte ptr [edx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x73), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007453: adc dword ptr [eax + 0x73], edx */
      MEM32(eax + 0x73) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007456: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x11007458: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100745B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007461: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007463: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007465u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1100740C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100740Cu);

L_1100740C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100740E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007410: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007412: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007414: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007416: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(ecx)); /* 0x11007418: mov byte ptr [ebx + 6], cl */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100741B: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x1100741D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = POP32_VAL(esp); /* 0x11007420: pop esp */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11007423; /* 0x11007421: jne 0x11007423 */
L_11007423:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007423: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007425: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007428: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100742A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1100742C: in al, dx */
    PUSH32(esp, 0); /* 0x1100742D: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100742F: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007431: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007433: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007435: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x11007437: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007439: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x1100743B: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100743D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) + LO8(ebx)); /* 0x1100743F: add byte ptr [eax + 0x6f], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007442: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007444: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007446: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007448: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) | LO8(eax)); /* 0x11007450: or byte ptr [edx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x73), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007453: adc dword ptr [eax + 0x73], edx */
      MEM32(eax + 0x73) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007456: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x11007458: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100745B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007461: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007463: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007465u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007444(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007444u);

L_11007444:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007444: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007446: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007448: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100744E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x6) | LO8(eax))) << 24;
    MEM8(edx + 0x6) = (uint8_t)(MEM8(edx + 0x6) | LO8(eax)); /* 0x11007450: or byte ptr [edx + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x73), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007453: adc dword ptr [eax + 0x73], edx */
      MEM32(eax + 0x73) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007456: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x11007458: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100745B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100745F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007461: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007463: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007465u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007484u);

L_11007484:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007484: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007486: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007488: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100748A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100748C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100748E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax + 0x6) ^ LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x6) ^ LO8(ecx))) << 24;
    MEM8(eax + 0x6) = (uint8_t)(MEM8(eax + 0x6) ^ LO8(ecx)); /* 0x11007490: xor byte ptr [eax + 6], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007493: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 0); /* 0x11007495: push 0 */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007497: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007499: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x110074A3: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110074A5: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x110074A6: push es */
    { uint32_t _aa = esp, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074A7: adc esp, edi */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_110074AB; /* 0x110074A9: jno 0x110074ab */
L_110074AB:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074AB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x110074AD: push eax */
    PUSH32(esp, _seg_es); /* 0x110074AE: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074AF: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110074B7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110074B9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007498u);

L_11007498:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007498: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100749E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074A0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x6) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x6) | LO8(eax))) << 24;
    MEM8(esi + 0x6) = (uint8_t)(MEM8(esi + 0x6) | LO8(eax)); /* 0x110074A4: or byte ptr [esi + 6], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = esp, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074A7: adc esp, edi */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_110074AB; /* 0x110074A9: jno 0x110074ab */
L_110074AB:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074AB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x110074AD: push eax */
    PUSH32(esp, _seg_es); /* 0x110074AE: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074AF: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074B5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110074B7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110074B9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110074D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110074D4u);

L_110074D4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074DC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x6)); /* 0x110074E0: fcom qword ptr [ebx + 6] */
    { uint32_t _aa = MEM32(edx + esi * 2 + 0x4C781100), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074E3: adc dword ptr [edx + esi*2 + 0x4c781100], esp */
      MEM32(edx + esi * 2 + 0x4C781100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x110074EA: push es */
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110074EB: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110074F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110074F3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110074F5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110075BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110075BCu);

L_110075BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x110075C8: nop  */
    PUSH32(esp, ebx); /* 0x110075C9: push ebx */
    PUSH32(esp, _seg_es); /* 0x110075CA: push es */
    { uint32_t _aa = MEM32(esi + 0x1100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075CB: adc dword ptr [esi + 0x1100], ecx */
      MEM32(esi + 0x1100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6) ^ LO8(edx))) << 24;
    MEM8(ebp + 0x6) = (uint8_t)(MEM8(ebp + 0x6) ^ LO8(edx)); /* 0x110075DC: xor byte ptr [ebp + 6], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x65), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075DF: adc dword ptr [eax + 0x65], esi */
      MEM32(eax + 0x65) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110075E2: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110075F0: cwde  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110075F1: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x110075F2: push es */
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075F3: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_110075F7; /* 0x110075F5: jb 0x110075f7 */
L_110075F7:
    { uint32_t _aa = MEM32(eax + 0x11065D), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075F7: adc dword ptr [eax + 0x11065d], esp */
      MEM32(eax + 0x11065D) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x110075FF: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007601: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007603: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007605u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110075E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110075E4u);

L_110075E4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110075F0: cwde  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110075F1: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x110075F2: push es */
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075F3: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_110075F7; /* 0x110075F5: jb 0x110075f7 */
L_110075F7:
    { uint32_t _aa = MEM32(eax + 0x11065D), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110075F7: adc dword ptr [eax + 0x11065d], esp */
      MEM32(eax + 0x11065D) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110075FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x110075FF: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007601: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007603: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007605u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007684(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007684u);

L_11007684:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007684: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007686: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007688: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100768A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100768C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100768E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x11007690: push esp */
    ebp = POP32_VAL(esp); /* 0x11007691: pop ebp */
    PUSH32(esp, _seg_es); /* 0x11007692: push es */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007693: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_11007697; /* 0x11007695: jns 0x11007697 */
L_11007697:
    { uint32_t _aa = MEM32(eax + 0x5C), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007697: adc dword ptr [eax + 0x5c], ebp */
      MEM32(eax + 0x5C) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x1100769A: push es */
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100769B: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100769D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100769F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110076A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110076A3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110076A5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007704u);

L_11007704:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007704: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007706: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007708: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100770A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100770C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100770E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007710u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11007718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007718u);

L_11007718:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007718: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100771A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100771C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100771E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007720: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007722: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007724: mov word ptr [esi + eax + 0x11], ds */
    PUSH32(esp, esp); /* 0x11007728: push esp */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_1100772B; /* 0x11007729: jbe 0x1100772b */
L_1100772B:
    { uint32_t _aa = MEM32(eax), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100772B: adc dword ptr [eax], ebx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_1100772F; /* 0x1100772D: jp 0x1100772f */
L_1100772F:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100772F: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007731: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007734: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007736: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0x0011065Du; /* 0x11007738: mov esp, 0x11065d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100773D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100773F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007741: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007743: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007745u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110077C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110077C4u);

L_110077C4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077CC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077CE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_1100782F; } /* 0x110077D0: loopne 0x1100782f */
L_110077D2:
    PUSH32(esp, _seg_es); /* 0x110077D2: push es */
    { uint32_t _aa = MEM32(eax + 0x2811007B), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110077D3: adc dword ptr [eax + 0x2811007b], edi */
      MEM32(eax + 0x2811007B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_110077DB; /* 0x110077D9: jbe 0x110077db */
L_110077DB:
    { uint32_t _aa = MEM32(eax), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110077DB: adc dword ptr [eax], ebx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_110077DF; /* 0x110077DD: jp 0x110077df */
L_110077DF:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110077DF: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x110077E1: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x110077E8: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x110077EA: push es */
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110077EB: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110077F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110077F3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110077F5u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1100782F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x1100782F: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebp = POP32_VAL(esp); /* 0x11007831: pop ebp */
    PUSH32(esp, _seg_es); /* 0x11007832: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007833: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007837: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007839: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100783B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100783Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007878u);

L_11007878:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007878: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100787A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100787C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100787E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007880: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007882: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebp + 0x6), LO8(ebx) */ /* 0x11007884: cmp byte ptr [ebp + 6], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(esi + esi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007887: adc dword ptr [esi + esi*2], eax */
      MEM32(esi + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + 0x211065C), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100788B: adc dword ptr [eax + 0x211065c], ebp */
      MEM32(eax + 0x211065C) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007891: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007893: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007895: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007897: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007899u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110078A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110078A8u);

L_110078A8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078A8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078B0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0x6411065Du; /* 0x110078B4: mov esp, 0x6411065d */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_110078BB; /* 0x110078B9: jbe 0x110078bb */
L_110078BB:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078BB: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3FEEF9A4))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3FEEF9A4)) = (uint8_t)(MEM8(eax + (-0x3FEEF9A4)) + HI8(ecx)); /* 0x110078C7: add byte ptr [eax - 0x3feef9a4], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_110078CF; /* 0x110078CD: jns 0x110078cf */
L_110078CF:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078CF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110078D7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x110078DB: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_110078DF; /* 0x110078DD: jbe 0x110078df */
L_110078DF:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078DF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110078E7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi + esi * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + esi * 2) = (uint8_t)(MEM8(edi + esi * 2) + HI8(ecx)); /* 0x110078EB: add byte ptr [edi + esi*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110078EE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x110078F8: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0x00110077u; /* 0x110078FC: mov esp, 0x110077 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007901: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007903: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007905: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x11007907: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100790A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x76u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100790C: adc al, 0x76 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100790E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007910: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007912: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007914: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007916: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x11007918: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100791A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1100791Cu, "hlt ");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_1100791F; /* 0x1100791D: jbe 0x1100791f */
L_1100791F:
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100791F: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = POP32_VAL(esp); /* 0x11007921: pop ebx */
    PUSH32(esp, _seg_es); /* 0x11007922: push es */
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007923: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007925: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007927: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007929: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100792B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100792Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110078BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110078BCu);

L_110078BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078BC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078BE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* test LO8(eax), 0x5Cu */ /* 0x110078C8: test al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x110078CA: push es */
    { uint32_t _aa = eax, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078CB: adc eax, eax */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_110078CF; /* 0x110078CD: jns 0x110078cf */
L_110078CF:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078CF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110078D7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x110078DB: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_110078DF; /* 0x110078DD: jbe 0x110078df */
L_110078DF:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110078DF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x110078E7: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi + esi * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + esi * 2) = (uint8_t)(MEM8(edi + esi * 2) + HI8(ecx)); /* 0x110078EB: add byte ptr [edi + esi*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x110078EE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x110078F8: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110078FA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0x00110077u; /* 0x110078FC: mov esp, 0x110077 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007901: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007903: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007905: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x11007907: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100790A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0x76u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100790C: adc al, 0x76 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x1100790E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007910: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007912: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007914: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007916: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(eax); /* 0x11007918: add eax, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100791A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1100791Cu, "hlt ");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_1100791F; /* 0x1100791D: jbe 0x1100791f */
L_1100791F:
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100791F: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = POP32_VAL(esp); /* 0x11007921: pop ebx */
    PUSH32(esp, _seg_es); /* 0x11007922: push es */
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007923: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007925: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007927: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007929: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1100792B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1100792Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1100793C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100793Cu);

L_1100793C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100793C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100793E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007940: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007942: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007944: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007946: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x5Eu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x5Eu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x5Eu); /* 0x11007948: or al, 0x5e */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x1100794A: push es */
    { uint32_t _aa = eax, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100794B: adc eax, esi */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1100794F; /* 0x1100794D: js 0x1100794f */
L_1100794F:
    { uint32_t _aa = MEM32(eax), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100794F: adc dword ptr [eax], edi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_11007953; /* 0x11007951: ja 0x11007953 */
L_11007953:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007953: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007955: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + ebx * 2 + 0x6)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + ebx * 2 + 0x6) = (uint8_t)(MEM8(ebp + ebx * 2 + 0x6) + LO8(edx)); /* 0x11007957: add byte ptr [ebp + ebx*2 + 6], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(ebx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100795B: adc dword ptr [ebx], eax */
      MEM32(ebx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100795D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100795F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007961: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007963: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007965u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007990u);

L_11007990:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007990: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007992: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007994: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007996: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007998: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100799A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Eu); /* 0x1100799C: sub al, 0x5e */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x1100799E: push es */
    { uint32_t _aa = MEM32(eax + 0x7411007B), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1100799F: adc dword ptr [eax + 0x7411007b], ebp */
      MEM32(eax + 0x7411007B) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x110079A5: pop ebp */
    PUSH32(esp, _seg_es); /* 0x110079A6: push es */
    { uint32_t _aa = MEM32(edx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110079A7: adc dword ptr [edx], eax */
      MEM32(edx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x110079AF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x110079B1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_110079EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110079ECu);

L_110079EC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079F0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079F4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x110079F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x0811065Cu); /* 0x110079F8: push 0x811065c */
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_110079FF; /* 0x110079FD: jp 0x110079ff */
L_110079FF:
    { uint32_t _aa = MEM32(eax + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110079FF: adc dword ptr [eax + edi*2], eax */
      MEM32(eax + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007A02: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x11007A10: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); ebp = esp; esp -= 0x7Bu; /* 0x11007A14: enter 0x7b, 0x11 */
    { uint32_t _sa = MEM8(ebp + 0x6), _sb = LO8(ebx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A18: sbb byte ptr [ebp + 6], bl */
      MEM8(ebp + 0x6) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A1B: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A1D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A1F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A21: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007A23: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007A25u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007A6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007A6Cu);

L_11007A6C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A6C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A74: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007A78u, "aam 0x5c");
    PUSH32(esp, _seg_es); /* 0x11007A7A: push es */
    { uint32_t _aa = MEM32(eax + 0x110079), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A7B: adc dword ptr [eax + 0x110079], eax */
      MEM32(eax + 0x110079) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A87: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A89: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + ebx * 2 + 0x6)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + ebx * 2 + 0x6) = (uint8_t)(MEM8(ebp + ebx * 2 + 0x6) + HI8(edx)); /* 0x11007A8B: add byte ptr [ebp + ebx*2 + 6], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(edi + esi * 2), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A8F: adc dword ptr [edi + esi*2], edx */
      MEM32(edi + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(esi + ebx * 2 + 0x6), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A93: adc dword ptr [esi + ebx*2 + 6], ecx */
      MEM32(esi + ebx * 2 + 0x6) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A97: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A99: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A9B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A9D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007A9F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007AA1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007A80u);

L_11007A80:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A84: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11007AEB; /* 0x11007A8C: je 0x11007aeb */
L_11007A8E:
    PUSH32(esp, _seg_es); /* 0x11007A8E: push es */
    { uint32_t _aa = MEM32(edi + esi * 2), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A8F: adc dword ptr [edi + esi*2], edx */
      MEM32(edi + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(esi + ebx * 2 + 0x6), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A93: adc dword ptr [esi + ebx*2 + 6], ecx */
      MEM32(esi + ebx * 2 + 0x6) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007A97: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A99: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A9B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007A9D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007A9F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007AA1u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_11007AEB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x11007AEB: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x11007AF4: inc esp */
    _flag_k = FK_INC;
    if ((_cf != 0 || recomp_cond(_flag_k, _flag_a, _flag_b, CC_E))) goto L_11007AF7; /* 0x11007AF5: jbe 0x11007af7 */
L_11007AF7:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007AF7: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + ebx * 2 + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + ebx * 2 + 0x6) = (uint8_t)(MEM8(esi + ebx * 2 + 0x6) + LO8(ecx)); /* 0x11007B03: add byte ptr [esi + ebx*2 + 6], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B07: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11007B0B; /* 0x11007B09: js 0x11007b0b */
L_11007B0B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B0B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B0F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B11: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x11007B13: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x11007B17: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_11007B1B; /* 0x11007B19: ja 0x11007b1b */
L_11007B1B:
    { uint32_t _aa = MEM32(eax), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B1B: adc dword ptr [eax], esi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11007B1F; /* 0x11007B1D: js 0x11007b1f */
L_11007B1F:
    { uint32_t _aa = MEM32(eax), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B1F: adc dword ptr [eax], edi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_11007B23; /* 0x11007B21: ja 0x11007b23 */
L_11007B23:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B23: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + edi * 2) = (uint8_t)(MEM8(eax + edi * 2) + LO8(ebx)); /* 0x11007B27: add byte ptr [eax + edi*2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B2B: adc dword ptr [eax], ebp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_11007B2F; /* 0x11007B2D: jbe 0x11007b2f */
L_11007B2F:
    { uint32_t _aa = MEM32(eax), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B2F: adc dword ptr [eax], ebx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B33; /* 0x11007B31: jp 0x11007b33 */
L_11007B33:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B33: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007B35: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007B48u, "hlt ");
    esp = POP32_VAL(esp); /* 0x11007B49: pop esp */
    PUSH32(esp, _seg_es); /* 0x11007B4A: push es */
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4B: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B4F; /* 0x11007B4D: jp 0x11007b4f */
L_11007B4F:
    { uint32_t _aa = esp, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4F: adc esp, ebx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B53; /* 0x11007B51: jp 0x11007b53 */
L_11007B53:
    { uint32_t _aa = MEM32(eax + 0x7A), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B53: adc dword ptr [eax + 0x7a], edx */
      MEM32(eax + 0x7A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B56: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11007B58: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_11007B5B; /* 0x11007B59: jp 0x11007b5b */
L_11007B5B:
    { uint32_t _aa = MEM32(eax + 0x11007A), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B5B: adc dword ptr [eax + 0x11007a], esi */
      MEM32(eax + 0x11007A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B63: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + ebx * 2 + 0x7B0C1106) = (uint8_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106) + HI8(ecx)); /* 0x11007B6F: add byte ptr [ebx + ebx*2 + 0x7b0c1106], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B76: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x11007B84: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11007B86: push es */
    { uint32_t _aa = MEM32(esp + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B87: adc dword ptr [esp + edi*2], eax */
      MEM32(esp + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B8A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007B8C: mov word ptr [esi + eax + 0x11], ds */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007B90: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007B98u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007AF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007AF8u);

L_11007AF8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AF8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007AFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x11007B04: dec esp */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x11007B05: pop esi */
    PUSH32(esp, _seg_es); /* 0x11007B06: push es */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B07: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11007B0B; /* 0x11007B09: js 0x11007b0b */
L_11007B0B:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B0B: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B0F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B11: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x11007B13: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x11007B17: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_11007B1B; /* 0x11007B19: ja 0x11007b1b */
L_11007B1B:
    { uint32_t _aa = MEM32(eax), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B1B: adc dword ptr [eax], esi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11007B1F; /* 0x11007B1D: js 0x11007b1f */
L_11007B1F:
    { uint32_t _aa = MEM32(eax), _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B1F: adc dword ptr [eax], edi */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_11007B23; /* 0x11007B21: ja 0x11007b23 */
L_11007B23:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B23: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + edi * 2) = (uint8_t)(MEM8(eax + edi * 2) + LO8(ebx)); /* 0x11007B27: add byte ptr [eax + edi*2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B2B: adc dword ptr [eax], ebp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_11007B2F; /* 0x11007B2D: jbe 0x11007b2f */
L_11007B2F:
    { uint32_t _aa = MEM32(eax), _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B2F: adc dword ptr [eax], ebx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B33; /* 0x11007B31: jp 0x11007b33 */
L_11007B33:
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B33: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007B35: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B38: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007B48u, "hlt ");
    esp = POP32_VAL(esp); /* 0x11007B49: pop esp */
    PUSH32(esp, _seg_es); /* 0x11007B4A: push es */
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4B: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B4F; /* 0x11007B4D: jp 0x11007b4f */
L_11007B4F:
    { uint32_t _aa = esp, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4F: adc esp, ebx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B53; /* 0x11007B51: jp 0x11007b53 */
L_11007B53:
    { uint32_t _aa = MEM32(eax + 0x7A), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B53: adc dword ptr [eax + 0x7a], edx */
      MEM32(eax + 0x7A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B56: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11007B58: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_11007B5B; /* 0x11007B59: jp 0x11007b5b */
L_11007B5B:
    { uint32_t _aa = MEM32(eax + 0x11007A), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B5B: adc dword ptr [eax + 0x11007a], esi */
      MEM32(eax + 0x11007A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B63: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + ebx * 2 + 0x7B0C1106) = (uint8_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106) + HI8(ecx)); /* 0x11007B6F: add byte ptr [ebx + ebx*2 + 0x7b0c1106], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B76: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x11007B84: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11007B86: push es */
    { uint32_t _aa = MEM32(esp + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B87: adc dword ptr [esp + edi*2], eax */
      MEM32(esp + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B8A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007B8C: mov word ptr [esi + eax + 0x11], ds */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007B90: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007B98u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007B3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007B3Cu);

L_11007B3C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B3E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B44: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007B48u, "hlt ");
    esp = POP32_VAL(esp); /* 0x11007B49: pop esp */
    PUSH32(esp, _seg_es); /* 0x11007B4A: push es */
    { uint32_t _aa = esp, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4B: adc esp, ecx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B4F; /* 0x11007B4D: jp 0x11007b4f */
L_11007B4F:
    { uint32_t _aa = esp, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B4F: adc esp, ebx */
      esp = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_P, _cf)) goto L_11007B53; /* 0x11007B51: jp 0x11007b53 */
L_11007B53:
    { uint32_t _aa = MEM32(eax + 0x7A), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B53: adc dword ptr [eax + 0x7a], edx */
      MEM32(eax + 0x7A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B56: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = esp; /* 0x11007B58: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_11007B5B; /* 0x11007B59: jp 0x11007b5b */
L_11007B5B:
    { uint32_t _aa = MEM32(eax + 0x11007A), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B5B: adc dword ptr [eax + 0x11007a], esi */
      MEM32(eax + 0x11007A) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B63: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + ebx * 2 + 0x7B0C1106) = (uint8_t)(MEM8(ebx + ebx * 2 + 0x7B0C1106) + HI8(ecx)); /* 0x11007B6F: add byte ptr [ebx + ebx*2 + 0x7b0c1106], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B76: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x11007B84: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11007B86: push es */
    { uint32_t _aa = MEM32(esp + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B87: adc dword ptr [esp + edi*2], eax */
      MEM32(esp + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B8A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007B8C: mov word ptr [esi + eax + 0x11], ds */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007B90: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007B98u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007B64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007B64u);

L_11007B64:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B64: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B66: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B68: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B6E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x11007B70: lodsb al, byte ptr [esi] */
    ebx = POP32_VAL(esp); /* 0x11007B71: pop ebx */
    PUSH32(esp, _seg_es); /* 0x11007B72: push es */
    { uint32_t _aa = MEM32(ebx + edi * 2), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B73: adc dword ptr [ebx + edi*2], ecx */
      MEM32(ebx + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B76: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x11007B84: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11007B86: push es */
    { uint32_t _aa = MEM32(esp + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B87: adc dword ptr [esp + edi*2], eax */
      MEM32(esp + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B8A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007B8C: mov word ptr [esi + eax + 0x11], ds */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007B90: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007B98u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007B78u);

L_11007B78:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B80: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B82: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x5Cu); /* 0x11007B84: sub al, 0x5c */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_es); /* 0x11007B86: push es */
    { uint32_t _aa = MEM32(esp + edi * 2), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007B87: adc dword ptr [esp + edi*2], eax */
      MEM32(esp + edi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007B8A: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(esi + eax + 0x11) = (uint16_t)(_seg_ds); /* 0x11007B8C: mov word ptr [esi + eax + 0x11], ds */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x11007B90: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007B96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007B98u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007BDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007BDCu);

L_11007BDC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BDC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BE0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BE4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BE6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(ebp + 0x6), _sb = LO8(ebx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007BE8: sbb byte ptr [ebp + 6], bl */
      MEM8(ebp + 0x6) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007BEB: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_11007BEF; /* 0x11007BED: js 0x11007bef */
L_11007BEF:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007BEF: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x5C)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x5C) = (uint8_t)(MEM8(eax + 0x5C) + LO8(ecx)); /* 0x11007BFB: add byte ptr [eax + 0x5c], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x11007BFE: push es */
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007BFF: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_11007C03; /* 0x11007C01: jns 0x11007c03 */
L_11007C03:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C03: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C05: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C07: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C09: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x11007C0B: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = MEM32(esi); _seg_es = MEM16(esi + 4); /* 0x11007C10: les esi, ptr [esi] */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C13: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11007C1F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x11007C21: pop ebx */
    PUSH32(esp, _seg_es); /* 0x11007C22: push es */
    { uint32_t _aa = MEM32(esi + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C23: adc dword ptr [esi + esi*2], esi */
      MEM32(esi + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + edi * 2 + 0x78301100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C27: adc dword ptr [eax + edi*2 + 0x78301100], ecx */
      MEM32(eax + edi * 2 + 0x78301100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007C2E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(edi), HI8(edx) */ /* 0x11007C30: cmp byte ptr [edi], dh */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C33: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C35: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edi * 2) = (uint8_t)(MEM8(esp + edi * 2) + LO8(eax)); /* 0x11007C37: add byte ptr [esp + edi*2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C3B: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007C3D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007C44u, "insb byte ptr es:[edi], dx");
    esi = POP32_VAL(esp); /* 0x11007C45: pop esi */
    PUSH32(esp, _seg_es); /* 0x11007C46: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C47: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C4B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C4D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007C4F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007C51u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007BF0u);

L_11007BF0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BF8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007BFA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11007BFC: dec eax */
    _flag_k = FK_DEC;
    esp = POP32_VAL(esp); /* 0x11007BFD: pop esp */
    PUSH32(esp, _seg_es); /* 0x11007BFE: push es */
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007BFF: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_11007C03; /* 0x11007C01: jns 0x11007c03 */
L_11007C03:
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C03: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C05: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C07: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C09: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x11007C0B: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = MEM32(esi); _seg_es = MEM16(esi + 4); /* 0x11007C10: les esi, ptr [esi] */
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C13: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x11007C1F: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x11007C21: pop ebx */
    PUSH32(esp, _seg_es); /* 0x11007C22: push es */
    { uint32_t _aa = MEM32(esi + esi * 2), _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C23: adc dword ptr [esi + esi*2], esi */
      MEM32(esi + esi * 2) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM32(eax + edi * 2 + 0x78301100), _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C27: adc dword ptr [eax + edi*2 + 0x78301100], ecx */
      MEM32(eax + edi * 2 + 0x78301100) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007C2E: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(edi), HI8(edx) */ /* 0x11007C30: cmp byte ptr [edi], dh */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(eax), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C33: adc dword ptr [eax], eax */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C35: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esp + edi * 2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + edi * 2) = (uint8_t)(MEM8(esp + edi * 2) + LO8(eax)); /* 0x11007C37: add byte ptr [esp + edi*2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C3B: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007C3D: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C40: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C42: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007C44u, "insb byte ptr es:[edi], dx");
    esi = POP32_VAL(esp); /* 0x11007C45: pop esi */
    PUSH32(esp, _seg_es); /* 0x11007C46: push es */
    { uint32_t _aa = MEM32(ecx), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C47: adc dword ptr [ecx], eax */
      MEM32(ecx) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C4B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C4D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007C4F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007C51u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007C14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007C14u);

L_11007C14:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C14: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007C20u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007C70u);

L_11007C70:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C70: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C72: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C74: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C76: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C78: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x11007C7Cu, "insb byte ptr es:[edi], dx");
    esi = POP32_VAL(esp); /* 0x11007C7D: pop esi */
    PUSH32(esp, _seg_es); /* 0x11007C7E: push es */
    { uint32_t _aa = MEM32(eax + 0x7C), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C7F: adc dword ptr [eax + 0x7c], esp */
      MEM32(eax + 0x7C) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007C82: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C84: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x11007C90: push esp */
    PUSH32(esp, ebx); /* 0x11007C91: push ebx */
    PUSH32(esp, _seg_es); /* 0x11007C92: push es */
    { uint32_t _aa = eax, _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007C93: adc eax, esp */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + edi) = (uint8_t)(MEM8(ebx + edi) + LO8(edx)); /* 0x11007C95: add byte ptr [bx + di], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C98: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi + 0x6) = (uint8_t)(LO8(ebx)); /* 0x11007CA4: mov byte ptr [esi + 6], bl */
    { uint32_t _aa = MEM32(eax), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CA7: adc dword ptr [eax], esp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_11007CAB; /* 0x11007CA9: jge 0x11007cab */
L_11007CAB:
    { uint32_t _aa = MEM32(eax + 0x7D), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CAB: adc dword ptr [eax + 0x7d], eax */
      MEM32(eax + 0x7D) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007CAE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebp), HI8(eax) */ /* 0x11007CB0: cmp byte ptr [ebp], ah */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CB3: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007CB5: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); ebp = esp; esp -= 0x65Eu; /* 0x11007CC8: enter 0x65e, 0x11 */
    _flag_a = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24;
    MEM8(ebp) = (uint8_t)(MEM8(ebp) ^ HI8(ebx)); /* 0x11007CCC: xor byte ptr [ebp], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x211065E), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CCF: adc dword ptr [eax + 0x211065e], ebp */
      MEM32(eax + 0x211065E) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007CDB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007CDDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007C98u);

L_11007C98:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C98: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007C9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CA0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CA2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi + 0x6) = (uint8_t)(LO8(ebx)); /* 0x11007CA4: mov byte ptr [esi + 6], bl */
    { uint32_t _aa = MEM32(eax), _ab = esp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CA7: adc dword ptr [eax], esp */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_11007CAB; /* 0x11007CA9: jge 0x11007cab */
L_11007CAB:
    { uint32_t _aa = MEM32(eax + 0x7D), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CAB: adc dword ptr [eax + 0x7d], eax */
      MEM32(eax + 0x7D) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(edx)); /* 0x11007CAE: add byte ptr [ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp MEM8(ebp), HI8(eax) */ /* 0x11007CB0: cmp byte ptr [ebp], ah */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM32(eax), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CB3: adc dword ptr [eax], edx */
      MEM32(eax) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + LO8(edx)); /* 0x11007CB5: add byte ptr gs:[ecx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); ebp = esp; esp -= 0x65Eu; /* 0x11007CC8: enter 0x65e, 0x11 */
    _flag_a = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24;
    MEM8(ebp) = (uint8_t)(MEM8(ebp) ^ HI8(ebx)); /* 0x11007CCC: xor byte ptr [ebp], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x211065E), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CCF: adc dword ptr [eax + 0x211065e], ebp */
      MEM32(eax + 0x211065E) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007CDB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007CDDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11007CBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11007CBCu);

L_11007CBC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CBE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CC6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); ebp = esp; esp -= 0x65Eu; /* 0x11007CC8: enter 0x65e, 0x11 */
    _flag_a = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(ebp) ^ HI8(ebx))) << 24;
    MEM8(ebp) = (uint8_t)(MEM8(ebp) ^ HI8(ebx)); /* 0x11007CCC: xor byte ptr [ebp], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM32(eax + 0x211065E), _ab = ebp, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11007CCF: adc dword ptr [eax + 0x211065e], ebp */
      MEM32(eax + 0x211065E) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11007CD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x11007CDB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x11007CDDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_11008210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008210u);

L_11008210:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008210: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008212: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008214: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008216: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008218: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100821A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1103F663u); /* 0x1100821C: push 0x1103f663 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008221: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008226: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008227: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008218u);

L_11008218:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x11008218: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1100821A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x1103F663u); /* 0x1100821C: push 0x1103f663 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008221: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008226: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008227: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100821C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100821Cu);

L_1100821C:
    PUSH32(esp, 0x1103F663u); /* 0x1100821C: push 0x1103f663 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008221: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008226: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008227: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008228u);

L_11008228:
    PUSH32(esp, 0x1103F658u); /* 0x11008228: push 0x1103f658 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100822D: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008232: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008233: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008234u);

L_11008234:
    PUSH32(esp, 0x1103F64Du); /* 0x11008234: push 0x1103f64d */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008239: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100823E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100823F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008240u);

L_11008240:
    PUSH32(esp, 1); /* 0x11008240: push 1 */
    PUSH32(esp, 0); /* 0x11008242: push 0 */
    PUSH32(esp, 0x11065F18u); /* 0x11008244: push 0x11065f18 */
    ecx = 0x11065F70u; /* 0x11008249: mov ecx, 0x11065f70 */
    RECOMP_CALL(sub_11013BC1); /* 0x1100824E: call 0x11013bc1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F66Eu); /* 0x11008253: push 0x1103f66e */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008258: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100825D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100825E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100825F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100825Fu);

L_1100825F:
    PUSH32(esp, esi); /* 0x1100825F: push esi */
    PUSH32(esp, edi); /* 0x11008260: push edi */
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008261: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    edi = 0x11065F18u; /* 0x11008267: mov edi, 0x11065f18 */
    ecx = edi; /* 0x1100826C: mov ecx, edi */
    esi = eax + 0x40; /* 0x1100826E: lea esi, [eax + 0x40] */
    RECOMP_CALL(sub_11013C28); /* 0x11008271: call 0x11013c28 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11008276: push 0 */
    PUSH32(esp, esi); /* 0x11008278: push esi */
    ecx = edi; /* 0x11008279: mov ecx, edi */
    MEM32(0x11065F18) = 0x11001C7Cu; /* 0x1100827B: mov dword ptr [0x11065f18], 0x11001c7c */
    RECOMP_CALL(sub_11013F0A); /* 0x11008285: call 0x11013f0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F678u); /* 0x1100828A: push 0x1103f678 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100828F: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008294: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008295: pop edi */
    esi = POP32_VAL(esp); /* 0x11008296: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008297: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008298(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008298u);

L_11008298:
    ecx = 0x11065F6Cu; /* 0x11008298: mov ecx, 0x11065f6c */
    goto L_11013C72; /* 0x1100829D: jmp 0x11013c72 */
L_11013C72:
    eax = MEM32(0x11065F70); /* 0x11013C72: mov eax, dword ptr [0x11065f70] */
    PUSH32(esp, esi); /* 0x11013C77: push esi */
    esi = 0x11065F70u; /* 0x11013C78: mov esi, 0x11065f70 */
    MEM32(0x1106629C) = esi; /* 0x11013C7D: mov dword ptr [0x1106629c], esi */
    edx = MEM32(eax + 0x4); /* 0x11013C83: mov edx, dword ptr [eax + 4] */
    eax = MEM32(0x11066298); /* 0x11013C86: mov eax, dword ptr [0x11066298] */
    MEM32(edx + 0x11065FAC) = eax; /* 0x11013C8B: mov dword ptr [edx + 0x11065fac], eax */
    eax = MEM32(0x11065F70); /* 0x11013C91: mov eax, dword ptr [0x11065f70] */
    eax = MEM32(eax + 0x4); /* 0x11013C96: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)((MEM32(eax + esi + 0x14) | 2)); _flag_b = (uint32_t)((MEM32(eax + esi + 0x14) | 2));
    MEM32(eax + esi + 0x14) = MEM32(eax + esi + 0x14) | 2; /* 0x11013C99: or dword ptr [eax + esi + 0x14], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x11013C9E: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x11013CA0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013CA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110082A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110082A2u);

L_110082A2:
    ecx = 0x11065F6Fu; /* 0x110082A2: mov ecx, 0x11065f6f */
    RECOMP_CALL(sub_1102FE53); /* 0x110082A7: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F682u); /* 0x110082AC: push 0x1103f682 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110082B1: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110082B6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110082B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110082B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110082B8u);

L_110082B8:
    PUSH32(esp, 1); /* 0x110082B8: push 1 */
    PUSH32(esp, 0); /* 0x110082BA: push 0 */
    PUSH32(esp, 0x11065FD0u); /* 0x110082BC: push 0x11065fd0 */
    ecx = 0x11066028u; /* 0x110082C1: mov ecx, 0x11066028 */
    RECOMP_CALL(sub_11014A85); /* 0x110082C6: call 0x11014a85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F68Cu); /* 0x110082CB: push 0x1103f68c */
    RECOMP_CALL(sub_1103B2EB); /* 0x110082D0: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110082D5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110082D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110082D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110082D7u);

L_110082D7:
    PUSH32(esp, esi); /* 0x110082D7: push esi */
    PUSH32(esp, edi); /* 0x110082D8: push edi */
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x110082D9: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    edi = 0x11065FD0u; /* 0x110082DF: mov edi, 0x11065fd0 */
    esi = eax; /* 0x110082E4: mov esi, eax */
    ecx = edi; /* 0x110082E6: mov ecx, edi */
    RECOMP_CALL(sub_11013C28); /* 0x110082E8: call 0x11013c28 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110082ED: push 0 */
    PUSH32(esp, esi); /* 0x110082EF: push esi */
    ecx = edi; /* 0x110082F0: mov ecx, edi */
    MEM32(0x11065FD0) = 0x11001C7Cu; /* 0x110082F2: mov dword ptr [0x11065fd0], 0x11001c7c */
    RECOMP_CALL(sub_11013F0A); /* 0x110082FC: call 0x11013f0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F696u); /* 0x11008301: push 0x1103f696 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008306: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100830B: pop ecx */
    edi = POP32_VAL(esp); /* 0x1100830C: pop edi */
    esi = POP32_VAL(esp); /* 0x1100830D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100830E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100830F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100830Fu);

L_1100830F:
    eax = MEM32(0x11066028); /* 0x1100830F: mov eax, dword ptr [0x11066028] */
    MEM32(0x11066294) = 0x11066028u; /* 0x11008314: mov dword ptr [0x11066294], 0x11066028 */
    ecx = MEM32(eax + 0x4); /* 0x1100831E: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x11066298); /* 0x11008321: mov eax, dword ptr [0x11066298] */
    MEM32(ecx + 0x11066064) = eax; /* 0x11008326: mov dword ptr [ecx + 0x11066064], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100832C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100832D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100832Du);

L_1100832D:
    ecx = 0x11066027u; /* 0x1100832D: mov ecx, 0x11066027 */
    RECOMP_CALL(sub_1102FE53); /* 0x11008332: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6A0u); /* 0x11008337: push 0x1103f6a0 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100833C: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008341: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008342: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008343(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008343u);

L_11008343:
    PUSH32(esp, 1); /* 0x11008343: push 1 */
    PUSH32(esp, 0); /* 0x11008345: push 0 */
    PUSH32(esp, 0x11066090u); /* 0x11008347: push 0x11066090 */
    ecx = 0x110660E8u; /* 0x1100834C: mov ecx, 0x110660e8 */
    RECOMP_CALL(sub_11013BC1); /* 0x11008351: call 0x11013bc1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6AAu); /* 0x11008356: push 0x1103f6aa */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100835B: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008360: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008361: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008362(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008362u);

L_11008362:
    PUSH32(esp, esi); /* 0x11008362: push esi */
    PUSH32(esp, edi); /* 0x11008363: push edi */
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008364: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    edi = 0x11066090u; /* 0x1100836A: mov edi, 0x11066090 */
    ecx = edi; /* 0x1100836F: mov ecx, edi */
    esi = eax + 0x40; /* 0x11008371: lea esi, [eax + 0x40] */
    RECOMP_CALL(sub_11013C28); /* 0x11008374: call 0x11013c28 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11008379: push 0 */
    PUSH32(esp, esi); /* 0x1100837B: push esi */
    ecx = edi; /* 0x1100837C: mov ecx, edi */
    MEM32(0x11066090) = 0x11001C7Cu; /* 0x1100837E: mov dword ptr [0x11066090], 0x11001c7c */
    RECOMP_CALL(sub_11013F0A); /* 0x11008388: call 0x11013f0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6B4u); /* 0x1100838D: push 0x1103f6b4 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008392: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008397: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008398: pop edi */
    esi = POP32_VAL(esp); /* 0x11008399: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100839A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100839B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100839Bu);

L_1100839B:
    eax = MEM32(0x110660E8); /* 0x1100839B: mov eax, dword ptr [0x110660e8] */
    MEM32(0x110662A0) = 0x110660E8u; /* 0x110083A0: mov dword ptr [0x110662a0], 0x110660e8 */
    ecx = MEM32(eax + 0x4); /* 0x110083AA: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x11066298); /* 0x110083AD: mov eax, dword ptr [0x11066298] */
    MEM32(ecx + 0x11066124) = eax; /* 0x110083B2: mov dword ptr [ecx + 0x11066124], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110083B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110083B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110083B9u);

L_110083B9:
    ecx = 0x1106608Bu; /* 0x110083B9: mov ecx, 0x1106608b */
    RECOMP_CALL(sub_1102FE53); /* 0x110083BE: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6BEu); /* 0x110083C3: push 0x1103f6be */
    RECOMP_CALL(sub_1103B2EB); /* 0x110083C8: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110083CD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110083CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110083CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110083CFu);

L_110083CF:
    PUSH32(esp, 1); /* 0x110083CF: push 1 */
    PUSH32(esp, 0); /* 0x110083D1: push 0 */
    PUSH32(esp, 0x11066140u); /* 0x110083D3: push 0x11066140 */
    ecx = 0x11066198u; /* 0x110083D8: mov ecx, 0x11066198 */
    RECOMP_CALL(sub_11013BC1); /* 0x110083DD: call 0x11013bc1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6C8u); /* 0x110083E2: push 0x1103f6c8 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110083E7: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110083EC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110083ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_110083EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110083EEu);

L_110083EE:
    PUSH32(esp, esi); /* 0x110083EE: push esi */
    PUSH32(esp, edi); /* 0x110083EF: push edi */
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x110083F0: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    edi = 0x11066140u; /* 0x110083F6: mov edi, 0x11066140 */
    ecx = edi; /* 0x110083FB: mov ecx, edi */
    esi = eax + 0x20; /* 0x110083FD: lea esi, [eax + 0x20] */
    RECOMP_CALL(sub_11013C28); /* 0x11008400: call 0x11013c28 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11008405: push 0 */
    PUSH32(esp, esi); /* 0x11008407: push esi */
    ecx = edi; /* 0x11008408: mov ecx, edi */
    MEM32(0x11066140) = 0x11001C7Cu; /* 0x1100840A: mov dword ptr [0x11066140], 0x11001c7c */
    RECOMP_CALL(sub_11013F0A); /* 0x11008414: call 0x11013f0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6D2u); /* 0x11008419: push 0x1103f6d2 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100841E: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008423: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008424: pop edi */
    esi = POP32_VAL(esp); /* 0x11008425: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008426: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008427u);

L_11008427:
    ecx = 0x11066138u; /* 0x11008427: mov ecx, 0x11066138 */
    goto L_11014B41; /* 0x1100842C: jmp 0x11014b41 */
L_11014B41:
    PUSH32(esp, esi); /* 0x11014B41: push esi */
    esi = MEM32(0x11066294); /* 0x11014B42: mov esi, dword ptr [0x11066294] */
    edx = 0x11066198u; /* 0x11014B48: mov edx, 0x11066198 */
    MEM32(0x11066298) = edx; /* 0x11014B4D: mov dword ptr [0x11066298], edx */
    PUSH32(esp, edi); /* 0x11014B53: push edi */
    edi = ecx; /* 0x11014B54: mov edi, ecx */
    /* test esi, esi */ /* 0x11014B56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014B69; /* 0x11014B58: je 0x11014b69 */
L_11014B5A:
    eax = MEM32(esi); /* 0x11014B5A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11014B5C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x3C) = edx; /* 0x11014B5F: mov dword ptr [eax + esi + 0x3c], edx */
    edx = MEM32(0x11066298); /* 0x11014B63: mov edx, dword ptr [0x11066298] */
L_11014B69:
    ecx = MEM32(0x1106629C); /* 0x11014B69: mov ecx, dword ptr [0x1106629c] */
    /* test ecx, ecx */ /* 0x11014B6F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014B82; /* 0x11014B71: je 0x11014b82 */
L_11014B73:
    eax = MEM32(ecx); /* 0x11014B73: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11014B75: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x11014B78: mov dword ptr [eax + ecx + 0x3c], edx */
    edx = MEM32(0x11066298); /* 0x11014B7C: mov edx, dword ptr [0x11066298] */
L_11014B82:
    ecx = MEM32(0x110662A0); /* 0x11014B82: mov ecx, dword ptr [0x110662a0] */
    /* test ecx, ecx */ /* 0x11014B88: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014B95; /* 0x11014B8A: je 0x11014b95 */
L_11014B8C:
    eax = MEM32(ecx); /* 0x11014B8C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x11014B8E: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x11014B91: mov dword ptr [eax + ecx + 0x3c], edx */
L_11014B95:
    eax = edi; /* 0x11014B95: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11014B97: pop edi */
    esi = POP32_VAL(esp); /* 0x11014B98: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014B99: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008431(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008431u);

L_11008431:
    ecx = 0x1106613Bu; /* 0x11008431: mov ecx, 0x1106613b */
    RECOMP_CALL(sub_1102FE53); /* 0x11008436: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6DCu); /* 0x1100843B: push 0x1103f6dc */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008440: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008445: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008446: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008447(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008447u);

L_11008447:
    PUSH32(esp, 0x1103F6E6u); /* 0x11008447: push 0x1103f6e6 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100844C: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008451: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008452: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008453u);

L_11008453:
    PUSH32(esp, 0x1103F6F1u); /* 0x11008453: push 0x1103f6f1 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008458: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100845D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100845E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100845F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100845Fu);

L_1100845F:
    ecx = 0x110662DCu; /* 0x1100845F: mov ecx, 0x110662dc */
    RECOMP_CALL(sub_1102FE53); /* 0x11008464: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F6FBu); /* 0x11008469: push 0x1103f6fb */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100846E: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008473: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008474: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008475(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008475u);

L_11008475:
    ecx = 0x110662F3u; /* 0x11008475: mov ecx, 0x110662f3 */
    goto L_1102CB03; /* 0x1100847A: jmp 0x1102cb03 */
L_1102CB03:
    eax = MEM32(0x11066350); /* 0x1102CB03: mov eax, dword ptr [0x11066350] */
    PUSH32(esp, esi); /* 0x1102CB08: push esi */
    esi = 0x11066350u; /* 0x1102CB09: mov esi, 0x11066350 */
    MEM32(0x110665CC) = esi; /* 0x1102CB0E: mov dword ptr [0x110665cc], esi */
    edx = MEM32(eax + 0x4); /* 0x1102CB14: mov edx, dword ptr [eax + 4] */
    eax = MEM32(0x110665C8); /* 0x1102CB17: mov eax, dword ptr [0x110665c8] */
    MEM32(edx + 0x1106638C) = eax; /* 0x1102CB1C: mov dword ptr [edx + 0x1106638c], eax */
    eax = MEM32(0x11066350); /* 0x1102CB22: mov eax, dword ptr [0x11066350] */
    eax = MEM32(eax + 0x4); /* 0x1102CB27: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)((MEM32(eax + esi + 0x14) | 2)); _flag_b = (uint32_t)((MEM32(eax + esi + 0x14) | 2));
    MEM32(eax + esi + 0x14) = MEM32(eax + esi + 0x14) | 2; /* 0x1102CB2A: or dword ptr [eax + esi + 0x14], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1102CB2F: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1102CB31: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102CB32: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100847F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100847Fu);

L_1100847F:
    ecx = 0x110662F2u; /* 0x1100847F: mov ecx, 0x110662f2 */
    RECOMP_CALL(sub_1102FE53); /* 0x11008484: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F705u); /* 0x11008489: push 0x1103f705 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100848E: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008493: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008494: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008495(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008495u);

L_11008495:
    PUSH32(esp, 1); /* 0x11008495: push 1 */
    PUSH32(esp, 0); /* 0x11008497: push 0 */
    PUSH32(esp, 0x110662F8u); /* 0x11008499: push 0x110662f8 */
    ecx = 0x11066350u; /* 0x1100849E: mov ecx, 0x11066350 */
    RECOMP_CALL(sub_11016854); /* 0x110084A3: call 0x11016854 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F70Fu); /* 0x110084A8: push 0x1103f70f */
    RECOMP_CALL(sub_1103B2EB); /* 0x110084AD: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110084B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110084B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110084B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110084B4u);

L_110084B4:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x110084B4: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x110084BA: add eax, 0x40 */
    _flag_k = FK_ADD;
    ecx = 0x110662F8u; /* 0x110084BD: mov ecx, 0x110662f8 */
    PUSH32(esp, eax); /* 0x110084C2: push eax */
    RECOMP_CALL(sub_1102CACA); /* 0x110084C3: call 0x1102caca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F719u); /* 0x110084C8: push 0x1103f719 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110084CD: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110084D2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110084D3: ret  */
    RECOMP_REGS_OUT();
}
