#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1503C9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503C9FEu);

L_1503C9FE:
    edi = edi; /* 0x1503C9FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CA00: push ebp */
    ebp = esp; /* 0x1503CA01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CA03: push esi */
    esi = ecx; /* 0x1503CA04: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503CA06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1503CA08: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x1503CA0B: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1503CA12: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x1503CA14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CA2C; /* 0x1503CA16: je 0x1503ca2c */
L_1503CA18:
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x1503CA18: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CA23; /* 0x1503CA1A: je 0x1503ca23 */
L_1503CA1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503CA1C: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + ecx), 0 */ /* 0x1503CA1D: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CA1C; /* 0x1503CA21: jne 0x1503ca1c */
L_1503CA23:
    PUSH32(esp, eax); /* 0x1503CA23: push eax */
    PUSH32(esp, ecx); /* 0x1503CA24: push ecx */
    ecx = esi; /* 0x1503CA25: mov ecx, esi */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503CA27: call 0x1503df5b */
    RECOMP_FLAGS_IN();
L_1503CA2C:
    eax = esi; /* 0x1503CA2C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CA2E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CA2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CA30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CA39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CA39u);

L_1503CA39:
    edi = edi; /* 0x1503CA39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CA3B: push ebp */
    ebp = esp; /* 0x1503CA3C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CA3E: push esi */
    PUSH32(esp, edi); /* 0x1503CA3F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503CA40: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503CA43: mov esi, ecx */
    /* cmp edi, 1 */ /* 0x1503CA45: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CA53; /* 0x1503CA48: je 0x1503ca53 */
L_1503CA4A:
    /* cmp edi, 3 */ /* 0x1503CA4A: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CA53; /* 0x1503CA4D: je 0x1503ca53 */
L_1503CA4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503CA4F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503CA55; /* 0x1503CA51: jmp 0x1503ca55 */
L_1503CA53:
    ecx = edi; /* 0x1503CA53: mov ecx, edi */
L_1503CA55:
    eax = MEM32(esi + 0x4); /* 0x1503CA55: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CA58: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503CA5A: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CA5D: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x150BDB20u; /* 0x1503CA5F: mov ecx, 0x150bdb20 */
    PUSH32(esp, 0); /* 0x1503CA64: push 0 */
    PUSH32(esp, 0x10u); /* 0x1503CA66: push 0x10 */
    MEM32(esi + 0x4) = eax; /* 0x1503CA68: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503CA6B: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503CA70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CA91; /* 0x1503CA72: je 0x1503ca91 */
L_1503CA74:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1503CA74: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503CA78: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1503CA7A: push 4 */
    /* cmp edi, 2 */ /* 0x1503CA7C: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = 0x150011E8u; /* 0x1503CA7F: mov dword ptr [eax], 0x150011e8 */
    edx = POP32_VAL(esp); /* 0x1503CA85: pop edx */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503CA86: cmove ecx, edx */
    MEM32(eax + 0x8) = edi; /* 0x1503CA89: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = ecx; /* 0x1503CA8C: mov dword ptr [eax + 0xc], ecx */
    goto L_1503CA93; /* 0x1503CA8F: jmp 0x1503ca93 */
L_1503CA91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503CA91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503CA93:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF00Fu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF00Fu; /* 0x1503CA93: and dword ptr [esi + 4], 0xfffff00f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x1503CA9A: mov ecx, dword ptr [esi + 4] */
    MEM32(esi) = eax; /* 0x1503CA9D: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503CA9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CAAC; /* 0x1503CAA1: jne 0x1503caac */
L_1503CAA3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF3u);
    ecx = ecx & 0xFFFFFFF3u; /* 0x1503CAA3: and ecx, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 3)); _flag_b = (uint32_t)((ecx | 3));
    ecx = ecx | 3; /* 0x1503CAA6: or ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x1503CAA9: mov dword ptr [esi + 4], ecx */
L_1503CAAC:
    edi = POP32_VAL(esp); /* 0x1503CAAC: pop edi */
    eax = esi; /* 0x1503CAAD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CAAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CAB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CAB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CABA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CABAu);

L_1503CABA:
    edi = edi; /* 0x1503CABA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CABC: push ebp */
    ebp = esp; /* 0x1503CABD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1503CABF: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503CAC2: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503CAC7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503CAC9: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1503CACC: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x1503CACF: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503CAD1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1503CAD3: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, esi); /* 0x1503CAD6: push esi */
    PUSH32(esp, edi); /* 0x1503CAD7: push edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFF000u; /* 0x1503CAD8: and dword ptr [eax + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x7); /* 0x1503CADF: lea esi, [ebp - 7] */
    edi = MEM32(ebp + 0x8); /* 0x1503CAE2: mov edi, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1503CAE5: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x1503CAE7: mov byte ptr [ebp - 7], cl */
    MEM8(ebp + (-0x1D)) = (uint8_t)(LO8(ecx)); /* 0x1503CAEA: mov byte ptr [ebp - 0x1d], cl */
    /* cmp edx, ecx */ /* 0x1503CAED: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503CB01; /* 0x1503CAEF: jg 0x1503cb01 */
L_1503CAF1:
    if (CMP_L(_flag_a, _flag_b)) goto L_1503CAF7; /* 0x1503CAF1: jl 0x1503caf7 */
L_1503CAF3:
    /* cmp edi, ecx */ /* 0x1503CAF3: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503CB01; /* 0x1503CAF5: jae 0x1503cb01 */
L_1503CAF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1503CAF7: neg edi */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1D)) = (uint8_t)(1); /* 0x1503CAF9: mov byte ptr [ebp - 0x1d], 1 */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503CAFD: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1503CAFF: neg edx */
    _flag_k = FK_CMP;
L_1503CB01:
    PUSH32(esp, ebx); /* 0x1503CB01: push ebx */
L_1503CB02:
    PUSH32(esp, ebx); /* 0x1503CB02: push ebx */
    PUSH32(esp, ecx); /* 0x1503CB03: push ecx */
    PUSH32(esp, 0xAu); /* 0x1503CB04: push 0xa */
    PUSH32(esp, edx); /* 0x1503CB06: push edx */
    PUSH32(esp, edi); /* 0x1503CB07: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503CB08: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_15049240); /* 0x1503CB09: call 0x15049240 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1503CB0E: pop ebx */
    /* nop */ /* 0x1503CB0F: nop  */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1503CB10: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = eax; /* 0x1503CB13: mov edi, eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1503CB15: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1503CB17: mov byte ptr [esi], cl */
    PUSH32(esp, 0); /* 0x1503CB19: push 0 */
    ecx = POP32_VAL(esp); /* 0x1503CB1B: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CB02; /* 0x1503CB1C: jne 0x1503cb02 */
L_1503CB1E:
    ebx = POP32_VAL(esp); /* 0x1503CB1E: pop ebx */
    /* cmp MEM8(ebp + (-0x1D)), LO8(ecx) */ /* 0x1503CB1F: cmp byte ptr [ebp - 0x1d], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1D))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CB28; /* 0x1503CB22: je 0x1503cb28 */
L_1503CB24:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503CB24: dec esi */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1503CB25: mov byte ptr [esi], 0x2d */
L_1503CB28:
    ecx = ebp + (-0x7); /* 0x1503CB28: lea ecx, [ebp - 7] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1503CB2B: sub ecx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1503CB2D: push ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1503CB2E: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1503CB31: push esi */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503CB32: call 0x1503df5b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1503CB37: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x24)); /* 0x1503CB3A: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1503CB3D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1503CB3F: pop edi */
    esi = POP32_VAL(esp); /* 0x1503CB40: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1503CB41: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503CB46: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503CB47: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503CB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CB50u);

L_1503CB50:
    edi = edi; /* 0x1503CB50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CB52: push ebp */
    ebp = esp; /* 0x1503CB53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1503CB55: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503CB58: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503CB5D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503CB5F: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1503CB62: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1503CB65: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503CB66: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503CB69: push esi */
    esi = ecx; /* 0x1503CB6A: mov esi, ecx */
    MEM8(ebp + (-0x8)) = (uint8_t)(0); /* 0x1503CB6C: mov byte ptr [ebp - 8], 0 */
    PUSH32(esp, edi); /* 0x1503CB70: push edi */
    edi = ebp + (-0x8); /* 0x1503CB71: lea edi, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503CB74: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x1503CB77: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503CB7E:
    PUSH32(esp, ebx); /* 0x1503CB7E: push ebx */
    PUSH32(esp, 0); /* 0x1503CB7F: push 0 */
    PUSH32(esp, 0xAu); /* 0x1503CB81: push 0xa */
    PUSH32(esp, edx); /* 0x1503CB83: push edx */
    PUSH32(esp, ebx); /* 0x1503CB84: push ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1503CB85: dec edi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_15049240); /* 0x1503CB86: call 0x15049240 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1503CB8B: pop ebx */
    /* nop */ /* 0x1503CB8C: nop  */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1503CB8D: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = eax; /* 0x1503CB90: mov ebx, eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1503CB92: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1503CB94: mov byte ptr [edi], cl */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CB7E; /* 0x1503CB96: jne 0x1503cb7e */
L_1503CB98:
    ecx = ebp + (-0x8); /* 0x1503CB98: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1503CB9B: sub ecx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1503CB9D: push ecx */
    PUSH32(esp, edi); /* 0x1503CB9E: push edi */
    ecx = esi; /* 0x1503CB9F: mov ecx, esi */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503CBA1: call 0x1503df5b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1503CBA6: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x1503CBA9: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x1503CBAB: pop edi */
    esi = POP32_VAL(esp); /* 0x1503CBAC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1503CBAD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1503CBAF: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1503CBB0: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503CBB5: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503CBB6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503CBBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CBBFu);

L_1503CBBF:
    edi = edi; /* 0x1503CBBF: mov edi, edi */
    PUSH32(esp, esi); /* 0x1503CBC1: push esi */
    esi = ecx; /* 0x1503CBC2: mov esi, ecx */
    PUSH32(esp, 3); /* 0x1503CBC4: push 3 */
    ecx = esi + 0x2C; /* 0x1503CBC6: lea ecx, [esi + 0x2c] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503CBC9: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1503CBCE: push 1 */
    ecx = esi + 0x34; /* 0x1503CBD0: lea ecx, [esi + 0x34] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503CBD3: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1503CBD8: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1503CBDB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CBDD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503CBDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503CBE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CBE5u);

L_1503CBE5:
    edi = edi; /* 0x1503CBE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CBE7: push ebp */
    ebp = esp; /* 0x1503CBE8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CBEA: push esi */
    PUSH32(esp, edi); /* 0x1503CBEB: push edi */
    edi = ecx; /* 0x1503CBEC: mov edi, ecx */
    RECOMP_CALL(sub_1503CBBF); /* 0x1503CBEE: call 0x1503cbbf */
    RECOMP_FLAGS_IN();
    esi = edi + 0x3C; /* 0x1503CBF3: lea esi, [edi + 0x3c] */
    ecx = esi; /* 0x1503CBF6: mov ecx, esi */
    RECOMP_CALL(sub_1503CBBF); /* 0x1503CBF8: call 0x1503cbbf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1503CBFD: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1503CC00: mov edx, dword ptr [ebp + 8] */
    ecx = edx; /* 0x1503CC03: mov ecx, edx */
    MEM32(0x150BDB40) = eax; /* 0x1503CC05: mov dword ptr [0x150bdb40], eax */
    MEM32(0x150BDB3C) = eax; /* 0x1503CC0A: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1503CC0F: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503CC12: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDB1C) = edi; /* 0x1503CC13: mov dword ptr [0x150bdb1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503CC19: neg ecx */
    _flag_k = FK_CMP;
    MEM32(0x150BDB34) = esi; /* 0x1503CC1B: mov dword ptr [0x150bdb34], esi */
    MEM32(0x150BDB44) = edx; /* 0x1503CC21: mov dword ptr [0x150bdb44], edx */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503CC27: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM8(0x150BDB50) = (uint8_t)(0); /* 0x1503CC29: mov byte ptr [0x150bdb50], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1503CC30: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x1503CC32: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x150BDB4C) = eax; /* 0x1503CC35: mov dword ptr [0x150bdb4c], eax */
    eax = MEM32(ebp + 0x14); /* 0x1503CC3A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(0x150BDB54) = eax; /* 0x1503CC3D: mov dword ptr [0x150bdb54], eax */
    eax = edi; /* 0x1503CC42: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1503CC44: pop edi */
    MEM32(0x150BDB48) = ecx; /* 0x1503CC45: mov dword ptr [0x150bdb48], ecx */
    esi = POP32_VAL(esp); /* 0x1503CC4B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CC4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1503CC4D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1503CC56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CC56u);

L_1503CC56:
    edi = edi; /* 0x1503CC56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CC58: push ebp */
    ebp = esp; /* 0x1503CC59: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CC5B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503CC5C: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503CC5F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = edx; /* 0x1503CC61: mov dword ptr [ecx + 4], edx */
    MEM32(ecx) = 0x150011D8u; /* 0x1503CC64: mov dword ptr [ecx], 0x150011d8 */
    /* test esi, esi */ /* 0x1503CC6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CC81; /* 0x1503CC6C: je 0x1503cc81 */
L_1503CC6E:
    eax = MEM32(esi + 0x4); /* 0x1503CC6E: mov eax, dword ptr [esi + 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503CC71: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503CC71: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503CC74: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* cmp eax, 1 */ /* 0x1503CC77: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CC83; /* 0x1503CC7A: je 0x1503cc83 */
L_1503CC7C:
    /* cmp eax, 3 */ /* 0x1503CC7C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CC83; /* 0x1503CC7F: je 0x1503cc83 */
L_1503CC81:
    edx = esi; /* 0x1503CC81: mov edx, esi */
L_1503CC83:
    MEM32(ecx + 0x8) = edx; /* 0x1503CC83: mov dword ptr [ecx + 8], edx */
    eax = ecx; /* 0x1503CC86: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1503CC88: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CC89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CC8A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CC93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CC93u);

L_1503CC93:
    edi = edi; /* 0x1503CC93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CC95: push ebp */
    ebp = esp; /* 0x1503CC96: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503CC98: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503CC99: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503CC9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503CC9E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503CC9F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503CCA2: push edi */
    edi = ecx; /* 0x1503CCA3: mov edi, ecx */
    MEM32(edi + 0x4) = eax; /* 0x1503CCA5: mov dword ptr [edi + 4], eax */
    MEM32(edi) = 0x150011C8u; /* 0x1503CCA8: mov dword ptr [edi], 0x150011c8 */
    /* test esi, esi */ /* 0x1503CCAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CCC6; /* 0x1503CCB0: jne 0x1503ccc6 */
L_1503CCB2:
    /* test ebx, ebx */ /* 0x1503CCB2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CCED; /* 0x1503CCB4: je 0x1503cced */
L_1503CCB6:
    esi = eax; /* 0x1503CCB6: mov esi, eax */
    /* cmp MEM8(ebx), LO8(eax) */ /* 0x1503CCB8: cmp byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CCC2; /* 0x1503CCBA: je 0x1503ccc2 */
L_1503CCBC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503CCBC: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + ebx), LO8(eax) */ /* 0x1503CCBD: cmp byte ptr [esi + ebx], al */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CCBC; /* 0x1503CCC0: jne 0x1503ccbc */
L_1503CCC2:
    /* test esi, esi */ /* 0x1503CCC2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CCED; /* 0x1503CCC4: je 0x1503cced */
L_1503CCC6:
    /* test ebx, ebx */ /* 0x1503CCC6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CCED; /* 0x1503CCC8: je 0x1503cced */
L_1503CCCA:
    PUSH32(esp, eax); /* 0x1503CCCA: push eax */
    PUSH32(esp, esi); /* 0x1503CCCB: push esi */
    ecx = 0x150BDB20u; /* 0x1503CCCC: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503CCD1: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x1503CCD6: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = esi; /* 0x1503CCD9: mov dword ptr [edi + 0xc], esi */
    /* test eax, eax */ /* 0x1503CCDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CCF3; /* 0x1503CCDE: je 0x1503ccf3 */
L_1503CCE0:
    PUSH32(esp, esi); /* 0x1503CCE0: push esi */
    PUSH32(esp, ebx); /* 0x1503CCE1: push ebx */
    PUSH32(esp, eax); /* 0x1503CCE2: push eax */
    RECOMP_CALL(sub_15041B3D); /* 0x1503CCE3: call 0x15041b3d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503CCE8: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503CCF3; /* 0x1503CCEB: jmp 0x1503ccf3 */
L_1503CCED:
    MEM32(edi + 0x8) = eax; /* 0x1503CCED: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x1503CCF0: mov dword ptr [edi + 0xc], eax */
L_1503CCF3:
    eax = edi; /* 0x1503CCF3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1503CCF5: pop edi */
    esi = POP32_VAL(esp); /* 0x1503CCF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503CCF7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503CCF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503CCF9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503CD02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CD02u);

L_1503CD02:
    edi = edi; /* 0x1503CD02: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CD04: push ebp */
    ebp = esp; /* 0x1503CD05: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1503CD07: push edi */
    edi = ecx; /* 0x1503CD08: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x1503CD0A: mov eax, dword ptr [edi + 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503CD0D: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503CD0D: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503CD10: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* test eax, eax */ /* 0x1503CD13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CD1C; /* 0x1503CD15: je 0x1503cd1c */
L_1503CD17:
    /* cmp eax, 2 */ /* 0x1503CD17: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CD7A; /* 0x1503CD1A: jne 0x1503cd7a */
L_1503CD1C:
    PUSH32(esp, esi); /* 0x1503CD1C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503CD1D: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1503CD20: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x4)));
    eax = eax ^ MEM32(edi + 0x4); /* 0x1503CD23: xor eax, dword ptr [edi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503CD26: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x4)));
    eax = eax ^ MEM32(esi + 0x4); /* 0x1503CD29: xor eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503CD2C: mov dword ptr [edi + 4], eax */
    ecx = MEM32(esi + 0x4); /* 0x1503CD2F: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503CD32: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x1503CD34: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1503CD37: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x1503CD39: mov dword ptr [edi + 4], ecx */
    eax = MEM32(esi + 0x4); /* 0x1503CD3C: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CD3F: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x1503CD41: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CD44: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503CD46: mov dword ptr [edi + 4], eax */
    edx = MEM32(esi + 0x4); /* 0x1503CD49: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1503CD4C: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    edx = edx & 0x40u; /* 0x1503CD4E: and edx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1503CD51: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = edx; /* 0x1503CD53: mov dword ptr [edi + 4], edx */
    ecx = MEM32(esi + 0x4); /* 0x1503CD56: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1503CD59: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    ecx = ecx & 0x80u; /* 0x1503CD5B: and ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1503CD61: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x1503CD63: mov dword ptr [edi + 4], ecx */
    eax = MEM32(esi + 0x4); /* 0x1503CD66: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CD69: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x1503CD6B: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1503CD70: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1503CD72: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi); /* 0x1503CD75: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1503CD77: mov dword ptr [edi], eax */
    esi = POP32_VAL(esp); /* 0x1503CD79: pop esi */
L_1503CD7A:
    eax = edi; /* 0x1503CD7A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1503CD7C: pop edi */
    ebp = POP32_VAL(esp); /* 0x1503CD7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CD7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CD87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CD87u);

L_1503CD87:
    edi = edi; /* 0x1503CD87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CD89: push ebp */
    ebp = esp; /* 0x1503CD8A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CD8C: push esi */
    esi = ecx; /* 0x1503CD8D: mov esi, ecx */
    eax = ebp + 0x8; /* 0x1503CD8F: lea eax, [ebp + 8] */
    PUSH32(esp, 1); /* 0x1503CD92: push 1 */
    PUSH32(esp, eax); /* 0x1503CD94: push eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF70Fu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF70Fu; /* 0x1503CD95: and dword ptr [esi + 4], 0xfffff70f */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1503DF5B); /* 0x1503CD9C: call 0x1503df5b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1503CDA1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CDA3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CDA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CDA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CDAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CDAEu);

L_1503CDAE:
    edi = edi; /* 0x1503CDAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CDB0: push ebp */
    ebp = esp; /* 0x1503CDB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CDB3: push esi */
    esi = ecx; /* 0x1503CDB4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503CDB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1503CDB8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF70Fu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF70Fu; /* 0x1503CDBB: and dword ptr [esi + 4], 0xfffff70f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x1503CDC2: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CDCD; /* 0x1503CDC4: je 0x1503cdcd */
L_1503CDC6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503CDC6: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + ecx), 0 */ /* 0x1503CDC7: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CDC6; /* 0x1503CDCB: jne 0x1503cdc6 */
L_1503CDCD:
    PUSH32(esp, eax); /* 0x1503CDCD: push eax */
    PUSH32(esp, ecx); /* 0x1503CDCE: push ecx */
    ecx = esi; /* 0x1503CDCF: mov ecx, esi */
    RECOMP_CALL(sub_1503DF5B); /* 0x1503CDD1: call 0x1503df5b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1503CDD6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CDD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CDD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CDDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CDE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CDE3u);

L_1503CDE3:
    edi = edi; /* 0x1503CDE3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CDE5: push ebp */
    ebp = esp; /* 0x1503CDE6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503CDE8: push esi */
    PUSH32(esp, edi); /* 0x1503CDE9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503CDEA: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503CDED: mov esi, ecx */
    /* cmp edi, 1 */ /* 0x1503CDEF: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CE58; /* 0x1503CDF2: je 0x1503ce58 */
L_1503CDF4:
    /* cmp edi, 3 */ /* 0x1503CDF4: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CE58; /* 0x1503CDF7: je 0x1503ce58 */
L_1503CDF9:
    ecx = MEM32(esi + 0x4); /* 0x1503CDF9: mov ecx, dword ptr [esi + 4] */
    eax = ecx; /* 0x1503CDFC: mov eax, ecx */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503CDFE: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503CDFE: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503CE01: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* test eax, eax */ /* 0x1503CE04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CE0D; /* 0x1503CE06: je 0x1503ce0d */
L_1503CE08:
    /* cmp eax, 2 */ /* 0x1503CE08: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CE71; /* 0x1503CE0B: jne 0x1503ce71 */
L_1503CE0D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF70Fu);
    ecx = ecx & 0xFFFFF70Fu; /* 0x1503CE0D: and ecx, 0xfffff70f */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1503CE13: push 0 */
    MEM32(esi + 0x4) = ecx; /* 0x1503CE15: mov dword ptr [esi + 4], ecx */
    ecx = 0x150BDB20u; /* 0x1503CE18: mov ecx, 0x150bdb20 */
    PUSH32(esp, 0x10u); /* 0x1503CE1D: push 0x10 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503CE1F: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503CE24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CE47; /* 0x1503CE26: je 0x1503ce47 */
L_1503CE28:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1503CE28: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503CE2C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1503CE2E: push 4 */
    /* cmp edi, 2 */ /* 0x1503CE30: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = 0x150011E8u; /* 0x1503CE33: mov dword ptr [eax], 0x150011e8 */
    edx = POP32_VAL(esp); /* 0x1503CE39: pop edx */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503CE3A: cmove ecx, edx */
    MEM32(eax + 0x8) = edi; /* 0x1503CE3D: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = ecx; /* 0x1503CE40: mov dword ptr [eax + 0xc], ecx */
    MEM32(esi) = eax; /* 0x1503CE43: mov dword ptr [esi], eax */
    goto L_1503CE71; /* 0x1503CE45: jmp 0x1503ce71 */
L_1503CE47:
    eax = MEM32(esi + 0x4); /* 0x1503CE47: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503CE4A: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503CE4D: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503CE50: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503CE53: mov dword ptr [esi + 4], eax */
    goto L_1503CE71; /* 0x1503CE56: jmp 0x1503ce71 */
L_1503CE58:
    ecx = MEM32(esi + 0x4); /* 0x1503CE58: mov ecx, dword ptr [esi + 4] */
    eax = ecx; /* 0x1503CE5B: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503CE5D: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1503CE60: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 3 */ /* 0x1503CE63: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CE71; /* 0x1503CE65: je 0x1503ce71 */
L_1503CE67:
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x1503CE67: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ecx = ecx & 0xFFFFFFF0u; /* 0x1503CE69: and ecx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x1503CE6C: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x1503CE6E: mov dword ptr [esi + 4], ecx */
L_1503CE71:
    edi = POP32_VAL(esp); /* 0x1503CE71: pop edi */
    eax = esi; /* 0x1503CE72: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503CE74: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503CE75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CE76: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CE7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CE7Fu);

L_1503CE7F:
    edi = edi; /* 0x1503CE7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CE81: push ebp */
    ebp = esp; /* 0x1503CE82: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1503CE84: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 9 */ /* 0x1503CE87: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503CEA0; /* 0x1503CE8A: ja 0x1503cea0 */
L_1503CE8C:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x1503CE8C: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CE9B; /* 0x1503CE8F: je 0x1503ce9b */
L_1503CE91:
    /* cmp eax, MEM32(ecx) */ /* 0x1503CE91: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503CE9B; /* 0x1503CE93: jg 0x1503ce9b */
L_1503CE95:
    eax = MEM32(ecx + eax * 4 + 0x4); /* 0x1503CE95: mov eax, dword ptr [ecx + eax*4 + 4] */
    goto L_1503CEA3; /* 0x1503CE99: jmp 0x1503cea3 */
L_1503CE9B:
    eax = ecx + 0x34; /* 0x1503CE9B: lea eax, [ecx + 0x34] */
    goto L_1503CEA3; /* 0x1503CE9E: jmp 0x1503cea3 */
L_1503CEA0:
    eax = ecx + 0x2C; /* 0x1503CEA0: lea eax, [ecx + 0x2c] */
L_1503CEA3:
    ebp = POP32_VAL(esp); /* 0x1503CEA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503CEA4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503CEAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503CEADu);

L_1503CEAD:
    edi = edi; /* 0x1503CEAD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503CEAF: push ebp */
    ebp = esp; /* 0x1503CEB0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1503CEB2: sub esp, 0x28 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503CEB5: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFF000u; /* 0x1503CEB9: mov eax, 0xfffff000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1503CEBE: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1503CEC1: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1503CEC4: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BDB40); /* 0x1503CEC8: mov eax, dword ptr [0x150bdb40] */
    PUSH32(esp, esi); /* 0x1503CECD: push esi */
    /* test eax, eax */ /* 0x1503CECE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503CF58; /* 0x1503CED0: je 0x1503cf58 */
L_1503CED6:
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1503CED6: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF45; /* 0x1503CED9: jne 0x1503cf45 */
L_1503CEDB:
    SET_LO8(eax, MEM8(eax + 0x1)); /* 0x1503CEDB: mov al, byte ptr [eax + 1] */
    /* cmp LO8(eax), 0x40u */ /* 0x1503CEDE: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF14; /* 0x1503CEE0: jne 0x1503cf14 */
L_1503CEE2:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 2; /* 0x1503CEE2: add dword ptr [0x150bdb3c], 2 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x20); /* 0x1503CEE9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503CEEC: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x1503CEED: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503CEF2: lea ecx, [ebp - 0x28] */
    MEM32(esp) = 0x15004550u; /* 0x1503CEF5: mov dword ptr [esp], 0x15004550 */
    esi = eax; /* 0x1503CEFC: mov esi, eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503CEFE: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503CF03: push esi */
    ecx = ebp + (-0x18); /* 0x1503CF04: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503CF07: push ecx */
    ecx = eax; /* 0x1503CF08: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503CF0A: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1503CF0F: lea eax, [ebp - 0x18] */
    goto L_1503CF4F; /* 0x1503CF12: jmp 0x1503cf4f */
L_1503CF14:
    /* cmp LO8(eax), 0x24u */ /* 0x1503CF14: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF45; /* 0x1503CF16: jne 0x1503cf45 */
L_1503CF18:
    eax = ebp + (-0x28); /* 0x1503CF18: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1503CF1B: push 0 */
    PUSH32(esp, eax); /* 0x1503CF1D: push eax */
    RECOMP_CALL(sub_150410B2); /* 0x1503CF1E: call 0x150410b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503CF23: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503CF24: pop ecx */
    PUSH32(esp, eax); /* 0x1503CF25: push eax */
    ecx = ebp + (-0x8); /* 0x1503CF26: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503CF29: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1503CF2E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x1503CF31: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 1 */ /* 0x1503CF33: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF58; /* 0x1503CF35: jne 0x1503cf58 */
L_1503CF37:
    eax = MEM32(0x150BDB40); /* 0x1503CF37: mov eax, dword ptr [0x150bdb40] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFFFF0u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFFFF0u; /* 0x1503CF3C: and dword ptr [ebp - 4], 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = eax; /* 0x1503CF40: mov dword ptr [0x150bdb3c], eax */
L_1503CF45:
    eax = ebp + (-0x28); /* 0x1503CF45: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503CF48: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x1503CF49: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503CF4E: pop ecx */
L_1503CF4F:
    PUSH32(esp, eax); /* 0x1503CF4F: push eax */
    ecx = ebp + (-0x8); /* 0x1503CF50: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503CF53: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503CF58:
    eax = MEM32(ebp + (-0x4)); /* 0x1503CF58: mov eax, dword ptr [ebp - 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503CF5B: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503CF5B: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503CF5E: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* cmp eax, 3 */ /* 0x1503CF61: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF6D; /* 0x1503CF64: jne 0x1503cf6d */
L_1503CF66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503CF66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503D013; /* 0x1503CF68: jmp 0x1503d013 */
L_1503CF6D:
    /* cmp eax, 1 */ /* 0x1503CF6D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CF96; /* 0x1503CF70: je 0x1503cf96 */
L_1503CF72:
    /* test MEM32(0x150BDB4C), 0x1000u */ /* 0x1503CF72: test dword ptr [0x150bdb4c], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CF88; /* 0x1503CF7C: jne 0x1503cf88 */
L_1503CF7E:
    eax = MEM32(0x150BDB3C); /* 0x1503CF7E: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0 */ /* 0x1503CF83: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503CF96; /* 0x1503CF86: jne 0x1503cf96 */
L_1503CF88:
    eax = ebp + (-0x8); /* 0x1503CF88: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503CF8B: push eax */
    ecx = ebp + (-0x10); /* 0x1503CF8C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503CF8F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503CFA4; /* 0x1503CF94: jmp 0x1503cfa4 */
L_1503CF96:
    PUSH32(esp, MEM32(0x150BDB40)); /* 0x1503CF96: push dword ptr [0x150bdb40] */
    ecx = ebp + (-0x10); /* 0x1503CF9C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503CF9F: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503CFA4:
    eax = MEM32(0x150BDB44); /* 0x1503CFA4: mov eax, dword ptr [0x150bdb44] */
    /* test eax, eax */ /* 0x1503CFA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CFD1; /* 0x1503CFAB: jne 0x1503cfd1 */
L_1503CFAD:
    ecx = ebp + (-0x10); /* 0x1503CFAD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_15041A8F); /* 0x1503CFB0: call 0x15041a8f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503CFB5: inc eax */
    _flag_k = FK_INC;
    ecx = 0x150BDB20u; /* 0x1503CFB6: mov ecx, 0x150bdb20 */
    PUSH32(esp, 1); /* 0x1503CFBB: push 1 */
    PUSH32(esp, eax); /* 0x1503CFBD: push eax */
    MEM32(0x150BDB48) = eax; /* 0x1503CFBE: mov dword ptr [0x150bdb48], eax */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503CFC3: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDB44) = eax; /* 0x1503CFC8: mov dword ptr [0x150bdb44], eax */
    /* test eax, eax */ /* 0x1503CFCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D013; /* 0x1503CFCF: je 0x1503d013 */
L_1503CFD1:
    PUSH32(esp, MEM32(0x150BDB48)); /* 0x1503CFD1: push dword ptr [0x150bdb48] */
    ecx = ebp + (-0x10); /* 0x1503CFD7: lea ecx, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503CFDA: push eax */
    RECOMP_CALL(sub_15040909); /* 0x1503CFDB: call 0x15040909 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB44); /* 0x1503CFE0: mov eax, dword ptr [0x150bdb44] */
    edx = eax; /* 0x1503CFE5: mov edx, eax */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503CFE7: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503CFE9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D00C; /* 0x1503CFEB: je 0x1503d00c */
L_1503CFED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503CFED: inc eax */
    _flag_k = FK_INC;
    esi = edx + 0x1; /* 0x1503CFEE: lea esi, [edx + 1] */
    /* cmp LO8(ecx), 0x20u */ /* 0x1503CFF1: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D002; /* 0x1503CFF4: jne 0x1503d002 */
L_1503CFF6:
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x1503CFF6: mov byte ptr [edx], cl */
    goto L_1503CFFB; /* 0x1503CFF8: jmp 0x1503cffb */
L_1503CFFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503CFFA: inc eax */
    _flag_k = FK_INC;
L_1503CFFB:
    /* cmp MEM8(eax), 0x20u */ /* 0x1503CFFB: cmp byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503CFFA; /* 0x1503CFFE: je 0x1503cffa */
L_1503D000:
    goto L_1503D004; /* 0x1503D000: jmp 0x1503d004 */
L_1503D002:
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x1503D002: mov byte ptr [edx], cl */
L_1503D004:
    SET_LO8(ecx, MEM8(eax)); /* 0x1503D004: mov cl, byte ptr [eax] */
    edx = esi; /* 0x1503D006: mov edx, esi */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503D008: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503CFED; /* 0x1503D00A: jne 0x1503cfed */
L_1503D00C:
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x1503D00C: mov byte ptr [edx], cl */
    eax = MEM32(0x150BDB44); /* 0x1503D00E: mov eax, dword ptr [0x150bdb44] */
L_1503D013:
    esi = POP32_VAL(esp); /* 0x1503D013: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503D014: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D015: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D01C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D01Cu);

L_1503D01C:
    edi = edi; /* 0x1503D01C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D01E: push ebp */
    ebp = esp; /* 0x1503D01F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503D021: push ecx */
    PUSH32(esp, ecx); /* 0x1503D022: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D023: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x1503D026: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503C947); /* 0x1503D029: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503D02E: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1503D031: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503D033: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D036: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503D03B: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503D03E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D03F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D046(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D046u);

L_1503D046:
    edi = edi; /* 0x1503D046: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D048: push ebp */
    ebp = esp; /* 0x1503D049: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503D04B: push ecx */
    PUSH32(esp, ecx); /* 0x1503D04C: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D04D: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x1503D050: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503D053: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503D058: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1503D05B: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503D05D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D060: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503D065: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503D068: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D069: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D070u);

L_1503D070:
    edi = edi; /* 0x1503D070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D072: push ebp */
    ebp = esp; /* 0x1503D073: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503D075: push ecx */
    PUSH32(esp, ecx); /* 0x1503D076: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D077: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x1503D07A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503D07D: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503D082: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1503D085: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503D087: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D08A: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503D08F: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503D092: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D093: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D09A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D09Au);

L_1503D09A:
    edi = edi; /* 0x1503D09A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D09C: push ebp */
    ebp = esp; /* 0x1503D09D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D09F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503D0A0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1503D0A3: push ecx */
    ecx = esi; /* 0x1503D0A4: mov ecx, esi */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503D0A6: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D0AB: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D0AD: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D0B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D0C2; /* 0x1503D0B4: je 0x1503d0c2 */
L_1503D0B6:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D0B6: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1503D0B9: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D0BB: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503D0EB; /* 0x1503D0C0: jmp 0x1503d0eb */
L_1503D0C2:
    PUSH32(esp, edi); /* 0x1503D0C2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503D0C3: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x1503D0C6: mov ecx, edi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D0C8: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D0CD: mov ecx, esi */
    /* test eax, eax */ /* 0x1503D0CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D0E4; /* 0x1503D0D1: je 0x1503d0e4 */
L_1503D0D3:
    eax = MEM32(edi + 0x4); /* 0x1503D0D3: mov eax, dword ptr [edi + 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503D0D6: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503D0D6: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503D0D9: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    PUSH32(esp, eax); /* 0x1503D0DC: push eax */
    RECOMP_CALL(sub_1503D305); /* 0x1503D0DD: call 0x1503d305 */
    RECOMP_FLAGS_IN();
    goto L_1503D0EA; /* 0x1503D0E2: jmp 0x1503d0ea */
L_1503D0E4:
    PUSH32(esp, edi); /* 0x1503D0E4: push edi */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503D0E5: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503D0EA:
    edi = POP32_VAL(esp); /* 0x1503D0EA: pop edi */
L_1503D0EB:
    eax = esi; /* 0x1503D0EB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D0ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D0EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503D0EF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503D0F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D0F8u);

L_1503D0F8:
    edi = edi; /* 0x1503D0F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D0FA: push ebp */
    ebp = esp; /* 0x1503D0FB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D0FD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503D0FE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1503D101: push ecx */
    ecx = esi; /* 0x1503D102: mov ecx, esi */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503D104: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D109: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D10B: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D110: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D112: push dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1503D115: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D120; /* 0x1503D117: je 0x1503d120 */
L_1503D119:
    RECOMP_CALL(sub_1503CD87); /* 0x1503D119: call 0x1503cd87 */
    RECOMP_FLAGS_IN();
    goto L_1503D125; /* 0x1503D11E: jmp 0x1503d125 */
L_1503D120:
    RECOMP_CALL(sub_1503D215); /* 0x1503D120: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_1503D125:
    eax = esi; /* 0x1503D125: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D127: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D128: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503D129: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503D132(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D132u);

L_1503D132:
    edi = edi; /* 0x1503D132: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D134: push ebp */
    ebp = esp; /* 0x1503D135: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D137: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503D138: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1503D13B: push ecx */
    ecx = esi; /* 0x1503D13C: mov ecx, esi */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503D13E: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D143: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D145: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D14A: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D14C: push dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1503D14F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D15A; /* 0x1503D151: je 0x1503d15a */
L_1503D153:
    RECOMP_CALL(sub_1503CDAE); /* 0x1503D153: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_1503D15F; /* 0x1503D158: jmp 0x1503d15f */
L_1503D15A:
    RECOMP_CALL(sub_1503D28C); /* 0x1503D15A: call 0x1503d28c */
    RECOMP_FLAGS_IN();
L_1503D15F:
    eax = esi; /* 0x1503D15F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D161: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503D163: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503D16C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D16Cu);

L_1503D16C:
    edi = edi; /* 0x1503D16C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D16E: push ebp */
    ebp = esp; /* 0x1503D16F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D171: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503D172: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1503D175: push ecx */
    ecx = esi; /* 0x1503D176: mov ecx, esi */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503D178: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D17D: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D17F: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D184: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503D186: push dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1503D189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D194; /* 0x1503D18B: je 0x1503d194 */
L_1503D18D:
    RECOMP_CALL(sub_1503CDE3); /* 0x1503D18D: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
    goto L_1503D199; /* 0x1503D192: jmp 0x1503d199 */
L_1503D194:
    RECOMP_CALL(sub_1503D305); /* 0x1503D194: call 0x1503d305 */
    RECOMP_FLAGS_IN();
L_1503D199:
    eax = esi; /* 0x1503D199: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D19B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D19C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503D19D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503D1A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D1A6u);

L_1503D1A6:
    edi = edi; /* 0x1503D1A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D1A8: push ebp */
    ebp = esp; /* 0x1503D1A9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D1AB: push esi */
    PUSH32(esp, edi); /* 0x1503D1AC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503D1AD: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503D1B0: mov esi, ecx */
    ecx = edi; /* 0x1503D1B2: mov ecx, edi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D1B4: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1503D1B9: mov ecx, esi */
    /* test eax, eax */ /* 0x1503D1BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D1D0; /* 0x1503D1BD: je 0x1503d1d0 */
L_1503D1BF:
    eax = MEM32(edi + 0x4); /* 0x1503D1BF: mov eax, dword ptr [edi + 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x1503D1C2: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x1503D1C2: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1503D1C5: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    PUSH32(esp, eax); /* 0x1503D1C8: push eax */
    RECOMP_CALL(sub_1503D305); /* 0x1503D1C9: call 0x1503d305 */
    RECOMP_FLAGS_IN();
    goto L_1503D207; /* 0x1503D1CE: jmp 0x1503d207 */
L_1503D1D0:
    RECOMP_CALL(sub_15041A30); /* 0x1503D1D0: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D1D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D1E3; /* 0x1503D1D7: je 0x1503d1e3 */
L_1503D1D9:
    PUSH32(esp, edi); /* 0x1503D1D9: push edi */
    ecx = esi; /* 0x1503D1DA: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D1DC: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503D207; /* 0x1503D1E1: jmp 0x1503d207 */
L_1503D1E3:
    ecx = MEM32(esi); /* 0x1503D1E3: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1503D4BB); /* 0x1503D1E5: call 0x1503d4bb */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503D1EA: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503D1EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D1FB; /* 0x1503D1EE: je 0x1503d1fb */
L_1503D1F0:
    PUSH32(esp, MEM32(edi)); /* 0x1503D1F0: push dword ptr [edi] */
    ecx = eax; /* 0x1503D1F2: mov ecx, eax */
    RECOMP_CALL(sub_1503D399); /* 0x1503D1F4: call 0x1503d399 */
    RECOMP_FLAGS_IN();
    goto L_1503D207; /* 0x1503D1F9: jmp 0x1503d207 */
L_1503D1FB:
    eax = MEM32(esi + 0x4); /* 0x1503D1FB: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503D1FE: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503D201: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503D204: mov dword ptr [esi + 4], eax */
L_1503D207:
    edi = POP32_VAL(esp); /* 0x1503D207: pop edi */
    eax = esi; /* 0x1503D208: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D20A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D20B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D20C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D215(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D215u);

L_1503D215:
    edi = edi; /* 0x1503D215: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D217: push ebp */
    ebp = esp; /* 0x1503D218: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503D21A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503D21B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1503D21E: push esi */
    esi = ecx; /* 0x1503D21F: mov esi, ecx */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1503D221: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D27E; /* 0x1503D223: je 0x1503d27e */
L_1503D225:
    RECOMP_CALL(sub_15041A30); /* 0x1503D225: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D22A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D238; /* 0x1503D22C: je 0x1503d238 */
L_1503D22E:
    PUSH32(esp, ebx); /* 0x1503D22E: push ebx */
    ecx = esi; /* 0x1503D22F: mov ecx, esi */
    RECOMP_CALL(sub_1503CD87); /* 0x1503D231: call 0x1503cd87 */
    RECOMP_FLAGS_IN();
    goto L_1503D27E; /* 0x1503D236: jmp 0x1503d27e */
L_1503D238:
    ecx = MEM32(esi); /* 0x1503D238: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1503D4BB); /* 0x1503D23A: call 0x1503d4bb */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503D23F: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503D241: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D272; /* 0x1503D243: je 0x1503d272 */
L_1503D245:
    PUSH32(esp, 0); /* 0x1503D245: push 0 */
    PUSH32(esp, 0xCu); /* 0x1503D247: push 0xc */
    ecx = 0x150BDB20u; /* 0x1503D249: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D24E: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D266; /* 0x1503D255: je 0x1503d266 */
L_1503D257:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1503D257: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x150011B8u; /* 0x1503D25B: mov dword ptr [eax], 0x150011b8 */
    MEM8(eax + 0x8) = (uint8_t)(LO8(ebx)); /* 0x1503D261: mov byte ptr [eax + 8], bl */
    goto L_1503D268; /* 0x1503D264: jmp 0x1503d268 */
L_1503D266:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503D266: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503D268:
    ecx = MEM32(esi); /* 0x1503D268: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1503D26A: push eax */
    RECOMP_CALL(sub_1503D399); /* 0x1503D26B: call 0x1503d399 */
    RECOMP_FLAGS_IN();
    goto L_1503D27E; /* 0x1503D270: jmp 0x1503d27e */
L_1503D272:
    eax = MEM32(esi + 0x4); /* 0x1503D272: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503D275: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503D278: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503D27B: mov dword ptr [esi + 4], eax */
L_1503D27E:
    eax = esi; /* 0x1503D27E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D280: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503D281: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503D282: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D283: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D28C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D28Cu);

L_1503D28C:
    edi = edi; /* 0x1503D28C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D28E: push ebp */
    ebp = esp; /* 0x1503D28F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D291: push esi */
    PUSH32(esp, edi); /* 0x1503D292: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503D293: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503D296: mov esi, ecx */
    /* test edi, edi */ /* 0x1503D298: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D2F7; /* 0x1503D29A: je 0x1503d2f7 */
L_1503D29C:
    /* cmp MEM8(edi), 0 */ /* 0x1503D29C: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D2F7; /* 0x1503D29F: je 0x1503d2f7 */
L_1503D2A1:
    RECOMP_CALL(sub_15041A30); /* 0x1503D2A1: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D2A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D2B4; /* 0x1503D2A8: je 0x1503d2b4 */
L_1503D2AA:
    PUSH32(esp, edi); /* 0x1503D2AA: push edi */
    ecx = esi; /* 0x1503D2AB: mov ecx, esi */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503D2AD: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_1503D2F7; /* 0x1503D2B2: jmp 0x1503d2f7 */
L_1503D2B4:
    ecx = MEM32(esi); /* 0x1503D2B4: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1503D4BB); /* 0x1503D2B6: call 0x1503d4bb */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503D2BB: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503D2BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D2EB; /* 0x1503D2BF: je 0x1503d2eb */
L_1503D2C1:
    PUSH32(esp, ebx); /* 0x1503D2C1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503D2C2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x150BDB20u; /* 0x1503D2C4: mov ecx, 0x150bdb20 */
    PUSH32(esp, ebx); /* 0x1503D2C9: push ebx */
    PUSH32(esp, 0x10u); /* 0x1503D2CA: push 0x10 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D2CC: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D2D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D2E0; /* 0x1503D2D3: je 0x1503d2e0 */
L_1503D2D5:
    PUSH32(esp, ebx); /* 0x1503D2D5: push ebx */
    PUSH32(esp, edi); /* 0x1503D2D6: push edi */
    ecx = eax; /* 0x1503D2D7: mov ecx, eax */
    RECOMP_CALL(sub_1503CC93); /* 0x1503D2D9: call 0x1503cc93 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503D2DE: mov ebx, eax */
L_1503D2E0:
    ecx = MEM32(esi); /* 0x1503D2E0: mov ecx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1503D2E2: push ebx */
    RECOMP_CALL(sub_1503D399); /* 0x1503D2E3: call 0x1503d399 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1503D2E8: pop ebx */
    goto L_1503D2F7; /* 0x1503D2E9: jmp 0x1503d2f7 */
L_1503D2EB:
    eax = MEM32(esi + 0x4); /* 0x1503D2EB: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503D2EE: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503D2F1: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503D2F4: mov dword ptr [esi + 4], eax */
L_1503D2F7:
    edi = POP32_VAL(esp); /* 0x1503D2F7: pop edi */
    eax = esi; /* 0x1503D2F8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D2FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D2FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D2FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D305(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D305u);

L_1503D305:
    edi = edi; /* 0x1503D305: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D307: push ebp */
    ebp = esp; /* 0x1503D308: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503D30A: push ebx */
    PUSH32(esp, esi); /* 0x1503D30B: push esi */
    PUSH32(esp, edi); /* 0x1503D30C: push edi */
    esi = ecx; /* 0x1503D30D: mov esi, ecx */
    RECOMP_CALL(sub_15041A30); /* 0x1503D30F: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1503D314: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1503D317: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D382; /* 0x1503D319: jne 0x1503d382 */
L_1503D31B:
    /* cmp edi, 1 */ /* 0x1503D31B: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D382; /* 0x1503D31E: je 0x1503d382 */
L_1503D320:
    /* cmp edi, 3 */ /* 0x1503D320: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D382; /* 0x1503D323: je 0x1503d382 */
L_1503D325:
    PUSH32(esp, 0); /* 0x1503D325: push 0 */
    PUSH32(esp, 0x10u); /* 0x1503D327: push 0x10 */
    ecx = 0x150BDB20u; /* 0x1503D329: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D32E: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503D333: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1503D335: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D371; /* 0x1503D337: je 0x1503d371 */
L_1503D339:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x1503D339: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503D33D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1503D33F: push 4 */
    eax = POP32_VAL(esp); /* 0x1503D341: pop eax */
    /* cmp edi, 2 */ /* 0x1503D342: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx) = 0x150011E8u; /* 0x1503D345: mov dword ptr [ebx], 0x150011e8 */
    MEM32(ebx + 0x8) = edi; /* 0x1503D34B: mov dword ptr [ebx + 8], edi */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = eax; } /* 0x1503D34E: cmove ecx, eax */
    MEM32(ebx + 0xC) = ecx; /* 0x1503D351: mov dword ptr [ebx + 0xc], ecx */
    ecx = MEM32(esi); /* 0x1503D354: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1503D4BB); /* 0x1503D356: call 0x1503d4bb */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503D35B: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503D35D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D374; /* 0x1503D35F: je 0x1503d374 */
L_1503D361:
    PUSH32(esp, ebx); /* 0x1503D361: push ebx */
    ecx = eax; /* 0x1503D362: mov ecx, eax */
    RECOMP_CALL(sub_1503D399); /* 0x1503D364: call 0x1503d399 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1503D369: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1503D36B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D38A; /* 0x1503D36D: jne 0x1503d38a */
L_1503D36F:
    goto L_1503D374; /* 0x1503D36F: jmp 0x1503d374 */
L_1503D371:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503D371: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503D374:
    eax = MEM32(esi + 0x4); /* 0x1503D374: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503D377: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503D37A: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503D37D: mov dword ptr [esi + 4], eax */
    goto L_1503D38A; /* 0x1503D380: jmp 0x1503d38a */
L_1503D382:
    PUSH32(esp, edi); /* 0x1503D382: push edi */
    ecx = esi; /* 0x1503D383: mov ecx, esi */
    RECOMP_CALL(sub_1503CDE3); /* 0x1503D385: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
L_1503D38A:
    edi = POP32_VAL(esp); /* 0x1503D38A: pop edi */
    eax = esi; /* 0x1503D38B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D38D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503D38E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503D38F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D390: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D399u);

L_1503D399:
    edi = edi; /* 0x1503D399: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D39B: push ebp */
    ebp = esp; /* 0x1503D39C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1503D39E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1503D3A1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D3C1; /* 0x1503D3A3: je 0x1503d3c1 */
L_1503D3A5:
    eax = MEM32(ecx + 0x4); /* 0x1503D3A5: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x1503D3A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D3BE; /* 0x1503D3AA: je 0x1503d3be */
L_1503D3AC:
    PUSH32(esp, esi); /* 0x1503D3AC: push esi */
    goto L_1503D3B1; /* 0x1503D3AD: jmp 0x1503d3b1 */
L_1503D3AF:
    eax = esi; /* 0x1503D3AF: mov eax, esi */
L_1503D3B1:
    esi = MEM32(eax + 0x4); /* 0x1503D3B1: mov esi, dword ptr [eax + 4] */
    /* test esi, esi */ /* 0x1503D3B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D3AF; /* 0x1503D3B6: jne 0x1503d3af */
L_1503D3B8:
    MEM32(eax + 0x4) = edx; /* 0x1503D3B8: mov dword ptr [eax + 4], edx */
    esi = POP32_VAL(esp); /* 0x1503D3BB: pop esi */
    goto L_1503D3C1; /* 0x1503D3BC: jmp 0x1503d3c1 */
L_1503D3BE:
    MEM32(ecx + 0x4) = edx; /* 0x1503D3BE: mov dword ptr [ecx + 4], edx */
L_1503D3C1:
    eax = ecx; /* 0x1503D3C1: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1503D3C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D3C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D3CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D3CDu);

L_1503D3CD:
    edi = edi; /* 0x1503D3CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D3CF: push ebp */
    ebp = esp; /* 0x1503D3D0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D3D2: push esi */
    esi = ecx; /* 0x1503D3D3: mov esi, ecx */
    /* cmp MEM32(esi), 9 */ /* 0x1503D3D5: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D40D; /* 0x1503D3D8: je 0x1503d40d */
L_1503D3DA:
    ecx = MEM32(ebp + 0x8); /* 0x1503D3DA: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15041A30); /* 0x1503D3DD: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D3E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D40D; /* 0x1503D3E4: jne 0x1503d40d */
L_1503D3E6:
    PUSH32(esp, eax); /* 0x1503D3E6: push eax */
    PUSH32(esp, 8); /* 0x1503D3E7: push 8 */
    ecx = 0x150BDB20u; /* 0x1503D3E9: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D3EE: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D3F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D40D; /* 0x1503D3F5: je 0x1503d40d */
L_1503D3F7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503D3F7: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503D3FA: mov ecx, eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503D3FC: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D401: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D40D; /* 0x1503D403: je 0x1503d40d */
L_1503D405:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1503D405: inc dword ptr [esi] */
    _flag_k = FK_INC;
    ecx = MEM32(esi); /* 0x1503D407: mov ecx, dword ptr [esi] */
    MEM32(esi + ecx * 4 + 0x4) = eax; /* 0x1503D409: mov dword ptr [esi + ecx*4 + 4], eax */
L_1503D40D:
    eax = esi; /* 0x1503D40D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D40F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D410: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D411: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D41A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D41Au);

L_1503D41A:
    edi = edi; /* 0x1503D41A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D41C: push ebp */
    ebp = esp; /* 0x1503D41D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503D41F: push esi */
    esi = ecx; /* 0x1503D420: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1503D422: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1503D425: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 3 */ /* 0x1503D428: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D44B; /* 0x1503D42A: je 0x1503d44b */
L_1503D42C:
    PUSH32(esp, edi); /* 0x1503D42C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503D42D: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x1503D430: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x1503D432: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D437: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D44A; /* 0x1503D439: jne 0x1503d44a */
L_1503D43B:
    eax = MEM32(edi + 0x4); /* 0x1503D43B: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x4)));
    eax = eax ^ MEM32(esi + 0x4); /* 0x1503D43E: xor eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1503D441: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x4)));
    eax = eax ^ MEM32(edi + 0x4); /* 0x1503D444: xor eax, dword ptr [edi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1503D447: mov dword ptr [esi + 4], eax */
L_1503D44A:
    edi = POP32_VAL(esp); /* 0x1503D44A: pop edi */
L_1503D44B:
    eax = esi; /* 0x1503D44B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D44D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503D44E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503D44F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1503D458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D458u);

L_1503D458:
    edi = edi; /* 0x1503D458: mov edi, edi */
    PUSH32(esp, edi); /* 0x1503D45A: push edi */
    edi = ecx; /* 0x1503D45B: mov edi, ecx */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x1503D45D: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D48D; /* 0x1503D461: je 0x1503d48d */
L_1503D463:
    ecx = MEM32(edi + 0x8); /* 0x1503D463: mov ecx, dword ptr [edi + 8] */
    MEM32(edi + 0xC) = ecx; /* 0x1503D466: mov dword ptr [edi + 0xc], ecx */
    /* test ecx, ecx */ /* 0x1503D469: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D48D; /* 0x1503D46B: je 0x1503d48d */
L_1503D46D:
    PUSH32(esp, esi); /* 0x1503D46D: push esi */
L_1503D46E:
    eax = MEM32(ecx); /* 0x1503D46E: mov eax, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x1503D470: mov esi, dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x1503D473: push ecx */
    ecx = esi; /* 0x1503D474: mov ecx, esi */
    MEM32(edi + 0x8) = eax; /* 0x1503D476: mov dword ptr [edi + 8], eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503D479: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503D47F: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D481: pop ecx */
    ecx = MEM32(edi + 0x8); /* 0x1503D482: mov ecx, dword ptr [edi + 8] */
    MEM32(edi + 0xC) = ecx; /* 0x1503D485: mov dword ptr [edi + 0xc], ecx */
    /* test ecx, ecx */ /* 0x1503D488: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D46E; /* 0x1503D48A: jne 0x1503d46e */
L_1503D48C:
    esi = POP32_VAL(esp); /* 0x1503D48C: pop esi */
L_1503D48D:
    edi = POP32_VAL(esp); /* 0x1503D48D: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D48E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D495(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D495u);

L_1503D495:
    edi = edi; /* 0x1503D495: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D497: push ebp */
    ebp = esp; /* 0x1503D498: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1503D49A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax * 4 + 0x15001034); /* 0x1503D49D: mov ecx, dword ptr [eax*4 + 0x15001034] */
    eax = MEM32(0x150BDB4C); /* 0x1503D4A4: mov eax, dword ptr [0x150bdb4c] */
    eax = ~eax; /* 0x1503D4A9: not eax */
    /* test LO8(eax), 1 */ /* 0x1503D4AB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx + 0x2; /* 0x1503D4AD: lea eax, [ecx + 2] */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503D4B0: cmovne eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1503D4B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D4B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D4BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D4BBu);

L_1503D4BB:
    edi = edi; /* 0x1503D4BB: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1503D4BD: push ebx */
    PUSH32(esp, esi); /* 0x1503D4BE: push esi */
    PUSH32(esp, edi); /* 0x1503D4BF: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503D4C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x1503D4C2: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1503D4C4: push esi */
    PUSH32(esp, 0xCu); /* 0x1503D4C5: push 0xc */
    ecx = 0x150BDB20u; /* 0x1503D4C7: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D4CC: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503D4D1: mov edi, eax */
    /* test edi, edi */ /* 0x1503D4D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D4FF; /* 0x1503D4D5: je 0x1503d4ff */
L_1503D4D7:
    PUSH32(esp, esi); /* 0x1503D4D7: push esi */
    PUSH32(esp, 8); /* 0x1503D4D8: push 8 */
    ecx = 0x150BDB20u; /* 0x1503D4DA: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503D4DF: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D4E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D4F3; /* 0x1503D4E6: je 0x1503d4f3 */
L_1503D4E8:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFF000u; /* 0x1503D4E8: and dword ptr [eax + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1503D4EF: mov dword ptr [eax], ebx */
    goto L_1503D4F5; /* 0x1503D4F1: jmp 0x1503d4f5 */
L_1503D4F3:
    eax = esi; /* 0x1503D4F3: mov eax, esi */
L_1503D4F5:
    PUSH32(esp, eax); /* 0x1503D4F5: push eax */
    ecx = edi; /* 0x1503D4F6: mov ecx, edi */
    RECOMP_CALL(sub_1503CC56); /* 0x1503D4F8: call 0x1503cc56 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503D4FD: mov esi, eax */
L_1503D4FF:
    edi = POP32_VAL(esp); /* 0x1503D4FF: pop edi */
    eax = esi; /* 0x1503D500: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503D502: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503D503: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503D504: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503D50B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503D50Bu);

L_1503D50B:
    edi = edi; /* 0x1503D50B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503D50D: push ebp */
    ebp = esp; /* 0x1503D50E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x1503D510: sub esp, 0x70 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503D513: push ebx */
    PUSH32(esp, esi); /* 0x1503D514: push esi */
    PUSH32(esp, edi); /* 0x1503D515: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503D516: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0xFFFFF000u; /* 0x1503D518: mov esi, 0xfffff000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & esi; /* 0x1503D51D: and dword ptr [ebp - 0x24], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = edi; /* 0x1503D520: mov dword ptr [ebp - 0x28], edi */
    RECOMP_CALL(sub_15041305); /* 0x1503D523: call 0x15041305 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1503D528: mov esi, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x1503D52B: mov ebx, eax */
    ecx = esi; /* 0x1503D52D: mov ecx, esi */
    RECOMP_CALL(sub_15041A4F); /* 0x1503D52F: call 0x15041a4f */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1503D534: mov dword ptr [ebp - 0x14], eax */
    /* cmp ebx, 0xFFFFu */ /* 0x1503D537: cmp ebx, 0xffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D54E; /* 0x1503D53D: jne 0x1503d54e */
L_1503D53F:
    ecx = MEM32(ebp + 0x8); /* 0x1503D53F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1503D542: push 1 */
    RECOMP_CALL(sub_1503CA39); /* 0x1503D544: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_1503DF4D; /* 0x1503D549: jmp 0x1503df4d */
L_1503D54E:
    /* cmp ebx, 0xFFFEu */ /* 0x1503D54E: cmp ebx, 0xfffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D569; /* 0x1503D554: jne 0x1503d569 */
L_1503D556:
    PUSH32(esp, esi); /* 0x1503D556: push esi */
    PUSH32(esp, 2); /* 0x1503D557: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503D559: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x1503D55C: call 0x1503d070 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503D561: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503DF4D; /* 0x1503D564: jmp 0x1503df4d */
L_1503D569:
    /* cmp ebx, 0xFFFDu */ /* 0x1503D569: cmp ebx, 0xfffd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D577; /* 0x1503D56F: jne 0x1503d577 */
L_1503D571:
    PUSH32(esp, esi); /* 0x1503D571: push esi */
    goto L_1503DF45; /* 0x1503D572: jmp 0x1503df45 */
L_1503D577:
    eax = ebx; /* 0x1503D577: mov eax, ebx */
    MEM32(ebp + (-0xC)) = 0x400u; /* 0x1503D579: mov dword ptr [ebp - 0xc], 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x1503D580: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x1000u; /* 0x1503D585: mov edx, 0x1000 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1503D58A: mov dword ptr [ebp - 0x1c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DC5C; /* 0x1503D58D: je 0x1503dc5c */
L_1503D593:
    ecx = ebx; /* 0x1503D593: mov ecx, ebx */
    eax = edx; /* 0x1503D595: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x1503D597: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x800u */ /* 0x1503D59D: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1503D5A3: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0xC)); } /* 0x1503D5A6: cmove eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1503D5AA: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1503D5AC: mov dword ptr [ebp - 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D5D6; /* 0x1503D5AF: je 0x1503d5d6 */
L_1503D5B1:
    eax = ebx; /* 0x1503D5B1: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1B00u);
    eax = eax & 0x1B00u; /* 0x1503D5B3: and eax, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1503D5B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DC5C; /* 0x1503D5BA: je 0x1503dc5c */
L_1503D5C0:
    /* cmp eax, 0x1100u */ /* 0x1503D5C0: cmp eax, 0x1100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DC5C; /* 0x1503D5C5: je 0x1503dc5c */
L_1503D5CB:
    /* cmp eax, 0x1200u */ /* 0x1503D5CB: cmp eax, 0x1200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DC5C; /* 0x1503D5D0: je 0x1503dc5c */
L_1503D5D6:
    /* test ebx, 0x4000u */ /* 0x1503D5D6: test ebx, 0x4000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D63F; /* 0x1503D5DC: je 0x1503d63f */
L_1503D5DE:
    ecx = MEM32(0x150BDB4C); /* 0x1503D5DE: mov ecx, dword ptr [0x150bdb4c] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1503D5E4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1503D5E4: shr ecx, 2 */
    _flag_a = (uint32_t)((ecx | MEM32(0x150BDB4C))); _flag_b = (uint32_t)((ecx | MEM32(0x150BDB4C)));
    ecx = ecx | MEM32(0x150BDB4C); /* 0x1503D5E7: or ecx, dword ptr [0x150bdb4c] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1503D5ED: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1503D5ED: shr ecx, 1 */
    ecx = ~ecx; /* 0x1503D5EF: not ecx */
    /* test LO8(ecx), 1 */ /* 0x1503D5F1: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D629; /* 0x1503D5F4: je 0x1503d629 */
L_1503D5F6:
    eax = ebp + (-0x38); /* 0x1503D5F6: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1503D5F9: push eax */
    RECOMP_CALL(sub_1503E35E); /* 0x1503D5FA: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D5FF: pop ecx */
    PUSH32(esp, 0x20u); /* 0x1503D600: push 0x20 */
    ecx = ebp + (-0x30); /* 0x1503D602: lea ecx, [ebp - 0x30] */
    esi = eax; /* 0x1503D605: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503D607: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503D60C: push esi */
    ecx = ebp + (-0x40); /* 0x1503D60D: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D610: push ecx */
    ecx = eax; /* 0x1503D611: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D613: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D618: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D61B: push eax */
    ecx = ebp + (-0x28); /* 0x1503D61C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D61F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1503D624: mov esi, dword ptr [ebp + 0xc] */
    goto L_1503D63C; /* 0x1503D627: jmp 0x1503d63c */
L_1503D629:
    eax = ebp + (-0x40); /* 0x1503D629: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D62C: push eax */
    RECOMP_CALL(sub_1503E35E); /* 0x1503D62D: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D632: pop ecx */
    PUSH32(esp, eax); /* 0x1503D633: push eax */
    ecx = ebp + (-0x28); /* 0x1503D634: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503D637: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503D63C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503D63C: mov ecx, dword ptr [ebp - 4] */
L_1503D63F:
    eax = MEM32(ebp + (-0xC)); /* 0x1503D63F: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1503D642: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D873; /* 0x1503D644: je 0x1503d873 */
L_1503D64A:
    /* cmp ecx, 0x1800u */ /* 0x1503D64A: cmp ecx, 0x1800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D873; /* 0x1503D650: jne 0x1503d873 */
L_1503D656:
    PUSH32(esp, 0x7Bu); /* 0x1503D656: push 0x7b */
    eax = ebp + (-0x38); /* 0x1503D658: lea eax, [ebp - 0x38] */
    ecx = esi; /* 0x1503D65B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1503D65D: push eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503D65E: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503D663: mov esi, eax */
    eax = ebp + (-0x40); /* 0x1503D665: lea eax, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1503D668: push edi */
    PUSH32(esp, eax); /* 0x1503D669: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503D66A: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D66F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503D670: pop ecx */
    eax = ebp + (-0x40); /* 0x1503D671: lea eax, [ebp - 0x40] */
    ecx = esi; /* 0x1503D674: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1503D676: push eax */
    eax = ebp + (-0x30); /* 0x1503D677: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1503D67A: push eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D67B: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503D680: push eax */
    ecx = ebp + (-0x28); /* 0x1503D681: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503D684: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D689: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D68C: push eax */
    RECOMP_CALL(sub_1504161F); /* 0x1503D68D: call 0x1504161f */
    RECOMP_FLAGS_IN();
    esi = 0x1000u; /* 0x1503D692: mov esi, 0x1000 */
    ecx = POP32_VAL(esp); /* 0x1503D697: pop ecx */
    /* test MEM32(0x150BDB4C), esi */ /* 0x1503D698: test dword ptr [0x150bdb4c], esi */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D6D3; /* 0x1503D69E: jne 0x1503d6d3 */
L_1503D6A0:
    PUSH32(esp, 0x2Cu); /* 0x1503D6A0: push 0x2c */
    ecx = ebp + (-0x30); /* 0x1503D6A2: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1503C947); /* 0x1503D6A5: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x40); /* 0x1503D6AA: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D6AD: push ecx */
    ecx = ebp + (-0x38); /* 0x1503D6AE: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1503D6B1: push ecx */
    ecx = eax; /* 0x1503D6B2: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D6B4: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150045E8u); /* 0x1503D6B9: push 0x150045e8 */
    eax = ebp + (-0x20); /* 0x1503D6BE: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503D6C1: push eax */
    ecx = ebp + (-0x38); /* 0x1503D6C2: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1503D132); /* 0x1503D6C5: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503D6CA: push eax */
    ecx = ebp + (-0x28); /* 0x1503D6CB: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503D6CE: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503D6D3:
    PUSH32(esp, 0x150045ECu); /* 0x1503D6D3: push 0x150045ec */
    ecx = ebp + (-0x28); /* 0x1503D6D8: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503D6DB: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D6E0: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D6E3: push eax */
    RECOMP_CALL(sub_1503E7BB); /* 0x1503D6E4: call 0x1503e7bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D6E9: pop ecx */
    ecx = MEM32(0x150BDB4C); /* 0x1503D6EA: mov ecx, dword ptr [0x150bdb4c] */
    eax = ecx; /* 0x1503D6F0: mov eax, ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1503D6F2: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1503D6F2: shr eax, 3 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1503D6F5: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503D6F7: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503D6F7: shr eax, 1 */
    eax = ~eax; /* 0x1503D6F9: not eax */
    /* test LO8(eax), 1 */ /* 0x1503D6FB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D742; /* 0x1503D6FD: je 0x1503d742 */
L_1503D6FF:
    /* test esi, ecx */ /* 0x1503D6FF: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503D742; /* 0x1503D701: jne 0x1503d742 */
L_1503D703:
    PUSH32(esp, 0x20u); /* 0x1503D703: push 0x20 */
    ecx = ebp + (-0x30); /* 0x1503D705: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1503C947); /* 0x1503D708: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x40); /* 0x1503D70D: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D710: push ecx */
    ecx = ebp + (-0x38); /* 0x1503D711: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1503D714: push ecx */
    ecx = eax; /* 0x1503D715: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D717: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1503D71C: push 0x20 */
    eax = ebp + (-0x20); /* 0x1503D71E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503D721: push eax */
    ecx = ebp + (-0x38); /* 0x1503D722: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503D725: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503D72A: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503D72D: push ecx */
    ecx = ebp + (-0x18); /* 0x1503D72E: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503D731: push ecx */
    ecx = eax; /* 0x1503D732: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D734: call 0x1503d09a */
    RECOMP_FLAGS_IN();
L_1503D739:
    PUSH32(esp, eax); /* 0x1503D739: push eax */
    ecx = ebp + (-0x28); /* 0x1503D73A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D73D: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503D742:
    edi = 0x8000u; /* 0x1503D742: mov edi, 0x8000 */
L_1503D747:
    ecx = ebx; /* 0x1503D747: mov ecx, ebx */
    eax = ebx; /* 0x1503D749: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x1503D74B: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x800u; /* 0x1503D751: sub ecx, 0x800 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503D757: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503D759: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    eax = eax & 0x6000u; /* 0x1503D75B: and eax, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503D760: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503D761: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503D763: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503D765: inc eax */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503D766: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503D768: cmovne eax, ecx */
    /* test eax, eax */ /* 0x1503D76B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DEA7; /* 0x1503D76D: je 0x1503dea7 */
L_1503D773:
    eax = MEM32(0x150BDB4C); /* 0x1503D773: mov eax, dword ptr [0x150bdb4c] */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x1503D778: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x1503D778: shr eax, 9 */
    eax = ~eax; /* 0x1503D77B: not eax */
    /* test LO8(eax), 1 */ /* 0x1503D77D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D82C; /* 0x1503D77F: je 0x1503d82c */
L_1503D785:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503D785: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1503D787: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x700u);
    esi = esi & 0x700u; /* 0x1503D789: and esi, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x200u */ /* 0x1503D78F: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503D795: sete cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503D798: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503D79A: inc eax */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503D79B: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503D79D: cmovne eax, ecx */
    /* test eax, eax */ /* 0x1503D7A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D7CC; /* 0x1503D7A2: je 0x1503d7cc */
L_1503D7A4:
    PUSH32(esp, 0x150046A4u); /* 0x1503D7A4: push 0x150046a4 */
    ecx = ebp + (-0x70); /* 0x1503D7A9: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503D7AC: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503D7B1: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503D7B4: push ecx */
    ecx = ebp + (-0x40); /* 0x1503D7B5: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D7B8: push ecx */
    ecx = eax; /* 0x1503D7B9: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D7BB: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D7C0: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D7C3: push eax */
    ecx = ebp + (-0x28); /* 0x1503D7C4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D7C7: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503D7CC:
    /* test edi, ebx */ /* 0x1503D7CC: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D7D8; /* 0x1503D7CE: je 0x1503d7d8 */
L_1503D7D0:
    /* cmp esi, 0x100u */ /* 0x1503D7D0: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D804; /* 0x1503D7D6: je 0x1503d804 */
L_1503D7D8:
    edx = 0x400u; /* 0x1503D7D8: mov edx, 0x400 */
    /* test edx, ebx */ /* 0x1503D7DD: test edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D82C; /* 0x1503D7DF: je 0x1503d82c */
L_1503D7E1:
    eax = ebx; /* 0x1503D7E1: mov eax, ebx */
    ecx = 0x700u; /* 0x1503D7E3: mov ecx, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503D7E8: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1503D7EA: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D804; /* 0x1503D7EF: je 0x1503d804 */
L_1503D7F1:
    eax = ebx; /* 0x1503D7F1: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503D7F3: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1503D7F5: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D804; /* 0x1503D7FA: je 0x1503d804 */
L_1503D7FC:
    eax = ebx; /* 0x1503D7FC: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503D7FE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1503D800: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D82C; /* 0x1503D802: jne 0x1503d82c */
L_1503D804:
    PUSH32(esp, 0x150046ACu); /* 0x1503D804: push 0x150046ac */
    ecx = ebp + (-0x70); /* 0x1503D809: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503D80C: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503D811: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503D814: push ecx */
    ecx = ebp + (-0x40); /* 0x1503D815: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D818: push ecx */
    ecx = eax; /* 0x1503D819: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D81B: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D820: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D823: push eax */
    ecx = ebp + (-0x28); /* 0x1503D824: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D827: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503D82C:
    eax = MEM32(0x150BDB4C); /* 0x1503D82C: mov eax, dword ptr [0x150bdb4c] */
    esi = 0x1800u; /* 0x1503D831: mov esi, 0x1800 */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x1503D836: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x1503D836: shr eax, 7 */
    eax = ~eax; /* 0x1503D839: not eax */
    /* test LO8(eax), 1 */ /* 0x1503D83B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DEAC; /* 0x1503D83D: je 0x1503deac */
L_1503D843:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503D843: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1503D845: mov eax, ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x1503D847: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x40u */ /* 0x1503D849: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx; /* 0x1503D84B: mov eax, ebx */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503D84D: sete cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503D850: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1503D852: sub eax, 0x800 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503D857: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503D859: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503D85B: inc eax */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503D85C: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503D85E: cmovne eax, ecx */
    /* test eax, eax */ /* 0x1503D861: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DE39; /* 0x1503D863: je 0x1503de39 */
L_1503D869:
    PUSH32(esp, 0x150046B8u); /* 0x1503D869: push 0x150046b8 */
    goto L_1503DE60; /* 0x1503D86E: jmp 0x1503de60 */
L_1503D873:
    edx = 0xFFFFF000u; /* 0x1503D873: mov edx, 0xfffff000 */
    MEM32(ebp + (-0x8)) = edi; /* 0x1503D878: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x1503D87B: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & edx; /* 0x1503D87E: and dword ptr [ebp - 0x2c], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & edx; /* 0x1503D881: and dword ptr [ebp - 0x1c], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & edx; /* 0x1503D884: and dword ptr [ebp - 0x34], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1503D887: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = edi; /* 0x1503D88A: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x1503D88D: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x38)) = edi; /* 0x1503D890: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1503D893: mov dword ptr [ebp - 0x10], edi */
    /* test eax, eax */ /* 0x1503D896: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D927; /* 0x1503D898: je 0x1503d927 */
L_1503D89E:
    /* cmp ecx, 0x800u */ /* 0x1503D89E: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D90E; /* 0x1503D8A4: jne 0x1503d90e */
L_1503D8A6:
    eax = ebx; /* 0x1503D8A6: mov eax, ebx */
    ecx = 0x700u; /* 0x1503D8A8: mov ecx, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503D8AD: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1503D8AF: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D8EA; /* 0x1503D8B4: jne 0x1503d8ea */
L_1503D8B6:
    eax = ebp + (-0x40); /* 0x1503D8B6: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x1503D8B9: push 1 */
    PUSH32(esp, eax); /* 0x1503D8BB: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503D8BC: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D8C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503D8C2: pop ecx */
    eax = ebp + (-0x40); /* 0x1503D8C3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D8C6: push eax */
    ecx = ebp + (-0x8); /* 0x1503D8C7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D8CA: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D8CF: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x1503D8D2: push 1 */
    PUSH32(esp, eax); /* 0x1503D8D4: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503D8D5: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D8DA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503D8DB: pop ecx */
    eax = ebp + (-0x40); /* 0x1503D8DC: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D8DF: push eax */
    ecx = ebp + (-0x30); /* 0x1503D8E0: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D8E3: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503D8F5; /* 0x1503D8E8: jmp 0x1503d8f5 */
L_1503D8EA:
    eax = ebx; /* 0x1503D8EA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503D8EC: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1503D8EE: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D90E; /* 0x1503D8F3: jne 0x1503d90e */
L_1503D8F5:
    eax = ebp + (-0x40); /* 0x1503D8F5: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x1503D8F8: push 1 */
    PUSH32(esp, eax); /* 0x1503D8FA: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503D8FB: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D900: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503D901: pop ecx */
    eax = ebp + (-0x40); /* 0x1503D902: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D905: push eax */
    ecx = ebp + (-0x20); /* 0x1503D906: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D909: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503D90E:
    eax = ebp + (-0x40); /* 0x1503D90E: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x1503D911: push 1 */
    PUSH32(esp, eax); /* 0x1503D913: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503D914: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D919: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503D91A: pop ecx */
    eax = ebp + (-0x40); /* 0x1503D91B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D91E: push eax */
    ecx = ebp + (-0x38); /* 0x1503D91F: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D922: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503D927:
    eax = ebx; /* 0x1503D927: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1800u);
    eax = eax & 0x1800u; /* 0x1503D929: and eax, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x1503D92E: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503D973; /* 0x1503D933: jne 0x1503d973 */
L_1503D935:
    eax = ebx; /* 0x1503D935: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1503D937: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x200u */ /* 0x1503D93C: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D973; /* 0x1503D941: je 0x1503d973 */
L_1503D943:
    eax = MEM32(0x150BDB4C); /* 0x1503D943: mov eax, dword ptr [0x150bdb4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1503D948: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1503D94B: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x40); /* 0x1503D94D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D950: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503D964; /* 0x1503D951: je 0x1503d964 */
L_1503D953:
    RECOMP_CALL(sub_15041234); /* 0x1503D953: call 0x15041234 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D958: pop ecx */
    PUSH32(esp, eax); /* 0x1503D959: push eax */
    ecx = ebp + (-0x10); /* 0x1503D95A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D95D: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503D973; /* 0x1503D962: jmp 0x1503d973 */
L_1503D964:
    RECOMP_CALL(sub_15041234); /* 0x1503D964: call 0x15041234 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D969: pop ecx */
    PUSH32(esp, eax); /* 0x1503D96A: push eax */
    ecx = ebp + (-0x10); /* 0x1503D96B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503D96E: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503D973:
    ecx = MEM32(0x150BDB4C); /* 0x1503D973: mov ecx, dword ptr [0x150bdb4c] */
    eax = ecx; /* 0x1503D979: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503D97B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503D97B: shr eax, 1 */
    eax = ~eax; /* 0x1503D97D: not eax */
    /* test LO8(eax), 1 */ /* 0x1503D97F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D9B1; /* 0x1503D981: je 0x1503d9b1 */
L_1503D983:
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x1503D983: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x1503D983: shr ecx, 4 */
    ecx = ~ecx; /* 0x1503D986: not ecx */
    /* test LO8(ecx), 1 */ /* 0x1503D988: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D9B1; /* 0x1503D98B: je 0x1503d9b1 */
L_1503D98D:
    eax = ebp + (-0x40); /* 0x1503D98D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503D990: push eax */
    RECOMP_CALL(sub_1503E7BB); /* 0x1503D991: call 0x1503e7bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D996: pop ecx */
    ecx = ebp + (-0x28); /* 0x1503D997: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503D99A: push ecx */
    ecx = ebp + (-0x48); /* 0x1503D99B: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x1503D99E: push ecx */
    ecx = eax; /* 0x1503D99F: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D9A1: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503D9A6: push eax */
    ecx = ebp + (-0x28); /* 0x1503D9A7: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503D9AA: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503D9C4; /* 0x1503D9AF: jmp 0x1503d9c4 */
L_1503D9B1:
    eax = ebp + (-0x48); /* 0x1503D9B1: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1503D9B4: push eax */
    RECOMP_CALL(sub_1503E7BB); /* 0x1503D9B5: call 0x1503e7bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503D9BA: pop ecx */
    PUSH32(esp, eax); /* 0x1503D9BB: push eax */
    ecx = ebp + (-0x28); /* 0x1503D9BC: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503D9BF: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503D9C4:
    ecx = esi; /* 0x1503D9C4: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503D9C6: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D9CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DA14; /* 0x1503D9CD: jne 0x1503da14 */
L_1503D9CF:
    ecx = ebp + (-0x28); /* 0x1503D9CF: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_15041A30); /* 0x1503D9D2: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503D9D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DA0B; /* 0x1503D9D9: jne 0x1503da0b */
L_1503D9DB:
    /* test MEM32(0x150BDB4C), 0x1000u */ /* 0x1503D9DB: test dword ptr [0x150bdb4c], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DA0B; /* 0x1503D9E5: jne 0x1503da0b */
L_1503D9E7:
    PUSH32(esp, 0x20u); /* 0x1503D9E7: push 0x20 */
    ecx = ebp + (-0x48); /* 0x1503D9E9: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_1503C947); /* 0x1503D9EC: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503D9F1: push esi */
    ecx = ebp + (-0x40); /* 0x1503D9F2: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503D9F5: push ecx */
    ecx = eax; /* 0x1503D9F6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503D9F8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503D9FD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503DA00: push eax */
    ecx = ebp + (-0x28); /* 0x1503DA01: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DA04: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_1503DA14; /* 0x1503DA09: jmp 0x1503da14 */
L_1503DA0B:
    PUSH32(esp, esi); /* 0x1503DA0B: push esi */
    ecx = ebp + (-0x28); /* 0x1503DA0C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DA0F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503DA14:
    esi = 0xFFFFF000u; /* 0x1503DA14: mov esi, 0xfffff000 */
    MEM32(ebp + (-0x40)) = edi; /* 0x1503DA19: mov dword ptr [ebp - 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & esi; /* 0x1503DA1C: and dword ptr [ebp - 0x3c], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503DA1F: push edi */
    /* cmp MEM32(ebp + (-0x14)), edi */ /* 0x1503DA20: cmp dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DA69; /* 0x1503DA23: je 0x1503da69 */
L_1503DA25:
    eax = ebp + (-0x48); /* 0x1503DA25: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1503DA28: push eax */
    RECOMP_CALL(sub_150404E9); /* 0x1503DA29: call 0x150404e9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DA2E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503DA2F: pop ecx */
    PUSH32(esp, 0x150045F0u); /* 0x1503DA30: push 0x150045f0 */
    ecx = ebp + (-0x50); /* 0x1503DA35: lea ecx, [ebp - 0x50] */
    esi = eax; /* 0x1503DA38: mov esi, eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DA3A: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503DA3F: push esi */
    ecx = ebp + (-0x18); /* 0x1503DA40: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503DA43: push ecx */
    ecx = eax; /* 0x1503DA44: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DA46: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1503DA4B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503DA4E: push eax */
    ecx = ebp + (-0x28); /* 0x1503DA4F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DA52: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x150BDB4C), 0x1000u */ /* 0x1503DA57: test dword ptr [0x150bdb4c], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DF41; /* 0x1503DA61: jne 0x1503df41 */
L_1503DA67:
    goto L_1503DA95; /* 0x1503DA67: jmp 0x1503da95 */
L_1503DA69:
    PUSH32(esp, 8); /* 0x1503DA69: push 8 */
    ecx = 0x150BDB20u; /* 0x1503DA6B: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503DA70: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503DA75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DA80; /* 0x1503DA77: je 0x1503da80 */
L_1503DA79:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & esi; /* 0x1503DA79: and dword ptr [eax + 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edi; /* 0x1503DA7C: mov dword ptr [eax], edi */
    edi = eax; /* 0x1503DA7E: mov edi, eax */
L_1503DA80:
    eax = ebp + (-0x50); /* 0x1503DA80: lea eax, [ebp - 0x50] */
    PUSH32(esp, edi); /* 0x1503DA83: push edi */
    PUSH32(esp, eax); /* 0x1503DA84: push eax */
    RECOMP_CALL(sub_150404E9); /* 0x1503DA85: call 0x150404e9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DA8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503DA8B: pop ecx */
    PUSH32(esp, eax); /* 0x1503DA8C: push eax */
    ecx = ebp + (-0x40); /* 0x1503DA8D: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DA90: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503DA95:
    eax = ebx; /* 0x1503DA95: mov eax, ebx */
    edx = 0x1800u; /* 0x1503DA97: mov edx, 0x1800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1503DA9C: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x800u; /* 0x1503DA9E: mov esi, 0x800 */
    /* cmp eax, esi */ /* 0x1503DAA3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x1000u; /* 0x1503DAA5: mov ecx, 0x1000 */
    eax = 0x400u; /* 0x1503DAAA: mov eax, 0x400 */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = eax; } /* 0x1503DAAF: cmove ecx, eax */
    /* test ebx, ecx */ /* 0x1503DAB2: test ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DB9C; /* 0x1503DAB4: je 0x1503db9c */
L_1503DABA:
    eax = ebx; /* 0x1503DABA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1503DABC: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1503DABE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DB75; /* 0x1503DAC0: jne 0x1503db75 */
L_1503DAC6:
    eax = ebx; /* 0x1503DAC6: mov eax, ebx */
    ecx = 0x700u; /* 0x1503DAC8: mov ecx, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503DACD: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x1503DACF: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DB35; /* 0x1503DAD4: jne 0x1503db35 */
L_1503DAD6:
    PUSH32(esp, 0x150045F4u); /* 0x1503DAD6: push 0x150045f4 */
    ecx = ebp + (-0x50); /* 0x1503DADB: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DADE: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503DAE3: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503DAE6: push ecx */
    ecx = ebp + (-0x18); /* 0x1503DAE7: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503DAEA: push ecx */
    ecx = eax; /* 0x1503DAEB: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DAED: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1503DAF2: push 0x2c */
    eax = ebp + (-0x48); /* 0x1503DAF4: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1503DAF7: push eax */
    ecx = ebp + (-0x18); /* 0x1503DAF8: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503DAFB: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x1503DB00: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x1503DB03: push ecx */
    ecx = ebp + (-0x58); /* 0x1503DB04: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x1503DB07: push ecx */
    ecx = eax; /* 0x1503DB08: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DB0A: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1503DB0F: push 0x2c */
    ecx = ebp + (-0x60); /* 0x1503DB11: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x1503DB14: push ecx */
    ecx = eax; /* 0x1503DB15: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503DB17: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1503DB1C: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503DB1F: push ecx */
    ecx = ebp + (-0x68); /* 0x1503DB20: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x1503DB23: push ecx */
    ecx = eax; /* 0x1503DB24: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DB26: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x70); /* 0x1503DB2B: lea ecx, [ebp - 0x70] */
    PUSH32(esp, 0x2Cu); /* 0x1503DB2E: push 0x2c */
    PUSH32(esp, ecx); /* 0x1503DB30: push ecx */
    ecx = eax; /* 0x1503DB31: mov ecx, eax */
    goto L_1503DB65; /* 0x1503DB33: jmp 0x1503db65 */
L_1503DB35:
    eax = ebx; /* 0x1503DB35: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1503DB37: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x500u */ /* 0x1503DB39: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DB75; /* 0x1503DB3E: jne 0x1503db75 */
L_1503DB40:
    PUSH32(esp, 0x15004604u); /* 0x1503DB40: push 0x15004604 */
    ecx = ebp + (-0x70); /* 0x1503DB45: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DB48: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1503DB4D: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503DB50: push ecx */
    ecx = ebp + (-0x30); /* 0x1503DB51: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x1503DB54: push ecx */
    ecx = eax; /* 0x1503DB55: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DB57: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x1503DB5C: push 0x2c */
    eax = ebp + (-0x68); /* 0x1503DB5E: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1503DB61: push eax */
    ecx = ebp + (-0x30); /* 0x1503DB62: lea ecx, [ebp - 0x30] */
L_1503DB65:
    RECOMP_CALL(sub_1503D0F8); /* 0x1503DB65: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503DB6A: push eax */
    ecx = ebp + (-0x28); /* 0x1503DB6B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DB6E: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_1503DB82; /* 0x1503DB73: jmp 0x1503db82 */
L_1503DB75:
    PUSH32(esp, 0x15004610u); /* 0x1503DB75: push 0x15004610 */
    ecx = ebp + (-0x28); /* 0x1503DB7A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503DB7D: call 0x1503d28c */
    RECOMP_FLAGS_IN();
L_1503DB82:
    PUSH32(esp, 0x150045E8u); /* 0x1503DB82: push 0x150045e8 */
    eax = ebp + (-0x70); /* 0x1503DB87: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1503DB8A: push eax */
    ecx = ebp + (-0x38); /* 0x1503DB8B: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1503D132); /* 0x1503DB8E: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503DB93: push eax */
    ecx = ebp + (-0x28); /* 0x1503DB94: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DB97: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503DB9C:
    eax = ebp + (-0x70); /* 0x1503DB9C: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1503DB9F: push eax */
    RECOMP_CALL(sub_1503E0E6); /* 0x1503DBA0: call 0x1503e0e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DBA5: pop ecx */
    PUSH32(esp, 0x28u); /* 0x1503DBA6: push 0x28 */
    ecx = ebp + (-0x68); /* 0x1503DBA8: lea ecx, [ebp - 0x68] */
    esi = eax; /* 0x1503DBAB: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503DBAD: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503DBB2: push esi */
    ecx = ebp + (-0x38); /* 0x1503DBB3: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1503DBB6: push ecx */
    ecx = eax; /* 0x1503DBB7: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DBB9: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1503DBBE: push 0x29 */
    eax = ebp + (-0x60); /* 0x1503DBC0: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x1503DBC3: push eax */
    ecx = ebp + (-0x38); /* 0x1503DBC4: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503DBC7: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503DBCC: push eax */
    ecx = ebp + (-0x28); /* 0x1503DBCD: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DBD0: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1503DBD5: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1800u);
    eax = eax & 0x1800u; /* 0x1503DBD7: and eax, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x1503DBDC: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DBFD; /* 0x1503DBE1: jne 0x1503dbfd */
L_1503DBE3:
    eax = ebx; /* 0x1503DBE3: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x1503DBE5: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x200u */ /* 0x1503DBEA: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DBFD; /* 0x1503DBEF: je 0x1503dbfd */
L_1503DBF1:
    eax = ebp + (-0x10); /* 0x1503DBF1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503DBF4: push eax */
    ecx = ebp + (-0x28); /* 0x1503DBF5: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DBF8: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503DBFD:
    eax = MEM32(0x150BDB4C); /* 0x1503DBFD: mov eax, dword ptr [0x150bdb4c] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1503DC02: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1503DC02: shr eax, 8 */
    eax = ~eax; /* 0x1503DC05: not eax */
    /* test LO8(eax), 1 */ /* 0x1503DC07: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x70); /* 0x1503DC09: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1503DC0C: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DC20; /* 0x1503DC0D: je 0x1503dc20 */
L_1503DC0F:
    RECOMP_CALL(sub_15041270); /* 0x1503DC0F: call 0x15041270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DC14: pop ecx */
    PUSH32(esp, eax); /* 0x1503DC15: push eax */
    ecx = ebp + (-0x28); /* 0x1503DC16: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DC19: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_1503DC2F; /* 0x1503DC1E: jmp 0x1503dc2f */
L_1503DC20:
    RECOMP_CALL(sub_15041270); /* 0x1503DC20: call 0x15041270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DC25: pop ecx */
    PUSH32(esp, eax); /* 0x1503DC26: push eax */
    ecx = ebp + (-0x28); /* 0x1503DC27: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503DC2A: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503DC2F:
    eax = MEM32(0x150BDB4C); /* 0x1503DC2F: mov eax, dword ptr [0x150bdb4c] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1503DC34: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1503DC34: shr eax, 2 */
    eax = ~eax; /* 0x1503DC37: not eax */
    /* test LO8(eax), 1 */ /* 0x1503DC39: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D742; /* 0x1503DC3B: je 0x1503d742 */
L_1503DC41:
    /* test edi, edi */ /* 0x1503DC41: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503D742; /* 0x1503DC43: je 0x1503d742 */
L_1503DC49:
    eax = ebp + (-0x28); /* 0x1503DC49: lea eax, [ebp - 0x28] */
    ecx = edi; /* 0x1503DC4C: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1503DC4E: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DC4F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503DC54: lea eax, [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_1503D739; /* 0x1503DC57: jmp 0x1503d739 */
L_1503DC5C:
    PUSH32(esp, esi); /* 0x1503DC5C: push esi */
    ecx = ebp + (-0x28); /* 0x1503DC5D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503DC60: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    esi = 0x7C00u; /* 0x1503DC65: mov esi, 0x7c00 */
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1503DC6A: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DCE2; /* 0x1503DC6D: jne 0x1503dce2 */
L_1503DC6F:
    eax = ebx; /* 0x1503DC6F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DC71: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x6800u */ /* 0x1503DC73: cmp eax, 0x6800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DCCF; /* 0x1503DC78: je 0x1503dccf */
L_1503DC7A:
    eax = ebx; /* 0x1503DC7A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DC7C: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7000u */ /* 0x1503DC7E: cmp eax, 0x7000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DCCF; /* 0x1503DC83: je 0x1503dccf */
L_1503DC85:
    eax = ebx; /* 0x1503DC85: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DC87: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x6000u */ /* 0x1503DC89: cmp eax, 0x6000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DCE2; /* 0x1503DC8E: jne 0x1503dce2 */
L_1503DC90:
    PUSH32(esp, 0x7Bu); /* 0x1503DC90: push 0x7b */
    eax = ebp + (-0x70); /* 0x1503DC92: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1503DC95: push eax */
    ecx = ebp + (-0x28); /* 0x1503DC96: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503DC99: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503DC9E: mov esi, eax */
    eax = ebp + (-0x40); /* 0x1503DCA0: lea eax, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x1503DCA3: push edi */
    PUSH32(esp, eax); /* 0x1503DCA4: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503DCA5: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DCAA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503DCAB: pop ecx */
    eax = ebp + (-0x40); /* 0x1503DCAC: lea eax, [ebp - 0x40] */
    ecx = esi; /* 0x1503DCAF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1503DCB1: push eax */
    eax = ebp + (-0x68); /* 0x1503DCB2: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1503DCB5: push eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DCB6: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150045ECu); /* 0x1503DCBB: push 0x150045ec */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503DCC0: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503DCC3: mov ecx, eax */
    RECOMP_CALL(sub_1503D132); /* 0x1503DCC5: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    goto L_1503DF4D; /* 0x1503DCCA: jmp 0x1503df4d */
L_1503DCCF:
    eax = ebp + (-0x28); /* 0x1503DCCF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503DCD2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503DCD3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150416BB); /* 0x1503DCD6: call 0x150416bb */
    RECOMP_FLAGS_IN();
L_1503DCDB:
    ecx = POP32_VAL(esp); /* 0x1503DCDB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503DCDC: pop ecx */
    goto L_1503DF4D; /* 0x1503DCDD: jmp 0x1503df4d */
L_1503DCE2:
    eax = ebx; /* 0x1503DCE2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFC00u);
    eax = eax & 0xFC00u; /* 0x1503DCE4: and eax, 0xfc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1503DCE9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503DCFB; /* 0x1503DCEB: jne 0x1503dcfb */
L_1503DCED:
    eax = ebp + (-0x28); /* 0x1503DCED: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503DCF0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503DCF1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15041662); /* 0x1503DCF4: call 0x15041662 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503DCDB; /* 0x1503DCF9: jmp 0x1503dcdb */
L_1503DCFB:
    eax = ebx; /* 0x1503DCFB: mov eax, ebx */
    edx = ebx; /* 0x1503DCFD: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1800u);
    eax = eax & 0x1800u; /* 0x1503DCFF: and eax, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x8000u; /* 0x1503DD04: mov edi, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1503DD09: sub eax, 0x800 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503DD0E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD10: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6000u);
    edx = edx & 0x6000u; /* 0x1503DD12: and edx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503DD18: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1503DD19: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD1B: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503DD1D: inc edx */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503DD1E: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x1503DD20: cmovne edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1503DD23: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD25: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFF400u);
    edx = edx & 0xFFFFF400u; /* 0x1503DD27: and edx, 0xfffff400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1000u; /* 0x1503DD2D: add edx, 0x1000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x1503DD33: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DDAE; /* 0x1503DD35: je 0x1503ddae */
L_1503DD37:
    esi = ebx; /* 0x1503DD37: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503DD39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1B00u);
    esi = esi & 0x1B00u; /* 0x1503DD3B: and esi, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1503DD41: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1503DD43: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x1000u */ /* 0x1503DD45: cmp esi, 0x1000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DD4B: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DD4E: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD50: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1503DD52: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DD65; /* 0x1503DD54: je 0x1503dd65 */
L_1503DD56:
    PUSH32(esp, 0x1500461Cu); /* 0x1503DD56: push 0x1500461c */
    ecx = ebp + (-0x28); /* 0x1503DD5B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503DD5E: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    goto L_1503DDC5; /* 0x1503DD63: jmp 0x1503ddc5 */
L_1503DD65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503DD65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1503DD67: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1503DD69: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x1100u */ /* 0x1503DD6B: cmp esi, 0x1100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DD71: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DD74: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD76: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1503DD78: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DD8B; /* 0x1503DD7A: je 0x1503dd8b */
L_1503DD7C:
    PUSH32(esp, 0x15004640u); /* 0x1503DD7C: push 0x15004640 */
L_1503DD81:
    ecx = ebp + (-0x28); /* 0x1503DD81: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503DD84: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    goto L_1503DDFB; /* 0x1503DD89: jmp 0x1503ddfb */
L_1503DD8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503DD8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1503DD8D: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1503DD8F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x1200u */ /* 0x1503DD91: cmp esi, 0x1200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DD97: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DD9A: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DD9C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1503DD9E: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DDA9; /* 0x1503DDA0: je 0x1503dda9 */
L_1503DDA2:
    PUSH32(esp, 0x15004674u); /* 0x1503DDA2: push 0x15004674 */
    RECOMP_BACKEDGE();
    goto L_1503DD81; /* 0x1503DDA7: jmp 0x1503dd81 */
L_1503DDA9:
    esi = 0x7C00u; /* 0x1503DDA9: mov esi, 0x7c00 */
L_1503DDAE:
    /* test edi, ebx */ /* 0x1503DDAE: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DDC1; /* 0x1503DDB0: jne 0x1503ddc1 */
L_1503DDB2:
    eax = ebx; /* 0x1503DDB2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DDB4: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7800u */ /* 0x1503DDB6: cmp eax, 0x7800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DF41; /* 0x1503DDBB: je 0x1503df41 */
L_1503DDC1:
    /* test edx, edx */ /* 0x1503DDC1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DE28; /* 0x1503DDC3: je 0x1503de28 */
L_1503DDC5:
    edx = ebx; /* 0x1503DDC5: mov edx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503DDC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1B00u);
    edx = edx & 0x1B00u; /* 0x1503DDC9: and edx, 0x1b00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1503DDCF: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1503DDD1: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x1100u */ /* 0x1503DDD3: cmp edx, 0x1100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DDD9: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DDDC: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DDDE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1503DDE0: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DDFB; /* 0x1503DDE2: jne 0x1503ddfb */
L_1503DDE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503DDE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1503DDE6: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1503DDE8: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x1200u */ /* 0x1503DDEA: cmp edx, 0x1200 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DDF0: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DDF3: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DDF5: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, ecx */ /* 0x1503DDF7: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DE28; /* 0x1503DDF9: je 0x1503de28 */
L_1503DDFB:
    PUSH32(esp, 0x150045F0u); /* 0x1503DDFB: push 0x150045f0 */
    ecx = ebp + (-0x70); /* 0x1503DE00: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DE03: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503DE08: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503DE0B: push ecx */
    ecx = ebp + (-0x40); /* 0x1503DE0C: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503DE0F: push ecx */
    ecx = eax; /* 0x1503DE10: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DE12: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503DE17: lea eax, [ebp - 0x40] */
L_1503DE1A:
    PUSH32(esp, eax); /* 0x1503DE1A: push eax */
    ecx = ebp + (-0x28); /* 0x1503DE1B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DE1E: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503D747; /* 0x1503DE23: jmp 0x1503d747 */
L_1503DE28:
    eax = ebp + (-0x28); /* 0x1503DE28: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503DE2B: push eax */
    eax = ebp + (-0x70); /* 0x1503DE2C: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1503DE2F: push eax */
    RECOMP_CALL(sub_1503F561); /* 0x1503DE30: call 0x1503f561 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503DE35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503DE36: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1503DE1A; /* 0x1503DE37: jmp 0x1503de1a */
L_1503DE39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503DE39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1503DE3B: mov eax, ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    SET_LO8(eax, LO8(eax) & 0xC0u); /* 0x1503DE3D: and al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x80u */ /* 0x1503DE3F: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx; /* 0x1503DE41: mov eax, ebx */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DE43: sete cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DE46: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x1503DE48: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503DE4D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DE4F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503DE51: inc eax */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503DE52: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503DE54: cmovne eax, ecx */
    /* test eax, eax */ /* 0x1503DE57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DE85; /* 0x1503DE59: je 0x1503de85 */
L_1503DE5B:
    PUSH32(esp, 0x150046C4u); /* 0x1503DE5B: push 0x150046c4 */
L_1503DE60:
    ecx = ebp + (-0x70); /* 0x1503DE60: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DE63: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503DE68: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503DE6B: push ecx */
    ecx = ebp + (-0x40); /* 0x1503DE6C: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503DE6F: push ecx */
    ecx = eax; /* 0x1503DE70: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DE72: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503DE77: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503DE7A: push eax */
    ecx = ebp + (-0x28); /* 0x1503DE7B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DE7E: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503DEAC; /* 0x1503DE83: jmp 0x1503deac */
L_1503DE85:
    /* test LO8(ebx), 0xC0u */ /* 0x1503DE85: test bl, 0xc0 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx; /* 0x1503DE88: mov eax, ebx */
    PUSH32(esp, 0); /* 0x1503DE8A: push 0 */
    ecx = POP32_VAL(esp); /* 0x1503DE8C: pop ecx */
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503DE8D: sete cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DE90: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503DE92: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DE94: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503DE96: inc eax */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503DE97: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503DE99: cmovne eax, ecx */
    /* test eax, eax */ /* 0x1503DE9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DEAC; /* 0x1503DE9E: je 0x1503deac */
L_1503DEA0:
    PUSH32(esp, 0x150046D0u); /* 0x1503DEA0: push 0x150046d0 */
    RECOMP_BACKEDGE();
    goto L_1503DE60; /* 0x1503DEA5: jmp 0x1503de60 */
L_1503DEA7:
    esi = 0x1800u; /* 0x1503DEA7: mov esi, 0x1800 */
L_1503DEAC:
    eax = ebx; /* 0x1503DEAC: mov eax, ebx */
    ecx = ebx; /* 0x1503DEAE: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1503DEB0: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x800u; /* 0x1503DEB2: sub eax, 0x800 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1503DEB7: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DEB9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6000u);
    ecx = ecx & 0x6000u; /* 0x1503DEBB: and ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503DEC1: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DEC2: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DEC4: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503DEC6: inc ecx */
    _flag_k = FK_INC;
    /* test edi, ebx */ /* 0x1503DEC7: test edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = eax; } /* 0x1503DEC9: cmovne ecx, eax */
    eax = 0x1000u; /* 0x1503DECC: mov eax, 0x1000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1503DED1: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1503DED3: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF400u);
    ecx = ecx & 0xFFFFF400u; /* 0x1503DED5: and ecx, 0xfffff400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1503DEDB: add ecx, eax */
    _flag_k = FK_ADD;
    /* test ebx, ecx */ /* 0x1503DEDD: test ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DF11; /* 0x1503DEDF: je 0x1503df11 */
L_1503DEE1:
    /* test MEM32(0x150BDB4C), eax */ /* 0x1503DEE1: test dword ptr [0x150bdb4c], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503DF11; /* 0x1503DEE7: jne 0x1503df11 */
L_1503DEE9:
    PUSH32(esp, 0x150046DCu); /* 0x1503DEE9: push 0x150046dc */
    ecx = ebp + (-0x70); /* 0x1503DEEE: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DEF1: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503DEF6: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503DEF9: push ecx */
    ecx = ebp + (-0x40); /* 0x1503DEFA: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503DEFD: push ecx */
    ecx = eax; /* 0x1503DEFE: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DF00: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503DF05: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503DF08: push eax */
    ecx = ebp + (-0x28); /* 0x1503DF09: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DF0C: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503DF11:
    /* test ebx, 0x00010000u */ /* 0x1503DF11: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DF41; /* 0x1503DF17: je 0x1503df41 */
L_1503DF19:
    PUSH32(esp, 0x150046E8u); /* 0x1503DF19: push 0x150046e8 */
    ecx = ebp + (-0x70); /* 0x1503DF1E: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503DF21: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1503DF26: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503DF29: push ecx */
    ecx = ebp + (-0x40); /* 0x1503DF2A: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1503DF2D: push ecx */
    ecx = eax; /* 0x1503DF2E: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503DF30: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x1503DF35: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1503DF38: push eax */
    ecx = ebp + (-0x28); /* 0x1503DF39: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503DF3C: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503DF41:
    eax = ebp + (-0x28); /* 0x1503DF41: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503DF44: push eax */
L_1503DF45:
    ecx = MEM32(ebp + 0x8); /* 0x1503DF45: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503DF48: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
L_1503DF4D:
    eax = MEM32(ebp + 0x8); /* 0x1503DF4D: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503DF50: pop edi */
    esi = POP32_VAL(esp); /* 0x1503DF51: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503DF52: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503DF53: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503DF54: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503DF5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503DF5Bu);

L_1503DF5B:
    edi = edi; /* 0x1503DF5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503DF5D: push ebp */
    ebp = esp; /* 0x1503DF5E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503DF60: push esi */
    esi = ecx; /* 0x1503DF61: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1503DF63: mov eax, dword ptr [esi + 4] */
    ecx = eax; /* 0x1503DF66: mov ecx, eax */
    if (28u) _cf = (((ecx) >> 4) & 1u); /* 0x1503DF68: shl ecx, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((ecx << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 28u; /* 0x1503DF68: shl ecx, 0x1c */
    if (28u) _cf = (((ecx) >> 27) & 1u); /* 0x1503DF6B: sar ecx, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 28u);
    /* cmp ecx, 1 */ /* 0x1503DF6E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E004; /* 0x1503DF71: je 0x1503e004 */
L_1503DF77:
    /* cmp ecx, 3 */ /* 0x1503DF77: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E004; /* 0x1503DF7A: je 0x1503e004 */
L_1503DF80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503DF80: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edx */ /* 0x1503DF82: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DF91; /* 0x1503DF84: je 0x1503df91 */
L_1503DF86:
    PUSH32(esp, 3); /* 0x1503DF86: push 3 */
    ecx = esi; /* 0x1503DF88: mov ecx, esi */
    RECOMP_CALL(sub_1503CDE3); /* 0x1503DF8A: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
    goto L_1503E004; /* 0x1503DF8F: jmp 0x1503e004 */
L_1503DF91:
    PUSH32(esp, edi); /* 0x1503DF91: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503DF92: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1503DF95: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DFFA; /* 0x1503DF97: je 0x1503dffa */
L_1503DF99:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1503DF99: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503DFFA; /* 0x1503DF9C: je 0x1503dffa */
L_1503DF9E:
    ecx = MEM32(ebp + 0xC); /* 0x1503DF9E: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1503DFA1: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503DFD4; /* 0x1503DFA3: je 0x1503dfd4 */
L_1503DFA5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503DFA5: sub ecx, 1 */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1503DFA8: push edx */
    ecx = 0x150BDB20u; /* 0x1503DFA9: mov ecx, 0x150bdb20 */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503DFDC; /* 0x1503DFAE: je 0x1503dfdc */
L_1503DFB0:
    PUSH32(esp, 0x10u); /* 0x1503DFB0: push 0x10 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503DFB2: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503DFB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DFCE; /* 0x1503DFB9: je 0x1503dfce */
L_1503DFBB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503DFBB: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1503DFBE: mov ecx, eax */
    PUSH32(esp, edi); /* 0x1503DFC0: push edi */
    RECOMP_CALL(sub_1503CC93); /* 0x1503DFC1: call 0x1503cc93 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503DFC6: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x1503DFC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E003; /* 0x1503DFCA: jne 0x1503e003 */
L_1503DFCC:
    goto L_1503DFD1; /* 0x1503DFCC: jmp 0x1503dfd1 */
L_1503DFCE:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503DFCE: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503DFD1:
    eax = MEM32(esi + 0x4); /* 0x1503DFD1: mov eax, dword ptr [esi + 4] */
L_1503DFD4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF3u);
    eax = eax & 0xFFFFFFF3u; /* 0x1503DFD4: and eax, 0xfffffff3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x1503DFD7: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503E000; /* 0x1503DFDA: jmp 0x1503e000 */
L_1503DFDC:
    PUSH32(esp, 0xCu); /* 0x1503DFDC: push 0xc */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503DFDE: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503DFE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503DFCE; /* 0x1503DFE5: je 0x1503dfce */
L_1503DFE7:
    SET_LO8(ecx, MEM8(edi)); /* 0x1503DFE7: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1503DFE9: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x150011B8u; /* 0x1503DFED: mov dword ptr [eax], 0x150011b8 */
    MEM8(eax + 0x8) = (uint8_t)(LO8(ecx)); /* 0x1503DFF3: mov byte ptr [eax + 8], cl */
    MEM32(esi) = eax; /* 0x1503DFF6: mov dword ptr [esi], eax */
    goto L_1503E003; /* 0x1503DFF8: jmp 0x1503e003 */
L_1503DFFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF1u);
    eax = eax & 0xFFFFFFF1u; /* 0x1503DFFA: and eax, 0xfffffff1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503DFFD: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503E000:
    MEM32(esi + 0x4) = eax; /* 0x1503E000: mov dword ptr [esi + 4], eax */
L_1503E003:
    edi = POP32_VAL(esp); /* 0x1503E003: pop edi */
L_1503E004:
    esi = POP32_VAL(esp); /* 0x1503E004: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503E005: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503E006: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1503E00F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E00Fu);

L_1503E00F:
    edi = edi; /* 0x1503E00F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E011: push ebp */
    ebp = esp; /* 0x1503E012: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1503E014: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503E017: push ebx */
    PUSH32(esp, esi); /* 0x1503E018: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503E019: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503E01C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503E01E: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1503E01F: push edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503E020: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x1503E023: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503E02A:
    edi = MEM32(0x150BDB3C); /* 0x1503E02A: mov edi, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(edi)); /* 0x1503E030: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x40u */ /* 0x1503E032: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E0D9; /* 0x1503E034: je 0x1503e0d9 */
L_1503E03A:
    /* cmp LO8(eax), 0x5Au */ /* 0x1503E03A: cmp al, 0x5a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E0D9; /* 0x1503E03C: je 0x1503e0d9 */
L_1503E042:
    /* test ebx, ebx */ /* 0x1503E042: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E04A; /* 0x1503E044: je 0x1503e04a */
L_1503E046:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503E046: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503E059; /* 0x1503E048: jmp 0x1503e059 */
L_1503E04A:
    PUSH32(esp, 0x2Cu); /* 0x1503E04A: push 0x2c */
    ecx = esi; /* 0x1503E04C: mov ecx, esi */
    RECOMP_CALL(sub_1503D215); /* 0x1503E04E: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x150BDB3C); /* 0x1503E053: mov edi, dword ptr [0x150bdb3c] */
L_1503E059:
    SET_LO8(eax, MEM8(edi)); /* 0x1503E059: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503E05B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E0D0; /* 0x1503E05D: je 0x1503e0d0 */
L_1503E05F:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1503E05F: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1503E062: add eax, -0x30 */
    _flag_k = FK_ADD;
    /* cmp eax, 9 */ /* 0x1503E065: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E07F; /* 0x1503E068: ja 0x1503e07f */
L_1503E06A:
    ecx = MEM32(0x150BDB1C); /* 0x1503E06A: mov ecx, dword ptr [0x150bdb1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503E070: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1503E071: push eax */
    MEM32(0x150BDB3C) = edi; /* 0x1503E072: mov dword ptr [0x150bdb3c], edi */
    RECOMP_CALL(sub_1503CE7F); /* 0x1503E078: call 0x1503ce7f */
    RECOMP_FLAGS_IN();
    goto L_1503E0BC; /* 0x1503E07D: jmp 0x1503e0bc */
L_1503E07F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503E07F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1503E083: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFF000u; /* 0x1503E086: and dword ptr [ebp - 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503E08D: push eax */
    eax = ebp + (-0x10); /* 0x1503E08E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503E091: push eax */
    RECOMP_CALL(sub_15040193); /* 0x1503E092: call 0x15040193 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503E097: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1503E09C: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1503E09E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503E09F: pop ecx */
    /* cmp eax, 1 */ /* 0x1503E0A0: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503E0B9; /* 0x1503E0A3: jle 0x1503e0b9 */
L_1503E0A5:
    ecx = MEM32(0x150BDB1C); /* 0x1503E0A5: mov ecx, dword ptr [0x150bdb1c] */
    /* cmp MEM32(ecx), 9 */ /* 0x1503E0AB: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E0B9; /* 0x1503E0AE: je 0x1503e0b9 */
L_1503E0B0:
    eax = ebp + (-0x10); /* 0x1503E0B0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503E0B3: push eax */
    RECOMP_CALL(sub_1503D3CD); /* 0x1503E0B4: call 0x1503d3cd */
    RECOMP_FLAGS_IN();
L_1503E0B9:
    eax = ebp + (-0x10); /* 0x1503E0B9: lea eax, [ebp - 0x10] */
L_1503E0BC:
    PUSH32(esp, eax); /* 0x1503E0BC: push eax */
    ecx = esi; /* 0x1503E0BD: mov ecx, esi */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503E0BF: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x4), 0xFu */ /* 0x1503E0C4: test byte ptr [esi + 4], 0xf */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E02A; /* 0x1503E0C8: je 0x1503e02a */
L_1503E0CE:
    goto L_1503E0D9; /* 0x1503E0CE: jmp 0x1503e0d9 */
L_1503E0D0:
    PUSH32(esp, 2); /* 0x1503E0D0: push 2 */
    ecx = esi; /* 0x1503E0D2: mov ecx, esi */
    RECOMP_CALL(sub_1503D305); /* 0x1503E0D4: call 0x1503d305 */
    RECOMP_FLAGS_IN();
L_1503E0D9:
    edi = POP32_VAL(esp); /* 0x1503E0D9: pop edi */
    eax = esi; /* 0x1503E0DA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503E0DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503E0DD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E0DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E0DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503E0E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E0E6u);

L_1503E0E6:
    edi = edi; /* 0x1503E0E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E0E8: push ebp */
    ebp = esp; /* 0x1503E0E9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503E0EB: push ecx */
    PUSH32(esp, ecx); /* 0x1503E0EC: push ecx */
    eax = MEM32(0x150BDB3C); /* 0x1503E0ED: mov eax, dword ptr [0x150bdb3c] */
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x1503E0F2: movsx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x1503E0F5: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E198; /* 0x1503E0F8: je 0x1503e198 */
L_1503E0FE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1503E0FE: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503E0FF: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E176; /* 0x1503E102: je 0x1503e176 */
L_1503E104:
    eax = ebp + (-0x8); /* 0x1503E104: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E107: push eax */
    RECOMP_CALL(sub_1503E00F); /* 0x1503E108: call 0x1503e00f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x4)), 0xFu */ /* 0x1503E10D: test byte ptr [ebp - 4], 0xf */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x1503E111: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E168; /* 0x1503E112: jne 0x1503e168 */
L_1503E114:
    eax = MEM32(0x150BDB3C); /* 0x1503E114: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503E119: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503E11B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E168; /* 0x1503E11D: je 0x1503e168 */
L_1503E11F:
    /* cmp LO8(ecx), 0x40u */ /* 0x1503E11F: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E162; /* 0x1503E122: je 0x1503e162 */
L_1503E124:
    /* cmp LO8(ecx), 0x5Au */ /* 0x1503E124: cmp cl, 0x5a */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E135; /* 0x1503E127: je 0x1503e135 */
L_1503E129:
    ecx = MEM32(ebp + 0x8); /* 0x1503E129: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1503E12C: push 1 */
    RECOMP_CALL(sub_1503CA39); /* 0x1503E12E: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_1503E1AB; /* 0x1503E133: jmp 0x1503e1ab */
L_1503E135:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E135: inc eax */
    _flag_k = FK_INC;
    ecx = 0x15004750u; /* 0x1503E136: mov ecx, 0x15004750 */
    MEM32(0x150BDB3C) = eax; /* 0x1503E13B: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(0x150BDB4C); /* 0x1503E140: mov eax, dword ptr [0x150bdb4c] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x1503E145: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x1503E145: shr eax, 0x12 */
    eax = ~eax; /* 0x1503E148: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E14A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x15004748u; /* 0x1503E14C: mov eax, 0x15004748 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503E151: cmove eax, ecx */
    ecx = ebp + (-0x8); /* 0x1503E154: lea ecx, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E157: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503E158: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D132); /* 0x1503E15B: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    goto L_1503E1AB; /* 0x1503E160: jmp 0x1503e1ab */
L_1503E162:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E162: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503E163: mov dword ptr [0x150bdb3c], eax */
L_1503E168:
    ecx = MEM32(ebp + 0x8); /* 0x1503E168: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x1503E16B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E16E: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E16F: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503E1AB; /* 0x1503E174: jmp 0x1503e1ab */
L_1503E176:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E176: inc eax */
    _flag_k = FK_INC;
    ecx = 0x1500473Cu; /* 0x1503E177: mov ecx, 0x1500473c */
    MEM32(0x150BDB3C) = eax; /* 0x1503E17C: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(0x150BDB4C); /* 0x1503E181: mov eax, dword ptr [0x150bdb4c] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x1503E186: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x1503E186: shr eax, 0x12 */
    eax = ~eax; /* 0x1503E189: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E18B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x15004738u; /* 0x1503E18D: mov eax, 0x15004738 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503E192: cmove eax, ecx */
    PUSH32(esp, eax); /* 0x1503E195: push eax */
    goto L_1503E1A3; /* 0x1503E196: jmp 0x1503e1a3 */
L_1503E198:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E198: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503E199: mov dword ptr [0x150bdb3c], eax */
    PUSH32(esp, 0x150045C4u); /* 0x1503E19E: push 0x150045c4 */
L_1503E1A3:
    ecx = MEM32(ebp + 0x8); /* 0x1503E1A3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503E1A6: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
L_1503E1AB:
    eax = MEM32(ebp + 0x8); /* 0x1503E1AB: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E1AE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E1AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503E1B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E1B6u);

L_1503E1B6:
    edi = edi; /* 0x1503E1B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E1B8: push ebp */
    ebp = esp; /* 0x1503E1B9: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x1503E1BB: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1503E1C0: sub esp, 0x30 */
    _flag_k = FK_CMP;
    /* cmp MEM8(eax), 0 */ /* 0x1503E1C3: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x1503E1C6: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E2DF; /* 0x1503E1C7: je 0x1503e2df */
L_1503E1CD:
    RECOMP_CALL(sub_1503FAE7); /* 0x1503E1CD: call 0x1503fae7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503E1D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1503E1D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { ebx = eax; } /* 0x1503E1D6: cmovns ebx, eax */
    /* test ebx, ebx */ /* 0x1503E1D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E1FC; /* 0x1503E1DB: jne 0x1503e1fc */
L_1503E1DD:
    PUSH32(esp, 0x5Bu); /* 0x1503E1DD: push 0x5b */
    ecx = ebp + (-0x18); /* 0x1503E1DF: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503C947); /* 0x1503E1E2: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1503E1E7: push 2 */
    ecx = ebp + (-0x10); /* 0x1503E1E9: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503E1EC: push ecx */
    ecx = eax; /* 0x1503E1ED: mov ecx, eax */
    RECOMP_CALL(sub_1503D16C); /* 0x1503E1EF: call 0x1503d16c */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503E1F4: lea ecx, [ebp - 8] */
    goto L_1503E33D; /* 0x1503E1F7: jmp 0x1503e33d */
L_1503E1FC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503E1FC: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFF000u; /* 0x1503E200: and dword ptr [ebp - 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503E207: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503E208: mov edi, dword ptr [ebp + 0xc] */
    /* test MEM8(edi + 0x4), 0x80u */ /* 0x1503E20B: test byte ptr [edi + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E21E; /* 0x1503E20F: je 0x1503e21e */
L_1503E211:
    PUSH32(esp, 0x1500404Cu); /* 0x1503E211: push 0x1500404c */
    ecx = ebp + (-0x8); /* 0x1503E216: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E219: call 0x1503d28c */
    RECOMP_FLAGS_IN();
L_1503E21E:
    PUSH32(esp, esi); /* 0x1503E21E: push esi */
L_1503E21F:
    eax = ebp + (-0x20); /* 0x1503E21F: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0); /* 0x1503E222: push 0 */
    PUSH32(esp, eax); /* 0x1503E224: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503E225: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E22A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503E22B: pop ecx */
    PUSH32(esp, 0x5Bu); /* 0x1503E22C: push 0x5b */
    ecx = ebp + (-0x28); /* 0x1503E22E: lea ecx, [ebp - 0x28] */
    esi = eax; /* 0x1503E231: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503E233: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503E238: push esi */
    ecx = ebp + (-0x18); /* 0x1503E239: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503E23C: push ecx */
    ecx = eax; /* 0x1503E23D: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503E23F: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x5Du); /* 0x1503E244: push 0x5d */
    eax = ebp + (-0x30); /* 0x1503E246: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1503E249: push eax */
    ecx = ebp + (-0x18); /* 0x1503E24A: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E24D: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503E252: push eax */
    ecx = ebp + (-0x8); /* 0x1503E253: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503E256: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1503E25B: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E21F; /* 0x1503E25E: jne 0x1503e21f */
L_1503E260:
    esi = POP32_VAL(esp); /* 0x1503E260: pop esi */
    ecx = edi; /* 0x1503E261: mov ecx, edi */
    RECOMP_CALL(sub_15041A30); /* 0x1503E263: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E268: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E2BA; /* 0x1503E26A: jne 0x1503e2ba */
L_1503E26C:
    /* test MEM8(edi + 0x4), 0x80u */ /* 0x1503E26C: test byte ptr [edi + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E27E; /* 0x1503E270: je 0x1503e27e */
L_1503E272:
    eax = ebp + (-0x8); /* 0x1503E272: lea eax, [ebp - 8] */
    ecx = edi; /* 0x1503E275: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1503E277: push eax */
    eax = ebp + (-0x30); /* 0x1503E278: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1503E27B: push eax */
    goto L_1503E2AC; /* 0x1503E27C: jmp 0x1503e2ac */
L_1503E27E:
    PUSH32(esp, 0x28u); /* 0x1503E27E: push 0x28 */
    ecx = ebp + (-0x30); /* 0x1503E280: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1503C947); /* 0x1503E283: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1503E288: push edi */
    ecx = ebp + (-0x18); /* 0x1503E289: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503E28C: push ecx */
    ecx = eax; /* 0x1503E28D: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503E28F: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1503E294: push 0x29 */
    eax = ebp + (-0x28); /* 0x1503E296: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503E299: push eax */
    ecx = ebp + (-0x18); /* 0x1503E29A: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E29D: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503E2A2: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503E2A5: push ecx */
    ecx = ebp + (-0x20); /* 0x1503E2A6: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503E2A9: push ecx */
    ecx = eax; /* 0x1503E2AA: mov ecx, eax */
L_1503E2AC:
    RECOMP_CALL(sub_1503D09A); /* 0x1503E2AC: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503E2B1: push eax */
    ecx = ebp + (-0x8); /* 0x1503E2B2: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503E2B5: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503E2BA:
    eax = ebp + (-0x8); /* 0x1503E2BA: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E2BD: push eax */
    eax = ebp + (-0x10); /* 0x1503E2BE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503E2C1: push eax */
    RECOMP_CALL(sub_15040193); /* 0x1503E2C2: call 0x15040193 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0x80u)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0x80u));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0x80u; /* 0x1503E2C7: or dword ptr [ebp - 0xc], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x1503E2CE: lea eax, [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x1503E2D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503E2D2: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1503E2D3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503E2D6: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E2D7: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1503E2DC: pop edi */
    goto L_1503E352; /* 0x1503E2DD: jmp 0x1503e352 */
L_1503E2DF:
    ecx = MEM32(ebp + 0xC); /* 0x1503E2DF: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E2E2: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x1503E2E7: lea ecx, [ebp - 0x30] */
    /* test eax, eax */ /* 0x1503E2EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E326; /* 0x1503E2EC: jne 0x1503e326 */
L_1503E2EE:
    PUSH32(esp, 0x28u); /* 0x1503E2EE: push 0x28 */
    RECOMP_CALL(sub_1503C947); /* 0x1503E2F0: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503E2F5: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x18); /* 0x1503E2F8: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503E2FB: push ecx */
    ecx = eax; /* 0x1503E2FC: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503E2FE: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004874u); /* 0x1503E303: push 0x15004874 */
    eax = ebp + (-0x28); /* 0x1503E308: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503E30B: push eax */
    ecx = ebp + (-0x18); /* 0x1503E30C: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D132); /* 0x1503E30F: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1503E314: push 2 */
    ecx = ebp + (-0x20); /* 0x1503E316: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503E319: push ecx */
    ecx = eax; /* 0x1503E31A: mov ecx, eax */
    RECOMP_CALL(sub_1503D16C); /* 0x1503E31C: call 0x1503d16c */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1503E321: lea ecx, [ebp - 0x10] */
    goto L_1503E33D; /* 0x1503E324: jmp 0x1503e33d */
L_1503E326:
    PUSH32(esp, 0x5Bu); /* 0x1503E326: push 0x5b */
    RECOMP_CALL(sub_1503C947); /* 0x1503E328: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1503E32D: push 2 */
    ecx = ebp + (-0x28); /* 0x1503E32F: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1503E332: push ecx */
    ecx = eax; /* 0x1503E333: mov ecx, eax */
    RECOMP_CALL(sub_1503D16C); /* 0x1503E335: call 0x1503d16c */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1503E33A: lea ecx, [ebp - 0x20] */
L_1503E33D:
    PUSH32(esp, 0x5Du); /* 0x1503E33D: push 0x5d */
    PUSH32(esp, ecx); /* 0x1503E33F: push ecx */
    ecx = eax; /* 0x1503E340: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E342: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503E347: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503E348: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503E3F9); /* 0x1503E34B: call 0x1503e3f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E350: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503E351: pop ecx */
L_1503E352:
    eax = MEM32(ebp + 0x8); /* 0x1503E352: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x1503E355: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E356: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E357: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503E35E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E35Eu);

L_1503E35E:
    edi = edi; /* 0x1503E35E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E360: push ebp */
    ebp = esp; /* 0x1503E361: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1503E363: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1503E366: push 0 */
    RECOMP_CALL(sub_1503D495); /* 0x1503E368: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E36D: pop ecx */
    PUSH32(esp, eax); /* 0x1503E36E: push eax */
    ecx = ebp + (-0x8); /* 0x1503E36F: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503E372: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503E377: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503E37C: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503E37E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E3CB; /* 0x1503E380: je 0x1503e3cb */
L_1503E382:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E382: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503E383: mov dword ptr [0x150bdb3c], eax */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1503E388: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1503E38B: sub eax, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E3BC; /* 0x1503E38E: je 0x1503e3bc */
L_1503E390:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503E390: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E391: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E3A7; /* 0x1503E394: je 0x1503e3a7 */
L_1503E396:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1503E396: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E3D5; /* 0x1503E399: jne 0x1503e3d5 */
L_1503E39B:
    ecx = MEM32(ebp + 0x8); /* 0x1503E39B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1503E39E: push 1 */
    RECOMP_CALL(sub_1503CA39); /* 0x1503E3A0: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_1503E3EE; /* 0x1503E3A5: jmp 0x1503e3ee */
L_1503E3A7:
    eax = ebp + (-0x10); /* 0x1503E3A7: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503E3AA: push eax */
    RECOMP_CALL(sub_150407D9); /* 0x1503E3AB: call 0x150407d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E3B0: pop ecx */
    PUSH32(esp, eax); /* 0x1503E3B1: push eax */
    ecx = ebp + (-0x8); /* 0x1503E3B2: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503E3B5: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_1503E3D5; /* 0x1503E3BA: jmp 0x1503e3d5 */
L_1503E3BC:
    PUSH32(esp, 0x150045C4u); /* 0x1503E3BC: push 0x150045c4 */
    ecx = ebp + (-0x8); /* 0x1503E3C1: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E3C4: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    goto L_1503E3D5; /* 0x1503E3C9: jmp 0x1503e3d5 */
L_1503E3CB:
    PUSH32(esp, 2); /* 0x1503E3CB: push 2 */
    ecx = ebp + (-0x8); /* 0x1503E3CD: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D305); /* 0x1503E3D0: call 0x1503d305 */
    RECOMP_FLAGS_IN();
L_1503E3D5:
    PUSH32(esp, 0x150046F4u); /* 0x1503E3D5: push 0x150046f4 */
    ecx = ebp + (-0x8); /* 0x1503E3DA: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E3DD: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1503E3E2: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x1503E3E5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E3E8: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E3E9: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
L_1503E3EE:
    eax = MEM32(ebp + 0x8); /* 0x1503E3EE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E3F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E3F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503E3F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E3F9u);

L_1503E3F9:
    edi = edi; /* 0x1503E3F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E3FB: push ebp */
    ebp = esp; /* 0x1503E3FC: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x1503E3FE: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1503E403: sub esp, 0x1c */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x1503E406: mov cl, byte ptr [eax] */
    PUSH32(esp, ebx); /* 0x1503E408: push ebx */
    PUSH32(esp, esi); /* 0x1503E409: push esi */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503E40A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E77C; /* 0x1503E40C: je 0x1503e77c */
L_1503E412:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1503E412: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + 0x1; /* 0x1503E416: lea edx, [eax + 1] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0xFFFFF000u; /* 0x1503E419: and dword ptr [ebp - 8], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)LO8(ecx); /* 0x1503E420: movzx ebx, cl */
    MEM32(0x150BDB3C) = edx; /* 0x1503E423: mov dword ptr [0x150bdb3c], edx */
    eax = ebx; /* 0x1503E429: mov eax, ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1503E42B: mov byte ptr [ebp - 1], 0 */
    PUSH32(esp, 2); /* 0x1503E42F: push 2 */
    esi = POP32_VAL(esp); /* 0x1503E431: pop esi */
    /* cmp ebx, 0x4Bu */ /* 0x1503E432: cmp ebx, 0x4b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E473; /* 0x1503E435: ja 0x1503e473 */
L_1503E437:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E46C; /* 0x1503E437: je 0x1503e46c */
L_1503E439:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x43u; /* 0x1503E439: sub eax, 0x43 */
    _flag_k = FK_CMP;
    /* cmp eax, 7 */ /* 0x1503E43C: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E539; /* 0x1503E43F: ja 0x1503e539 */
L_1503E445:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1503E795)); goto _ljump; }
L_1503E44C:
    PUSH32(esp, 0x15004764u); /* 0x1503E44C: push 0x15004764 */
L_1503E451:
    ecx = ebp + (-0xC); /* 0x1503E451: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E454: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_1503E564; /* 0x1503E459: jmp 0x1503e564 */
L_1503E45E:
    PUSH32(esp, 0x1500476Cu); /* 0x1503E45E: push 0x1500476c */
    RECOMP_BACKEDGE();
    goto L_1503E451; /* 0x1503E463: jmp 0x1503e451 */
L_1503E465:
    PUSH32(esp, 0x15004774u); /* 0x1503E465: push 0x15004774 */
    RECOMP_BACKEDGE();
    goto L_1503E451; /* 0x1503E46A: jmp 0x1503e451 */
L_1503E46C:
    PUSH32(esp, 0x15004778u); /* 0x1503E46C: push 0x15004778 */
    RECOMP_BACKEDGE();
    goto L_1503E451; /* 0x1503E471: jmp 0x1503e451 */
L_1503E473:
    /* cmp ebx, 0x51u */ /* 0x1503E473: cmp ebx, 0x51 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E522; /* 0x1503E476: ja 0x1503e522 */
L_1503E47C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E49A; /* 0x1503E47C: je 0x1503e49a */
L_1503E47E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Du; /* 0x1503E47E: sub eax, 0x4d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E510; /* 0x1503E481: je 0x1503e510 */
L_1503E487:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E487: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E501; /* 0x1503E48A: je 0x1503e501 */
L_1503E48C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E48C: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E4F4; /* 0x1503E48F: je 0x1503e4f4 */
L_1503E491:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E491: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E539; /* 0x1503E494: jne 0x1503e539 */
L_1503E49A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1503E49A: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503E49D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503E49D: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1503E4A0: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x1503E4A4: lea ecx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0xFFFFF000u; /* 0x1503E4A7: and dword ptr [ebp - 8], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E4AE: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x1503E4B3: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503E71E; /* 0x1503E4B6: jne 0x1503e71e */
L_1503E4BC:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0x80u));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0x80u; /* 0x1503E4BC: or dword ptr [ebp - 0x10], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x1503E4C3: lea eax, [ebp - 0x14] */
    PUSH32(esp, 0); /* 0x1503E4C6: push 0 */
    PUSH32(esp, eax); /* 0x1503E4C8: push eax */
    eax = ebp + (-0xC); /* 0x1503E4C9: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503E4CC: push eax */
    eax = ebp + (-0x1C); /* 0x1503E4CD: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E4D0: push eax */
    RECOMP_CALL(sub_150403C9); /* 0x1503E4D1: call 0x150403c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503E4D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test MEM8(ebp + (-0x18)), 0x80u */ /* 0x1503E4D9: test byte ptr [ebp - 0x18], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E4EC; /* 0x1503E4DD: jne 0x1503e4ec */
L_1503E4DF:
    PUSH32(esp, 0x1500404Cu); /* 0x1503E4DF: push 0x1500404c */
    ecx = ebp + (-0x1C); /* 0x1503E4E4: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E4E7: call 0x1503d28c */
    RECOMP_FLAGS_IN();
L_1503E4EC:
    eax = ebp + (-0x1C); /* 0x1503E4EC: lea eax, [ebp - 0x1c] */
    goto L_1503E713; /* 0x1503E4EF: jmp 0x1503e713 */
L_1503E4F4:
    PUSH32(esp, 0x15004710u); /* 0x1503E4F4: push 0x15004710 */
    ecx = ebp + (-0xC); /* 0x1503E4F9: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E4FC: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503E501:
    PUSH32(esp, 0x15004788u); /* 0x1503E501: push 0x15004788 */
    ecx = ebp + (-0xC); /* 0x1503E506: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E509: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    goto L_1503E564; /* 0x1503E50E: jmp 0x1503e564 */
L_1503E510:
    PUSH32(esp, 0x15004780u); /* 0x1503E510: push 0x15004780 */
    ecx = ebp + (-0xC); /* 0x1503E515: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E518: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_1503E6E0; /* 0x1503E51D: jmp 0x1503e6e0 */
L_1503E522:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x52u; /* 0x1503E522: sub eax, 0x52 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E49A; /* 0x1503E525: je 0x1503e49a */
L_1503E52B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E52B: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E49A; /* 0x1503E52E: je 0x1503e49a */
L_1503E534:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xCu; /* 0x1503E534: sub eax, 0xc */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E5A1; /* 0x1503E537: je 0x1503e5a1 */
L_1503E539:
    eax = edx + (-0x1); /* 0x1503E539: lea eax, [edx - 1] */
    MEM32(0x150BDB3C) = eax; /* 0x1503E53C: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x1C); /* 0x1503E541: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E544: push eax */
    RECOMP_CALL(sub_1503F211); /* 0x1503E545: call 0x1503f211 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E54A: pop ecx */
    PUSH32(esp, eax); /* 0x1503E54B: push eax */
    ecx = ebp + (-0xC); /* 0x1503E54C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503E54F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503E554: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E557: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E55C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E710; /* 0x1503E55E: jne 0x1503e710 */
L_1503E564:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x43u; /* 0x1503E564: sub ebx, 0x43 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E597; /* 0x1503E567: je 0x1503e597 */
L_1503E569:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1503E569: sub ebx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E56B: je 0x1503e6b8 */
L_1503E571:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1503E571: sub ebx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E573: je 0x1503e6b8 */
L_1503E579:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1503E579: sub ebx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E57B: je 0x1503e6b8 */
L_1503E581:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1503E581: sub ebx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E583: je 0x1503e6b8 */
L_1503E589:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x14u; /* 0x1503E589: sub ebx, 0x14 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E69F; /* 0x1503E58C: je 0x1503e69f */
L_1503E592:
    goto L_1503E6E0; /* 0x1503E592: jmp 0x1503e6e0 */
L_1503E597:
    PUSH32(esp, 0x150047DCu); /* 0x1503E597: push 0x150047dc */
    goto L_1503E6BD; /* 0x1503E59C: jmp 0x1503e6bd */
L_1503E5A1:
    SET_LO8(ecx, MEM8(edx)); /* 0x1503E5A1: mov cl, byte ptr [edx] */
    eax = edx + 0x1; /* 0x1503E5A3: lea eax, [edx + 1] */
    MEM32(0x150BDB3C) = eax; /* 0x1503E5A6: mov dword ptr [0x150bdb3c], eax */
    eax = (uint32_t)LO8(ecx); /* 0x1503E5AB: movzx eax, cl */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1503E5AE: mov byte ptr [ebp - 1], cl */
    /* cmp eax, 0x4Bu */ /* 0x1503E5B1: cmp eax, 0x4b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E626; /* 0x1503E5B4: ja 0x1503e626 */
L_1503E5B6:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E618; /* 0x1503E5B6: je 0x1503e618 */
L_1503E5B8:
    /* cmp eax, 0x47u */ /* 0x1503E5B8: cmp eax, 0x47 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E609; /* 0x1503E5BB: ja 0x1503e609 */
L_1503E5BD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503E5D3; /* 0x1503E5BD: je 0x1503e5d3 */
L_1503E5BF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x1503E5BF: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E5E7; /* 0x1503E5C2: je 0x1503e5e7 */
L_1503E5C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x1503E5C4: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E5DD; /* 0x1503E5C7: je 0x1503e5dd */
L_1503E5C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E5C9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E5DD; /* 0x1503E5CC: je 0x1503e5dd */
L_1503E5CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E5CE: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E649; /* 0x1503E5D1: jne 0x1503e649 */
L_1503E5D3:
    PUSH32(esp, 0x150047A0u); /* 0x1503E5D3: push 0x150047a0 */
    goto L_1503E697; /* 0x1503E5D8: jmp 0x1503e697 */
L_1503E5DD:
    PUSH32(esp, 0x15004798u); /* 0x1503E5DD: push 0x15004798 */
    goto L_1503E697; /* 0x1503E5E2: jmp 0x1503e697 */
L_1503E5E7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503E5E7: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x1C); /* 0x1503E5EA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E5ED: push eax */
    RECOMP_CALL(sub_1503E3F9); /* 0x1503E5EE: call 0x1503e3f9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503E5F3: push eax */
    PUSH32(esp, 0x150047CCu); /* 0x1503E5F4: push 0x150047cc */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503E5F9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D046); /* 0x1503E5FC: call 0x1503d046 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503E601: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1503E78C; /* 0x1503E604: jmp 0x1503e78c */
L_1503E609:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x48u; /* 0x1503E609: sub eax, 0x48 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E61F; /* 0x1503E60C: je 0x1503e61f */
L_1503E60E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E60E: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E61F; /* 0x1503E611: je 0x1503e61f */
L_1503E613:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E613: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E649; /* 0x1503E616: jne 0x1503e649 */
L_1503E618:
    PUSH32(esp, 0x150047B0u); /* 0x1503E618: push 0x150047b0 */
    goto L_1503E697; /* 0x1503E61D: jmp 0x1503e697 */
L_1503E61F:
    PUSH32(esp, 0x150047A8u); /* 0x1503E61F: push 0x150047a8 */
    goto L_1503E697; /* 0x1503E624: jmp 0x1503e697 */
L_1503E626:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Cu; /* 0x1503E626: sub eax, 0x4c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E691; /* 0x1503E629: je 0x1503e691 */
L_1503E62B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E62B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E691; /* 0x1503E62E: je 0x1503e691 */
L_1503E630:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E630: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E68A; /* 0x1503E633: je 0x1503e68a */
L_1503E635:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E635: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E682; /* 0x1503E638: je 0x1503e682 */
L_1503E63A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x1503E63A: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E67B; /* 0x1503E63D: je 0x1503e67b */
L_1503E63F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E63F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E650; /* 0x1503E642: je 0x1503e650 */
L_1503E644:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E644: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E650; /* 0x1503E647: je 0x1503e650 */
L_1503E649:
    eax = 0x150047D4u; /* 0x1503E649: mov eax, 0x150047d4 */
    goto L_1503E696; /* 0x1503E64E: jmp 0x1503e696 */
L_1503E650:
    eax = ebp + (-0x1C); /* 0x1503E650: lea eax, [ebp - 0x1c] */
    MEM32(0x150BDB3C) = edx; /* 0x1503E653: mov dword ptr [0x150bdb3c], edx */
    PUSH32(esp, eax); /* 0x1503E659: push eax */
    RECOMP_CALL(sub_1503F211); /* 0x1503E65A: call 0x1503f211 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E65F: pop ecx */
    PUSH32(esp, eax); /* 0x1503E660: push eax */
    ecx = ebp + (-0xC); /* 0x1503E661: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503E664: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503E669: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E66C: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E671: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E710; /* 0x1503E673: jne 0x1503e710 */
L_1503E679:
    goto L_1503E69F; /* 0x1503E679: jmp 0x1503e69f */
L_1503E67B:
    PUSH32(esp, 0x150047C4u); /* 0x1503E67B: push 0x150047c4 */
    goto L_1503E697; /* 0x1503E680: jmp 0x1503e697 */
L_1503E682:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1503E682: push -2 */
    ebx = POP32_VAL(esp); /* 0x1503E684: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1503E49D; /* 0x1503E685: jmp 0x1503e49d */
L_1503E68A:
    PUSH32(esp, 0x15004790u); /* 0x1503E68A: push 0x15004790 */
    goto L_1503E697; /* 0x1503E68F: jmp 0x1503e697 */
L_1503E691:
    eax = 0x150047B8u; /* 0x1503E691: mov eax, 0x150047b8 */
L_1503E696:
    PUSH32(esp, eax); /* 0x1503E696: push eax */
L_1503E697:
    ecx = ebp + (-0xC); /* 0x1503E697: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E69A: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503E69F:
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x1503E69F: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x45u; /* 0x1503E6A3: sub eax, 0x45 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E6A6: je 0x1503e6b8 */
L_1503E6A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503E6A8: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E6AA: je 0x1503e6b8 */
L_1503E6AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503E6AC: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E6AE: je 0x1503e6b8 */
L_1503E6B0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503E6B0: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E6B8; /* 0x1503E6B2: je 0x1503e6b8 */
L_1503E6B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503E6B4: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E6E0; /* 0x1503E6B6: jne 0x1503e6e0 */
L_1503E6B8:
    PUSH32(esp, 0x15004718u); /* 0x1503E6B8: push 0x15004718 */
L_1503E6BD:
    ecx = ebp + (-0x14); /* 0x1503E6BD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503E6C0: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503E6C5: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503E6C8: push ecx */
    ecx = ebp + (-0x1C); /* 0x1503E6C9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503E6CC: push ecx */
    ecx = eax; /* 0x1503E6CD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503E6CF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1503E6D4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E6D7: push eax */
    ecx = ebp + (-0xC); /* 0x1503E6D8: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503E6DB: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503E6E0:
    ecx = MEM32(ebp + 0xC); /* 0x1503E6E0: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E6E3: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E6E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E710; /* 0x1503E6EA: jne 0x1503e710 */
L_1503E6EC:
    PUSH32(esp, 0x20u); /* 0x1503E6EC: push 0x20 */
    ecx = ebp + (-0x14); /* 0x1503E6EE: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503C947); /* 0x1503E6F1: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503E6F6: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x1C); /* 0x1503E6F9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503E6FC: push ecx */
    ecx = eax; /* 0x1503E6FD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503E6FF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1503E704: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E707: push eax */
    ecx = ebp + (-0xC); /* 0x1503E708: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503E70B: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503E710:
    eax = ebp + (-0xC); /* 0x1503E710: lea eax, [ebp - 0xc] */
L_1503E713:
    ecx = MEM32(ebp + 0x8); /* 0x1503E713: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503E716: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E717: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503E78C; /* 0x1503E71C: jmp 0x1503e78c */
L_1503E71E:
    ecx = MEM32(ebp + 0xC); /* 0x1503E71E: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E721: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E765; /* 0x1503E728: je 0x1503e765 */
L_1503E72A:
    esi = ebx; /* 0x1503E72A: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x1503E72C: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), 1 */ /* 0x1503E72F: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E754; /* 0x1503E732: je 0x1503e754 */
L_1503E734:
    PUSH32(esp, 0x150047E4u); /* 0x1503E734: push 0x150047e4 */
    ecx = ebp + (-0xC); /* 0x1503E739: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E73C: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1503E741: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E765; /* 0x1503E743: je 0x1503e765 */
L_1503E745:
    PUSH32(esp, 0x150047ECu); /* 0x1503E745: push 0x150047ec */
    ecx = ebp + (-0xC); /* 0x1503E74A: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D28C); /* 0x1503E74D: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    goto L_1503E765; /* 0x1503E752: jmp 0x1503e765 */
L_1503E754:
    /* test esi, esi */ /* 0x1503E754: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E765; /* 0x1503E756: je 0x1503e765 */
L_1503E758:
    PUSH32(esp, 0x1500472Cu); /* 0x1503E758: push 0x1500472c */
    ecx = ebp + (-0xC); /* 0x1503E75D: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E760: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503E765:
    PUSH32(esp, 0x2Au); /* 0x1503E765: push 0x2a */
    eax = ebp + (-0x14); /* 0x1503E767: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1503E76A: push eax */
    eax = ebp + (-0xC); /* 0x1503E76B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503E76E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503E76F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150403C9); /* 0x1503E772: call 0x150403c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503E777: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1503E78C; /* 0x1503E77A: jmp 0x1503e78c */
L_1503E77C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503E77C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x1503E77F: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503E781: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x1503E784: call 0x1503d070 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503E789: add esp, 0xc */
    _flag_k = FK_ADD;
L_1503E78C:
    eax = MEM32(ebp + 0x8); /* 0x1503E78C: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1503E78F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503E790: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E791: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E792: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1503E44Cu: goto L_1503E44C;
      case 0x1503E45Eu: goto L_1503E45E;
      case 0x1503E465u: goto L_1503E465;
      case 0x1503E46Cu: goto L_1503E46C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1503E7BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E7BBu);

L_1503E7BB:
    edi = edi; /* 0x1503E7BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E7BD: push ebp */
    ebp = esp; /* 0x1503E7BE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503E7C0: push ecx */
    PUSH32(esp, ecx); /* 0x1503E7C1: push ecx */
    eax = MEM32(0x150BDB3C); /* 0x1503E7C2: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503E7C7: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503E7C9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E84C; /* 0x1503E7CB: je 0x1503e84c */
L_1503E7CD:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x1503E7CD: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x41u; /* 0x1503E7D0: sub ecx, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503E7D3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503E7D4: mov dword ptr [0x150bdb3c], eax */
    /* cmp ecx, 0xCu */ /* 0x1503E7D9: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503E848; /* 0x1503E7DC: ja 0x1503e848 */
L_1503E7DE:
    eax = MEM32(0x150BDB4C); /* 0x1503E7DE: mov eax, dword ptr [0x150bdb4c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503E7E3: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFF000u; /* 0x1503E7E7: and dword ptr [ebp - 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503E7EE: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503E7EE: shr eax, 1 */
    eax = ~eax; /* 0x1503E7F0: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E7F2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503E83A; /* 0x1503E7F4: je 0x1503e83a */
L_1503E7F6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x1503E7F6: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1503E7F9: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E829; /* 0x1503E7FC: je 0x1503e829 */
L_1503E7FE:
    PUSH32(esp, 2); /* 0x1503E7FE: push 2 */
    eax = POP32_VAL(esp); /* 0x1503E800: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1503E801: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E826; /* 0x1503E803: je 0x1503e826 */
L_1503E805:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1503E805: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E822; /* 0x1503E807: je 0x1503e822 */
L_1503E809:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1503E809: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E81E; /* 0x1503E80B: je 0x1503e81e */
L_1503E80D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1503E80D: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E81A; /* 0x1503E80F: je 0x1503e81a */
L_1503E811:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1503E811: sub ecx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503E83A; /* 0x1503E814: jne 0x1503e83a */
L_1503E816:
    PUSH32(esp, 6); /* 0x1503E816: push 6 */
    goto L_1503E82B; /* 0x1503E818: jmp 0x1503e82b */
L_1503E81A:
    PUSH32(esp, 5); /* 0x1503E81A: push 5 */
    goto L_1503E82B; /* 0x1503E81C: jmp 0x1503e82b */
L_1503E81E:
    PUSH32(esp, 3); /* 0x1503E81E: push 3 */
    goto L_1503E82B; /* 0x1503E820: jmp 0x1503e82b */
L_1503E822:
    PUSH32(esp, 4); /* 0x1503E822: push 4 */
    goto L_1503E82B; /* 0x1503E824: jmp 0x1503e82b */
L_1503E826:
    PUSH32(esp, eax); /* 0x1503E826: push eax */
    goto L_1503E82B; /* 0x1503E827: jmp 0x1503e82b */
L_1503E829:
    PUSH32(esp, 1); /* 0x1503E829: push 1 */
L_1503E82B:
    RECOMP_CALL(sub_1503D495); /* 0x1503E82B: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E830: pop ecx */
    PUSH32(esp, eax); /* 0x1503E831: push eax */
    ecx = ebp + (-0x8); /* 0x1503E832: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E835: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503E83A:
    ecx = MEM32(ebp + 0x8); /* 0x1503E83A: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x1503E83D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503E840: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E841: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503E856; /* 0x1503E846: jmp 0x1503e856 */
L_1503E848:
    PUSH32(esp, 1); /* 0x1503E848: push 1 */
    goto L_1503E84E; /* 0x1503E84A: jmp 0x1503e84e */
L_1503E84C:
    PUSH32(esp, 2); /* 0x1503E84C: push 2 */
L_1503E84E:
    ecx = MEM32(ebp + 0x8); /* 0x1503E84E: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503E851: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503E856:
    eax = MEM32(ebp + 0x8); /* 0x1503E856: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503E859: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503E85A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503E861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503E861u);

L_1503E861:
    edi = edi; /* 0x1503E861: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503E863: push ebp */
    ebp = esp; /* 0x1503E864: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x1503E866: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BDB3C); /* 0x1503E869: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1503E86E: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1503E872: push ebx */
    PUSH32(esp, esi); /* 0x1503E873: push esi */
    SET_LO8(eax, MEM8(eax)); /* 0x1503E874: mov al, byte ptr [eax] */
    esi = 0xFFFFF000u; /* 0x1503E876: mov esi, 0xfffff000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & esi; /* 0x1503E87B: and dword ptr [ebp - 0x20], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1503E87E: mov byte ptr [ebp - 1], 0 */
    PUSH32(esp, edi); /* 0x1503E882: push edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1503E883: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ED37; /* 0x1503E885: je 0x1503ed37 */
L_1503E88B:
    edi = MEM32(ebp + 0x18); /* 0x1503E88B: mov edi, dword ptr [ebp + 0x18] */
    /* cmp LO8(eax), 0x24u */ /* 0x1503E88E: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503E8C4; /* 0x1503E890: jne 0x1503e8c4 */
L_1503E892:
    PUSH32(esp, edi); /* 0x1503E892: push edi */
    eax = ebp + (-0x1); /* 0x1503E893: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1503E896: push eax */
    eax = ebp + 0x10; /* 0x1503E897: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1503E89A: push eax */
    eax = ebp + (-0x1C); /* 0x1503E89B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503E89E: push eax */
    RECOMP_CALL(sub_1503F423); /* 0x1503E89F: call 0x1503f423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503E8A4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x1C); /* 0x1503E8A7: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E8AA: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E8AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E8C4; /* 0x1503E8B1: jne 0x1503e8c4 */
L_1503E8B3:
    eax = ebp + (-0x1C); /* 0x1503E8B3: lea eax, [ebp - 0x1c] */
L_1503E8B6:
    ecx = MEM32(ebp + 0x8); /* 0x1503E8B6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503E8B9: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503E8BA: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503EDBB; /* 0x1503E8BF: jmp 0x1503edbb */
L_1503E8C4:
    eax = MEM32(0x150BDB3C); /* 0x1503E8C4: mov eax, dword ptr [0x150bdb3c] */
    PUSH32(esp, 0x16u); /* 0x1503E8C9: push 0x16 */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503E8CB: mov cl, byte ptr [eax] */
    eax = POP32_VAL(esp); /* 0x1503E8CD: pop eax */
    PUSH32(esp, 0x41u); /* 0x1503E8CE: push 0x41 */
    edx = POP32_VAL(esp); /* 0x1503E8D0: pop edx */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x1503E8D1: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = (int32_t)(int8_t)LO8(ecx); /* 0x1503E8D3: movsx ebx, cl */
    if (CMP_GE(_flag_a, _flag_b)) { eax = edx; } /* 0x1503E8D6: cmovge eax, edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1503E8D9: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & esi; /* 0x1503E8DD: and dword ptr [ebp - 0x10], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1503E8E0: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1503E8E2: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & esi; /* 0x1503E8E6: and dword ptr [ebp - 0x18], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503E8E9:
    eax = ebx; /* 0x1503E8E9: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1503E8EB: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E9AB; /* 0x1503E8EE: je 0x1503e9ab */
L_1503E8F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503E8F4: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503E958; /* 0x1503E8F7: je 0x1503e958 */
L_1503E8F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1503E8F9: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503EA51; /* 0x1503E8FC: jne 0x1503ea51 */
L_1503E902:
    eax = MEM32(0x150BDB4C); /* 0x1503E902: mov eax, dword ptr [0x150bdb4c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503E907: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503E907: shr eax, 1 */
    eax = ~eax; /* 0x1503E909: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E90B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EA01; /* 0x1503E90D: je 0x1503ea01 */
L_1503E913:
    ecx = ebp + (-0x14); /* 0x1503E913: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E916: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E91B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E951; /* 0x1503E91D: jne 0x1503e951 */
L_1503E91F:
    PUSH32(esp, 0x20u); /* 0x1503E91F: push 0x20 */
    eax = ebp + (-0x2C); /* 0x1503E921: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1503E924: push eax */
    ecx = ebp + (-0x14); /* 0x1503E925: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E928: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x1503E92D: push 8 */
    esi = eax; /* 0x1503E92F: mov esi, eax */
    RECOMP_CALL(sub_1503D495); /* 0x1503E931: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E936: pop ecx */
    PUSH32(esp, eax); /* 0x1503E937: push eax */
    eax = ebp + (-0x34); /* 0x1503E938: lea eax, [ebp - 0x34] */
L_1503E93B:
    PUSH32(esp, eax); /* 0x1503E93B: push eax */
    ecx = esi; /* 0x1503E93C: mov ecx, esi */
    RECOMP_CALL(sub_1503D132); /* 0x1503E93E: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1503E943: lea ecx, [ebp - 0x14] */
L_1503E946:
    PUSH32(esp, eax); /* 0x1503E946: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x1503E947: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503E9FE; /* 0x1503E94C: jmp 0x1503e9fe */
L_1503E951:
    PUSH32(esp, 8); /* 0x1503E951: push 8 */
    goto L_1503E9EF; /* 0x1503E953: jmp 0x1503e9ef */
L_1503E958:
    eax = MEM32(0x150BDB4C); /* 0x1503E958: mov eax, dword ptr [0x150bdb4c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503E95D: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503E95D: shr eax, 1 */
    eax = ~eax; /* 0x1503E95F: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E961: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EA01; /* 0x1503E963: je 0x1503ea01 */
L_1503E969:
    ecx = ebp + (-0x1C); /* 0x1503E969: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E96C: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E971: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E99E; /* 0x1503E973: jne 0x1503e99e */
L_1503E975:
    PUSH32(esp, 0x20u); /* 0x1503E975: push 0x20 */
    eax = ebp + (-0x3C); /* 0x1503E977: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503E97A: push eax */
    ecx = ebp + (-0x1C); /* 0x1503E97B: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E97E: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x1503E983: push 9 */
    esi = eax; /* 0x1503E985: mov esi, eax */
    RECOMP_CALL(sub_1503D495); /* 0x1503E987: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E98C: pop ecx */
    PUSH32(esp, eax); /* 0x1503E98D: push eax */
    eax = ebp + (-0x44); /* 0x1503E98E: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x1503E991: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1503E993: push eax */
    RECOMP_CALL(sub_1503D132); /* 0x1503E994: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1C); /* 0x1503E999: lea ecx, [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_1503E946; /* 0x1503E99C: jmp 0x1503e946 */
L_1503E99E:
    PUSH32(esp, 9); /* 0x1503E99E: push 9 */
    RECOMP_CALL(sub_1503D495); /* 0x1503E9A0: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E9A5: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1503E9A6: lea ecx, [ebp - 0x1c] */
    goto L_1503E9F8; /* 0x1503E9A9: jmp 0x1503e9f8 */
L_1503E9AB:
    eax = (uint32_t)MEM16(0x150BDB4E); /* 0x1503E9AB: movzx eax, word ptr [0x150bdb4e] */
    _flag_a = (uint32_t)((eax | MEM32(0x150BDB4C))); _flag_b = (uint32_t)((eax | MEM32(0x150BDB4C)));
    eax = eax | MEM32(0x150BDB4C); /* 0x1503E9B2: or eax, dword ptr [0x150bdb4c] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503E9B8: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503E9B8: shr eax, 1 */
    eax = ~eax; /* 0x1503E9BA: not eax */
    /* test LO8(eax), 1 */ /* 0x1503E9BC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EA01; /* 0x1503E9BE: je 0x1503ea01 */
L_1503E9C0:
    ecx = ebp + (-0x14); /* 0x1503E9C0: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503E9C3: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503E9C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503E9ED; /* 0x1503E9CA: jne 0x1503e9ed */
L_1503E9CC:
    PUSH32(esp, 0x20u); /* 0x1503E9CC: push 0x20 */
    eax = ebp + (-0x4C); /* 0x1503E9CE: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1503E9D1: push eax */
    ecx = ebp + (-0x14); /* 0x1503E9D2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503E9D5: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1503E9DA: push 7 */
    esi = eax; /* 0x1503E9DC: mov esi, eax */
    RECOMP_CALL(sub_1503D495); /* 0x1503E9DE: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E9E3: pop ecx */
    PUSH32(esp, eax); /* 0x1503E9E4: push eax */
    eax = ebp + (-0x54); /* 0x1503E9E5: lea eax, [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_1503E93B; /* 0x1503E9E8: jmp 0x1503e93b */
L_1503E9ED:
    PUSH32(esp, 7); /* 0x1503E9ED: push 7 */
L_1503E9EF:
    RECOMP_CALL(sub_1503D495); /* 0x1503E9EF: call 0x1503d495 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503E9F4: pop ecx */
    ecx = ebp + (-0x14); /* 0x1503E9F5: lea ecx, [ebp - 0x14] */
L_1503E9F8:
    PUSH32(esp, eax); /* 0x1503E9F8: push eax */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503E9F9: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503E9FE:
    PUSH32(esp, 0x41u); /* 0x1503E9FE: push 0x41 */
    edx = POP32_VAL(esp); /* 0x1503EA00: pop edx */
L_1503EA01:
    eax = MEM32(0x150BDB3C); /* 0x1503EA01: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503EA06: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503EA07: mov dword ptr [0x150bdb3c], eax */
    /* cmp MEM8(eax), 0x24u */ /* 0x1503EA0C: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EA39; /* 0x1503EA0F: jne 0x1503ea39 */
L_1503EA11:
    PUSH32(esp, edi); /* 0x1503EA11: push edi */
    eax = ebp + (-0x1); /* 0x1503EA12: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1503EA15: push eax */
    eax = ebp + 0x10; /* 0x1503EA16: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1503EA19: push eax */
    eax = ebp + (-0xC); /* 0x1503EA1A: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503EA1D: push eax */
    RECOMP_CALL(sub_1503F423); /* 0x1503EA1E: call 0x1503f423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503EA23: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0xC); /* 0x1503EA26: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EA29: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EA2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ED2B; /* 0x1503EA30: je 0x1503ed2b */
L_1503EA36:
    PUSH32(esp, 0x41u); /* 0x1503EA36: push 0x41 */
    edx = POP32_VAL(esp); /* 0x1503EA38: pop edx */
L_1503EA39:
    eax = MEM32(0x150BDB3C); /* 0x1503EA39: mov eax, dword ptr [0x150bdb3c] */
    PUSH32(esp, 0x16u); /* 0x1503EA3E: push 0x16 */
    ecx = POP32_VAL(esp); /* 0x1503EA40: pop ecx */
    /* cmp MEM8(eax), 0x41u */ /* 0x1503EA41: cmp byte ptr [eax], 0x41 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = (int32_t)(int8_t)MEM8(eax); /* 0x1503EA44: movsx ebx, byte ptr [eax] */
    if (CMP_GE(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503EA47: cmovge ecx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1503EA4A: sub ebx, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1503E8E9; /* 0x1503EA4C: jmp 0x1503e8e9 */
L_1503EA51:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x1503EA51: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
    /* cmp ebx, 0x1Fu */ /* 0x1503EA57: cmp ebx, 0x1f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503ED33; /* 0x1503EA5A: ja 0x1503ed33 */
L_1503EA60:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503EA60: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0xC); /* 0x1503EA63: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503C947); /* 0x1503EA66: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1503EA6B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503EA6E: push eax */
    eax = ebp + (-0x54); /* 0x1503EA6F: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EA72: push eax */
    ecx = ebp + (-0x24); /* 0x1503EA73: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EA76: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503EA7B: push eax */
    ecx = ebp + (-0xC); /* 0x1503EA7C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EA7F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1503EA84: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EA87: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EA8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EAB6; /* 0x1503EA8E: jne 0x1503eab6 */
L_1503EA90:
    PUSH32(esp, 0x20u); /* 0x1503EA90: push 0x20 */
    eax = ebp + (-0x54); /* 0x1503EA92: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EA95: push eax */
    ecx = ebp + (-0xC); /* 0x1503EA96: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503EA99: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1503EA9E: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1503EAA1: push ecx */
    ecx = ebp + (-0x4C); /* 0x1503EAA2: lea ecx, [ebp - 0x4c] */
    PUSH32(esp, ecx); /* 0x1503EAA5: push ecx */
    ecx = eax; /* 0x1503EAA6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EAA8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503EAAD: push eax */
    ecx = ebp + (-0xC); /* 0x1503EAAE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EAB1: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503EAB6:
    ecx = ebp + (-0x1C); /* 0x1503EAB6: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EAB9: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EABE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EAE8; /* 0x1503EAC0: jne 0x1503eae8 */
L_1503EAC2:
    PUSH32(esp, 0x20u); /* 0x1503EAC2: push 0x20 */
    eax = ebp + (-0x54); /* 0x1503EAC4: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EAC7: push eax */
    ecx = ebp + (-0x1C); /* 0x1503EAC8: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503EACB: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503EAD0: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EAD3: push ecx */
    ecx = ebp + (-0x4C); /* 0x1503EAD4: lea ecx, [ebp - 0x4c] */
    PUSH32(esp, ecx); /* 0x1503EAD7: push ecx */
    ecx = eax; /* 0x1503EAD8: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EADA: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503EADF: push eax */
    ecx = ebp + (-0xC); /* 0x1503EAE0: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EAE3: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503EAE8:
    /* test LO8(ebx), 0x10u */ /* 0x1503EAE8: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EBB5; /* 0x1503EAEB: je 0x1503ebb5 */
L_1503EAF1:
    /* test edi, edi */ /* 0x1503EAF1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED33; /* 0x1503EAF3: jne 0x1503ed33 */
L_1503EAF9:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1503EAF9: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503EB73; /* 0x1503EAFD: je 0x1503eb73 */
L_1503EAFF:
    PUSH32(esp, 0x15004558u); /* 0x1503EAFF: push 0x15004558 */
    ecx = ebp + (-0x54); /* 0x1503EB04: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503EB07: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503EB0C: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EB0F: push ecx */
    ecx = ebp + (-0x24); /* 0x1503EB10: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503EB13: push ecx */
    ecx = eax; /* 0x1503EB14: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EB16: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1503EB1B: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1503EB1E: push eax */
    ecx = ebp + (-0xC); /* 0x1503EB1F: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EB22: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503EB27: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0 */ /* 0x1503EB2C: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503EB4C; /* 0x1503EB2F: je 0x1503eb4c */
L_1503EB31:
    eax = ebp + (-0x54); /* 0x1503EB31: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EB34: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1503EB35: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EB3A: pop ecx */
    ecx = ebp + (-0xC); /* 0x1503EB3B: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EB3E: push ecx */
    ecx = ebp + (-0x4C); /* 0x1503EB3F: lea ecx, [ebp - 0x4c] */
    PUSH32(esp, ecx); /* 0x1503EB42: push ecx */
    ecx = eax; /* 0x1503EB43: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EB45: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1503EB68; /* 0x1503EB4A: jmp 0x1503eb68 */
L_1503EB4C:
    PUSH32(esp, 2); /* 0x1503EB4C: push 2 */
    ecx = ebp + (-0x54); /* 0x1503EB4E: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503EB51: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503EB56: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EB59: push ecx */
    ecx = ebp + (-0x24); /* 0x1503EB5A: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503EB5D: push ecx */
    ecx = eax; /* 0x1503EB5E: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EB60: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1503EB65: lea eax, [ebp - 0x24] */
L_1503EB68:
    PUSH32(esp, eax); /* 0x1503EB68: push eax */
    ecx = ebp + (-0xC); /* 0x1503EB69: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EB6C: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503EB90; /* 0x1503EB71: jmp 0x1503eb90 */
L_1503EB73:
    eax = MEM32(0x150BDB3C); /* 0x1503EB73: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0 */ /* 0x1503EB78: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503EB90; /* 0x1503EB7B: je 0x1503eb90 */
L_1503EB7D:
    eax = ebp + (-0x54); /* 0x1503EB7D: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EB80: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1503EB81: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EB86: pop ecx */
    PUSH32(esp, eax); /* 0x1503EB87: push eax */
    ecx = ebp + (-0xC); /* 0x1503EB88: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503EB8B: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503EB90:
    eax = MEM32(0x150BDB3C); /* 0x1503EB90: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x1503EB95: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503EB97: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EBA7; /* 0x1503EB99: jne 0x1503eba7 */
L_1503EB9B:
    PUSH32(esp, 2); /* 0x1503EB9B: push 2 */
    ecx = ebp + (-0xC); /* 0x1503EB9D: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D305); /* 0x1503EBA0: call 0x1503d305 */
    RECOMP_FLAGS_IN();
    goto L_1503EBB5; /* 0x1503EBA5: jmp 0x1503ebb5 */
L_1503EBA7:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x1503EBA7: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x40u */ /* 0x1503EBAD: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503ED33; /* 0x1503EBAF: jne 0x1503ed33 */
L_1503EBB5:
    eax = MEM32(0x150BDB4C); /* 0x1503EBB5: mov eax, dword ptr [0x150bdb4c] */
    ecx = ebx; /* 0x1503EBBA: mov ecx, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503EBBC: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503EBBC: shr eax, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    ecx = ecx & 0xCu; /* 0x1503EBBE: and ecx, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x1503EBC1: not eax */
    /* test LO8(eax), 1 */ /* 0x1503EBC3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EBF8; /* 0x1503EBC5: je 0x1503ebf8 */
L_1503EBC7:
    /* cmp ecx, 0xCu */ /* 0x1503EBC7: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EC10; /* 0x1503EBCA: jne 0x1503ec10 */
L_1503EBCC:
    /* test edi, edi */ /* 0x1503EBCC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED33; /* 0x1503EBCE: jne 0x1503ed33 */
L_1503EBD4:
    eax = ebp + (-0x54); /* 0x1503EBD4: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EBD7: push eax */
    RECOMP_CALL(sub_1503E35E); /* 0x1503EBD8: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EBDD: pop ecx */
    ecx = ebp + (-0xC); /* 0x1503EBDE: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EBE1: push ecx */
    ecx = ebp + (-0x4C); /* 0x1503EBE2: lea ecx, [ebp - 0x4c] */
    PUSH32(esp, ecx); /* 0x1503EBE5: push ecx */
    ecx = eax; /* 0x1503EBE6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EBE8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503EBED: push eax */
    ecx = ebp + (-0xC); /* 0x1503EBEE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EBF1: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503EC10; /* 0x1503EBF6: jmp 0x1503ec10 */
L_1503EBF8:
    /* cmp ecx, 0xCu */ /* 0x1503EBF8: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EC10; /* 0x1503EBFB: jne 0x1503ec10 */
L_1503EBFD:
    eax = ebp + (-0x54); /* 0x1503EBFD: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1503EC00: push eax */
    RECOMP_CALL(sub_1503E35E); /* 0x1503EC01: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EC06: pop ecx */
    PUSH32(esp, eax); /* 0x1503EC07: push eax */
    ecx = ebp + (-0xC); /* 0x1503EC08: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503EC0B: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503EC10:
    /* test LO8(ebx), 2 */ /* 0x1503EC10: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EC3D; /* 0x1503EC13: je 0x1503ec3d */
L_1503EC15:
    PUSH32(esp, 0x15004844u); /* 0x1503EC15: push 0x15004844 */
    ecx = ebp + (-0x54); /* 0x1503EC1A: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503EC1D: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503EC22: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EC25: push ecx */
    ecx = ebp + (-0x24); /* 0x1503EC26: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503EC29: push ecx */
    ecx = eax; /* 0x1503EC2A: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EC2C: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1503EC31: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1503EC34: push eax */
    ecx = ebp + (-0xC); /* 0x1503EC35: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EC38: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503EC3D:
    /* test LO8(ebx), 1 */ /* 0x1503EC3D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EC6A; /* 0x1503EC40: je 0x1503ec6a */
L_1503EC42:
    PUSH32(esp, 0x15004850u); /* 0x1503EC42: push 0x15004850 */
    ecx = ebp + (-0x54); /* 0x1503EC47: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503EC4A: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503EC4F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503EC52: push ecx */
    ecx = ebp + (-0x24); /* 0x1503EC53: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503EC56: push ecx */
    ecx = eax; /* 0x1503EC57: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EC59: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1503EC5E: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1503EC61: push eax */
    ecx = ebp + (-0xC); /* 0x1503EC62: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EC65: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503EC6A:
    /* test edi, edi */ /* 0x1503EC6A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED14; /* 0x1503EC6C: jne 0x1503ed14 */
L_1503EC72:
    esi = MEM32(ebp + 0xC); /* 0x1503EC72: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1503EC75: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503EC77: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EC7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ECE4; /* 0x1503EC7E: jne 0x1503ece4 */
L_1503EC80:
    /* test MEM8(esi + 0x4), 0x10u */ /* 0x1503EC80: test byte ptr [esi + 4], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ECC6; /* 0x1503EC84: jne 0x1503ecc6 */
L_1503EC86:
    ecx = MEM32(ebp + 0x14); /* 0x1503EC86: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EC89: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EC8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ECC6; /* 0x1503EC90: jne 0x1503ecc6 */
L_1503EC92:
    PUSH32(esp, 0x20u); /* 0x1503EC92: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1503EC94: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C947); /* 0x1503EC97: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503EC9C: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x24); /* 0x1503EC9F: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503ECA2: push ecx */
    ecx = eax; /* 0x1503ECA3: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503ECA5: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1503ECAA: push 0x20 */
    eax = ebp + (-0x4C); /* 0x1503ECAC: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1503ECAF: push eax */
    ecx = ebp + (-0x24); /* 0x1503ECB0: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503ECB3: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503ECB8: push esi */
    ecx = ebp + (-0x44); /* 0x1503ECB9: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x1503ECBC: push ecx */
    ecx = eax; /* 0x1503ECBD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503ECBF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1503ED0B; /* 0x1503ECC4: jmp 0x1503ed0b */
L_1503ECC6:
    /* test MEM8(esi + 0x4), 0x80u */ /* 0x1503ECC6: test byte ptr [esi + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503ECD7; /* 0x1503ECCA: je 0x1503ecd7 */
L_1503ECCC:
    PUSH32(esp, esi); /* 0x1503ECCC: push esi */
    ecx = ebp + (-0xC); /* 0x1503ECCD: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503ECD0: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503ED14; /* 0x1503ECD5: jmp 0x1503ed14 */
L_1503ECD7:
    PUSH32(esp, 0x20u); /* 0x1503ECD7: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1503ECD9: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C947); /* 0x1503ECDC: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503ECE1: push esi */
    goto L_1503ECFD; /* 0x1503ECE2: jmp 0x1503ecfd */
L_1503ECE4:
    ecx = MEM32(ebp + 0x14); /* 0x1503ECE4: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503ECE7: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503ECEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED14; /* 0x1503ECEE: jne 0x1503ed14 */
L_1503ECF0:
    PUSH32(esp, 0x20u); /* 0x1503ECF0: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1503ECF2: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503C947); /* 0x1503ECF5: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503ECFA: push dword ptr [ebp + 0x14] */
L_1503ECFD:
    ecx = ebp + (-0x24); /* 0x1503ECFD: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503ED00: push ecx */
    ecx = eax; /* 0x1503ED01: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503ED03: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1503ED08: lea eax, [ebp - 0x24] */
L_1503ED0B:
    PUSH32(esp, eax); /* 0x1503ED0B: push eax */
    ecx = ebp + (-0xC); /* 0x1503ED0C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503ED0F: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503ED14:
    eax = MEM32(ebp + (-0x8)); /* 0x1503ED14: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x1503ED17: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1503ED1A: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x8)) = eax; /* 0x1503ED1E: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503ED2B; /* 0x1503ED21: je 0x1503ed2b */
L_1503ED23:
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x1503ED23: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1503ED28: mov dword ptr [ebp - 8], eax */
L_1503ED2B:
    eax = ebp + (-0xC); /* 0x1503ED2B: lea eax, [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_1503E8B6; /* 0x1503ED2E: jmp 0x1503e8b6 */
L_1503ED33:
    PUSH32(esp, 1); /* 0x1503ED33: push 1 */
    goto L_1503EDB3; /* 0x1503ED35: jmp 0x1503edb3 */
L_1503ED37:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1503ED37: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EDB1; /* 0x1503ED3B: jne 0x1503edb1 */
L_1503ED3D:
    esi = MEM32(ebp + 0xC); /* 0x1503ED3D: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1503ED40: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503ED42: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503ED47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EDA0; /* 0x1503ED49: jne 0x1503eda0 */
L_1503ED4B:
    /* test MEM8(esi + 0x4), 0x10u */ /* 0x1503ED4B: test byte ptr [esi + 4], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED90; /* 0x1503ED4F: jne 0x1503ed90 */
L_1503ED51:
    ecx = MEM32(ebp + 0x14); /* 0x1503ED51: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503ED54: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503ED59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503ED90; /* 0x1503ED5B: jne 0x1503ed90 */
L_1503ED5D:
    PUSH32(esp, 2); /* 0x1503ED5D: push 2 */
    ecx = ebp + (-0x54); /* 0x1503ED5F: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503ED62: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503ED67: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x24); /* 0x1503ED6A: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1503ED6D: push ecx */
    ecx = eax; /* 0x1503ED6E: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503ED70: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1503ED75: push 0x20 */
    eax = ebp + (-0x4C); /* 0x1503ED77: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1503ED7A: push eax */
    ecx = ebp + (-0x24); /* 0x1503ED7B: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503ED7E: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503ED83: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503ED84: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503ED87: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503ED89: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1503EDBB; /* 0x1503ED8E: jmp 0x1503edbb */
L_1503ED90:
    PUSH32(esp, esi); /* 0x1503ED90: push esi */
L_1503ED91:
    PUSH32(esp, 2); /* 0x1503ED91: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503ED93: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x1503ED96: call 0x1503d070 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503ED9B: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503EDBB; /* 0x1503ED9E: jmp 0x1503edbb */
L_1503EDA0:
    ecx = MEM32(ebp + 0x14); /* 0x1503EDA0: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EDA3: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EDA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EDB1; /* 0x1503EDAA: jne 0x1503edb1 */
L_1503EDAC:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503EDAC: push dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_1503ED91; /* 0x1503EDAF: jmp 0x1503ed91 */
L_1503EDB1:
    PUSH32(esp, 2); /* 0x1503EDB1: push 2 */
L_1503EDB3:
    ecx = MEM32(ebp + 0x8); /* 0x1503EDB3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503EDB6: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503EDBB:
    eax = MEM32(ebp + 0x8); /* 0x1503EDBB: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503EDBE: pop edi */
    esi = POP32_VAL(esp); /* 0x1503EDBF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503EDC0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503EDC1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503EDC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503EDC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503EDC9u);

L_1503EDC9:
    edi = edi; /* 0x1503EDC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503EDCB: push ebp */
    ebp = esp; /* 0x1503EDCC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1503EDCE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503EDD1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFF000u; /* 0x1503EDD3: mov eax, 0xfffff000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1503EDD8: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1503EDDB: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1503EDDE: lea eax, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503EDE1: push ecx */
    PUSH32(esp, eax); /* 0x1503EDE2: push eax */
    PUSH32(esp, ecx); /* 0x1503EDE3: push ecx */
    eax = ebp + (-0x10); /* 0x1503EDE4: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1503EDE7: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, eax); /* 0x1503EDEA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503EDEB: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1503EDEE: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_1503E861); /* 0x1503EDF1: call 0x1503e861 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503EDF6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503EDF9: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503EDFC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503EDFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503EE04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503EE04u);

L_1503EE04:
    edi = edi; /* 0x1503EE04: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503EE06: push ebp */
    ebp = esp; /* 0x1503EE07: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503EE09: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x1503EE0C: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503EE0F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503C977); /* 0x1503EE12: call 0x1503c977 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503EE17: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503EE1C: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503EE1E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EE9F; /* 0x1503EE20: je 0x1503ee9f */
L_1503EE22:
    /* cmp LO8(ecx), 0x3Fu */ /* 0x1503EE22: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503EE6C; /* 0x1503EE25: je 0x1503ee6c */
L_1503EE27:
    /* cmp LO8(ecx), 0x58u */ /* 0x1503EE27: cmp cl, 0x58 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503EE3C; /* 0x1503EE2A: je 0x1503ee3c */
L_1503EE2C:
    eax = ebp + (-0x8); /* 0x1503EE2C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503EE2F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503EE30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15040193); /* 0x1503EE33: call 0x15040193 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EE38: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503EE39: pop ecx */
    goto L_1503EEB7; /* 0x1503EE3A: jmp 0x1503eeb7 */
L_1503EE3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503EE3C: inc eax */
    _flag_k = FK_INC;
    ecx = ebp + (-0x8); /* 0x1503EE3D: lea ecx, [ebp - 8] */
    MEM32(0x150BDB3C) = eax; /* 0x1503EE40: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_15041A30); /* 0x1503EE45: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EE4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EE5D; /* 0x1503EE4C: je 0x1503ee5d */
L_1503EE4E:
    ecx = MEM32(ebp + 0x8); /* 0x1503EE4E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x150045C4u); /* 0x1503EE51: push 0x150045c4 */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503EE56: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    goto L_1503EEB7; /* 0x1503EE5B: jmp 0x1503eeb7 */
L_1503EE5D:
    PUSH32(esp, 0x15004724u); /* 0x1503EE5D: push 0x15004724 */
    ecx = ebp + (-0x10); /* 0x1503EE62: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503EE65: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    goto L_1503EEA9; /* 0x1503EE6A: jmp 0x1503eea9 */
L_1503EE6C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0xFFFFF000u; /* 0x1503EE6C: and dword ptr [ebp - 0xc], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503EE73: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503EE74: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = eax; /* 0x1503EE76: mov dword ptr [0x150bdb3c], eax */
    PUSH32(esp, ecx); /* 0x1503EE7B: push ecx */
    eax = ebp + (-0x10); /* 0x1503EE7C: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1503EE7F: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, eax); /* 0x1503EE82: push eax */
    PUSH32(esp, ecx); /* 0x1503EE83: push ecx */
    eax = ebp + (-0x8); /* 0x1503EE84: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503EE87: push eax */
    eax = ebp + (-0x18); /* 0x1503EE88: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503EE8B: push eax */
    RECOMP_CALL(sub_1503E861); /* 0x1503EE8C: call 0x1503e861 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503EE91: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x8); /* 0x1503EE94: lea ecx, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503EE97: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EE98: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503EE2C; /* 0x1503EE9D: jmp 0x1503ee2c */
L_1503EE9F:
    PUSH32(esp, 2); /* 0x1503EE9F: push 2 */
    ecx = ebp + (-0x18); /* 0x1503EEA1: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503EEA4: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503EEA9:
    ecx = ebp + (-0x8); /* 0x1503EEA9: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503EEAC: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503EEAD: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503EEB0: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EEB2: call 0x1503d09a */
    RECOMP_FLAGS_IN();
L_1503EEB7:
    eax = MEM32(ebp + 0x8); /* 0x1503EEB7: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503EEBA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503EEBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503EEC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503EEC2u);

L_1503EEC2:
    edi = edi; /* 0x1503EEC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503EEC4: push ebp */
    ebp = esp; /* 0x1503EEC5: mov ebp, esp */
    eax = MEM32(0x150BDB4C); /* 0x1503EEC7: mov eax, dword ptr [0x150bdb4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1503EECC: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1503EECF: push esi */
    esi = 0x2000u; /* 0x1503EED0: mov esi, 0x2000 */
    /* test esi, eax */ /* 0x1503EED5: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EF07; /* 0x1503EED7: je 0x1503ef07 */
L_1503EED9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFDFFFu);
    eax = eax & 0xFFFFDFFFu; /* 0x1503EED9: and eax, 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB4C) = eax; /* 0x1503EEDE: mov dword ptr [0x150bdb4c], eax */
    eax = ebp + (-0x10); /* 0x1503EEE3: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1503EEE6: push 0 */
    PUSH32(esp, eax); /* 0x1503EEE8: push eax */
    RECOMP_CALL(sub_1503EE04); /* 0x1503EEE9: call 0x1503ee04 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(0x150BDB4C) | esi)); _flag_b = (uint32_t)((MEM32(0x150BDB4C) | esi));
    MEM32(0x150BDB4C) = MEM32(0x150BDB4C) | esi; /* 0x1503EEEE: or dword ptr [0x150bdb4c], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x1503EEF4: lea eax, [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x1503EEF7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503EEF8: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1503EEF9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503EEFC: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503EEFD: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F0F9; /* 0x1503EF02: jmp 0x1503f0f9 */
L_1503EF07:
    ecx = MEM32(0x150BDB3C); /* 0x1503EF07: mov ecx, dword ptr [0x150bdb3c] */
    PUSH32(esp, ebx); /* 0x1503EF0D: push ebx */
    PUSH32(esp, edi); /* 0x1503EF0E: push edi */
    SET_LO8(eax, MEM8(ecx)); /* 0x1503EF0F: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x3Fu */ /* 0x1503EF11: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F0E5; /* 0x1503EF13: jne 0x1503f0e5 */
L_1503EF19:
    eax = ecx + 0x1; /* 0x1503EF19: lea eax, [ecx + 1] */
    MEM32(0x150BDB3C) = eax; /* 0x1503EF1C: mov dword ptr [0x150bdb3c], eax */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x1503EF21: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EF59; /* 0x1503EF24: jne 0x1503ef59 */
L_1503EF26:
    /* cmp MEM8(eax + 0x1), 0x3Fu */ /* 0x1503EF26: cmp byte ptr [eax + 1], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EF59; /* 0x1503EF2A: jne 0x1503ef59 */
L_1503EF2C:
    eax = ebp + (-0x10); /* 0x1503EF2C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503EF2F: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x1503EF30: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503EF35: mov eax, dword ptr [0x150bdb3c] */
    ecx = POP32_VAL(esp); /* 0x1503EF3A: pop ecx */
    goto L_1503EF43; /* 0x1503EF3B: jmp 0x1503ef43 */
L_1503EF3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503EF3D: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503EF3E: mov dword ptr [0x150bdb3c], eax */
L_1503EF43:
    /* cmp MEM8(eax), 0 */ /* 0x1503EF43: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503EF3D; /* 0x1503EF46: jne 0x1503ef3d */
L_1503EF48:
    eax = ebp + (-0x10); /* 0x1503EF48: lea eax, [ebp - 0x10] */
L_1503EF4B:
    ecx = MEM32(ebp + 0x8); /* 0x1503EF4B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503EF4E: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503EF4F: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F0F7; /* 0x1503EF54: jmp 0x1503f0f7 */
L_1503EF59:
    eax = ebp + (-0x8); /* 0x1503EF59: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503EF5C: push eax */
    RECOMP_CALL(sub_15040B57); /* 0x1503EF5D: call 0x15040b57 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EF62: pop ecx */
    ecx = ebp + (-0x8); /* 0x1503EF63: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EF66: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1503EF6B: mov ebx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1503EF6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503EF7C; /* 0x1503EF70: jne 0x1503ef7c */
L_1503EF72:
    /* test LO8(ebx), 0x20u */ /* 0x1503EF72: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503EF7C; /* 0x1503EF75: je 0x1503ef7c */
L_1503EF77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503EF77: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503EF79: inc edi */
    _flag_k = FK_INC;
    goto L_1503EF7E; /* 0x1503EF7A: jmp 0x1503ef7e */
L_1503EF7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503EF7C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503EF7E:
    esi = ebx; /* 0x1503EF7E: mov esi, ebx */
    ecx = ebp + (-0x8); /* 0x1503EF80: lea ecx, [ebp - 8] */
    if (11u) _cf = (((esi) >> 10) & 1u); /* 0x1503EF83: shr esi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((esi >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 11u; /* 0x1503EF83: shr esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1503EF86: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15041A70); /* 0x1503EF89: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EF8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F0CD; /* 0x1503EF90: je 0x1503f0cd */
L_1503EF96:
    eax = MEM32(0x150BDB3C); /* 0x1503EF96: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x1503EF9B: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503EF9D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F050; /* 0x1503EF9F: je 0x1503f050 */
L_1503EFA5:
    /* cmp LO8(eax), 0x40u */ /* 0x1503EFA5: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F050; /* 0x1503EFA7: je 0x1503f050 */
L_1503EFAD:
    eax = ebp + (-0x10); /* 0x1503EFAD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503EFB0: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1503EFB1: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503EFB6: pop ecx */
    ecx = ebp + (-0x10); /* 0x1503EFB7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_15041A30); /* 0x1503EFBA: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503EFBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F050; /* 0x1503EFC1: jne 0x1503f050 */
L_1503EFC7:
    /* cmp MEM8(0x150BDB50), LO8(eax) */ /* 0x1503EFC7: cmp byte ptr [0x150bdb50], al */
    _flag_a = (uint32_t)(MEM8(0x150BDB50)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F024; /* 0x1503EFCD: je 0x1503f024 */
L_1503EFCF:
    MEM8(0x150BDB50) = (uint8_t)(LO8(eax)); /* 0x1503EFCF: mov byte ptr [0x150bdb50], al */
    ecx = ebp + (-0x8); /* 0x1503EFD4: lea ecx, [ebp - 8] */
    eax = ebp + (-0x10); /* 0x1503EFD7: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503EFDA: push eax */
    eax = ebp + (-0x18); /* 0x1503EFDB: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503EFDE: push eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503EFDF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503EFE4: push eax */
    ecx = ebp + (-0x8); /* 0x1503EFE5: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503EFE8: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503EFED: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1503EFF2: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F04D; /* 0x1503EFF5: je 0x1503f04d */
L_1503EFF7:
    eax = ebp + (-0x18); /* 0x1503EFF7: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503EFFA: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1503EFFB: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F000: pop ecx */
    PUSH32(esp, eax); /* 0x1503F001: push eax */
    ecx = ebp + (-0x10); /* 0x1503F002: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F005: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004558u); /* 0x1503F00A: push 0x15004558 */
    eax = ebp + (-0x18); /* 0x1503F00F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503F012: push eax */
    ecx = ebp + (-0x10); /* 0x1503F013: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D132); /* 0x1503F016: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503F01B: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503F01E: push ecx */
    ecx = ebp + (-0x20); /* 0x1503F01F: lea ecx, [ebp - 0x20] */
    goto L_1503F03C; /* 0x1503F022: jmp 0x1503f03c */
L_1503F024:
    PUSH32(esp, 0x15004558u); /* 0x1503F024: push 0x15004558 */
    eax = ebp + (-0x20); /* 0x1503F029: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503F02C: push eax */
    ecx = ebp + (-0x10); /* 0x1503F02D: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D132); /* 0x1503F030: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503F035: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503F038: push ecx */
    ecx = ebp + (-0x18); /* 0x1503F039: lea ecx, [ebp - 0x18] */
L_1503F03C:
    PUSH32(esp, ecx); /* 0x1503F03C: push ecx */
    ecx = eax; /* 0x1503F03D: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F03F: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F044: push eax */
    ecx = ebp + (-0x8); /* 0x1503F045: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F048: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F04D:
    ebx = MEM32(ebp + (-0x4)); /* 0x1503F04D: mov ebx, dword ptr [ebp - 4] */
L_1503F050:
    /* test edi, edi */ /* 0x1503F050: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F066; /* 0x1503F052: je 0x1503f066 */
L_1503F054:
    ecx = ebp + (-0x8); /* 0x1503F054: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_15041A30); /* 0x1503F057: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503F05C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F066; /* 0x1503F05E: jne 0x1503f066 */
L_1503F060:
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x1503F060: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503F063: mov dword ptr [ebp - 4], ebx */
L_1503F066:
    /* test esi, esi */ /* 0x1503F066: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F073; /* 0x1503F068: je 0x1503f073 */
L_1503F06A:
    _flag_a = (uint32_t)((ebx | 0x800u)); _flag_b = (uint32_t)((ebx | 0x800u));
    ebx = ebx | 0x800u; /* 0x1503F06A: or ebx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503F070: mov dword ptr [ebp - 4], ebx */
L_1503F073:
    ecx = ebp + (-0x8); /* 0x1503F073: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_15041A30); /* 0x1503F076: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503F07B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F0CD; /* 0x1503F07D: jne 0x1503f0cd */
L_1503F07F:
    /* test ebx, 0x100u */ /* 0x1503F07F: test ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F0CD; /* 0x1503F085: jne 0x1503f0cd */
L_1503F087:
    eax = MEM32(0x150BDB3C); /* 0x1503F087: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x1503F08C: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503F08E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F09C; /* 0x1503F090: je 0x1503f09c */
L_1503F092:
    /* cmp LO8(eax), 0x40u */ /* 0x1503F092: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F0E9; /* 0x1503F094: jne 0x1503f0e9 */
L_1503F096:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x1503F096: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
L_1503F09C:
    /* test MEM32(0x150BDB4C), 0x1000u */ /* 0x1503F09C: test dword ptr [0x150bdb4c], 0x1000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F0D5; /* 0x1503F0A6: je 0x1503f0d5 */
L_1503F0A8:
    /* test edi, edi */ /* 0x1503F0A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F0D5; /* 0x1503F0AA: jne 0x1503f0d5 */
L_1503F0AC:
    /* test ebx, 0x800u */ /* 0x1503F0AC: test ebx, 0x800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F0D5; /* 0x1503F0B2: jne 0x1503f0d5 */
L_1503F0B4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & edi; /* 0x1503F0B4: and dword ptr [ebp - 0x10], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x1503F0B7: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0xFFFFF000u; /* 0x1503F0BA: and dword ptr [ebp - 0xc], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503F0C1: push eax */
    eax = ebp + (-0x20); /* 0x1503F0C2: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503F0C5: push eax */
    RECOMP_CALL(sub_1503D50B); /* 0x1503F0C6: call 0x1503d50b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F0CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503F0CC: pop ecx */
L_1503F0CD:
    eax = ebp + (-0x8); /* 0x1503F0CD: lea eax, [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1503EF4B; /* 0x1503F0D0: jmp 0x1503ef4b */
L_1503F0D5:
    eax = ebp + (-0x8); /* 0x1503F0D5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F0D8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503F0D9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D50B); /* 0x1503F0DC: call 0x1503d50b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F0E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503F0E2: pop ecx */
    goto L_1503F0F7; /* 0x1503F0E3: jmp 0x1503f0f7 */
L_1503F0E5:
    /* test LO8(eax), LO8(eax) */ /* 0x1503F0E5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F0ED; /* 0x1503F0E7: je 0x1503f0ed */
L_1503F0E9:
    PUSH32(esp, 1); /* 0x1503F0E9: push 1 */
    goto L_1503F0EF; /* 0x1503F0EB: jmp 0x1503f0ef */
L_1503F0ED:
    PUSH32(esp, 2); /* 0x1503F0ED: push 2 */
L_1503F0EF:
    ecx = MEM32(ebp + 0x8); /* 0x1503F0EF: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F0F2: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503F0F7:
    edi = POP32_VAL(esp); /* 0x1503F0F7: pop edi */
    ebx = POP32_VAL(esp); /* 0x1503F0F8: pop ebx */
L_1503F0F9:
    eax = MEM32(ebp + 0x8); /* 0x1503F0F9: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1503F0FC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F0FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F0FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F105u);

L_1503F105:
    edi = edi; /* 0x1503F105: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F107: push ebp */
    ebp = esp; /* 0x1503F108: mov ebp, esp */
    ecx = MEM32(0x150BDB3C); /* 0x1503F10A: mov ecx, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503F110: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1503F113: push ebx */
    PUSH32(esp, esi); /* 0x1503F114: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503F115: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0x51u */ /* 0x1503F117: cmp byte ptr [ecx], 0x51 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x1503F11A: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F129; /* 0x1503F11B: jne 0x1503f129 */
L_1503F11D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503F11D: inc ecx */
    _flag_k = FK_INC;
    esi = 0x150045A4u; /* 0x1503F11E: mov esi, 0x150045a4 */
    MEM32(0x150BDB3C) = ecx; /* 0x1503F123: mov dword ptr [0x150bdb3c], ecx */
L_1503F129:
    SET_LO8(edx, MEM8(ecx)); /* 0x1503F129: mov dl, byte ptr [ecx] */
    /* test LO8(edx), LO8(edx) */ /* 0x1503F12B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F1F9; /* 0x1503F12D: je 0x1503f1f9 */
L_1503F133:
    /* cmp LO8(edx), 0x30u */ /* 0x1503F133: cmp dl, 0x30 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503F17F; /* 0x1503F136: jl 0x1503f17f */
L_1503F138:
    /* cmp LO8(edx), 0x39u */ /* 0x1503F138: cmp dl, 0x39 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1503F17F; /* 0x1503F13B: jg 0x1503f17f */
L_1503F13D:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x1503F13D: movsx eax, dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Fu; /* 0x1503F140: sub eax, 0x2f */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503F143: inc ecx */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1503F144: cdq  */
    MEM32(0x150BDB3C) = ecx; /* 0x1503F145: mov dword ptr [0x150bdb3c], ecx */
    PUSH32(esp, edx); /* 0x1503F14B: push edx */
    PUSH32(esp, eax); /* 0x1503F14C: push eax */
    /* test esi, esi */ /* 0x1503F14D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F169; /* 0x1503F14F: je 0x1503f169 */
L_1503F151:
    ecx = ebp + (-0x8); /* 0x1503F151: lea ecx, [ebp - 8] */
L_1503F154:
    RECOMP_CALL(sub_1503CB50); /* 0x1503F154: call 0x1503cb50 */
    RECOMP_FLAGS_IN();
L_1503F159:
    PUSH32(esp, eax); /* 0x1503F159: push eax */
    eax = ebp + (-0x10); /* 0x1503F15A: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1503F15D: push esi */
    PUSH32(esp, eax); /* 0x1503F15E: push eax */
    RECOMP_CALL(sub_1503D046); /* 0x1503F15F: call 0x1503d046 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503F164: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1503F171; /* 0x1503F167: jmp 0x1503f171 */
L_1503F169:
    ecx = ebp + (-0x18); /* 0x1503F169: lea ecx, [ebp - 0x18] */
L_1503F16C:
    RECOMP_CALL(sub_1503CB50); /* 0x1503F16C: call 0x1503cb50 */
    RECOMP_FLAGS_IN();
L_1503F171:
    ecx = MEM32(ebp + 0x8); /* 0x1503F171: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503F174: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F175: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F203; /* 0x1503F17A: jmp 0x1503f203 */
L_1503F17F:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1503F17F: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x1503F182: movlpd qword ptr [ebp - 8], xmm0 */
    ebx = MEM32(ebp + (-0x4)); /* 0x1503F187: mov ebx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x1503F18A: mov edi, dword ptr [ebp - 8] */
    goto L_1503F1B5; /* 0x1503F18D: jmp 0x1503f1b5 */
L_1503F18F:
    /* test LO8(edx), LO8(edx) */ /* 0x1503F18F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F1F9; /* 0x1503F191: je 0x1503f1f9 */
L_1503F193:
    eax = edx + (-0x41); /* 0x1503F193: lea eax, [edx - 0x41] */
    /* cmp LO8(eax), 0xFu */ /* 0x1503F196: cmp al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1503F1D7; /* 0x1503F198: ja 0x1503f1d7 */
L_1503F19A:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x1503F19A: movsx eax, dl */
    if (1) _cf = (((ebx) >> 28) & 1u); /* 0x1503F19D: shld ebx, edi, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) << (4u)) | ((uint32_t)(edi) >> (32 - (4u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) << (4u)) | ((uint32_t)(edi) >> (32 - (4u)))) : (ebx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1503F1A1: sub eax, 0x41 */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1503F1A4: cdq  */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1503F1A5: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1503F1A5: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1503F1A8: add edi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503F1AA: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503F1AC: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = ecx; /* 0x1503F1AD: mov dword ptr [0x150bdb3c], ecx */
    SET_LO8(edx, MEM8(ecx)); /* 0x1503F1B3: mov dl, byte ptr [ecx] */
L_1503F1B5:
    /* cmp LO8(edx), 0x40u */ /* 0x1503F1B5: cmp dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F18F; /* 0x1503F1B8: jne 0x1503f18f */
L_1503F1BA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503F1BA: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1503F1BB: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x1503F1BF: push ebx */
    MEM32(0x150BDB3C) = ecx; /* 0x1503F1C0: mov dword ptr [0x150bdb3c], ecx */
    PUSH32(esp, edi); /* 0x1503F1C6: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F1E5; /* 0x1503F1C7: je 0x1503f1e5 */
L_1503F1C9:
    /* test esi, esi */ /* 0x1503F1C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F1DB; /* 0x1503F1CB: je 0x1503f1db */
L_1503F1CD:
    ecx = ebp + (-0x18); /* 0x1503F1CD: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503CABA); /* 0x1503F1D0: call 0x1503caba */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503F159; /* 0x1503F1D5: jmp 0x1503f159 */
L_1503F1D7:
    PUSH32(esp, 1); /* 0x1503F1D7: push 1 */
    goto L_1503F1FB; /* 0x1503F1D9: jmp 0x1503f1fb */
L_1503F1DB:
    ecx = ebp + (-0x8); /* 0x1503F1DB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CABA); /* 0x1503F1DE: call 0x1503caba */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503F171; /* 0x1503F1E3: jmp 0x1503f171 */
L_1503F1E5:
    /* test esi, esi */ /* 0x1503F1E5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F1F1; /* 0x1503F1E7: je 0x1503f1f1 */
L_1503F1E9:
    ecx = ebp + (-0x18); /* 0x1503F1E9: lea ecx, [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_1503F154; /* 0x1503F1EC: jmp 0x1503f154 */
L_1503F1F1:
    ecx = ebp + (-0x8); /* 0x1503F1F1: lea ecx, [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1503F16C; /* 0x1503F1F4: jmp 0x1503f16c */
L_1503F1F9:
    PUSH32(esp, 2); /* 0x1503F1F9: push 2 */
L_1503F1FB:
    ecx = MEM32(ebp + 0x8); /* 0x1503F1FB: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F1FE: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503F203:
    eax = MEM32(ebp + 0x8); /* 0x1503F203: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503F206: pop edi */
    esi = POP32_VAL(esp); /* 0x1503F207: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503F208: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F209: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F20A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F211(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F211u);

L_1503F211:
    edi = edi; /* 0x1503F211: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F213: push ebp */
    ebp = esp; /* 0x1503F214: mov ebp, esp */
    eax = MEM32(0x150BDB4C); /* 0x1503F216: mov eax, dword ptr [0x150bdb4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1503F21B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = eax; /* 0x1503F21E: mov edx, eax */
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x1503F220: shr edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 15u; /* 0x1503F220: shr edx, 0xf */
    edx = ~edx; /* 0x1503F223: not edx */
    PUSH32(esp, edi); /* 0x1503F225: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503F226: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503F228: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x1503F229: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F234; /* 0x1503F22B: je 0x1503f234 */
L_1503F22D:
    /* test eax, 0x1000u */ /* 0x1503F22D: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F236; /* 0x1503F232: je 0x1503f236 */
L_1503F234:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503F234: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503F236:
    eax = MEM32(0x150BDB3C); /* 0x1503F236: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503F23B: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFF000u; /* 0x1503F23F: and dword ptr [ebp - 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x1503F246: movsx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F249: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503F24A: mov dword ptr [0x150bdb3c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1503F24F: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F316; /* 0x1503F252: je 0x1503f316 */
L_1503F258:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x54u; /* 0x1503F258: sub ecx, 0x54 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F2CA; /* 0x1503F25B: je 0x1503f2ca */
L_1503F25D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503F25D: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F2C3; /* 0x1503F260: je 0x1503f2c3 */
L_1503F262:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503F262: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F2BC; /* 0x1503F265: je 0x1503f2bc */
L_1503F267:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503F267: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F284; /* 0x1503F26A: je 0x1503f284 */
L_1503F26C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503F26C: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F27D; /* 0x1503F26F: je 0x1503f27d */
L_1503F271:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503F271: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503F2D7; /* 0x1503F274: jne 0x1503f2d7 */
L_1503F276:
    PUSH32(esp, 0x1500482Cu); /* 0x1503F276: push 0x1500482c */
    goto L_1503F2CF; /* 0x1503F27B: jmp 0x1503f2cf */
L_1503F27D:
    PUSH32(esp, 0x15004820u); /* 0x1503F27D: push 0x15004820 */
    goto L_1503F2CF; /* 0x1503F282: jmp 0x1503f2cf */
L_1503F284:
    eax = ebp + (-0x18); /* 0x1503F284: lea eax, [ebp - 0x18] */
    edi = edx; /* 0x1503F287: mov edi, edx */
    PUSH32(esp, esi); /* 0x1503F289: push esi */
    PUSH32(esp, eax); /* 0x1503F28A: push eax */
    RECOMP_CALL(sub_1503F335); /* 0x1503F28B: call 0x1503f335 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1503F290: lea ecx, [ebp - 0x20] */
    MEM32(esp) = 0x1500483Cu; /* 0x1503F293: mov dword ptr [esp], 0x1500483c */
    esi = eax; /* 0x1503F29A: mov esi, eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503F29C: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503F2A1: push esi */
    ecx = ebp + (-0x10); /* 0x1503F2A2: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503F2A5: push ecx */
    ecx = eax; /* 0x1503F2A6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F2A8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1503F2AD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503F2B0: push eax */
    ecx = ebp + (-0x8); /* 0x1503F2B1: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F2B4: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1503F2B9: pop esi */
    goto L_1503F2D7; /* 0x1503F2BA: jmp 0x1503f2d7 */
L_1503F2BC:
    PUSH32(esp, 0x15004818u); /* 0x1503F2BC: push 0x15004818 */
    goto L_1503F2CF; /* 0x1503F2C1: jmp 0x1503f2cf */
L_1503F2C3:
    PUSH32(esp, 0x15004810u); /* 0x1503F2C3: push 0x15004810 */
    goto L_1503F2CF; /* 0x1503F2C8: jmp 0x1503f2cf */
L_1503F2CA:
    PUSH32(esp, 0x15004808u); /* 0x1503F2CA: push 0x15004808 */
L_1503F2CF:
    ecx = ebp + (-0x8); /* 0x1503F2CF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503F2D2: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503F2D7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1503F2D7: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0xFFFFF000u; /* 0x1503F2DB: and dword ptr [ebp - 0xc], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503F2E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F2F2; /* 0x1503F2E4: je 0x1503f2f2 */
L_1503F2E6:
    eax = ebp + (-0x8); /* 0x1503F2E6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F2E9: push eax */
    ecx = ebp + (-0x10); /* 0x1503F2EA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F2ED: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F2F2:
    eax = ebp + (-0x8); /* 0x1503F2F2: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F2F5: push eax */
    RECOMP_CALL(sub_150407D9); /* 0x1503F2F6: call 0x150407d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F2FB: pop ecx */
    eax = ebp + (-0x8); /* 0x1503F2FC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F2FF: push eax */
    ecx = ebp + (-0x10); /* 0x1503F300: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503F303: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1503F308: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x1503F30B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503F30E: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F30F: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F329; /* 0x1503F314: jmp 0x1503f329 */
L_1503F316:
    ecx = MEM32(ebp + 0x8); /* 0x1503F316: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503F319: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x150047FAu); /* 0x1503F31A: push 0x150047fa */
    MEM32(0x150BDB3C) = eax; /* 0x1503F31F: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503F324: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
L_1503F329:
    eax = MEM32(ebp + 0x8); /* 0x1503F329: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503F32C: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F32D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F32E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F335(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F335u);

L_1503F335:
    edi = edi; /* 0x1503F335: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F337: push ebp */
    ebp = esp; /* 0x1503F338: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503F33A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BDB3C); /* 0x1503F33D: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503F342: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0xFFFFF000u; /* 0x1503F346: and dword ptr [ebp - 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax)); /* 0x1503F34D: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503F34F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F3EE; /* 0x1503F351: je 0x1503f3ee */
L_1503F357:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1503F357: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1503F35A: add eax, -0x30 */
    _flag_k = FK_ADD;
    /* cmp eax, 7 */ /* 0x1503F35D: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503F3EA; /* 0x1503F360: ja 0x1503f3ea */
L_1503F366:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1503F3FD)); goto _ljump; }
L_1503F36D:
    PUSH32(esp, 0x150046F8u); /* 0x1503F36D: push 0x150046f8 */
    goto L_1503F387; /* 0x1503F372: jmp 0x1503f387 */
L_1503F374:
    PUSH32(esp, 0x15004700u); /* 0x1503F374: push 0x15004700 */
    goto L_1503F387; /* 0x1503F379: jmp 0x1503f387 */
L_1503F37B:
    PUSH32(esp, 0x15004708u); /* 0x1503F37B: push 0x15004708 */
    goto L_1503F387; /* 0x1503F380: jmp 0x1503f387 */
L_1503F382:
    PUSH32(esp, 0x15004710u); /* 0x1503F382: push 0x15004710 */
L_1503F387:
    ecx = ebp + (-0x8); /* 0x1503F387: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503F38A: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_1503F38F:
    eax = MEM32(0x150BDB3C); /* 0x1503F38F: mov eax, dword ptr [0x150bdb3c] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1503F394: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x1503F397: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x31u; /* 0x1503F39D: sub eax, 0x31 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F3B4; /* 0x1503F3A0: je 0x1503f3b4 */
L_1503F3A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503F3A2: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503F3A3: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F3B4; /* 0x1503F3A6: je 0x1503f3b4 */
L_1503F3A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503F3A8: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503F3A9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F3B4; /* 0x1503F3AC: je 0x1503f3b4 */
L_1503F3AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503F3AE: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503F3AF: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503F3DC; /* 0x1503F3B2: jne 0x1503f3dc */
L_1503F3B4:
    PUSH32(esp, 0x15004718u); /* 0x1503F3B4: push 0x15004718 */
    ecx = ebp + (-0x18); /* 0x1503F3B9: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503F3BC: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503F3C1: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503F3C4: push ecx */
    ecx = ebp + (-0x10); /* 0x1503F3C5: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503F3C8: push ecx */
    ecx = eax; /* 0x1503F3C9: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F3CB: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1503F3D0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503F3D3: push eax */
    ecx = ebp + (-0x8); /* 0x1503F3D4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F3D7: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F3DC:
    ecx = MEM32(ebp + 0x8); /* 0x1503F3DC: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x1503F3DF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F3E2: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F3E3: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F3F8; /* 0x1503F3E8: jmp 0x1503f3f8 */
L_1503F3EA:
    PUSH32(esp, 1); /* 0x1503F3EA: push 1 */
    goto L_1503F3F0; /* 0x1503F3EC: jmp 0x1503f3f0 */
L_1503F3EE:
    PUSH32(esp, 2); /* 0x1503F3EE: push 2 */
L_1503F3F0:
    ecx = MEM32(ebp + 0x8); /* 0x1503F3F0: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F3F3: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503F3F8:
    eax = MEM32(ebp + 0x8); /* 0x1503F3F8: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F3FB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F3FC: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1503F36Du: goto L_1503F36D;
      case 0x1503F374u: goto L_1503F374;
      case 0x1503F37Bu: goto L_1503F37B;
      case 0x1503F382u: goto L_1503F382;
      case 0x1503F38Fu: goto L_1503F38F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1503F423(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F423u);

L_1503F423:
    edi = edi; /* 0x1503F423: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F425: push ebp */
    ebp = esp; /* 0x1503F426: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503F428: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(0x150BDB3C); /* 0x1503F42B: mov edx, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1503F431: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503F435: inc edx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = edx; /* 0x1503F436: mov dword ptr [0x150bdb3c], edx */
    PUSH32(esp, esi); /* 0x1503F43C: push esi */
    esi = 0xFFFFF000u; /* 0x1503F43D: mov esi, 0xfffff000 */
    ecx = (int32_t)(int8_t)MEM8(edx); /* 0x1503F442: movsx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1503F445: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1503F448: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1503F44A: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F52A; /* 0x1503F44D: je 0x1503f52a */
L_1503F453:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503F453: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F512; /* 0x1503F456: je 0x1503f512 */
L_1503F45C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503F45C: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503F50A; /* 0x1503F45F: je 0x1503f50a */
L_1503F465:
    esi = (int32_t)(int8_t)MEM8(edx + 0x1); /* 0x1503F465: movsx esi, byte ptr [edx + 1] */
    eax = edx + 0x2; /* 0x1503F469: lea eax, [edx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1503F46C: add ecx, -0x30 */
    _flag_k = FK_ADD;
    MEM32(0x150BDB3C) = eax; /* 0x1503F46F: mov dword ptr [0x150bdb3c], eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1503F474: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1503F474: shl ecx, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFD0u; /* 0x1503F477: add esi, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1503F47A: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x1503F47C: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503F4AC; /* 0x1503F47F: jbe 0x1503f4ac */
L_1503F481:
    PUSH32(esp, 0x2Cu); /* 0x1503F481: push 0x2c */
    ecx = ebp + (-0x8); /* 0x1503F483: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD87); /* 0x1503F486: call 0x1503cd87 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1503F48B: push 0 */
    PUSH32(esp, esi); /* 0x1503F48D: push esi */
    ecx = ebp + (-0x10); /* 0x1503F48E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503CB50); /* 0x1503F491: call 0x1503cb50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F496: push eax */
    eax = ebp + (-0x18); /* 0x1503F497: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503F49A: push eax */
    ecx = ebp + (-0x8); /* 0x1503F49B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F49E: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F4A3: push eax */
    ecx = ebp + (-0x8); /* 0x1503F4A4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F4A7: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F4AC:
    PUSH32(esp, 0x3Eu); /* 0x1503F4AC: push 0x3e */
    eax = ebp + (-0x18); /* 0x1503F4AE: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503F4B1: push eax */
    ecx = ebp + (-0x8); /* 0x1503F4B2: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503F4B5: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F4BA: push eax */
    ecx = ebp + (-0x8); /* 0x1503F4BB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F4BE: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503F4C3: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x24u */ /* 0x1503F4C8: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F4D0; /* 0x1503F4CB: jne 0x1503f4d0 */
L_1503F4CD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F4CD: inc eax */
    _flag_k = FK_INC;
    goto L_1503F4EC; /* 0x1503F4CE: jmp 0x1503f4ec */
L_1503F4D0:
    PUSH32(esp, 0x5Eu); /* 0x1503F4D0: push 0x5e */
    eax = ebp + (-0x18); /* 0x1503F4D2: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503F4D5: push eax */
    ecx = ebp + (-0x8); /* 0x1503F4D6: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503F4D9: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F4DE: push eax */
    ecx = ebp + (-0x8); /* 0x1503F4DF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F4E2: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503F4E7: mov eax, dword ptr [0x150bdb3c] */
L_1503F4EC:
    ecx = MEM32(ebp + 0x8); /* 0x1503F4EC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F4EF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0x400u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0x400u));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0x400u; /* 0x1503F4F0: or dword ptr [ebp - 4], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = eax; /* 0x1503F4F7: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x8); /* 0x1503F4FC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F4FF: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F500: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503F505: mov eax, dword ptr [ebp + 8] */
    goto L_1503F558; /* 0x1503F508: jmp 0x1503f558 */
L_1503F50A:
    eax = MEM32(ebp + 0xC); /* 0x1503F50A: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(0x25u); /* 0x1503F50D: mov byte ptr [eax], 0x25 */
    goto L_1503F522; /* 0x1503F510: jmp 0x1503f522 */
L_1503F512:
    eax = MEM32(ebp + 0x10); /* 0x1503F512: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1503F515: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x3Eu); /* 0x1503F518: push 0x3e */
    MEM8(eax) = (uint8_t)(1); /* 0x1503F51A: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_1503CD87); /* 0x1503F51D: call 0x1503cd87 */
    RECOMP_FLAGS_IN();
L_1503F522:
    eax = MEM32(0x150BDB3C); /* 0x1503F522: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F527: inc eax */
    _flag_k = FK_INC;
    goto L_1503F54A; /* 0x1503F528: jmp 0x1503f54a */
L_1503F52A:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1503F52A: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F547; /* 0x1503F52E: jne 0x1503f547 */
L_1503F530:
    eax = MEM32(ebp + 0xC); /* 0x1503F530: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x5Eu); /* 0x1503F533: push 0x5e */
    ecx = POP32_VAL(esp); /* 0x1503F535: pop ecx */
    PUSH32(esp, 0x25u); /* 0x1503F536: push 0x25 */
    /* cmp MEM8(eax), 0x26u */ /* 0x1503F538: cmp byte ptr [eax], 0x26 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = POP32_VAL(esp); /* 0x1503F53B: pop edx */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x1503F53C: cmove ecx, edx */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1503F53F: mov byte ptr [eax], cl */
    edx = MEM32(0x150BDB3C); /* 0x1503F541: mov edx, dword ptr [0x150bdb3c] */
L_1503F547:
    eax = edx + 0x1; /* 0x1503F547: lea eax, [edx + 1] */
L_1503F54A:
    MEM32(0x150BDB3C) = eax; /* 0x1503F54A: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503F54F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1503F552: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & esi; /* 0x1503F555: and dword ptr [eax + 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503F558:
    esi = POP32_VAL(esp); /* 0x1503F558: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F559: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F55A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F561(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F561u);

L_1503F561:
    edi = edi; /* 0x1503F561: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F563: push ebp */
    ebp = esp; /* 0x1503F564: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503F566: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = 0x150BDB20u; /* 0x1503F569: mov ecx, 0x150bdb20 */
    PUSH32(esp, esi); /* 0x1503F56E: push esi */
    PUSH32(esp, 0); /* 0x1503F56F: push 0 */
    PUSH32(esp, 8); /* 0x1503F571: push 8 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503F573: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503F578: mov esi, eax */
    /* test esi, esi */ /* 0x1503F57A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F58A; /* 0x1503F57C: je 0x1503f58a */
L_1503F57E:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503F57E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x1503F581: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503F58C; /* 0x1503F588: jmp 0x1503f58c */
L_1503F58A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503F58A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503F58C:
    PUSH32(esp, esi); /* 0x1503F58C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503F58D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503EE04); /* 0x1503F590: call 0x1503ee04 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1503F595: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503F598: push eax */
    RECOMP_CALL(sub_1503EDC9); /* 0x1503F599: call 0x1503edc9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503F59E: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x1503F5A1: lea eax, [ebp - 0x10] */
    ecx = ebp + (-0x8); /* 0x1503F5A4: lea ecx, [ebp - 8] */
    PUSH32(esp, 0x20u); /* 0x1503F5A7: push 0x20 */
    PUSH32(esp, eax); /* 0x1503F5A9: push eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503F5AA: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503F5AF: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x18); /* 0x1503F5B2: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503F5B5: push ecx */
    ecx = eax; /* 0x1503F5B6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F5B8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F5BD: push eax */
    ecx = esi; /* 0x1503F5BE: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F5C0: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503F5C5: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1503F5C8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F5C9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F5CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F5D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F5D1u);

L_1503F5D1:
    edi = edi; /* 0x1503F5D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503F5D3: push ebp */
    ebp = esp; /* 0x1503F5D4: mov ebp, esp */
    ecx = MEM32(0x150BDB3C); /* 0x1503F5D6: mov ecx, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1503F5DC: sub esp, 0x3c */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ecx)); /* 0x1503F5DF: mov al, byte ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1503F5E1: push ebx */
    PUSH32(esp, esi); /* 0x1503F5E2: push esi */
    PUSH32(esp, edi); /* 0x1503F5E3: push edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1503F5E4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F92F; /* 0x1503F5E6: je 0x1503f92f */
L_1503F5EC:
    /* cmp LO8(eax), 0x36u */ /* 0x1503F5EC: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503F5F4; /* 0x1503F5EE: jl 0x1503f5f4 */
L_1503F5F0:
    /* cmp LO8(eax), 0x39u */ /* 0x1503F5F0: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503F5FC; /* 0x1503F5F2: jle 0x1503f5fc */
L_1503F5F4:
    /* cmp LO8(eax), 0x5Fu */ /* 0x1503F5F4: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F92B; /* 0x1503F5F6: jne 0x1503f92b */
L_1503F5FC:
    ebx = (int32_t)(int8_t)LO8(eax); /* 0x1503F5FC: movsx ebx, al */
    eax = ecx + 0x1; /* 0x1503F5FF: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x36u; /* 0x1503F602: sub ebx, 0x36 */
    _flag_k = FK_CMP;
    MEM32(0x150BDB3C) = eax; /* 0x1503F605: mov dword ptr [0x150bdb3c], eax */
    /* cmp ebx, 0x29u */ /* 0x1503F60A: cmp ebx, 0x29 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F634; /* 0x1503F60D: jne 0x1503f634 */
L_1503F60F:
    SET_LO8(ecx, MEM8(eax)); /* 0x1503F60F: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503F611: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F92F; /* 0x1503F613: je 0x1503f92f */
L_1503F619:
    ebx = (int32_t)(int8_t)LO8(ecx); /* 0x1503F619: movsx ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x3Du; /* 0x1503F61C: sub ebx, 0x3d */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F61F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503F620: mov dword ptr [0x150bdb3c], eax */
    /* cmp ebx, 4 */ /* 0x1503F625: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503F62F; /* 0x1503F628: jl 0x1503f62f */
L_1503F62A:
    /* cmp ebx, 7 */ /* 0x1503F62A: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503F645; /* 0x1503F62D: jle 0x1503f645 */
L_1503F62F:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1503F62F: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503F645; /* 0x1503F632: jmp 0x1503f645 */
L_1503F634:
    /* test ebx, ebx */ /* 0x1503F634: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503F92B; /* 0x1503F636: js 0x1503f92b */
L_1503F63C:
    /* cmp ebx, 3 */ /* 0x1503F63C: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503F92B; /* 0x1503F63F: jg 0x1503f92b */
L_1503F645:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1503F645: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F92B; /* 0x1503F648: je 0x1503f92b */
L_1503F64E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503F64E: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1503F651: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC); /* 0x1503F655: lea ecx, [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFF000u; /* 0x1503F658: and dword ptr [ebp - 0x10], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F65F: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1503F664: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1503F666: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503F669: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F73A; /* 0x1503F66C: je 0x1503f73a */
L_1503F672:
    PUSH32(esp, 0x15004558u); /* 0x1503F672: push 0x15004558 */
    ecx = ebp + (-0x2C); /* 0x1503F677: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503F67A: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503F67F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503F682: push ecx */
    ecx = ebp + (-0x1C); /* 0x1503F683: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F686: push ecx */
    ecx = eax; /* 0x1503F687: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F689: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1503F68E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503F691: push eax */
    ecx = ebp + (-0xC); /* 0x1503F692: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F695: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503F69A: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0 */ /* 0x1503F69F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F6D8; /* 0x1503F6A2: je 0x1503f6d8 */
L_1503F6A4:
    eax = ebp + (-0x2C); /* 0x1503F6A4: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1503F6A7: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1503F6A8: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F6AD: pop ecx */
    PUSH32(esp, 0x20u); /* 0x1503F6AE: push 0x20 */
    ecx = ebp + (-0x34); /* 0x1503F6B0: lea ecx, [ebp - 0x34] */
    esi = eax; /* 0x1503F6B3: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503F6B5: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503F6BA: push esi */
    ecx = ebp + (-0x1C); /* 0x1503F6BB: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F6BE: push ecx */
    ecx = eax; /* 0x1503F6BF: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F6C1: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1503F6C6: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503F6C9: push eax */
    eax = ebp + (-0x3C); /* 0x1503F6CA: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503F6CD: push eax */
    ecx = ebp + (-0x1C); /* 0x1503F6CE: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F6D1: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1503F6F4; /* 0x1503F6D6: jmp 0x1503f6f4 */
L_1503F6D8:
    PUSH32(esp, 2); /* 0x1503F6D8: push 2 */
    ecx = ebp + (-0x3C); /* 0x1503F6DA: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F6DD: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503F6E2: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503F6E5: push ecx */
    ecx = ebp + (-0x1C); /* 0x1503F6E6: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F6E9: push ecx */
    ecx = eax; /* 0x1503F6EA: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F6EC: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x1503F6F1: lea eax, [ebp - 0x1c] */
L_1503F6F4:
    PUSH32(esp, eax); /* 0x1503F6F4: push eax */
    ecx = ebp + (-0xC); /* 0x1503F6F5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F6F8: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503F6FD: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1503F702: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503F704: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F79E; /* 0x1503F706: je 0x1503f79e */
L_1503F70C:
    /* cmp LO8(ecx), 0x40u */ /* 0x1503F70C: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503F92B; /* 0x1503F70F: jne 0x1503f92b */
L_1503F715:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503F715: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503F716: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(0x150BDB4C); /* 0x1503F71B: mov eax, dword ptr [0x150bdb4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1503F720: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1503F723: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x3C); /* 0x1503F725: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503F728: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F78D; /* 0x1503F729: je 0x1503f78d */
L_1503F72B:
    RECOMP_CALL(sub_15041234); /* 0x1503F72B: call 0x15041234 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F730: pop ecx */
    PUSH32(esp, eax); /* 0x1503F731: push eax */
    ecx = ebp + (-0x14); /* 0x1503F732: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F735: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F73A:
    /* test LO8(ebx), 4 */ /* 0x1503F73A: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F7CA; /* 0x1503F73D: je 0x1503f7ca */
L_1503F743:
    eax = MEM32(0x150BDB4C); /* 0x1503F743: mov eax, dword ptr [0x150bdb4c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503F748: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503F748: shr eax, 1 */
    eax = ~eax; /* 0x1503F74A: not eax */
    /* test LO8(eax), 1 */ /* 0x1503F74C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x3C); /* 0x1503F74E: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503F751: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F7BB; /* 0x1503F752: je 0x1503f7bb */
L_1503F754:
    RECOMP_CALL(sub_1503E35E); /* 0x1503F754: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F759: pop ecx */
    PUSH32(esp, 0x20u); /* 0x1503F75A: push 0x20 */
    ecx = ebp + (-0x34); /* 0x1503F75C: lea ecx, [ebp - 0x34] */
    esi = eax; /* 0x1503F75F: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503F761: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503F766: push esi */
    ecx = ebp + (-0x1C); /* 0x1503F767: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F76A: push ecx */
    ecx = eax; /* 0x1503F76B: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F76D: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1503F772: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503F775: push eax */
    eax = ebp + (-0x2C); /* 0x1503F776: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1503F779: push eax */
    ecx = ebp + (-0x1C); /* 0x1503F77A: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F77D: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F782: push eax */
    ecx = ebp + (-0xC); /* 0x1503F783: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F786: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503F7CA; /* 0x1503F78B: jmp 0x1503f7ca */
L_1503F78D:
    RECOMP_CALL(sub_15041234); /* 0x1503F78D: call 0x15041234 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F792: pop ecx */
    PUSH32(esp, eax); /* 0x1503F793: push eax */
    ecx = ebp + (-0x14); /* 0x1503F794: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503F797: call 0x1503d41a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503F73A; /* 0x1503F79C: jmp 0x1503f73a */
L_1503F79E:
    PUSH32(esp, 2); /* 0x1503F79E: push 2 */
    ecx = ebp + (-0x3C); /* 0x1503F7A0: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F7A3: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503F7A8: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503F7AB: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503F7AC: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1503F7AF: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F7B1: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1503F93F; /* 0x1503F7B6: jmp 0x1503f93f */
L_1503F7BB:
    RECOMP_CALL(sub_1503E35E); /* 0x1503F7BB: call 0x1503e35e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F7C0: pop ecx */
    PUSH32(esp, eax); /* 0x1503F7C1: push eax */
    ecx = ebp + (-0xC); /* 0x1503F7C2: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503F7C5: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503F7CA:
    eax = MEM32(0x150BDB4C); /* 0x1503F7CA: mov eax, dword ptr [0x150bdb4c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1503F7CF: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1503F7CF: shr eax, 1 */
    eax = ~eax; /* 0x1503F7D1: not eax */
    /* test LO8(eax), 1 */ /* 0x1503F7D3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x3C); /* 0x1503F7D5: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503F7D8: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F7FB; /* 0x1503F7D9: je 0x1503f7fb */
L_1503F7DB:
    RECOMP_CALL(sub_1503E7BB); /* 0x1503F7DB: call 0x1503e7bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F7E0: pop ecx */
    ecx = ebp + (-0xC); /* 0x1503F7E1: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503F7E4: push ecx */
    ecx = ebp + (-0x34); /* 0x1503F7E5: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1503F7E8: push ecx */
    ecx = eax; /* 0x1503F7E9: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F7EB: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F7F0: push eax */
    ecx = ebp + (-0xC); /* 0x1503F7F1: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F7F4: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    goto L_1503F80A; /* 0x1503F7F9: jmp 0x1503f80a */
L_1503F7FB:
    RECOMP_CALL(sub_1503E7BB); /* 0x1503F7FB: call 0x1503e7bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F800: pop ecx */
    PUSH32(esp, eax); /* 0x1503F801: push eax */
    ecx = ebp + (-0xC); /* 0x1503F802: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503F805: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503F80A:
    ecx = MEM32(ebp + 0xC); /* 0x1503F80A: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x1503F80D: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503F812: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F846; /* 0x1503F814: jne 0x1503f846 */
L_1503F816:
    PUSH32(esp, 0x28u); /* 0x1503F816: push 0x28 */
    ecx = ebp + (-0x3C); /* 0x1503F818: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1503C947); /* 0x1503F81B: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x1503F820: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1503F823: push ecx */
    ecx = ebp + (-0x1C); /* 0x1503F824: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F827: push ecx */
    ecx = eax; /* 0x1503F828: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F82A: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1503F82F: push 0x29 */
    eax = ebp + (-0x34); /* 0x1503F831: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1503F834: push eax */
    ecx = ebp + (-0x1C); /* 0x1503F835: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503F838: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F83D: push eax */
    ecx = ebp + (-0xC); /* 0x1503F83E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F841: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503F846:
    PUSH32(esp, 0); /* 0x1503F846: push 0 */
    PUSH32(esp, 8); /* 0x1503F848: push 8 */
    ecx = 0x150BDB20u; /* 0x1503F84A: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503F84F: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503F854: mov edi, eax */
    /* test edi, edi */ /* 0x1503F856: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F866; /* 0x1503F858: je 0x1503f866 */
L_1503F85A:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1503F85A: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0xFFFFF000u; /* 0x1503F85D: and dword ptr [edi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503F868; /* 0x1503F864: jmp 0x1503f868 */
L_1503F866:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503F866: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503F868:
    eax = ebp + (-0x24); /* 0x1503F868: lea eax, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x1503F86B: push edi */
    PUSH32(esp, eax); /* 0x1503F86C: push eax */
    RECOMP_CALL(sub_150404E9); /* 0x1503F86D: call 0x150404e9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1503F872: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1503F875: push eax */
    RECOMP_CALL(sub_1503E0E6); /* 0x1503F876: call 0x1503e0e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503F87B: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x34); /* 0x1503F87E: lea ecx, [ebp - 0x34] */
    esi = eax; /* 0x1503F881: mov esi, eax */
    PUSH32(esp, 0x28u); /* 0x1503F883: push 0x28 */
    RECOMP_CALL(sub_1503C947); /* 0x1503F885: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503F88A: push esi */
    ecx = ebp + (-0x1C); /* 0x1503F88B: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1503F88E: push ecx */
    ecx = eax; /* 0x1503F88F: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503F891: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x1503F896: push 0x29 */
    eax = ebp + (-0x2C); /* 0x1503F898: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1503F89B: push eax */
    ecx = ebp + (-0x1C); /* 0x1503F89C: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503F89F: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503F8A4: push eax */
    ecx = ebp + (-0xC); /* 0x1503F8A5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503F8A8: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x150BDB4C); /* 0x1503F8AD: mov ecx, dword ptr [0x150bdb4c] */
    eax = ecx; /* 0x1503F8B3: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    eax = eax & 0x60u; /* 0x1503F8B5: and eax, 0x60 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0x60u */ /* 0x1503F8B8: cmp al, 0x60 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F8D4; /* 0x1503F8BA: je 0x1503f8d4 */
L_1503F8BC:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1503F8BC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503F8D4; /* 0x1503F8C0: je 0x1503f8d4 */
L_1503F8C2:
    eax = ebp + (-0x14); /* 0x1503F8C2: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1503F8C5: push eax */
    ecx = ebp + (-0xC); /* 0x1503F8C6: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503F8C9: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x150BDB4C); /* 0x1503F8CE: mov ecx, dword ptr [0x150bdb4c] */
L_1503F8D4:
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1503F8D4: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x1503F8D4: shr ecx, 8 */
    eax = ebp + (-0x3C); /* 0x1503F8D7: lea eax, [ebp - 0x3c] */
    ecx = ~ecx; /* 0x1503F8DA: not ecx */
    PUSH32(esp, eax); /* 0x1503F8DC: push eax */
    /* test LO8(ecx), 1 */ /* 0x1503F8DD: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F8F3; /* 0x1503F8E0: je 0x1503f8f3 */
L_1503F8E2:
    RECOMP_CALL(sub_15041270); /* 0x1503F8E2: call 0x15041270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F8E7: pop ecx */
    PUSH32(esp, eax); /* 0x1503F8E8: push eax */
    ecx = ebp + (-0xC); /* 0x1503F8E9: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503F8EC: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_1503F902; /* 0x1503F8F1: jmp 0x1503f902 */
L_1503F8F3:
    RECOMP_CALL(sub_15041270); /* 0x1503F8F3: call 0x15041270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503F8F8: pop ecx */
    PUSH32(esp, eax); /* 0x1503F8F9: push eax */
    ecx = ebp + (-0xC); /* 0x1503F8FA: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D41A); /* 0x1503F8FD: call 0x1503d41a */
    RECOMP_FLAGS_IN();
L_1503F902:
    /* test edi, edi */ /* 0x1503F902: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F91F; /* 0x1503F904: je 0x1503f91f */
L_1503F906:
    eax = ebp + (-0xC); /* 0x1503F906: lea eax, [ebp - 0xc] */
    ecx = edi; /* 0x1503F909: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1503F90B: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x1503F90C: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1503F911: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x24); /* 0x1503F914: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1503F917: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503F918: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1503F93F; /* 0x1503F91D: jmp 0x1503f93f */
L_1503F91F:
    PUSH32(esp, 3); /* 0x1503F91F: push 3 */
L_1503F921:
    ecx = MEM32(ebp + 0x8); /* 0x1503F921: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503F924: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_1503F93F; /* 0x1503F929: jmp 0x1503f93f */
L_1503F92B:
    PUSH32(esp, 1); /* 0x1503F92B: push 1 */
    RECOMP_BACKEDGE();
    goto L_1503F921; /* 0x1503F92D: jmp 0x1503f921 */
L_1503F92F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503F92F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x1503F932: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503F934: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x1503F937: call 0x1503d070 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503F93C: add esp, 0xc */
    _flag_k = FK_ADD;
L_1503F93F:
    eax = MEM32(ebp + 0x8); /* 0x1503F93F: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503F942: pop edi */
    esi = POP32_VAL(esp); /* 0x1503F943: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503F944: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503F945: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F946: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503F94D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503F94Du);

L_1503F94D:
    edi = edi; /* 0x1503F94D: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1503F94F: push ebx */
    PUSH32(esp, esi); /* 0x1503F950: push esi */
    PUSH32(esp, edi); /* 0x1503F951: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503F952: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1503F954: mov esi, ecx */
    edi = ebx; /* 0x1503F956: mov edi, ebx */
    RECOMP_CALL(sub_15041A30); /* 0x1503F958: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503F95D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F99E; /* 0x1503F95F: jne 0x1503f99e */
L_1503F961:
    ebx = MEM32(esi); /* 0x1503F961: mov ebx, dword ptr [esi] */
    /* test ebx, ebx */ /* 0x1503F963: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F99C; /* 0x1503F965: je 0x1503f99c */
L_1503F967:
    eax = MEM32(ebx); /* 0x1503F967: mov eax, dword ptr [ebx] */
    esi = MEM32(eax); /* 0x1503F969: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x1503F96B: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503F96D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1503F973: mov ecx, ebx */
    RECOMP_ICALL(esi); /* 0x1503F975: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503F977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ebx; } /* 0x1503F979: cmovne edi, ebx */
    ebx = MEM32(ebx + 0x4); /* 0x1503F97C: mov ebx, dword ptr [ebx + 4] */
    /* test ebx, ebx */ /* 0x1503F97F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503F967; /* 0x1503F981: jne 0x1503f967 */
L_1503F983:
    /* test edi, edi */ /* 0x1503F983: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503F99C; /* 0x1503F985: je 0x1503f99c */
L_1503F987:
    eax = MEM32(edi); /* 0x1503F987: mov eax, dword ptr [edi] */
    esi = MEM32(eax + 0x4); /* 0x1503F989: mov esi, dword ptr [eax + 4] */
    ecx = esi; /* 0x1503F98C: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503F98E: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1503F994: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x1503F996: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x1503F998: mov bl, al */
    goto L_1503F99E; /* 0x1503F99A: jmp 0x1503f99e */
L_1503F99C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503F99C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503F99E:
    edi = POP32_VAL(esp); /* 0x1503F99E: pop edi */
    esi = POP32_VAL(esp); /* 0x1503F99F: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1503F9A0: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1503F9A2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503F9A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503FA18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503FA18u);

L_1503FA18:
    edi = edi; /* 0x1503FA18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503FA1A: push ebp */
    ebp = esp; /* 0x1503FA1B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1503FA1D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x1503FA20: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1503FA23: push esi */
    PUSH32(esp, 0); /* 0x1503FA24: push 0 */
    PUSH32(esp, eax); /* 0x1503FA26: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503FA27: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FA2C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503FA2D: pop ecx */
    PUSH32(esp, 0x60u); /* 0x1503FA2E: push 0x60 */
    ecx = ebp + (-0x18); /* 0x1503FA30: lea ecx, [ebp - 0x18] */
    esi = eax; /* 0x1503FA33: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503FA35: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503FA3A: push esi */
    ecx = ebp + (-0x8); /* 0x1503FA3B: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503FA3E: push ecx */
    ecx = eax; /* 0x1503FA3F: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503FA41: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x1503FA46: push 0x27 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503FA48: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x1503FA4B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FA4E: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503FA53: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1503FA56: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503FA57: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FA58: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503FA5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503FA5Fu);

L_1503FA5F:
    edi = edi; /* 0x1503FA5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503FA61: push ebp */
    ebp = esp; /* 0x1503FA62: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1503FA64: push ebx */
    PUSH32(esp, esi); /* 0x1503FA65: push esi */
    PUSH32(esp, edi); /* 0x1503FA66: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503FA67: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1503FA6A: mov ebx, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 7; /* 0x1503FA6C: add edi, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    edi = edi & 0xFFFFFFF8u; /* 0x1503FA6F: and edi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1503FA72: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FA88; /* 0x1503FA76: je 0x1503fa88 */
L_1503FA78:
    esi = MEM32(ebx); /* 0x1503FA78: mov esi, dword ptr [ebx] */
    ecx = esi; /* 0x1503FA7A: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1503FA7C: push edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503FA7D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1503FA83: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FA85: pop ecx */
    goto L_1503FAD6; /* 0x1503FA86: jmp 0x1503fad6 */
L_1503FA88:
    esi = MEM32(ebx + 0x10); /* 0x1503FA88: mov esi, dword ptr [ebx + 0x10] */
    /* test edi, edi */ /* 0x1503FA8B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1503FA8D: push 8 */
    eax = POP32_VAL(esp); /* 0x1503FA8F: pop eax */
    if (TEST_Z(_flag_a, _flag_b)) { edi = eax; } /* 0x1503FA90: cmove edi, eax */
    /* cmp esi, edi */ /* 0x1503FA93: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1503FAC9; /* 0x1503FA95: jae 0x1503fac9 */
L_1503FA97:
    esi = 0x1000u; /* 0x1503FA97: mov esi, 0x1000 */
    /* cmp edi, esi */ /* 0x1503FA9C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1503FADD; /* 0x1503FA9E: ja 0x1503fadd */
L_1503FAA0:
    PUSH32(esp, 1); /* 0x1503FAA0: push 1 */
    PUSH32(esp, 0x1004u); /* 0x1503FAA2: push 0x1004 */
    ecx = 0x150BDB20u; /* 0x1503FAA7: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503FA5F); /* 0x1503FAAC: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503FAB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FADD; /* 0x1503FAB3: je 0x1503fadd */
L_1503FAB5:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1503FAB5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0xC); /* 0x1503FAB8: mov ecx, dword ptr [ebx + 0xc] */
    /* test ecx, ecx */ /* 0x1503FABB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FAC3; /* 0x1503FABD: je 0x1503fac3 */
L_1503FABF:
    MEM32(ecx) = eax; /* 0x1503FABF: mov dword ptr [ecx], eax */
    goto L_1503FAC6; /* 0x1503FAC1: jmp 0x1503fac6 */
L_1503FAC3:
    MEM32(ebx + 0x8) = eax; /* 0x1503FAC3: mov dword ptr [ebx + 8], eax */
L_1503FAC6:
    MEM32(ebx + 0xC) = eax; /* 0x1503FAC6: mov dword ptr [ebx + 0xc], eax */
L_1503FAC9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1503FAC9: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x10) = esi; /* 0x1503FACB: mov dword ptr [ebx + 0x10], esi */
    eax = MEM32(ebx + 0xC); /* 0x1503FACE: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1503FAD1: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1503FAD4: add eax, esi */
    _flag_k = FK_ADD;
L_1503FAD6:
    edi = POP32_VAL(esp); /* 0x1503FAD6: pop edi */
    esi = POP32_VAL(esp); /* 0x1503FAD7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503FAD8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503FAD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1503FADA: ret 8 */
L_1503FADD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503FADD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503FAD6; /* 0x1503FADF: jmp 0x1503fad6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1503FAE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503FAE7u);

L_1503FAE7:
    edx = MEM32(0x150BDB3C); /* 0x1503FAE7: mov edx, dword ptr [0x150bdb3c] */
    PUSH32(esp, esi); /* 0x1503FAED: push esi */
    SET_LO8(ecx, MEM8(edx)); /* 0x1503FAEE: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503FAF0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FB45; /* 0x1503FAF2: je 0x1503fb45 */
L_1503FAF4:
    /* cmp LO8(ecx), 0x30u */ /* 0x1503FAF4: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1503FB0D; /* 0x1503FAF7: jl 0x1503fb0d */
L_1503FAF9:
    /* cmp LO8(ecx), 0x39u */ /* 0x1503FAF9: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FB0D; /* 0x1503FAFC: jg 0x1503fb0d */
L_1503FAFE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503FAFE: inc edx */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1503FAFF: movsx eax, cl */
    MEM32(0x150BDB3C) = edx; /* 0x1503FB02: mov dword ptr [0x150bdb3c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x2Fu; /* 0x1503FB08: sub eax, 0x2f */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1503FB0B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FB0C: ret  */
L_1503FB0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503FB0D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503FB30; /* 0x1503FB0F: jmp 0x1503fb30 */
L_1503FB11:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1503FB11: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FB45; /* 0x1503FB13: je 0x1503fb45 */
L_1503FB15:
    eax = ecx + (-0x41); /* 0x1503FB15: lea eax, [ecx - 0x41] */
    /* cmp LO8(eax), 0xFu */ /* 0x1503FB18: cmp al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1503FB40; /* 0x1503FB1A: ja 0x1503fb40 */
L_1503FB1C:
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1503FB1C: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1503FB1C: shl esi, 4 */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1503FB1F: movsx eax, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFBFu; /* 0x1503FB22: add esi, -0x41 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1503FB25: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503FB27: inc edx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = edx; /* 0x1503FB28: mov dword ptr [0x150bdb3c], edx */
    SET_LO8(ecx, MEM8(edx)); /* 0x1503FB2E: mov cl, byte ptr [edx] */
L_1503FB30:
    /* cmp LO8(ecx), 0x40u */ /* 0x1503FB30: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503FB11; /* 0x1503FB33: jne 0x1503fb11 */
L_1503FB35:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1503FB35: inc edx */
    _flag_k = FK_INC;
    eax = esi; /* 0x1503FB36: mov eax, esi */
    MEM32(0x150BDB3C) = edx; /* 0x1503FB38: mov dword ptr [0x150bdb3c], edx */
    esi = POP32_VAL(esp); /* 0x1503FB3E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FB3F: ret  */
L_1503FB40:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503FB40: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503FB43: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FB44: ret  */
L_1503FB45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503FB45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503FB47: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FB48: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503FB4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503FB4Fu);

L_1503FB4F:
    edi = edi; /* 0x1503FB4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503FB51: push ebp */
    ebp = esp; /* 0x1503FB52: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1503FB54: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BDB3C); /* 0x1503FB57: mov eax, dword ptr [0x150bdb3c] */
    edx = 0xFFFFF000u; /* 0x1503FB5C: mov edx, 0xfffff000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x1503FB61: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1503FB64: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503FB67: push esi */
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x1503FB68: movsx ecx, byte ptr [eax] */
    esi = eax + 0x1; /* 0x1503FB6B: lea esi, [eax + 1] */
    PUSH32(esp, edi); /* 0x1503FB6E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503FB6F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = esi; /* 0x1503FB71: mov dword ptr [0x150bdb3c], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1503FB77: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1503FB7A: mov dword ptr [ebp - 0x10], edi */
    /* cmp ecx, 0x49u */ /* 0x1503FB7D: cmp ecx, 0x49 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FD45; /* 0x1503FB80: jg 0x1503fd45 */
L_1503FB86:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FB86: je 0x1503fd1f */
L_1503FB8C:
    /* cmp ecx, 0x38u */ /* 0x1503FB8C: cmp ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FD00; /* 0x1503FB8F: jg 0x1503fd00 */
L_1503FB95:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FB95: je 0x1503fcf0 */
L_1503FB9B:
    /* cmp ecx, 0x33u */ /* 0x1503FB9B: cmp ecx, 0x33 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FCDD; /* 0x1503FB9E: jg 0x1503fcdd */
L_1503FBA4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FBA4: je 0x1503fcf0 */
L_1503FBAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1503FBAA: sub ecx, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FCCF; /* 0x1503FBAC: je 0x1503fccf */
L_1503FBB2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x1503FBB2: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FBD6; /* 0x1503FBB5: je 0x1503fbd6 */
L_1503FBB7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FBB7: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FBD6; /* 0x1503FBBA: je 0x1503fbd6 */
L_1503FBBC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FBBC: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FBBF: je 0x1503fcf0 */
L_1503FBC5:
    PUSH32(esp, 1); /* 0x1503FBC5: push 1 */
L_1503FBC7:
    ecx = MEM32(ebp + 0x8); /* 0x1503FBC7: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1503FBCA: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_1503FBCF:
    eax = MEM32(ebp + 0x8); /* 0x1503FBCF: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1503FBD2: pop edi */
    esi = POP32_VAL(esp); /* 0x1503FBD3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503FBD4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503FBD5: ret  */
L_1503FBD6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x1503FBD6: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1503FBD9: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x10)) = edi; /* 0x1503FBDD: mov dword ptr [ebp - 0x10], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FC5D; /* 0x1503FBE0: je 0x1503fc5d */
L_1503FBE2:
    eax = ebp + (-0x20); /* 0x1503FBE2: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503FBE5: push eax */
    RECOMP_CALL(sub_15040BA5); /* 0x1503FBE6: call 0x15040ba5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FBEB: pop ecx */
    PUSH32(esp, 0x3Cu); /* 0x1503FBEC: push 0x3c */
    ecx = ebp + (-0x28); /* 0x1503FBEE: lea ecx, [ebp - 0x28] */
    esi = eax; /* 0x1503FBF1: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x1503FBF3: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503FBF8: push esi */
    ecx = ebp + (-0x18); /* 0x1503FBF9: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503FBFC: push ecx */
    ecx = eax; /* 0x1503FBFD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503FBFF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1503FC04: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503FC07: push eax */
    ecx = ebp + (-0x10); /* 0x1503FC08: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FC0B: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1503FC10: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503F94D); /* 0x1503FC13: call 0x1503f94d */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Eu */ /* 0x1503FC18: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503FC26; /* 0x1503FC1A: jne 0x1503fc26 */
L_1503FC1C:
    PUSH32(esp, 0x20u); /* 0x1503FC1C: push 0x20 */
    ecx = ebp + (-0x10); /* 0x1503FC1E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D215); /* 0x1503FC21: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_1503FC26:
    PUSH32(esp, 0x3Eu); /* 0x1503FC26: push 0x3e */
    ecx = ebp + (-0x10); /* 0x1503FC28: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503D215); /* 0x1503FC2B: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1503FC30: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1503FC33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FC3A; /* 0x1503FC35: je 0x1503fc3a */
L_1503FC37:
    MEM8(eax) = (uint8_t)(1); /* 0x1503FC37: mov byte ptr [eax], 1 */
L_1503FC3A:
    esi = MEM32(0x150BDB3C); /* 0x1503FC3A: mov esi, dword ptr [0x150bdb3c] */
    /* cmp MEM8(esi), 0 */ /* 0x1503FC40: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503FC56; /* 0x1503FC43: jne 0x1503fc56 */
L_1503FC45:
    eax = ebp + (-0x10); /* 0x1503FC45: lea eax, [ebp - 0x10] */
L_1503FC48:
    ecx = MEM32(ebp + 0x8); /* 0x1503FC48: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1503FC4B: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x1503FC4C: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FBCF; /* 0x1503FC51: jmp 0x1503fbcf */
L_1503FC56:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503FC56: inc esi */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = esi; /* 0x1503FC57: mov dword ptr [0x150bdb3c], esi */
L_1503FC5D:
    eax = ebp + (-0x28); /* 0x1503FC5D: lea eax, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1503FC60: push edi */
    PUSH32(esp, eax); /* 0x1503FC61: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x1503FC62: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FC67: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503FC68: pop ecx */
    PUSH32(esp, eax); /* 0x1503FC69: push eax */
    ecx = ebp + (-0x8); /* 0x1503FC6A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503FC6D: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503FC72: lea ecx, [ebp - 8] */
    MEM32(0x150BDB3C) = esi; /* 0x1503FC75: mov dword ptr [0x150bdb3c], esi */
    RECOMP_CALL(sub_15041A30); /* 0x1503FC7B: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503FC80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503FCAF; /* 0x1503FC82: jne 0x1503fcaf */
L_1503FC84:
    /* cmp MEM8(esi + (-0x1)), 0x31u */ /* 0x1503FC84: cmp byte ptr [esi - 1], 0x31 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x1))) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503FCAF; /* 0x1503FC88: jne 0x1503fcaf */
L_1503FC8A:
    PUSH32(esp, 0x7Eu); /* 0x1503FC8A: push 0x7e */
    ecx = ebp + (-0x28); /* 0x1503FC8C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503C947); /* 0x1503FC8F: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1503FC94: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1503FC97: push ecx */
    ecx = ebp + (-0x18); /* 0x1503FC98: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1503FC9B: push ecx */
    ecx = eax; /* 0x1503FC9C: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1503FC9E: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1503FCA3: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503FCA6: push eax */
    ecx = ebp + (-0x8); /* 0x1503FCA7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1503FCAA: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1503FCAF:
    ecx = ebp + (-0x10); /* 0x1503FCAF: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_15041A30); /* 0x1503FCB2: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503FCB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503FCC7; /* 0x1503FCB9: jne 0x1503fcc7 */
L_1503FCBB:
    eax = ebp + (-0x10); /* 0x1503FCBB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503FCBE: push eax */
    ecx = ebp + (-0x8); /* 0x1503FCBF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FCC2: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_1503FCC7:
    eax = ebp + (-0x8); /* 0x1503FCC7: lea eax, [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1503FC48; /* 0x1503FCCA: jmp 0x1503fc48 */
L_1503FCCF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1503FCCF: dec esi */
    _flag_k = FK_DEC;
    MEM32(0x150BDB3C) = esi; /* 0x1503FCD0: mov dword ptr [0x150bdb3c], esi */
L_1503FCD6:
    PUSH32(esp, 2); /* 0x1503FCD6: push 2 */
    RECOMP_BACKEDGE();
    goto L_1503FBC7; /* 0x1503FCD8: jmp 0x1503fbc7 */
L_1503FCDD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x34u; /* 0x1503FCDD: sub ecx, 0x34 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FCE0: je 0x1503fcf0 */
L_1503FCE2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FCE2: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FCE5: je 0x1503fcf0 */
L_1503FCE7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FCE7: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503FBBC; /* 0x1503FCEA: jne 0x1503fbbc */
L_1503FCF0:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1503FCF0: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x15000F98)); /* 0x1503FCF4: push dword ptr [eax*4 + 0x15000f98] */
    goto L_1504003B; /* 0x1503FCFB: jmp 0x1504003b */
L_1503FD00:
    /* cmp ecx, 0x44u */ /* 0x1503FD00: cmp ecx, 0x44 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FD34; /* 0x1503FD03: jg 0x1503fd34 */
L_1503FD05:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FD05: je 0x1503fd1f */
L_1503FD07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x39u; /* 0x1503FD07: sub ecx, 0x39 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FCF0; /* 0x1503FD0A: je 0x1503fcf0 */
L_1503FD0C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 8; /* 0x1503FD0C: sub ecx, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FD0F: je 0x1503fd1f */
L_1503FD11:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FD11: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD2F; /* 0x1503FD14: je 0x1503fd2f */
L_1503FD16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FD16: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FD19: jne 0x1503fbc5 */
L_1503FD1F:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x1503FD1F: movsx eax, byte ptr [esi - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x15000F7C)); /* 0x1503FD23: push dword ptr [eax*4 + 0x15000f7c] */
    goto L_1504003B; /* 0x1503FD2A: jmp 0x1504003b */
L_1503FD2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503FD2F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503FD31: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1503FD1F; /* 0x1503FD32: jmp 0x1503fd1f */
L_1503FD34:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x45u; /* 0x1503FD34: sub ecx, 0x45 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FD37: je 0x1503fd1f */
L_1503FD39:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FD39: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FD3C: je 0x1503fd1f */
L_1503FD3E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FD3E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD1F; /* 0x1503FD41: je 0x1503fd1f */
L_1503FD43:
    RECOMP_BACKEDGE();
    goto L_1503FD16; /* 0x1503FD43: jmp 0x1503fd16 */
L_1503FD45:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x4Au; /* 0x1503FD45: sub ecx, 0x4a */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x15u */ /* 0x1503FD48: cmp ecx, 0x15 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FD4B: ja 0x1503fbc5 */
L_1503FD51:
    eax = (uint32_t)MEM8(ecx + 0x1504012F); /* 0x1503FD51: movzx eax, byte ptr [ecx + 0x1504012f] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x15040123)); goto _ljump; }
L_1503FD5F:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1503FD5F: movsx eax, byte ptr [esi] */
    ecx = esi + 0x1; /* 0x1503FD62: lea ecx, [esi + 1] */
    MEM32(0x150BDB3C) = ecx; /* 0x1503FD65: mov dword ptr [0x150bdb3c], ecx */
    /* cmp eax, 0x47u */ /* 0x1503FD6B: cmp eax, 0x47 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FE92; /* 0x1503FD6E: jg 0x1503fe92 */
L_1503FD74:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FE13; /* 0x1503FD74: je 0x1503fe13 */
L_1503FD7A:
    /* cmp eax, 0x38u */ /* 0x1503FD7A: cmp eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FDEB; /* 0x1503FD7D: jg 0x1503fdeb */
L_1503FD7F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FDD3; /* 0x1503FD7F: je 0x1503fdd3 */
L_1503FD81:
    /* cmp eax, 0x33u */ /* 0x1503FD81: cmp eax, 0x33 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FDBB; /* 0x1503FD84: jg 0x1503fdbb */
L_1503FD86:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FD86: je 0x1503fd9f */
L_1503FD88:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1503FD88: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FDAF; /* 0x1503FD8A: je 0x1503fdaf */
L_1503FD8C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x1503FD8C: sub eax, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FD8F: je 0x1503fd9f */
L_1503FD91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FD91: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FD94: je 0x1503fd9f */
L_1503FD96:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FD96: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FD99: jne 0x1503fbc5 */
L_1503FD9F:
    eax = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x1503FD9F: movsx eax, byte ptr [ecx - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x15001028)); /* 0x1503FDA3: push dword ptr [eax*4 + 0x15001028] */
    goto L_1504003B; /* 0x1503FDAA: jmp 0x1504003b */
L_1503FDAF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1503FDAF: dec ecx */
    _flag_k = FK_DEC;
    MEM32(0x150BDB3C) = ecx; /* 0x1503FDB0: mov dword ptr [0x150bdb3c], ecx */
    RECOMP_BACKEDGE();
    goto L_1503FCD6; /* 0x1503FDB6: jmp 0x1503fcd6 */
L_1503FDBB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x34u; /* 0x1503FDBB: sub eax, 0x34 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FDBE: je 0x1503fd9f */
L_1503FDC0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FDC0: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FDC3: je 0x1503fd9f */
L_1503FDC5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FDC5: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FD9F; /* 0x1503FDC8: je 0x1503fd9f */
L_1503FDCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FDCA: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FDCD: jne 0x1503fbc5 */
L_1503FDD3:
    eax = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x1503FDD3: movsx eax, byte ptr [ecx - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x15001028)); /* 0x1503FDD7: push dword ptr [eax*4 + 0x15001028] */
L_1503FDDE:
    ecx = MEM32(ebp + 0x8); /* 0x1503FDDE: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503FDE1: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FBCF; /* 0x1503FDE6: jmp 0x1503fbcf */
L_1503FDEB:
    /* cmp eax, 0x43u */ /* 0x1503FDEB: cmp eax, 0x43 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1503FE88; /* 0x1503FDEE: jg 0x1503fe88 */
L_1503FDF4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503FE7F; /* 0x1503FDF4: je 0x1503fe7f */
L_1503FDFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x39u; /* 0x1503FDFA: sub eax, 0x39 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FE63; /* 0x1503FDFD: je 0x1503fe63 */
L_1503FDFF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1503FDFF: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FE20; /* 0x1503FE02: je 0x1503fe20 */
L_1503FE04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503FE04: dec eax */
    _flag_k = FK_DEC;
L_1503FE05:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FE05: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FE13; /* 0x1503FE08: je 0x1503fe13 */
L_1503FE0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503FE0A: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FE0D: jne 0x1503fbc5 */
L_1503FE13:
    eax = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x1503FE13: movsx eax, byte ptr [ecx - 1] */
    PUSH32(esp, MEM32(eax * 4 + 0x1500100C)); /* 0x1503FE17: push dword ptr [eax*4 + 0x1500100c] */
    RECOMP_BACKEDGE();
    goto L_1503FDDE; /* 0x1503FE1E: jmp 0x1503fdde */
L_1503FE20:
    SET_LO8(eax, MEM8(ecx)); /* 0x1503FE20: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503FE22: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = ecx; /* 0x1503FE23: mov dword ptr [0x150bdb3c], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1503FE29: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503FE56; /* 0x1503FE2B: je 0x1503fe56 */
L_1503FE2D:
    /* cmp LO8(eax), 0x30u */ /* 0x1503FE2D: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FE2F: jne 0x1503fbc5 */
L_1503FE35:
    PUSH32(esp, edi); /* 0x1503FE35: push edi */
    PUSH32(esp, 0x15004588u); /* 0x1503FE36: push 0x15004588 */
L_1503FE3B:
    eax = ebp + (-0x18); /* 0x1503FE3B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503FE3E: push eax */
    RECOMP_CALL(sub_15040ABC); /* 0x1503FE3F: call 0x15040abc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503FE44: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | 0x100u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | 0x100u));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | 0x100u; /* 0x1503FE47: or dword ptr [ebp - 0x14], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503FE4E:
    eax = ebp + (-0x18); /* 0x1503FE4E: lea eax, [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_1503FC48; /* 0x1503FE51: jmp 0x1503fc48 */
L_1503FE56:
    eax = ecx + (-0x1); /* 0x1503FE56: lea eax, [ecx - 1] */
L_1503FE59:
    MEM32(0x150BDB3C) = eax; /* 0x1503FE59: mov dword ptr [0x150bdb3c], eax */
    RECOMP_BACKEDGE();
    goto L_1503FCD6; /* 0x1503FE5E: jmp 0x1503fcd6 */
L_1503FE63:
    eax = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x1503FE63: movsx eax, byte ptr [ecx - 1] */
    ecx = ebp + (-0x18); /* 0x1503FE67: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(eax * 4 + 0x15001028)); /* 0x1503FE6A: push dword ptr [eax*4 + 0x15001028] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1503FE71: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | 0x800u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | 0x800u));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | 0x800u; /* 0x1503FE76: or dword ptr [ebp - 0x14], 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503FE4E; /* 0x1503FE7D: jmp 0x1503fe4e */
L_1503FE7F:
    PUSH32(esp, 1); /* 0x1503FE7F: push 1 */
    PUSH32(esp, 0x1500411Cu); /* 0x1503FE81: push 0x1500411c */
    RECOMP_BACKEDGE();
    goto L_1503FE3B; /* 0x1503FE86: jmp 0x1503fe3b */
L_1503FE88:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x44u; /* 0x1503FE88: sub eax, 0x44 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FE13; /* 0x1503FE8B: je 0x1503fe13 */
L_1503FE8D:
    RECOMP_BACKEDGE();
    goto L_1503FE05; /* 0x1503FE8D: jmp 0x1503fe05 */
L_1503FE92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x48u; /* 0x1503FE92: sub eax, 0x48 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x17u */ /* 0x1503FE95: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FE98: ja 0x1503fbc5 */
L_1503FE9E:
    eax = (uint32_t)MEM8(eax + 0x15040163); /* 0x1503FE9E: movzx eax, byte ptr [eax + 0x15040163] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x15040147)); goto _ljump; }
L_1503FEAC:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1503FEAC: movsx eax, byte ptr [esi] */
    ecx = ebp + (-0x8); /* 0x1503FEAF: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x1500100C)); /* 0x1503FEB2: push dword ptr [eax*4 + 0x1500100c] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503FEB9: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1503FEBE: push edi */
    eax = ebp + (-0x28); /* 0x1503FEBF: lea eax, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1503FEC2: push edi */
    PUSH32(esp, eax); /* 0x1503FEC3: push eax */
    RECOMP_CALL(sub_1503FB4F); /* 0x1503FEC4: call 0x1503fb4f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503FEC9: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x10); /* 0x1503FECC: lea ecx, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503FECF: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x1503FED0: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1503FED5: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_15041A30); /* 0x1503FED8: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503FEDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503FEEB; /* 0x1503FEDF: jne 0x1503feeb */
L_1503FEE1:
    /* test MEM8(ebp + (-0xC)), 0x40u */ /* 0x1503FEE1: test byte ptr [ebp - 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1503FEE5: jne 0x1503fbc5 */
L_1503FEEB:
    eax = ebp + (-0x10); /* 0x1503FEEB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503FEEE: push eax */
    ecx = ebp + (-0x8); /* 0x1503FEEF: lea ecx, [ebp - 8] */
L_1503FEF2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503FEF2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503FEF5: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FBCF; /* 0x1503FEFA: jmp 0x1503fbcf */
L_1503FEFF:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1503FEFF: movsx eax, byte ptr [esi] */
    ecx = ebp + (-0x8); /* 0x1503FF02: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x1500100C)); /* 0x1503FF05: push dword ptr [eax*4 + 0x1500100c] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503FF0C: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503FF11: mov eax, dword ptr [0x150bdb3c] */
    ecx = ebp + (-0x10); /* 0x1503FF16: lea ecx, [ebp - 0x10] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1503FF19: movsx eax, byte ptr [eax] */
    PUSH32(esp, MEM32(eax * 4 + 0x150010E0)); /* 0x1503FF1C: push dword ptr [eax*4 + 0x150010e0] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1503FF23: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1503FF28: mov eax, dword ptr [0x150bdb3c] */
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x1503FF2D: movsx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503FF30: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1503FF31: mov dword ptr [0x150bdb3c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x30u; /* 0x1503FF36: sub ecx, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FFFD; /* 0x1503FF39: je 0x1503fffd */
L_1503FF3F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FF3F: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FF59; /* 0x1503FF42: je 0x1503ff59 */
L_1503FF44:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FF44: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FEEB; /* 0x1503FF47: je 0x1503feeb */
L_1503FF49:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FF49: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FEEB; /* 0x1503FF4C: je 0x1503feeb */
L_1503FF4E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1503FF4E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503FEEB; /* 0x1503FF51: je 0x1503feeb */
L_1503FF53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503FF53: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1503FE59; /* 0x1503FF54: jmp 0x1503fe59 */
L_1503FF59:
    eax = ebp + (-0x10); /* 0x1503FF59: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1503FF5C: push eax */
    eax = ebp + (-0x18); /* 0x1503FF5D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1503FF60: push eax */
    ecx = ebp + (-0x8); /* 0x1503FF61: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D09A); /* 0x1503FF64: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1503FF69: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503FF6C: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x1503FF6D: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FF72: pop ecx */
    PUSH32(esp, 0x2Cu); /* 0x1503FF73: push 0x2c */
    ecx = ebp + (-0x20); /* 0x1503FF75: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503FF78: push ecx */
    ecx = eax; /* 0x1503FF79: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FF7B: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503FF80: push eax */
    ecx = ebp + (-0x18); /* 0x1503FF81: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FF84: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1503FF89: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503FF8C: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x1503FF8D: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FF92: pop ecx */
    PUSH32(esp, 0x2Cu); /* 0x1503FF93: push 0x2c */
    ecx = ebp + (-0x20); /* 0x1503FF95: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503FF98: push ecx */
    ecx = eax; /* 0x1503FF99: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FF9B: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503FFA0: push eax */
    ecx = ebp + (-0x18); /* 0x1503FFA1: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FFA4: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1503FFA9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1503FFAC: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x1503FFAD: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FFB2: pop ecx */
    PUSH32(esp, 0x2Cu); /* 0x1503FFB3: push 0x2c */
    ecx = ebp + (-0x20); /* 0x1503FFB5: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503FFB8: push ecx */
    ecx = eax; /* 0x1503FFB9: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FFBB: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503FFC0: push eax */
    ecx = ebp + (-0x18); /* 0x1503FFC1: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FFC4: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x1503FFC9: lea eax, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1503FFCC: push edi */
    PUSH32(esp, eax); /* 0x1503FFCD: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x1503FFCE: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503FFD3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503FFD4: pop ecx */
    PUSH32(esp, 0x29u); /* 0x1503FFD5: push 0x29 */
    ecx = ebp + (-0x20); /* 0x1503FFD7: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1503FFDA: push ecx */
    ecx = eax; /* 0x1503FFDB: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FFDD: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503FFE2: push eax */
    ecx = ebp + (-0x18); /* 0x1503FFE3: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1503FFE6: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x1503FFEB: push 0x27 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503FFED: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x1503FFF0: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x1503FFF3: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FBCF; /* 0x1503FFF8: jmp 0x1503fbcf */
L_1503FFFD:
    eax = ebp + (-0x18); /* 0x1503FFFD: lea eax, [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x15040000: push edi */
    PUSH32(esp, eax); /* 0x15040001: push eax */
    RECOMP_CALL(sub_1503EE04); /* 0x15040002: call 0x1503ee04 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040007: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040008: pop ecx */
    PUSH32(esp, 0x20u); /* 0x15040009: push 0x20 */
    eax = ebp + (-0x28); /* 0x1504000B: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1504000E: push eax */
    ecx = ebp + (-0x18); /* 0x1504000F: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x15040012: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x15040017: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1504001A: push ecx */
    ecx = ebp + (-0x20); /* 0x1504001B: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1504001E: push ecx */
    ecx = eax; /* 0x1504001F: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040021: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x15040026: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15040029: push ecx */
    ecx = eax; /* 0x1504002A: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_1503FEF2; /* 0x1504002C: jmp 0x1503fef2 */
L_15040031:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x15040031: movsx eax, byte ptr [esi] */
    PUSH32(esp, MEM32(eax * 4 + 0x1500100C)); /* 0x15040034: push dword ptr [eax*4 + 0x1500100c] */
L_1504003B:
    ecx = ebp + (-0x8); /* 0x1504003B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CDAE); /* 0x1504003E: call 0x1503cdae */
    RECOMP_FLAGS_IN();
L_15040043:
    ecx = ebp + (-0x8); /* 0x15040043: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_15041A30); /* 0x15040046: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504004B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503FCC7; /* 0x1504004D: jne 0x1503fcc7 */
L_15040053:
    /* test edi, edi */ /* 0x15040053: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040060; /* 0x15040055: je 0x15040060 */
L_15040057:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0x20u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0x20u));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0x20u; /* 0x15040057: or dword ptr [ebp - 4], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503FCC7; /* 0x1504005B: jmp 0x1503fcc7 */
L_15040060:
    PUSH32(esp, 0x15004050u); /* 0x15040060: push 0x15004050 */
    ecx = ebp + (-0x28); /* 0x15040065: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040068: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x1504006D: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x15040070: push ecx */
    ecx = ebp + (-0x18); /* 0x15040071: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x15040074: push ecx */
    ecx = eax; /* 0x15040075: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040077: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x1504007C: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1504007F: push eax */
    ecx = ebp + (-0x8); /* 0x15040080: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x15040083: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FCC7; /* 0x15040088: jmp 0x1503fcc7 */
L_1504008D:
    edx = (int32_t)(int8_t)MEM8(ecx); /* 0x1504008D: movsx edx, byte ptr [ecx] */
    eax = ecx + 0x1; /* 0x15040090: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x41u; /* 0x15040093: sub edx, 0x41 */
    _flag_k = FK_CMP;
    MEM32(0x150BDB3C) = eax; /* 0x15040096: mov dword ptr [0x150bdb3c], eax */
    /* cmp edx, 9 */ /* 0x1504009B: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1503FBC5; /* 0x1504009E: ja 0x1503fbc5 */
L_150400A4:
    eax = (uint32_t)MEM8(edx + 0x15040183); /* 0x150400A4: movzx eax, byte ptr [edx + 0x15040183] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1504017B)); goto _ljump; }
L_150400B2:
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x150400B2: movsx eax, byte ptr [ecx] */
    PUSH32(esp, MEM32(eax * 4 + 0x15001070)); /* 0x150400B5: push dword ptr [eax*4 + 0x15001070] */
    RECOMP_BACKEDGE();
    goto L_1503FDDE; /* 0x150400BC: jmp 0x1503fdde */
L_150400C1:
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x150400C1: movsx eax, byte ptr [ecx] */
    ecx = ebp + (-0x18); /* 0x150400C4: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(eax * 4 + 0x15001070)); /* 0x150400C7: push dword ptr [eax*4 + 0x15001070] */
    RECOMP_CALL(sub_1503C9FE); /* 0x150400CE: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x150400D3: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x150400D8: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x28); /* 0x150400DB: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150400DE: push eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040102; /* 0x150400DF: jne 0x15040102 */
L_150400E1:
    RECOMP_CALL(sub_1503EEC2); /* 0x150400E1: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150400E6: pop ecx */
    PUSH32(esp, eax); /* 0x150400E7: push eax */
    ecx = ebp + (-0x18); /* 0x150400E8: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x150400EB: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x150400F0: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x40u */ /* 0x150400F5: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040111; /* 0x150400F8: jne 0x15040111 */
L_150400FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150400FA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x150400FB: mov dword ptr [0x150bdb3c], eax */
    goto L_15040111; /* 0x15040100: jmp 0x15040111 */
L_15040102:
    RECOMP_CALL(sub_15040B57); /* 0x15040102: call 0x15040b57 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040107: pop ecx */
    PUSH32(esp, eax); /* 0x15040108: push eax */
    ecx = ebp + (-0x18); /* 0x15040109: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504010C: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_15040111:
    PUSH32(esp, 0x150045A0u); /* 0x15040111: push 0x150045a0 */
    ecx = ebp + (-0x18); /* 0x15040116: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D28C); /* 0x15040119: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503FE4E; /* 0x1504011E: jmp 0x1503fe4e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1503FBC5u: goto L_1503FBC5;
      case 0x1503FD1Fu: goto L_1503FD1F;
      case 0x1503FD5Fu: goto L_1503FD5F;
      case 0x1503FE13u: goto L_1503FE13;
      case 0x1503FEACu: goto L_1503FEAC;
      case 0x1503FEFFu: goto L_1503FEFF;
      case 0x15040031u: goto L_15040031;
      case 0x15040043u: goto L_15040043;
      case 0x1504008Du: goto L_1504008D;
      case 0x150400B2u: goto L_150400B2;
      case 0x150400C1u: goto L_150400C1;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_15040193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040193u);

L_15040193:
    edi = edi; /* 0x15040193: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040195: push ebp */
    ebp = esp; /* 0x15040196: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15040198: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1504019B: push esi */
    esi = MEM32(0x150BDB3C); /* 0x1504019C: mov esi, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150401A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0xFFFFF000u; /* 0x150401A4: mov edx, 0xfffff000 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x150401A9: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x150401AC: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x150401AF: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150401B2: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040235; /* 0x150401B4: je 0x15040235 */
L_150401B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x150401B6: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504022A; /* 0x150401B9: je 0x1504022a */
L_150401BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Du; /* 0x150401BB: sub eax, 0x1d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150401FD; /* 0x150401BE: je 0x150401fd */
L_150401C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150401C0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150401D4; /* 0x150401C3: je 0x150401d4 */
L_150401C5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150401C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150401C8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503E3F9); /* 0x150401CB: call 0x1503e3f9 */
    RECOMP_FLAGS_IN();
L_150401D0:
    ecx = POP32_VAL(esp); /* 0x150401D0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150401D1: pop ecx */
    goto L_15040245; /* 0x150401D2: jmp 0x15040245 */
L_150401D4:
    PUSH32(esp, 0x1500472Cu); /* 0x150401D4: push 0x1500472c */
    ecx = ebp + (-0x8); /* 0x150401D9: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CDAE); /* 0x150401DC: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x150401E1: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x150401E4: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150401E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150401F7; /* 0x150401EB: jne 0x150401f7 */
L_150401ED:
    PUSH32(esp, 0x20u); /* 0x150401ED: push 0x20 */
    ecx = ebp + (-0x8); /* 0x150401EF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D215); /* 0x150401F2: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_150401F7:
    esi = MEM32(0x150BDB3C); /* 0x150401F7: mov esi, dword ptr [0x150bdb3c] */
L_150401FD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150401FD: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x15040200: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1503C8A5); /* 0x15040203: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0x10u)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0x10u));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0x10u; /* 0x15040208: or dword ptr [ebp - 0xc], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x1504020C: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x26u); /* 0x1504020F: push 0x26 */
    PUSH32(esp, eax); /* 0x15040211: push eax */
    eax = ebp + (-0x8); /* 0x15040212: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15040215: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15040216: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040217: push dword ptr [ebp + 8] */
    MEM32(0x150BDB3C) = esi; /* 0x1504021A: mov dword ptr [0x150bdb3c], esi */
    RECOMP_CALL(sub_150403C9); /* 0x15040220: call 0x150403c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15040225: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_15040245; /* 0x15040228: jmp 0x15040245 */
L_1504022A:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1504022A: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), 0x24u */ /* 0x1504022D: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504024B; /* 0x1504022F: je 0x1504024b */
L_15040231:
    /* test LO8(eax), LO8(eax) */ /* 0x15040231: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504026A; /* 0x15040233: jne 0x1504026a */
L_15040235:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15040235: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x15040238: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504023A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x1504023D: call 0x1503d070 */
    RECOMP_FLAGS_IN();
L_15040242:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15040242: add esp, 0xc */
    _flag_k = FK_ADD;
L_15040245:
    eax = MEM32(ebp + 0x8); /* 0x15040245: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x15040248: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15040249: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504024A: ret  */
L_1504024B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504024B: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(0x150BDB3C) = esi; /* 0x1504024E: mov dword ptr [0x150bdb3c], esi */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x15040254: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15040257: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040235; /* 0x15040259: je 0x15040235 */
L_1504025B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1504025B: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150402BB; /* 0x1504025E: je 0x150402bb */
L_15040260:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040260: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150402A4; /* 0x15040263: je 0x150402a4 */
L_15040265:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040265: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040276; /* 0x15040268: je 0x15040276 */
L_1504026A:
    ecx = MEM32(ebp + 0x8); /* 0x1504026A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1504026D: push 1 */
    RECOMP_CALL(sub_1503CA39); /* 0x1504026F: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15040245; /* 0x15040274: jmp 0x15040245 */
L_15040276:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x15040276: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x1; /* 0x15040279: lea eax, [esi + 1] */
    PUSH32(esp, ecx); /* 0x1504027C: push ecx */
    MEM32(0x150BDB3C) = eax; /* 0x1504027D: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x10); /* 0x15040282: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15040285: push eax */
    PUSH32(esp, ecx); /* 0x15040286: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15040287: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x1504028A: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504028D: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, eax); /* 0x15040290: push eax */
    RECOMP_CALL(sub_1503E861); /* 0x15040291: call 0x1503e861 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15040296: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040297: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503E3F9); /* 0x1504029A: call 0x1503e3f9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1504029F: add esp, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15040245; /* 0x150402A2: jmp 0x15040245 */
L_150402A4:
    PUSH32(esp, 1); /* 0x150402A4: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150402A6: push dword ptr [ebp + 0xc] */
    eax = esi + 0x1; /* 0x150402A9: lea eax, [esi + 1] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150402AC: push dword ptr [ebp + 8] */
    MEM32(0x150BDB3C) = eax; /* 0x150402AF: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_150402D9); /* 0x150402B4: call 0x150402d9 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15040242; /* 0x150402B9: jmp 0x15040242 */
L_150402BB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150402BB: push dword ptr [ebp + 0xc] */
    eax = esi + 0x1; /* 0x150402BE: lea eax, [esi + 1] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150402C1: push dword ptr [ebp + 8] */
    MEM32(0x150BDB3C) = eax; /* 0x150402C4: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503F5D1); /* 0x150402C9: call 0x1503f5d1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150401D0; /* 0x150402CE: jmp 0x150401d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150402D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150402D9u);

L_150402D9:
    edi = edi; /* 0x150402D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150402DB: push ebp */
    ebp = esp; /* 0x150402DC: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x150402DE: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150402E3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x150402E6: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150402E8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150403AE; /* 0x150402EA: je 0x150403ae */
L_150402F0:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x150402F0: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040334; /* 0x150402F4: je 0x15040334 */
L_150402F6:
    /* cmp LO8(ecx), 0x58u */ /* 0x150402F6: cmp cl, 0x58 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040334; /* 0x150402F9: jne 0x15040334 */
L_150402FB:
    ecx = MEM32(ebp + 0xC); /* 0x150402FB: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150402FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x150402FF: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_15041A30); /* 0x15040304: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040309: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504031F; /* 0x1504030B: je 0x1504031f */
L_1504030D:
    ecx = MEM32(ebp + 0x8); /* 0x1504030D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x150045C4u); /* 0x15040310: push 0x150045c4 */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040315: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    goto L_150403BE; /* 0x1504031A: jmp 0x150403be */
L_1504031F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504031F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x15004724u); /* 0x15040322: push 0x15004724 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040327: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D046); /* 0x1504032A: call 0x1503d046 */
    RECOMP_FLAGS_IN();
    goto L_150403BB; /* 0x1504032F: jmp 0x150403bb */
L_15040334:
    /* cmp LO8(ecx), 0x59u */ /* 0x15040334: cmp cl, 0x59 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x59u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504034E; /* 0x15040337: jne 0x1504034e */
L_15040339:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15040339: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504033C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504033D: push dword ptr [ebp + 8] */
    MEM32(0x150BDB3C) = eax; /* 0x15040340: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503E1B6); /* 0x15040345: call 0x1503e1b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504034A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504034B: pop ecx */
    goto L_150403BE; /* 0x1504034C: jmp 0x150403be */
L_1504034E:
    PUSH32(esp, esi); /* 0x1504034E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1504034F: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x15040352: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x15040355: push esi */
    PUSH32(esp, eax); /* 0x15040356: push eax */
    RECOMP_CALL(sub_1503E3F9); /* 0x15040357: call 0x1503e3f9 */
    RECOMP_FLAGS_IN();
    /* test MEM32(esi + 0x4), 0x400u */ /* 0x1504035C: test dword ptr [esi + 4], 0x400 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15040363: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040364: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504036E; /* 0x15040365: je 0x1504036e */
L_15040367:
    PUSH32(esp, 0x15004858u); /* 0x15040367: push 0x15004858 */
    goto L_1504037C; /* 0x1504036C: jmp 0x1504037c */
L_1504036E:
    /* test MEM32(esi + 0x4), 0x200u */ /* 0x1504036E: test dword ptr [esi + 4], 0x200 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504039F; /* 0x15040375: je 0x1504039f */
L_15040377:
    PUSH32(esp, 0x15004864u); /* 0x15040377: push 0x15004864 */
L_1504037C:
    ecx = ebp + (-0x18); /* 0x1504037C: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1504037F: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8); /* 0x15040384: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x15040387: push ecx */
    ecx = ebp + (-0x10); /* 0x15040388: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1504038B: push ecx */
    ecx = eax; /* 0x1504038C: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504038E: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x15040393: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15040396: push eax */
    ecx = ebp + (-0x8); /* 0x15040397: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CD02); /* 0x1504039A: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1504039F:
    ecx = MEM32(ebp + 0x8); /* 0x1504039F: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x150403A2: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150403A5: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x150403A6: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x150403AB: pop esi */
    goto L_150403BE; /* 0x150403AC: jmp 0x150403be */
L_150403AE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150403AE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x150403B1: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150403B3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D070); /* 0x150403B6: call 0x1503d070 */
    RECOMP_FLAGS_IN();
L_150403BB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150403BB: add esp, 0xc */
    _flag_k = FK_ADD;
L_150403BE:
    eax = MEM32(ebp + 0x8); /* 0x150403BE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150403C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150403C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150403C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150403C9u);

L_150403C9:
    edi = edi; /* 0x150403C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150403CB: push ebp */
    ebp = esp; /* 0x150403CC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150403CE: push ecx */
    PUSH32(esp, ecx); /* 0x150403CF: push ecx */
    eax = MEM32(0x150BDB3C); /* 0x150403D0: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x150403D5: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x150403D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040479; /* 0x150403D9: je 0x15040479 */
L_150403DF:
    /* cmp LO8(eax), 0x36u */ /* 0x150403DF: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_150403E7; /* 0x150403E1: jl 0x150403e7 */
L_150403E3:
    /* cmp LO8(eax), 0x39u */ /* 0x150403E3: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_150403EB; /* 0x150403E5: jle 0x150403eb */
L_150403E7:
    /* cmp LO8(eax), 0x5Fu */ /* 0x150403E7: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504044A; /* 0x150403E9: jne 0x1504044a */
L_150403EB:
    PUSH32(esp, esi); /* 0x150403EB: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150403EC: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x8); /* 0x150403EF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503C947); /* 0x150403F2: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x150403F7: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x150403FA: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x150403FF: mov esi, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15040402: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040422; /* 0x15040404: jne 0x15040422 */
L_15040406:
    ecx = esi; /* 0x15040406: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x15040408: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504040D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040417; /* 0x1504040F: jne 0x15040417 */
L_15040411:
    /* test MEM8(esi + 0x4), 0x10u */ /* 0x15040411: test byte ptr [esi + 4], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040422; /* 0x15040415: jne 0x15040422 */
L_15040417:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15040417: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x1504041A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504041D: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_15040422:
    ecx = esi; /* 0x15040422: mov ecx, esi */
    RECOMP_CALL(sub_15041A30); /* 0x15040424: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040429: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040436; /* 0x1504042B: jne 0x15040436 */
L_1504042D:
    PUSH32(esp, esi); /* 0x1504042D: push esi */
    ecx = ebp + (-0x8); /* 0x1504042E: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x15040431: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_15040436:
    eax = ebp + (-0x8); /* 0x15040436: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15040439: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504043A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503F5D1); /* 0x1504043D: call 0x1503f5d1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040442: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040443: pop ecx */
    esi = POP32_VAL(esp); /* 0x15040444: pop esi */
    goto L_150404DE; /* 0x15040445: jmp 0x150404de */
L_1504044A:
    PUSH32(esp, 0); /* 0x1504044A: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504044C: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x1504044F: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15040452: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15040455: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15040458: push eax */
    RECOMP_CALL(sub_1503E861); /* 0x15040459: call 0x1503e861 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504045E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x14), 0x2Au */ /* 0x15040460: cmp byte ptr [ebp + 0x14], 0x2a */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15040464: sete al */
    PUSH32(esp, eax); /* 0x15040467: push eax */
    eax = ebp + (-0x8); /* 0x15040468: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1504046B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504046C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150402D9); /* 0x1504046F: call 0x150402d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15040474: add esp, 0x20 */
    _flag_k = FK_ADD;
    goto L_150404DE; /* 0x15040477: jmp 0x150404de */
L_15040479:
    PUSH32(esp, 2); /* 0x15040479: push 2 */
    ecx = ebp + (-0x8); /* 0x1504047B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x1504047E: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15040483: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x8); /* 0x15040486: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D215); /* 0x15040489: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1504048E: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x15040491: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040496: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150404A5; /* 0x15040498: jne 0x150404a5 */
L_1504049A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504049A: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x1504049D: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x150404A0: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_150404A5:
    ecx = MEM32(ebp + 0x10); /* 0x150404A5: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15041A30); /* 0x150404A8: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150404AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150404D2; /* 0x150404AF: jne 0x150404d2 */
L_150404B1:
    ecx = MEM32(ebp + 0xC); /* 0x150404B1: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x150404B4: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150404B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150404C7; /* 0x150404BB: jne 0x150404c7 */
L_150404BD:
    PUSH32(esp, 0x20u); /* 0x150404BD: push 0x20 */
    ecx = ebp + (-0x8); /* 0x150404BF: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D215); /* 0x150404C2: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_150404C7:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150404C7: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x150404CA: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D1A6); /* 0x150404CD: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_150404D2:
    ecx = MEM32(ebp + 0x8); /* 0x150404D2: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x150404D5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150404D8: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x150404D9: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
L_150404DE:
    eax = MEM32(ebp + 0x8); /* 0x150404DE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150404E1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150404E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150404E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150404E9u);

L_150404E9:
    edi = edi; /* 0x150404E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150404EB: push ebp */
    ebp = esp; /* 0x150404EC: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x150404EE: mov eax, dword ptr [0x150bdb3c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150404F3: push dword ptr [ebp + 0xc] */
    /* cmp MEM8(eax), 0x40u */ /* 0x150404F6: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504050B; /* 0x150404F9: jne 0x1504050b */
L_150404FB:
    ecx = MEM32(ebp + 0x8); /* 0x150404FB: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150404FE: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x150404FF: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503C977); /* 0x15040504: call 0x1503c977 */
    RECOMP_FLAGS_IN();
    goto L_15040515; /* 0x15040509: jmp 0x15040515 */
L_1504050B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504050B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503EE04); /* 0x1504050E: call 0x1503ee04 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040513: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040514: pop ecx */
L_15040515:
    eax = MEM32(ebp + 0x8); /* 0x15040515: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x15040518: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15040519: ret  */
    RECOMP_REGS_OUT();
}

void sub_15040520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040520u);

L_15040520:
    edi = edi; /* 0x15040520: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040522: push ebp */
    ebp = esp; /* 0x15040523: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x15040525: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504052B: push ebx */
    PUSH32(esp, esi); /* 0x1504052C: push esi */
    PUSH32(esp, edi); /* 0x1504052D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1504052E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x15040531: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0xFFFFF000u; /* 0x15040534: and dword ptr [edi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1504053B: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1504053D:
    eax = MEM32(0x150BDB3C); /* 0x1504053D: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x15040542: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x15040544: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040777; /* 0x15040546: je 0x15040777 */
L_1504054C:
    /* cmp LO8(eax), 0x40u */ /* 0x1504054C: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040777; /* 0x1504054E: je 0x15040777 */
L_15040554:
    /* cmp MEM8(0x150BDB50), 0 */ /* 0x15040554: cmp byte ptr [0x150bdb50], 0 */
    _flag_a = (uint32_t)(MEM8(0x150BDB50)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504056A; /* 0x1504055B: je 0x1504056a */
L_1504055D:
    /* cmp MEM8(0x150BDB51), 0 */ /* 0x1504055D: cmp byte ptr [0x150bdb51], 0 */
    _flag_a = (uint32_t)(MEM8(0x150BDB51)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150407CC; /* 0x15040564: je 0x150407cc */
L_1504056A:
    ecx = edi; /* 0x1504056A: mov ecx, edi */
    RECOMP_CALL(sub_15041A30); /* 0x1504056C: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040571: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150405C0; /* 0x15040573: jne 0x150405c0 */
L_15040575:
    PUSH32(esp, 0x15004558u); /* 0x15040575: push 0x15004558 */
    ecx = ebp + (-0x48); /* 0x1504057A: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_1503C9FE); /* 0x1504057D: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040582: push edi */
    ecx = ebp + (-0x8); /* 0x15040583: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x15040586: push ecx */
    ecx = eax; /* 0x15040587: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040589: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1504058E: lea eax, [ebp - 8] */
    ecx = edi; /* 0x15040591: mov ecx, edi */
    PUSH32(esp, eax); /* 0x15040593: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x15040594: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x15040599: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150405C0; /* 0x1504059B: je 0x150405c0 */
L_1504059D:
    PUSH32(esp, 0x5Bu); /* 0x1504059D: push 0x5b */
    ecx = ebp + (-0x50); /* 0x1504059F: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1503C947); /* 0x150405A2: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x150405A7: push edi */
    ecx = ebp + (-0x10); /* 0x150405A8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x150405AB: push ecx */
    ecx = eax; /* 0x150405AC: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150405AE: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x150405B3: lea eax, [ebp - 0x10] */
    ecx = edi; /* 0x150405B6: mov ecx, edi */
    PUSH32(esp, eax); /* 0x150405B8: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x150405B9: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x150405BE: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_150405C0:
    eax = MEM32(0x150BDB3C); /* 0x150405C0: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x150405C5: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504074C; /* 0x150405C8: jne 0x1504074c */
L_150405CE:
    ecx = eax + 0x1; /* 0x150405CE: lea ecx, [eax + 1] */
    MEM32(0x150BDB3C) = ecx; /* 0x150405D1: mov dword ptr [0x150bdb3c], ecx */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x150405D7: movsx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x150405DA: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504072F; /* 0x150405DD: je 0x1504072f */
L_150405E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150405E3: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150406E3; /* 0x150405E6: je 0x150406e3 */
L_150405EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Au; /* 0x150405EC: sub eax, 0x1a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504064F; /* 0x150405EF: je 0x1504064f */
L_150405F1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150405F1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150405F2: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150406E3; /* 0x150405F5: je 0x150406e3 */
L_150405FB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x150405FB: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040612; /* 0x150405FE: je 0x15040612 */
L_15040600:
    eax = ebp + (-0x58); /* 0x15040600: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15040603: push eax */
    RECOMP_CALL(sub_1503FA18); /* 0x15040604: call 0x1503fa18 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040609: pop ecx */
    ecx = ebp + (-0x60); /* 0x1504060A: lea ecx, [ebp - 0x60] */
    goto L_1504075C; /* 0x1504060D: jmp 0x1504075c */
L_15040612:
    eax = ecx + 0x1; /* 0x15040612: lea eax, [ecx + 1] */
    MEM32(0x150BDB3C) = eax; /* 0x15040615: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x68); /* 0x1504061A: lea eax, [ebp - 0x68] */
    PUSH32(esp, 1); /* 0x1504061D: push 1 */
    PUSH32(esp, eax); /* 0x1504061F: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x15040620: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040625: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040626: pop ecx */
    PUSH32(esp, 0x5Du); /* 0x15040627: push 0x5d */
    ecx = ebp + (-0x70); /* 0x15040629: lea ecx, [ebp - 0x70] */
    PUSH32(esp, ecx); /* 0x1504062C: push ecx */
    ecx = eax; /* 0x1504062D: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x1504062F: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040634: push edi */
    ecx = ebp + (-0x78); /* 0x15040635: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x15040638: push ecx */
    ecx = eax; /* 0x15040639: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504063B: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15040640: push eax */
    ecx = edi; /* 0x15040641: mov ecx, edi */
    RECOMP_CALL(sub_1503CD02); /* 0x15040643: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x15040648: mov bl, 1 */
    goto L_1504076D; /* 0x1504064A: jmp 0x1504076d */
L_1504064F:
    eax = ecx + 0x1; /* 0x1504064F: lea eax, [ecx + 1] */
    /* cmp MEM8(eax), 0x5Fu */ /* 0x15040652: cmp byte ptr [eax], 0x5f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150406A2; /* 0x15040655: jne 0x150406a2 */
L_15040657:
    /* cmp MEM8(ecx + 0x2), 0x3Fu */ /* 0x15040657: cmp byte ptr [ecx + 2], 0x3f */
    _flag_a = (uint32_t)(MEM8(ecx + 0x2)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150406A2; /* 0x1504065B: jne 0x150406a2 */
L_1504065D:
    PUSH32(esp, 0); /* 0x1504065D: push 0 */
    MEM32(0x150BDB3C) = eax; /* 0x1504065F: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x80); /* 0x15040664: lea eax, [ebp - 0x80] */
    PUSH32(esp, 0); /* 0x15040667: push 0 */
    PUSH32(esp, eax); /* 0x15040669: push eax */
    RECOMP_CALL(sub_1503FB4F); /* 0x1504066A: call 0x1503fb4f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504066F: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x88); /* 0x15040672: lea ecx, [ebp - 0x88] */
    PUSH32(esp, edi); /* 0x15040678: push edi */
    PUSH32(esp, ecx); /* 0x15040679: push ecx */
    ecx = eax; /* 0x1504067A: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504067C: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15040681: push eax */
    ecx = edi; /* 0x15040682: mov ecx, edi */
    RECOMP_CALL(sub_1503CD02); /* 0x15040684: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x15040689: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x40u */ /* 0x1504068E: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504076D; /* 0x15040691: jne 0x1504076d */
L_15040697:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x15040697: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
    goto L_1504076D; /* 0x1504069D: jmp 0x1504076d */
L_150406A2:
    eax = ebp + (-0x90); /* 0x150406A2: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x150406A8: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x150406A9: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150406AE: pop ecx */
    PUSH32(esp, 0x60u); /* 0x150406AF: push 0x60 */
    ecx = ebp + (-0x98); /* 0x150406B1: lea ecx, [ebp - 0x98] */
    esi = eax; /* 0x150406B7: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x150406B9: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150406BE: push esi */
    ecx = ebp + (-0x18); /* 0x150406BF: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x150406C2: push ecx */
    ecx = eax; /* 0x150406C3: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150406C5: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x150406CA: push 0x27 */
    eax = ebp + (-0xA0); /* 0x150406CC: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x150406D2: push eax */
    ecx = ebp + (-0x18); /* 0x150406D3: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503D0F8); /* 0x150406D6: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA8); /* 0x150406DB: lea ecx, [ebp - 0xa8] */
    goto L_1504075C; /* 0x150406E1: jmp 0x1504075c */
L_150406E3:
    PUSH32(esp, 0x40u); /* 0x150406E3: push 0x40 */
    PUSH32(esp, 0x150BDB3Cu); /* 0x150406E5: push 0x150bdb3c */
    ecx = ebp + (-0x28); /* 0x150406EA: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1503C7BD); /* 0x150406ED: call 0x1503c7bd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004588u); /* 0x150406F2: push 0x15004588 */
    ecx = ebp + (-0xB0); /* 0x150406F7: lea ecx, [ebp - 0xb0] */
    RECOMP_CALL(sub_1503C9FE); /* 0x150406FD: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040702: push edi */
    ecx = ebp + (-0x20); /* 0x15040703: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15040706: push ecx */
    ecx = eax; /* 0x15040707: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040709: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x1504070E: lea eax, [ebp - 0x20] */
    ecx = edi; /* 0x15040711: mov ecx, edi */
    PUSH32(esp, eax); /* 0x15040713: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x15040714: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x150BDB34); /* 0x15040719: mov ecx, dword ptr [0x150bdb34] */
    /* cmp MEM32(ecx), 9 */ /* 0x1504071F: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504076D; /* 0x15040722: je 0x1504076d */
L_15040724:
    eax = ebp + (-0x28); /* 0x15040724: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15040727: push eax */
    RECOMP_CALL(sub_1503D3CD); /* 0x15040728: call 0x1503d3cd */
    RECOMP_FLAGS_IN();
    goto L_1504076D; /* 0x1504072D: jmp 0x1504076d */
L_1504072F:
    eax = ecx + (-0x1); /* 0x1504072F: lea eax, [ecx - 1] */
    MEM32(0x150BDB3C) = eax; /* 0x15040732: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0xB8); /* 0x15040737: lea eax, [ebp - 0xb8] */
    PUSH32(esp, 1); /* 0x1504073D: push 1 */
    PUSH32(esp, eax); /* 0x1504073F: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x15040740: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040745: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040746: pop ecx */
    ecx = ebp + (-0x30); /* 0x15040747: lea ecx, [ebp - 0x30] */
    goto L_1504075C; /* 0x1504074A: jmp 0x1504075c */
L_1504074C:
    eax = ebp + (-0x38); /* 0x1504074C: lea eax, [ebp - 0x38] */
    PUSH32(esp, 1); /* 0x1504074F: push 1 */
    PUSH32(esp, eax); /* 0x15040751: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x15040752: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040757: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040758: pop ecx */
    ecx = ebp + (-0x40); /* 0x15040759: lea ecx, [ebp - 0x40] */
L_1504075C:
    PUSH32(esp, edi); /* 0x1504075C: push edi */
    PUSH32(esp, ecx); /* 0x1504075D: push ecx */
    ecx = eax; /* 0x1504075E: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040760: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15040765: push eax */
    ecx = edi; /* 0x15040766: mov ecx, edi */
    RECOMP_CALL(sub_1503CD02); /* 0x15040768: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1504076D:
    /* test MEM8(edi + 0x4), 0xFu */ /* 0x1504076D: test byte ptr [edi + 4], 0xf */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504053D; /* 0x15040771: je 0x1504053d */
L_15040777:
    eax = MEM32(0x150BDB3C); /* 0x15040777: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(eax)); /* 0x1504077C: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504077E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504078A; /* 0x15040780: je 0x1504078a */
L_15040782:
    /* cmp LO8(eax), 0x40u */ /* 0x15040782: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150407CC; /* 0x15040784: je 0x150407cc */
L_15040786:
    PUSH32(esp, 1); /* 0x15040786: push 1 */
    goto L_15040797; /* 0x15040788: jmp 0x15040797 */
L_1504078A:
    ecx = edi; /* 0x1504078A: mov ecx, edi */
    RECOMP_CALL(sub_15041A30); /* 0x1504078C: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15040791: push 2 */
    /* test eax, eax */ /* 0x15040793: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150407A0; /* 0x15040795: je 0x150407a0 */
L_15040797:
    ecx = edi; /* 0x15040797: mov ecx, edi */
    RECOMP_CALL(sub_1503CDE3); /* 0x15040799: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
    goto L_150407CC; /* 0x1504079E: jmp 0x150407cc */
L_150407A0:
    ecx = ebp + (-0x40); /* 0x150407A0: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1503CA39); /* 0x150407A3: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004558u); /* 0x150407A8: push 0x15004558 */
    ecx = ebp + (-0x38); /* 0x150407AD: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x150407B0: push ecx */
    ecx = eax; /* 0x150407B1: mov ecx, eax */
    RECOMP_CALL(sub_1503D132); /* 0x150407B3: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x150407B8: push edi */
    ecx = ebp + (-0x30); /* 0x150407B9: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ecx); /* 0x150407BC: push ecx */
    ecx = eax; /* 0x150407BD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150407BF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150407C4: push eax */
    ecx = edi; /* 0x150407C5: mov ecx, edi */
    RECOMP_CALL(sub_1503CD02); /* 0x150407C7: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_150407CC:
    eax = edi; /* 0x150407CC: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150407CE: pop edi */
    esi = POP32_VAL(esp); /* 0x150407CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150407D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150407D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150407D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150407D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150407D9u);

L_150407D9:
    edi = edi; /* 0x150407D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150407DB: push ebp */
    ebp = esp; /* 0x150407DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150407DE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x8); /* 0x150407E1: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x150407E4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150407E5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x150407E8: push edi */
    PUSH32(esp, 1); /* 0x150407E9: push 1 */
    PUSH32(esp, eax); /* 0x150407EB: push eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x150407EC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFFF000u; /* 0x150407EF: and dword ptr [esi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504184B); /* 0x150407F6: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150407FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150407FC: pop ecx */
    PUSH32(esp, eax); /* 0x150407FD: push eax */
    ecx = esi; /* 0x150407FE: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x15040800: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x4), 0xFu */ /* 0x15040805: test byte ptr [esi + 4], 0xf */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0x15004558u; /* 0x15040809: mov edi, 0x15004558 */
    eax = MEM32(0x150BDB3C); /* 0x1504080E: mov eax, dword ptr [0x150bdb3c] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504084F; /* 0x15040813: jne 0x1504084f */
L_15040815:
    SET_LO8(ecx, MEM8(eax)); /* 0x15040815: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15040817: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504084F; /* 0x15040819: je 0x1504084f */
L_1504081B:
    /* cmp LO8(ecx), 0x40u */ /* 0x1504081B: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504084F; /* 0x1504081E: je 0x1504084f */
L_15040820:
    eax = ebp + (-0x8); /* 0x15040820: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15040823: push eax */
    RECOMP_CALL(sub_15040520); /* 0x15040824: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040829: pop ecx */
    PUSH32(esp, edi); /* 0x1504082A: push edi */
    ecx = ebp + (-0x10); /* 0x1504082B: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1504082E: push ecx */
    ecx = eax; /* 0x1504082F: mov ecx, eax */
    RECOMP_CALL(sub_1503D132); /* 0x15040831: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15040836: push esi */
    ecx = ebp + (-0x18); /* 0x15040837: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1504083A: push ecx */
    ecx = eax; /* 0x1504083B: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504083D: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15040842: push eax */
    ecx = esi; /* 0x15040843: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x15040845: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x1504084A: mov eax, dword ptr [0x150bdb3c] */
L_1504084F:
    SET_LO8(ecx, MEM8(eax)); /* 0x1504084F: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x40u */ /* 0x15040851: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504085E; /* 0x15040854: jne 0x1504085e */
L_15040856:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15040856: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x15040857: mov dword ptr [0x150bdb3c], eax */
    goto L_150408A4; /* 0x1504085C: jmp 0x150408a4 */
L_1504085E:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504085E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x15040860: mov ecx, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040868; /* 0x15040862: je 0x15040868 */
L_15040864:
    PUSH32(esp, 1); /* 0x15040864: push 1 */
    goto L_15040875; /* 0x15040866: jmp 0x15040875 */
L_15040868:
    RECOMP_CALL(sub_15041A30); /* 0x15040868: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1504086D: push 2 */
    /* test eax, eax */ /* 0x1504086F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504087C; /* 0x15040871: je 0x1504087c */
L_15040873:
    ecx = esi; /* 0x15040873: mov ecx, esi */
L_15040875:
    RECOMP_CALL(sub_1503CDE3); /* 0x15040875: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
    goto L_150408A4; /* 0x1504087A: jmp 0x150408a4 */
L_1504087C:
    ecx = ebp + (-0x18); /* 0x1504087C: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503CA39); /* 0x1504087F: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040884: push edi */
    ecx = ebp + (-0x10); /* 0x15040885: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15040888: push ecx */
    ecx = eax; /* 0x15040889: mov ecx, eax */
    RECOMP_CALL(sub_1503D132); /* 0x1504088B: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15040890: push esi */
    ecx = ebp + (-0x8); /* 0x15040891: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x15040894: push ecx */
    ecx = eax; /* 0x15040895: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040897: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504089C: push eax */
    ecx = esi; /* 0x1504089D: mov ecx, esi */
    RECOMP_CALL(sub_1503CD02); /* 0x1504089F: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_150408A4:
    edi = POP32_VAL(esp); /* 0x150408A4: pop edi */
    eax = esi; /* 0x150408A5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150408A7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150408A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150408A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150408B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150408B0u);

L_150408B0:
    edi = edi; /* 0x150408B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150408B2: push ebp */
    ebp = esp; /* 0x150408B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150408B5: push ecx */
    PUSH32(esp, ecx); /* 0x150408B6: push ecx */
    eax = MEM32(0x150BDB3C); /* 0x150408B7: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x150408BC: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150408BE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150408CE; /* 0x150408C0: jne 0x150408ce */
L_150408C2:
    ecx = MEM32(ebp + 0x8); /* 0x150408C2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x150408C5: push 2 */
    RECOMP_CALL(sub_1503CA39); /* 0x150408C7: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_150408FE; /* 0x150408CC: jmp 0x150408fe */
L_150408CE:
    PUSH32(esp, 0); /* 0x150408CE: push 0 */
    /* cmp LO8(ecx), 0x3Fu */ /* 0x150408D0: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150408F4; /* 0x150408D3: jne 0x150408f4 */
L_150408D5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150408D5: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x150408D6: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x8); /* 0x150408DB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150408DE: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x150408DF: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150408E4: push eax */
    PUSH32(esp, 0x2Du); /* 0x150408E5: push 0x2d */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150408E7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503D01C); /* 0x150408EA: call 0x1503d01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150408EF: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150408FE; /* 0x150408F2: jmp 0x150408fe */
L_150408F4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150408F4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503F105); /* 0x150408F7: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150408FC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150408FD: pop ecx */
L_150408FE:
    eax = MEM32(ebp + 0x8); /* 0x150408FE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15040901: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15040902: ret  */
    RECOMP_REGS_OUT();
}

void sub_15040909(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040909u);

L_15040909:
    edi = edi; /* 0x15040909: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504090B: push ebp */
    ebp = esp; /* 0x1504090C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1504090E: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15040911: push ebx */
    PUSH32(esp, esi); /* 0x15040912: push esi */
    PUSH32(esp, edi); /* 0x15040913: push edi */
    esi = ecx; /* 0x15040914: mov esi, ecx */
    RECOMP_CALL(sub_15041A30); /* 0x15040916: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504091B: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1504091E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150409BB; /* 0x15040920: jne 0x150409bb */
L_15040926:
    MEM32(ebp + (-0x8)) = edi; /* 0x15040926: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x15040929: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504094E; /* 0x1504092B: jne 0x1504094e */
L_1504092D:
    ecx = esi; /* 0x1504092D: mov ecx, esi */
    RECOMP_CALL(sub_15041A8F); /* 0x1504092F: call 0x15041a8f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040934: push edi */
    ecx = 0x150BDB20u; /* 0x15040935: mov ecx, 0x150bdb20 */
    ebx = eax + 0x1; /* 0x1504093A: lea ebx, [eax + 1] */
    PUSH32(esp, ebx); /* 0x1504093D: push ebx */
    RECOMP_CALL(sub_1503FA5F); /* 0x1504093E: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15040943: mov edi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15040945: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x15040948: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409C2; /* 0x1504094A: je 0x150409c2 */
L_1504094C:
    goto L_15040951; /* 0x1504094C: jmp 0x15040951 */
L_1504094E:
    ebx = MEM32(ebp + 0xC); /* 0x1504094E: mov ebx, dword ptr [ebp + 0xc] */
L_15040951:
    eax = MEM32(esi); /* 0x15040951: mov eax, dword ptr [esi] */
    ecx = edi; /* 0x15040953: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15040955: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x15040958: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409B6; /* 0x1504095A: je 0x150409b6 */
L_1504095C:
    edi = eax; /* 0x1504095C: mov edi, eax */
L_1504095E:
    /* test ebx, ebx */ /* 0x1504095E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150409B3; /* 0x15040960: jle 0x150409b3 */
L_15040962:
    eax = MEM32(edi); /* 0x15040962: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x15040964: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x15040966: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15040968: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1504096E: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15040970: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040972: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409A9; /* 0x15040974: je 0x150409a9 */
L_15040976:
    ecx = ebx; /* 0x15040976: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15040978: sub ecx, eax */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1504097A: mov ecx, ebx */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) { ecx = eax; } /* 0x1504097C: cmovns ecx, eax */
    eax = MEM32(edi); /* 0x1504097F: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x15040981: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15040982: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15040985: mov dword ptr [ebp - 0xc], ecx */
    esi = MEM32(eax + 0x8); /* 0x15040988: mov esi, dword ptr [eax + 8] */
    ecx = esi; /* 0x1504098B: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1504098D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15040993: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15040995: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15040997: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1504099A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409AC; /* 0x1504099C: je 0x150409ac */
L_1504099E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0xC)); /* 0x1504099E: sub ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x150409A1: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x150409A4: mov dword ptr [ebp - 4], ecx */
    goto L_150409AC; /* 0x150409A7: jmp 0x150409ac */
L_150409A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x150409A9: mov ecx, dword ptr [ebp - 4] */
L_150409AC:
    edi = MEM32(edi + 0x4); /* 0x150409AC: mov edi, dword ptr [edi + 4] */
    /* test edi, edi */ /* 0x150409AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504095E; /* 0x150409B1: jne 0x1504095e */
L_150409B3:
    edi = MEM32(ebp + (-0x8)); /* 0x150409B3: mov edi, dword ptr [ebp - 8] */
L_150409B6:
    MEM8(ecx) = (uint8_t)(0); /* 0x150409B6: mov byte ptr [ecx], 0 */
    goto L_150409C2; /* 0x150409B9: jmp 0x150409c2 */
L_150409BB:
    /* test edi, edi */ /* 0x150409BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409C2; /* 0x150409BD: je 0x150409c2 */
L_150409BF:
    MEM8(edi) = (uint8_t)(0); /* 0x150409BF: mov byte ptr [edi], 0 */
L_150409C2:
    eax = edi; /* 0x150409C2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150409C4: pop edi */
    esi = POP32_VAL(esp); /* 0x150409C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x150409C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150409C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x150409C8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_150409E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150409E0u);

L_150409E0:
    edi = edi; /* 0x150409E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150409E2: push ebp */
    ebp = esp; /* 0x150409E3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150409E5: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x150409E8: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = MEM32(ecx + 0xC); } /* 0x150409EB: cmovg eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(ecx + 0x8), 2 */ /* 0x150409EF: cmp dword ptr [ecx + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040A12; /* 0x150409F3: jne 0x15040a12 */
L_150409F5:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x150409F5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040A12; /* 0x150409F9: je 0x15040a12 */
L_150409FB:
    /* test eax, eax */ /* 0x150409FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040A12; /* 0x150409FD: je 0x15040a12 */
L_150409FF:
    PUSH32(esp, eax); /* 0x150409FF: push eax */
    PUSH32(esp, 0x1500488Cu); /* 0x15040A00: push 0x1500488c */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040A05: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15041B3D); /* 0x15040A08: call 0x15041b3d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15040A0D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15040A14; /* 0x15040A10: jmp 0x15040a14 */
L_15040A12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15040A12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15040A14:
    ebp = POP32_VAL(esp); /* 0x15040A14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15040A15: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15040A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040A20u);

L_15040A20:
    edi = edi; /* 0x15040A20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040A22: push ebp */
    ebp = esp; /* 0x15040A23: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15040A25: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x15040A28: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040A39; /* 0x15040A2A: je 0x15040a39 */
L_15040A2C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15040A2C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040A39; /* 0x15040A30: je 0x15040a39 */
L_15040A32:
    SET_LO8(eax, MEM8(ecx + 0x8)); /* 0x15040A32: mov al, byte ptr [ecx + 8] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x15040A35: mov byte ptr [edx], al */
    goto L_15040A3B; /* 0x15040A37: jmp 0x15040a3b */
L_15040A39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15040A39: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15040A3B:
    eax = edx; /* 0x15040A3B: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x15040A3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15040A3E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15040A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040A50u);

    goto L_15040A50;
L_15040909:
    edi = edi; /* 0x15040909: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504090B: push ebp */
    ebp = esp; /* 0x1504090C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1504090E: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15040911: push ebx */
    PUSH32(esp, esi); /* 0x15040912: push esi */
    PUSH32(esp, edi); /* 0x15040913: push edi */
    esi = ecx; /* 0x15040914: mov esi, ecx */
    RECOMP_CALL(sub_15041A30); /* 0x15040916: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1504091B: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1504091E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150409BB; /* 0x15040920: jne 0x150409bb */
L_15040926:
    MEM32(ebp + (-0x8)) = edi; /* 0x15040926: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x15040929: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504094E; /* 0x1504092B: jne 0x1504094e */
L_1504092D:
    ecx = esi; /* 0x1504092D: mov ecx, esi */
    RECOMP_CALL(sub_15041A8F); /* 0x1504092F: call 0x15041a8f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15040934: push edi */
    ecx = 0x150BDB20u; /* 0x15040935: mov ecx, 0x150bdb20 */
    ebx = eax + 0x1; /* 0x1504093A: lea ebx, [eax + 1] */
    PUSH32(esp, ebx); /* 0x1504093D: push ebx */
    RECOMP_CALL(sub_1503FA5F); /* 0x1504093E: call 0x1503fa5f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15040943: mov edi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15040945: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x15040948: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409C2; /* 0x1504094A: je 0x150409c2 */
L_1504094C:
    goto L_15040951; /* 0x1504094C: jmp 0x15040951 */
L_1504094E:
    ebx = MEM32(ebp + 0xC); /* 0x1504094E: mov ebx, dword ptr [ebp + 0xc] */
L_15040951:
    eax = MEM32(esi); /* 0x15040951: mov eax, dword ptr [esi] */
    ecx = edi; /* 0x15040953: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15040955: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x15040958: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409B6; /* 0x1504095A: je 0x150409b6 */
L_1504095C:
    edi = eax; /* 0x1504095C: mov edi, eax */
L_1504095E:
    /* test ebx, ebx */ /* 0x1504095E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150409B3; /* 0x15040960: jle 0x150409b3 */
L_15040962:
    eax = MEM32(edi); /* 0x15040962: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x15040964: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x15040966: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15040968: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1504096E: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15040970: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040972: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409A9; /* 0x15040974: je 0x150409a9 */
L_15040976:
    ecx = ebx; /* 0x15040976: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15040978: sub ecx, eax */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1504097A: mov ecx, ebx */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) { ecx = eax; } /* 0x1504097C: cmovns ecx, eax */
    eax = MEM32(edi); /* 0x1504097F: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x15040981: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15040982: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15040985: mov dword ptr [ebp - 0xc], ecx */
    esi = MEM32(eax + 0x8); /* 0x15040988: mov esi, dword ptr [eax + 8] */
    ecx = esi; /* 0x1504098B: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1504098D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15040993: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15040995: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15040997: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1504099A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409AC; /* 0x1504099C: je 0x150409ac */
L_1504099E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0xC)); /* 0x1504099E: sub ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x150409A1: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x150409A4: mov dword ptr [ebp - 4], ecx */
    goto L_150409AC; /* 0x150409A7: jmp 0x150409ac */
L_150409A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x150409A9: mov ecx, dword ptr [ebp - 4] */
L_150409AC:
    edi = MEM32(edi + 0x4); /* 0x150409AC: mov edi, dword ptr [edi + 4] */
    /* test edi, edi */ /* 0x150409AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504095E; /* 0x150409B1: jne 0x1504095e */
L_150409B3:
    edi = MEM32(ebp + (-0x8)); /* 0x150409B3: mov edi, dword ptr [ebp - 8] */
L_150409B6:
    MEM8(ecx) = (uint8_t)(0); /* 0x150409B6: mov byte ptr [ecx], 0 */
    goto L_150409C2; /* 0x150409B9: jmp 0x150409c2 */
L_150409BB:
    /* test edi, edi */ /* 0x150409BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150409C2; /* 0x150409BD: je 0x150409c2 */
L_150409BF:
    MEM8(edi) = (uint8_t)(0); /* 0x150409BF: mov byte ptr [edi], 0 */
L_150409C2:
    eax = edi; /* 0x150409C2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150409C4: pop edi */
    esi = POP32_VAL(esp); /* 0x150409C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x150409C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150409C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x150409C8: ret 8 */
L_15040A50:
    edi = edi; /* 0x15040A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040A52: push ebp */
    ebp = esp; /* 0x15040A53: mov ebp, esp */
    ecx = MEM32(ecx + 0x8); /* 0x15040A55: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x15040A58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040A6E; /* 0x15040A5A: je 0x15040a6e */
L_15040A5C:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15040A5C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040A6E; /* 0x15040A60: je 0x15040a6e */
L_15040A62:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15040A62: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040A6E; /* 0x15040A66: je 0x15040a6e */
L_15040A68:
    ebp = POP32_VAL(esp); /* 0x15040A68: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15040909; /* 0x15040A69: jmp 0x15040909 */
L_15040A6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15040A6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15040A70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15040A71: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15040A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040A80u);

L_15040A80:
    edi = edi; /* 0x15040A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040A82: push ebp */
    ebp = esp; /* 0x15040A83: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15040A85: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x15040A88: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = MEM32(ecx + 0xC); } /* 0x15040A8B: cmovg eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x15040A8F: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040AB0; /* 0x15040A93: je 0x15040ab0 */
L_15040A95:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15040A95: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040AB0; /* 0x15040A99: je 0x15040ab0 */
L_15040A9B:
    /* test eax, eax */ /* 0x15040A9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040AB0; /* 0x15040A9D: je 0x15040ab0 */
L_15040A9F:
    PUSH32(esp, eax); /* 0x15040A9F: push eax */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x15040AA0: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040AA3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15041B3D); /* 0x15040AA6: call 0x15041b3d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15040AAB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15040AB2; /* 0x15040AAE: jmp 0x15040ab2 */
L_15040AB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15040AB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15040AB2:
    ebp = POP32_VAL(esp); /* 0x15040AB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15040AB3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15040ABC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040ABCu);

L_15040ABC:
    edi = edi; /* 0x15040ABC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040ABE: push ebp */
    ebp = esp; /* 0x15040ABF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15040AC1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x15040AC4: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15040AC7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040ACA: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x15040ACF: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x15040AD4: mov cl, byte ptr [eax] */
    edx = eax + 0x1; /* 0x15040AD6: lea edx, [eax + 1] */
    MEM32(0x150BDB3C) = edx; /* 0x15040AD9: mov dword ptr [0x150bdb3c], edx */
    /* cmp LO8(ecx), 0x40u */ /* 0x15040ADF: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040B42; /* 0x15040AE2: jne 0x15040b42 */
L_15040AE4:
    SET_LO8(eax, MEM8(edx)); /* 0x15040AE4: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15040AE6: inc edx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = edx; /* 0x15040AE7: mov dword ptr [0x150bdb3c], edx */
    /* cmp LO8(eax), 0x5Fu */ /* 0x15040AED: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040B42; /* 0x15040AEF: jne 0x15040b42 */
L_15040AF1:
    eax = edx + 0x1; /* 0x15040AF1: lea eax, [edx + 1] */
    MEM32(0x150BDB3C) = eax; /* 0x15040AF4: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x10); /* 0x15040AF9: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x15040AFC: push 0 */
    PUSH32(esp, eax); /* 0x15040AFE: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x15040AFF: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x15040B04: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x15040B07: push 0 */
    PUSH32(esp, eax); /* 0x15040B09: push eax */
    RECOMP_CALL(sub_1503F105); /* 0x15040B0A: call 0x1503f105 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x15040B0F: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15040B14: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_15040B24; /* 0x15040B17: jmp 0x15040b24 */
L_15040B19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15040B19: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x15040B1A: mov dword ptr [0x150bdb3c], eax */
    /* cmp LO8(ecx), 0x40u */ /* 0x15040B1F: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040B34; /* 0x15040B22: je 0x15040b34 */
L_15040B24:
    SET_LO8(ecx, MEM8(eax)); /* 0x15040B24: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15040B26: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040B19; /* 0x15040B28: jne 0x15040b19 */
L_15040B2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15040B2A: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDB3C) = eax; /* 0x15040B2B: mov dword ptr [0x150bdb3c], eax */
    PUSH32(esp, 2); /* 0x15040B30: push 2 */
    goto L_15040B44; /* 0x15040B32: jmp 0x15040b44 */
L_15040B34:
    ecx = MEM32(ebp + 0x8); /* 0x15040B34: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x15040B37: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15040B3A: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x15040B3B: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_15040B4C; /* 0x15040B40: jmp 0x15040b4c */
L_15040B42:
    PUSH32(esp, 1); /* 0x15040B42: push 1 */
L_15040B44:
    ecx = MEM32(ebp + 0x8); /* 0x15040B44: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503CA39); /* 0x15040B47: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_15040B4C:
    eax = MEM32(ebp + 0x8); /* 0x15040B4C: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15040B4F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15040B50: ret  */
    RECOMP_REGS_OUT();
}

void sub_15040B57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040B57u);

L_15040B57:
    edi = edi; /* 0x15040B57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040B59: push ebp */
    ebp = esp; /* 0x15040B5A: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x15040B5C: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x15040B61: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040B8E; /* 0x15040B64: jne 0x15040b8e */
L_15040B66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15040B66: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0x24u */ /* 0x15040B67: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040B78; /* 0x15040B6A: jne 0x15040b78 */
L_15040B6C:
    PUSH32(esp, 1); /* 0x15040B6C: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040B6E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150410B2); /* 0x15040B71: call 0x150410b2 */
    RECOMP_FLAGS_IN();
    goto L_15040B98; /* 0x15040B76: jmp 0x15040b98 */
L_15040B78:
    PUSH32(esp, 0); /* 0x15040B78: push 0 */
    PUSH32(esp, 0); /* 0x15040B7A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040B7C: push dword ptr [ebp + 8] */
    MEM32(0x150BDB3C) = eax; /* 0x15040B7F: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503FB4F); /* 0x15040B84: call 0x1503fb4f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15040B89: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15040B9A; /* 0x15040B8C: jmp 0x15040b9a */
L_15040B8E:
    PUSH32(esp, 1); /* 0x15040B8E: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15040B90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504184B); /* 0x15040B93: call 0x1504184b */
    RECOMP_FLAGS_IN();
L_15040B98:
    ecx = POP32_VAL(esp); /* 0x15040B98: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040B99: pop ecx */
L_15040B9A:
    eax = MEM32(ebp + 0x8); /* 0x15040B9A: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x15040B9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15040B9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15040BA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040BA5u);

L_15040BA5:
    edi = edi; /* 0x15040BA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040BA7: push ebp */
    ebp = esp; /* 0x15040BA8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x15040BAA: sub esp, 0x70 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15040BAD: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15040BB2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15040BB4: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15040BB7: push esi */
    PUSH32(esp, edi); /* 0x15040BB8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15040BB9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15040BBC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15040BBE: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = esi; /* 0x15040BBF: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x15040BC2: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0xFFFFF000u; /* 0x15040BC5: and dword ptr [edi + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x150BDB51) = (uint8_t)(1); /* 0x15040BCC: mov byte ptr [0x150bdb51], 1 */
    /* test MEM8(edi + 0x4), 0xFu */ /* 0x15040BD3: test byte ptr [edi + 4], 0xf */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040D80; /* 0x15040BD7: jne 0x15040d80 */
L_15040BDD:
    PUSH32(esp, ebx); /* 0x15040BDD: push ebx */
L_15040BDE:
    ebx = MEM32(0x150BDB3C); /* 0x15040BDE: mov ebx, dword ptr [0x150bdb3c] */
    SET_LO8(eax, MEM8(ebx)); /* 0x15040BE4: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15040BE6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040D7F; /* 0x15040BE8: je 0x15040d7f */
L_15040BEE:
    /* cmp LO8(eax), 0x40u */ /* 0x15040BEE: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040D7F; /* 0x15040BF0: je 0x15040d7f */
L_15040BF6:
    /* test esi, esi */ /* 0x15040BF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040C00; /* 0x15040BF8: je 0x15040c00 */
L_15040BFA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x15040BFA: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15040C0F; /* 0x15040BFE: jmp 0x15040c0f */
L_15040C00:
    PUSH32(esp, 0x2Cu); /* 0x15040C00: push 0x2c */
    ecx = edi; /* 0x15040C02: mov ecx, edi */
    RECOMP_CALL(sub_1503D215); /* 0x15040C04: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x150BDB3C); /* 0x15040C09: mov ebx, dword ptr [0x150bdb3c] */
L_15040C0F:
    SET_LO8(ecx, MEM8(ebx)); /* 0x15040C0F: mov cl, byte ptr [ebx] */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x15040C11: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x15040C14: add eax, -0x30 */
    _flag_k = FK_ADD;
    /* cmp eax, 9 */ /* 0x15040C17: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15040C34; /* 0x15040C1A: ja 0x15040c34 */
L_15040C1C:
    ecx = MEM32(0x150BDB38); /* 0x15040C1C: mov ecx, dword ptr [0x150bdb38] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15040C22: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15040C23: push eax */
    MEM32(0x150BDB3C) = ebx; /* 0x15040C24: mov dword ptr [0x150bdb3c], ebx */
    RECOMP_CALL(sub_1503CE7F); /* 0x15040C2A: call 0x1503ce7f */
    RECOMP_FLAGS_IN();
    goto L_15040D6A; /* 0x15040C2F: jmp 0x15040d6a */
L_15040C34:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15040C34: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0xFFFFF000u; /* 0x15040C38: and dword ptr [ebp - 0x18], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0x58u */ /* 0x15040C3F: cmp cl, 0x58 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040C5E; /* 0x15040C42: jne 0x15040c5e */
L_15040C44:
    eax = ebx + 0x1; /* 0x15040C44: lea eax, [ebx + 1] */
    MEM32(0x150BDB3C) = eax; /* 0x15040C47: mov dword ptr [0x150bdb3c], eax */
    PUSH32(esp, 0x150045C4u); /* 0x15040C4C: push 0x150045c4 */
L_15040C51:
    ecx = ebp + (-0x1C); /* 0x15040C51: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CDAE); /* 0x15040C54: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_15040D47; /* 0x15040C59: jmp 0x15040d47 */
L_15040C5E:
    /* cmp LO8(ecx), 0x24u */ /* 0x15040C5E: cmp cl, 0x24 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040C81; /* 0x15040C61: jne 0x15040c81 */
L_15040C63:
    eax = ebx + 0x1; /* 0x15040C63: lea eax, [ebx + 1] */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x15040C66: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040D24; /* 0x15040C68: je 0x15040d24 */
L_15040C6E:
    MEM32(0x150BDB3C) = eax; /* 0x15040C6E: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x48); /* 0x15040C73: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15040C76: push eax */
    RECOMP_CALL(sub_15040D9D); /* 0x15040C77: call 0x15040d9d */
    RECOMP_FLAGS_IN();
    goto L_15040D3D; /* 0x15040C7C: jmp 0x15040d3d */
L_15040C81:
    /* cmp LO8(ecx), 0x3Fu */ /* 0x15040C81: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040D24; /* 0x15040C84: jne 0x15040d24 */
L_15040C8A:
    eax = ebp + (-0x28); /* 0x15040C8A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15040C8D: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15040C8E: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x150BDB4C), 0x4000u */ /* 0x15040C93: test dword ptr [0x150bdb4c], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15040C9D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040D00; /* 0x15040C9E: je 0x15040d00 */
L_15040CA0:
    PUSH32(esp, 0x10u); /* 0x15040CA0: push 0x10 */
    eax = ebp + (-0x14); /* 0x15040CA2: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15040CA5: push eax */
    ecx = ebp + (-0x28); /* 0x15040CA6: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_15040909); /* 0x15040CA9: call 0x15040909 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB54); /* 0x15040CAE: mov esi, dword ptr [0x150bdb54] */
    eax = ebp + (-0x14); /* 0x15040CB4: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15040CB7: push eax */
    RECOMP_CALL(sub_15030500); /* 0x15040CB8: call 0x15030500 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040CBD: pop ecx */
    PUSH32(esp, eax); /* 0x15040CBE: push eax */
    ecx = esi; /* 0x15040CBF: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15040CC1: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15040CC7: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040CC9: pop ecx */
    /* test eax, eax */ /* 0x15040CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040CD1; /* 0x15040CCC: je 0x15040cd1 */
L_15040CCE:
    PUSH32(esp, eax); /* 0x15040CCE: push eax */
    RECOMP_BACKEDGE();
    goto L_15040C51; /* 0x15040CCF: jmp 0x15040c51 */
L_15040CD1:
    PUSH32(esp, 0x150045CCu); /* 0x15040CD1: push 0x150045cc */
    ecx = ebp + (-0x50); /* 0x15040CD6: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040CD9: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x15040CDE: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x15040CE1: push ecx */
    ecx = ebp + (-0x38); /* 0x15040CE2: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x15040CE5: push ecx */
    ecx = eax; /* 0x15040CE6: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040CE8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x15040CED: lea eax, [ebp - 0x58] */
    ecx = ebp + (-0x38); /* 0x15040CF0: lea ecx, [ebp - 0x38] */
L_15040CF3:
    PUSH32(esp, 0x15004584u); /* 0x15040CF3: push 0x15004584 */
    PUSH32(esp, eax); /* 0x15040CF8: push eax */
    RECOMP_CALL(sub_1503D132); /* 0x15040CF9: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    goto L_15040D3E; /* 0x15040CFE: jmp 0x15040d3e */
L_15040D00:
    PUSH32(esp, 0x150045CCu); /* 0x15040D00: push 0x150045cc */
    ecx = ebp + (-0x60); /* 0x15040D05: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040D08: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x15040D0D: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x15040D10: push ecx */
    ecx = ebp + (-0x40); /* 0x15040D11: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x15040D14: push ecx */
    ecx = eax; /* 0x15040D15: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040D17: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x15040D1C: lea eax, [ebp - 0x68] */
    ecx = ebp + (-0x40); /* 0x15040D1F: lea ecx, [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_15040CF3; /* 0x15040D22: jmp 0x15040cf3 */
L_15040D24:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x15040D24: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x30); /* 0x15040D28: lea eax, [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFFFFF000u; /* 0x15040D2B: and dword ptr [ebp - 0x2c], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15040D32: push eax */
    eax = ebp + (-0x70); /* 0x15040D33: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x15040D36: push eax */
    RECOMP_CALL(sub_15040193); /* 0x15040D37: call 0x15040193 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040D3C: pop ecx */
L_15040D3D:
    ecx = POP32_VAL(esp); /* 0x15040D3D: pop ecx */
L_15040D3E:
    PUSH32(esp, eax); /* 0x15040D3E: push eax */
    ecx = ebp + (-0x1C); /* 0x15040D3F: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CD02); /* 0x15040D42: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_15040D47:
    eax = MEM32(0x150BDB3C); /* 0x15040D47: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x15040D4C: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x15040D4E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15040D67; /* 0x15040D51: jle 0x15040d67 */
L_15040D53:
    ecx = MEM32(0x150BDB38); /* 0x15040D53: mov ecx, dword ptr [0x150bdb38] */
    /* cmp MEM32(ecx), 9 */ /* 0x15040D59: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040D67; /* 0x15040D5C: je 0x15040d67 */
L_15040D5E:
    eax = ebp + (-0x1C); /* 0x15040D5E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15040D61: push eax */
    RECOMP_CALL(sub_1503D3CD); /* 0x15040D62: call 0x1503d3cd */
    RECOMP_FLAGS_IN();
L_15040D67:
    eax = ebp + (-0x1C); /* 0x15040D67: lea eax, [ebp - 0x1c] */
L_15040D6A:
    PUSH32(esp, eax); /* 0x15040D6A: push eax */
    ecx = edi; /* 0x15040D6B: mov ecx, edi */
    RECOMP_CALL(sub_1503D1A6); /* 0x15040D6D: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(edi + 0x4), 0xFu */ /* 0x15040D72: test byte ptr [edi + 4], 0xf */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(ebp + (-0x20)); /* 0x15040D76: mov esi, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040BDE; /* 0x15040D79: je 0x15040bde */
L_15040D7F:
    ebx = POP32_VAL(esp); /* 0x15040D7F: pop ebx */
L_15040D80:
    ecx = MEM32(ebp + (-0x4)); /* 0x15040D80: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x15040D83: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15040D85: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15040D86: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x150BDB51) = (uint8_t)(0); /* 0x15040D88: mov byte ptr [0x150bdb51], 0 */
    esi = POP32_VAL(esp); /* 0x15040D8F: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15040D90: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15040D95: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15040D96: ret  */
    RECOMP_REGS_OUT();
}

void sub_15040D9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15040D9Du);

L_15040D9D:
    edi = edi; /* 0x15040D9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15040D9F: push ebp */
    ebp = esp; /* 0x15040DA0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x15040DA2: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15040DA8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15040DAD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15040DAF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x150BDB3C); /* 0x15040DB2: mov eax, dword ptr [0x150bdb3c] */
    PUSH32(esp, ebx); /* 0x15040DB7: push ebx */
    PUSH32(esp, esi); /* 0x15040DB8: push esi */
    PUSH32(esp, edi); /* 0x15040DB9: push edi */
    SET_LO8(ebx, MEM8(eax)); /* 0x15040DBA: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15040DBC: inc eax */
    _flag_k = FK_INC;
    edi = MEM32(ebp + 0x8); /* 0x15040DBD: mov edi, dword ptr [ebp + 8] */
    esi = (int32_t)(int8_t)LO8(ebx); /* 0x15040DC0: movsx esi, bl */
    MEM32(0x150BDB3C) = eax; /* 0x15040DC3: mov dword ptr [0x150bdb3c], eax */
    /* cmp esi, 0x46u */ /* 0x15040DC8: cmp esi, 0x46 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15040F07; /* 0x15040DCB: jg 0x15040f07 */
L_15040DD1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15040FF2; /* 0x15040DD1: je 0x15040ff2 */
L_15040DD7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0; /* 0x15040DD7: sub esi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040EFA; /* 0x15040DDA: je 0x15040efa */
L_15040DE0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x30u; /* 0x15040DE0: sub esi, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040EEF; /* 0x15040DE3: je 0x15040eef */
L_15040DE9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15040DE9: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040EB2; /* 0x15040DEC: je 0x15040eb2 */
L_15040DF2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15040DF2: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040E11; /* 0x15040DF5: je 0x15040e11 */
L_15040DF7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x12u; /* 0x15040DF7: sub esi, 0x12 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040F67; /* 0x15040DFA: je 0x15040f67 */
L_15040E00:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15040E00: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15040E5D; /* 0x15040E03: jne 0x15040e5d */
L_15040E05:
    PUSH32(esp, edi); /* 0x15040E05: push edi */
    RECOMP_CALL(sub_1503EEC2); /* 0x15040E06: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
L_15040E0B:
    ecx = POP32_VAL(esp); /* 0x15040E0B: pop ecx */
    goto L_1504109B; /* 0x15040E0C: jmp 0x1504109b */
L_15040E11:
    eax = ebp + (-0x80); /* 0x15040E11: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x15040E14: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15040E15: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x88); /* 0x15040E1A: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15040E20: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15040E21: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040E26: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15040E27: pop ecx */
    ecx = ebp + (-0x80); /* 0x15040E28: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_15041A70); /* 0x15040E2B: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040E30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040F00; /* 0x15040E32: je 0x15040f00 */
L_15040E38:
    ecx = ebp + (-0x88); /* 0x15040E38: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_15041A70); /* 0x15040E3E: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040E43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040F00; /* 0x15040E45: je 0x15040f00 */
L_15040E4B:
    PUSH32(esp, 0x63u); /* 0x15040E4B: push 0x63 */
    eax = ebp + (-0x77); /* 0x15040E4D: lea eax, [ebp - 0x77] */
    PUSH32(esp, eax); /* 0x15040E50: push eax */
    ecx = ebp + (-0x80); /* 0x15040E51: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_15040909); /* 0x15040E54: call 0x15040909 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15040E59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15040E6B; /* 0x15040E5B: jne 0x15040e6b */
L_15040E5D:
    PUSH32(esp, 1); /* 0x15040E5D: push 1 */
L_15040E5F:
    ecx = edi; /* 0x15040E5F: mov ecx, edi */
    RECOMP_CALL(sub_1503CA39); /* 0x15040E61: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    goto L_1504109B; /* 0x15040E66: jmp 0x1504109b */
L_15040E6B:
    SET_LO8(eax, MEM8(ebp + (-0x77))); /* 0x15040E6B: mov al, byte ptr [ebp - 0x77] */
    MEM8(ebp + (-0x78)) = (uint8_t)(LO8(eax)); /* 0x15040E6E: mov byte ptr [ebp - 0x78], al */
    /* cmp LO8(eax), 0x2Du */ /* 0x15040E71: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040E81; /* 0x15040E73: jne 0x15040e81 */
L_15040E75:
    SET_LO8(eax, MEM8(ebp + (-0x76))); /* 0x15040E75: mov al, byte ptr [ebp - 0x76] */
    MEM8(ebp + (-0x77)) = (uint8_t)(LO8(eax)); /* 0x15040E78: mov byte ptr [ebp - 0x77], al */
    MEM8(ebp + (-0x76)) = (uint8_t)(0x2Eu); /* 0x15040E7B: mov byte ptr [ebp - 0x76], 0x2e */
    goto L_15040E85; /* 0x15040E7F: jmp 0x15040e85 */
L_15040E81:
    MEM8(ebp + (-0x77)) = (uint8_t)(0x2Eu); /* 0x15040E81: mov byte ptr [ebp - 0x77], 0x2e */
L_15040E85:
    eax = ebp + (-0x78); /* 0x15040E85: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x15040E88: push eax */
    ecx = ebp + (-0x80); /* 0x15040E89: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040E8C: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x65u); /* 0x15040E91: push 0x65 */
    ecx = ebp + (-0xC); /* 0x15040E93: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x15040E96: push ecx */
    ecx = eax; /* 0x15040E97: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x15040E99: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x88); /* 0x15040E9E: lea ecx, [ebp - 0x88] */
    PUSH32(esp, ecx); /* 0x15040EA4: push ecx */
    ecx = eax; /* 0x15040EA5: mov ecx, eax */
L_15040EA7:
    PUSH32(esp, edi); /* 0x15040EA7: push edi */
    RECOMP_CALL(sub_1503D09A); /* 0x15040EA8: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    goto L_1504109B; /* 0x15040EAD: jmp 0x1504109b */
L_15040EB2:
    /* cmp MEM8(eax), 0x40u */ /* 0x15040EB2: cmp byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040ECE; /* 0x15040EB5: jne 0x15040ece */
L_15040EB7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15040EB7: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x15040EB8: mov dword ptr [0x150bdb3c], eax */
    PUSH32(esp, 0x150045E0u); /* 0x15040EBD: push 0x150045e0 */
L_15040EC2:
    ecx = edi; /* 0x15040EC2: mov ecx, edi */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040EC4: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    goto L_1504109B; /* 0x15040EC9: jmp 0x1504109b */
L_15040ECE:
    PUSH32(esp, 0x15004074u); /* 0x15040ECE: push 0x15004074 */
    ecx = ebp + (-0xC); /* 0x15040ED3: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15040ED6: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15040EDB: mov esi, eax */
    eax = ebp + (-0x88); /* 0x15040EDD: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15040EE3: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x15040EE4: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040EE9: pop ecx */
    PUSH32(esp, eax); /* 0x15040EEA: push eax */
    ecx = esi; /* 0x15040EEB: mov ecx, esi */
    RECOMP_BACKEDGE();
    goto L_15040EA7; /* 0x15040EED: jmp 0x15040ea7 */
L_15040EEF:
    PUSH32(esp, edi); /* 0x15040EEF: push edi */
    RECOMP_CALL(sub_150408B0); /* 0x15040EF0: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15040E0B; /* 0x15040EF5: jmp 0x15040e0b */
L_15040EFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15040EFA: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDB3C) = eax; /* 0x15040EFB: mov dword ptr [0x150bdb3c], eax */
L_15040F00:
    PUSH32(esp, 2); /* 0x15040F00: push 2 */
    RECOMP_BACKEDGE();
    goto L_15040E5F; /* 0x15040F02: jmp 0x15040e5f */
L_15040F07:
    eax = esi; /* 0x15040F07: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x47u; /* 0x15040F09: sub eax, 0x47 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040FF2; /* 0x15040F0C: je 0x15040ff2 */
L_15040F12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040F12: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040FF2; /* 0x15040F15: je 0x15040ff2 */
L_15040F1B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040F1B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040FF2; /* 0x15040F1E: je 0x15040ff2 */
L_15040F24:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040F24: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040FF2; /* 0x15040F27: je 0x15040ff2 */
L_15040F2D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x15040F2D: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15040F67; /* 0x15040F30: je 0x15040f67 */
L_15040F32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15040F32: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15040E5D; /* 0x15040F35: jne 0x15040e5d */
L_15040F3B:
    PUSH32(esp, eax); /* 0x15040F3B: push eax */
    eax = ebp + (-0x88); /* 0x15040F3C: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15040F42: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x15040F43: call 0x1504184b */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x15040F48: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15040F4B: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15040F4C: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15040F51: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x88); /* 0x15040F54: lea eax, [ebp - 0x88] */
    ecx = edi; /* 0x15040F5A: mov ecx, edi */
    PUSH32(esp, eax); /* 0x15040F5C: push eax */
    RECOMP_CALL(sub_1503C8A5); /* 0x15040F5D: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    goto L_1504109B; /* 0x15040F62: jmp 0x1504109b */
L_15040F67:
    eax = ebp + (-0x80); /* 0x15040F67: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x15040F6A: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15040F6B: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x150BDB4C), 0x4000u */ /* 0x15040F70: test dword ptr [0x150bdb4c], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15040F7A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040FB1; /* 0x15040F7B: je 0x15040fb1 */
L_15040F7D:
    PUSH32(esp, 0x10u); /* 0x15040F7D: push 0x10 */
    eax = ebp + (-0x14); /* 0x15040F7F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15040F82: push eax */
    ecx = ebp + (-0x80); /* 0x15040F83: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_15040909); /* 0x15040F86: call 0x15040909 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB54); /* 0x15040F8B: mov esi, dword ptr [0x150bdb54] */
    eax = ebp + (-0x14); /* 0x15040F91: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15040F94: push eax */
    RECOMP_CALL(sub_15030500); /* 0x15040F95: call 0x15030500 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040F9A: pop ecx */
    PUSH32(esp, eax); /* 0x15040F9B: push eax */
    ecx = esi; /* 0x15040F9C: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15040F9E: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15040FA4: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15040FA6: pop ecx */
    /* test eax, eax */ /* 0x15040FA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15040FB1; /* 0x15040FA9: je 0x15040fb1 */
L_15040FAB:
    PUSH32(esp, eax); /* 0x15040FAB: push eax */
    RECOMP_BACKEDGE();
    goto L_15040EC2; /* 0x15040FAC: jmp 0x15040ec2 */
L_15040FB1:
    ecx = ebp + (-0xC); /* 0x15040FB1: lea ecx, [ebp - 0xc] */
    /* cmp LO8(ebx), 0x44u */ /* 0x15040FB4: cmp bl, 0x44 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15040FEB; /* 0x15040FB7: jne 0x15040feb */
L_15040FB9:
    PUSH32(esp, 0x150045CCu); /* 0x15040FB9: push 0x150045cc */
L_15040FBE:
    RECOMP_CALL(sub_1503C9FE); /* 0x15040FBE: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x80); /* 0x15040FC3: lea ecx, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x15040FC6: push ecx */
    ecx = ebp + (-0x88); /* 0x15040FC7: lea ecx, [ebp - 0x88] */
    PUSH32(esp, ecx); /* 0x15040FCD: push ecx */
    ecx = eax; /* 0x15040FCE: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15040FD0: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004584u); /* 0x15040FD5: push 0x15004584 */
    PUSH32(esp, edi); /* 0x15040FDA: push edi */
    ecx = ebp + (-0x88); /* 0x15040FDB: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_1503D132); /* 0x15040FE1: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    goto L_1504109B; /* 0x15040FE6: jmp 0x1504109b */
L_15040FEB:
    PUSH32(esp, 0x150045A4u); /* 0x15040FEB: push 0x150045a4 */
    RECOMP_BACKEDGE();
    goto L_15040FBE; /* 0x15040FF0: jmp 0x15040fbe */
L_15040FF2:
    PUSH32(esp, 0x7Bu); /* 0x15040FF2: push 0x7b */
    ecx = ebp + (-0x80); /* 0x15040FF4: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503C947); /* 0x15040FF7: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15040FFC: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x48u; /* 0x15040FFE: sub eax, 0x48 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504100D; /* 0x15041001: je 0x1504100d */
L_15041003:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15041003: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504100D; /* 0x15041006: je 0x1504100d */
L_15041008:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15041008: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504102A; /* 0x1504100B: jne 0x1504102a */
L_1504100D:
    eax = ebp + (-0xC); /* 0x1504100D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15041010: push eax */
    RECOMP_CALL(sub_1503EEC2); /* 0x15041011: call 0x1503eec2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041016: pop ecx */
    PUSH32(esp, eax); /* 0x15041017: push eax */
    ecx = ebp + (-0x80); /* 0x15041018: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504101B: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x15041020: push 0x2c */
    ecx = ebp + (-0x80); /* 0x15041022: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D215); /* 0x15041025: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_1504102A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x46u; /* 0x1504102A: sub esi, 0x46 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041060; /* 0x1504102D: je 0x15041060 */
L_1504102F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1504102F: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041043; /* 0x15041032: je 0x15041043 */
L_15041034:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15041034: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504107D; /* 0x15041037: je 0x1504107d */
L_15041039:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15041039: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041060; /* 0x1504103C: je 0x15041060 */
L_1504103E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1504103E: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041090; /* 0x15041041: jne 0x15041090 */
L_15041043:
    eax = ebp + (-0xC); /* 0x15041043: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15041046: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15041047: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504104C: pop ecx */
    PUSH32(esp, eax); /* 0x1504104D: push eax */
    ecx = ebp + (-0x80); /* 0x1504104E: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D1A6); /* 0x15041051: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x15041056: push 0x2c */
    ecx = ebp + (-0x80); /* 0x15041058: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D215); /* 0x1504105B: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_15041060:
    eax = ebp + (-0xC); /* 0x15041060: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15041063: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15041064: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041069: pop ecx */
    PUSH32(esp, eax); /* 0x1504106A: push eax */
    ecx = ebp + (-0x80); /* 0x1504106B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504106E: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x15041073: push 0x2c */
    ecx = ebp + (-0x80); /* 0x15041075: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D215); /* 0x15041078: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_1504107D:
    eax = ebp + (-0xC); /* 0x1504107D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15041080: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15041081: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041086: pop ecx */
    PUSH32(esp, eax); /* 0x15041087: push eax */
    ecx = ebp + (-0x80); /* 0x15041088: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504108B: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
L_15041090:
    PUSH32(esp, 0x7Du); /* 0x15041090: push 0x7d */
    PUSH32(esp, edi); /* 0x15041092: push edi */
    ecx = ebp + (-0x80); /* 0x15041093: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1503D0F8); /* 0x15041096: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
L_1504109B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504109B: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1504109E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150410A0: pop edi */
    esi = POP32_VAL(esp); /* 0x150410A1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150410A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150410A4: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150410A5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150410AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150410AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150410B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150410B2u);

L_150410B2:
    edi = edi; /* 0x150410B2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150410B4: push ebp */
    ebp = esp; /* 0x150410B5: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x150410B7: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE0u; /* 0x150410BC: sub esp, 0xe0 */
    _flag_k = FK_CMP;
    /* cmp MEM8(eax), 0x3Fu */ /* 0x150410C2: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504121F; /* 0x150410C5: jne 0x1504121f */
L_150410CB:
    /* cmp MEM8(eax + 0x1), 0x24u */ /* 0x150410CB: cmp byte ptr [eax + 1], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504121F; /* 0x150410CF: jne 0x1504121f */
L_150410D5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150410D5: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x68); /* 0x150410D8: lea ecx, [ebp - 0x68] */
    MEM32(0x150BDB3C) = eax; /* 0x150410DB: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(0x150BDB34); /* 0x150410E0: mov eax, dword ptr [0x150bdb34] */
    PUSH32(esp, ebx); /* 0x150410E5: push ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x150410E6: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(0x150BDB38); /* 0x150410E9: mov eax, dword ptr [0x150bdb38] */
    PUSH32(esp, edi); /* 0x150410EE: push edi */
    edi = MEM32(0x150BDB1C); /* 0x150410EF: mov edi, dword ptr [0x150bdb1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x150410F5: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1503CBBF); /* 0x150410F8: call 0x1503cbbf */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA4); /* 0x150410FD: lea ecx, [ebp - 0xa4] */
    RECOMP_CALL(sub_1503CBBF); /* 0x15041103: call 0x1503cbbf */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xE0); /* 0x15041108: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_1503CBBF); /* 0x1504110E: call 0x1503cbbf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0xFFFFF000u; /* 0x15041113: and dword ptr [ebp - 8], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x68); /* 0x1504111A: lea eax, [ebp - 0x68] */
    MEM32(0x150BDB1C) = eax; /* 0x1504111D: mov dword ptr [0x150bdb1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15041122: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xA4); /* 0x15041124: lea eax, [ebp - 0xa4] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1504112A: mov dword ptr [ebp - 0xc], ebx */
    MEM32(0x150BDB34) = eax; /* 0x1504112D: mov dword ptr [0x150bdb34], eax */
    eax = ebp + (-0xE0); /* 0x15041132: lea eax, [ebp - 0xe0] */
    MEM32(0x150BDB38) = eax; /* 0x15041138: mov dword ptr [0x150bdb38], eax */
    eax = MEM32(0x150BDB3C); /* 0x1504113D: mov eax, dword ptr [0x150bdb3c] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x15041142: mov byte ptr [ebp - 1], bl */
    /* cmp MEM8(eax), 0x3Fu */ /* 0x15041145: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041170; /* 0x15041148: jne 0x15041170 */
L_1504114A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504114A: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x1504114B: mov dword ptr [0x150bdb3c], eax */
    eax = ebp + (-0x1); /* 0x15041150: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x15041153: push eax */
    eax = ebp + (-0x1C); /* 0x15041154: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x15041157: push 1 */
    PUSH32(esp, eax); /* 0x15041159: push eax */
    RECOMP_CALL(sub_1503FB4F); /* 0x1504115A: call 0x1503fb4f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504115F: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0xC); /* 0x15041162: lea ecx, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15041165: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x15041166: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x1504116B: mov bl, byte ptr [ebp - 1] */
    goto L_15041186; /* 0x1504116E: jmp 0x15041186 */
L_15041170:
    eax = ebp + (-0x1C); /* 0x15041170: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x15041173: push 1 */
    PUSH32(esp, eax); /* 0x15041175: push eax */
    RECOMP_CALL(sub_1504184B); /* 0x15041176: call 0x1504184b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504117B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504117C: pop ecx */
    PUSH32(esp, eax); /* 0x1504117D: push eax */
    ecx = ebp + (-0xC); /* 0x1504117E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503CD02); /* 0x15041181: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_15041186:
    ecx = ebp + (-0xC); /* 0x15041186: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15041A30); /* 0x15041189: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504118E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041199; /* 0x15041190: je 0x15041199 */
L_15041192:
    MEM8(0x150BDB50) = (uint8_t)(1); /* 0x15041192: mov byte ptr [0x150bdb50], 1 */
L_15041199:
    /* test LO8(ebx), LO8(ebx) */ /* 0x15041199: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150411F9; /* 0x1504119B: jne 0x150411f9 */
L_1504119D:
    eax = ebp + (-0x24); /* 0x1504119D: lea eax, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x150411A0: push esi */
    PUSH32(esp, eax); /* 0x150411A1: push eax */
    RECOMP_CALL(sub_15040BA5); /* 0x150411A2: call 0x15040ba5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150411A7: pop ecx */
    PUSH32(esp, 0x3Cu); /* 0x150411A8: push 0x3c */
    ecx = ebp + (-0x2C); /* 0x150411AA: lea ecx, [ebp - 0x2c] */
    esi = eax; /* 0x150411AD: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x150411AF: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150411B4: push esi */
    ecx = ebp + (-0x1C); /* 0x150411B5: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x150411B8: push ecx */
    ecx = eax; /* 0x150411B9: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150411BB: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x150411C0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150411C3: push eax */
    ecx = ebp + (-0xC); /* 0x150411C4: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D1A6); /* 0x150411C7: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x150411CC: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503F94D); /* 0x150411CF: call 0x1503f94d */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x150411D4: pop esi */
    /* cmp LO8(eax), 0x3Eu */ /* 0x150411D5: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150411E3; /* 0x150411D7: jne 0x150411e3 */
L_150411D9:
    PUSH32(esp, 0x20u); /* 0x150411D9: push 0x20 */
    ecx = ebp + (-0xC); /* 0x150411DB: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D215); /* 0x150411DE: call 0x1503d215 */
    RECOMP_FLAGS_IN();
L_150411E3:
    PUSH32(esp, 0x3Eu); /* 0x150411E3: push 0x3e */
    ecx = ebp + (-0xC); /* 0x150411E5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1503D215); /* 0x150411E8: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x150411ED: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150411F9; /* 0x150411F1: je 0x150411f9 */
L_150411F3:
    _flag_a = (uint32_t)(MEM32(0x150BDB3C)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB3C) = MEM32(0x150BDB3C) + 1; /* 0x150411F3: inc dword ptr [0x150bdb3c] */
    _flag_k = FK_INC;
L_150411F9:
    eax = MEM32(ebp + (-0x10)); /* 0x150411F9: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x150411FC: mov ecx, dword ptr [ebp + 8] */
    MEM32(0x150BDB34) = eax; /* 0x150411FF: mov dword ptr [0x150bdb34], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x15041204: mov eax, dword ptr [ebp - 0x14] */
    MEM32(0x150BDB38) = eax; /* 0x15041207: mov dword ptr [0x150bdb38], eax */
    eax = ebp + (-0xC); /* 0x1504120C: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1504120F: push eax */
    MEM32(0x150BDB1C) = edi; /* 0x15041210: mov dword ptr [0x150bdb1c], edi */
    RECOMP_CALL(sub_1503C8A5); /* 0x15041216: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1504121B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1504121C: pop ebx */
    goto L_15041229; /* 0x1504121D: jmp 0x15041229 */
L_1504121F:
    ecx = MEM32(ebp + 0x8); /* 0x1504121F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x15041222: push 1 */
    RECOMP_CALL(sub_1503CA39); /* 0x15041224: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_15041229:
    eax = MEM32(ebp + 0x8); /* 0x15041229: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504122C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504122D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041234u);

L_15041234:
    edi = edi; /* 0x15041234: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041236: push ebp */
    ebp = esp; /* 0x15041237: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15041239: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = 0xFFFFF000u; /* 0x1504123C: mov eax, 0xfffff000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15041241: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x15041243: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x15041246: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x15041249: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x1504124C: push 1 */
    PUSH32(esp, eax); /* 0x1504124E: push eax */
    PUSH32(esp, ecx); /* 0x1504124F: push ecx */
    eax = ebp + (-0x10); /* 0x15041250: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15041253: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, eax); /* 0x15041256: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15041257: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504125A: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_1503E861); /* 0x1504125D: call 0x1503e861 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15041262: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15041265: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041268: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041269: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041270u);

L_15041270:
    edi = edi; /* 0x15041270: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041272: push ebp */
    ebp = esp; /* 0x15041273: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x15041275: mov eax, dword ptr [0x150bdb3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1504127A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(eax)); /* 0x1504127D: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504127F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150412D4; /* 0x15041281: je 0x150412d4 */
L_15041283:
    /* cmp LO8(ecx), 0x5Au */ /* 0x15041283: cmp cl, 0x5a */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504129D; /* 0x15041286: jne 0x1504129d */
L_15041288:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15041288: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x15041289: mov dword ptr [0x150bdb3c], eax */
    eax = MEM32(ebp + 0x8); /* 0x1504128E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15041291: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFF000u; /* 0x15041294: and dword ptr [eax + 4], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504129B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504129C: ret  */
L_1504129D:
    eax = ebp + (-0x10); /* 0x1504129D: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x150412A0: push esi */
    PUSH32(esp, eax); /* 0x150412A1: push eax */
    RECOMP_CALL(sub_1503E0E6); /* 0x150412A2: call 0x1503e0e6 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x18); /* 0x150412A7: lea ecx, [ebp - 0x18] */
    MEM32(esp) = 0x1500475Cu; /* 0x150412AA: mov dword ptr [esp], 0x1500475c */
    esi = eax; /* 0x150412B1: mov esi, eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x150412B3: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150412B8: push esi */
    ecx = ebp + (-0x8); /* 0x150412B9: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x150412BC: push ecx */
    ecx = eax; /* 0x150412BD: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150412BF: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x150412C4: push 0x29 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150412C6: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x150412C9: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x150412CC: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x150412D1: pop esi */
    goto L_150412FA; /* 0x150412D2: jmp 0x150412fa */
L_150412D4:
    PUSH32(esp, 0x1500475Cu); /* 0x150412D4: push 0x1500475c */
    ecx = ebp + (-0x18); /* 0x150412D9: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1503C9FE); /* 0x150412DC: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x150412E1: push 2 */
    ecx = ebp + (-0x10); /* 0x150412E3: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x150412E6: push ecx */
    ecx = eax; /* 0x150412E7: mov ecx, eax */
    RECOMP_CALL(sub_1503D16C); /* 0x150412E9: call 0x1503d16c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x29u); /* 0x150412EE: push 0x29 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150412F0: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x150412F3: mov ecx, eax */
    RECOMP_CALL(sub_1503D0F8); /* 0x150412F5: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
L_150412FA:
    eax = MEM32(ebp + 0x8); /* 0x150412FA: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150412FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150412FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041305(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041305u);

L_15041305:
    edi = edi; /* 0x15041305: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041307: push ebp */
    ebp = esp; /* 0x15041308: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504130A: push ecx */
    ecx = MEM32(0x150BDB3C); /* 0x1504130B: mov ecx, dword ptr [0x150bdb3c] */
    PUSH32(esp, ebx); /* 0x15041311: push ebx */
    PUSH32(esp, esi); /* 0x15041312: push esi */
    PUSH32(esp, edi); /* 0x15041313: push edi */
    PUSH32(esp, 2); /* 0x15041314: push 2 */
    edi = POP32_VAL(esp); /* 0x15041316: pop edi */
L_15041317:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15041317: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0x5Fu */ /* 0x15041319: cmp byte ptr [ecx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504132A; /* 0x1504131C: jne 0x1504132a */
L_1504131E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504131E: inc ecx */
    _flag_k = FK_INC;
    edx = 0x4000u; /* 0x1504131F: mov edx, 0x4000 */
    MEM32(0x150BDB3C) = ecx; /* 0x15041324: mov dword ptr [0x150bdb3c], ecx */
L_1504132A:
    SET_LO8(ebx, MEM8(ecx)); /* 0x1504132A: mov bl, byte ptr [ecx] */
    /* cmp LO8(ebx), 0x41u */ /* 0x1504132C: cmp bl, 0x41 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1504133A; /* 0x1504132F: jl 0x1504133a */
L_15041331:
    /* cmp LO8(ebx), 0x5Au */ /* 0x15041331: cmp bl, 0x5a */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_150413CF; /* 0x15041334: jle 0x150413cf */
L_1504133A:
    /* cmp LO8(ebx), 0x24u */ /* 0x1504133A: cmp bl, 0x24 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504156E; /* 0x1504133D: jne 0x1504156e */
L_15041343:
    esi = ecx + 0x1; /* 0x15041343: lea esi, [ecx + 1] */
    MEM32(0x150BDB3C) = esi; /* 0x15041346: mov dword ptr [0x150bdb3c], esi */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x1504134C: movsx eax, byte ptr [esi] */
    /* cmp eax, 0x35u */ /* 0x1504134F: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150414C2; /* 0x15041352: jg 0x150414c2 */
L_15041358:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15041358: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x35u */ /* 0x1504135A: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x1504135D: je 0x150414f6 */
L_15041363:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ecx; /* 0x15041363: and dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ecx; /* 0x15041366: and dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ecx; /* 0x15041369: and dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ecx; /* 0x1504136C: and dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1504136F: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414B8; /* 0x15041371: je 0x150414b8 */
L_15041377:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x15041377: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504149A; /* 0x1504137A: jne 0x1504149a */
L_15041380:
    eax = esi + 0x1; /* 0x15041380: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0x50u */ /* 0x15041383: cmp byte ptr [eax], 0x50 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x15041386: cmove esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15041389: inc esi */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = esi; /* 0x1504138A: mov dword ptr [0x150bdb3c], esi */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x15041390: movsx eax, byte ptr [esi] */
    /* cmp eax, 0x4Du */ /* 0x15041393: cmp eax, 0x4d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150413C1; /* 0x15041396: jg 0x150413c1 */
L_15041398:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150413B3; /* 0x15041398: je 0x150413b3 */
L_1504139A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x46u; /* 0x1504139A: sub eax, 0x46 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150413B3; /* 0x1504139D: je 0x150413b3 */
L_1504139F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1504139F: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150413B3; /* 0x150413A1: je 0x150413b3 */
L_150413A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150413A3: sub eax, edi */
    _flag_k = FK_CMP;
L_150413A5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1504145F; /* 0x150413A5: je 0x1504145f */
L_150413AB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150413AB: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041562; /* 0x150413AD: jne 0x15041562 */
L_150413B3:
    ecx = esi + 0x1; /* 0x150413B3: lea ecx, [esi + 1] */
    MEM32(0x150BDB3C) = ecx; /* 0x150413B6: mov dword ptr [0x150bdb3c], ecx */
    RECOMP_BACKEDGE();
    goto L_15041317; /* 0x150413BC: jmp 0x15041317 */
L_150413C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Eu; /* 0x150413C1: sub eax, 0x4e */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504145F; /* 0x150413C4: je 0x1504145f */
L_150413CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150413CA: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_150413A5; /* 0x150413CD: jmp 0x150413a5 */
L_150413CF:
    esi = (int32_t)(int8_t)LO8(ebx); /* 0x150413CF: movsx esi, bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x41u; /* 0x150413D2: sub esi, 0x41 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150413D5: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = ecx; /* 0x150413D6: mov dword ptr [0x150bdb3c], ecx */
    eax = esi; /* 0x150413DC: mov eax, esi */
    ecx = edx; /* 0x150413DE: mov ecx, edx */
    _flag_a = (uint32_t)((ecx | 0x8000u)); _flag_b = (uint32_t)((ecx | 0x8000u));
    ecx = ecx | 0x8000u; /* 0x150413E0: or ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x150413E6: mov edx, ecx */
    _flag_a = (uint32_t)((edx | 0x2000u)); _flag_b = (uint32_t)((edx | 0x2000u));
    edx = edx | 0x2000u; /* 0x150413E8: or edx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 1 */ /* 0x150413EE: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x150413F0: cmove edx, ecx */
    /* cmp esi, 0x18u */ /* 0x150413F3: cmp esi, 0x18 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150415EE; /* 0x150413F6: jge 0x150415ee */
L_150413FC:
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x150413FC: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    eax = eax & 0x18u; /* 0x15041402: and eax, 0x18 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041423; /* 0x15041405: je 0x15041423 */
L_15041407:
    /* cmp eax, 8 */ /* 0x15041407: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504141B; /* 0x1504140A: je 0x1504141b */
L_1504140C:
    /* cmp eax, 0x10u */ /* 0x1504140C: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041426; /* 0x1504140F: je 0x15041426 */
L_15041411:
    eax = 0xFFFFu; /* 0x15041411: mov eax, 0xffff */
    goto L_150415F0; /* 0x15041416: jmp 0x150415f0 */
L_1504141B:
    _flag_a = (uint32_t)((edx | 0x80u)); _flag_b = (uint32_t)((edx | 0x80u));
    edx = edx | 0x80u; /* 0x1504141B: or edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041426; /* 0x15041421: jmp 0x15041426 */
L_15041423:
    _flag_a = (uint32_t)((edx | 0x40u)); _flag_b = (uint32_t)((edx | 0x40u));
    edx = edx | 0x40u; /* 0x15041423: or edx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041426:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    esi = esi & 6; /* 0x15041426: and esi, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0; /* 0x15041429: sub esi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150415EE; /* 0x1504142C: je 0x150415ee */
L_15041432:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15041432: sub esi, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041454; /* 0x15041434: je 0x15041454 */
L_15041436:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15041436: sub esi, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041449; /* 0x15041438: je 0x15041449 */
L_1504143A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1504143A: sub esi, edi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041411; /* 0x1504143C: jne 0x15041411 */
L_1504143E:
    _flag_a = (uint32_t)((edx | 0x400u)); _flag_b = (uint32_t)((edx | 0x400u));
    edx = edx | 0x400u; /* 0x1504143E: or edx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150415EE; /* 0x15041444: jmp 0x150415ee */
L_15041449:
    _flag_a = (uint32_t)((edx | 0x100u)); _flag_b = (uint32_t)((edx | 0x100u));
    edx = edx | 0x100u; /* 0x15041449: or edx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150415EE; /* 0x1504144F: jmp 0x150415ee */
L_15041454:
    _flag_a = (uint32_t)((edx | 0x200u)); _flag_b = (uint32_t)((edx | 0x200u));
    edx = edx | 0x200u; /* 0x15041454: or edx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150415EE; /* 0x1504145A: jmp 0x150415ee */
L_1504145F:
    ecx = esi + 0x1; /* 0x1504145F: lea ecx, [esi + 1] */
    esi = ecx; /* 0x15041462: mov esi, ecx */
    MEM32(0x150BDB3C) = esi; /* 0x15041464: mov dword ptr [0x150bdb3c], esi */
    SET_LO8(eax, MEM8(esi)); /* 0x1504146A: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x1504146C: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_15041490; /* 0x1504146E: jl 0x15041490 */
L_15041470:
    /* cmp LO8(eax), 0x39u */ /* 0x15041470: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_15041490; /* 0x15041472: jg 0x15041490 */
L_15041474:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x15041474: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD1u; /* 0x15041477: add eax, -0x2f */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504147A: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(0x150BDB3C) = eax; /* 0x1504147C: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_15041305); /* 0x15041481: call 0x15041305 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0x00010000u)); _flag_b = (uint32_t)((eax | 0x00010000u));
    eax = eax | 0x00010000u; /* 0x15041486: or eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150415F0; /* 0x1504148B: jmp 0x150415f0 */
L_15041490:
    edx = 0xFFFFu; /* 0x15041490: mov edx, 0xffff */
    goto L_15041562; /* 0x15041495: jmp 0x15041562 */
L_1504149A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xCu; /* 0x1504149A: sub eax, 0xc */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x1504149D: je 0x150414f6 */
L_1504149F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1504149F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x150414A2: je 0x150414f6 */
L_150414A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414A4: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x150414A7: je 0x150414f6 */
L_150414A9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414A9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x150414AC: je 0x150414f6 */
L_150414AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414AE: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150414F6; /* 0x150414B1: je 0x150414f6 */
L_150414B3:
    RECOMP_BACKEDGE();
    goto L_15041411; /* 0x150414B3: jmp 0x15041411 */
L_150414B8:
    edx = 0xFFFEu; /* 0x150414B8: mov edx, 0xfffe */
    goto L_15041562; /* 0x150414BD: jmp 0x15041562 */
L_150414C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x150414C2: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504155C; /* 0x150414C5: je 0x1504155c */
L_150414CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414CB: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041554; /* 0x150414CE: je 0x15041554 */
L_150414D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414D4: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504154D; /* 0x150414D7: je 0x1504154d */
L_150414D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414D9: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041545; /* 0x150414DC: je 0x15041545 */
L_150414DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150414DE: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504153D; /* 0x150414E1: je 0x1504153d */
L_150414E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x150414E3: sub eax, 0xd */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041411; /* 0x150414E6: jne 0x15041411 */
L_150414EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150414EC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150414ED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = esi; /* 0x150414EF: mov dword ptr [0x150bdb3c], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150414F5: inc ecx */
    _flag_k = FK_INC;
L_150414F6:
    edi = (int32_t)(int8_t)MEM8(esi); /* 0x150414F6: movsx edi, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x150414F9: add ecx, 5 */
    _flag_k = FK_ADD;
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x150414FC: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x150414FC: shl ecx, 8 */
    eax = edi; /* 0x150414FF: mov eax, edi */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x15041501: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x8800u)); _flag_b = (uint32_t)((ecx | 0x8800u));
    ecx = ecx | 0x8800u; /* 0x15041503: or ecx, 0x8800 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x15041509: mov edx, ecx */
    _flag_a = (uint32_t)((edx | 0x2000u)); _flag_b = (uint32_t)((edx | 0x2000u));
    edx = edx | 0x2000u; /* 0x1504150B: or edx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 1 */ /* 0x15041511: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x15041513: cmove edx, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    edi = edi & 6; /* 0x15041516: and edi, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0; /* 0x15041519: sub edi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041538; /* 0x1504151C: je 0x15041538 */
L_1504151E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504151E: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1504151F: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041530; /* 0x15041522: je 0x15041530 */
L_15041524:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15041524: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15041525: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041411; /* 0x15041528: jne 0x15041411 */
L_1504152E:
    goto L_15041562; /* 0x1504152E: jmp 0x15041562 */
L_15041530:
    _flag_a = (uint32_t)((edx | 0x80u)); _flag_b = (uint32_t)((edx | 0x80u));
    edx = edx | 0x80u; /* 0x15041530: or edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041562; /* 0x15041536: jmp 0x15041562 */
L_15041538:
    _flag_a = (uint32_t)((edx | 0x40u)); _flag_b = (uint32_t)((edx | 0x40u));
    edx = edx | 0x40u; /* 0x15041538: or edx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041562; /* 0x1504153B: jmp 0x15041562 */
L_1504153D:
    _flag_a = (uint32_t)((edx | 0x9200u)); _flag_b = (uint32_t)((edx | 0x9200u));
    edx = edx | 0x9200u; /* 0x1504153D: or edx, 0x9200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041562; /* 0x15041543: jmp 0x15041562 */
L_15041545:
    _flag_a = (uint32_t)((edx | 0x9100u)); _flag_b = (uint32_t)((edx | 0x9100u));
    edx = edx | 0x9100u; /* 0x15041545: or edx, 0x9100 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041562; /* 0x1504154B: jmp 0x15041562 */
L_1504154D:
    edx = 0x7C00u; /* 0x1504154D: mov edx, 0x7c00 */
    goto L_15041562; /* 0x15041552: jmp 0x15041562 */
L_15041554:
    _flag_a = (uint32_t)((edx | 0x9800u)); _flag_b = (uint32_t)((edx | 0x9800u));
    edx = edx | 0x9800u; /* 0x15041554: or edx, 0x9800 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041562; /* 0x1504155A: jmp 0x15041562 */
L_1504155C:
    _flag_a = (uint32_t)((edx | 0x9000u)); _flag_b = (uint32_t)((edx | 0x9000u));
    edx = edx | 0x9000u; /* 0x1504155C: or edx, 0x9000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041562:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15041562: inc esi */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = esi; /* 0x15041563: mov dword ptr [0x150bdb3c], esi */
    goto L_150415EE; /* 0x15041569: jmp 0x150415ee */
L_1504156E:
    eax = ebx + (-0x30); /* 0x1504156E: lea eax, [ebx - 0x30] */
    /* cmp LO8(eax), 8 */ /* 0x15041571: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_150415CE; /* 0x15041573: ja 0x150415ce */
L_15041575:
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x15041575: movsx eax, bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15041578: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x15041579: add eax, -0x30 */
    _flag_k = FK_ADD;
    MEM32(0x150BDB3C) = ecx; /* 0x1504157C: mov dword ptr [0x150bdb3c], ecx */
    /* cmp eax, 8 */ /* 0x15041582: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15041411; /* 0x15041585: ja 0x15041411 */
L_1504158B:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x150415F5)); goto _ljump; }
L_15041592:
    edx = 0x800u; /* 0x15041592: mov edx, 0x800 */
    goto L_150415EE; /* 0x15041597: jmp 0x150415ee */
L_15041599:
    edx = 0x1000u; /* 0x15041599: mov edx, 0x1000 */
    goto L_150415EE; /* 0x1504159E: jmp 0x150415ee */
L_150415A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150415A0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150415EE; /* 0x150415A2: jmp 0x150415ee */
L_150415A4:
    edx = 0x4000u; /* 0x150415A4: mov edx, 0x4000 */
    goto L_150415EE; /* 0x150415A9: jmp 0x150415ee */
L_150415AB:
    edx = 0x6000u; /* 0x150415AB: mov edx, 0x6000 */
    goto L_150415EE; /* 0x150415B0: jmp 0x150415ee */
L_150415B2:
    edx = 0x2000u; /* 0x150415B2: mov edx, 0x2000 */
    goto L_150415EE; /* 0x150415B7: jmp 0x150415ee */
L_150415B9:
    edx = 0x6800u; /* 0x150415B9: mov edx, 0x6800 */
    goto L_150415EE; /* 0x150415BE: jmp 0x150415ee */
L_150415C0:
    edx = 0x7000u; /* 0x150415C0: mov edx, 0x7000 */
    goto L_150415EE; /* 0x150415C5: jmp 0x150415ee */
L_150415C7:
    edx = 0x7800u; /* 0x150415C7: mov edx, 0x7800 */
    goto L_150415EE; /* 0x150415CC: jmp 0x150415ee */
L_150415CE:
    /* cmp LO8(ebx), 0x39u */ /* 0x150415CE: cmp bl, 0x39 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150415E1; /* 0x150415D1: jne 0x150415e1 */
L_150415D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150415D3: inc ecx */
    _flag_k = FK_INC;
    edx = 0xFFFDu; /* 0x150415D4: mov edx, 0xfffd */
    MEM32(0x150BDB3C) = ecx; /* 0x150415D9: mov dword ptr [0x150bdb3c], ecx */
    goto L_150415EE; /* 0x150415DF: jmp 0x150415ee */
L_150415E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150415E1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x150415E3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150415E5: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFEu; /* 0x150415E8: add edx, 0xfffe */
    _flag_k = FK_ADD;
L_150415EE:
    eax = edx; /* 0x150415EE: mov eax, edx */
L_150415F0:
    edi = POP32_VAL(esp); /* 0x150415F0: pop edi */
    esi = POP32_VAL(esp); /* 0x150415F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x150415F2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150415F3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150415F4: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x15041592u: goto L_15041592;
      case 0x15041599u: goto L_15041599;
      case 0x150415A0u: goto L_150415A0;
      case 0x150415A4u: goto L_150415A4;
      case 0x150415ABu: goto L_150415AB;
      case 0x150415B2u: goto L_150415B2;
      case 0x150415B9u: goto L_150415B9;
      case 0x150415C0u: goto L_150415C0;
      case 0x150415C7u: goto L_150415C7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1504161F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504161Fu);

L_1504161F:
    edi = edi; /* 0x1504161F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041621: push ebp */
    ebp = esp; /* 0x15041622: mov ebp, esp */
    eax = MEM32(0x150BDB3C); /* 0x15041624: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x15041629: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504162B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504164D; /* 0x1504162D: je 0x1504164d */
L_1504162F:
    /* cmp LO8(ecx), 0x41u */ /* 0x1504162F: cmp cl, 0x41 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + 0x8); /* 0x15041632: mov ecx, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504163B; /* 0x15041635: je 0x1504163b */
L_15041637:
    PUSH32(esp, 1); /* 0x15041637: push 1 */
    goto L_15041652; /* 0x15041639: jmp 0x15041652 */
L_1504163B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504163B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x15004878u); /* 0x1504163C: push 0x15004878 */
    MEM32(0x150BDB3C) = eax; /* 0x15041641: mov dword ptr [0x150bdb3c], eax */
    RECOMP_CALL(sub_1503C9FE); /* 0x15041646: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    goto L_15041657; /* 0x1504164B: jmp 0x15041657 */
L_1504164D:
    ecx = MEM32(ebp + 0x8); /* 0x1504164D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x15041650: push 2 */
L_15041652:
    RECOMP_CALL(sub_1503CA39); /* 0x15041652: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
L_15041657:
    eax = MEM32(ebp + 0x8); /* 0x15041657: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1504165A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504165B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041662(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041662u);

L_15041662:
    edi = edi; /* 0x15041662: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041664: push ebp */
    ebp = esp; /* 0x15041665: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15041667: push ecx */
    PUSH32(esp, ecx); /* 0x15041668: push ecx */
    PUSH32(esp, esi); /* 0x15041669: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504166A: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1504166D: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x15041670: mov ecx, esi */
    RECOMP_CALL(sub_1503C8A5); /* 0x15041672: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15004880u); /* 0x15041677: push 0x15004880 */
    ecx = esi; /* 0x1504167C: mov ecx, esi */
    RECOMP_CALL(sub_1503D28C); /* 0x1504167E: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x15041683: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15041686: push eax */
    RECOMP_CALL(sub_15040520); /* 0x15041687: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504168C: pop ecx */
    PUSH32(esp, eax); /* 0x1504168D: push eax */
    ecx = esi; /* 0x1504168E: mov ecx, esi */
    RECOMP_CALL(sub_1503D1A6); /* 0x15041690: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7Du); /* 0x15041695: push 0x7d */
    ecx = esi; /* 0x15041697: mov ecx, esi */
    RECOMP_CALL(sub_1503D215); /* 0x15041699: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x150BDB3C); /* 0x1504169E: mov ecx, dword ptr [0x150bdb3c] */
    /* cmp MEM8(ecx), 0x40u */ /* 0x150416A4: cmp byte ptr [ecx], 0x40 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150416B0; /* 0x150416A7: jne 0x150416b0 */
L_150416A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150416A9: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = ecx; /* 0x150416AA: mov dword ptr [0x150bdb3c], ecx */
L_150416B0:
    eax = esi; /* 0x150416B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150416B2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150416B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150416B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150416BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150416BBu);

L_150416BB:
    edi = edi; /* 0x150416BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150416BD: push ebp */
    ebp = esp; /* 0x150416BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x150416C0: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150416C3: push ebx */
    PUSH32(esp, esi); /* 0x150416C4: push esi */
    PUSH32(esp, edi); /* 0x150416C5: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150416C6: push dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x150416C9: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x150416CC: mov ecx, edi */
    RECOMP_CALL(sub_1503C8A5); /* 0x150416CE: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x150416D3: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x150416D5: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150416DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041812; /* 0x150416DC: je 0x15041812 */
L_150416E2:
    eax = MEM32(0x150BDB3C); /* 0x150416E2: mov eax, dword ptr [0x150bdb3c] */
    /* cmp MEM8(eax), 0 */ /* 0x150416E7: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041812; /* 0x150416EA: je 0x15041812 */
L_150416F0:
    eax = ebp + (-0x8); /* 0x150416F0: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150416F3: push eax */
    RECOMP_CALL(sub_1503EDC9); /* 0x150416F4: call 0x1503edc9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150416F9: pop ecx */
    PUSH32(esp, 0x20u); /* 0x150416FA: push 0x20 */
    eax = ebp + (-0x10); /* 0x150416FC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150416FF: push eax */
    ecx = ebp + (-0x8); /* 0x15041700: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x15041703: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15041708: push edi */
    ecx = ebp + (-0x18); /* 0x15041709: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1504170C: push ecx */
    ecx = eax; /* 0x1504170D: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504170F: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15041714: push eax */
    ecx = edi; /* 0x15041715: mov ecx, edi */
    RECOMP_CALL(sub_1503CD02); /* 0x15041717: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1504171C: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x1504171E: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504183E; /* 0x15041725: je 0x1504183e */
L_1504172B:
    esi = MEM32(0x150BDB3C); /* 0x1504172B: mov esi, dword ptr [0x150bdb3c] */
    PUSH32(esp, 0x40u); /* 0x15041731: push 0x40 */
    ebx = POP32_VAL(esp); /* 0x15041733: pop ebx */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15041734: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041809; /* 0x15041736: je 0x15041809 */
L_1504173C:
    PUSH32(esp, 0x15004880u); /* 0x1504173C: push 0x15004880 */
    ecx = edi; /* 0x15041741: mov ecx, edi */
    RECOMP_CALL(sub_1503D28C); /* 0x15041743: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15041748: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x1504174A: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB3C); /* 0x1504174F: mov esi, dword ptr [0x150bdb3c] */
L_15041755:
    /* test eax, eax */ /* 0x15041755: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150417DD; /* 0x15041757: je 0x150417dd */
L_1504175D:
    SET_LO8(eax, MEM8(esi)); /* 0x1504175D: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504175F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150417DD; /* 0x15041761: je 0x150417dd */
L_15041763:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15041763: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150417DD; /* 0x15041765: je 0x150417dd */
L_15041767:
    eax = ebp + (-0x18); /* 0x15041767: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1504176A: push eax */
    RECOMP_CALL(sub_15040520); /* 0x1504176B: call 0x15040520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041770: pop ecx */
    PUSH32(esp, 0x60u); /* 0x15041771: push 0x60 */
    ecx = ebp + (-0x10); /* 0x15041773: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x15041776: mov esi, eax */
    RECOMP_CALL(sub_1503C947); /* 0x15041778: call 0x1503c947 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1504177D: push esi */
    ecx = ebp + (-0x8); /* 0x1504177E: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x15041781: push ecx */
    ecx = eax; /* 0x15041782: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15041784: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x27u); /* 0x15041789: push 0x27 */
    eax = ebp + (-0x20); /* 0x1504178B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504178E: push eax */
    ecx = ebp + (-0x8); /* 0x1504178F: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1503D0F8); /* 0x15041792: call 0x1503d0f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15041797: push eax */
    ecx = edi; /* 0x15041798: mov ecx, edi */
    RECOMP_CALL(sub_1503D1A6); /* 0x1504179A: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB3C); /* 0x1504179F: mov esi, dword ptr [0x150bdb3c] */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x150417A5: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150417B0; /* 0x150417A7: jne 0x150417b0 */
L_150417A9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150417A9: inc esi */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = esi; /* 0x150417AA: mov dword ptr [0x150bdb3c], esi */
L_150417B0:
    ecx = edi; /* 0x150417B0: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x150417B2: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150417B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150417D1; /* 0x150417B9: je 0x150417d1 */
L_150417BB:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x150417BB: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150417D1; /* 0x150417BD: je 0x150417d1 */
L_150417BF:
    PUSH32(esp, 0x15004888u); /* 0x150417BF: push 0x15004888 */
    ecx = edi; /* 0x150417C4: mov ecx, edi */
    RECOMP_CALL(sub_1503D28C); /* 0x150417C6: call 0x1503d28c */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB3C); /* 0x150417CB: mov esi, dword ptr [0x150bdb3c] */
L_150417D1:
    ecx = edi; /* 0x150417D1: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x150417D3: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15041755; /* 0x150417D8: jmp 0x15041755 */
L_150417DD:
    ecx = edi; /* 0x150417DD: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x150417DF: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150417E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041805; /* 0x150417E6: je 0x15041805 */
L_150417E8:
    /* cmp MEM8(esi), 0 */ /* 0x150417E8: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150417F6; /* 0x150417EB: jne 0x150417f6 */
L_150417ED:
    PUSH32(esp, 2); /* 0x150417ED: push 2 */
    ecx = edi; /* 0x150417EF: mov ecx, edi */
    RECOMP_CALL(sub_1503D305); /* 0x150417F1: call 0x1503d305 */
    RECOMP_FLAGS_IN();
L_150417F6:
    PUSH32(esp, 0x7Du); /* 0x150417F6: push 0x7d */
    ecx = edi; /* 0x150417F8: mov ecx, edi */
    RECOMP_CALL(sub_1503D215); /* 0x150417FA: call 0x1503d215 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB3C); /* 0x150417FF: mov esi, dword ptr [0x150bdb3c] */
L_15041805:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15041805: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504183E; /* 0x15041807: jne 0x1504183e */
L_15041809:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15041809: inc esi */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = esi; /* 0x1504180A: mov dword ptr [0x150bdb3c], esi */
    goto L_1504183E; /* 0x15041810: jmp 0x1504183e */
L_15041812:
    ecx = edi; /* 0x15041812: mov ecx, edi */
    RECOMP_CALL(sub_15041A70); /* 0x15041814: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041819: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504183E; /* 0x1504181B: je 0x1504183e */
L_1504181D:
    PUSH32(esp, 2); /* 0x1504181D: push 2 */
    ecx = ebp + (-0x20); /* 0x1504181F: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1503CA39); /* 0x15041822: call 0x1503ca39 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15041827: push edi */
    ecx = ebp + (-0x8); /* 0x15041828: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1504182B: push ecx */
    ecx = eax; /* 0x1504182C: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x1504182E: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x15041833: lea eax, [ebp - 8] */
    ecx = edi; /* 0x15041836: mov ecx, edi */
    PUSH32(esp, eax); /* 0x15041838: push eax */
    RECOMP_CALL(sub_1503CD02); /* 0x15041839: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_1504183E:
    eax = edi; /* 0x1504183E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15041840: pop edi */
    esi = POP32_VAL(esp); /* 0x15041841: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041842: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041843: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041844: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504184B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504184Bu);

L_1504184B:
    edi = edi; /* 0x1504184B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504184D: push ebp */
    ebp = esp; /* 0x1504184E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x15041850: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15041853: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15041858: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504185A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1504185D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504185E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15041861: push esi */
    esi = MEM32(0x150BDB3C); /* 0x15041862: mov esi, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15041868: mov cl, byte ptr [esi] */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x1504186A: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD0u; /* 0x1504186D: add eax, -0x30 */
    _flag_k = FK_ADD;
    /* cmp eax, 9 */ /* 0x15041870: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504188D; /* 0x15041873: ja 0x1504188d */
L_15041875:
    ecx = MEM32(0x150BDB34); /* 0x15041875: mov ecx, dword ptr [0x150bdb34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504187B: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1504187C: push eax */
    MEM32(0x150BDB3C) = esi; /* 0x1504187D: mov dword ptr [0x150bdb3c], esi */
    RECOMP_CALL(sub_1503CE7F); /* 0x15041883: call 0x1503ce7f */
    RECOMP_FLAGS_IN();
    goto L_15041A12; /* 0x15041888: jmp 0x15041a12 */
L_1504188D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1504188D: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xFFFFF000u);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0xFFFFF000u; /* 0x15041891: and dword ptr [ebp - 0x18], 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0x3Fu */ /* 0x15041898: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150418E5; /* 0x1504189B: jne 0x150418e5 */
L_1504189D:
    eax = ebp + (-0x24); /* 0x1504189D: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0); /* 0x150418A0: push 0 */
    PUSH32(esp, eax); /* 0x150418A2: push eax */
    RECOMP_CALL(sub_150410B2); /* 0x150418A3: call 0x150410b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150418A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150418A9: pop ecx */
    PUSH32(esp, eax); /* 0x150418AA: push eax */
    ecx = ebp + (-0x1C); /* 0x150418AB: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CD02); /* 0x150418AE: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB3C); /* 0x150418B3: mov eax, dword ptr [0x150bdb3c] */
    SET_LO8(ecx, MEM8(eax)); /* 0x150418B8: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150418BA: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB3C) = eax; /* 0x150418BB: mov dword ptr [0x150bdb3c], eax */
    /* cmp LO8(ecx), 0x40u */ /* 0x150418C0: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150419F5; /* 0x150418C3: je 0x150419f5 */
L_150418C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150418C9: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150418CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDB3C) = eax; /* 0x150418CC: mov dword ptr [0x150bdb3c], eax */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x150418D1: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150418D3: sete cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150418D6: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x150418D7: push ecx */
    ecx = ebp + (-0x1C); /* 0x150418D8: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CDE3); /* 0x150418DB: call 0x1503cde3 */
    RECOMP_FLAGS_IN();
    goto L_150419F5; /* 0x150418E0: jmp 0x150419f5 */
L_150418E5:
    PUSH32(esp, edi); /* 0x150418E5: push edi */
    PUSH32(esp, 0x13u); /* 0x150418E6: push 0x13 */
    edi = 0x1500455Cu; /* 0x150418E8: mov edi, 0x1500455c */
    PUSH32(esp, edi); /* 0x150418ED: push edi */
    PUSH32(esp, esi); /* 0x150418EE: push esi */
    RECOMP_CALL(sub_15041B04); /* 0x150418EF: call 0x15041b04 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150418F4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150418F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041900; /* 0x150418F9: jne 0x15041900 */
L_150418FB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x13u; /* 0x150418FB: add esi, 0x13 */
    _flag_k = FK_ADD;
    goto L_1504191C; /* 0x150418FE: jmp 0x1504191c */
L_15041900:
    PUSH32(esp, 0xDu); /* 0x15041900: push 0xd */
    edi = 0x15004570u; /* 0x15041902: mov edi, 0x15004570 */
    PUSH32(esp, edi); /* 0x15041907: push edi */
    PUSH32(esp, esi); /* 0x15041908: push esi */
    RECOMP_CALL(sub_15041B04); /* 0x15041909: call 0x15041b04 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504190E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15041911: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150419DC; /* 0x15041913: jne 0x150419dc */
L_15041919:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xDu; /* 0x15041919: add esi, 0xd */
    _flag_k = FK_ADD;
L_1504191C:
    eax = ebp + (-0x2C); /* 0x1504191C: lea eax, [ebp - 0x2c] */
    MEM32(0x150BDB3C) = esi; /* 0x1504191F: mov dword ptr [0x150bdb3c], esi */
    PUSH32(esp, eax); /* 0x15041925: push eax */
    RECOMP_CALL(sub_150408B0); /* 0x15041926: call 0x150408b0 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x150BDB4C), 0x4000u */ /* 0x1504192B: test dword ptr [0x150bdb4c], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x150BDB4C)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15041935: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504199B; /* 0x15041936: je 0x1504199b */
L_15041938:
    PUSH32(esp, 0x10u); /* 0x15041938: push 0x10 */
    eax = ebp + (-0x14); /* 0x1504193A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504193D: push eax */
    ecx = ebp + (-0x2C); /* 0x1504193E: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_15040909); /* 0x15041941: call 0x15040909 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB54); /* 0x15041946: mov esi, dword ptr [0x150bdb54] */
    eax = ebp + (-0x14); /* 0x1504194C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504194F: push eax */
    RECOMP_CALL(sub_15030500); /* 0x15041950: call 0x15030500 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041955: pop ecx */
    PUSH32(esp, eax); /* 0x15041956: push eax */
    ecx = esi; /* 0x15041957: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15041959: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1504195F: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041961: pop ecx */
    ecx = ebp + (-0x1C); /* 0x15041962: lea ecx, [ebp - 0x1c] */
    /* test eax, eax */ /* 0x15041965: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041974; /* 0x15041967: je 0x15041974 */
L_15041969:
    PUSH32(esp, eax); /* 0x15041969: push eax */
    RECOMP_CALL(sub_1503CDAE); /* 0x1504196A: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    goto L_150419F4; /* 0x1504196F: jmp 0x150419f4 */
L_15041974:
    PUSH32(esp, 0x15004580u); /* 0x15041974: push 0x15004580 */
    RECOMP_CALL(sub_1503CDAE); /* 0x15041979: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1504197E: push edi */
    ecx = ebp + (-0x3C); /* 0x1504197F: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1503C9FE); /* 0x15041982: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x15041987: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1504198A: push ecx */
    ecx = ebp + (-0x24); /* 0x1504198B: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1504198E: push ecx */
    ecx = eax; /* 0x1504198F: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x15041991: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x15041996: lea eax, [ebp - 0x34] */
    goto L_150419C3; /* 0x15041999: jmp 0x150419c3 */
L_1504199B:
    PUSH32(esp, 0x15004580u); /* 0x1504199B: push 0x15004580 */
    ecx = ebp + (-0x1C); /* 0x150419A0: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CDAE); /* 0x150419A3: call 0x1503cdae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x150419A8: push edi */
    ecx = ebp + (-0x34); /* 0x150419A9: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1503C9FE); /* 0x150419AC: call 0x1503c9fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x150419B1: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x150419B4: push ecx */
    ecx = ebp + (-0x24); /* 0x150419B5: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x150419B8: push ecx */
    ecx = eax; /* 0x150419B9: mov ecx, eax */
    RECOMP_CALL(sub_1503D09A); /* 0x150419BB: call 0x1503d09a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x150419C0: lea eax, [ebp - 0x3c] */
L_150419C3:
    PUSH32(esp, 0x15004584u); /* 0x150419C3: push 0x15004584 */
    PUSH32(esp, eax); /* 0x150419C8: push eax */
    ecx = ebp + (-0x24); /* 0x150419C9: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1503D132); /* 0x150419CC: call 0x1503d132 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150419D1: push eax */
    ecx = ebp + (-0x1C); /* 0x150419D2: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503D1A6); /* 0x150419D5: call 0x1503d1a6 */
    RECOMP_FLAGS_IN();
    goto L_150419F4; /* 0x150419DA: jmp 0x150419f4 */
L_150419DC:
    PUSH32(esp, 0x40u); /* 0x150419DC: push 0x40 */
    PUSH32(esp, 0x150BDB3Cu); /* 0x150419DE: push 0x150bdb3c */
    ecx = ebp + (-0x34); /* 0x150419E3: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1503C7BD); /* 0x150419E6: call 0x1503c7bd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150419EB: push eax */
    ecx = ebp + (-0x1C); /* 0x150419EC: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1503CD02); /* 0x150419EF: call 0x1503cd02 */
    RECOMP_FLAGS_IN();
L_150419F4:
    edi = POP32_VAL(esp); /* 0x150419F4: pop edi */
L_150419F5:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x150419F5: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041A0F; /* 0x150419F9: je 0x15041a0f */
L_150419FB:
    ecx = MEM32(0x150BDB34); /* 0x150419FB: mov ecx, dword ptr [0x150bdb34] */
    /* cmp MEM32(ecx), 9 */ /* 0x15041A01: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041A0F; /* 0x15041A04: je 0x15041a0f */
L_15041A06:
    eax = ebp + (-0x1C); /* 0x15041A06: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15041A09: push eax */
    RECOMP_CALL(sub_1503D3CD); /* 0x15041A0A: call 0x1503d3cd */
    RECOMP_FLAGS_IN();
L_15041A0F:
    eax = ebp + (-0x1C); /* 0x15041A0F: lea eax, [ebp - 0x1c] */
L_15041A12:
    PUSH32(esp, eax); /* 0x15041A12: push eax */
    ecx = ebx; /* 0x15041A13: mov ecx, ebx */
    RECOMP_CALL(sub_1503C8A5); /* 0x15041A15: call 0x1503c8a5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15041A1A: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x15041A1D: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x15041A1F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15041A20: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15041A22: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15041A23: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041A28: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A29: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041A30u);

L_15041A30:
    edi = edi; /* 0x15041A30: mov edi, edi */
    PUSH32(esp, esi); /* 0x15041A32: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15041A33: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), esi */ /* 0x15041A35: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041A42; /* 0x15041A37: je 0x15041a42 */
L_15041A39:
    RECOMP_CALL(sub_15041A70); /* 0x15041A39: call 0x15041a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041A3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041A45; /* 0x15041A40: jne 0x15041a45 */
L_15041A42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15041A42: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15041A44: inc esi */
    _flag_k = FK_INC;
L_15041A45:
    eax = esi; /* 0x15041A45: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15041A47: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A48: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041A4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041A4Fu);

L_15041A4F:
    edi = edi; /* 0x15041A4F: mov edi, edi */
    PUSH32(esp, esi); /* 0x15041A51: push esi */
    esi = ecx; /* 0x15041A52: mov esi, ecx */
    RECOMP_CALL(sub_15041A30); /* 0x15041A54: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041A59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041A66; /* 0x15041A5B: jne 0x15041a66 */
L_15041A5D:
    /* test MEM8(esi + 0x4), 0x20u */ /* 0x15041A5D: test byte ptr [esi + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041A66; /* 0x15041A61: je 0x15041a66 */
L_15041A63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15041A63: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x15041A64: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A65: ret  */
L_15041A66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041A66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15041A68: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A69: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041A70u);

L_15041A70:
    eax = MEM32(ecx + 0x4); /* 0x15041A70: mov eax, dword ptr [ecx + 4] */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x15041A73: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x15041A73: shl eax, 0x1c */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x15041A76: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* test eax, eax */ /* 0x15041A79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041A85; /* 0x15041A7B: je 0x15041a85 */
L_15041A7D:
    /* cmp eax, 2 */ /* 0x15041A7D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15041A85; /* 0x15041A80: je 0x15041a85 */
L_15041A82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041A82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A84: ret  */
L_15041A85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041A85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15041A87: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041A88: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041A8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041A8Fu);

L_15041A8F:
    edi = edi; /* 0x15041A8F: mov edi, edi */
    PUSH32(esp, ebx); /* 0x15041A91: push ebx */
    PUSH32(esp, edi); /* 0x15041A92: push edi */
    edi = ecx; /* 0x15041A93: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15041A95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15041A30); /* 0x15041A97: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041A9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041AC1; /* 0x15041A9E: jne 0x15041ac1 */
L_15041AA0:
    edi = MEM32(edi); /* 0x15041AA0: mov edi, dword ptr [edi] */
    /* test edi, edi */ /* 0x15041AA2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041AC1; /* 0x15041AA4: je 0x15041ac1 */
L_15041AA6:
    PUSH32(esp, esi); /* 0x15041AA6: push esi */
L_15041AA7:
    eax = MEM32(edi); /* 0x15041AA7: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x15041AA9: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x15041AAB: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15041AAD: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15041AB3: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15041AB5: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0x4); /* 0x15041AB7: mov edi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15041ABA: add ebx, eax */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x15041ABC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041AA7; /* 0x15041ABE: jne 0x15041aa7 */
L_15041AC0:
    esi = POP32_VAL(esp); /* 0x15041AC0: pop esi */
L_15041AC1:
    edi = POP32_VAL(esp); /* 0x15041AC1: pop edi */
    eax = ebx; /* 0x15041AC2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15041AC4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041AC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041AE0u);

L_15041AE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041AE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15041AE2: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041AE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041AF0u);

    goto L_15041AF0;
L_15041A8F:
    edi = edi; /* 0x15041A8F: mov edi, edi */
    PUSH32(esp, ebx); /* 0x15041A91: push ebx */
    PUSH32(esp, edi); /* 0x15041A92: push edi */
    edi = ecx; /* 0x15041A93: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15041A95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15041A30); /* 0x15041A97: call 0x15041a30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15041A9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041AC1; /* 0x15041A9E: jne 0x15041ac1 */
L_15041AA0:
    edi = MEM32(edi); /* 0x15041AA0: mov edi, dword ptr [edi] */
    /* test edi, edi */ /* 0x15041AA2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041AC1; /* 0x15041AA4: je 0x15041ac1 */
L_15041AA6:
    PUSH32(esp, esi); /* 0x15041AA6: push esi */
L_15041AA7:
    eax = MEM32(edi); /* 0x15041AA7: mov eax, dword ptr [edi] */
    esi = MEM32(eax); /* 0x15041AA9: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x15041AAB: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15041AAD: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15041AB3: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15041AB5: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0x4); /* 0x15041AB7: mov edi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15041ABA: add ebx, eax */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x15041ABC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041AA7; /* 0x15041ABE: jne 0x15041aa7 */
L_15041AC0:
    esi = POP32_VAL(esp); /* 0x15041AC0: pop esi */
L_15041AC1:
    edi = POP32_VAL(esp); /* 0x15041AC1: pop edi */
    eax = ebx; /* 0x15041AC2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15041AC4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041AC5: ret  */
L_15041AF0:
    ecx = MEM32(ecx + 0x8); /* 0x15041AF0: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x15041AF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041A8F; /* 0x15041AF5: jne 0x15041a8f */
L_15041AFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041AFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041AFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041B04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041B04u);

L_15041B04:
    edi = edi; /* 0x15041B04: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041B06: push ebp */
    ebp = esp; /* 0x15041B07: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x15041B09: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15041B0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041B12; /* 0x15041B0E: jne 0x15041b12 */
L_15041B10:
    ebp = POP32_VAL(esp); /* 0x15041B10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041B11: ret  */
L_15041B12:
    ecx = MEM32(ebp + 0xC); /* 0x15041B12: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x15041B15: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15041B18: push ebx */
L_15041B19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15041B19: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15041B2C; /* 0x15041B1C: je 0x15041b2c */
L_15041B1E:
    SET_LO8(ebx, MEM8(edx)); /* 0x15041B1E: mov bl, byte ptr [edx] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x15041B20: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041B2C; /* 0x15041B22: je 0x15041b2c */
L_15041B24:
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x15041B24: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041B2C; /* 0x15041B26: jne 0x15041b2c */
L_15041B28:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15041B28: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15041B29: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15041B19; /* 0x15041B2A: jmp 0x15041b19 */
L_15041B2C:
    eax = (uint32_t)MEM8(edx); /* 0x15041B2C: movzx eax, byte ptr [edx] */
    ecx = (uint32_t)MEM8(ecx); /* 0x15041B2F: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15041B32: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x15041B34: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15041B35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041B36: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041B3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041B3Du);

L_15041B3D:
    edi = edi; /* 0x15041B3D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041B3F: push ebp */
    ebp = esp; /* 0x15041B40: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x15041B42: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x15041B45: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041B62; /* 0x15041B47: je 0x15041b62 */
L_15041B49:
    ecx = MEM32(ebp + 0xC); /* 0x15041B49: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15041B4C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15041B4D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15041B50: sub esi, ecx */
    _flag_k = FK_CMP;
L_15041B52:
    SET_LO8(eax, MEM8(ecx)); /* 0x15041B52: mov al, byte ptr [ecx] */
    MEM8(esi + ecx) = (uint8_t)(LO8(eax)); /* 0x15041B54: mov byte ptr [esi + ecx], al */
    /* test LO8(eax), LO8(eax) */ /* 0x15041B57: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041B61; /* 0x15041B59: je 0x15041b61 */
L_15041B5B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15041B5B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15041B5C: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15041B52; /* 0x15041B5F: jne 0x15041b52 */
L_15041B61:
    esi = POP32_VAL(esp); /* 0x15041B61: pop esi */
L_15041B62:
    eax = MEM32(ebp + 0x8); /* 0x15041B62: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x15041B65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041B66: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041B70u);

L_15041B70:
    PUSH32(esp, 0x84u); /* 0x15041B70: push 0x84 */
    PUSH32(esp, 0x150AFF38u); /* 0x15041B75: push 0x150aff38 */
    RECOMP_CALL(sub_1505E988); /* 0x15041B7A: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x15041B7F: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x15041B82: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041C16; /* 0x15041B84: je 0x15041c16 */
L_15041B8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15041B8A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15041B8C: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 5); /* 0x15041B8F: push 5 */
    RECOMP_CALL(sub_15068E1A); /* 0x15041B91: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041B96: pop ecx */
    /* test eax, eax */ /* 0x15041B97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041C16; /* 0x15041B99: je 0x15041c16 */
L_15041B9B:
    PUSH32(esp, 5); /* 0x15041B9B: push 5 */
    RECOMP_CALL(sub_15068D80); /* 0x15041B9D: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041BA2: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x15041BA3: mov dword ptr [ebp - 4], edi */
    MEM32(0x150BDB20) = esi; /* 0x15041BA6: mov dword ptr [0x150bdb20], esi */
    eax = MEM32(ebp + 0x18); /* 0x15041BAC: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x150BDB24) = eax; /* 0x15041BAF: mov dword ptr [0x150bdb24], eax */
    MEM32(0x150BDB30) = edi; /* 0x15041BB4: mov dword ptr [0x150bdb30], edi */
    MEM32(0x150BDB28) = edi; /* 0x15041BBA: mov dword ptr [0x150bdb28], edi */
    MEM32(0x150BDB2C) = edi; /* 0x15041BC0: mov dword ptr [0x150bdb2c], edi */
    eax = (uint32_t)MEM16(ebp + 0x1C); /* 0x15041BC6: movzx eax, word ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x15041BCA: push eax */
    PUSH32(esp, edi); /* 0x15041BCB: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15041BCC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15041BCF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15041BD2: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x94); /* 0x15041BD5: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_1503CBE5); /* 0x15041BDB: call 0x1503cbe5 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x15041BE0: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_1503CEAD); /* 0x15041BE6: call 0x1503cead */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15041BEB: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15041BED: mov dword ptr [ebp - 0x1c], esi */
    ecx = 0x150BDB20u; /* 0x15041BF0: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503D458); /* 0x15041BF5: call 0x1503d458 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15041BFA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15041C0D); /* 0x15041C01: call 0x15041c0d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15041C06: mov eax, esi */
    goto L_15041C18; /* 0x15041C08: jmp 0x15041c18 */
L_15041C16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041C16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041C18:
    ecx = MEM32(ebp + (-0x10)); /* 0x15041C18: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15041C1B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15041C22: pop ecx */
    edi = POP32_VAL(esp); /* 0x15041C23: pop edi */
    esi = POP32_VAL(esp); /* 0x15041C24: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041C25: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041C26: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041C27: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041C0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041C0Du);

L_15041C0D:
    PUSH32(esp, 5); /* 0x15041C0D: push 5 */
    RECOMP_CALL(sub_15068F50); /* 0x15041C0F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041C14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041C15: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041C30u);

L_15041C30:
    PUSH32(esp, 0x84u); /* 0x15041C30: push 0x84 */
    PUSH32(esp, 0x150AFF58u); /* 0x15041C35: push 0x150aff58 */
    RECOMP_CALL(sub_1505E988); /* 0x15041C3A: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x15041C3F: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x15041C42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041CD6; /* 0x15041C44: je 0x15041cd6 */
L_15041C4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15041C4A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15041C4C: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 5); /* 0x15041C4F: push 5 */
    RECOMP_CALL(sub_15068E1A); /* 0x15041C51: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041C56: pop ecx */
    /* test eax, eax */ /* 0x15041C57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041CD6; /* 0x15041C59: je 0x15041cd6 */
L_15041C5B:
    PUSH32(esp, 5); /* 0x15041C5B: push 5 */
    RECOMP_CALL(sub_15068D80); /* 0x15041C5D: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041C62: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x15041C63: mov dword ptr [ebp - 4], edi */
    MEM32(0x150BDB20) = esi; /* 0x15041C66: mov dword ptr [0x150bdb20], esi */
    eax = MEM32(ebp + 0x18); /* 0x15041C6C: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x150BDB24) = eax; /* 0x15041C6F: mov dword ptr [0x150bdb24], eax */
    MEM32(0x150BDB30) = edi; /* 0x15041C74: mov dword ptr [0x150bdb30], edi */
    MEM32(0x150BDB28) = edi; /* 0x15041C7A: mov dword ptr [0x150bdb28], edi */
    MEM32(0x150BDB2C) = edi; /* 0x15041C80: mov dword ptr [0x150bdb2c], edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15041C86: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15041C89: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15041C8C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15041C8F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15041C92: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x94); /* 0x15041C95: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_1503CBE5); /* 0x15041C9B: call 0x1503cbe5 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x15041CA0: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_1503CEAD); /* 0x15041CA6: call 0x1503cead */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15041CAB: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15041CAD: mov dword ptr [ebp - 0x1c], esi */
    ecx = 0x150BDB20u; /* 0x15041CB0: mov ecx, 0x150bdb20 */
    RECOMP_CALL(sub_1503D458); /* 0x15041CB5: call 0x1503d458 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15041CBA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15041CCD); /* 0x15041CC1: call 0x15041ccd */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15041CC6: mov eax, esi */
    goto L_15041CD8; /* 0x15041CC8: jmp 0x15041cd8 */
L_15041CD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041CD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041CD8:
    ecx = MEM32(ebp + (-0x10)); /* 0x15041CD8: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15041CDB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15041CE2: pop ecx */
    edi = POP32_VAL(esp); /* 0x15041CE3: pop edi */
    esi = POP32_VAL(esp); /* 0x15041CE4: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041CE5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041CE6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041CE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041CCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041CCDu);

L_15041CCD:
    PUSH32(esp, 5); /* 0x15041CCD: push 5 */
    RECOMP_CALL(sub_15068F50); /* 0x15041CCF: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15041CD4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041CD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041D62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041D62u);

L_15041D62:
    /* test eax, eax */ /* 0x15041D62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041D71; /* 0x15041D64: jne 0x15041d71 */
L_15041D66:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15041D66: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x15041D69: push edi */
    PUSH32(esp, ebx); /* 0x15041D6A: push ebx */
    PUSH32(esp, esi); /* 0x15041D6B: push esi */
    RECOMP_CALL(sub_15041D83); /* 0x15041D6C: call 0x15041d83 */
    RECOMP_FLAGS_IN();
L_15041D71:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041D71: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041D78u);

    goto L_15041D78;
L_15041CEE:
    PUSH32(esp, 0xCu); /* 0x15041CEE: push 0xc */
    PUSH32(esp, 0x150AFF98u); /* 0x15041CF0: push 0x150aff98 */
    RECOMP_CALL(sub_1505E988); /* 0x15041CF5: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15041CFA: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x15041CFE: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x15041D01: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x15041D03: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x15041D06: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x15041D09: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15041D0C: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x15041D0E: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15041D11: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041D15:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15041D15: sub edi, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x15041D18: mov dword ptr [ebp + 0x10], edi */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15041D32; /* 0x15041D1B: js 0x15041d32 */
L_15041D1D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x15041D1D: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x15041D1F: mov dword ptr [ebp + 8], esi */
    ecx = MEM32(ebp + 0x14); /* 0x15041D22: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15041D25: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x15041D2B: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x15041D2D: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15041D15; /* 0x15041D30: jmp 0x15041d15 */
L_15041D32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041D32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15041D34: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15041D35: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15041D38: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15041D62); /* 0x15041D3F: call 0x15041d62 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x15041D44: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15041D47: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15041D4E: pop ecx */
    edi = POP32_VAL(esp); /* 0x15041D4F: pop edi */
    esi = POP32_VAL(esp); /* 0x15041D50: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041D51: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041D52: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15041D53: ret 0x10 */
L_15041D78:
    RECOMP_BACKEDGE();
    goto L_15041CEE; /* 0x15041D78: jmp 0x15041cee */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15041D83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041D83u);

L_15041D83:
    PUSH32(esp, 0x14u); /* 0x15041D83: push 0x14 */
    PUSH32(esp, 0x150AFF78u); /* 0x15041D85: push 0x150aff78 */
    RECOMP_CALL(sub_1505E988); /* 0x15041D8A: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15041D8F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041D93:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x15041D93: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15041DD9; /* 0x15041D97: js 0x15041dd9 */
L_15041D99:
    esi = MEM32(ebp + 0x8); /* 0x15041D99: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0xC); /* 0x15041D9C: sub esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x15041D9F: mov dword ptr [ebp + 8], esi */
    ecx = MEM32(ebp + 0x14); /* 0x15041DA2: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15041DA5: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x15041DAB: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x15041DAD: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15041D93; /* 0x15041DB0: jmp 0x15041d93 */
L_15041DD9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15041DD9: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x15041DE0: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15041DE3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15041DEA: pop ecx */
    edi = POP32_VAL(esp); /* 0x15041DEB: pop edi */
    esi = POP32_VAL(esp); /* 0x15041DEC: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041DED: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041DEE: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15041DEF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15041E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E00u);

L_15041E00:
    edi = edi; /* 0x15041E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041E02: push ebp */
    ebp = esp; /* 0x15041E03: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041E05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15041E07: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15041E0A: setne al */
    ebp = POP32_VAL(esp); /* 0x15041E0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041E0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E20u);

L_15041E20:
    PUSH32(esp, ebp); /* 0x15041E20: push ebp */
    ebp = esp; /* 0x15041E21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x15041E23: sub esp, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15041E26: push ebx */
    PUSH32(esp, ecx); /* 0x15041E27: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x15041E28: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x15041E2B: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x15041E2E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15041E31: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebp); /* 0x15041E34: push ebp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15041E35: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x10); /* 0x15041E38: mov ecx, dword ptr [ebp + 0x10] */
    ebp = MEM32(ebp + (-0x4)); /* 0x15041E3B: mov ebp, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1505967C); /* 0x15041E3E: call 0x1505967c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15041E43: push esi */
    PUSH32(esp, edi); /* 0x15041E44: push edi */
    RECOMP_ICALL(eax); /* 0x15041E45: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x15041E47: pop edi */
    esi = POP32_VAL(esp); /* 0x15041E48: pop esi */
    ebx = ebp; /* 0x15041E49: mov ebx, ebp */
    ebp = POP32_VAL(esp); /* 0x15041E4B: pop ebp */
    ecx = MEM32(ebp + 0x10); /* 0x15041E4C: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebp); /* 0x15041E4F: push ebp */
    ebp = ebx; /* 0x15041E50: mov ebp, ebx */
    /* cmp ecx, 0x100u */ /* 0x15041E52: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041E5F; /* 0x15041E58: jne 0x15041e5f */
L_15041E5A:
    ecx = 2; /* 0x15041E5A: mov ecx, 2 */
L_15041E5F:
    PUSH32(esp, ecx); /* 0x15041E5F: push ecx */
    RECOMP_CALL(sub_1505967C); /* 0x15041E60: call 0x1505967c */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15041E65: pop ebp */
    ecx = POP32_VAL(esp); /* 0x15041E66: pop ecx */
    ebx = POP32_VAL(esp); /* 0x15041E67: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15041E68: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x15041E69: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_15041E6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E6Cu);

    goto L_15041E6C;
L_1503BB82:
    edi = edi; /* 0x1503BB82: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BB84: push ebp */
    ebp = esp; /* 0x1503BB85: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503BB87: push esi */
    _df = 1; /* 0x1503BB88: cld  */
    esi = MEM32(ebp + 0xC); /* 0x1503BB89: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1503BB8C: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x1503BB8F: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1503BB91: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1503BB96: push 0 */
    PUSH32(esp, esi); /* 0x1503BB98: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1503BB99: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1503BB9C: push dword ptr [esi + 0xc] */
    PUSH32(esp, 0); /* 0x1503BB9F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BBA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1503BBA4: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BBA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BBAA: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BBAF: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1503BBB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503BBB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BBB4: ret  */
L_15041E6C:
    RECOMP_BACKEDGE();
    goto L_1503BB82; /* 0x15041E6C: jmp 0x1503bb82 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15041E71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E71u);

    goto L_15041E71;
L_1503BBBB:
    edi = edi; /* 0x1503BBBB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503BBBD: push ebp */
    ebp = esp; /* 0x1503BBBE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1503BBC0: push ecx */
    PUSH32(esp, ebx); /* 0x1503BBC1: push ebx */
    _df = 1; /* 0x1503BBC2: cld  */
    eax = MEM32(ebp + 0xC); /* 0x1503BBC3: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x8); /* 0x1503BBC6: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + 0xC)));
    ecx = ecx ^ MEM32(ebp + 0xC); /* 0x1503BBC9: xor ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1503BBCC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503BBD1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1503BBD4: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    eax = eax & 0x66u; /* 0x1503BBD7: and eax, 0x66 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503BBED; /* 0x1503BBDA: je 0x1503bbed */
L_1503BBDC:
    eax = MEM32(ebp + 0xC); /* 0x1503BBDC: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x24) = 1; /* 0x1503BBDF: mov dword ptr [eax + 0x24], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503BBE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503BBE8: inc eax */
    _flag_k = FK_INC;
    goto L_1503BC57; /* 0x1503BBE9: jmp 0x1503bc57 */
L_1503BBED:
    PUSH32(esp, 1); /* 0x1503BBED: push 1 */
    eax = MEM32(ebp + 0xC); /* 0x1503BBEF: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1503BBF2: push dword ptr [eax + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1503BBF5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1503BBF8: push dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1503BBFB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1503BBFE: push dword ptr [eax + 0xc] */
    PUSH32(esp, 0); /* 0x1503BC01: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503BC03: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1503BC06: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1503BC09: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BC0C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AED5); /* 0x1503BC0F: call 0x1503aed5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1503BC14: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1503BC17: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x24), 0 */ /* 0x1503BC1A: cmp dword ptr [eax + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503BC2B; /* 0x1503BC1E: jne 0x1503bc2b */
L_1503BC20:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503BC20: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503BC23: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1503BB27); /* 0x1503BC26: call 0x1503bb27 */
    RECOMP_FLAGS_IN();
L_1503BC2B:
    PUSH32(esp, 0); /* 0x1503BC2B: push 0 */
    PUSH32(esp, 0); /* 0x1503BC2D: push 0 */
    PUSH32(esp, 0); /* 0x1503BC2F: push 0 */
    PUSH32(esp, 0); /* 0x1503BC31: push 0 */
    PUSH32(esp, 0); /* 0x1503BC33: push 0 */
    eax = ebp + (-0x4); /* 0x1503BC35: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1503BC38: push eax */
    PUSH32(esp, 0x123u); /* 0x1503BC39: push 0x123 */
    RECOMP_CALL(sub_1503B96C); /* 0x1503BC3E: call 0x1503b96c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503BC43: add esp, 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1503BC46: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x1503BC49: mov ebx, dword ptr [ebp + 0xc] */
    esp = MEM32(ebx + 0x1C); /* 0x1503BC4C: mov esp, dword ptr [ebx + 0x1c] */
    ebp = MEM32(ebx + 0x20); /* 0x1503BC4F: mov ebp, dword ptr [ebx + 0x20] */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1503BC57:
    ebx = POP32_VAL(esp); /* 0x1503BC57: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503BC58: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503BC59: ret  */
L_15041E71:
    RECOMP_BACKEDGE();
    goto L_1503BBBB; /* 0x15041E71: jmp 0x1503bbbb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_15041E7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E7Cu);

L_15041E7C:
    ecx = MEM32(ebp + (-0xC)); /* 0x15041E7C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15041E7F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15041E86: pop ecx */
    edi = POP32_VAL(esp); /* 0x15041E87: pop edi */
    edi = POP32_VAL(esp); /* 0x15041E88: pop edi */
    esi = POP32_VAL(esp); /* 0x15041E89: pop esi */
    ebx = POP32_VAL(esp); /* 0x15041E8A: pop ebx */
    esp = ebp; /* 0x15041E8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x15041E8D: pop ebp */
    PUSH32(esp, ecx); /* 0x15041E8E: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041E8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041E96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041E96u);

L_15041E96:
    PUSH32(esp, eax); /* 0x15041E96: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x15041E97: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x15041E9E: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x15041EA2: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15041EA6: push ebx */
    PUSH32(esp, esi); /* 0x15041EA7: push esi */
    PUSH32(esp, edi); /* 0x15041EA8: push edi */
    MEM32(eax) = ebp; /* 0x15041EA9: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x15041EAB: mov ebp, eax */
    eax = MEM32(0x150BD340); /* 0x15041EAD: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15041EB2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15041EB4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15041EB5: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x15041EB8: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x15041EBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15041EC2: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041EC8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041ECF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041ECFu);

L_15041ECF:
    PUSH32(esp, eax); /* 0x15041ECF: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x15041ED0: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x15041ED7: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x15041EDB: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15041EDF: push ebx */
    PUSH32(esp, esi); /* 0x15041EE0: push esi */
    PUSH32(esp, edi); /* 0x15041EE1: push edi */
    MEM32(eax) = ebp; /* 0x15041EE2: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x15041EE4: mov ebp, eax */
    eax = MEM32(0x150BD340); /* 0x15041EE6: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15041EEB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15041EED: push eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x15041EEE: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15041EF1: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x15041EF4: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x15041EFB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15041EFE: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041F04: ret  */
    RECOMP_REGS_OUT();
}
