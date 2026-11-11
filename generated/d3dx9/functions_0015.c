#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1204AC5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204AC5Bu);

L_1204AC5B:
    edi = edi; /* 0x1204AC5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204AC5D: push ebp */
    ebp = esp; /* 0x1204AC5E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1204AC60: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1204AC63: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1204AC68: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204AC6A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1204AC6D: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1204AC6E: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1204AC71: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204AC72: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204AC75: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204AC76: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1204AC79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AC84; /* 0x1204AC7B: jne 0x1204ac84 */
L_1204AC7D:
    eax = 0x8876086Cu; /* 0x1204AC7D: mov eax, 0x8876086c */
    goto L_1204ACDF; /* 0x1204AC82: jmp 0x1204acdf */
L_1204AC84:
    eax = MEM32(esi); /* 0x1204AC84: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x18); /* 0x1204AC86: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1204AC89: push ecx */
    PUSH32(esp, esi); /* 0x1204AC8A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1204AC8B: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1204AC8E: mov eax, dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x1204AC90: push 0x10 */
    ecx = ebp + (-0x1C); /* 0x1204AC92: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1204AC95: push ecx */
    PUSH32(esp, 0); /* 0x1204AC96: push 0 */
    PUSH32(esp, 0); /* 0x1204AC98: push 0 */
    PUSH32(esp, esi); /* 0x1204AC9A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1204AC9B: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1204AC9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204ACDF; /* 0x1204ACA0: js 0x1204acdf */
L_1204ACA2:
    /* cmp MEM32(ebp + (-0x18)), 0x65u */ /* 0x1204ACA2: cmp dword ptr [ebp - 0x18], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1204ACA6: mov eax, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204ACC2; /* 0x1204ACA9: jne 0x1204acc2 */
L_1204ACAB:
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204ACAB: imul eax, eax, 6 */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1204ACAE: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1204AC7D; /* 0x1204ACB1: ja 0x1204ac7d */
L_1204ACB3:
    eax = MEM32(edi); /* 0x1204ACB3: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1204ACB5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204ACB6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1204ACB9: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x1204ACBC: push edi */
    RECOMP_ICALL(MEM32(eax + 0x70)); /* 0x1204ACBD: call dword ptr [eax + 0x70] */
    RECOMP_FLAGS_IN();
    goto L_1204ACD7; /* 0x1204ACC0: jmp 0x1204acd7 */
L_1204ACC2:
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204ACC2: imul eax, eax, 0xc */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1204ACC5: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1204AC7D; /* 0x1204ACC8: ja 0x1204ac7d */
L_1204ACCA:
    eax = MEM32(edi); /* 0x1204ACCA: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1204ACCC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204ACCD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1204ACD0: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x1204ACD3: push edi */
    RECOMP_ICALL(MEM32(eax + 0x74)); /* 0x1204ACD4: call dword ptr [eax + 0x74] */
    RECOMP_FLAGS_IN();
L_1204ACD7:
    eax = MEM32(esi); /* 0x1204ACD7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204ACD9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1204ACDA: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204ACDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204ACDF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204ACDF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1204ACE2: pop edi */
    esi = POP32_VAL(esp); /* 0x1204ACE3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1204ACE4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1204ACE6: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1204ACE7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204ACEC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204ACED: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204ACF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204ACF5u);

L_1204ACF5:
    edi = edi; /* 0x1204ACF5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204ACF7: push ebp */
    ebp = esp; /* 0x1204ACF8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204ACFA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204ACFB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1204ACFE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204AD00: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1204AD01: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1204AD04: push dword ptr [ebp + 0x18] */
    /* test LO8(eax), 1 */ /* 0x1204AD07: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1204AD09: push dword ptr [ebp + 0x14] */
    eax = MEM32(esi); /* 0x1204AD0C: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204AD0E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204AD11: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204AD14: push esi */
    RECOMP_ICALL(MEM32(eax + 0x9C)); /* 0x1204AD15: call dword ptr [eax + 0x9c] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1204AD1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204AD1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204AD1D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1204AD25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204AD25u);

L_1204AD25:
    edi = edi; /* 0x1204AD25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204AD27: push ebp */
    ebp = esp; /* 0x1204AD28: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204AD2A: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204AD2D: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204AD30: push ebx */
    PUSH32(esp, esi); /* 0x1204AD31: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204AD32: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204AD34: push edi */
    /* test edx, edx */ /* 0x1204AD35: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AE58; /* 0x1204AD37: je 0x1204ae58 */
L_1204AD3D:
    eax = MEM32(ebp + 0x14); /* 0x1204AD3D: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1204AD40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AE58; /* 0x1204AD42: je 0x1204ae58 */
L_1204AD48:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1204AD48: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204AE58; /* 0x1204AD4B: je 0x1204ae58 */
L_1204AD51:
    fp_push(0.0); /* 0x1204AD51: fldz  */
    ecx = MEM32(ebp + 0xC); /* 0x1204AD53: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204AD56: fst dword ptr [ebp - 0xc] */
    esi = ebp + (-0xC); /* 0x1204AD59: lea esi, [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204AD5C: fst dword ptr [ebp - 8] */
    edi = eax; /* 0x1204AD5F: mov edi, eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1204AD61: fst dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AD64: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AD65: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AD66: movsd dword ptr es:[edi], dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1204AD67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AD79; /* 0x1204AD69: jne 0x1204ad79 */
L_1204AD6B:
    eax = MEM32(ebp + 0x18); /* 0x1204AD6B: mov eax, dword ptr [ebp + 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204AD6E: fstp st(0) */
    fp_push(1.0); /* 0x1204AD70: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1204AD72: fstp dword ptr [eax] */
    goto L_1204AE5D; /* 0x1204AD74: jmp 0x1204ae5d */
L_1204AD79:
    esi = edx + 0x8; /* 0x1204AD79: lea esi, [edx + 8] */
    edi = ecx; /* 0x1204AD7C: mov edi, ecx */
L_1204AD7E:
    fp_push(*(float*)&MEM32(esi + (-0x8))); /* 0x1204AD7E: fld dword ptr [esi - 8] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1204AD81: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1204AD83: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x1204AD85: fld dword ptr [esi - 4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x1204AD88: fadd dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1204AD8B: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1204AD8E: fld dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1204AD90: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204AD93: dec edi */
    _flag_k = FK_DEC;
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1204AD94: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1204AD97: fstp dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204AD7E; /* 0x1204AD9A: jne 0x1204ad7e */
L_1204AD9C:
    MEM32(ebp + 0x8) = ecx; /* 0x1204AD9C: mov dword ptr [ebp + 8], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1204AD9F: fild dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1204ADA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204ADAC; /* 0x1204ADA4: jns 0x1204adac */
L_1204ADA6:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1204ADA6: fadd dword ptr [0x120014d0] */
L_1204ADAC:
    fp_push(1.0); /* 0x1204ADAC: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1204ADAE: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204ADB0: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1204ADB3: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204ADB5: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1204ADB8: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204ADBA: fmulp st(2) */
    fp_xch(1); /* 0x1204ADBC: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204ADBE: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204ADC1: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x1204ADC4: fst dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1204ADC6: fld dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x1204ADC9: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1204ADCB: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204ADCD: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204ADD0: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x1204ADD3: fst dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1204ADD6: fld dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1204ADD9: fmulp st(3) */
    fp_xch(2); /* 0x1204ADDB: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204ADDD: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204ADE0: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x1204ADE3: fst dword ptr [eax + 8] */
    fp_xch(3); /* 0x1204ADE6: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204ADE8: fstp dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1204ADEB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AE43; /* 0x1204ADED: je 0x1204ae43 */
L_1204ADEF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204ADEF: add edx, 8 */
    _flag_k = FK_ADD;
L_1204ADF2:
    fp_push(*(float*)&MEM32(edx + (-0x8))); /* 0x1204ADF2: fld dword ptr [edx - 8] */
    fp_push(_st[1]); /* 0x1204ADF5: fld st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1204ADF7: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204ADF9: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x1204ADFC: fld dword ptr [edx - 4] */
    fp_push(_st[2]); /* 0x1204ADFF: fld st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1204AE01: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204AE03: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1204AE06: fld dword ptr [edx] */
    fp_push(_st[3]); /* 0x1204AE08: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1204AE0A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1204AE0C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1204AE0F: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1204AE12: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1204AE15: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[0]; /* 0x1204AE18: fmul st(0), st(0) */
    fp_xch(2); /* 0x1204AE1A: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1204AE1C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1204AE1E: faddp st(2) */
    _st[0] *= _st[0]; /* 0x1204AE20: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204AE22: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1204AE24: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1204AE27: fld dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204AE2A: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AE2D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AE2F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204AE31: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204AE3B; /* 0x1204AE34: jp 0x1204ae3b */
L_1204AE36:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1204AE36: fstp dword ptr [ebp + 8] */
    goto L_1204AE3D; /* 0x1204AE39: jmp 0x1204ae3d */
L_1204AE3B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204AE3B: fstp st(0) */
L_1204AE3D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x1204AE3D: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204AE40: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204ADF2; /* 0x1204AE41: jne 0x1204adf2 */
L_1204AE43:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204AE43: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204AE45: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204AE47: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204AE49: fld dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF44C); /* 0x1204AE4C: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1204AE51: mov eax, dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1204AE54: fstp dword ptr [eax] */
    goto L_1204AE5D; /* 0x1204AE56: jmp 0x1204ae5d */
L_1204AE58:
    ebx = 0x8876086Cu; /* 0x1204AE58: mov ebx, 0x8876086c */
L_1204AE5D:
    edi = POP32_VAL(esp); /* 0x1204AE5D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204AE5E: pop esi */
    eax = ebx; /* 0x1204AE5F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204AE61: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204AE62: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204AE63: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1204AE6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204AE6Bu);

L_1204AE6B:
    edi = edi; /* 0x1204AE6B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204AE6D: push ebp */
    ebp = esp; /* 0x1204AE6E: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1204AE70: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204AE73: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204AE76: push ebx */
    /* test ecx, ecx */ /* 0x1204AE77: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AF6E; /* 0x1204AE79: je 0x1204af6e */
L_1204AE7F:
    edx = MEM32(ebp + 0x14); /* 0x1204AE7F: mov edx, dword ptr [ebp + 0x14] */
    /* test edx, edx */ /* 0x1204AE82: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AF6E; /* 0x1204AE84: je 0x1204af6e */
L_1204AE8A:
    ebx = MEM32(ebp + 0x18); /* 0x1204AE8A: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x1204AE8D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AF6E; /* 0x1204AE8F: je 0x1204af6e */
L_1204AE95:
    eax = MEM32(ebp + 0xC); /* 0x1204AE95: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204AE98: push esi */
    PUSH32(esp, edi); /* 0x1204AE99: push edi */
    edi = edx; /* 0x1204AE9A: mov edi, edx */
    /* test eax, eax */ /* 0x1204AE9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AECB; /* 0x1204AE9E: jne 0x1204aecb */
L_1204AEA0:
    fp_push(0.0); /* 0x1204AEA0: fldz  */
    esi = ebp + (-0xC); /* 0x1204AEA2: lea esi, [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204AEA5: fst dword ptr [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204AEA8: fst dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1204AEAB: fst dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEAE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEAF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEB0: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204AEB1: fst dword ptr [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204AEB4: fst dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1204AEB7: fstp dword ptr [ebp - 4] */
    esi = ebp + (-0xC); /* 0x1204AEBA: lea esi, [ebp - 0xc] */
    edi = ebx; /* 0x1204AEBD: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEBF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEC0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AEC1: movsd dword ptr es:[edi], dword ptr [esi] */
L_1204AEC2:
    edi = POP32_VAL(esp); /* 0x1204AEC2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204AEC3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204AEC5: pop esi */
L_1204AEC6:
    ebx = POP32_VAL(esp); /* 0x1204AEC6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204AEC7: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204AEC8: ret 0x14 */
L_1204AECB:
    esi = ecx; /* 0x1204AECB: mov esi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AECD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AECE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AECF: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ecx; /* 0x1204AED0: mov esi, ecx */
    edi = ebx; /* 0x1204AED2: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AED4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AED5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204AED6: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x1204AED7: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1204AEDA: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1204AEDC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204AEC2; /* 0x1204AEDF: jbe 0x1204aec2 */
L_1204AEE1:
    esi = eax + (-0x1); /* 0x1204AEE1: lea esi, [eax - 1] */
L_1204AEE4:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1204AEE4: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1204AEE6: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AEE8: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AEEA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1204AEEC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AEF7; /* 0x1204AEEF: jne 0x1204aef7 */
L_1204AEF1:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1204AEF1: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1204AEF3: fstp dword ptr [edx] */
    goto L_1204AF08; /* 0x1204AEF5: jmp 0x1204af08 */
L_1204AEF7:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1204AEF7: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1204AEF9: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AEFB: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AEFD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204AEFF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204AF08; /* 0x1204AF02: jp 0x1204af08 */
L_1204AF04:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1204AF04: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1204AF06: fstp dword ptr [ebx] */
L_1204AF08:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1204AF08: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1204AF0B: fld dword ptr [edx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AF0E: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AF10: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1204AF12: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AF1F; /* 0x1204AF15: jne 0x1204af1f */
L_1204AF17:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1204AF17: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x1204AF1A: fstp dword ptr [edx + 4] */
    goto L_1204AF34; /* 0x1204AF1D: jmp 0x1204af34 */
L_1204AF1F:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1204AF1F: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1204AF22: fld dword ptr [ebx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AF25: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AF27: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204AF29: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204AF34; /* 0x1204AF2C: jp 0x1204af34 */
L_1204AF2E:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1204AF2E: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x1204AF31: fstp dword ptr [ebx + 4] */
L_1204AF34:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1204AF34: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1204AF37: fld dword ptr [edx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AF3A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AF3C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1204AF3E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204AF4B; /* 0x1204AF41: jne 0x1204af4b */
L_1204AF43:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1204AF43: fld dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x1204AF46: fstp dword ptr [edx + 8] */
    goto L_1204AF60; /* 0x1204AF49: jmp 0x1204af60 */
L_1204AF4B:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1204AF4B: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1204AF4E: fld dword ptr [ebx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204AF51: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204AF53: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204AF55: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204AF60; /* 0x1204AF58: jp 0x1204af60 */
L_1204AF5A:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1204AF5A: fld dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x1204AF5D: fstp dword ptr [ebx + 8] */
L_1204AF60:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1204AF60: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204AF62: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204AEE4; /* 0x1204AF63: jne 0x1204aee4 */
L_1204AF69:
    RECOMP_BACKEDGE();
    goto L_1204AEC2; /* 0x1204AF69: jmp 0x1204aec2 */
L_1204AF6E:
    eax = 0x8876086Cu; /* 0x1204AF6E: mov eax, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1204AEC6; /* 0x1204AF73: jmp 0x1204aec6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204AF7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204AF7Du);

L_1204AF7D:
    edi = edi; /* 0x1204AF7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204AF7F: push ebp */
    ebp = esp; /* 0x1204AF80: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204AF82: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204AF85: push esi */
    ecx = edx; /* 0x1204AF86: mov ecx, edx */
    PUSH32(esp, 2); /* 0x1204AF88: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1204AF8A: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204AF90: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204AF91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AF93: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFC3; /* 0x1204AF95: je 0x1204afc3 */
L_1204AF97:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AF97: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFBF; /* 0x1204AF99: je 0x1204afbf */
L_1204AF9B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AF9B: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFBF; /* 0x1204AF9D: je 0x1204afbf */
L_1204AF9F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AF9F: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFBB; /* 0x1204AFA1: je 0x1204afbb */
L_1204AFA3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AFA3: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFB7; /* 0x1204AFA5: je 0x1204afb7 */
L_1204AFA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AFA7: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204AFB3; /* 0x1204AFA9: je 0x1204afb3 */
L_1204AFAB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1204AFAB: sub ecx, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1204AFC6; /* 0x1204AFAD: jne 0x1204afc6 */
L_1204AFAF:
    PUSH32(esp, 0x20u); /* 0x1204AFAF: push 0x20 */
    goto L_1204AFC5; /* 0x1204AFB1: jmp 0x1204afc5 */
L_1204AFB3:
    PUSH32(esp, 0x1Cu); /* 0x1204AFB3: push 0x1c */
    goto L_1204AFC5; /* 0x1204AFB5: jmp 0x1204afc5 */
L_1204AFB7:
    PUSH32(esp, 0x18u); /* 0x1204AFB7: push 0x18 */
    goto L_1204AFC5; /* 0x1204AFB9: jmp 0x1204afc5 */
L_1204AFBB:
    PUSH32(esp, 0x14u); /* 0x1204AFBB: push 0x14 */
    goto L_1204AFC5; /* 0x1204AFBD: jmp 0x1204afc5 */
L_1204AFBF:
    PUSH32(esp, 0x10u); /* 0x1204AFBF: push 0x10 */
    goto L_1204AFC5; /* 0x1204AFC1: jmp 0x1204afc5 */
L_1204AFC3:
    PUSH32(esp, 0xCu); /* 0x1204AFC3: push 0xc */
L_1204AFC5:
    eax = POP32_VAL(esp); /* 0x1204AFC5: pop eax */
L_1204AFC6:
    /* test LO8(edx), 0x10u */ /* 0x1204AFC6: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AFCE; /* 0x1204AFC9: je 0x1204afce */
L_1204AFCB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1204AFCB: add eax, 0xc */
    _flag_k = FK_ADD;
L_1204AFCE:
    /* test LO8(edx), 0x20u */ /* 0x1204AFCE: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AFD6; /* 0x1204AFD1: je 0x1204afd6 */
L_1204AFD3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204AFD3: add eax, 4 */
    _flag_k = FK_ADD;
L_1204AFD6:
    /* test LO8(edx), 0x40u */ /* 0x1204AFD6: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204AFDE; /* 0x1204AFD9: je 0x1204afde */
L_1204AFDB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204AFDB: add eax, 4 */
    _flag_k = FK_ADD;
L_1204AFDE:
    /* test LO8(edx), LO8(edx) */ /* 0x1204AFDE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204AFE5; /* 0x1204AFE0: jns 0x1204afe5 */
L_1204AFE2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204AFE2: add eax, 4 */
    _flag_k = FK_ADD;
L_1204AFE5:
    esi = edx; /* 0x1204AFE5: mov esi, edx */
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x1204AFE7: shr esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 8u; /* 0x1204AFE7: shr esi, 8 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x1204AFEA: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x1204AFEA: shr edx, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x1204AFED: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1204AFF0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B025; /* 0x1204AFF2: je 0x1204b025 */
L_1204AFF4:
    /* test esi, esi */ /* 0x1204AFF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B028; /* 0x1204AFF6: je 0x1204b028 */
L_1204AFF8:
    ecx = edx; /* 0x1204AFF8: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1204AFFA: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1204AFFD: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B01A; /* 0x1204B000: je 0x1204b01a */
L_1204B002:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204B002: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B015; /* 0x1204B003: je 0x1204b015 */
L_1204B005:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204B005: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B010; /* 0x1204B006: je 0x1204b010 */
L_1204B008:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204B008: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204B01D; /* 0x1204B009: jne 0x1204b01d */
L_1204B00B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204B00B: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1204B01D; /* 0x1204B00E: jmp 0x1204b01d */
L_1204B010:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1204B010: add eax, 0x10 */
    _flag_k = FK_ADD;
    goto L_1204B01D; /* 0x1204B013: jmp 0x1204b01d */
L_1204B015:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1204B015: add eax, 0xc */
    _flag_k = FK_ADD;
    goto L_1204B01D; /* 0x1204B018: jmp 0x1204b01d */
L_1204B01A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1204B01A: add eax, 8 */
    _flag_k = FK_ADD;
L_1204B01D:
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x1204B01D: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x1204B01D: shr edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204B020: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204AFF8; /* 0x1204B021: jne 0x1204aff8 */
L_1204B023:
    goto L_1204B028; /* 0x1204B023: jmp 0x1204b028 */
L_1204B025:
    eax = eax + esi * 8; /* 0x1204B025: lea eax, [eax + esi*8] */
L_1204B028:
    esi = POP32_VAL(esp); /* 0x1204B028: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204B029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B02A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B032(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B032u);

L_1204B032:
    edi = edi; /* 0x1204B032: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B034: push ebp */
    ebp = esp; /* 0x1204B035: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204B037: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) & 0); /* 0x1204B03A: and word ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(ebp + 0x10); /* 0x1204B03E: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1204B041: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1204B042: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM8(esi); /* 0x1204B045: movzx eax, byte ptr [esi] */
    MEM16(edx + 0x2) = (uint16_t)(LO16(eax)); /* 0x1204B048: mov word ptr [edx + 2], ax */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1204B04C: mov al, byte ptr [ebp + 0xc] */
    MEM8(edx + 0x6) = (uint8_t)(LO8(eax)); /* 0x1204B04F: mov byte ptr [edx + 6], al */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x1204B052: mov al, byte ptr [ebp + 0x18] */
    MEM8(edx + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1204B055: mov byte ptr [edx + 4], cl */
    MEM8(edx + 0x5) = (uint8_t)(0); /* 0x1204B058: mov byte ptr [edx + 5], 0 */
    MEM8(edx + 0x7) = (uint8_t)(LO8(eax)); /* 0x1204B05C: mov byte ptr [edx + 7], al */
    eax = (uint32_t)MEM8(ecx + 0x120060B8); /* 0x1204B05F: movzx eax, byte ptr [ecx + 0x120060b8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x1204B066: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1204B068: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204B069: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204B06A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1204B072(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B072u);

L_1204B072:
    edi = edi; /* 0x1204B072: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B074: push ebp */
    ebp = esp; /* 0x1204B075: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B077: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204B07A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1204B07C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B0C7; /* 0x1204B07E: je 0x1204b0c7 */
L_1204B080:
    PUSH32(esp, edi); /* 0x1204B080: push edi */
    edi = (uint32_t)MEM16(eax); /* 0x1204B081: movzx edi, word ptr [eax] */
    /* cmp LO16(edi), 0xFFu */ /* 0x1204B084: cmp di, 0xff */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B0C4; /* 0x1204B089: je 0x1204b0c4 */
L_1204B08B:
    PUSH32(esp, esi); /* 0x1204B08B: push esi */
    esi = eax + 0x4; /* 0x1204B08C: lea esi, [eax + 4] */
L_1204B08F:
    eax = (uint32_t)LO16(edi); /* 0x1204B08F: movzx eax, di */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204B092: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B0B3; /* 0x1204B095: jne 0x1204b0b3 */
L_1204B097:
    /* cmp MEM8(esi + 0x1), 4 */ /* 0x1204B097: cmp byte ptr [esi + 1], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B0B3; /* 0x1204B09B: je 0x1204b0b3 */
L_1204B09D:
    eax = (uint32_t)MEM8(esi); /* 0x1204B09D: movzx eax, byte ptr [esi] */
    ecx = (uint32_t)MEM8(eax + 0x120060B8); /* 0x1204B0A0: movzx ecx, byte ptr [eax + 0x120060b8] */
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1204B0A7: movzx eax, word ptr [esi - 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204B0AB: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x1204B0AD: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204B0B3; /* 0x1204B0AF: jae 0x1204b0b3 */
L_1204B0B1:
    edx = eax; /* 0x1204B0B1: mov edx, eax */
L_1204B0B3:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x1204B0B3: movzx ecx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1204B0B7: add esi, 8 */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x1204B0BA: mov edi, ecx */
    /* cmp LO16(ecx), 0xFFu */ /* 0x1204B0BC: cmp cx, 0xff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B08F; /* 0x1204B0C1: jne 0x1204b08f */
L_1204B0C3:
    esi = POP32_VAL(esp); /* 0x1204B0C3: pop esi */
L_1204B0C4:
    eax = edx; /* 0x1204B0C4: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x1204B0C6: pop edi */
L_1204B0C7:
    ebp = POP32_VAL(esp); /* 0x1204B0C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B0C8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B0D0u);

L_1204B0D0:
    edi = edi; /* 0x1204B0D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B0D2: push ebp */
    ebp = esp; /* 0x1204B0D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204B0D5: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x1204B0D6: mov edx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(edx); /* 0x1204B0D9: movzx eax, word ptr [edx] */
    PUSH32(esp, ebx); /* 0x1204B0DC: push ebx */
    PUSH32(esp, esi); /* 0x1204B0DD: push esi */
    PUSH32(esp, edi); /* 0x1204B0DE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204B0DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1204B0E1: mov esi, edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1204B0E3: mov dword ptr [ebp - 4], edi */
    /* cmp LO16(eax), 0xFFu */ /* 0x1204B0E6: cmp ax, 0xff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B159; /* 0x1204B0EA: je 0x1204b159 */
L_1204B0EC:
    ebx = eax; /* 0x1204B0EC: mov ebx, eax */
    ecx = edx + 0x6; /* 0x1204B0EE: lea ecx, [edx + 6] */
L_1204B0F1:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1204B0F1: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B0F4: jne 0x1204b1cb */
L_1204B0FA:
    SET_LO8(ebx, MEM8(ecx + (-0x2))); /* 0x1204B0FA: mov bl, byte ptr [ecx - 2] */
    /* cmp LO8(ebx), 7 */ /* 0x1204B0FD: cmp bl, 7 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B100: ja 0x1204b1cb */
L_1204B106:
    eax = (uint32_t)MEM16(ecx + (-0x4)); /* 0x1204B106: movzx eax, word ptr [ecx - 4] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1204B10A: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B10D: jne 0x1204b1cb */
L_1204B113:
    /* cmp MEM8(ecx + (-0x1)), 5 */ /* 0x1204B113: cmp byte ptr [ecx - 1], 5 */
    _flag_a = (uint32_t)(MEM8(ecx + (-0x1))) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B117: ja 0x1204b1cb */
L_1204B11D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1204B11D: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 5 */ /* 0x1204B11F: cmp al, 5 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204B12F; /* 0x1204B121: jbe 0x1204b12f */
L_1204B123:
    /* cmp LO8(eax), 9 */ /* 0x1204B123: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B12F; /* 0x1204B125: je 0x1204b12f */
L_1204B127:
    /* cmp LO8(eax), 0xAu */ /* 0x1204B127: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B129: jne 0x1204b1cb */
L_1204B12F:
    /* cmp LO8(eax), 0xAu */ /* 0x1204B12F: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B13D; /* 0x1204B131: jne 0x1204b13d */
L_1204B133:
    /* cmp MEM8(ecx + 0x1), 1 */ /* 0x1204B133: cmp byte ptr [ecx + 1], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B137: ja 0x1204b1cb */
L_1204B13D:
    eax = (uint32_t)LO8(ebx); /* 0x1204B13D: movzx eax, bl */
    eax = (uint32_t)MEM8(eax + 0x120060B8); /* 0x1204B140: movzx eax, byte ptr [eax + 0x120060b8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x1204B147: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x1204B14A: movzx eax, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204B14E: add ecx, 8 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1204B151: mov ebx, eax */
    /* cmp LO16(eax), 0xFFu */ /* 0x1204B153: cmp ax, 0xff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B0F1; /* 0x1204B157: jne 0x1204b0f1 */
L_1204B159:
    SET_LO8(eax, MEM8(edx + 0x6)); /* 0x1204B159: mov al, byte ptr [edx + 6] */
    PUSH32(esp, 2); /* 0x1204B15C: push 2 */
    ebx = POP32_VAL(esp); /* 0x1204B15E: pop ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x1204B15F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B1ED; /* 0x1204B161: jne 0x1204b1ed */
L_1204B167:
    /* cmp MEM8(edx + 0x4), LO8(ebx) */ /* 0x1204B167: cmp byte ptr [edx + 4], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1FD; /* 0x1204B16A: jne 0x1204b1fd */
L_1204B170:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B170: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edx + 0x6), 1 */ /* 0x1204B173: cmp byte ptr [edx + 6], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edi; /* 0x1204B177: mov eax, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B18A; /* 0x1204B179: jne 0x1204b18a */
L_1204B17B:
    SET_LO8(ecx, MEM8(edx + 0x4)); /* 0x1204B17B: mov cl, byte ptr [edx + 4] */
    /* cmp LO8(ecx), 3 */ /* 0x1204B17E: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1204B18A; /* 0x1204B181: ja 0x1204b18a */
L_1204B183:
    eax = (uint32_t)LO8(ecx); /* 0x1204B183: movzx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B186: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B187: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B18A:
    /* cmp MEM8(edx + 0x6), LO8(ebx) */ /* 0x1204B18A: cmp byte ptr [edx + 6], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1B3; /* 0x1204B18D: jne 0x1204b1b3 */
L_1204B18F:
    /* cmp MEM8(edx + 0x4), 5 */ /* 0x1204B18F: cmp byte ptr [edx + 4], 5 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B19E; /* 0x1204B193: jne 0x1204b19e */
L_1204B195:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B195: inc eax */
    _flag_k = FK_INC;
    esi = 0x1000u; /* 0x1204B196: mov esi, 0x1000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B19B: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B19E:
    /* cmp MEM8(edx + 0x6), LO8(ebx) */ /* 0x1204B19E: cmp byte ptr [edx + 6], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1B3; /* 0x1204B1A1: jne 0x1204b1b3 */
L_1204B1A3:
    /* cmp MEM8(edx + 0x4), 4 */ /* 0x1204B1A3: cmp byte ptr [edx + 4], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1B3; /* 0x1204B1A7: jne 0x1204b1b3 */
L_1204B1A9:
    _flag_a = (uint32_t)((esi | 0x8000u)); _flag_b = (uint32_t)((esi | 0x8000u));
    esi = esi | 0x8000u; /* 0x1204B1A9: or esi, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B1AF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B1B0: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B1B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1204B1B3: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B1E9; /* 0x1204B1B5: je 0x1204b1e9 */
L_1204B1B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B1B7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B1E4; /* 0x1204B1B8: je 0x1204b1e4 */
L_1204B1BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B1BA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B1DF; /* 0x1204B1BB: je 0x1204b1df */
L_1204B1BD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B1BD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B1DA; /* 0x1204B1BE: je 0x1204b1da */
L_1204B1C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B1C0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204B1D5; /* 0x1204B1C1: je 0x1204b1d5 */
L_1204B1C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B1C3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204B1FD; /* 0x1204B1C4: jne 0x1204b1fd */
L_1204B1C6:
    _flag_a = (uint32_t)((esi | 0xEu)); _flag_b = (uint32_t)((esi | 0xEu));
    esi = esi | 0xEu; /* 0x1204B1C6: or esi, 0xe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1C9: jmp 0x1204b1fd */
L_1204B1CB:
    eax = 0x8876086Cu; /* 0x1204B1CB: mov eax, 0x8876086c */
    goto L_1204B2DA; /* 0x1204B1D0: jmp 0x1204b2da */
L_1204B1D5:
    _flag_a = (uint32_t)((esi | 0xCu)); _flag_b = (uint32_t)((esi | 0xCu));
    esi = esi | 0xCu; /* 0x1204B1D5: or esi, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1D8: jmp 0x1204b1fd */
L_1204B1DA:
    _flag_a = (uint32_t)((esi | 0xAu)); _flag_b = (uint32_t)((esi | 0xAu));
    esi = esi | 0xAu; /* 0x1204B1DA: or esi, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1DD: jmp 0x1204b1fd */
L_1204B1DF:
    _flag_a = (uint32_t)((esi | 8)); _flag_b = (uint32_t)((esi | 8));
    esi = esi | 8; /* 0x1204B1DF: or esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1E2: jmp 0x1204b1fd */
L_1204B1E4:
    _flag_a = (uint32_t)((esi | 6)); _flag_b = (uint32_t)((esi | 6));
    esi = esi | 6; /* 0x1204B1E4: or esi, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1E7: jmp 0x1204b1fd */
L_1204B1E9:
    _flag_a = (uint32_t)((esi | ebx)); _flag_b = (uint32_t)((esi | ebx));
    esi = esi | ebx; /* 0x1204B1E9: or esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B1FD; /* 0x1204B1EB: jmp 0x1204b1fd */
L_1204B1ED:
    /* cmp LO8(eax), 9 */ /* 0x1204B1ED: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1FD; /* 0x1204B1EF: jne 0x1204b1fd */
L_1204B1F1:
    /* cmp MEM8(edx + 0x4), 3 */ /* 0x1204B1F1: cmp byte ptr [edx + 4], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1FD; /* 0x1204B1F5: jne 0x1204b1fd */
L_1204B1F7:
    PUSH32(esp, 4); /* 0x1204B1F7: push 4 */
    esi = POP32_VAL(esp); /* 0x1204B1F9: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B1FA: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B1FD:
    /* cmp MEM8(edx + 0x6), 3 */ /* 0x1204B1FD: cmp byte ptr [edx + 6], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0x10u); /* 0x1204B201: push 0x10 */
    ebx = POP32_VAL(esp); /* 0x1204B203: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B211; /* 0x1204B204: jne 0x1204b211 */
L_1204B206:
    /* cmp MEM8(edx + 0x4), 2 */ /* 0x1204B206: cmp byte ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B211; /* 0x1204B20A: jne 0x1204b211 */
L_1204B20C:
    _flag_a = (uint32_t)((esi | ebx)); _flag_b = (uint32_t)((esi | ebx));
    esi = esi | ebx; /* 0x1204B20C: or esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B20E: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B211:
    /* cmp MEM8(edx + 0x6), 4 */ /* 0x1204B211: cmp byte ptr [edx + 6], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B223; /* 0x1204B215: jne 0x1204b223 */
L_1204B217:
    /* cmp MEM8(edx + 0x4), 0 */ /* 0x1204B217: cmp byte ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B223; /* 0x1204B21B: jne 0x1204b223 */
L_1204B21D:
    _flag_a = (uint32_t)((esi | 0x20u)); _flag_b = (uint32_t)((esi | 0x20u));
    esi = esi | 0x20u; /* 0x1204B21D: or esi, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B220: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B223:
    /* cmp MEM8(edx + 0x6), 0xAu */ /* 0x1204B223: cmp byte ptr [edx + 6], 0xa */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B256; /* 0x1204B227: jne 0x1204b256 */
L_1204B229:
    /* cmp MEM8(edx + 0x7), 0 */ /* 0x1204B229: cmp byte ptr [edx + 7], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B23B; /* 0x1204B22D: jne 0x1204b23b */
L_1204B22F:
    /* cmp MEM8(edx + 0x4), 4 */ /* 0x1204B22F: cmp byte ptr [edx + 4], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B23B; /* 0x1204B233: jne 0x1204b23b */
L_1204B235:
    _flag_a = (uint32_t)((esi | 0x40u)); _flag_b = (uint32_t)((esi | 0x40u));
    esi = esi | 0x40u; /* 0x1204B235: or esi, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B238: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B23B:
    /* cmp MEM8(edx + 0x6), 0xAu */ /* 0x1204B23B: cmp byte ptr [edx + 6], 0xa */
    _flag_a = (uint32_t)(MEM8(edx + 0x6)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B256; /* 0x1204B23F: jne 0x1204b256 */
L_1204B241:
    /* cmp MEM8(edx + 0x7), 1 */ /* 0x1204B241: cmp byte ptr [edx + 7], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x7)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B256; /* 0x1204B245: jne 0x1204b256 */
L_1204B247:
    /* cmp MEM8(edx + 0x4), 4 */ /* 0x1204B247: cmp byte ptr [edx + 4], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B256; /* 0x1204B24B: jne 0x1204b256 */
L_1204B24D:
    _flag_a = (uint32_t)((esi | 0x80u)); _flag_b = (uint32_t)((esi | 0x80u));
    esi = esi | 0x80u; /* 0x1204B24D: or esi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B253: add edx, 8 */
    _flag_k = FK_ADD;
L_1204B256:
    SET_LO8(ecx, MEM8(edx + 0x6)); /* 0x1204B256: mov cl, byte ptr [edx + 6] */
    /* cmp LO8(ecx), 5 */ /* 0x1204B259: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B25C: jne 0x1204b2c3 */
L_1204B25E:
    /* cmp MEM8(edx + 0x4), 0 */ /* 0x1204B25E: cmp byte ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B270; /* 0x1204B262: jne 0x1204b270 */
L_1204B264:
    eax = (uint32_t)MEM8(edx + 0x7); /* 0x1204B264: movzx eax, byte ptr [edx + 7] */
    /* cmp eax, edi */ /* 0x1204B268: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B270; /* 0x1204B26A: jne 0x1204b270 */
L_1204B26C:
    PUSH32(esp, 3); /* 0x1204B26C: push 3 */
    goto L_1204B2B0; /* 0x1204B26E: jmp 0x1204b2b0 */
L_1204B270:
    /* cmp LO8(ecx), 5 */ /* 0x1204B270: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B273: jne 0x1204b2c3 */
L_1204B275:
    /* cmp MEM8(edx + 0x4), 1 */ /* 0x1204B275: cmp byte ptr [edx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B283; /* 0x1204B279: jne 0x1204b283 */
L_1204B27B:
    eax = (uint32_t)MEM8(edx + 0x7); /* 0x1204B27B: movzx eax, byte ptr [edx + 7] */
    /* cmp eax, edi */ /* 0x1204B27F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B2B7; /* 0x1204B281: je 0x1204b2b7 */
L_1204B283:
    /* cmp LO8(ecx), 5 */ /* 0x1204B283: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B286: jne 0x1204b2c3 */
L_1204B288:
    /* cmp MEM8(edx + 0x4), 2 */ /* 0x1204B288: cmp byte ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B29B; /* 0x1204B28C: jne 0x1204b29b */
L_1204B28E:
    eax = (uint32_t)MEM8(edx + 0x7); /* 0x1204B28E: movzx eax, byte ptr [edx + 7] */
    /* cmp eax, edi */ /* 0x1204B292: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B29B; /* 0x1204B294: jne 0x1204b29b */
L_1204B296:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B296: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B298: inc eax */
    _flag_k = FK_INC;
    goto L_1204B2B1; /* 0x1204B299: jmp 0x1204b2b1 */
L_1204B29B:
    /* cmp LO8(ecx), 5 */ /* 0x1204B29B: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B29E: jne 0x1204b2c3 */
L_1204B2A0:
    /* cmp MEM8(edx + 0x4), 3 */ /* 0x1204B2A0: cmp byte ptr [edx + 4], 3 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B2A4: jne 0x1204b2c3 */
L_1204B2A6:
    eax = (uint32_t)MEM8(edx + 0x7); /* 0x1204B2A6: movzx eax, byte ptr [edx + 7] */
    /* cmp eax, edi */ /* 0x1204B2AA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B2C3; /* 0x1204B2AC: jne 0x1204b2c3 */
L_1204B2AE:
    PUSH32(esp, 2); /* 0x1204B2AE: push 2 */
L_1204B2B0:
    eax = POP32_VAL(esp); /* 0x1204B2B0: pop eax */
L_1204B2B1:
    ecx = ebx; /* 0x1204B2B1: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1204B2B3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1204B2B3: shl eax, cl */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1204B2B5: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B2B7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204B2B7: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1204B2BA: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204B2BD: inc edi */
    _flag_k = FK_INC;
    /* cmp ebx, 0x20u */ /* 0x1204B2BE: cmp ebx, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B256; /* 0x1204B2C1: jb 0x1204b256 */
L_1204B2C3:
    /* cmp MEM16(edx), 0xFFu */ /* 0x1204B2C3: cmp word ptr [edx], 0xff */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B1CB; /* 0x1204B2C8: jne 0x1204b1cb */
L_1204B2CE:
    eax = MEM32(ebp + 0xC); /* 0x1204B2CE: mov eax, dword ptr [ebp + 0xc] */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x1204B2D1: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x1204B2D1: shl edi, 8 */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x1204B2D4: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edi; /* 0x1204B2D6: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B2D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B2DA:
    edi = POP32_VAL(esp); /* 0x1204B2DA: pop edi */
    esi = POP32_VAL(esp); /* 0x1204B2DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204B2DC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204B2DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B2DE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B2E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B2E6u);

L_1204B2E6:
    edi = edi; /* 0x1204B2E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B2E8: push ebp */
    ebp = esp; /* 0x1204B2E9: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1204B2EB: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204B2ED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1204B2F0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1204B0D0); /* 0x1204B2F3: call 0x1204b0d0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204B2F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B2F9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B301(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B301u);

L_1204B301:
    edi = edi; /* 0x1204B301: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B303: push ebp */
    ebp = esp; /* 0x1204B304: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B306: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1204B309: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + 0xC); /* 0x1204B30B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x1204B30E: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1204B310: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204B311: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204B317(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B317u);

L_1204B317:
    edi = edi; /* 0x1204B317: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B319: push ebp */
    ebp = esp; /* 0x1204B31A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1204B31C: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204B31F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204B320: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204B322: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1204B323: mov edi, dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1204B326: mov eax, esi */
    /* test edx, edx */ /* 0x1204B328: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B334; /* 0x1204B32A: je 0x1204b334 */
L_1204B32C:
    MEM32(edi + eax * 4) = eax; /* 0x1204B32C: mov dword ptr [edi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B32F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1204B330: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B32C; /* 0x1204B332: jb 0x1204b32c */
L_1204B334:
    ecx = esi; /* 0x1204B334: mov ecx, esi */
    /* test edx, edx */ /* 0x1204B336: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B36F; /* 0x1204B338: je 0x1204b36f */
L_1204B33A:
    eax = MEM32(ebp + 0x8); /* 0x1204B33A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1204B33D: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204B33F: push ebx */
    ebx = edi; /* 0x1204B340: mov ebx, edi */
    MEM32(ebp + 0x8) = eax; /* 0x1204B342: mov dword ptr [ebp + 8], eax */
L_1204B345:
    edx = MEM32(eax + ebx); /* 0x1204B345: mov edx, dword ptr [eax + ebx] */
    MEM32(ebp + 0x14) = edx; /* 0x1204B348: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, ecx */ /* 0x1204B34B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1204B34D: mov edx, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B366; /* 0x1204B350: je 0x1204b366 */
L_1204B352:
    eax = MEM32(ebp + 0x14); /* 0x1204B352: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(edi + eax * 4); /* 0x1204B355: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebx) = eax; /* 0x1204B358: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0x14); /* 0x1204B35A: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204B35D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + eax * 4) = ecx; /* 0x1204B35F: mov dword ptr [edi + eax*4], ecx */
    eax = MEM32(ebp + 0x8); /* 0x1204B362: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204B365: inc esi */
    _flag_k = FK_INC;
L_1204B366:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204B366: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204B367: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x1204B36A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B345; /* 0x1204B36C: jb 0x1204b345 */
L_1204B36E:
    ebx = POP32_VAL(esp); /* 0x1204B36E: pop ebx */
L_1204B36F:
    eax = MEM32(ebp + 0x10); /* 0x1204B36F: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204B372: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1204B374: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204B376: sete cl */
    edi = POP32_VAL(esp); /* 0x1204B379: pop edi */
    esi = POP32_VAL(esp); /* 0x1204B37A: pop esi */
    MEM32(eax) = ecx; /* 0x1204B37B: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B37D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1204B37F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204B380: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204B388(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B388u);

L_1204B388:
    edi = edi; /* 0x1204B388: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B38A: push ebp */
    ebp = esp; /* 0x1204B38B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1204B38D: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1204B390: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B39A; /* 0x1204B393: jne 0x1204b39a */
L_1204B395:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B395: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B397: inc eax */
    _flag_k = FK_INC;
    goto L_1204B3C5; /* 0x1204B398: jmp 0x1204b3c5 */
L_1204B39A:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204B39A: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x1204B39D: fsub dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204B3A0: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204B3A3: fld dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1204B3A6: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B3A9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B3AB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1204B3AD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B3BF; /* 0x1204B3B0: jne 0x1204b3bf */
L_1204B3B2:
    _st[0] = -_st[0]; /* 0x1204B3B2: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B3B4: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B3B6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1204B3B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204B3C3; /* 0x1204B3BB: jp 0x1204b3c3 */
L_1204B3BD:
    RECOMP_BACKEDGE();
    goto L_1204B395; /* 0x1204B3BD: jmp 0x1204b395 */
L_1204B3BF:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1204B3BF: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204B3C1: fstp st(0) */
L_1204B3C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B3C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B3C5:
    ebp = POP32_VAL(esp); /* 0x1204B3C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B3C6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B3CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B3CEu);

L_1204B3CE:
    edi = edi; /* 0x1204B3CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B3D0: push ebp */
    ebp = esp; /* 0x1204B3D1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1204B3D3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1204B3D6: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1204B3D7: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1204B3DA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204B3DB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), 0xFFu */ /* 0x1204B3DD: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B475; /* 0x1204B3E2: je 0x1204b475 */
L_1204B3E8:
    ecx = MEM32(ebp + 0x10); /* 0x1204B3E8: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1204B3EB: fldz  */
    edx = MEM32(ebp + 0x8); /* 0x1204B3ED: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204B3F0: push esi */
    esi = eax + 0x7; /* 0x1204B3F1: lea esi, [eax + 7] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1204B3F4: sub ebx, ecx */
    _flag_k = FK_CMP;
L_1204B3F6:
    /* cmp MEM8(esi + (-0x2)), 0 */ /* 0x1204B3F6: cmp byte ptr [esi - 2], 0 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x2))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B464; /* 0x1204B3FA: jne 0x1204b464 */
L_1204B3FC:
    eax = esi + (-0x7); /* 0x1204B3FC: lea eax, [esi - 7] */
    MEM32(ebx + ecx) = eax; /* 0x1204B3FF: mov dword ptr [ebx + ecx], eax */
    eax = (uint32_t)MEM8(esi + (-0x1)); /* 0x1204B402: movzx eax, byte ptr [esi - 1] */
    /* cmp eax, 0xAu */ /* 0x1204B406: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204B460; /* 0x1204B409: ja 0x1204b460 */
L_1204B40B:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1204B482)); goto _ljump; }
L_1204B412:
    fp_push(*(float*)&MEM32(edx)); /* 0x1204B412: fld dword ptr [edx] */
    goto L_1204B45E; /* 0x1204B414: jmp 0x1204b45e */
L_1204B416:
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1204B416: fld dword ptr [edx + 4] */
    goto L_1204B45E; /* 0x1204B419: jmp 0x1204b45e */
L_1204B41B:
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x1204B41B: fst dword ptr [ecx] */
    goto L_1204B460; /* 0x1204B41D: jmp 0x1204b460 */
L_1204B41F:
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1204B41F: fld dword ptr [edx + 8] */
    goto L_1204B45E; /* 0x1204B422: jmp 0x1204b45e */
L_1204B424:
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1204B424: fld dword ptr [edx + 0xc] */
    goto L_1204B45E; /* 0x1204B427: jmp 0x1204b45e */
L_1204B429:
    SET_LO8(eax, MEM8(esi)); /* 0x1204B429: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1204B42B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B434; /* 0x1204B42D: jne 0x1204b434 */
L_1204B42F:
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x1204B42F: fld dword ptr [edx + 0x14] */
    goto L_1204B45E; /* 0x1204B432: jmp 0x1204b45e */
L_1204B434:
    /* cmp LO8(eax), 1 */ /* 0x1204B434: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B460; /* 0x1204B436: jne 0x1204b460 */
L_1204B438:
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x1204B438: fld dword ptr [edx + 0x10] */
    goto L_1204B45E; /* 0x1204B43B: jmp 0x1204b45e */
L_1204B43D:
    SET_LO8(eax, MEM8(esi)); /* 0x1204B43D: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 7 */ /* 0x1204B43F: cmp al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204B448; /* 0x1204B441: jbe 0x1204b448 */
L_1204B443:
    PUSH32(esp, 7); /* 0x1204B443: push 7 */
    eax = POP32_VAL(esp); /* 0x1204B445: pop eax */
    goto L_1204B44B; /* 0x1204B446: jmp 0x1204b44b */
L_1204B448:
    eax = (uint32_t)LO8(eax); /* 0x1204B448: movzx eax, al */
L_1204B44B:
    fp_push(*(float*)&MEM32(edx + eax * 4 + 0x18)); /* 0x1204B44B: fld dword ptr [edx + eax*4 + 0x18] */
    goto L_1204B45E; /* 0x1204B44F: jmp 0x1204b45e */
L_1204B451:
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x1204B451: fld dword ptr [edx + 0x38] */
    goto L_1204B45E; /* 0x1204B454: jmp 0x1204b45e */
L_1204B456:
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1204B456: fld dword ptr [edx + 0x3c] */
    goto L_1204B45E; /* 0x1204B459: jmp 0x1204b45e */
L_1204B45B:
    fp_push(*(float*)&MEM32(edx + 0x40)); /* 0x1204B45B: fld dword ptr [edx + 0x40] */
L_1204B45E:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1204B45E: fstp dword ptr [ecx] */
L_1204B460:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204B460: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204B461: add ecx, 4 */
    _flag_k = FK_ADD;
L_1204B464:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1204B464: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi + (-0x7)), 0xFFu */ /* 0x1204B467: cmp word ptr [esi - 7], 0xff */
    _flag_a = (uint32_t)(MEM16(esi + (-0x7))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B3F6; /* 0x1204B46D: jne 0x1204b3f6 */
L_1204B46F:
    ebx = MEM32(ebp + 0x14); /* 0x1204B46F: mov ebx, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204B472: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x1204B474: pop esi */
L_1204B475:
    _flag_a = (uint32_t)(MEM32(ebx + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + edi * 4) = MEM32(ebx + edi * 4) & 0; /* 0x1204B475: and dword ptr [ebx + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1204B479: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204B47A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204B47B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204B47C: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1204B412u: goto L_1204B412;
      case 0x1204B416u: goto L_1204B416;
      case 0x1204B41Bu: goto L_1204B41B;
      case 0x1204B41Fu: goto L_1204B41F;
      case 0x1204B424u: goto L_1204B424;
      case 0x1204B429u: goto L_1204B429;
      case 0x1204B43Du: goto L_1204B43D;
      case 0x1204B451u: goto L_1204B451;
      case 0x1204B456u: goto L_1204B456;
      case 0x1204B45Bu: goto L_1204B45B;
      case 0x1204B460u: goto L_1204B460;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1204B4B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B4B3u);

L_1204B4B3:
    edi = edi; /* 0x1204B4B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B4B5: push ebp */
    ebp = esp; /* 0x1204B4B6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B4B8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1204B4BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B503; /* 0x1204B4BD: je 0x1204b503 */
L_1204B4BF:
    ecx = (uint32_t)MEM16(eax); /* 0x1204B4BF: movzx ecx, word ptr [eax] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1204B4C2: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1204B4C4: push esi */
    /* cmp LO16(ecx), 0xFFu */ /* 0x1204B4C5: cmp cx, 0xff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B4FF; /* 0x1204B4CA: je 0x1204b4ff */
L_1204B4CC:
    esi = ecx; /* 0x1204B4CC: mov esi, ecx */
    ecx = eax + 0x2; /* 0x1204B4CE: lea ecx, [eax + 2] */
L_1204B4D1:
    /* test LO16(esi), LO16(esi) */ /* 0x1204B4D1: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B507; /* 0x1204B4D4: jne 0x1204b507 */
L_1204B4D6:
    /* cmp MEM8(ecx + 0x3), 0 */ /* 0x1204B4D6: cmp byte ptr [ecx + 3], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x3)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B4F0; /* 0x1204B4DA: je 0x1204b4f0 */
L_1204B4DC:
    eax = (uint32_t)LO8(edx); /* 0x1204B4DC: movzx eax, dl */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x1204B4DF: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B507; /* 0x1204B4E2: jb 0x1204b507 */
L_1204B4E4:
    eax = (uint32_t)MEM8(ecx + 0x2); /* 0x1204B4E4: movzx eax, byte ptr [ecx + 2] */
    SET_LO8(edx, MEM8(eax + 0x120060B8)); /* 0x1204B4E8: mov dl, byte ptr [eax + 0x120060b8] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(ecx)); /* 0x1204B4EE: add dl, byte ptr [ecx] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1204B4F0:
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x1204B4F0: movzx eax, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204B4F4: add ecx, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1204B4F7: mov esi, eax */
    /* cmp LO16(eax), 0xFFu */ /* 0x1204B4F9: cmp ax, 0xff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B4D1; /* 0x1204B4FD: jne 0x1204b4d1 */
L_1204B4FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B4FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B501: inc eax */
    _flag_k = FK_INC;
L_1204B502:
    esi = POP32_VAL(esp); /* 0x1204B502: pop esi */
L_1204B503:
    ebp = POP32_VAL(esp); /* 0x1204B503: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B504: ret 8 */
L_1204B507:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B507: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1204B502; /* 0x1204B509: jmp 0x1204b502 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204B510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B510u);

L_1204B510:
    edi = edi; /* 0x1204B510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B512: push ebp */
    ebp = esp; /* 0x1204B513: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1204B515: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B518: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B520; /* 0x1204B51A: jmp 0x1204b520 */
L_1204B51C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204B51C: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B51F: inc eax */
    _flag_k = FK_INC;
L_1204B520:
    /* cmp MEM16(ecx), 0xFFu */ /* 0x1204B520: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B51C; /* 0x1204B525: jne 0x1204b51c */
L_1204B527:
    ebp = POP32_VAL(esp); /* 0x1204B527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B528: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B530u);

L_1204B530:
    edi = edi; /* 0x1204B530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B532: push ebp */
    ebp = esp; /* 0x1204B533: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1204B535: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x248); /* 0x1204B538: mov ecx, dword ptr [ecx + 0x248] */
    edx = MEM32(ecx); /* 0x1204B53E: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x1204B540: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1204B545: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1204B546: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1204B549: push 0 */
    PUSH32(esp, 0); /* 0x1204B54B: push 0 */
    PUSH32(esp, ecx); /* 0x1204B54D: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1204B54E: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204B551: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B552: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B55A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B55Au);

L_1204B55A:
    edi = edi; /* 0x1204B55A: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204B55C: push esi */
    esi = ecx; /* 0x1204B55D: mov esi, ecx */
    ecx = MEM32(esi + 0x8); /* 0x1204B55F: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1204B562: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204B563: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x120060D8u; /* 0x1204B565: mov dword ptr [esi], 0x120060d8 */
    /* test ecx, ecx */ /* 0x1204B56B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B578; /* 0x1204B56D: je 0x1204b578 */
L_1204B56F:
    eax = MEM32(ecx); /* 0x1204B56F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204B571: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204B572: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = edi; /* 0x1204B575: mov dword ptr [esi + 8], edi */
L_1204B578:
    ecx = MEM32(esi + 0x22C); /* 0x1204B578: mov ecx, dword ptr [esi + 0x22c] */
    /* test ecx, ecx */ /* 0x1204B57E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B58E; /* 0x1204B580: je 0x1204b58e */
L_1204B582:
    eax = MEM32(ecx); /* 0x1204B582: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204B584: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204B585: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x22C) = edi; /* 0x1204B588: mov dword ptr [esi + 0x22c], edi */
L_1204B58E:
    ecx = MEM32(esi + 0x230); /* 0x1204B58E: mov ecx, dword ptr [esi + 0x230] */
    /* test ecx, ecx */ /* 0x1204B594: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B5A4; /* 0x1204B596: je 0x1204b5a4 */
L_1204B598:
    eax = MEM32(ecx); /* 0x1204B598: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204B59A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204B59B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x230) = edi; /* 0x1204B59E: mov dword ptr [esi + 0x230], edi */
L_1204B5A4:
    ecx = MEM32(esi + 0x234); /* 0x1204B5A4: mov ecx, dword ptr [esi + 0x234] */
    /* test ecx, ecx */ /* 0x1204B5AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B5BA; /* 0x1204B5AC: je 0x1204b5ba */
L_1204B5AE:
    eax = MEM32(ecx); /* 0x1204B5AE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204B5B0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204B5B1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x234) = edi; /* 0x1204B5B4: mov dword ptr [esi + 0x234], edi */
L_1204B5BA:
    ecx = MEM32(esi + 0x248); /* 0x1204B5BA: mov ecx, dword ptr [esi + 0x248] */
    /* test ecx, ecx */ /* 0x1204B5C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B5D0; /* 0x1204B5C2: je 0x1204b5d0 */
L_1204B5C4:
    eax = MEM32(ecx); /* 0x1204B5C4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204B5C6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204B5C7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x248) = edi; /* 0x1204B5CA: mov dword ptr [esi + 0x248], edi */
L_1204B5D0:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1204B5D0: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B5D6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1204B5DB: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B5E1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1204B5E6: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B5EC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204B5F1: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B5F7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1204B5FC: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B602: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1204B607: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1204B60A: pop edi */
    esi = POP32_VAL(esp); /* 0x1204B60B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204B60C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204B612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B612u);

L_1204B612:
    edi = edi; /* 0x1204B612: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B614: push ebp */
    ebp = esp; /* 0x1204B615: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204B617: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1204B61A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1204B61D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1204B61E: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B621: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1204B623: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B62F; /* 0x1204B625: je 0x1204b62f */
L_1204B627:
    MEM32(edx + eax * 4) = eax; /* 0x1204B627: mov dword ptr [edx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204B62A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1204B62B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B627; /* 0x1204B62D: jb 0x1204b627 */
L_1204B62F:
    /* cmp esi, 1 */ /* 0x1204B62F: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204B769; /* 0x1204B632: jbe 0x1204b769 */
L_1204B638:
    ecx = esi; /* 0x1204B638: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1204B63A: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1204B63A: shr ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204B63C: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x1204B63D: push ebx */
    PUSH32(esp, edi); /* 0x1204B63E: push edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1204B63F: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204B642: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B761; /* 0x1204B645: je 0x1204b761 */
L_1204B64B:
    ebx = ecx + ecx + 0x1; /* 0x1204B64B: lea ebx, [ecx + ecx + 1] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1204B64F: mov dword ptr [ebp - 0x14], ebx */
L_1204B652:
    esi = MEM32(edx + ecx * 4); /* 0x1204B652: mov esi, dword ptr [edx + ecx*4] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1204B655: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + 0x10); /* 0x1204B658: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x1204B65B: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204B65D: mov dword ptr [ebp - 4], eax */
    edi = ebx; /* 0x1204B660: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x1204B662: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204B6D3; /* 0x1204B664: jae 0x1204b6d3 */
L_1204B666:
    eax = MEM32(edx + edi * 4); /* 0x1204B666: mov eax, dword ptr [edx + edi*4] */
    ebx = edi + 0x1; /* 0x1204B669: lea ebx, [edi + 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204B66C: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1204B66F: mov dword ptr [ebp - 0x18], ebx */
    /* cmp ebx, esi */ /* 0x1204B672: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204B6A2; /* 0x1204B674: jae 0x1204b6a2 */
L_1204B676:
    ebx = MEM32(edx + edi * 4 + 0x4); /* 0x1204B676: mov ebx, dword ptr [edx + edi*4 + 4] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1204B67A: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1204B67D: mov ebx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1204B680: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1204B683: fld dword ptr [ebx + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1204B686: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x1204B689: fld dword ptr [ebx + eax*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B68C: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B68E: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1204B690: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B69D; /* 0x1204B693: jne 0x1204b69d */
L_1204B695:
    edi = MEM32(ebp + (-0x18)); /* 0x1204B695: mov edi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x8)); /* 0x1204B698: mov eax, dword ptr [ebp - 8] */
    goto L_1204B6A5; /* 0x1204B69B: jmp 0x1204b6a5 */
L_1204B69D:
    eax = MEM32(ebp + (-0x1C)); /* 0x1204B69D: mov eax, dword ptr [ebp - 0x1c] */
    goto L_1204B6A5; /* 0x1204B6A0: jmp 0x1204b6a5 */
L_1204B6A2:
    ebx = MEM32(ebp + 0xC); /* 0x1204B6A2: mov ebx, dword ptr [ebp + 0xc] */
L_1204B6A5:
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x1204B6A5: fld dword ptr [ebx + eax*4] */
    eax = MEM32(ebp + (-0xC)); /* 0x1204B6A8: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x1204B6AB: fld dword ptr [ebx + eax*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B6AE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B6B0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204B6B2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1204B6CA; /* 0x1204B6B5: jnp 0x1204b6ca */
L_1204B6B7:
    eax = MEM32(edx + edi * 4); /* 0x1204B6B7: mov eax, dword ptr [edx + edi*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x1204B6BA: mov dword ptr [edx + ecx*4], eax */
    ecx = edi; /* 0x1204B6BD: mov ecx, edi */
    edi = edi + edi + 0x1; /* 0x1204B6BF: lea edi, [edi + edi + 1] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1204B6C3: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, esi */ /* 0x1204B6C6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B666; /* 0x1204B6C8: jb 0x1204b666 */
L_1204B6CA:
    ecx = MEM32(ebp + (-0x10)); /* 0x1204B6CA: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0x14)); /* 0x1204B6CD: mov ebx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x4)); /* 0x1204B6D0: mov eax, dword ptr [ebp - 4] */
L_1204B6D3:
    edi = MEM32(ebp + (-0xC)); /* 0x1204B6D3: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204B6D6: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x1204B6D7: sub ebx, 2 */
    _flag_k = FK_CMP;
    MEM32(edx + eax * 4) = edi; /* 0x1204B6DA: mov dword ptr [edx + eax*4], edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1204B6DD: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1204B6E0: mov dword ptr [ebp - 0x14], ebx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204B6E3: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B652; /* 0x1204B6E6: jne 0x1204b652 */
L_1204B6EC:
    goto L_1204B761; /* 0x1204B6EC: jmp 0x1204b761 */
L_1204B6EE:
    eax = MEM32(edx + esi * 4); /* 0x1204B6EE: mov eax, dword ptr [edx + esi*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204B6F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x1204B6F3: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edx); /* 0x1204B6F6: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204B6F8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204B6F9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + esi * 4) = eax; /* 0x1204B6FB: mov dword ptr [edx + esi*4], eax */
    /* cmp esi, ecx */ /* 0x1204B6FE: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204B75B; /* 0x1204B700: jbe 0x1204b75b */
L_1204B702:
    edi = MEM32(edx + ecx * 4); /* 0x1204B702: mov edi, dword ptr [edx + ecx*4] */
    eax = ecx + 0x1; /* 0x1204B705: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204B708: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, esi */ /* 0x1204B70B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204B733; /* 0x1204B70D: jae 0x1204b733 */
L_1204B70F:
    eax = MEM32(edx + ecx * 4 + 0x4); /* 0x1204B70F: mov eax, dword ptr [edx + ecx*4 + 4] */
    edx = MEM32(ebp + 0xC); /* 0x1204B713: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x1204B716: fld dword ptr [edx + eax*4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204B719: mov dword ptr [ebp - 0x18], eax */
    eax = edx; /* 0x1204B71C: mov eax, edx */
    fp_push(*(float*)&MEM32(eax + edi * 4)); /* 0x1204B71E: fld dword ptr [eax + edi*4] */
    edx = MEM32(ebp + 0x8); /* 0x1204B721: mov edx, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B724: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B726: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1204B728: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B733; /* 0x1204B72B: jne 0x1204b733 */
L_1204B72D:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1204B72D: mov ecx, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x18)); /* 0x1204B730: mov edi, dword ptr [ebp - 0x18] */
L_1204B733:
    eax = MEM32(ebp + 0xC); /* 0x1204B733: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + edi * 4)); /* 0x1204B736: fld dword ptr [eax + edi*4] */
    eax = MEM32(ebp + 0x10); /* 0x1204B739: mov eax, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1204B73C: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edi + eax * 4)); /* 0x1204B73F: fld dword ptr [edi + eax*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204B742: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204B744: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204B746: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1204B75B; /* 0x1204B749: jnp 0x1204b75b */
L_1204B74B:
    eax = MEM32(edx + ecx * 4); /* 0x1204B74B: mov eax, dword ptr [edx + ecx*4] */
    MEM32(edx + ebx * 4) = eax; /* 0x1204B74E: mov dword ptr [edx + ebx*4], eax */
    ebx = ecx; /* 0x1204B751: mov ebx, ecx */
    ecx = ecx + ecx + 0x1; /* 0x1204B753: lea ecx, [ecx + ecx + 1] */
    /* cmp ecx, esi */ /* 0x1204B757: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204B702; /* 0x1204B759: jb 0x1204b702 */
L_1204B75B:
    eax = MEM32(ebp + 0x10); /* 0x1204B75B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + ebx * 4) = eax; /* 0x1204B75E: mov dword ptr [edx + ebx*4], eax */
L_1204B761:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204B761: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1204B762: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204B6EE; /* 0x1204B765: jne 0x1204b6ee */
L_1204B767:
    edi = POP32_VAL(esp); /* 0x1204B767: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204B768: pop ebx */
L_1204B769:
    esi = POP32_VAL(esp); /* 0x1204B769: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204B76A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B76B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B773(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B773u);

L_1204B773:
    edi = edi; /* 0x1204B773: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B775: push ebp */
    ebp = esp; /* 0x1204B776: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1204B778: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1204B779: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1204B77C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B787; /* 0x1204B77E: jne 0x1204b787 */
L_1204B780:
    eax = 0x8876086Cu; /* 0x1204B780: mov eax, 0x8876086c */
    goto L_1204B7A2; /* 0x1204B785: jmp 0x1204b7a2 */
L_1204B787:
    PUSH32(esp, esi); /* 0x1204B787: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204B788: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x230); /* 0x1204B78B: mov eax, dword ptr [esi + 0x230] */
    ecx = MEM32(eax); /* 0x1204B791: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204B793: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1204B794: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x230); /* 0x1204B797: mov eax, dword ptr [esi + 0x230] */
    MEM32(edi) = eax; /* 0x1204B79D: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204B7A1: pop esi */
L_1204B7A2:
    edi = POP32_VAL(esp); /* 0x1204B7A2: pop edi */
    ebp = POP32_VAL(esp); /* 0x1204B7A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B7A4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B7AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B7ACu);

L_1204B7AC:
    edi = edi; /* 0x1204B7AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B7AE: push ebp */
    ebp = esp; /* 0x1204B7AF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B7B1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x234); /* 0x1204B7B4: mov ecx, dword ptr [eax + 0x234] */
    eax = MEM32(ebp + 0xC); /* 0x1204B7BA: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x1204B7BD: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x1204B7BF: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1204B7C4: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204B7C5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1204B7C8: push 0 */
    PUSH32(esp, 0); /* 0x1204B7CA: push 0 */
    PUSH32(esp, ecx); /* 0x1204B7CC: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1204B7CD: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204B7D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B7D1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B7D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B7D9u);

L_1204B7D9:
    edi = edi; /* 0x1204B7D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B7DB: push ebp */
    ebp = esp; /* 0x1204B7DC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B7DE: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x248); /* 0x1204B7E1: mov ecx, dword ptr [eax + 0x248] */
    eax = MEM32(ebp + 0xC); /* 0x1204B7E7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x1204B7EA: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x1204B7EC: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1204B7F1: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204B7F2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1204B7F5: push 0 */
    PUSH32(esp, 0); /* 0x1204B7F7: push 0 */
    PUSH32(esp, ecx); /* 0x1204B7F9: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1204B7FA: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204B7FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B7FE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B806(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B806u);

L_1204B806:
    edi = edi; /* 0x1204B806: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B808: push ebp */
    ebp = esp; /* 0x1204B809: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1204B80B: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x270); /* 0x1204B80E: mov eax, dword ptr [ecx + 0x270] */
    /* test eax, eax */ /* 0x1204B814: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B81F; /* 0x1204B816: jne 0x1204b81f */
L_1204B818:
    eax = 0x8876086Cu; /* 0x1204B818: mov eax, 0x8876086c */
    goto L_1204B828; /* 0x1204B81D: jmp 0x1204b828 */
L_1204B81F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204B81F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x270) = eax; /* 0x1204B820: mov dword ptr [ecx + 0x270], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B826: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B828:
    ebp = POP32_VAL(esp); /* 0x1204B828: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B829: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B831(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B831u);

L_1204B831:
    edi = edi; /* 0x1204B831: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B833: push ebp */
    ebp = esp; /* 0x1204B834: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204B836: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0x274), 0 */ /* 0x1204B839: cmp dword ptr [edx + 0x274], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x274)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B855; /* 0x1204B840: je 0x1204b855 */
L_1204B842:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204B842: push dword ptr [ebp + 0x10] */
    eax = MEM32(edx + 0x274); /* 0x1204B845: mov eax, dword ptr [edx + 0x274] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204B84B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1204B84E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204B850: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1204B851: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_1204B8A5; /* 0x1204B853: jmp 0x1204b8a5 */
L_1204B855:
    eax = MEM32(ebp + 0x10); /* 0x1204B855: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1204B858: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1204B85B: push ebx */
    PUSH32(esp, esi); /* 0x1204B85C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204B85D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204B860: push edi */
    PUSH32(esp, 4); /* 0x1204B861: push 4 */
    ecx = POP32_VAL(esp); /* 0x1204B863: pop ecx */
    edi = 0x12018314u; /* 0x1204B864: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204B869: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1204B86B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1204B891; /* 0x1204B86D: je 0x1204b891 */
L_1204B86F:
    esi = MEM32(ebp + 0xC); /* 0x1204B86F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1204B872: push 4 */
    ecx = POP32_VAL(esp); /* 0x1204B874: pop ecx */
    edi = 0x12001B78u; /* 0x1204B875: mov edi, 0x12001b78 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204B87A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1204B87C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1204B891; /* 0x1204B87E: je 0x1204b891 */
L_1204B880:
    esi = MEM32(ebp + 0xC); /* 0x1204B880: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1204B883: push 4 */
    ecx = POP32_VAL(esp); /* 0x1204B885: pop ecx */
    edi = 0x12001B88u; /* 0x1204B886: mov edi, 0x12001b88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204B88B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1204B88D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1204B89D; /* 0x1204B88F: jne 0x1204b89d */
L_1204B891:
    MEM32(eax) = edx; /* 0x1204B891: mov dword ptr [eax], edx */
    eax = MEM32(edx); /* 0x1204B893: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1204B895: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1204B896: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B899: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204B8A2; /* 0x1204B89B: jmp 0x1204b8a2 */
L_1204B89D:
    eax = 0x80004002u; /* 0x1204B89D: mov eax, 0x80004002 */
L_1204B8A2:
    edi = POP32_VAL(esp); /* 0x1204B8A2: pop edi */
    esi = POP32_VAL(esp); /* 0x1204B8A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204B8A4: pop ebx */
L_1204B8A5:
    ebp = POP32_VAL(esp); /* 0x1204B8A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B8A6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B8AEu);

L_1204B8AE:
    edi = edi; /* 0x1204B8AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B8B0: push ebp */
    ebp = esp; /* 0x1204B8B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B8B3: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x23C); /* 0x1204B8B6: mov eax, dword ptr [eax + 0x23c] */
    ebp = POP32_VAL(esp); /* 0x1204B8BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B8BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B8C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B8C5u);

L_1204B8C5:
    edi = edi; /* 0x1204B8C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B8C7: push ebp */
    ebp = esp; /* 0x1204B8C8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B8CA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1204B8CD: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1204B8D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B8D1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B8D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B8D9u);

L_1204B8D9:
    edi = edi; /* 0x1204B8D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B8DB: push ebp */
    ebp = esp; /* 0x1204B8DC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204B8DE: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x214); /* 0x1204B8E1: mov eax, dword ptr [eax + 0x214] */
    ebp = POP32_VAL(esp); /* 0x1204B8E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204B8E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204B8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B8F0u);

L_1204B8F0:
    edi = edi; /* 0x1204B8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B8F2: push ebp */
    ebp = esp; /* 0x1204B8F3: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1204B8F5: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1204B8F8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B903; /* 0x1204B8FA: jne 0x1204b903 */
L_1204B8FC:
    eax = 0x8876086Cu; /* 0x1204B8FC: mov eax, 0x8876086c */
    goto L_1204B91C; /* 0x1204B901: jmp 0x1204b91c */
L_1204B903:
    ecx = MEM32(ebp + 0x8); /* 0x1204B903: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x234); /* 0x1204B906: mov eax, dword ptr [ecx + 0x234] */
    MEM32(edx) = eax; /* 0x1204B90C: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x234); /* 0x1204B90E: mov eax, dword ptr [ecx + 0x234] */
    ecx = MEM32(eax); /* 0x1204B914: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204B916: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1204B917: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B91A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B91C:
    ebp = POP32_VAL(esp); /* 0x1204B91C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B91D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B925(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B925u);

L_1204B925:
    edi = edi; /* 0x1204B925: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B927: push ebp */
    ebp = esp; /* 0x1204B928: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1204B92A: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1204B92D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B938; /* 0x1204B92F: jne 0x1204b938 */
L_1204B931:
    eax = 0x8876086Cu; /* 0x1204B931: mov eax, 0x8876086c */
    goto L_1204B951; /* 0x1204B936: jmp 0x1204b951 */
L_1204B938:
    ecx = MEM32(ebp + 0x8); /* 0x1204B938: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x248); /* 0x1204B93B: mov eax, dword ptr [ecx + 0x248] */
    MEM32(edx) = eax; /* 0x1204B941: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x248); /* 0x1204B943: mov eax, dword ptr [ecx + 0x248] */
    ecx = MEM32(eax); /* 0x1204B949: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204B94B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1204B94C: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B94F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204B951:
    ebp = POP32_VAL(esp); /* 0x1204B951: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204B952: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204B95A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B95Au);

L_1204B95A:
    edi = edi; /* 0x1204B95A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B95C: push ebp */
    ebp = esp; /* 0x1204B95D: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1204B95F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x1204B962: mov edx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1204B965: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B971; /* 0x1204B967: je 0x1204b971 */
L_1204B969:
    eax = MEM32(edx + 0x260); /* 0x1204B969: mov eax, dword ptr [edx + 0x260] */
    MEM32(ecx) = eax; /* 0x1204B96F: mov dword ptr [ecx], eax */
L_1204B971:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1204B971: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B997; /* 0x1204B975: je 0x1204b997 */
L_1204B977:
    ecx = MEM32(edx + 0x25C); /* 0x1204B977: mov ecx, dword ptr [edx + 0x25c] */
    /* test ecx, ecx */ /* 0x1204B97D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204B997; /* 0x1204B97F: je 0x1204b997 */
L_1204B981:
    eax = MEM32(edx + 0x260); /* 0x1204B981: mov eax, dword ptr [edx + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1204B987: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x1204B98A: push eax */
    PUSH32(esp, ecx); /* 0x1204B98B: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204B98C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x1204B98F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204B994: add esp, 0xc */
    _flag_k = FK_ADD;
L_1204B997:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204B997: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1204B999: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204B99A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204B9A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204B9A2u);

L_1204B9A2:
    edi = edi; /* 0x1204B9A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204B9A4: push ebp */
    ebp = esp; /* 0x1204B9A5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204B9A7: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1204B9A8: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1204B9AB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204B9AC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1204B9AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204B9D8; /* 0x1204B9B0: jne 0x1204b9d8 */
L_1204B9B2:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1204B9B2: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204B9C1; /* 0x1204B9B5: je 0x1204b9c1 */
L_1204B9B7:
    edi = 0x8876086Cu; /* 0x1204B9B7: mov edi, 0x8876086c */
    goto L_1204BA49; /* 0x1204B9BC: jmp 0x1204ba49 */
L_1204B9C1:
    esi = MEM32(ebp + 0x8); /* 0x1204B9C1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204B9C4: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B9CA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204B9CF: pop ecx */
    MEM32(esi + 0x260) = edi; /* 0x1204B9D0: mov dword ptr [esi + 0x260], edi */
    goto L_1204BA49; /* 0x1204B9D6: jmp 0x1204ba49 */
L_1204B9D8:
    PUSH32(esp, ebx); /* 0x1204B9D8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1204B9D9: mov ebx, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(ebx + 0x260) */ /* 0x1204B9DC: cmp esi, dword ptr [ebx + 0x260] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204B9F5; /* 0x1204B9E2: jae 0x1204b9f5 */
L_1204B9E4:
    eax = esi; /* 0x1204B9E4: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1204B9E6: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x1204B9E9: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204B9EA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x25C)); /* 0x1204B9ED: push dword ptr [ebx + 0x25c] */
    goto L_1204BA3A; /* 0x1204B9F3: jmp 0x1204ba3a */
L_1204B9F5:
    PUSH32(esp, MEM32(ebx + 0x25C)); /* 0x1204B9F5: push dword ptr [ebx + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204B9FB: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0x120014BCu; /* 0x1204BA00: mov dword ptr [esp], 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204BA07: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1204BA09: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1204BA0B: pop edx */
    eax = esi; /* 0x1204BA0C: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204BA0E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204BA10: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204BA13: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204BA15: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204BA17: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204BA18: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204BA1D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204BA1E: pop ecx */
    MEM32(ebx + 0x25C) = eax; /* 0x1204BA1F: mov dword ptr [ebx + 0x25c], eax */
    /* test eax, eax */ /* 0x1204BA25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204BA30; /* 0x1204BA27: jne 0x1204ba30 */
L_1204BA29:
    edi = 0x8007000Eu; /* 0x1204BA29: mov edi, 0x8007000e */
    goto L_1204BA48; /* 0x1204BA2E: jmp 0x1204ba48 */
L_1204BA30:
    ecx = esi; /* 0x1204BA30: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1204BA32: imul ecx, ecx, 0x14 */
    PUSH32(esp, ecx); /* 0x1204BA35: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204BA36: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1204BA39: push eax */
L_1204BA3A:
    RECOMP_CALL(sub_121BF440); /* 0x1204BA3A: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x260) = esi; /* 0x1204BA3F: mov dword ptr [ebx + 0x260], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204BA45: add esp, 0xc */
    _flag_k = FK_ADD;
L_1204BA48:
    ebx = POP32_VAL(esp); /* 0x1204BA48: pop ebx */
L_1204BA49:
    eax = edi; /* 0x1204BA49: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204BA4B: pop edi */
    esi = POP32_VAL(esp); /* 0x1204BA4C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204BA4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204BA4E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204BA56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BA56u);

L_1204BA56:
    edi = edi; /* 0x1204BA56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BA58: push ebp */
    ebp = esp; /* 0x1204BA59: mov ebp, esp */
    edx = ecx; /* 0x1204BA5B: mov edx, ecx */
    PUSH32(esp, ebx); /* 0x1204BA5D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1204BA5E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204BA61: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204BA62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1204BA64: mov eax, ebx */
    PUSH32(esp, edi); /* 0x1204BA66: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400Eu);
    eax = eax & 0x400Eu; /* 0x1204BA67: and eax, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x18; /* 0x1204BA6C: lea edi, [edx + 0x18] */
    MEM32(edx) = ebx; /* 0x1204BA6F: mov dword ptr [edx], ebx */
    MEM32(edx + 0x8) = esi; /* 0x1204BA71: mov dword ptr [edx + 8], esi */
    MEM32(edx + 0xC) = esi; /* 0x1204BA74: mov dword ptr [edx + 0xc], esi */
    MEM32(edx + 0x10) = esi; /* 0x1204BA77: mov dword ptr [edx + 0x10], esi */
    MEM32(edx + 0x14) = esi; /* 0x1204BA7A: mov dword ptr [edx + 0x14], esi */
    MEM32(edx + 0x38) = esi; /* 0x1204BA7D: mov dword ptr [edx + 0x38], esi */
    MEM32(edx + 0x3C) = esi; /* 0x1204BA80: mov dword ptr [edx + 0x3c], esi */
    ecx = esi; /* 0x1204BA83: mov ecx, esi */
    MEM32(edi) = esi; /* 0x1204BA85: mov dword ptr [edi], esi */
    /* cmp eax, 2 */ /* 0x1204BA87: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BA90; /* 0x1204BA8A: jne 0x1204ba90 */
L_1204BA8C:
    PUSH32(esp, 0xCu); /* 0x1204BA8C: push 0xc */
    goto L_1204BA97; /* 0x1204BA8E: jmp 0x1204ba97 */
L_1204BA90:
    /* cmp eax, 4 */ /* 0x1204BA90: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BA9A; /* 0x1204BA93: jne 0x1204ba9a */
L_1204BA95:
    PUSH32(esp, 0x10u); /* 0x1204BA95: push 0x10 */
L_1204BA97:
    ecx = POP32_VAL(esp); /* 0x1204BA97: pop ecx */
    goto L_1204BAAE; /* 0x1204BA98: jmp 0x1204baae */
L_1204BA9A:
    /* cmp eax, 6 */ /* 0x1204BA9A: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BAAE; /* 0x1204BA9D: jb 0x1204baae */
L_1204BA9F:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1204BA9F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1204BA9F: shr eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1204BAA1: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(edx + 0x38) = eax; /* 0x1204BAA4: mov dword ptr [edx + 0x38], eax */
    ecx = eax * 4 + 0xC; /* 0x1204BAA7: lea ecx, [eax*4 + 0xc] */
L_1204BAAE:
    /* test LO8(ebx), 0x10u */ /* 0x1204BAAE: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BAB9; /* 0x1204BAB1: je 0x1204bab9 */
L_1204BAB3:
    MEM32(edx + 0x8) = ecx; /* 0x1204BAB3: mov dword ptr [edx + 8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1204BAB6: add ecx, 0xc */
    _flag_k = FK_ADD;
L_1204BAB9:
    /* test LO8(ebx), 0x20u */ /* 0x1204BAB9: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BAC4; /* 0x1204BABC: je 0x1204bac4 */
L_1204BABE:
    MEM32(edx + 0xC) = ecx; /* 0x1204BABE: mov dword ptr [edx + 0xc], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204BAC1: add ecx, 4 */
    _flag_k = FK_ADD;
L_1204BAC4:
    /* test LO8(ebx), 0x40u */ /* 0x1204BAC4: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BACF; /* 0x1204BAC7: je 0x1204bacf */
L_1204BAC9:
    MEM32(edx + 0x10) = ecx; /* 0x1204BAC9: mov dword ptr [edx + 0x10], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204BACC: add ecx, 4 */
    _flag_k = FK_ADD;
L_1204BACF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1204BACF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204BAD9; /* 0x1204BAD1: jns 0x1204bad9 */
L_1204BAD3:
    MEM32(edx + 0x14) = ecx; /* 0x1204BAD3: mov dword ptr [edx + 0x14], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204BAD6: add ecx, 4 */
    _flag_k = FK_ADD;
L_1204BAD9:
    /* test ebx, 0xF00u */ /* 0x1204BAD9: test ebx, 0xf00 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BB1C; /* 0x1204BADF: je 0x1204bb1c */
L_1204BAE1:
    eax = ebx; /* 0x1204BAE1: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1204BAE3: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1204BAE3: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1204BAE6: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ecx; /* 0x1204BAE9: mov dword ptr [edi], ecx */
    MEM32(edx + 0x3C) = eax; /* 0x1204BAEB: mov dword ptr [edx + 0x3c], eax */
    /* cmp eax, 8 */ /* 0x1204BAEE: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204BAFA; /* 0x1204BAF1: jbe 0x1204bafa */
L_1204BAF3:
    MEM32(edx + 0x3C) = 8; /* 0x1204BAF3: mov dword ptr [edx + 0x3c], 8 */
L_1204BAFA:
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x1204BAFA: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x1204BAFA: shr ebx, 0x10 */
    /* cmp MEM32(edx + 0x3C), esi */ /* 0x1204BAFD: cmp dword ptr [edx + 0x3c], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x3C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204BB1C; /* 0x1204BB00: jbe 0x1204bb1c */
L_1204BB02:
    eax = ebx; /* 0x1204BB02: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1204BB04: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ecx; /* 0x1204BB07: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x120060A8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x120060A8); /* 0x1204BB09: add ecx, dword ptr [eax*4 + 0x120060a8] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x1204BB10: shr ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 2u; /* 0x1204BB10: shr ebx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204BB13: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1204BB14: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x3C) */ /* 0x1204BB17: cmp esi, dword ptr [edx + 0x3c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BB02; /* 0x1204BB1A: jb 0x1204bb02 */
L_1204BB1C:
    edi = POP32_VAL(esp); /* 0x1204BB1C: pop edi */
    esi = POP32_VAL(esp); /* 0x1204BB1D: pop esi */
    MEM32(edx + 0x4) = ecx; /* 0x1204BB1E: mov dword ptr [edx + 4], ecx */
    eax = edx; /* 0x1204BB21: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1204BB23: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204BB24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BB25: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BB2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BB2Du);

L_1204BB2D:
    edi = edi; /* 0x1204BB2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BB2F: push ebp */
    ebp = esp; /* 0x1204BB30: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1204BB32: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204BB35: push ebx */
    PUSH32(esp, esi); /* 0x1204BB36: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204BB37: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204BB39: push edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1204BB3A: mov dword ptr [ebp - 0x14], ecx */
    ebx = esi; /* 0x1204BB3D: mov ebx, esi */
    edi = esi; /* 0x1204BB3F: mov edi, esi */
    /* cmp MEM32(ecx + 0x264), esi */ /* 0x1204BB41: cmp dword ptr [ecx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BB5D; /* 0x1204BB47: jne 0x1204bb5d */
L_1204BB49:
    eax = MEM32(ebp + 0xC); /* 0x1204BB49: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1204BB4C: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x8); /* 0x1204BB4E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1204BB51: mov dword ptr [eax], esi */
    esi = 0x80004005u; /* 0x1204BB53: mov esi, 0x80004005 */
    goto L_1204BC56; /* 0x1204BB58: jmp 0x1204bc56 */
L_1204BB5D:
    PUSH32(esp, 0xAu); /* 0x1204BB5D: push 0xa */
    eax = POP32_VAL(esp); /* 0x1204BB5F: pop eax */
    PUSH32(esp, 0x120014BCu); /* 0x1204BB60: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204BB65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204BB67: push 4 */
    edx = POP32_VAL(esp); /* 0x1204BB69: pop edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204BB6A: mov dword ptr [ebp - 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204BB6D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204BB6F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204BB72: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204BB74: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204BB76: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204BB77: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1204BB7C: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1204BB7E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204BB7F: pop ecx */
    /* test edi, edi */ /* 0x1204BB80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BC66; /* 0x1204BB82: je 0x1204bc66 */
L_1204BB88:
    ecx = MEM32(ebp + (-0x14)); /* 0x1204BB88: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1204BB8B: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1204BB8E: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ecx + 0x264), esi */ /* 0x1204BB91: cmp dword ptr [ecx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204BC4A; /* 0x1204BB97: jbe 0x1204bc4a */
L_1204BB9D:
    MEM32(ebp + (-0x8)) = esi; /* 0x1204BB9D: mov dword ptr [ebp - 8], esi */
L_1204BBA0:
    edx = MEM32(ebp + (-0x8)); /* 0x1204BBA0: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ecx + 0x24C); /* 0x1204BBA3: mov eax, dword ptr [ecx + 0x24c] */
    /* cmp MEM16(edx + eax), 0xFFFFu */ /* 0x1204BBA9: cmp word ptr [edx + eax], 0xffff */
    _flag_a = (uint32_t)(MEM16(edx + eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0x4)); /* 0x1204BBAF: mov edx, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BC33; /* 0x1204BBB2: je 0x1204bc33 */
L_1204BBB4:
    eax = MEM32(ecx + 0x254); /* 0x1204BBB4: mov eax, dword ptr [ecx + 0x254] */
    edx = MEM32(eax + edx * 4); /* 0x1204BBBA: mov edx, dword ptr [eax + edx*4] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1204BBBD: mov dword ptr [ebp - 0x1c], edx */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x1204BBC0: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BBC9; /* 0x1204BBC3: jne 0x1204bbc9 */
L_1204BBC5:
    /* test ebx, ebx */ /* 0x1204BBC5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204BC33; /* 0x1204BBC7: jne 0x1204bc33 */
L_1204BBC9:
    MEM32(ebp + (-0xC)) = edx; /* 0x1204BBC9: mov dword ptr [ebp - 0xc], edx */
    eax = esi; /* 0x1204BBCC: mov eax, esi */
    /* test ebx, ebx */ /* 0x1204BBCE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BBDC; /* 0x1204BBD0: je 0x1204bbdc */
L_1204BBD2:
    /* cmp MEM32(edi + eax * 4), edx */ /* 0x1204BBD2: cmp dword ptr [edi + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BBDC; /* 0x1204BBD5: je 0x1204bbdc */
L_1204BBD7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204BBD7: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x1204BBD8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BBD2; /* 0x1204BBDA: jb 0x1204bbd2 */
L_1204BBDC:
    /* cmp eax, ebx */ /* 0x1204BBDC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BC33; /* 0x1204BBDE: jne 0x1204bc33 */
L_1204BBE0:
    eax = MEM32(ebp + (-0x10)); /* 0x1204BBE0: mov eax, dword ptr [ebp - 0x10] */
    /* cmp ebx, eax */ /* 0x1204BBE3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BC2F; /* 0x1204BBE5: jne 0x1204bc2f */
L_1204BBE7:
    PUSH32(esp, 0x120014BCu); /* 0x1204BBE7: push 0x120014bc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204BBEC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204BBEE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204BBF0: push 4 */
    edx = POP32_VAL(esp); /* 0x1204BBF2: pop edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204BBF3: mov dword ptr [ebp - 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204BBF6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204BBF8: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204BBFB: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204BBFD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204BBFF: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204BC00: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204BC05: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204BC06: pop ecx */
    ecx = eax; /* 0x1204BC07: mov ecx, eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1204BC09: mov dword ptr [ebp - 0x18], ecx */
    /* test ecx, ecx */ /* 0x1204BC0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BC66; /* 0x1204BC0E: je 0x1204bc66 */
L_1204BC10:
    eax = ebx; /* 0x1204BC10: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204BC12: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204BC12: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204BC15: push eax */
    PUSH32(esp, edi); /* 0x1204BC16: push edi */
    PUSH32(esp, ecx); /* 0x1204BC17: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x1204BC18: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1204BC1D: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1204BC1E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x18)); /* 0x1204BC23: mov edi, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1204BC26: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1204BC29: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1204BC2C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1204BC2F:
    MEM32(edi + ebx * 4) = edx; /* 0x1204BC2F: mov dword ptr [edi + ebx*4], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204BC32: inc ebx */
    _flag_k = FK_INC;
L_1204BC33:
    eax = MEM32(ebp + (-0x4)); /* 0x1204BC33: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 6; /* 0x1204BC36: add dword ptr [ebp - 8], 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204BC3A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204BC3B: mov dword ptr [ebp - 4], eax */
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204BC3E: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BBA0; /* 0x1204BC44: jb 0x1204bba0 */
L_1204BC4A:
    ecx = MEM32(ebp + 0x8); /* 0x1204BC4A: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = edi; /* 0x1204BC4D: mov dword ptr [ecx], edi */
    ecx = MEM32(ebp + 0xC); /* 0x1204BC4F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = ebx; /* 0x1204BC52: mov dword ptr [ecx], ebx */
    edi = esi; /* 0x1204BC54: mov edi, esi */
L_1204BC56:
    PUSH32(esp, edi); /* 0x1204BC56: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1204BC57: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204BC5C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1204BC5D: pop edi */
    eax = esi; /* 0x1204BC5E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1204BC60: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204BC61: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204BC62: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204BC63: ret 8 */
L_1204BC66:
    esi = 0x8007000Eu; /* 0x1204BC66: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1204BC56; /* 0x1204BC6B: jmp 0x1204bc56 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204BC72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BC72u);

L_1204BC72:
    edi = edi; /* 0x1204BC72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BC74: push ebp */
    ebp = esp; /* 0x1204BC75: mov ebp, esp */
    eax = ecx; /* 0x1204BC77: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1204BC79: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x3C) */ /* 0x1204BC7C: cmp ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204BC95; /* 0x1204BC7F: jae 0x1204bc95 */
L_1204BC81:
    eax = MEM32(eax); /* 0x1204BC81: mov eax, dword ptr [eax] */
    ecx = ecx + ecx + 0x10; /* 0x1204BC83: lea ecx, [ecx + ecx + 0x10] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1204BC87: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1204BC87: shr eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1204BC89: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax * 4 + 0x120060A8); /* 0x1204BC8C: mov eax, dword ptr [eax*4 + 0x120060a8] */
    goto L_1204BC97; /* 0x1204BC93: jmp 0x1204bc97 */
L_1204BC95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204BC95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204BC97:
    ebp = POP32_VAL(esp); /* 0x1204BC97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BC98: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BCA0u);

L_1204BCA0:
    edi = edi; /* 0x1204BCA0: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204BCA2: push esi */
    esi = ecx; /* 0x1204BCA3: mov esi, ecx */
    ecx = MEM32(esi + 0x8); /* 0x1204BCA5: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1204BCA8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204BCA9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x12006150u; /* 0x1204BCAB: mov dword ptr [esi], 0x12006150 */
    /* test ecx, ecx */ /* 0x1204BCB1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BCBE; /* 0x1204BCB3: je 0x1204bcbe */
L_1204BCB5:
    eax = MEM32(ecx); /* 0x1204BCB5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BCB7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204BCB8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = edi; /* 0x1204BCBB: mov dword ptr [esi + 8], edi */
L_1204BCBE:
    ecx = MEM32(esi + 0x22C); /* 0x1204BCBE: mov ecx, dword ptr [esi + 0x22c] */
    /* test ecx, ecx */ /* 0x1204BCC4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BCD4; /* 0x1204BCC6: je 0x1204bcd4 */
L_1204BCC8:
    eax = MEM32(ecx); /* 0x1204BCC8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BCCA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204BCCB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x22C) = edi; /* 0x1204BCCE: mov dword ptr [esi + 0x22c], edi */
L_1204BCD4:
    ecx = MEM32(esi + 0x230); /* 0x1204BCD4: mov ecx, dword ptr [esi + 0x230] */
    /* test ecx, ecx */ /* 0x1204BCDA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BCEA; /* 0x1204BCDC: je 0x1204bcea */
L_1204BCDE:
    eax = MEM32(ecx); /* 0x1204BCDE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BCE0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204BCE1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x230) = edi; /* 0x1204BCE4: mov dword ptr [esi + 0x230], edi */
L_1204BCEA:
    ecx = MEM32(esi + 0x234); /* 0x1204BCEA: mov ecx, dword ptr [esi + 0x234] */
    /* test ecx, ecx */ /* 0x1204BCF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BD00; /* 0x1204BCF2: je 0x1204bd00 */
L_1204BCF4:
    eax = MEM32(ecx); /* 0x1204BCF4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BCF6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204BCF7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x234) = edi; /* 0x1204BCFA: mov dword ptr [esi + 0x234], edi */
L_1204BD00:
    ecx = MEM32(esi + 0x248); /* 0x1204BD00: mov ecx, dword ptr [esi + 0x248] */
    /* test ecx, ecx */ /* 0x1204BD06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BD16; /* 0x1204BD08: je 0x1204bd16 */
L_1204BD0A:
    eax = MEM32(ecx); /* 0x1204BD0A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BD0C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204BD0D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x248) = edi; /* 0x1204BD10: mov dword ptr [esi + 0x248], edi */
L_1204BD16:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1204BD16: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BD1C: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1204BD21: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BD27: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1204BD2C: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BD32: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204BD37: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BD3D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1204BD42: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BD48: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1204BD4D: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1204BD50: pop edi */
    esi = POP32_VAL(esp); /* 0x1204BD51: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204BD52: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204BD58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BD58u);

L_1204BD58:
    edi = edi; /* 0x1204BD58: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BD5A: push ebp */
    ebp = esp; /* 0x1204BD5B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204BD5D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x274); /* 0x1204BD60: mov ecx, dword ptr [eax + 0x274] */
    /* test ecx, ecx */ /* 0x1204BD66: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204BD72; /* 0x1204BD68: je 0x1204bd72 */
L_1204BD6A:
    eax = MEM32(ecx); /* 0x1204BD6A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204BD6C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1204BD6D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1204BD7E; /* 0x1204BD70: jmp 0x1204bd7e */
L_1204BD72:
    _flag_a = (uint32_t)(MEM32(eax + 0x26C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x26C) = MEM32(eax + 0x26C) + 1; /* 0x1204BD72: inc dword ptr [eax + 0x26c] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x26C); /* 0x1204BD78: mov eax, dword ptr [eax + 0x26c] */
L_1204BD7E:
    ebp = POP32_VAL(esp); /* 0x1204BD7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BD7F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BD87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BD87u);

L_1204BD87:
    edi = edi; /* 0x1204BD87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BD89: push ebp */
    ebp = esp; /* 0x1204BD8A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204BD8C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x234); /* 0x1204BD8F: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x1204BD95: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204BD97: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1204BD98: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204BD9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BD9C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BDA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BDA4u);

L_1204BDA4:
    edi = edi; /* 0x1204BDA4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BDA6: push ebp */
    ebp = esp; /* 0x1204BDA7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204BDA9: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x248); /* 0x1204BDAC: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x1204BDB2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1204BDB4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1204BDB5: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204BDB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BDB9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BDC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BDC1u);

L_1204BDC1:
    edi = edi; /* 0x1204BDC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BDC3: push ebp */
    ebp = esp; /* 0x1204BDC4: mov ebp, esp */
    /* test MEM8(ebp + 0xC), 0x10u */ /* 0x1204BDC6: test byte ptr [ebp + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1204BDCA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204BDCB: mov esi, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204BDF1; /* 0x1204BDCE: jne 0x1204bdf1 */
L_1204BDD0:
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204BDD0: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204BDD6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x25C) = MEM32(esi + 0x25C) & 0; /* 0x1204BDDB: and dword ptr [esi + 0x25c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x260)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x260) = MEM32(esi + 0x260) & 0; /* 0x1204BDE2: and dword ptr [esi + 0x260], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x218)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x218) = MEM32(esi + 0x218) & 0xFFFFFFEFu; /* 0x1204BDE9: and dword ptr [esi + 0x218], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204BDF0: pop ecx */
L_1204BDF1:
    ecx = MEM32(esi + 0x254); /* 0x1204BDF1: mov ecx, dword ptr [esi + 0x254] */
    eax = MEM32(ebp + 0x10); /* 0x1204BDF7: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x1204BDFA: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x270)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x270) = MEM32(esi + 0x270) + 1; /* 0x1204BDFC: inc dword ptr [esi + 0x270] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204BE02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204BE04: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204BE05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204BE06: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204BE0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BE0Eu);

L_1204BE0E:
    edi = edi; /* 0x1204BE0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BE10: push ebp */
    ebp = esp; /* 0x1204BE11: mov ebp, esp */
    ecx = MEM32(ecx); /* 0x1204BE13: mov ecx, dword ptr [ecx] */
    goto L_1204BE2C; /* 0x1204BE15: jmp 0x1204be2c */
L_1204BE17:
    eax = (uint32_t)MEM8(ecx + 0x6); /* 0x1204BE17: movzx eax, byte ptr [ecx + 6] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1204BE1B: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BE29; /* 0x1204BE1E: jne 0x1204be29 */
L_1204BE20:
    eax = (uint32_t)MEM8(ecx + 0x7); /* 0x1204BE20: movzx eax, byte ptr [ecx + 7] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204BE24: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BE39; /* 0x1204BE27: je 0x1204be39 */
L_1204BE29:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204BE29: add ecx, 8 */
    _flag_k = FK_ADD;
L_1204BE2C:
    /* cmp MEM16(ecx), 0xFFu */ /* 0x1204BE2C: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BE17; /* 0x1204BE31: jne 0x1204be17 */
L_1204BE33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204BE33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204BE35:
    ebp = POP32_VAL(esp); /* 0x1204BE35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204BE36: ret 8 */
L_1204BE39:
    eax = ecx; /* 0x1204BE39: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1204BE35; /* 0x1204BE3B: jmp 0x1204be35 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204BE42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BE42u);

L_1204BE42:
    edi = edi; /* 0x1204BE42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BE44: push ebp */
    ebp = esp; /* 0x1204BE45: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204BE47: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + edx * 4 + 0x48); /* 0x1204BE4A: mov eax, dword ptr [ecx + edx*4 + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x1204BE4E: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4 + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + edx * 4 + 0x8); /* 0x1204BE52: add eax, dword ptr [ecx + edx*4 + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1204BE56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204BE57: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204BE5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BE5Fu);

L_1204BE5F:
    edi = edi; /* 0x1204BE5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BE61: push ebp */
    ebp = esp; /* 0x1204BE62: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204BE64: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x264); /* 0x1204BE67: mov eax, dword ptr [eax + 0x264] */
    ebp = POP32_VAL(esp); /* 0x1204BE6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BE6E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BE76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BE76u);

L_1204BE76:
    edi = edi; /* 0x1204BE76: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BE78: push ebp */
    ebp = esp; /* 0x1204BE79: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204BE7B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x238); /* 0x1204BE7E: mov eax, dword ptr [eax + 0x238] */
    ebp = POP32_VAL(esp); /* 0x1204BE84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204BE85: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204BE8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BE8Du);

L_1204BE8D:
    edi = edi; /* 0x1204BE8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BE8F: push ebp */
    ebp = esp; /* 0x1204BE90: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1204BE92: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1204BE95: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1204BE9A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204BE9C: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1204BE9F: push ebx */
    PUSH32(esp, esi); /* 0x1204BEA0: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204BEA1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204BEA3: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1204BEA4: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1204BEA7: mov esi, ecx */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1204BEA9: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BECD; /* 0x1204BEAC: je 0x1204becd */
L_1204BEAE:
    eax = MEM32(esi + 0x10C); /* 0x1204BEAE: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, MEM32(esi + 0x184)); /* 0x1204BEB4: push dword ptr [esi + 0x184] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1204BEBA: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xCC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xCC); /* 0x1204BEBD: add eax, dword ptr [esi + 0xcc] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1204BEC3: push ebx */
    PUSH32(esp, eax); /* 0x1204BEC4: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204BEC5: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204BECA: add esp, 0xc */
    _flag_k = FK_ADD;
L_1204BECD:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1204BECD: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp MEM32(esi + 0x188), ebx */ /* 0x1204BED0: cmp dword ptr [esi + 0x188], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x188)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204BF51; /* 0x1204BED6: jbe 0x1204bf51 */
L_1204BED8:
    ebx = esi + 0x18C; /* 0x1204BED8: lea ebx, [esi + 0x18c] */
L_1204BEDE:
    PUSH32(esp, 4); /* 0x1204BEDE: push 4 */
    eax = ebp + (-0x14); /* 0x1204BEE0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1204BEE3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1204BEE4: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1204BEE7: mov ecx, esi */
    PUSH32(esp, MEM32(ebx)); /* 0x1204BEE9: push dword ptr [ebx] */
    RECOMP_CALL(sub_120BD342); /* 0x1204BEEB: call 0x120bd342 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1204BEF0: mov eax, dword ptr [ebx] */
    /* cmp MEM8(eax + 0x6), 1 */ /* 0x1204BEF2: cmp byte ptr [eax + 6], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BF27; /* 0x1204BEF6: jne 0x1204bf27 */
L_1204BEF8:
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x1204BEF8: mov al, byte ptr [eax + 4] */
    /* cmp LO8(eax), 2 */ /* 0x1204BEFB: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1204BF27; /* 0x1204BEFD: ja 0x1204bf27 */
L_1204BEFF:
    fp_push(0.0); /* 0x1204BEFF: fldz  */
    eax = (uint32_t)LO8(eax); /* 0x1204BF01: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204BF04: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1204BF05: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); /* 0x1204BF08: push 0 */
    ecx = POP32_VAL(esp); /* 0x1204BF0A: pop ecx */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1204BF1C; /* 0x1204BF0B: je 0x1204bf1c */
L_1204BF0D:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x14))); /* 0x1204BF0D: fld dword ptr [ebp + ecx*4 - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204BF11: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1204BF12: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1204BF15: fstp dword ptr [ebp - 0x18] */
    /* cmp ecx, eax */ /* 0x1204BF18: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BF0D; /* 0x1204BF1A: jb 0x1204bf0d */
L_1204BF1C:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204BF1C: fld dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x1204BF1F: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1204BF21: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x14)) = _v; } /* 0x1204BF23: fstp dword ptr [ebp + eax*4 - 0x14] */
L_1204BF27:
    PUSH32(esp, 4); /* 0x1204BF27: push 4 */
    eax = ebp + (-0x14); /* 0x1204BF29: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1204BF2C: push eax */
    PUSH32(esp, edi); /* 0x1204BF2D: push edi */
    PUSH32(esp, MEM32(ebx + 0x104)); /* 0x1204BF2E: push dword ptr [ebx + 0x104] */
    ecx = esi + 0xC4; /* 0x1204BF34: lea ecx, [esi + 0xc4] */
    RECOMP_CALL(sub_120BD76B); /* 0x1204BF3A: call 0x120bd76b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1204BF3F: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204BF42: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204BF43: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204BF46: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, MEM32(esi + 0x188) */ /* 0x1204BF49: cmp eax, dword ptr [esi + 0x188] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x188));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204BEDE; /* 0x1204BF4F: jb 0x1204bede */
L_1204BF51:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204BF51: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1204BF54: pop edi */
    esi = POP32_VAL(esp); /* 0x1204BF55: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1204BF56: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1204BF58: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1204BF59: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204BF5E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204BF5F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204BF67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BF67u);

L_1204BF67:
    edi = edi; /* 0x1204BF67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BF69: push ebp */
    ebp = esp; /* 0x1204BF6A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1204BF6C: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1204BF6F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204BF72: push edi */
    edi = 0xFFu; /* 0x1204BF73: mov edi, 0xff */
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204BF78: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BFCB; /* 0x1204BF7B: je 0x1204bfcb */
L_1204BF7D:
    PUSH32(esp, esi); /* 0x1204BF7D: push esi */
    esi = edx; /* 0x1204BF7E: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1204BF80: sub esi, ecx */
    _flag_k = FK_CMP;
L_1204BF82:
    eax = (uint32_t)MEM16(edx); /* 0x1204BF82: movzx eax, word ptr [edx] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1204BF85: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BF88: je 0x1204bfc5 */
L_1204BF8A:
    /* cmp LO16(eax), MEM16(ecx) */ /* 0x1204BF8A: cmp ax, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204BF9A; /* 0x1204BF8D: je 0x1204bf9a */
L_1204BF8F:
    SET_LO16(eax, MEM16(esi + ecx + 0x2)); /* 0x1204BF8F: mov ax, word ptr [esi + ecx + 2] */
    /* cmp LO16(eax), MEM16(ecx + 0x2) */ /* 0x1204BF94: cmp ax, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BF98: jne 0x1204bfc5 */
L_1204BF9A:
    SET_LO8(eax, MEM8(edx + 0x4)); /* 0x1204BF9A: mov al, byte ptr [edx + 4] */
    /* cmp LO8(eax), MEM8(ecx + 0x4) */ /* 0x1204BF9D: cmp al, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x4)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BFA0: jne 0x1204bfc5 */
L_1204BFA2:
    SET_LO8(eax, MEM8(edx + 0x5)); /* 0x1204BFA2: mov al, byte ptr [edx + 5] */
    /* cmp LO8(eax), MEM8(ecx + 0x5) */ /* 0x1204BFA5: cmp al, byte ptr [ecx + 5] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x5)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BFA8: jne 0x1204bfc5 */
L_1204BFAA:
    SET_LO8(eax, MEM8(edx + 0x6)); /* 0x1204BFAA: mov al, byte ptr [edx + 6] */
    /* cmp LO8(eax), MEM8(ecx + 0x6) */ /* 0x1204BFAD: cmp al, byte ptr [ecx + 6] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x6)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BFB0: jne 0x1204bfc5 */
L_1204BFB2:
    SET_LO8(eax, MEM8(edx + 0x7)); /* 0x1204BFB2: mov al, byte ptr [edx + 7] */
    /* cmp LO8(eax), MEM8(ecx + 0x7) */ /* 0x1204BFB5: cmp al, byte ptr [ecx + 7] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x7)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFC5; /* 0x1204BFB8: jne 0x1204bfc5 */
L_1204BFBA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204BFBA: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204BFBD: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204BFC0: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BF82; /* 0x1204BFC3: jne 0x1204bf82 */
L_1204BFC5:
    esi = POP32_VAL(esp); /* 0x1204BFC5: pop esi */
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204BFC6: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFD5; /* 0x1204BFC9: jne 0x1204bfd5 */
L_1204BFCB:
    /* cmp MEM16(edx), LO16(edi) */ /* 0x1204BFCB: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204BFD5; /* 0x1204BFCE: jne 0x1204bfd5 */
L_1204BFD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204BFD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204BFD2: inc eax */
    _flag_k = FK_INC;
    goto L_1204BFD7; /* 0x1204BFD3: jmp 0x1204bfd7 */
L_1204BFD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204BFD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204BFD7:
    edi = POP32_VAL(esp); /* 0x1204BFD7: pop edi */
    ebp = POP32_VAL(esp); /* 0x1204BFD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204BFD9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204BFE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204BFE1u);

L_1204BFE1:
    edi = edi; /* 0x1204BFE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204BFE3: push ebp */
    ebp = esp; /* 0x1204BFE4: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1204BFE6: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1204BFE9: mov edx, dword ptr [ebp + 8] */
L_1204BFEC:
    eax = MEM32(ecx); /* 0x1204BFEC: mov eax, dword ptr [ecx] */
    /* cmp LO16(eax), 0xFFu */ /* 0x1204BFEE: cmp ax, 0xff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(edx) = eax; /* 0x1204BFF2: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x1204BFF4: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1204BFF7: mov dword ptr [edx + 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C004; /* 0x1204BFFA: je 0x1204c004 */
L_1204BFFC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204BFFC: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204BFFF: add edx, 8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1204BFEC; /* 0x1204C002: jmp 0x1204bfec */
L_1204C004:
    ebp = POP32_VAL(esp); /* 0x1204C004: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204C005: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204C00D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C00Du);

L_1204C00D:
    edi = edi; /* 0x1204C00D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C00F: push ebp */
    ebp = esp; /* 0x1204C010: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1204C012: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1204C015: push edi */
    edi = 0xFFu; /* 0x1204C016: mov edi, 0xff */
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204C01B: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C079; /* 0x1204C01E: je 0x1204c079 */
L_1204C020:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1204C020: mov al, byte ptr [ebp + 0xc] */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x1204C023: mov dl, byte ptr [ebp + 8] */
L_1204C026:
    /* cmp MEM8(ecx + 0x6), LO8(edx) */ /* 0x1204C026: cmp byte ptr [ecx + 6], dl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x6)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C030; /* 0x1204C029: jne 0x1204c030 */
L_1204C02B:
    /* cmp MEM8(ecx + 0x7), LO8(eax) */ /* 0x1204C02B: cmp byte ptr [ecx + 7], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x7)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C038; /* 0x1204C02E: je 0x1204c038 */
L_1204C030:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204C030: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204C033: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C026; /* 0x1204C036: jne 0x1204c026 */
L_1204C038:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204C038: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C079; /* 0x1204C03B: je 0x1204c079 */
L_1204C03D:
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x1204C03D: movzx eax, byte ptr [ecx + 4] */
    SET_LO8(eax, MEM8(eax + 0x120060B8)); /* 0x1204C041: mov al, byte ptr [eax + 0x120060b8] */
    edx = ecx; /* 0x1204C047: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204C049: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204C04C: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C06F; /* 0x1204C04F: je 0x1204c06f */
L_1204C051:
    PUSH32(esp, esi); /* 0x1204C051: push esi */
    esi = (uint32_t)LO8(eax); /* 0x1204C052: movzx esi, al */
L_1204C055:
    eax = MEM32(ecx); /* 0x1204C055: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x1204C057: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x1204C059: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(MEM16(edx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM16(edx + 0x2) = (uint16_t)(MEM16(edx + 0x2) - LO16(esi)); /* 0x1204C05C: sub word ptr [edx + 2], si */
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(edx + 0x4) = eax; /* 0x1204C060: mov dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1204C063: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204C066: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1204C069: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C055; /* 0x1204C06C: jne 0x1204c055 */
L_1204C06E:
    esi = POP32_VAL(esp); /* 0x1204C06E: pop esi */
L_1204C06F:
    eax = MEM32(ecx); /* 0x1204C06F: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x1204C071: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x1204C073: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1204C076: mov dword ptr [edx + 4], eax */
L_1204C079:
    edi = POP32_VAL(esp); /* 0x1204C079: pop edi */
    ebp = POP32_VAL(esp); /* 0x1204C07A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204C07B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204C083(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C083u);

L_1204C083:
    edi = edi; /* 0x1204C083: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C085: push ebp */
    ebp = esp; /* 0x1204C086: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204C088: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204C089: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204C08B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1204C08C: mov esi, dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x1204C08F: mov ecx, ebx */
    edx = 0xFFu; /* 0x1204C091: mov edx, 0xff */
    goto L_1204C0AB; /* 0x1204C096: jmp 0x1204c0ab */
L_1204C098:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1204C098: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204C0B0; /* 0x1204C09B: jae 0x1204c0b0 */
L_1204C09D:
    eax = (uint32_t)MEM8(esi + 0x4); /* 0x1204C09D: movzx eax, byte ptr [esi + 4] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x120060B8)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + MEM8(eax + 0x120060B8)); /* 0x1204C0A1: add bl, byte ptr [eax + 0x120060b8] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1204C0A7: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204C0AA: inc ecx */
    _flag_k = FK_INC;
L_1204C0AB:
    /* cmp MEM16(esi), LO16(edx) */ /* 0x1204C0AB: cmp word ptr [esi], dx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C098; /* 0x1204C0AE: jne 0x1204c098 */
L_1204C0B0:
    ecx = MEM32(ebp + 0xC); /* 0x1204C0B0: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM16(esi), LO16(edx) */ /* 0x1204C0B3: cmp word ptr [esi], dx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C0CF; /* 0x1204C0B6: jne 0x1204c0cf */
L_1204C0B8:
    eax = MEM32(esi); /* 0x1204C0B8: mov eax, dword ptr [esi] */
    MEM32(esi + 0x8) = eax; /* 0x1204C0BA: mov dword ptr [esi + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x1204C0BD: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0xC) = eax; /* 0x1204C0C0: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx); /* 0x1204C0C3: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x1204C0C5: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1204C0C7: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1204C0CA: mov dword ptr [esi + 4], eax */
    goto L_1204C12F; /* 0x1204C0CD: jmp 0x1204c12f */
L_1204C0CF:
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x1204C0CF: movzx eax, byte ptr [ecx + 4] */
    SET_LO8(edx, LO8(ebx)); /* 0x1204C0D3: mov dl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x120060B8)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + MEM8(eax + 0x120060B8)); /* 0x1204C0D5: add bl, byte ptr [eax + 0x120060b8] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(esi + 0x4); /* 0x1204C0DB: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x1204C0DE: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ecx); /* 0x1204C0E1: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1204C0E3: push edi */
    edi = MEM32(esi); /* 0x1204C0E4: mov edi, dword ptr [esi] */
    MEM32(esi) = eax; /* 0x1204C0E6: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x1204C0E8: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1204C0EB: mov dword ptr [esi + 4], eax */
    eax = (uint32_t)LO8(edx); /* 0x1204C0EE: movzx eax, dl */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1204C0F1: mov word ptr [esi + 2], ax */
    goto L_1204C112; /* 0x1204C0F5: jmp 0x1204c112 */
L_1204C0F7:
    ecx = MEM32(esi + 0x4); /* 0x1204C0F7: mov ecx, dword ptr [esi + 4] */
    edi = eax; /* 0x1204C0FA: mov edi, eax */
    eax = (uint32_t)LO8(ebx); /* 0x1204C0FC: movzx eax, bl */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1204C0FF: mov word ptr [esi + 2], ax */
    eax = (uint32_t)LO8(edx); /* 0x1204C103: movzx eax, dl */
    MEM32(esi + 0x4) = edx; /* 0x1204C106: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x120060B8)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + MEM8(eax + 0x120060B8)); /* 0x1204C109: add bl, byte ptr [eax + 0x120060b8] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + 0xC) = ecx; /* 0x1204C10F: mov dword ptr [ebp + 0xc], ecx */
L_1204C112:
    edx = MEM32(ebp + 0xC); /* 0x1204C112: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1204C115: add esi, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1204C118: mov eax, dword ptr [esi] */
    MEM32(esi) = edi; /* 0x1204C11A: mov dword ptr [esi], edi */
    /* cmp LO16(eax), 0xFFu */ /* 0x1204C11C: cmp ax, 0xff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C0F7; /* 0x1204C120: jne 0x1204c0f7 */
L_1204C122:
    MEM32(esi + 0x8) = eax; /* 0x1204C122: mov dword ptr [esi + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x1204C125: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0xC) = eax; /* 0x1204C128: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x4) = edx; /* 0x1204C12B: mov dword ptr [esi + 4], edx */
    edi = POP32_VAL(esp); /* 0x1204C12E: pop edi */
L_1204C12F:
    eax = (uint32_t)LO8(ebx); /* 0x1204C12F: movzx eax, bl */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1204C132: mov word ptr [esi + 2], ax */
    esi = POP32_VAL(esp); /* 0x1204C136: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204C137: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204C138: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204C139: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204C141(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C141u);

L_1204C141:
    edi = edi; /* 0x1204C141: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C143: push ebp */
    ebp = esp; /* 0x1204C144: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204C146: push ecx */
    PUSH32(esp, ecx); /* 0x1204C147: push ecx */
    PUSH32(esp, ebx); /* 0x1204C148: push ebx */
    PUSH32(esp, esi); /* 0x1204C149: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1204C14A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1204C14D: push esi */
    PUSH32(esp, 0); /* 0x1204C14E: push 0 */
    PUSH32(esp, 1); /* 0x1204C150: push 1 */
    RECOMP_CALL(sub_1204C00D); /* 0x1204C152: call 0x1204c00d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1204C157: push esi */
    PUSH32(esp, 0); /* 0x1204C158: push 0 */
    PUSH32(esp, 2); /* 0x1204C15A: push 2 */
    RECOMP_CALL(sub_1204C00D); /* 0x1204C15C: call 0x1204c00d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1204C161: push esi */
    RECOMP_CALL(sub_1204B510); /* 0x1204C162: call 0x1204b510 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1204C167: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1204C16A: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C16D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1204C16F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204C171: setne cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204C174: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C176: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1204C178: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204C17A: setne cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204C17D: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x41u */ /* 0x1204C17F: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C18B; /* 0x1204C182: jb 0x1204c18b */
L_1204C184:
    eax = 0x8876086Cu; /* 0x1204C184: mov eax, 0x8876086c */
    goto L_1204C1D4; /* 0x1204C189: jmp 0x1204c1d4 */
L_1204C18B:
    /* test edx, edx */ /* 0x1204C18B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C1AE; /* 0x1204C18D: je 0x1204c1ae */
L_1204C18F:
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebp + (-0x8)) = (uint16_t)(MEM16(ebp + (-0x8)) & 0); /* 0x1204C18F: and word ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, esi); /* 0x1204C194: push esi */
    eax = ebp + (-0x8); /* 0x1204C195: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1204C198: push eax */
    PUSH32(esp, 1); /* 0x1204C199: push 1 */
    MEM16(ebp + (-0x3)) = (uint16_t)(0x200u); /* 0x1204C19B: mov word ptr [ebp - 3], 0x200 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1204C1A1: mov byte ptr [ebp - 1], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1204C1A5: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_1204C083); /* 0x1204C1A9: call 0x1204c083 */
    RECOMP_FLAGS_IN();
L_1204C1AE:
    /* test ebx, ebx */ /* 0x1204C1AE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C1D2; /* 0x1204C1B0: je 0x1204c1d2 */
L_1204C1B2:
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebp + (-0x8)) = (uint16_t)(MEM16(ebp + (-0x8)) & 0); /* 0x1204C1B2: and word ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, esi); /* 0x1204C1B7: push esi */
    eax = ebp + (-0x8); /* 0x1204C1B8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1204C1BB: push eax */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) - 1); /* 0x1204C1BC: dec bl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    PUSH32(esp, 1); /* 0x1204C1BE: push 1 */
    MEM16(ebp + (-0x3)) = (uint16_t)(0x100u); /* 0x1204C1C0: mov word ptr [ebp - 3], 0x100 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1204C1C6: mov byte ptr [ebp - 1], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1204C1CA: mov byte ptr [ebp - 4], bl */
    RECOMP_CALL(sub_1204C083); /* 0x1204C1CD: call 0x1204c083 */
    RECOMP_FLAGS_IN();
L_1204C1D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C1D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204C1D4:
    esi = POP32_VAL(esp); /* 0x1204C1D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204C1D5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C1D6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204C1D7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204C1DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C1DFu);

L_1204C1DF:
    edi = edi; /* 0x1204C1DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C1E1: push ebp */
    ebp = esp; /* 0x1204C1E2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1204C1E4: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204C1E6: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204B4B3); /* 0x1204C1E9: call 0x1204b4b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1204C1EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204C1F9; /* 0x1204C1F0: jne 0x1204c1f9 */
L_1204C1F2:
    eax = 0x8876086Cu; /* 0x1204C1F2: mov eax, 0x8876086c */
    goto L_1204C26C; /* 0x1204C1F7: jmp 0x1204c26c */
L_1204C1F9:
    PUSH32(esp, edi); /* 0x1204C1F9: push edi */
    PUSH32(esp, 0); /* 0x1204C1FA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204C1FC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204B072); /* 0x1204C1FF: call 0x1204b072 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1204C204: mov edi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edi + 0x238) */ /* 0x1204C207: cmp eax, dword ptr [edi + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x238));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C216; /* 0x1204C20D: je 0x1204c216 */
L_1204C20F:
    eax = 0x8876086Cu; /* 0x1204C20F: mov eax, 0x8876086c */
    goto L_1204C26B; /* 0x1204C214: jmp 0x1204c26b */
L_1204C216:
    PUSH32(esp, esi); /* 0x1204C216: push esi */
    PUSH32(esp, 1); /* 0x1204C217: push 1 */
    RECOMP_CALL(sub_12019381); /* 0x1204C219: call 0x12019381 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x230); /* 0x1204C21E: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x1204C224: mov ecx, dword ptr [eax] */
    edx = ebp + 0x8; /* 0x1204C226: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1204C229: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204C22A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1204C22D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x158)); /* 0x1204C22E: call dword ptr [ecx + 0x158] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1204C234: push 0 */
    esi = eax; /* 0x1204C236: mov esi, eax */
    RECOMP_CALL(sub_12019381); /* 0x1204C238: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1204C23D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204C23F: pop esi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204C246; /* 0x1204C240: jns 0x1204c246 */
L_1204C242:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1204C242: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204C246:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204C246: push dword ptr [ebp + 0xc] */
    eax = edi + 0xC; /* 0x1204C249: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1204C24C: push eax */
    RECOMP_CALL(sub_1204BFE1); /* 0x1204C24D: call 0x1204bfe1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x1204C252: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x1204C255: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C263; /* 0x1204C257: je 0x1204c263 */
L_1204C259:
    eax = MEM32(ecx); /* 0x1204C259: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204C25B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1204C25C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0; /* 0x1204C25F: and dword ptr [edi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204C263:
    eax = MEM32(ebp + 0x8); /* 0x1204C263: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x8) = eax; /* 0x1204C266: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C269: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204C26B:
    edi = POP32_VAL(esp); /* 0x1204C26B: pop edi */
L_1204C26C:
    ebp = POP32_VAL(esp); /* 0x1204C26C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204C26D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204C275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C275u);

L_1204C275:
    edi = edi; /* 0x1204C275: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C277: push ebp */
    ebp = esp; /* 0x1204C278: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1204C27A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204C27D: push ebx */
    PUSH32(esp, esi); /* 0x1204C27E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204C27F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204C281: push edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1204C282: mov dword ptr [ebp - 0x14], ecx */
    ebx = esi; /* 0x1204C285: mov ebx, esi */
    edi = esi; /* 0x1204C287: mov edi, esi */
    /* cmp MEM32(ecx + 0x264), esi */ /* 0x1204C289: cmp dword ptr [ecx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C2A5; /* 0x1204C28F: jne 0x1204c2a5 */
L_1204C291:
    eax = MEM32(ebp + 0xC); /* 0x1204C291: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1204C294: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x8); /* 0x1204C296: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1204C299: mov dword ptr [eax], esi */
    esi = 0x80004005u; /* 0x1204C29B: mov esi, 0x80004005 */
    goto L_1204C39C; /* 0x1204C2A0: jmp 0x1204c39c */
L_1204C2A5:
    PUSH32(esp, 0xAu); /* 0x1204C2A5: push 0xa */
    eax = POP32_VAL(esp); /* 0x1204C2A7: pop eax */
    PUSH32(esp, 0x120014BCu); /* 0x1204C2A8: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C2AD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204C2AF: push 4 */
    edx = POP32_VAL(esp); /* 0x1204C2B1: pop edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204C2B2: mov dword ptr [ebp - 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204C2B5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204C2B7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204C2BA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204C2BC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204C2BE: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204C2BF: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1204C2C4: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1204C2C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204C2C7: pop ecx */
    /* test edi, edi */ /* 0x1204C2C8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C3AC; /* 0x1204C2CA: je 0x1204c3ac */
L_1204C2D0:
    ecx = MEM32(ebp + (-0x14)); /* 0x1204C2D0: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1204C2D3: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1204C2D6: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ecx + 0x264), esi */ /* 0x1204C2D9: cmp dword ptr [ecx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204C390; /* 0x1204C2DF: jbe 0x1204c390 */
L_1204C2E5:
    MEM32(ebp + (-0x8)) = esi; /* 0x1204C2E5: mov dword ptr [ebp - 8], esi */
L_1204C2E8:
    edx = MEM32(ebp + (-0x8)); /* 0x1204C2E8: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ecx + 0x24C); /* 0x1204C2EB: mov eax, dword ptr [ecx + 0x24c] */
    /* cmp MEM32(edx + eax), 0xFFFFFFFFu */ /* 0x1204C2F1: cmp dword ptr [edx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(edx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x4)); /* 0x1204C2F5: mov edx, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C379; /* 0x1204C2F8: je 0x1204c379 */
L_1204C2FA:
    eax = MEM32(ecx + 0x254); /* 0x1204C2FA: mov eax, dword ptr [ecx + 0x254] */
    edx = MEM32(eax + edx * 4); /* 0x1204C300: mov edx, dword ptr [eax + edx*4] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1204C303: mov dword ptr [ebp - 0x1c], edx */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x1204C306: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C30F; /* 0x1204C309: jne 0x1204c30f */
L_1204C30B:
    /* test ebx, ebx */ /* 0x1204C30B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204C379; /* 0x1204C30D: jne 0x1204c379 */
L_1204C30F:
    MEM32(ebp + (-0xC)) = edx; /* 0x1204C30F: mov dword ptr [ebp - 0xc], edx */
    eax = esi; /* 0x1204C312: mov eax, esi */
    /* test ebx, ebx */ /* 0x1204C314: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C322; /* 0x1204C316: je 0x1204c322 */
L_1204C318:
    /* cmp MEM32(edi + eax * 4), edx */ /* 0x1204C318: cmp dword ptr [edi + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C322; /* 0x1204C31B: je 0x1204c322 */
L_1204C31D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204C31D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x1204C31E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C318; /* 0x1204C320: jb 0x1204c318 */
L_1204C322:
    /* cmp eax, ebx */ /* 0x1204C322: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C379; /* 0x1204C324: jne 0x1204c379 */
L_1204C326:
    eax = MEM32(ebp + (-0x10)); /* 0x1204C326: mov eax, dword ptr [ebp - 0x10] */
    /* cmp ebx, eax */ /* 0x1204C329: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C375; /* 0x1204C32B: jne 0x1204c375 */
L_1204C32D:
    PUSH32(esp, 0x120014BCu); /* 0x1204C32D: push 0x120014bc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204C332: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C334: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204C336: push 4 */
    edx = POP32_VAL(esp); /* 0x1204C338: pop edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204C339: mov dword ptr [ebp - 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204C33C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204C33E: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204C341: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204C343: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204C345: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204C346: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204C34B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204C34C: pop ecx */
    ecx = eax; /* 0x1204C34D: mov ecx, eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1204C34F: mov dword ptr [ebp - 0x18], ecx */
    /* test ecx, ecx */ /* 0x1204C352: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C3AC; /* 0x1204C354: je 0x1204c3ac */
L_1204C356:
    eax = ebx; /* 0x1204C356: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204C358: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204C358: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204C35B: push eax */
    PUSH32(esp, edi); /* 0x1204C35C: push edi */
    PUSH32(esp, ecx); /* 0x1204C35D: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x1204C35E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1204C363: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1204C364: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x18)); /* 0x1204C369: mov edi, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1204C36C: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1204C36F: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1204C372: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1204C375:
    MEM32(edi + ebx * 4) = edx; /* 0x1204C375: mov dword ptr [edi + ebx*4], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204C378: inc ebx */
    _flag_k = FK_INC;
L_1204C379:
    eax = MEM32(ebp + (-0x4)); /* 0x1204C379: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0xCu; /* 0x1204C37C: add dword ptr [ebp - 8], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204C380: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204C381: mov dword ptr [ebp - 4], eax */
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204C384: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C2E8; /* 0x1204C38A: jb 0x1204c2e8 */
L_1204C390:
    ecx = MEM32(ebp + 0x8); /* 0x1204C390: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = edi; /* 0x1204C393: mov dword ptr [ecx], edi */
    ecx = MEM32(ebp + 0xC); /* 0x1204C395: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = ebx; /* 0x1204C398: mov dword ptr [ecx], ebx */
    edi = esi; /* 0x1204C39A: mov edi, esi */
L_1204C39C:
    PUSH32(esp, edi); /* 0x1204C39C: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1204C39D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204C3A2: pop ecx */
    edi = POP32_VAL(esp); /* 0x1204C3A3: pop edi */
    eax = esi; /* 0x1204C3A4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1204C3A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204C3A7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C3A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204C3A9: ret 8 */
L_1204C3AC:
    esi = 0x8007000Eu; /* 0x1204C3AC: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1204C39C; /* 0x1204C3B1: jmp 0x1204c39c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204C3B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C3B8u);

L_1204C3B8:
    edi = edi; /* 0x1204C3B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C3BA: push ebp */
    ebp = esp; /* 0x1204C3BB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204C3BD: push ebx */
    PUSH32(esp, esi); /* 0x1204C3BE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204C3BF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204C3C2: push edi */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1204C3C3: push dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204C3C6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204C3C8: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204C3C9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x1204C3CC: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xC); /* 0x1204C3D1: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x10); /* 0x1204C3D4: mov ebx, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x1204C3D7: mov ecx, dword ptr [esi + 4] */
    esi = MEM32(esi + 0x8); /* 0x1204C3DA: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1204C3DD: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204C3DF: imul ecx, ecx, 6 */
    esi = (uint32_t)((int32_t)esi * (int32_t)6); /* 0x1204C3E2: imul esi, esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x8); /* 0x1204C3E5: add esi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C3E8: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1204C3EB: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x1204C3ED: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    goto L_1204C40C; /* 0x1204C3F0: jmp 0x1204c40c */
L_1204C3F2:
    eax = (uint32_t)MEM16(ecx); /* 0x1204C3F2: movzx eax, word ptr [ecx] */
    /* cmp eax, edx */ /* 0x1204C3F5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C412; /* 0x1204C3F7: jb 0x1204c412 */
L_1204C3F9:
    /* cmp eax, ebx */ /* 0x1204C3F9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204C412; /* 0x1204C3FB: ja 0x1204c412 */
L_1204C3FD:
    edi = MEM32(ebp + 0x10); /* 0x1204C3FD: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1204C400: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1204C402: push 0 */
    MEM8(eax + edi) = (uint8_t)(1); /* 0x1204C404: mov byte ptr [eax + edi], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1204C408: add ecx, 2 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1204C40B: pop edi */
L_1204C40C:
    /* cmp ecx, esi */ /* 0x1204C40C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C3F2; /* 0x1204C40E: jb 0x1204c3f2 */
L_1204C410:
    goto L_1204C417; /* 0x1204C410: jmp 0x1204c417 */
L_1204C412:
    edi = 0x80004005u; /* 0x1204C412: mov edi, 0x80004005 */
L_1204C417:
    eax = edi; /* 0x1204C417: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204C419: pop edi */
    esi = POP32_VAL(esp); /* 0x1204C41A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204C41B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204C41C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204C41D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204C425(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C425u);

L_1204C425:
    edi = edi; /* 0x1204C425: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C427: push ebp */
    ebp = esp; /* 0x1204C428: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204C42A: push ebx */
    PUSH32(esp, esi); /* 0x1204C42B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204C42C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204C42F: push edi */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1204C430: push dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204C433: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204C435: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204C436: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x1204C439: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xC); /* 0x1204C43E: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x10); /* 0x1204C441: mov ebx, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x1204C444: mov ecx, dword ptr [esi + 4] */
    esi = MEM32(esi + 0x8); /* 0x1204C447: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1204C44A: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1204C44C: imul ecx, ecx, 0xc */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1204C44F: imul esi, esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x8); /* 0x1204C452: add esi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C455: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1204C458: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x1204C45A: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    goto L_1204C478; /* 0x1204C45D: jmp 0x1204c478 */
L_1204C45F:
    eax = MEM32(ecx); /* 0x1204C45F: mov eax, dword ptr [ecx] */
    /* cmp eax, edx */ /* 0x1204C461: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C47E; /* 0x1204C463: jb 0x1204c47e */
L_1204C465:
    /* cmp eax, ebx */ /* 0x1204C465: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204C47E; /* 0x1204C467: ja 0x1204c47e */
L_1204C469:
    edi = MEM32(ebp + 0x10); /* 0x1204C469: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1204C46C: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1204C46E: push 0 */
    MEM8(eax + edi) = (uint8_t)(1); /* 0x1204C470: mov byte ptr [eax + edi], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204C474: add ecx, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1204C477: pop edi */
L_1204C478:
    /* cmp ecx, esi */ /* 0x1204C478: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C45F; /* 0x1204C47A: jb 0x1204c45f */
L_1204C47C:
    goto L_1204C483; /* 0x1204C47C: jmp 0x1204c483 */
L_1204C47E:
    edi = 0x80004005u; /* 0x1204C47E: mov edi, 0x80004005 */
L_1204C483:
    eax = edi; /* 0x1204C483: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204C485: pop edi */
    esi = POP32_VAL(esp); /* 0x1204C486: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204C487: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204C488: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204C489: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204C491(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C491u);

L_1204C491:
    edi = edi; /* 0x1204C491: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C493: push ebp */
    ebp = esp; /* 0x1204C494: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1204C496: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1204C499: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1204C49C: push esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204C49D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204C49D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204C4A0: push eax */
    PUSH32(esp, 0); /* 0x1204C4A1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1204C4A3: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204C4A6: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204C4A9: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C4AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1204C4B0: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204C4B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C4B5: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C4B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1204C4BA: mov dword ptr [ebp - 8], esi */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1204C4BD: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204C547; /* 0x1204C4C0: jbe 0x1204c547 */
L_1204C4C6:
    edx = MEM32(ebp + 0x20); /* 0x1204C4C6: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1204C4C9: push ebx */
    PUSH32(esp, edi); /* 0x1204C4CA: push edi */
    edi = MEM32(ebp + 0x24); /* 0x1204C4CB: mov edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1204C4CE: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x1204C4D0: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x14)) = edx; /* 0x1204C4D3: mov dword ptr [ebp - 0x14], edx */
L_1204C4D6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1204C4D6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1204C4DA: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x18); /* 0x1204C4DD: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 3); /* 0x1204C4E0: push 3 */
    esi = POP32_VAL(esp); /* 0x1204C4E2: pop esi */
L_1204C4E3:
    ebx = (uint32_t)MEM16(edx); /* 0x1204C4E3: movzx ebx, word ptr [edx] */
    /* cmp MEM32(edi + ebx * 4), 0 */ /* 0x1204C4E6: cmp dword ptr [edi + ebx*4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + ebx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C4F6; /* 0x1204C4EA: jne 0x1204c4f6 */
L_1204C4EC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1204C4EC: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(edi + ebx * 4) = 1; /* 0x1204C4EF: mov dword ptr [edi + ebx*4], 1 */
L_1204C4F6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204C4F6: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204C4F9: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204C4E3; /* 0x1204C4FA: jne 0x1204c4e3 */
L_1204C4FC:
    esi = MEM32(ebp + (-0x8)); /* 0x1204C4FC: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + 0x24); /* 0x1204C4FF: mov edi, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x20); /* 0x1204C502: mov ebx, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1204C505: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + 0x10); /* 0x1204C508: mov edx, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1204C50B: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C556; /* 0x1204C50E: je 0x1204c556 */
L_1204C510:
    edx = MEM32(ebp + (-0x4)); /* 0x1204C510: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1204C513: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x1204C515: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204C553; /* 0x1204C518: ja 0x1204c553 */
L_1204C51A:
    edi = MEM32(ebp + (-0x10)); /* 0x1204C51A: mov edi, dword ptr [ebp - 0x10] */
    ecx = edx; /* 0x1204C51D: mov ecx, edx */
    edx = MEM32(ebp + (-0xC)); /* 0x1204C51F: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204C522: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204C523: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x1204C524: mov dword ptr [ebp + 8], edi */
    edi = MEM32(ebp + 0x24); /* 0x1204C527: mov edi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1204C52A: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1204C52D: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C4D6; /* 0x1204C530: jb 0x1204c4d6 */
L_1204C532:
    /* test eax, eax */ /* 0x1204C532: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C545; /* 0x1204C534: je 0x1204c545 */
L_1204C536:
    /* test ebx, ebx */ /* 0x1204C536: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C53D; /* 0x1204C538: je 0x1204c53d */
L_1204C53A:
    MEM32(ebx + esi * 4) = eax; /* 0x1204C53A: mov dword ptr [ebx + esi*4], eax */
L_1204C53D:
    /* test edi, edi */ /* 0x1204C53D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C544; /* 0x1204C53F: je 0x1204c544 */
L_1204C541:
    MEM32(edi + esi * 4) = ecx; /* 0x1204C541: mov dword ptr [edi + esi*4], ecx */
L_1204C544:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C544: inc esi */
    _flag_k = FK_INC;
L_1204C545:
    edi = POP32_VAL(esp); /* 0x1204C545: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204C546: pop ebx */
L_1204C547:
    eax = MEM32(ebp + 0x1C); /* 0x1204C547: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x1204C54A: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C54C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204C54E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C54F: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1204C550: ret 0x24 */
L_1204C553:
    edx = MEM32(ebp + 0x10); /* 0x1204C553: mov edx, dword ptr [ebp + 0x10] */
L_1204C556:
    /* test ebx, ebx */ /* 0x1204C556: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C563; /* 0x1204C558: je 0x1204c563 */
L_1204C55A:
    esi = MEM32(ebp + (-0x14)); /* 0x1204C55A: mov esi, dword ptr [ebp - 0x14] */
    MEM32(esi + edx) = eax; /* 0x1204C55D: mov dword ptr [esi + edx], eax */
    esi = MEM32(ebp + (-0x8)); /* 0x1204C560: mov esi, dword ptr [ebp - 8] */
L_1204C563:
    /* test edi, edi */ /* 0x1204C563: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C569; /* 0x1204C565: je 0x1204c569 */
L_1204C567:
    MEM32(edx) = ecx; /* 0x1204C567: mov dword ptr [edx], ecx */
L_1204C569:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1204C569: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); /* 0x1204C56C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1204C56E: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_121BF434); /* 0x1204C571: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x1204C576: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C579: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C57C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204C57D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C580: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1204C582: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + 0x10) = edx; /* 0x1204C585: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C588: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1204C4D6; /* 0x1204C58A: jmp 0x1204c4d6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204C594(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C594u);

L_1204C594:
    edi = edi; /* 0x1204C594: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C596: push ebp */
    ebp = esp; /* 0x1204C597: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1204C599: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1204C59C: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1204C59F: push esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204C5A0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204C5A0: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204C5A3: push eax */
    PUSH32(esp, 0); /* 0x1204C5A4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1204C5A6: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204C5A9: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204C5AC: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C5B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x1204C5B3: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204C5B6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C5B8: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C5BB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1204C5BD: mov dword ptr [ebp - 8], esi */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1204C5C0: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204C64D; /* 0x1204C5C3: jbe 0x1204c64d */
L_1204C5C9:
    edx = MEM32(ebp + 0x20); /* 0x1204C5C9: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1204C5CC: push ebx */
    PUSH32(esp, edi); /* 0x1204C5CD: push edi */
    edi = MEM32(ebp + 0x24); /* 0x1204C5CE: mov edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1204C5D1: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x1204C5D3: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x14)) = edx; /* 0x1204C5D6: mov dword ptr [ebp - 0x14], edx */
L_1204C5D9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1204C5D9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x1204C5DD: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x18); /* 0x1204C5E0: mov edx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x10)) = 3; /* 0x1204C5E3: mov dword ptr [ebp - 0x10], 3 */
    esi = MEM32(ebp + (-0x10)); /* 0x1204C5EA: mov esi, dword ptr [ebp - 0x10] */
L_1204C5ED:
    edi = MEM32(ebx); /* 0x1204C5ED: mov edi, dword ptr [ebx] */
    /* cmp MEM32(edx + edi * 4), 0 */ /* 0x1204C5EF: cmp dword ptr [edx + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C5FF; /* 0x1204C5F3: jne 0x1204c5ff */
L_1204C5F5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1204C5F5: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(edx + edi * 4) = 1; /* 0x1204C5F8: mov dword ptr [edx + edi*4], 1 */
L_1204C5FF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204C5FF: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204C602: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204C5ED; /* 0x1204C603: jne 0x1204c5ed */
L_1204C605:
    esi = MEM32(ebp + (-0x8)); /* 0x1204C605: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + 0x24); /* 0x1204C608: mov edi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1204C60B: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1204C60E: mov ebx, dword ptr [ebp + 0x20] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1204C611: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C65C; /* 0x1204C614: je 0x1204c65c */
L_1204C616:
    edx = MEM32(ebp + (-0x4)); /* 0x1204C616: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1204C619: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x1204C61B: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204C659; /* 0x1204C61E: ja 0x1204c659 */
L_1204C620:
    edi = MEM32(ebp + (-0x10)); /* 0x1204C620: mov edi, dword ptr [ebp - 0x10] */
    ecx = edx; /* 0x1204C623: mov ecx, edx */
    edx = MEM32(ebp + (-0xC)); /* 0x1204C625: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204C628: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204C629: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x1204C62A: mov dword ptr [ebp + 8], edi */
    edi = MEM32(ebp + 0x24); /* 0x1204C62D: mov edi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1204C630: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1204C633: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C5D9; /* 0x1204C636: jb 0x1204c5d9 */
L_1204C638:
    /* test eax, eax */ /* 0x1204C638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C64B; /* 0x1204C63A: je 0x1204c64b */
L_1204C63C:
    /* test ebx, ebx */ /* 0x1204C63C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C643; /* 0x1204C63E: je 0x1204c643 */
L_1204C640:
    MEM32(ebx + esi * 4) = eax; /* 0x1204C640: mov dword ptr [ebx + esi*4], eax */
L_1204C643:
    /* test edi, edi */ /* 0x1204C643: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C64A; /* 0x1204C645: je 0x1204c64a */
L_1204C647:
    MEM32(edi + esi * 4) = ecx; /* 0x1204C647: mov dword ptr [edi + esi*4], ecx */
L_1204C64A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C64A: inc esi */
    _flag_k = FK_INC;
L_1204C64B:
    edi = POP32_VAL(esp); /* 0x1204C64B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204C64C: pop ebx */
L_1204C64D:
    eax = MEM32(ebp + 0x1C); /* 0x1204C64D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x1204C650: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C652: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204C654: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C655: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1204C656: ret 0x24 */
L_1204C659:
    edx = MEM32(ebp + 0x18); /* 0x1204C659: mov edx, dword ptr [ebp + 0x18] */
L_1204C65C:
    /* test ebx, ebx */ /* 0x1204C65C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C66C; /* 0x1204C65E: je 0x1204c66c */
L_1204C660:
    esi = MEM32(ebp + (-0x14)); /* 0x1204C660: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + 0x10); /* 0x1204C663: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(esi + ebx) = eax; /* 0x1204C666: mov dword ptr [esi + ebx], eax */
    esi = MEM32(ebp + (-0x8)); /* 0x1204C669: mov esi, dword ptr [ebp - 8] */
L_1204C66C:
    /* test edi, edi */ /* 0x1204C66C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C675; /* 0x1204C66E: je 0x1204c675 */
L_1204C670:
    eax = MEM32(ebp + 0x10); /* 0x1204C670: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x1204C673: mov dword ptr [eax], ecx */
L_1204C675:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1204C675: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); /* 0x1204C678: push 0 */
    PUSH32(esp, edx); /* 0x1204C67A: push edx */
    RECOMP_CALL(sub_121BF434); /* 0x1204C67B: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x1204C680: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C684: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C687: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204C688: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1204C68A: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C68D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1204C5D9; /* 0x1204C68F: jmp 0x1204c5d9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204C699(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C699u);

L_1204C699:
    edi = edi; /* 0x1204C699: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C69B: push ebp */
    ebp = esp; /* 0x1204C69C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1204C69E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204C6A1: push ebx */
    PUSH32(esp, esi); /* 0x1204C6A2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204C6A3: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1204C6A6: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204C6A8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204C6A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204C6AB: push esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1204C6AC: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204C6AF: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1204C6B2: mov dword ptr [ebp - 0xc], edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1204C6B5: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1204C6B8: push edi */
    /* test LO8(eax), 1 */ /* 0x1204C6B9: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = POP32_VAL(esp); /* 0x1204C6BB: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204C6BC: setne al */
    ecx = ebp + (-0x4); /* 0x1204C6BF: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1204C6C2: push ecx */
    PUSH32(esp, edi); /* 0x1204C6C3: push edi */
    PUSH32(esp, esi); /* 0x1204C6C4: push esi */
    eax = eax + eax + 0x2; /* 0x1204C6C5: lea eax, [eax + eax + 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204C6C9: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x1204C6CC: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1204C6CE: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C6D1: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1204C6D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C7F9; /* 0x1204C6D5: js 0x1204c7f9 */
L_1204C6DB:
    eax = MEM32(esi); /* 0x1204C6DB: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x1204C6DD: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1204C6E0: push ecx */
    PUSH32(esp, edi); /* 0x1204C6E1: push edi */
    PUSH32(esp, esi); /* 0x1204C6E2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1204C6E3: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C6E6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1204C6E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C7F9; /* 0x1204C6EA: js 0x1204c7f9 */
L_1204C6F0:
    eax = MEM32(esi); /* 0x1204C6F0: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x1204C6F2: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1204C6F5: push ecx */
    PUSH32(esp, edi); /* 0x1204C6F6: push edi */
    PUSH32(esp, esi); /* 0x1204C6F7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1204C6F8: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C6FB: mov ebx, eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1204C6FD: mov dword ptr [ebp - 0x20], ebx */
    /* test ebx, ebx */ /* 0x1204C700: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C7F9; /* 0x1204C702: js 0x1204c7f9 */
L_1204C708:
    eax = MEM32(ebp + 0x24); /* 0x1204C708: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x20); /* 0x1204C70B: add eax, dword ptr [ebp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204C70E: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1204C711: mov eax, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204C714: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204C714: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204C717: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204C718: push 0xff */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1204C71D: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_121BF434); /* 0x1204C720: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1204C725: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x18) = eax; /* 0x1204C728: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204C72B: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C72E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1204C731: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204C7F9; /* 0x1204C734: jae 0x1204c7f9 */
L_1204C73A:
    esi = MEM32(ebp + 0x20); /* 0x1204C73A: mov esi, dword ptr [ebp + 0x20] */
    edx = esi; /* 0x1204C73D: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x1204C73F: imul edx, edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x1204C742: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x1204C745: mov ebx, edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1204C747: mov dword ptr [ebp - 0x18], edi */
L_1204C74A:
    eax = MEM32(ebp + 0x1C); /* 0x1204C74A: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax + esi * 4); /* 0x1204C74D: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ebp + (-0xC)); /* 0x1204C750: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + eax) = ecx; /* 0x1204C753: mov dword ptr [ebx + eax], ecx */
    eax = edi; /* 0x1204C756: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1204C758: imul eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + 0x24) = eax; /* 0x1204C75C: mov dword ptr [ebp + 0x24], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1204C75F: mov eax, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x24); /* 0x1204C762: mov ebx, dword ptr [ebp + 0x24] */
    MEM32(ebp + 0xC) = edx; /* 0x1204C765: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + (-0x14)) = 3; /* 0x1204C768: mov dword ptr [ebp - 0x14], 3 */
L_1204C76F:
    ecx = (uint32_t)MEM16(edx); /* 0x1204C76F: movzx ecx, word ptr [edx] */
    esi = MEM32(ebp + 0x2C); /* 0x1204C772: mov esi, dword ptr [ebp + 0x2c] */
    MEM32(ebp + 0x24) = ecx; /* 0x1204C775: mov dword ptr [ebp + 0x24], ecx */
    ecx = MEM32(esi + ecx * 4); /* 0x1204C778: mov ecx, dword ptr [esi + ecx*4] */
    esi = MEM32(ebp + 0x18); /* 0x1204C77B: mov esi, dword ptr [ebp + 0x18] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204C77E: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C7BE; /* 0x1204C781: jne 0x1204c7be */
L_1204C783:
    eax = MEM32(ebp + 0x24); /* 0x1204C783: mov eax, dword ptr [ebp + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1204C786: imul eax, dword ptr [ebp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x1204C78A: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1204C78D: push dword ptr [ebp + 0x30] */
    PUSH32(esp, eax); /* 0x1204C790: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1204C791: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1204C794: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204C796: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1204C797: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x34); /* 0x1204C79C: mov ecx, dword ptr [ebp + 0x34] */
    eax = MEM32(ebp + 0x24); /* 0x1204C79F: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C7A2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1204C7A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C7AC; /* 0x1204C7A7: je 0x1204c7ac */
L_1204C7A9:
    MEM32(ecx + edi * 4) = eax; /* 0x1204C7A9: mov dword ptr [ecx + edi*4], eax */
L_1204C7AC:
    edx = MEM32(ebp + 0x2C); /* 0x1204C7AC: mov edx, dword ptr [ebp + 0x2c] */
    MEM32(edx + eax * 4) = edi; /* 0x1204C7AF: mov dword ptr [edx + eax*4], edi */
    eax = MEM32(ebp + (-0x10)); /* 0x1204C7B2: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1204C7B5: mov edx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x1204C7B8: mov ecx, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204C7BA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x30); /* 0x1204C7BB: add ebx, dword ptr [ebp + 0x30] */
    _flag_k = FK_ADD;
L_1204C7BE:
    /* cmp eax, 2 */ /* 0x1204C7BE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C7C8; /* 0x1204C7C1: jne 0x1204c7c8 */
L_1204C7C3:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1204C7C3: mov word ptr [esi], cx */
    goto L_1204C7CA; /* 0x1204C7C6: jmp 0x1204c7ca */
L_1204C7C8:
    MEM32(esi) = ecx; /* 0x1204C7C8: mov dword ptr [esi], ecx */
L_1204C7CA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204C7CA: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204C7CC: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x1204C7CF: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = esi; /* 0x1204C7D2: mov dword ptr [ebp + 0x18], esi */
    MEM32(ebp + 0xC) = edx; /* 0x1204C7D5: mov dword ptr [ebp + 0xc], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204C76F; /* 0x1204C7D8: jne 0x1204c76f */
L_1204C7DA:
    esi = MEM32(ebp + 0x20); /* 0x1204C7DA: mov esi, dword ptr [ebp + 0x20] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1204C7DD: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C7E0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204C7E1: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = esi; /* 0x1204C7E4: mov dword ptr [ebp + 0x20], esi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1204C7E7: mov dword ptr [ebp - 0x18], ebx */
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x1204C7EA: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C74A; /* 0x1204C7ED: jb 0x1204c74a */
L_1204C7F3:
    esi = MEM32(ebp + 0x8); /* 0x1204C7F3: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x20)); /* 0x1204C7F6: mov ebx, dword ptr [ebp - 0x20] */
L_1204C7F9:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1204C7F9: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C805; /* 0x1204C7FD: je 0x1204c805 */
L_1204C7FF:
    eax = MEM32(esi); /* 0x1204C7FF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C801: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1204C802: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1204C805:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1204C805: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C811; /* 0x1204C809: je 0x1204c811 */
L_1204C80B:
    eax = MEM32(esi); /* 0x1204C80B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C80D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1204C80E: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1204C811:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1204C811: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C81D; /* 0x1204C815: je 0x1204c81d */
L_1204C817:
    eax = MEM32(esi); /* 0x1204C817: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C819: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x1204C81A: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_1204C81D:
    edi = POP32_VAL(esp); /* 0x1204C81D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204C81E: pop esi */
    eax = ebx; /* 0x1204C81F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204C821: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C822: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1204C823: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1204C82B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C82Bu);

L_1204C82B:
    edi = edi; /* 0x1204C82B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C82D: push ebp */
    ebp = esp; /* 0x1204C82E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1204C830: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204C833: push ebx */
    PUSH32(esp, esi); /* 0x1204C834: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204C835: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1204C838: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204C83A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204C83B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204C83D: push esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1204C83E: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204C841: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1204C844: mov dword ptr [ebp - 0xc], edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1204C847: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1204C84A: push edi */
    /* test LO8(eax), 1 */ /* 0x1204C84B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = POP32_VAL(esp); /* 0x1204C84D: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204C84E: setne al */
    ecx = ebp + (-0x4); /* 0x1204C851: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1204C854: push ecx */
    PUSH32(esp, edi); /* 0x1204C855: push edi */
    PUSH32(esp, esi); /* 0x1204C856: push esi */
    eax = eax + eax + 0x2; /* 0x1204C857: lea eax, [eax + eax + 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204C85B: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x1204C85E: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1204C860: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C863: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1204C865: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C98A; /* 0x1204C867: js 0x1204c98a */
L_1204C86D:
    eax = MEM32(esi); /* 0x1204C86D: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x1204C86F: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1204C872: push ecx */
    PUSH32(esp, edi); /* 0x1204C873: push edi */
    PUSH32(esp, esi); /* 0x1204C874: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1204C875: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C878: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1204C87A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C98A; /* 0x1204C87C: js 0x1204c98a */
L_1204C882:
    eax = MEM32(esi); /* 0x1204C882: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x1204C884: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1204C887: push ecx */
    PUSH32(esp, edi); /* 0x1204C888: push edi */
    PUSH32(esp, esi); /* 0x1204C889: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1204C88A: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204C88D: mov ebx, eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1204C88F: mov dword ptr [ebp - 0x20], ebx */
    /* test ebx, ebx */ /* 0x1204C892: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204C98A; /* 0x1204C894: js 0x1204c98a */
L_1204C89A:
    eax = MEM32(ebp + 0x24); /* 0x1204C89A: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x20); /* 0x1204C89D: add eax, dword ptr [ebp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204C8A0: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1204C8A3: mov eax, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204C8A6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204C8A6: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204C8A9: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204C8AA: push 0xff */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1204C8AF: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_121BF434); /* 0x1204C8B2: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1204C8B7: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x18) = eax; /* 0x1204C8BA: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204C8BD: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C8C0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1204C8C3: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204C98A; /* 0x1204C8C6: jae 0x1204c98a */
L_1204C8CC:
    esi = MEM32(ebp + 0x20); /* 0x1204C8CC: mov esi, dword ptr [ebp + 0x20] */
    edx = esi; /* 0x1204C8CF: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204C8D1: imul edx, edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x1204C8D4: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x1204C8D7: mov ebx, edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1204C8D9: mov dword ptr [ebp - 0x18], edi */
L_1204C8DC:
    eax = MEM32(ebp + 0x1C); /* 0x1204C8DC: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax + esi * 4); /* 0x1204C8DF: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ebp + (-0xC)); /* 0x1204C8E2: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + eax) = ecx; /* 0x1204C8E5: mov dword ptr [ebx + eax], ecx */
    eax = edi; /* 0x1204C8E8: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1204C8EA: imul eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + 0x24) = eax; /* 0x1204C8EE: mov dword ptr [ebp + 0x24], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1204C8F1: mov eax, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x24); /* 0x1204C8F4: mov ebx, dword ptr [ebp + 0x24] */
    MEM32(ebp + 0xC) = edx; /* 0x1204C8F7: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + (-0x14)) = 3; /* 0x1204C8FA: mov dword ptr [ebp - 0x14], 3 */
L_1204C901:
    ecx = MEM32(edx); /* 0x1204C901: mov ecx, dword ptr [edx] */
    esi = MEM32(ebp + 0x2C); /* 0x1204C903: mov esi, dword ptr [ebp + 0x2c] */
    MEM32(ebp + 0x24) = ecx; /* 0x1204C906: mov dword ptr [ebp + 0x24], ecx */
    ecx = MEM32(esi + ecx * 4); /* 0x1204C909: mov ecx, dword ptr [esi + ecx*4] */
    esi = MEM32(ebp + 0x18); /* 0x1204C90C: mov esi, dword ptr [ebp + 0x18] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204C90F: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C94F; /* 0x1204C912: jne 0x1204c94f */
L_1204C914:
    eax = MEM32(ebp + 0x24); /* 0x1204C914: mov eax, dword ptr [ebp + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1204C917: imul eax, dword ptr [ebp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x1204C91B: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1204C91E: push dword ptr [ebp + 0x30] */
    PUSH32(esp, eax); /* 0x1204C921: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1204C922: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1204C925: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204C927: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1204C928: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x34); /* 0x1204C92D: mov ecx, dword ptr [ebp + 0x34] */
    eax = MEM32(ebp + 0x24); /* 0x1204C930: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204C933: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1204C936: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204C93D; /* 0x1204C938: je 0x1204c93d */
L_1204C93A:
    MEM32(ecx + edi * 4) = eax; /* 0x1204C93A: mov dword ptr [ecx + edi*4], eax */
L_1204C93D:
    edx = MEM32(ebp + 0x2C); /* 0x1204C93D: mov edx, dword ptr [ebp + 0x2c] */
    MEM32(edx + eax * 4) = edi; /* 0x1204C940: mov dword ptr [edx + eax*4], edi */
    eax = MEM32(ebp + (-0x10)); /* 0x1204C943: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1204C946: mov edx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x1204C949: mov ecx, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204C94B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x30); /* 0x1204C94C: add ebx, dword ptr [ebp + 0x30] */
    _flag_k = FK_ADD;
L_1204C94F:
    /* cmp eax, 2 */ /* 0x1204C94F: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204C959; /* 0x1204C952: jne 0x1204c959 */
L_1204C954:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1204C954: mov word ptr [esi], cx */
    goto L_1204C95B; /* 0x1204C957: jmp 0x1204c95b */
L_1204C959:
    MEM32(esi) = ecx; /* 0x1204C959: mov dword ptr [esi], ecx */
L_1204C95B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204C95B: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204C95D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x1204C960: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = esi; /* 0x1204C963: mov dword ptr [ebp + 0x18], esi */
    MEM32(ebp + 0xC) = edx; /* 0x1204C966: mov dword ptr [ebp + 0xc], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204C901; /* 0x1204C969: jne 0x1204c901 */
L_1204C96B:
    esi = MEM32(ebp + 0x20); /* 0x1204C96B: mov esi, dword ptr [ebp + 0x20] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1204C96E: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204C971: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204C972: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = esi; /* 0x1204C975: mov dword ptr [ebp + 0x20], esi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1204C978: mov dword ptr [ebp - 0x18], ebx */
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x1204C97B: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204C8DC; /* 0x1204C97E: jb 0x1204c8dc */
L_1204C984:
    esi = MEM32(ebp + 0x8); /* 0x1204C984: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x20)); /* 0x1204C987: mov ebx, dword ptr [ebp - 0x20] */
L_1204C98A:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1204C98A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C996; /* 0x1204C98E: je 0x1204c996 */
L_1204C990:
    eax = MEM32(esi); /* 0x1204C990: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C992: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1204C993: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1204C996:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1204C996: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C9A2; /* 0x1204C99A: je 0x1204c9a2 */
L_1204C99C:
    eax = MEM32(esi); /* 0x1204C99C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C99E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1204C99F: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1204C9A2:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1204C9A2: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204C9AE; /* 0x1204C9A6: je 0x1204c9ae */
L_1204C9A8:
    eax = MEM32(esi); /* 0x1204C9A8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204C9AA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x1204C9AB: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_1204C9AE:
    edi = POP32_VAL(esp); /* 0x1204C9AE: pop edi */
    esi = POP32_VAL(esp); /* 0x1204C9AF: pop esi */
    eax = ebx; /* 0x1204C9B0: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204C9B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204C9B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1204C9B4: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1204C9BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204C9BCu);

L_1204C9BC:
    edi = edi; /* 0x1204C9BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204C9BE: push ebp */
    ebp = esp; /* 0x1204C9BF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204C9C1: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1204C9C2: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204C9C6: push ebx */
    PUSH32(esp, edi); /* 0x1204C9C7: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CAA0; /* 0x1204C9C8: je 0x1204caa0 */
L_1204C9CE:
    ebx = MEM32(ebp + 0xC); /* 0x1204C9CE: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1204C9D1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CAA0; /* 0x1204C9D3: je 0x1204caa0 */
L_1204C9D9:
    edi = MEM32(ebp + 0x10); /* 0x1204C9D9: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1204C9DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CAA0; /* 0x1204C9DE: je 0x1204caa0 */
L_1204C9E4:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1204C9E4: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CAA0; /* 0x1204C9E8: je 0x1204caa0 */
L_1204C9EE:
    PUSH32(esp, 0x120014BCu); /* 0x1204C9EE: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204C9F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204C9F5: push 4 */
    edx = POP32_VAL(esp); /* 0x1204C9F7: pop edx */
    eax = edi; /* 0x1204C9F8: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204C9FA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204C9FC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204C9FF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CA01: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CA03: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CA04: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CA09: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CA0A: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1204CA0B: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1204CA0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CA1C; /* 0x1204CA10: jne 0x1204ca1c */
L_1204CA12:
    eax = 0x8007000Eu; /* 0x1204CA12: mov eax, 0x8007000e */
    goto L_1204CAA5; /* 0x1204CA17: jmp 0x1204caa5 */
L_1204CA1C:
    PUSH32(esp, esi); /* 0x1204CA1C: push esi */
    ecx = edi; /* 0x1204CA1D: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1204CA1F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1204CA1F: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1204CA22: push ecx */
    PUSH32(esp, 0xFFu); /* 0x1204CA23: push 0xff */
    PUSH32(esp, eax); /* 0x1204CA28: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204CA29: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)((int32_t)ebx * (int32_t)3); /* 0x1204CA2E: imul ebx, ebx, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204CA31: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204CA33: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = esi; /* 0x1204CA36: mov edx, esi */
    /* test ebx, ebx */ /* 0x1204CA38: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CA66; /* 0x1204CA3A: je 0x1204ca66 */
L_1204CA3C:
    eax = MEM32(ebp + 0xC); /* 0x1204CA3C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1204CA3F: mov ecx, dword ptr [ebp + 8] */
    edi = esi; /* 0x1204CA42: mov edi, esi */
L_1204CA44:
    esi = (uint32_t)MEM16(ecx + edx * 2); /* 0x1204CA44: movzx esi, word ptr [ecx + edx*2] */
    /* cmp MEM32(eax + esi * 4), 0xFFFFFFFFu */ /* 0x1204CA48: cmp dword ptr [eax + esi*4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1204CA4C: push 0 */
    MEM32(ebp + (-0x4)) = esi; /* 0x1204CA4E: mov dword ptr [ebp - 4], esi */
    esi = POP32_VAL(esp); /* 0x1204CA51: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CA5E; /* 0x1204CA52: jne 0x1204ca5e */
L_1204CA54:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204CA54: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + ecx * 4) = edi; /* 0x1204CA57: mov dword ptr [eax + ecx*4], edi */
    ecx = MEM32(ebp + 0x8); /* 0x1204CA5A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204CA5D: inc edi */
    _flag_k = FK_INC;
L_1204CA5E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204CA5E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x1204CA5F: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CA44; /* 0x1204CA61: jb 0x1204ca44 */
L_1204CA63:
    edi = MEM32(ebp + 0x10); /* 0x1204CA63: mov edi, dword ptr [ebp + 0x10] */
L_1204CA66:
    ebx = MEM32(ebp + 0x14); /* 0x1204CA66: mov ebx, dword ptr [ebp + 0x14] */
    eax = edi; /* 0x1204CA69: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204CA6B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204CA6B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204CA6E: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204CA6F: push 0xff */
    PUSH32(esp, ebx); /* 0x1204CA74: push ebx */
    RECOMP_CALL(sub_121BF434); /* 0x1204CA75: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1204CA7A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204CA7D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1204CA80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CA94; /* 0x1204CA82: je 0x1204ca94 */
L_1204CA84:
    ecx = MEM32(eax + esi * 4); /* 0x1204CA84: mov ecx, dword ptr [eax + esi*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204CA87: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CA8F; /* 0x1204CA8A: je 0x1204ca8f */
L_1204CA8C:
    MEM32(ebx + ecx * 4) = esi; /* 0x1204CA8C: mov dword ptr [ebx + ecx*4], esi */
L_1204CA8F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204CA8F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1204CA90: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CA84; /* 0x1204CA92: jb 0x1204ca84 */
L_1204CA94:
    PUSH32(esp, eax); /* 0x1204CA94: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204CA95: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CA9A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CA9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204CA9D: pop esi */
    goto L_1204CAA5; /* 0x1204CA9E: jmp 0x1204caa5 */
L_1204CAA0:
    eax = 0x8876086Cu; /* 0x1204CAA0: mov eax, 0x8876086c */
L_1204CAA5:
    edi = POP32_VAL(esp); /* 0x1204CAA5: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204CAA6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204CAA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CAA8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CAB0u);

L_1204CAB0:
    edi = edi; /* 0x1204CAB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CAB2: push ebp */
    ebp = esp; /* 0x1204CAB3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204CAB5: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1204CAB6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204CABA: push ebx */
    PUSH32(esp, edi); /* 0x1204CABB: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CB84; /* 0x1204CABC: je 0x1204cb84 */
L_1204CAC2:
    ebx = MEM32(ebp + 0xC); /* 0x1204CAC2: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1204CAC5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CB84; /* 0x1204CAC7: je 0x1204cb84 */
L_1204CACD:
    edi = MEM32(ebp + 0x10); /* 0x1204CACD: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1204CAD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CB84; /* 0x1204CAD2: je 0x1204cb84 */
L_1204CAD8:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1204CAD8: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CB84; /* 0x1204CADC: je 0x1204cb84 */
L_1204CAE2:
    PUSH32(esp, 0x120014BCu); /* 0x1204CAE2: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CAE7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204CAE9: push 4 */
    edx = POP32_VAL(esp); /* 0x1204CAEB: pop edx */
    eax = edi; /* 0x1204CAEC: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CAEE: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CAF0: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CAF3: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CAF5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CAF7: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CAF8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CAFD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CAFE: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1204CAFF: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1204CB02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CB0D; /* 0x1204CB04: jne 0x1204cb0d */
L_1204CB06:
    eax = 0x8007000Eu; /* 0x1204CB06: mov eax, 0x8007000e */
    goto L_1204CB89; /* 0x1204CB0B: jmp 0x1204cb89 */
L_1204CB0D:
    PUSH32(esp, esi); /* 0x1204CB0D: push esi */
    ecx = edi; /* 0x1204CB0E: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1204CB10: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1204CB10: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1204CB13: push ecx */
    PUSH32(esp, 0xFFu); /* 0x1204CB14: push 0xff */
    PUSH32(esp, eax); /* 0x1204CB19: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204CB1A: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)((int32_t)ebx * (int32_t)3); /* 0x1204CB1F: imul ebx, ebx, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204CB22: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204CB24: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = esi; /* 0x1204CB27: mov edx, esi */
    /* test ebx, ebx */ /* 0x1204CB29: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CB4A; /* 0x1204CB2B: je 0x1204cb4a */
L_1204CB2D:
    eax = MEM32(ebp + 0xC); /* 0x1204CB2D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1204CB30: mov ecx, dword ptr [ebp + 8] */
L_1204CB33:
    edi = MEM32(ecx + edx * 4); /* 0x1204CB33: mov edi, dword ptr [ecx + edx*4] */
    /* cmp MEM32(eax + edi * 4), 0xFFFFFFFFu */ /* 0x1204CB36: cmp dword ptr [eax + edi*4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CB40; /* 0x1204CB3A: jne 0x1204cb40 */
L_1204CB3C:
    MEM32(eax + edi * 4) = esi; /* 0x1204CB3C: mov dword ptr [eax + edi*4], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204CB3F: inc esi */
    _flag_k = FK_INC;
L_1204CB40:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204CB40: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x1204CB41: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CB33; /* 0x1204CB43: jb 0x1204cb33 */
L_1204CB45:
    edi = MEM32(ebp + 0x10); /* 0x1204CB45: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204CB48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204CB4A:
    ebx = MEM32(ebp + 0x14); /* 0x1204CB4A: mov ebx, dword ptr [ebp + 0x14] */
    eax = edi; /* 0x1204CB4D: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204CB4F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204CB4F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204CB52: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204CB53: push 0xff */
    PUSH32(esp, ebx); /* 0x1204CB58: push ebx */
    RECOMP_CALL(sub_121BF434); /* 0x1204CB59: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1204CB5E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204CB61: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1204CB64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CB78; /* 0x1204CB66: je 0x1204cb78 */
L_1204CB68:
    ecx = MEM32(eax + esi * 4); /* 0x1204CB68: mov ecx, dword ptr [eax + esi*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204CB6B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CB73; /* 0x1204CB6E: je 0x1204cb73 */
L_1204CB70:
    MEM32(ebx + ecx * 4) = esi; /* 0x1204CB70: mov dword ptr [ebx + ecx*4], esi */
L_1204CB73:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204CB73: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1204CB74: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CB68; /* 0x1204CB76: jb 0x1204cb68 */
L_1204CB78:
    PUSH32(esp, eax); /* 0x1204CB78: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204CB79: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CB7E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CB7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1204CB81: pop esi */
    goto L_1204CB89; /* 0x1204CB82: jmp 0x1204cb89 */
L_1204CB84:
    eax = 0x8876086Cu; /* 0x1204CB84: mov eax, 0x8876086c */
L_1204CB89:
    edi = POP32_VAL(esp); /* 0x1204CB89: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204CB8A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204CB8B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CB8C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CB94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CB94u);

L_1204CB94:
    /* cmp MEM8(ecx + 0x10), 0 */ /* 0x1204CB94: cmp byte ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CBA0; /* 0x1204CB98: je 0x1204cba0 */
L_1204CB9A:
    edx = (uint32_t)MEM16(ecx + 0x6); /* 0x1204CB9A: movzx edx, word ptr [ecx + 6] */
    goto L_1204CBAB; /* 0x1204CB9E: jmp 0x1204cbab */
L_1204CBA0:
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x1204CBA0: movzx eax, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CBA4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x1204CBA5: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204CBA7: cdq  */
    ecx = POP32_VAL(esp); /* 0x1204CBA8: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1204CBA9: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_1204CBAB:
    SET_LO16(eax, LO16(edx)); /* 0x1204CBAB: mov ax, dx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204CBAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204CBB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CBB4u);

L_1204CBB4:
    /* cmp MEM8(ecx + 0x18), 0 */ /* 0x1204CBB4: cmp byte ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CBBF; /* 0x1204CBB8: je 0x1204cbbf */
L_1204CBBA:
    edx = MEM32(ecx + 0xC); /* 0x1204CBBA: mov edx, dword ptr [ecx + 0xc] */
    goto L_1204CBCA; /* 0x1204CBBD: jmp 0x1204cbca */
L_1204CBBF:
    eax = MEM32(ecx + 0xC); /* 0x1204CBBF: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, 3); /* 0x1204CBC2: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CBC4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204CBC5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204CBC7: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204CBC8: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_1204CBCA:
    eax = edx; /* 0x1204CBCA: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204CBCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204CBD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CBD2u);

L_1204CBD2:
    edi = edi; /* 0x1204CBD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CBD4: push ebp */
    ebp = esp; /* 0x1204CBD5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204CBD7: push ecx */
    PUSH32(esp, ecx); /* 0x1204CBD8: push ecx */
    PUSH32(esp, ebx); /* 0x1204CBD9: push ebx */
    PUSH32(esp, esi); /* 0x1204CBDA: push esi */
    PUSH32(esp, edi); /* 0x1204CBDB: push edi */
    edi = MEM32(ecx + 0x260); /* 0x1204CBDC: mov edi, dword ptr [ecx + 0x260] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204CBE2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204CBE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CC37; /* 0x1204CBE6: je 0x1204cc37 */
L_1204CBE8:
    esi = MEM32(ecx + 0x25C); /* 0x1204CBE8: mov esi, dword ptr [ecx + 0x25c] */
L_1204CBEE:
    ebx = MEM32(esi + 0x4); /* 0x1204CBEE: mov ebx, dword ptr [esi + 4] */
    eax = MEM32(esi + 0x8); /* 0x1204CBF1: mov eax, dword ptr [esi + 8] */
    edi = MEM32(ecx + 0x260); /* 0x1204CBF4: mov edi, dword ptr [ecx + 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1204CBFA: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1204CBFC: mov dword ptr [ebp - 8], eax */
    /* cmp ebx, eax */ /* 0x1204CBFF: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204CC2F; /* 0x1204CC01: jae 0x1204cc2f */
L_1204CC03:
    eax = MEM32(ecx + 0x218); /* 0x1204CC03: mov eax, dword ptr [ecx + 0x218] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x1204CC09: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204CC0C: mov dword ptr [ebp - 4], eax */
L_1204CC0F:
    /* test eax, eax */ /* 0x1204CC0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CC29; /* 0x1204CC11: je 0x1204cc29 */
L_1204CC13:
    edi = MEM32(esi); /* 0x1204CC13: mov edi, dword ptr [esi] */
    eax = MEM32(ecx + 0x254); /* 0x1204CC15: mov eax, dword ptr [ecx + 0x254] */
    /* cmp MEM32(eax + ebx * 4), edi */ /* 0x1204CC1B: cmp dword ptr [eax + ebx*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ecx + 0x260); /* 0x1204CC1E: mov edi, dword ptr [ecx + 0x260] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CC40; /* 0x1204CC24: jne 0x1204cc40 */
L_1204CC26:
    eax = MEM32(ebp + (-0x4)); /* 0x1204CC26: mov eax, dword ptr [ebp - 4] */
L_1204CC29:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204CC29: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x1204CC2A: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CC0F; /* 0x1204CC2D: jb 0x1204cc0f */
L_1204CC2F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204CC2F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1204CC30: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x1204CC33: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CBEE; /* 0x1204CC35: jb 0x1204cbee */
L_1204CC37:
    SET_LO8(eax, 1); /* 0x1204CC37: mov al, 1 */
L_1204CC39:
    edi = POP32_VAL(esp); /* 0x1204CC39: pop edi */
    esi = POP32_VAL(esp); /* 0x1204CC3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204CC3B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204CC3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204CC3D: ret 4 */
L_1204CC40:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1204CC40: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_1204CC39; /* 0x1204CC42: jmp 0x1204cc39 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204CC49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CC49u);

L_1204CC49:
    edi = edi; /* 0x1204CC49: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CC4B: push ebp */
    ebp = esp; /* 0x1204CC4C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1204CC4E: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(ecx); /* 0x1204CC51: movzx eax, word ptr [ecx] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204CC54: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CC5D; /* 0x1204CC57: jne 0x1204cc5d */
L_1204CC59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CC59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204CC7A; /* 0x1204CC5B: jmp 0x1204cc7a */
L_1204CC5D:
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x1204CC5D: movzx eax, word ptr [ecx + 2] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204CC61: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CC6B; /* 0x1204CC64: jne 0x1204cc6b */
L_1204CC66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CC66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CC68: inc eax */
    _flag_k = FK_INC;
    goto L_1204CC7A; /* 0x1204CC69: jmp 0x1204cc7a */
L_1204CC6B:
    ecx = (uint32_t)MEM16(ecx + 0x4); /* 0x1204CC6B: movzx ecx, word ptr [ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CC6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1204CC71: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204CC74: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204CC77: add eax, 2 */
    _flag_k = FK_ADD;
L_1204CC7A:
    ebp = POP32_VAL(esp); /* 0x1204CC7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204CC7B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204CC83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CC83u);

L_1204CC83:
    edi = edi; /* 0x1204CC83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CC85: push ebp */
    ebp = esp; /* 0x1204CC86: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1204CC88: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1204CC8B: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CC8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx), ecx */ /* 0x1204CC90: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CCA5; /* 0x1204CC92: je 0x1204cca5 */
L_1204CC94:
    /* cmp MEM32(edx + 0x4), ecx */ /* 0x1204CC94: cmp dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204CC9C; /* 0x1204CC97: jne 0x1204cc9c */
L_1204CC99:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CC99: inc eax */
    _flag_k = FK_INC;
    goto L_1204CCA5; /* 0x1204CC9A: jmp 0x1204cca5 */
L_1204CC9C:
    /* cmp MEM32(edx + 0x8), ecx */ /* 0x1204CC9C: cmp dword ptr [edx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204CC9F: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204CCA2: add eax, 2 */
    _flag_k = FK_ADD;
L_1204CCA5:
    ebp = POP32_VAL(esp); /* 0x1204CCA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204CCA6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204CCAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CCAEu);

L_1204CCAE:
    edi = edi; /* 0x1204CCAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CCB0: push ebp */
    ebp = esp; /* 0x1204CCB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204CCB3: push ecx */
    PUSH32(esp, ecx); /* 0x1204CCB4: push ecx */
    PUSH32(esp, ebx); /* 0x1204CCB5: push ebx */
    PUSH32(esp, esi); /* 0x1204CCB6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204CCB7: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi); /* 0x1204CCBA: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204CCBC: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1204CCBD: mov dword ptr [ebp - 4], ebx */
    /* test ebx, ebx */ /* 0x1204CCC0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CCF5; /* 0x1204CCC2: jne 0x1204ccf5 */
L_1204CCC4:
    edi = MEM32(ebp + 0xC); /* 0x1204CCC4: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1204CCC7: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CCCC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x1204CCCE: push 6 */
    edx = POP32_VAL(esp); /* 0x1204CCD0: pop edx */
    eax = edi; /* 0x1204CCD1: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CCD3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CCD5: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CCD8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CCDA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CCDC: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CCDD: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204CCE2: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204CCE4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CCE5: pop ecx */
    /* test ebx, ebx */ /* 0x1204CCE6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CCEE; /* 0x1204CCE8: jne 0x1204ccee */
L_1204CCEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CCEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204CD59; /* 0x1204CCEC: jmp 0x1204cd59 */
L_1204CCEE:
    eax = MEM32(ebp + 0x14); /* 0x1204CCEE: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x1204CCF1: mov dword ptr [eax], edi */
    goto L_1204CD54; /* 0x1204CCF3: jmp 0x1204cd54 */
L_1204CCF5:
    eax = MEM32(ebp + 0xC); /* 0x1204CCF5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1204CCF8: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(ecx) */ /* 0x1204CCFB: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204CD54; /* 0x1204CCFD: jbe 0x1204cd54 */
L_1204CCFF:
    PUSH32(esp, 0x120014BCu); /* 0x1204CCFF: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CD04: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x1204CD06: push 6 */
    edx = POP32_VAL(esp); /* 0x1204CD08: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CD09: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CD0B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CD0E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CD10: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CD12: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CD13: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CD18: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CD19: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1204CD1A: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1204CD1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CCEA; /* 0x1204CD1F: je 0x1204ccea */
L_1204CD21:
    ecx = MEM32(ebp + 0x10); /* 0x1204CD21: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1204CD24: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CD42; /* 0x1204CD26: je 0x1204cd42 */
L_1204CD28:
    edx = ebx; /* 0x1204CD28: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1204CD2A: sub edx, eax */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x1204CD2C: mov ebx, eax */
L_1204CD2E:
    esi = edx + ebx; /* 0x1204CD2E: lea esi, [edx + ebx] */
    edi = ebx; /* 0x1204CD31: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204CD33: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 6; /* 0x1204CD34: add ebx, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204CD37: dec ecx */
    _flag_k = FK_DEC;
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x1204CD38: movsw word ptr es:[edi], word ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204CD2E; /* 0x1204CD3A: jne 0x1204cd2e */
L_1204CD3C:
    ebx = MEM32(ebp + (-0x4)); /* 0x1204CD3C: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1204CD3F: mov esi, dword ptr [ebp + 8] */
L_1204CD42:
    eax = MEM32(ebp + 0xC); /* 0x1204CD42: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1204CD45: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1204CD48: push ebx */
    MEM32(ecx) = eax; /* 0x1204CD49: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204CD4B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x8)); /* 0x1204CD50: mov ebx, dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x1204CD53: pop ecx */
L_1204CD54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CD54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x1204CD56: mov dword ptr [esi], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CD58: inc eax */
    _flag_k = FK_INC;
L_1204CD59:
    edi = POP32_VAL(esp); /* 0x1204CD59: pop edi */
    esi = POP32_VAL(esp); /* 0x1204CD5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204CD5B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204CD5C: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CD5D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CD65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CD65u);

L_1204CD65:
    edi = edi; /* 0x1204CD65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CD67: push ebp */
    ebp = esp; /* 0x1204CD68: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204CD6A: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1204CD6B: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204CD6E: push esi */
    PUSH32(esp, edi); /* 0x1204CD6F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204CD70: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi); /* 0x1204CD73: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x1204CD75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CDA7; /* 0x1204CD77: jne 0x1204cda7 */
L_1204CD79:
    PUSH32(esp, 0x120014BCu); /* 0x1204CD79: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CD7E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204CD80: push 2 */
    edx = POP32_VAL(esp); /* 0x1204CD82: pop edx */
    eax = ebx; /* 0x1204CD83: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CD85: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CD87: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CD8A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CD8C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CD8E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CD8F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1204CD94: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1204CD96: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CD97: pop ecx */
    /* test esi, esi */ /* 0x1204CD98: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CDA0; /* 0x1204CD9A: jne 0x1204cda0 */
L_1204CD9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CD9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204CE03; /* 0x1204CD9E: jmp 0x1204ce03 */
L_1204CDA0:
    eax = MEM32(ebp + 0x14); /* 0x1204CDA0: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ebx; /* 0x1204CDA3: mov dword ptr [eax], ebx */
    goto L_1204CDFE; /* 0x1204CDA5: jmp 0x1204cdfe */
L_1204CDA7:
    eax = MEM32(ebp + 0x14); /* 0x1204CDA7: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x1204CDAA: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204CDFE; /* 0x1204CDAC: jbe 0x1204cdfe */
L_1204CDAE:
    PUSH32(esp, 0x120014BCu); /* 0x1204CDAE: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CDB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204CDB5: push 2 */
    edx = POP32_VAL(esp); /* 0x1204CDB7: pop edx */
    eax = ebx; /* 0x1204CDB8: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CDBA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CDBC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CDBF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CDC1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CDC3: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CDC4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CDC9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CDCA: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1204CDCB: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1204CDCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CD9C; /* 0x1204CDD0: je 0x1204cd9c */
L_1204CDD2:
    ecx = MEM32(ebp + 0x10); /* 0x1204CDD2: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1204CDD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CDEF; /* 0x1204CDD7: je 0x1204cdef */
L_1204CDD9:
    edi = esi; /* 0x1204CDD9: mov edi, esi */
    edx = eax; /* 0x1204CDDB: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1204CDDD: sub edi, eax */
    _flag_k = FK_CMP;
L_1204CDDF:
    SET_LO16(eax, MEM16(edi + edx)); /* 0x1204CDDF: mov ax, word ptr [edi + edx] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1204CDE3: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204CDE6: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204CDE9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204CDDF; /* 0x1204CDEA: jne 0x1204cddf */
L_1204CDEC:
    edi = MEM32(ebp + 0x8); /* 0x1204CDEC: mov edi, dword ptr [ebp + 8] */
L_1204CDEF:
    eax = MEM32(ebp + 0x14); /* 0x1204CDEF: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1204CDF2: push esi */
    MEM32(eax) = ebx; /* 0x1204CDF3: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1204CDF5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1204CDFA: mov esi, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1204CDFD: pop ecx */
L_1204CDFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CDFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x1204CE00: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CE02: inc eax */
    _flag_k = FK_INC;
L_1204CE03:
    edi = POP32_VAL(esp); /* 0x1204CE03: pop edi */
    esi = POP32_VAL(esp); /* 0x1204CE04: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204CE05: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204CE06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CE07: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CE0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CE0Fu);

L_1204CE0F:
    edi = edi; /* 0x1204CE0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CE11: push ebp */
    ebp = esp; /* 0x1204CE12: mov ebp, esp */
    SET_LO16(ecx, MEM16(ebp + 0xC)); /* 0x1204CE14: mov cx, word ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1204CE18: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CE1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204CE1D:
    /* cmp MEM16(edx + eax * 2), LO16(ecx) */ /* 0x1204CE1D: cmp word ptr [edx + eax*2], cx */
    _flag_a = (uint32_t)(MEM16(edx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204CE29; /* 0x1204CE21: je 0x1204ce29 */
L_1204CE23:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CE23: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x1204CE24: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CE1D; /* 0x1204CE27: jb 0x1204ce1d */
L_1204CE29:
    ebp = POP32_VAL(esp); /* 0x1204CE29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204CE2A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204CE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CE32u);

L_1204CE32:
    edi = edi; /* 0x1204CE32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CE34: push ebp */
    ebp = esp; /* 0x1204CE35: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204CE37: push ecx */
    PUSH32(esp, ecx); /* 0x1204CE38: push ecx */
    PUSH32(esp, ebx); /* 0x1204CE39: push ebx */
    PUSH32(esp, esi); /* 0x1204CE3A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204CE3B: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi); /* 0x1204CE3E: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204CE40: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1204CE41: mov dword ptr [ebp - 4], ebx */
    /* test ebx, ebx */ /* 0x1204CE44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CE79; /* 0x1204CE46: jne 0x1204ce79 */
L_1204CE48:
    edi = MEM32(ebp + 0xC); /* 0x1204CE48: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1204CE4B: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CE50: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1204CE52: push 0xc */
    edx = POP32_VAL(esp); /* 0x1204CE54: pop edx */
    eax = edi; /* 0x1204CE55: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CE57: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CE59: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CE5C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CE5E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CE60: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CE61: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204CE66: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204CE68: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CE69: pop ecx */
    /* test ebx, ebx */ /* 0x1204CE6A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CE72; /* 0x1204CE6C: jne 0x1204ce72 */
L_1204CE6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CE6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204CEDD; /* 0x1204CE70: jmp 0x1204cedd */
L_1204CE72:
    eax = MEM32(ebp + 0x14); /* 0x1204CE72: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x1204CE75: mov dword ptr [eax], edi */
    goto L_1204CED8; /* 0x1204CE77: jmp 0x1204ced8 */
L_1204CE79:
    eax = MEM32(ebp + 0xC); /* 0x1204CE79: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1204CE7C: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(ecx) */ /* 0x1204CE7F: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204CED8; /* 0x1204CE81: jbe 0x1204ced8 */
L_1204CE83:
    PUSH32(esp, 0x120014BCu); /* 0x1204CE83: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CE88: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1204CE8A: push 0xc */
    edx = POP32_VAL(esp); /* 0x1204CE8C: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CE8D: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CE8F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CE92: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CE94: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CE96: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CE97: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CE9C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CE9D: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1204CE9E: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1204CEA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CE6E; /* 0x1204CEA3: je 0x1204ce6e */
L_1204CEA5:
    edx = MEM32(ebp + 0x10); /* 0x1204CEA5: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1204CEA8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CEC6; /* 0x1204CEAA: je 0x1204cec6 */
L_1204CEAC:
    ecx = ebx; /* 0x1204CEAC: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1204CEAE: sub ecx, eax */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x1204CEB0: mov ebx, eax */
L_1204CEB2:
    esi = ecx + ebx; /* 0x1204CEB2: lea esi, [ecx + ebx] */
    edi = ebx; /* 0x1204CEB5: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204CEB7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204CEB8: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x1204CEB9: add ebx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1204CEBC: dec edx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204CEBD: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204CEB2; /* 0x1204CEBE: jne 0x1204ceb2 */
L_1204CEC0:
    ebx = MEM32(ebp + (-0x4)); /* 0x1204CEC0: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x8); /* 0x1204CEC3: mov esi, dword ptr [ebp + 8] */
L_1204CEC6:
    eax = MEM32(ebp + 0xC); /* 0x1204CEC6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1204CEC9: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1204CECC: push ebx */
    MEM32(ecx) = eax; /* 0x1204CECD: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204CECF: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x8)); /* 0x1204CED4: mov ebx, dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x1204CED7: pop ecx */
L_1204CED8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CED8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x1204CEDA: mov dword ptr [esi], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CEDC: inc eax */
    _flag_k = FK_INC;
L_1204CEDD:
    edi = POP32_VAL(esp); /* 0x1204CEDD: pop edi */
    esi = POP32_VAL(esp); /* 0x1204CEDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204CEDF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204CEE0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CEE1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CEE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CEE9u);

L_1204CEE9:
    edi = edi; /* 0x1204CEE9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CEEB: push ebp */
    ebp = esp; /* 0x1204CEEC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204CEEE: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1204CEEF: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204CEF2: push esi */
    PUSH32(esp, edi); /* 0x1204CEF3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204CEF4: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi); /* 0x1204CEF7: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x1204CEF9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CF2B; /* 0x1204CEFB: jne 0x1204cf2b */
L_1204CEFD:
    PUSH32(esp, 0x120014BCu); /* 0x1204CEFD: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CF02: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204CF04: push 4 */
    edx = POP32_VAL(esp); /* 0x1204CF06: pop edx */
    eax = ebx; /* 0x1204CF07: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CF09: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CF0B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CF0E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CF10: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CF12: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CF13: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1204CF18: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1204CF1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CF1B: pop ecx */
    /* test esi, esi */ /* 0x1204CF1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CF24; /* 0x1204CF1E: jne 0x1204cf24 */
L_1204CF20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CF20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204CF85; /* 0x1204CF22: jmp 0x1204cf85 */
L_1204CF24:
    eax = MEM32(ebp + 0x14); /* 0x1204CF24: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ebx; /* 0x1204CF27: mov dword ptr [eax], ebx */
    goto L_1204CF80; /* 0x1204CF29: jmp 0x1204cf80 */
L_1204CF2B:
    eax = MEM32(ebp + 0x14); /* 0x1204CF2B: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x1204CF2E: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204CF80; /* 0x1204CF30: jbe 0x1204cf80 */
L_1204CF32:
    PUSH32(esp, 0x120014BCu); /* 0x1204CF32: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CF37: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204CF39: push 4 */
    edx = POP32_VAL(esp); /* 0x1204CF3B: pop edx */
    eax = ebx; /* 0x1204CF3C: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CF3E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CF40: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CF43: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CF45: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CF47: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CF48: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CF4D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CF4E: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1204CF4F: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x1204CF52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CF20; /* 0x1204CF54: je 0x1204cf20 */
L_1204CF56:
    ecx = MEM32(ebp + 0x10); /* 0x1204CF56: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1204CF59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204CF71; /* 0x1204CF5B: je 0x1204cf71 */
L_1204CF5D:
    edi = esi; /* 0x1204CF5D: mov edi, esi */
    edx = eax; /* 0x1204CF5F: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1204CF61: sub edi, eax */
    _flag_k = FK_CMP;
L_1204CF63:
    eax = MEM32(edi + edx); /* 0x1204CF63: mov eax, dword ptr [edi + edx] */
    MEM32(edx) = eax; /* 0x1204CF66: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204CF68: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204CF6B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204CF63; /* 0x1204CF6C: jne 0x1204cf63 */
L_1204CF6E:
    edi = MEM32(ebp + 0x8); /* 0x1204CF6E: mov edi, dword ptr [ebp + 8] */
L_1204CF71:
    eax = MEM32(ebp + 0x14); /* 0x1204CF71: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1204CF74: push esi */
    MEM32(eax) = ebx; /* 0x1204CF75: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_121BF388); /* 0x1204CF77: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1204CF7C: mov esi, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1204CF7F: pop ecx */
L_1204CF80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204CF80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x1204CF82: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204CF84: inc eax */
    _flag_k = FK_INC;
L_1204CF85:
    edi = POP32_VAL(esp); /* 0x1204CF85: pop edi */
    esi = POP32_VAL(esp); /* 0x1204CF86: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204CF87: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204CF88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204CF89: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204CF91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204CF91u);

L_1204CF91:
    edi = edi; /* 0x1204CF91: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204CF93: push ebp */
    ebp = esp; /* 0x1204CF94: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204CF96: push ecx */
    PUSH32(esp, ecx); /* 0x1204CF97: push ecx */
    PUSH32(esp, ebx); /* 0x1204CF98: push ebx */
    PUSH32(esp, esi); /* 0x1204CF99: push esi */
    ebx = ecx; /* 0x1204CF9A: mov ebx, ecx */
    eax = MEM32(ebx + 0xCC); /* 0x1204CF9C: mov eax, dword ptr [ebx + 0xcc] */
    PUSH32(esp, edi); /* 0x1204CFA2: push edi */
    edi = MEM32(eax + 0x23C); /* 0x1204CFA3: mov edi, dword ptr [eax + 0x23c] */
    PUSH32(esp, 0x120014BCu); /* 0x1204CFA9: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204CFAE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204CFB0: push 4 */
    edx = POP32_VAL(esp); /* 0x1204CFB2: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204CFB3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1204CFB5: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204CFB7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204CFB9: seto cl */
    MEM32(ebp + (-0x4)) = esi; /* 0x1204CFBC: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204CFBF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204CFC1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204CFC3: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204CFC4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CFC9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204CFCA: pop ecx */
    MEM32(ebx + 0xDC) = eax; /* 0x1204CFCB: mov dword ptr [ebx + 0xdc], eax */
    /* test eax, eax */ /* 0x1204CFD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204CFE5; /* 0x1204CFD3: jne 0x1204cfe5 */
L_1204CFD5:
    PUSH32(esp, esi); /* 0x1204CFD5: push esi */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1204CFD6: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_121BF388); /* 0x1204CFDD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204CFE2: pop ecx */
    goto L_1204D03E; /* 0x1204CFE3: jmp 0x1204d03e */
L_1204CFE5:
    MEM32(ebx + 0xF0) = esi; /* 0x1204CFE5: mov dword ptr [ebx + 0xf0], esi */
    ecx = esi; /* 0x1204CFEB: mov ecx, esi */
    /* test edi, edi */ /* 0x1204CFED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D03E; /* 0x1204CFEF: je 0x1204d03e */
L_1204CFF1:
    eax = MEM32(ebx + 0xDC); /* 0x1204CFF1: mov eax, dword ptr [ebx + 0xdc] */
    MEM32(eax + ecx * 4) = ecx; /* 0x1204CFF7: mov dword ptr [eax + ecx*4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204CFFA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x1204CFFB: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204CFF1; /* 0x1204CFFD: jb 0x1204cff1 */
L_1204CFFF:
    /* test edi, edi */ /* 0x1204CFFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D03E; /* 0x1204D001: je 0x1204d03e */
L_1204D003:
    eax = MEM32(ebx + 0xCC); /* 0x1204D003: mov eax, dword ptr [ebx + 0xcc] */
    eax = MEM32(eax + 0x244); /* 0x1204D009: mov eax, dword ptr [eax + 0x244] */
    eax = MEM32(eax + esi * 4); /* 0x1204D00F: mov eax, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1204D012: mov dword ptr [ebp - 8], eax */
    /* cmp eax, esi */ /* 0x1204D015: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D021; /* 0x1204D017: jne 0x1204d021 */
L_1204D019:
    _flag_a = (uint32_t)(MEM32(ebx + 0xF0)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xF0) = MEM32(ebx + 0xF0) + 1; /* 0x1204D019: inc dword ptr [ebx + 0xf0] */
    _flag_k = FK_INC;
    goto L_1204D039; /* 0x1204D01F: jmp 0x1204d039 */
L_1204D021:
    ecx = MEM32(ebx + 0xDC); /* 0x1204D021: mov ecx, dword ptr [ebx + 0xdc] */
    eax = MEM32(ecx + eax * 4); /* 0x1204D027: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ecx + esi * 4) = eax; /* 0x1204D02A: mov dword ptr [ecx + esi*4], eax */
    eax = MEM32(ebx + 0xDC); /* 0x1204D02D: mov eax, dword ptr [ebx + 0xdc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1204D033: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + ecx * 4) = esi; /* 0x1204D036: mov dword ptr [eax + ecx*4], esi */
L_1204D039:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204D039: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1204D03A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D003; /* 0x1204D03C: jb 0x1204d003 */
L_1204D03E:
    eax = MEM32(ebp + (-0x4)); /* 0x1204D03E: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1204D041: pop edi */
    esi = POP32_VAL(esp); /* 0x1204D042: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204D043: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204D044: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204D045: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204D04B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204D04Bu);

L_1204D04B:
    edi = edi; /* 0x1204D04B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1204D04D: push ebx */
    PUSH32(esp, esi); /* 0x1204D04E: push esi */
    esi = ecx; /* 0x1204D04F: mov esi, ecx */
    edx = MEM32(esi + 0xF0); /* 0x1204D051: mov edx, dword ptr [esi + 0xf0] */
    PUSH32(esp, edi); /* 0x1204D057: push edi */
    eax = edx + (-0x1); /* 0x1204D058: lea eax, [edx - 1] */
    ebx = 0x120014BCu; /* 0x1204D05B: mov ebx, 0x120014bc */
    PUSH32(esp, ebx); /* 0x1204D060: push ebx */
    MEM32(esi + 0x124) = eax; /* 0x1204D061: mov dword ptr [esi + 0x124], eax */
    MEM32(esi + 0x120) = edx; /* 0x1204D067: mov dword ptr [esi + 0x120], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D06D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1204D06F: mov eax, edx */
    PUSH32(esp, 8); /* 0x1204D071: push 8 */
    edx = POP32_VAL(esp); /* 0x1204D073: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204D074: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D076: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D078: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D07B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D07D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D07F: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D080: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D085: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D086: pop ecx */
    MEM32(esi + 0x118) = eax; /* 0x1204D087: mov dword ptr [esi + 0x118], eax */
    /* test eax, eax */ /* 0x1204D08D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D08F: je 0x1204d2ad */
L_1204D095:
    PUSH32(esp, ebx); /* 0x1204D095: push ebx */
    PUSH32(esp, MEM32(esi + 0x120)); /* 0x1204D096: push dword ptr [esi + 0x120] */
    RECOMP_CALL(sub_12018970); /* 0x1204D09C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D0A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D0A2: pop ecx */
    MEM32(esi + 0x11C) = eax; /* 0x1204D0A3: mov dword ptr [esi + 0x11c], eax */
    /* test eax, eax */ /* 0x1204D0A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D0AB: je 0x1204d2ad */
L_1204D0B1:
    PUSH32(esp, MEM32(esi + 0x120)); /* 0x1204D0B1: push dword ptr [esi + 0x120] */
    PUSH32(esp, edi); /* 0x1204D0B7: push edi */
    PUSH32(esp, eax); /* 0x1204D0B8: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204D0B9: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x1204D0BE: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D0C4: mov eax, dword ptr [eax + 0x264] */
    PUSH32(esp, ebx); /* 0x1204D0CA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D0CB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D0CD: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D0CF: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D0D0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D0D2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D0D5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D0D7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D0D9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D0DA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1204D0DF: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x128) = eax; /* 0x1204D0E2: mov dword ptr [esi + 0x128], eax */
    /* test eax, eax */ /* 0x1204D0E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D0EA: je 0x1204d2ad */
L_1204D0F0:
    eax = MEM32(esi + 0xCC); /* 0x1204D0F0: mov eax, dword ptr [esi + 0xcc] */
    ecx = edi; /* 0x1204D0F6: mov ecx, edi */
    /* cmp MEM32(eax + 0x264), edi */ /* 0x1204D0F8: cmp dword ptr [eax + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D119; /* 0x1204D0FE: jbe 0x1204d119 */
L_1204D100:
    eax = MEM32(esi + 0x128); /* 0x1204D100: mov eax, dword ptr [esi + 0x128] */
    _flag_a = (uint32_t)((MEM32(eax + ecx * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + ecx * 4) | 0xFFFFFFFFu));
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) | 0xFFFFFFFFu; /* 0x1204D106: or dword ptr [eax + ecx*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xCC); /* 0x1204D10A: mov eax, dword ptr [esi + 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204D110: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x264) */ /* 0x1204D111: cmp ecx, dword ptr [eax + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D100; /* 0x1204D117: jb 0x1204d100 */
L_1204D119:
    eax = MEM32(esi + 0xCC); /* 0x1204D119: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D11F: mov eax, dword ptr [eax + 0x264] */
    PUSH32(esp, ebx); /* 0x1204D125: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D126: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D128: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D12A: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D12B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D12D: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D130: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D132: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D134: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D135: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D13A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D13B: pop ecx */
    ecx = eax; /* 0x1204D13C: mov ecx, eax */
    MEM32(esi + 0x12C) = ecx; /* 0x1204D13E: mov dword ptr [esi + 0x12c], ecx */
    /* test ecx, ecx */ /* 0x1204D144: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D146: je 0x1204d2ad */
L_1204D14C:
    eax = MEM32(esi + 0xCC); /* 0x1204D14C: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D152: mov eax, dword ptr [eax + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204D158: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204D158: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204D15B: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204D15C: push 0xff */
    PUSH32(esp, ecx); /* 0x1204D161: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x1204D162: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x1204D167: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x23C); /* 0x1204D16D: mov eax, dword ptr [eax + 0x23c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC8)); /* 0x1204D173: imul eax, dword ptr [esi + 0xc8] */
    PUSH32(esp, ebx); /* 0x1204D17A: push ebx */
    PUSH32(esp, eax); /* 0x1204D17B: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1204D17C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x130) = eax; /* 0x1204D181: mov dword ptr [esi + 0x130], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D187: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x23C); /* 0x1204D18D: mov eax, dword ptr [eax + 0x23c] */
    PUSH32(esp, ebx); /* 0x1204D193: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D194: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D196: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D198: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D199: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D19B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D19E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D1A0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D1A2: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D1A3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x134) = eax; /* 0x1204D1A8: mov dword ptr [esi + 0x134], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D1AE: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x260); /* 0x1204D1B4: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, ebx); /* 0x1204D1BA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D1BB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D1BD: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D1BF: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D1C0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D1C2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D1C5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D1C7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D1C9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D1CA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x13C) = eax; /* 0x1204D1CF: mov dword ptr [esi + 0x13c], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D1D5: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x260); /* 0x1204D1DB: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, ebx); /* 0x1204D1E1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D1E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D1E4: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D1E6: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D1E7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D1E9: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D1EC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D1EE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D1F0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D1F1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x138) = eax; /* 0x1204D1F6: mov dword ptr [esi + 0x138], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D1FC: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D202: mov eax, dword ptr [eax + 0x264] */
    MEM32(esi + 0x14C) = eax; /* 0x1204D208: mov dword ptr [esi + 0x14c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D20E: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x1204D20F: push ebx */
    MEM32(esi + 0x150) = eax; /* 0x1204D210: mov dword ptr [esi + 0x150], eax */
    eax = MEM32(esi + 0x14C); /* 0x1204D216: mov eax, dword ptr [esi + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D21C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204D21E: push 2 */
    edx = POP32_VAL(esp); /* 0x1204D220: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D221: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D223: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D226: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D228: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D22A: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D22B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x1204D230: add esp, 0x34 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x148) = eax; /* 0x1204D233: mov dword ptr [esi + 0x148], eax */
    /* cmp MEM32(esi + 0x130), edi */ /* 0x1204D239: cmp dword ptr [esi + 0x130], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x130)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D23F: je 0x1204d2ad */
L_1204D241:
    /* cmp MEM32(esi + 0x134), edi */ /* 0x1204D241: cmp dword ptr [esi + 0x134], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D247: je 0x1204d2ad */
L_1204D249:
    /* test eax, eax */ /* 0x1204D249: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D24B: je 0x1204d2ad */
L_1204D24D:
    /* cmp MEM32(esi + 0x13C), edi */ /* 0x1204D24D: cmp dword ptr [esi + 0x13c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x13C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D253: je 0x1204d2ad */
L_1204D255:
    /* cmp MEM32(esi + 0x138), edi */ /* 0x1204D255: cmp dword ptr [esi + 0x138], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x138)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D2AD; /* 0x1204D25B: je 0x1204d2ad */
L_1204D25D:
    eax = MEM32(esi + 0xCC); /* 0x1204D25D: mov eax, dword ptr [esi + 0xcc] */
    edx = edi; /* 0x1204D263: mov edx, edi */
    /* cmp MEM32(eax + 0x260), edi */ /* 0x1204D265: cmp dword ptr [eax + 0x260], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D2B2; /* 0x1204D26B: jbe 0x1204d2b2 */
L_1204D26D:
    ebx = edi; /* 0x1204D26D: mov ebx, edi */
L_1204D26F:
    eax = MEM32(esi + 0x140); /* 0x1204D26F: mov eax, dword ptr [esi + 0x140] */
    ecx = MEM32(eax + ebx + 0x10); /* 0x1204D275: mov ecx, dword ptr [eax + ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + ebx + 0xC); /* 0x1204D279: add ecx, dword ptr [eax + ebx + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x138); /* 0x1204D27D: mov eax, dword ptr [esi + 0x138] */
    MEM32(eax + edx * 4) = ecx; /* 0x1204D283: mov dword ptr [eax + edx*4], ecx */
    eax = MEM32(esi + 0x138); /* 0x1204D286: mov eax, dword ptr [esi + 0x138] */
    ecx = MEM32(eax + edx * 4); /* 0x1204D28C: mov ecx, dword ptr [eax + edx*4] */
    eax = MEM32(esi + 0x13C); /* 0x1204D28F: mov eax, dword ptr [esi + 0x13c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204D295: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + edx * 4) = ecx; /* 0x1204D296: mov dword ptr [eax + edx*4], ecx */
    eax = MEM32(esi + 0xCC); /* 0x1204D299: mov eax, dword ptr [esi + 0xcc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204D29F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x1204D2A0: add ebx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x260) */ /* 0x1204D2A3: cmp edx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D26F; /* 0x1204D2A9: jb 0x1204d26f */
L_1204D2AB:
    goto L_1204D2B2; /* 0x1204D2AB: jmp 0x1204d2b2 */
L_1204D2AD:
    edi = 0x8007000Eu; /* 0x1204D2AD: mov edi, 0x8007000e */
L_1204D2B2:
    eax = edi; /* 0x1204D2B2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204D2B4: pop edi */
    esi = POP32_VAL(esp); /* 0x1204D2B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204D2B6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204D2B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204D2BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204D2BDu);

L_1204D2BD:
    edi = edi; /* 0x1204D2BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204D2BF: push ebp */
    ebp = esp; /* 0x1204D2C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204D2C2: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204D2C5: push ebx */
    PUSH32(esp, esi); /* 0x1204D2C6: push esi */
    PUSH32(esp, edi); /* 0x1204D2C7: push edi */
    edi = ecx; /* 0x1204D2C8: mov edi, ecx */
    eax = MEM32(edi + 0xCC); /* 0x1204D2CA: mov eax, dword ptr [edi + 0xcc] */
    ebx = (uint32_t)MEM16(eax + 0x23C); /* 0x1204D2D0: movzx ebx, word ptr [eax + 0x23c] */
    PUSH32(esp, 0x120014BCu); /* 0x1204D2D7: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D2DC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204D2DE: push 2 */
    edx = POP32_VAL(esp); /* 0x1204D2E0: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204D2E1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1204D2E3: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D2E5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D2E7: seto cl */
    MEM32(ebp + (-0x4)) = edi; /* 0x1204D2EA: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1204D2ED: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D2F0: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D2F2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D2F4: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D2F5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D2FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D2FB: pop ecx */
    MEM32(edi + 0xDC) = eax; /* 0x1204D2FC: mov dword ptr [edi + 0xdc], eax */
    /* test eax, eax */ /* 0x1204D302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204D316; /* 0x1204D304: jne 0x1204d316 */
L_1204D306:
    PUSH32(esp, esi); /* 0x1204D306: push esi */
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1204D307: mov dword ptr [ebp - 8], 0x8007000e */
    RECOMP_CALL(sub_121BF388); /* 0x1204D30E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D313: pop ecx */
    goto L_1204D395; /* 0x1204D314: jmp 0x1204d395 */
L_1204D316:
    edx = edi + 0xF0; /* 0x1204D316: lea edx, [edi + 0xf0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204D31C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x1204D31E: mov dword ptr [ebp - 0xc], edx */
    MEM32(edx) = esi; /* 0x1204D321: mov dword ptr [edx], esi */
    ecx = esi; /* 0x1204D323: mov ecx, esi */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1204D325: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204D342; /* 0x1204D328: jae 0x1204d342 */
L_1204D32A:
    edx = esi; /* 0x1204D32A: mov edx, esi */
L_1204D32C:
    eax = MEM32(edi + 0xDC); /* 0x1204D32C: mov eax, dword ptr [edi + 0xdc] */
    MEM16(edx + eax) = (uint16_t)(LO16(ecx)); /* 0x1204D332: mov word ptr [edx + eax], cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204D336: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204D337: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x1204D33A: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D32C; /* 0x1204D33D: jb 0x1204d32c */
L_1204D33F:
    edx = MEM32(ebp + (-0xC)); /* 0x1204D33F: mov edx, dword ptr [ebp - 0xc] */
L_1204D342:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204D342: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1204D344: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204D395; /* 0x1204D347: jae 0x1204d395 */
L_1204D349:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204D349: mov ecx, dword ptr [ebp - 4] */
    edi = esi; /* 0x1204D34C: mov edi, esi */
L_1204D34E:
    eax = MEM32(ecx + 0xCC); /* 0x1204D34E: mov eax, dword ptr [ecx + 0xcc] */
    eax = MEM32(eax + 0x244); /* 0x1204D354: mov eax, dword ptr [eax + 0x244] */
    eax = (uint32_t)MEM16(edi + eax); /* 0x1204D35A: movzx eax, word ptr [edi + eax] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1204D35E: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D367; /* 0x1204D361: jne 0x1204d367 */
L_1204D363:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1204D363: inc dword ptr [edx] */
    _flag_k = FK_INC;
    goto L_1204D38C; /* 0x1204D365: jmp 0x1204d38c */
L_1204D367:
    ecx = MEM32(ecx + 0xDC); /* 0x1204D367: mov ecx, dword ptr [ecx + 0xdc] */
    edx = eax; /* 0x1204D36D: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1204D36F: add edx, edx */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(edx + ecx)); /* 0x1204D371: mov ax, word ptr [edx + ecx] */
    MEM16(edi + ecx) = (uint16_t)(LO16(eax)); /* 0x1204D375: mov word ptr [edi + ecx], ax */
    ecx = MEM32(ebp + (-0x4)); /* 0x1204D379: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0xDC); /* 0x1204D37C: mov eax, dword ptr [ecx + 0xdc] */
    MEM16(edx + eax) = (uint16_t)(LO16(esi)); /* 0x1204D382: mov word ptr [edx + eax], si */
    edx = ecx + 0xF0; /* 0x1204D386: lea edx, [ecx + 0xf0] */
L_1204D38C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204D38C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1204D38D: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(ebx) */ /* 0x1204D390: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D34E; /* 0x1204D393: jb 0x1204d34e */
L_1204D395:
    eax = MEM32(ebp + (-0x8)); /* 0x1204D395: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1204D398: pop edi */
    esi = POP32_VAL(esp); /* 0x1204D399: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204D39A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204D39B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204D39C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204D3A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204D3A2u);

L_1204D3A2:
    edi = edi; /* 0x1204D3A2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1204D3A4: push ebx */
    PUSH32(esp, esi); /* 0x1204D3A5: push esi */
    esi = ecx; /* 0x1204D3A6: mov esi, ecx */
    edx = MEM32(esi + 0xF0); /* 0x1204D3A8: mov edx, dword ptr [esi + 0xf0] */
    PUSH32(esp, edi); /* 0x1204D3AE: push edi */
    eax = edx + (-0x1); /* 0x1204D3AF: lea eax, [edx - 1] */
    ebx = 0x120014BCu; /* 0x1204D3B2: mov ebx, 0x120014bc */
    PUSH32(esp, ebx); /* 0x1204D3B7: push ebx */
    MEM32(esi + 0x124) = eax; /* 0x1204D3B8: mov dword ptr [esi + 0x124], eax */
    MEM32(esi + 0x120) = edx; /* 0x1204D3BE: mov dword ptr [esi + 0x120], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D3C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1204D3C6: mov eax, edx */
    PUSH32(esp, 8); /* 0x1204D3C8: push 8 */
    edx = POP32_VAL(esp); /* 0x1204D3CA: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204D3CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D3CD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D3CF: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D3D2: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D3D4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D3D6: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D3D7: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D3DC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D3DD: pop ecx */
    MEM32(esi + 0x118) = eax; /* 0x1204D3DE: mov dword ptr [esi + 0x118], eax */
    /* test eax, eax */ /* 0x1204D3E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D3E6: je 0x1204d606 */
L_1204D3EC:
    PUSH32(esp, ebx); /* 0x1204D3EC: push ebx */
    PUSH32(esp, MEM32(esi + 0x120)); /* 0x1204D3ED: push dword ptr [esi + 0x120] */
    RECOMP_CALL(sub_12018970); /* 0x1204D3F3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D3F8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D3F9: pop ecx */
    MEM32(esi + 0x11C) = eax; /* 0x1204D3FA: mov dword ptr [esi + 0x11c], eax */
    /* test eax, eax */ /* 0x1204D400: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D402: je 0x1204d606 */
L_1204D408:
    PUSH32(esp, MEM32(esi + 0x120)); /* 0x1204D408: push dword ptr [esi + 0x120] */
    PUSH32(esp, edi); /* 0x1204D40E: push edi */
    PUSH32(esp, eax); /* 0x1204D40F: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1204D410: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x1204D415: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D41B: mov eax, dword ptr [eax + 0x264] */
    PUSH32(esp, ebx); /* 0x1204D421: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D422: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D424: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D426: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D427: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D429: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D42C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D42E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D430: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D431: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1204D436: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x128) = eax; /* 0x1204D439: mov dword ptr [esi + 0x128], eax */
    /* test eax, eax */ /* 0x1204D43F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D441: je 0x1204d606 */
L_1204D447:
    eax = MEM32(esi + 0xCC); /* 0x1204D447: mov eax, dword ptr [esi + 0xcc] */
    ecx = edi; /* 0x1204D44D: mov ecx, edi */
    /* cmp MEM32(eax + 0x264), edi */ /* 0x1204D44F: cmp dword ptr [eax + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D473; /* 0x1204D455: jbe 0x1204d473 */
L_1204D457:
    eax = MEM32(esi + 0x128); /* 0x1204D457: mov eax, dword ptr [esi + 0x128] */
    MEM32(eax + ecx * 4) = 0xFFFFu; /* 0x1204D45D: mov dword ptr [eax + ecx*4], 0xffff */
    eax = MEM32(esi + 0xCC); /* 0x1204D464: mov eax, dword ptr [esi + 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204D46A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x264) */ /* 0x1204D46B: cmp ecx, dword ptr [eax + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D457; /* 0x1204D471: jb 0x1204d457 */
L_1204D473:
    eax = MEM32(esi + 0xCC); /* 0x1204D473: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D479: mov eax, dword ptr [eax + 0x264] */
    PUSH32(esp, ebx); /* 0x1204D47F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D480: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204D482: push 2 */
    edx = POP32_VAL(esp); /* 0x1204D484: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D485: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D487: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D48A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D48C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D48E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D48F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204D494: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204D495: pop ecx */
    ecx = eax; /* 0x1204D496: mov ecx, eax */
    MEM32(esi + 0x12C) = ecx; /* 0x1204D498: mov dword ptr [esi + 0x12c], ecx */
    /* test ecx, ecx */ /* 0x1204D49E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D4A0: je 0x1204d606 */
L_1204D4A6:
    eax = MEM32(esi + 0xCC); /* 0x1204D4A6: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D4AC: mov eax, dword ptr [eax + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204D4B2: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204D4B4: push eax */
    PUSH32(esp, 0xFFu); /* 0x1204D4B5: push 0xff */
    PUSH32(esp, ecx); /* 0x1204D4BA: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x1204D4BB: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x1204D4C0: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x23C); /* 0x1204D4C6: mov eax, dword ptr [eax + 0x23c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xC8)); /* 0x1204D4CC: imul eax, dword ptr [esi + 0xc8] */
    PUSH32(esp, ebx); /* 0x1204D4D3: push ebx */
    PUSH32(esp, eax); /* 0x1204D4D4: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1204D4D5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x130) = eax; /* 0x1204D4DA: mov dword ptr [esi + 0x130], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D4E0: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x23C); /* 0x1204D4E6: mov eax, dword ptr [eax + 0x23c] */
    PUSH32(esp, ebx); /* 0x1204D4EC: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D4ED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D4EF: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D4F1: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D4F2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D4F4: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D4F7: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D4F9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D4FB: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D4FC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x134) = eax; /* 0x1204D501: mov dword ptr [esi + 0x134], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D507: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x260); /* 0x1204D50D: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, ebx); /* 0x1204D513: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D514: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D516: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D518: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D519: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D51B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D51E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D520: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D522: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D523: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x13C) = eax; /* 0x1204D528: mov dword ptr [esi + 0x13c], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D52E: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x260); /* 0x1204D534: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, ebx); /* 0x1204D53A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D53B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D53D: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D53F: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D540: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D542: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D545: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D547: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D549: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D54A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x138) = eax; /* 0x1204D54F: mov dword ptr [esi + 0x138], eax */
    eax = MEM32(esi + 0xCC); /* 0x1204D555: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x1204D55B: mov eax, dword ptr [eax + 0x264] */
    MEM32(esi + 0x14C) = eax; /* 0x1204D561: mov dword ptr [esi + 0x14c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D567: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x1204D568: push ebx */
    MEM32(esi + 0x150) = eax; /* 0x1204D569: mov dword ptr [esi + 0x150], eax */
    eax = MEM32(esi + 0x14C); /* 0x1204D56F: mov eax, dword ptr [esi + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D575: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204D577: push 2 */
    edx = POP32_VAL(esp); /* 0x1204D579: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D57A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D57C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D57F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D581: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D583: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D584: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x1204D589: add esp, 0x34 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x148) = eax; /* 0x1204D58C: mov dword ptr [esi + 0x148], eax */
    /* cmp MEM32(esi + 0x130), edi */ /* 0x1204D592: cmp dword ptr [esi + 0x130], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x130)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D598: je 0x1204d606 */
L_1204D59A:
    /* cmp MEM32(esi + 0x134), edi */ /* 0x1204D59A: cmp dword ptr [esi + 0x134], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D5A0: je 0x1204d606 */
L_1204D5A2:
    /* test eax, eax */ /* 0x1204D5A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D5A4: je 0x1204d606 */
L_1204D5A6:
    /* cmp MEM32(esi + 0x13C), edi */ /* 0x1204D5A6: cmp dword ptr [esi + 0x13c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x13C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D5AC: je 0x1204d606 */
L_1204D5AE:
    /* cmp MEM32(esi + 0x138), edi */ /* 0x1204D5AE: cmp dword ptr [esi + 0x138], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x138)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D606; /* 0x1204D5B4: je 0x1204d606 */
L_1204D5B6:
    eax = MEM32(esi + 0xCC); /* 0x1204D5B6: mov eax, dword ptr [esi + 0xcc] */
    edx = edi; /* 0x1204D5BC: mov edx, edi */
    /* cmp MEM32(eax + 0x260), edi */ /* 0x1204D5BE: cmp dword ptr [eax + 0x260], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D60B; /* 0x1204D5C4: jbe 0x1204d60b */
L_1204D5C6:
    ebx = edi; /* 0x1204D5C6: mov ebx, edi */
L_1204D5C8:
    eax = MEM32(esi + 0x140); /* 0x1204D5C8: mov eax, dword ptr [esi + 0x140] */
    ecx = MEM32(eax + ebx + 0x10); /* 0x1204D5CE: mov ecx, dword ptr [eax + ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + ebx + 0xC); /* 0x1204D5D2: add ecx, dword ptr [eax + ebx + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x138); /* 0x1204D5D6: mov eax, dword ptr [esi + 0x138] */
    MEM32(eax + edx * 4) = ecx; /* 0x1204D5DC: mov dword ptr [eax + edx*4], ecx */
    eax = MEM32(esi + 0x138); /* 0x1204D5DF: mov eax, dword ptr [esi + 0x138] */
    ecx = MEM32(eax + edx * 4); /* 0x1204D5E5: mov ecx, dword ptr [eax + edx*4] */
    eax = MEM32(esi + 0x13C); /* 0x1204D5E8: mov eax, dword ptr [esi + 0x13c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204D5EE: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + edx * 4) = ecx; /* 0x1204D5EF: mov dword ptr [eax + edx*4], ecx */
    eax = MEM32(esi + 0xCC); /* 0x1204D5F2: mov eax, dword ptr [esi + 0xcc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204D5F8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x1204D5F9: add ebx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x260) */ /* 0x1204D5FC: cmp edx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D5C8; /* 0x1204D602: jb 0x1204d5c8 */
L_1204D604:
    goto L_1204D60B; /* 0x1204D604: jmp 0x1204d60b */
L_1204D606:
    edi = 0x8007000Eu; /* 0x1204D606: mov edi, 0x8007000e */
L_1204D60B:
    eax = edi; /* 0x1204D60B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204D60D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204D60E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204D60F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204D610: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204D616(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204D616u);

L_1204D616:
    edi = edi; /* 0x1204D616: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204D618: push ebp */
    ebp = esp; /* 0x1204D619: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204D61B: push ebx */
    PUSH32(esp, esi); /* 0x1204D61C: push esi */
    PUSH32(esp, edi); /* 0x1204D61D: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1204D61E: mov edi, dword ptr [ebp + 0x14] */
    ebx = ecx; /* 0x1204D621: mov ebx, ecx */
    eax = MEM32(ebx + 0xCC); /* 0x1204D623: mov eax, dword ptr [ebx + 0xcc] */
    PUSH32(esp, 0x120014BCu); /* 0x1204D629: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D62E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D630: push 4 */
    MEM32(ebx + 0x1D8) = edi; /* 0x1204D632: mov dword ptr [ebx + 0x1d8], edi */
    eax = MEM32(eax + 0x23C); /* 0x1204D638: mov eax, dword ptr [eax + 0x23c] */
    edx = POP32_VAL(esp); /* 0x1204D63E: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204D63F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D641: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D643: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D646: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D648: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D64A: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D64B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x1204D650: push 0x120014bc */
    MEM32(ebx + 0x1D0) = eax; /* 0x1204D655: mov dword ptr [ebx + 0x1d0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204D65B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204D65D: push 4 */
    edx = POP32_VAL(esp); /* 0x1204D65F: pop edx */
    eax = edi; /* 0x1204D660: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204D662: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204D664: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204D667: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204D669: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204D66B: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204D66C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x1D0); /* 0x1204D671: mov ecx, dword ptr [ebx + 0x1d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1204D677: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x1D4) = eax; /* 0x1204D67A: mov dword ptr [ebx + 0x1d4], eax */
    /* test ecx, ecx */ /* 0x1204D680: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D9E0; /* 0x1204D682: je 0x1204d9e0 */
L_1204D688:
    /* test eax, eax */ /* 0x1204D688: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D9E0; /* 0x1204D68A: je 0x1204d9e0 */
L_1204D690:
    fp_push(1.0); /* 0x1204D690: fld1  */
    eax = MEM32(ebx + 0xCC); /* 0x1204D692: mov eax, dword ptr [ebx + 0xcc] */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1204D698: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D6B9; /* 0x1204D69B: je 0x1204d6b9 */
L_1204D69D:
    eax = MEM32(eax + 0x23C); /* 0x1204D69D: mov eax, dword ptr [eax + 0x23c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204D6A3: fstp st(0) */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204D6A5: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204D6A5: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204D6A8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204D6A9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1204D6AC: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x1204D6AD: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1204D6B2: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204D6B4: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1204D6DB; /* 0x1204D6B7: jmp 0x1204d6db */
L_1204D6B9:
    ecx = esi; /* 0x1204D6B9: mov ecx, esi */
    /* cmp MEM32(eax + 0x23C), esi */ /* 0x1204D6BB: cmp dword ptr [eax + 0x23c], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x23C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D6DB; /* 0x1204D6C1: jbe 0x1204d6db */
L_1204D6C3:
    eax = MEM32(ebx + 0x1D0); /* 0x1204D6C3: mov eax, dword ptr [ebx + 0x1d0] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1204D6C9: fst dword ptr [eax + ecx*4] */
    eax = MEM32(ebx + 0xCC); /* 0x1204D6CC: mov eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204D6D2: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x23C) */ /* 0x1204D6D3: cmp ecx, dword ptr [eax + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D6C3; /* 0x1204D6D9: jb 0x1204d6c3 */
L_1204D6DB:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1204D6DB: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D6FB; /* 0x1204D6DE: je 0x1204d6fb */
L_1204D6E0:
    eax = edi; /* 0x1204D6E0: mov eax, edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204D6E2: fstp st(0) */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204D6E4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204D6E4: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204D6E7: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204D6E8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebx + 0x1D4)); /* 0x1204D6EB: push dword ptr [ebx + 0x1d4] */
    RECOMP_CALL(sub_121BF440); /* 0x1204D6F1: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204D6F6: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1204D711; /* 0x1204D6F9: jmp 0x1204d711 */
L_1204D6FB:
    ecx = esi; /* 0x1204D6FB: mov ecx, esi */
    /* test edi, edi */ /* 0x1204D6FD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204D70F; /* 0x1204D6FF: je 0x1204d70f */
L_1204D701:
    eax = MEM32(ebx + 0x1D4); /* 0x1204D701: mov eax, dword ptr [ebx + 0x1d4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1204D707: fst dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204D70A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x1204D70B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204D701; /* 0x1204D70D: jb 0x1204d701 */
L_1204D70F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204D70F: fstp st(0) */
L_1204D711:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1204D711: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D728; /* 0x1204D714: je 0x1204d728 */
L_1204D716:
    esi = MEM32(ebp + 0x8); /* 0x1204D716: mov esi, dword ptr [ebp + 8] */
    eax = ebx + 0x158; /* 0x1204D719: lea eax, [ebx + 0x158] */
    PUSH32(esp, 0xFu); /* 0x1204D71F: push 0xf */
    ecx = POP32_VAL(esp); /* 0x1204D721: pop ecx */
    edi = eax; /* 0x1204D722: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1204D724: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1204D750; /* 0x1204D726: jmp 0x1204d750 */
L_1204D728:
    PUSH32(esp, 0x3Cu); /* 0x1204D728: push 0x3c */
    edi = ebx + 0x158; /* 0x1204D72A: lea edi, [ebx + 0x158] */
    PUSH32(esp, esi); /* 0x1204D730: push esi */
    PUSH32(esp, edi); /* 0x1204D731: push edi */
    RECOMP_CALL(sub_121BF434); /* 0x1204D732: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1204D737: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(edi) = _v; } /* 0x1204D739: fst dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204D73B: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x160) = _v; } /* 0x1204D73E: fst dword ptr [ebx + 0x160] */
    eax = ebx + 0x158; /* 0x1204D744: lea eax, [ebx + 0x158] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x15C) = _v; } /* 0x1204D74A: fstp dword ptr [ebx + 0x15c] */
L_1204D750:
    fp_push(*(float*)&MEM32(ebx + 0xD0)); /* 0x1204D750: fld dword ptr [ebx + 0xd0] */
    PUSH32(esp, 0xFu); /* 0x1204D756: push 0xf */
    _st[0] *= *(double*)ADDR(0x120061D0); /* 0x1204D758: fmul qword ptr [0x120061d0] */
    edi = ebx + 0x194; /* 0x1204D75E: lea edi, [ebx + 0x194] */
    fp_push(*(float*)&MEM32(ebx + 0x160)); /* 0x1204D764: fld dword ptr [ebx + 0x160] */
    ecx = POP32_VAL(esp); /* 0x1204D76A: pop ecx */
    esi = eax; /* 0x1204D76B: mov esi, eax */
    _st[0] *= _st[1]; /* 0x1204D76D: fmul st(1) */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1204D76F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204D771: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204D774: fld dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x160) = _v; } /* 0x1204D777: fst dword ptr [ebx + 0x160] */
    fp_push(*(float*)&MEM32(ebx + 0x18C)); /* 0x1204D77D: fld dword ptr [ebx + 0x18c] */
    _st[0] *= _st[2]; /* 0x1204D783: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x18C) = _v; } /* 0x1204D785: fstp dword ptr [ebx + 0x18c] */
    fp_push(*(float*)&MEM32(ebx + 0x190)); /* 0x1204D78B: fld dword ptr [ebx + 0x190] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204D791: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204D793: fmulp st(2) */
    fp_xch(1); /* 0x1204D795: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x190) = _v; } /* 0x1204D797: fstp dword ptr [ebx + 0x190] */
    fp_push(*(float*)&MEM32(ebx + 0xD0)); /* 0x1204D79D: fld dword ptr [ebx + 0xd0] */
    _st[0] *= *(double*)ADDR(0x120061C8); /* 0x1204D7A3: fmul qword ptr [0x120061c8] */
    fp_push(*(float*)&MEM32(ebx + 0x164)); /* 0x1204D7A9: fld dword ptr [ebx + 0x164] */
    _st[0] *= _st[1]; /* 0x1204D7AF: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x164) = _v; } /* 0x1204D7B1: fstp dword ptr [ebx + 0x164] */
    fp_push(*(float*)&MEM32(ebx + 0x168)); /* 0x1204D7B7: fld dword ptr [ebx + 0x168] */
    _st[0] *= _st[1]; /* 0x1204D7BD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x168) = _v; } /* 0x1204D7BF: fstp dword ptr [ebx + 0x168] */
    fp_push(*(float*)&MEM32(ebx + 0x16C)); /* 0x1204D7C5: fld dword ptr [ebx + 0x16c] */
    _st[0] *= _st[1]; /* 0x1204D7CB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x16C) = _v; } /* 0x1204D7CD: fstp dword ptr [ebx + 0x16c] */
    fp_push(*(float*)&MEM32(ebx + 0x170)); /* 0x1204D7D3: fld dword ptr [ebx + 0x170] */
    _st[0] *= _st[1]; /* 0x1204D7D9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x170) = _v; } /* 0x1204D7DB: fstp dword ptr [ebx + 0x170] */
    fp_push(*(float*)&MEM32(ebx + 0x174)); /* 0x1204D7E1: fld dword ptr [ebx + 0x174] */
    _st[0] *= _st[1]; /* 0x1204D7E7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x174) = _v; } /* 0x1204D7E9: fstp dword ptr [ebx + 0x174] */
    fp_push(*(float*)&MEM32(ebx + 0x178)); /* 0x1204D7EF: fld dword ptr [ebx + 0x178] */
    _st[0] *= _st[1]; /* 0x1204D7F5: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x178) = _v; } /* 0x1204D7F7: fstp dword ptr [ebx + 0x178] */
    fp_push(*(float*)&MEM32(ebx + 0x17C)); /* 0x1204D7FD: fld dword ptr [ebx + 0x17c] */
    _st[0] *= _st[1]; /* 0x1204D803: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x17C) = _v; } /* 0x1204D805: fstp dword ptr [ebx + 0x17c] */
    fp_push(*(float*)&MEM32(ebx + 0x180)); /* 0x1204D80B: fld dword ptr [ebx + 0x180] */
    _st[0] *= _st[1]; /* 0x1204D811: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x180) = _v; } /* 0x1204D813: fstp dword ptr [ebx + 0x180] */
    fp_push(*(float*)&MEM32(ebx + 0x184)); /* 0x1204D819: fld dword ptr [ebx + 0x184] */
    _st[0] *= _st[1]; /* 0x1204D81F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x184) = _v; } /* 0x1204D821: fstp dword ptr [ebx + 0x184] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x188); /* 0x1204D827: fmul dword ptr [ebx + 0x188] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x188) = _v; } /* 0x1204D82D: fstp dword ptr [ebx + 0x188] */
    fp_push(0.0); /* 0x1204D833: fldz  */
    /* cmp MEM32(ebx + 0x9C), esi */ /* 0x1204D835: cmp dword ptr [ebx + 0x9c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x9C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D854; /* 0x1204D83B: je 0x1204d854 */
L_1204D83D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204D83D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D83F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1204D841: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1204D843: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D856; /* 0x1204D846: jp 0x1204d856 */
L_1204D848:
    MEM32(ebx + 0x1DC) = 1; /* 0x1204D848: mov dword ptr [ebx + 0x1dc], 1 */
    goto L_1204D856; /* 0x1204D852: jmp 0x1204d856 */
L_1204D854:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1204D854: fstp st(1) */
L_1204D856:
    edx = MEM32(ebx + 0xCC); /* 0x1204D856: mov edx, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x1204D85C: add edx, 0xc */
    _flag_k = FK_ADD;
    goto L_1204D9CA; /* 0x1204D85F: jmp 0x1204d9ca */
L_1204D864:
    /* cmp MEM8(edx + 0x5), 0 */ /* 0x1204D864: cmp byte ptr [edx + 5], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D9C7; /* 0x1204D868: jne 0x1204d9c7 */
L_1204D86E:
    eax = (uint32_t)MEM8(edx + 0x6); /* 0x1204D86E: movzx eax, byte ptr [edx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1204D872: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204D988; /* 0x1204D875: je 0x1204d988 */
L_1204D87B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D87B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D87C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204D946; /* 0x1204D87D: je 0x1204d946 */
L_1204D883:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D883: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204D920; /* 0x1204D884: je 0x1204d920 */
L_1204D88A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204D88A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1204D8F7; /* 0x1204D88B: je 0x1204d8f7 */
L_1204D88D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1204D88D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1204D9C7; /* 0x1204D890: jne 0x1204d9c7 */
L_1204D896:
    SET_LO8(eax, MEM8(edx + 0x7)); /* 0x1204D896: mov al, byte ptr [edx + 7] */
    /* cmp LO8(eax), 1 */ /* 0x1204D899: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D8C6; /* 0x1204D89B: jne 0x1204d8c6 */
L_1204D89D:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x168)); /* 0x1204D89D: fcom dword ptr [ebx + 0x168] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D8A3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D8A5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D8A8: jp 0x1204d9c7 */
L_1204D8AE:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D8AE: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D8B4: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    fp_push(*(float*)&MEM32(ebx + 0x168)); /* 0x1204D8BB: fld dword ptr [ebx + 0x168] */
    goto L_1204D9B4; /* 0x1204D8C1: jmp 0x1204d9b4 */
L_1204D8C6:
    /* test LO8(eax), LO8(eax) */ /* 0x1204D8C6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204D9C7; /* 0x1204D8C8: jne 0x1204d9c7 */
L_1204D8CE:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x164)); /* 0x1204D8CE: fcom dword ptr [ebx + 0x164] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D8D4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D8D6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D8D9: jp 0x1204d9c7 */
L_1204D8DF:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D8DF: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D8E5: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    fp_push(*(float*)&MEM32(ebx + 0x164)); /* 0x1204D8EC: fld dword ptr [ebx + 0x164] */
    goto L_1204D9B4; /* 0x1204D8F2: jmp 0x1204d9b4 */
L_1204D8F7:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x190)); /* 0x1204D8F7: fcom dword ptr [ebx + 0x190] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D8FD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D8FF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D902: jp 0x1204d9c7 */
L_1204D908:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D908: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D90E: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    fp_push(*(float*)&MEM32(ebx + 0x190)); /* 0x1204D915: fld dword ptr [ebx + 0x190] */
    goto L_1204D9B4; /* 0x1204D91B: jmp 0x1204d9b4 */
L_1204D920:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x18C)); /* 0x1204D920: fcom dword ptr [ebx + 0x18c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D926: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D928: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D92B: jp 0x1204d9c7 */
L_1204D931:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D931: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D937: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    fp_push(*(float*)&MEM32(ebx + 0x18C)); /* 0x1204D93E: fld dword ptr [ebx + 0x18c] */
    goto L_1204D9B4; /* 0x1204D944: jmp 0x1204d9b4 */
L_1204D946:
    SET_LO8(eax, MEM8(edx + 0x7)); /* 0x1204D946: mov al, byte ptr [edx + 7] */
    /* cmp LO8(eax), 7 */ /* 0x1204D949: cmp al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D952; /* 0x1204D94B: jbe 0x1204d952 */
L_1204D94D:
    PUSH32(esp, 7); /* 0x1204D94D: push 7 */
    eax = POP32_VAL(esp); /* 0x1204D94F: pop eax */
    goto L_1204D955; /* 0x1204D950: jmp 0x1204d955 */
L_1204D952:
    eax = (uint32_t)LO8(eax); /* 0x1204D952: movzx eax, al */
L_1204D955:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + eax * 4 + 0x16C)); /* 0x1204D955: fcom dword ptr [ebx + eax*4 + 0x16c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D95C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D95E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D961: jp 0x1204d9c7 */
L_1204D963:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D963: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D969: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    SET_LO8(eax, MEM8(edx + 0x7)); /* 0x1204D970: mov al, byte ptr [edx + 7] */
    /* cmp LO8(eax), 7 */ /* 0x1204D973: cmp al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204D97C; /* 0x1204D975: jbe 0x1204d97c */
L_1204D977:
    PUSH32(esp, 7); /* 0x1204D977: push 7 */
    edi = POP32_VAL(esp); /* 0x1204D979: pop edi */
    goto L_1204D97F; /* 0x1204D97A: jmp 0x1204d97f */
L_1204D97C:
    edi = (uint32_t)LO8(eax); /* 0x1204D97C: movzx edi, al */
L_1204D97F:
    fp_push(*(float*)&MEM32(ebx + edi * 4 + 0x16C)); /* 0x1204D97F: fld dword ptr [ebx + edi*4 + 0x16c] */
    goto L_1204D9B4; /* 0x1204D986: jmp 0x1204d9b4 */
L_1204D988:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x160)); /* 0x1204D988: fcom dword ptr [ebx + 0x160] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204D98E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204D990: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204D9C7; /* 0x1204D993: jp 0x1204d9c7 */
L_1204D995:
    /* cmp MEM8(edx + 0x7), 0 */ /* 0x1204D995: cmp byte ptr [edx + 7], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D9A1; /* 0x1204D999: jne 0x1204d9a1 */
L_1204D99B:
    /* cmp MEM8(edx + 0x4), 2 */ /* 0x1204D99B: cmp byte ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(edx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204D9C7; /* 0x1204D99F: je 0x1204d9c7 */
L_1204D9A1:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D9A1: mov eax, dword ptr [ebx + 0x3e8] */
    MEM32(ebx + eax * 4 + 0x1E0) = edx; /* 0x1204D9A7: mov dword ptr [ebx + eax*4 + 0x1e0], edx */
    fp_push(*(float*)&MEM32(ebx + 0x160)); /* 0x1204D9AE: fld dword ptr [ebx + 0x160] */
L_1204D9B4:
    eax = MEM32(ebx + 0x3E8); /* 0x1204D9B4: mov eax, dword ptr [ebx + 0x3e8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4 + 0x2E4) = _v; } /* 0x1204D9BA: fstp dword ptr [ebx + eax*4 + 0x2e4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3E8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x3E8) = MEM32(ebx + 0x3E8) + 1; /* 0x1204D9C1: inc dword ptr [ebx + 0x3e8] */
    _flag_k = FK_INC;
L_1204D9C7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204D9C7: add edx, 8 */
    _flag_k = FK_ADD;
L_1204D9CA:
    /* cmp MEM16(edx), 0xFFu */ /* 0x1204D9CA: cmp word ptr [edx], 0xff */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204D864; /* 0x1204D9CF: jne 0x1204d864 */
L_1204D9D5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204D9D5: fstp st(0) */
L_1204D9D7:
    edi = POP32_VAL(esp); /* 0x1204D9D7: pop edi */
    eax = esi; /* 0x1204D9D8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1204D9DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204D9DB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204D9DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204D9DD: ret 0x14 */
L_1204D9E0:
    esi = 0x8007000Eu; /* 0x1204D9E0: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1204D9D7; /* 0x1204D9E5: jmp 0x1204d9d7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204D9EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204D9ECu);

L_1204D9EC:
    edi = edi; /* 0x1204D9EC: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204D9EE: push esi */
    esi = ecx; /* 0x1204D9EF: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1204D9F1: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1204D9F4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1204D9F9: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_121BF388); /* 0x1204D9FC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DA01: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DA02: pop ecx */
    esi = POP32_VAL(esp); /* 0x1204DA03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DA04: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DA0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DA0Au);

L_1204DA0A:
    edi = edi; /* 0x1204DA0A: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204DA0C: push esi */
    esi = ecx; /* 0x1204DA0D: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1204DA0F: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF388); /* 0x1204DA12: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1204DA17: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_121BF388); /* 0x1204DA1A: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DA1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DA20: pop ecx */
    esi = POP32_VAL(esp); /* 0x1204DA21: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DA22: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DA28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DA28u);

L_1204DA28:
    edi = edi; /* 0x1204DA28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DA2A: push ebp */
    ebp = esp; /* 0x1204DA2B: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x14)); /* 0x1204DA2D: mov al, byte ptr [ebp + 0x14] */
    SET_LO16(edx, MEM16(ebp + 0xC)); /* 0x1204DA30: mov dx, word ptr [ebp + 0xc] */
    /* cmp LO8(eax), 2 */ /* 0x1204DA34: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x1204DA36: push ebx */
    PUSH32(esp, esi); /* 0x1204DA37: push esi */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x1204DA38: mov si, word ptr [ebp + 8] */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204DA3C: setne bl */
    /* test LO8(eax), LO8(eax) */ /* 0x1204DA3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1204DA41: push edi */
    edi = ecx; /* 0x1204DA42: mov edi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1204DA44: mov ecx, dword ptr [ebp + 0x10] */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204DA47: setne al */
    MEM8(edi + 0x11) = (uint8_t)(LO8(eax)); /* 0x1204DA4A: mov byte ptr [edi + 0x11], al */
    eax = (uint32_t)LO16(edx); /* 0x1204DA4D: movzx eax, dx */
    PUSH32(esp, eax); /* 0x1204DA50: push eax */
    eax = (uint32_t)LO16(esi); /* 0x1204DA51: movzx eax, si */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204DA54: imul eax, eax, 6 */
    MEM16(edi) = (uint16_t)(LO16(esi)); /* 0x1204DA57: mov word ptr [edi], si */
    MEM16(edi + 0x2) = (uint16_t)(LO16(edx)); /* 0x1204DA5A: mov word ptr [edi + 2], dx */
    MEM16(edi + 0x4) = (uint16_t)(LO16(esi)); /* 0x1204DA5E: mov word ptr [edi + 4], si */
    MEM32(edi + 0xC) = ecx; /* 0x1204DA62: mov dword ptr [edi + 0xc], ecx */
    MEM8(edi + 0x10) = (uint8_t)(LO8(ebx)); /* 0x1204DA65: mov byte ptr [edi + 0x10], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x24C); /* 0x1204DA68: add eax, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204DA6E: push eax */
    RECOMP_CALL(sub_1204CC49); /* 0x1204DA6F: call 0x1204cc49 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x8) = (uint16_t)(LO16(eax)); /* 0x1204DA74: mov word ptr [edi + 8], ax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1204DA78: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DA8C; /* 0x1204DA7A: jne 0x1204da8c */
L_1204DA7C:
    eax = (uint32_t)LO16(eax); /* 0x1204DA7C: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204DA7F: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204DA82: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204DA84: cdq  */
    ecx = POP32_VAL(esp); /* 0x1204DA85: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1204DA86: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x1204DA88: mov word ptr [edi + 8], dx */
L_1204DA8C:
    SET_LO16(eax, MEM16(edi + 0x8)); /* 0x1204DA8C: mov ax, word ptr [edi + 8] */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1204DA90: mov word ptr [edi + 6], ax */
    eax = edi; /* 0x1204DA94: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204DA96: pop edi */
    esi = POP32_VAL(esp); /* 0x1204DA97: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204DA98: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204DA99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204DA9A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204DAA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DAA2u);

L_1204DAA2:
    edi = edi; /* 0x1204DAA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DAA4: push ebp */
    ebp = esp; /* 0x1204DAA5: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x14)); /* 0x1204DAA7: mov al, byte ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x1204DAAA: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1204DAAD: push ebx */
    PUSH32(esp, esi); /* 0x1204DAAE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204DAAF: mov esi, dword ptr [ebp + 8] */
    /* cmp LO8(eax), 2 */ /* 0x1204DAB2: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204DAB4: setne bl */
    PUSH32(esp, edi); /* 0x1204DAB7: push edi */
    edi = ecx; /* 0x1204DAB8: mov edi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1204DABA: mov ecx, dword ptr [ebp + 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x1204DABD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204DABF: setne al */
    MEM32(edi) = esi; /* 0x1204DAC2: mov dword ptr [edi], esi */
    MEM32(edi + 0x8) = esi; /* 0x1204DAC4: mov dword ptr [edi + 8], esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1204DAC7: imul esi, esi, 0xc */
    MEM32(edi + 0x4) = edx; /* 0x1204DACA: mov dword ptr [edi + 4], edx */
    MEM32(edi + 0x14) = ecx; /* 0x1204DACD: mov dword ptr [edi + 0x14], ecx */
    MEM8(edi + 0x18) = (uint8_t)(LO8(ebx)); /* 0x1204DAD0: mov byte ptr [edi + 0x18], bl */
    MEM8(edi + 0x19) = (uint8_t)(LO8(eax)); /* 0x1204DAD3: mov byte ptr [edi + 0x19], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ecx + 0x24C); /* 0x1204DAD6: add esi, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1204DADC: push edx */
    PUSH32(esp, esi); /* 0x1204DADD: push esi */
    RECOMP_CALL(sub_1204CC83); /* 0x1204DADE: call 0x1204cc83 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x1204DAE3: mov dword ptr [edi + 0x10], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1204DAE6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DAF7; /* 0x1204DAE8: jne 0x1204daf7 */
L_1204DAEA:
    PUSH32(esp, 3); /* 0x1204DAEA: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204DAEC: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DAEF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204DAF1: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204DAF2: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + 0x10) = edx; /* 0x1204DAF4: mov dword ptr [edi + 0x10], edx */
L_1204DAF7:
    eax = MEM32(edi + 0x10); /* 0x1204DAF7: mov eax, dword ptr [edi + 0x10] */
    MEM32(edi + 0xC) = eax; /* 0x1204DAFA: mov dword ptr [edi + 0xc], eax */
    eax = edi; /* 0x1204DAFD: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204DAFF: pop edi */
    esi = POP32_VAL(esp); /* 0x1204DB00: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204DB01: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204DB02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204DB03: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204DB0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DB0Bu);

L_1204DB0B:
    edi = edi; /* 0x1204DB0B: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204DB0D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204DB0E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DB10:
    edx = (uint32_t)LO16(esi); /* 0x1204DB10: movzx edx, si */
    /* cmp MEM16(ecx + edx * 2 + 0x8), 0xFFFFu */ /* 0x1204DB13: cmp word ptr [ecx + edx*2 + 8], 0xffff */
    _flag_a = (uint32_t)(MEM16(ecx + edx * 2 + 0x8)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DB29; /* 0x1204DB1A: jne 0x1204db29 */
L_1204DB1C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204DB1C: inc esi */
    _flag_k = FK_INC;
    /* cmp LO16(esi), 4 */ /* 0x1204DB1D: cmp si, 4 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(4) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DB10; /* 0x1204DB21: jb 0x1204db10 */
L_1204DB23:
    _flag_a = (uint32_t)((LO16(eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((LO16(eax) | 0xFFFFu)) << 16;
    SET_LO16(eax, LO16(eax) | 0xFFFFu); /* 0x1204DB23: or ax, 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x1204DB27: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DB28: ret  */
L_1204DB29:
    eax = (uint32_t)LO16(esi); /* 0x1204DB29: movzx eax, si */
    eax = (uint32_t)MEM16(ecx + eax * 2 + 0x8); /* 0x1204DB2C: movzx eax, word ptr [ecx + eax*2 + 8] */
    ecx = (uint32_t)MEM16(ecx + 0x14); /* 0x1204DB31: movzx ecx, word ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204DB35: add eax, ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1204DB37: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DB38: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DB3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DB3Eu);

L_1204DB3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DB3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x8; /* 0x1204DB40: lea edx, [ecx + 8] */
L_1204DB43:
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x1204DB43: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DB55; /* 0x1204DB46: jne 0x1204db55 */
L_1204DB48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204DB48: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204DB49: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 4 */ /* 0x1204DB4C: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DB43; /* 0x1204DB4F: jb 0x1204db43 */
L_1204DB51:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1204DB51: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DB54: ret  */
L_1204DB55:
    eax = MEM32(ecx + eax * 4 + 0x8); /* 0x1204DB55: mov eax, dword ptr [ecx + eax*4 + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x1C); /* 0x1204DB59: add eax, dword ptr [ecx + 0x1c] */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DB5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DB62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DB62u);

L_1204DB62:
    edi = edi; /* 0x1204DB62: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204DB64: push esi */
    PUSH32(esp, edi); /* 0x1204DB65: push edi */
    esi = ecx; /* 0x1204DB66: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204DB68: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), edi */ /* 0x1204DB6A: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DB9B; /* 0x1204DB6D: jne 0x1204db9b */
L_1204DB6F:
    eax = MEM32(esi + 0xC); /* 0x1204DB6F: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1204DB72: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DB77: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204DB79: push 2 */
    edx = POP32_VAL(esp); /* 0x1204DB7B: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204DB7C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204DB7E: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204DB81: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204DB83: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204DB85: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204DB86: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DB8B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DB8C: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x1204DB8D: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x1204DB90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DB9B; /* 0x1204DB92: jne 0x1204db9b */
L_1204DB94:
    eax = 0x8007000Eu; /* 0x1204DB94: mov eax, 0x8007000e */
    goto L_1204DBBB; /* 0x1204DB99: jmp 0x1204dbbb */
L_1204DB9B:
    ecx = edi; /* 0x1204DB9B: mov ecx, edi */
    /* cmp MEM32(esi + 0xC), edi */ /* 0x1204DB9D: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DBB1; /* 0x1204DBA0: jbe 0x1204dbb1 */
L_1204DBA2:
    eax = MEM32(esi + 0x10); /* 0x1204DBA2: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((MEM16(eax + ecx * 2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + ecx * 2) | 0xFFFFu)) << 16;
    MEM16(eax + ecx * 2) = (uint16_t)(MEM16(eax + ecx * 2) | 0xFFFFu); /* 0x1204DBA5: or word ptr [eax + ecx*2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204DBAB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0xC) */ /* 0x1204DBAC: cmp ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DBA2; /* 0x1204DBAF: jb 0x1204dba2 */
L_1204DBB1:
    MEM32(esi + 0x8) = edi; /* 0x1204DBB1: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x4) = edi; /* 0x1204DBB4: mov dword ptr [esi + 4], edi */
    MEM32(esi) = edi; /* 0x1204DBB7: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DBB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DBBB:
    edi = POP32_VAL(esp); /* 0x1204DBBB: pop edi */
    esi = POP32_VAL(esp); /* 0x1204DBBC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DBBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DBC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DBC3u);

L_1204DBC3:
    edi = edi; /* 0x1204DBC3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DBC5: push ebp */
    ebp = esp; /* 0x1204DBC6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204DBC8: push esi */
    esi = MEM32(ecx + 0xC); /* 0x1204DBC9: mov esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DBCC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1204DBCE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DBE6; /* 0x1204DBD0: je 0x1204dbe6 */
L_1204DBD2:
    eax = MEM32(ecx + 0x10); /* 0x1204DBD2: mov eax, dword ptr [ecx + 0x10] */
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x1204DBD5: mov cx, word ptr [ebp + 8] */
L_1204DBD9:
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1204DBD9: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DBED; /* 0x1204DBDC: je 0x1204dbed */
L_1204DBDE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204DBDE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204DBDF: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1204DBE2: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DBD9; /* 0x1204DBE4: jb 0x1204dbd9 */
L_1204DBE6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1204DBE6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1204DBE8:
    esi = POP32_VAL(esp); /* 0x1204DBE8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204DBE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204DBEA: ret 4 */
L_1204DBED:
    SET_LO8(eax, 1); /* 0x1204DBED: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1204DBE8; /* 0x1204DBEF: jmp 0x1204dbe8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204DBF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DBF6u);

L_1204DBF6:
    edi = edi; /* 0x1204DBF6: mov edi, edi */
    PUSH32(esp, esi); /* 0x1204DBF8: push esi */
    PUSH32(esp, edi); /* 0x1204DBF9: push edi */
    esi = ecx; /* 0x1204DBFA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1204DBFC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), edi */ /* 0x1204DBFE: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DC2F; /* 0x1204DC01: jne 0x1204dc2f */
L_1204DC03:
    eax = MEM32(esi + 0xC); /* 0x1204DC03: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x1204DC06: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DC0B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204DC0D: push 4 */
    edx = POP32_VAL(esp); /* 0x1204DC0F: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204DC10: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204DC12: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204DC15: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204DC17: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204DC19: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204DC1A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DC1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DC20: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x1204DC21: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x1204DC24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DC2F; /* 0x1204DC26: jne 0x1204dc2f */
L_1204DC28:
    eax = 0x8007000Eu; /* 0x1204DC28: mov eax, 0x8007000e */
    goto L_1204DC4D; /* 0x1204DC2D: jmp 0x1204dc4d */
L_1204DC2F:
    ecx = edi; /* 0x1204DC2F: mov ecx, edi */
    /* cmp MEM32(esi + 0xC), edi */ /* 0x1204DC31: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DC43; /* 0x1204DC34: jbe 0x1204dc43 */
L_1204DC36:
    eax = MEM32(esi + 0x10); /* 0x1204DC36: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((MEM32(eax + ecx * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + ecx * 4) | 0xFFFFFFFFu));
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) | 0xFFFFFFFFu; /* 0x1204DC39: or dword ptr [eax + ecx*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204DC3D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0xC) */ /* 0x1204DC3E: cmp ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DC36; /* 0x1204DC41: jb 0x1204dc36 */
L_1204DC43:
    MEM32(esi + 0x8) = edi; /* 0x1204DC43: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x4) = edi; /* 0x1204DC46: mov dword ptr [esi + 4], edi */
    MEM32(esi) = edi; /* 0x1204DC49: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DC4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DC4D:
    edi = POP32_VAL(esp); /* 0x1204DC4D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204DC4E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204DC4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204DC55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DC55u);

L_1204DC55:
    edi = edi; /* 0x1204DC55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DC57: push ebp */
    ebp = esp; /* 0x1204DC58: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204DC5A: push esi */
    esi = MEM32(ecx + 0xC); /* 0x1204DC5B: mov esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DC5E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1204DC60: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DC76; /* 0x1204DC62: je 0x1204dc76 */
L_1204DC64:
    eax = MEM32(ecx + 0x10); /* 0x1204DC64: mov eax, dword ptr [ecx + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1204DC67: mov ecx, dword ptr [ebp + 8] */
L_1204DC6A:
    /* cmp MEM32(eax), ecx */ /* 0x1204DC6A: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DC7D; /* 0x1204DC6C: je 0x1204dc7d */
L_1204DC6E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204DC6E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204DC6F: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1204DC72: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DC6A; /* 0x1204DC74: jb 0x1204dc6a */
L_1204DC76:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1204DC76: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1204DC78:
    esi = POP32_VAL(esp); /* 0x1204DC78: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204DC79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204DC7A: ret 4 */
L_1204DC7D:
    SET_LO8(eax, 1); /* 0x1204DC7D: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1204DC78; /* 0x1204DC7F: jmp 0x1204dc78 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204DC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DC86u);

L_1204DC86:
    edi = edi; /* 0x1204DC86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DC88: push ebp */
    ebp = esp; /* 0x1204DC89: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204DC8B: push ecx */
    PUSH32(esp, ecx); /* 0x1204DC8C: push ecx */
    PUSH32(esp, ebx); /* 0x1204DC8D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DC8E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204DC90: push esi */
    PUSH32(esp, edi); /* 0x1204DC91: push edi */
    eax = edx; /* 0x1204DC92: mov eax, edx */
    /* cmp MEM32(ecx + 0x23C), edx */ /* 0x1204DC94: cmp dword ptr [ecx + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DCB4; /* 0x1204DC9A: jbe 0x1204dcb4 */
L_1204DC9C:
    ebx = MEM32(ebp + 0x10); /* 0x1204DC9C: mov ebx, dword ptr [ebp + 0x10] */
    esi = edx; /* 0x1204DC9F: mov esi, edx */
L_1204DCA1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204DCA1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx + esi * 4) = 0xFFFFu; /* 0x1204DCA2: mov dword ptr [ebx + esi*4], 0xffff */
    esi = (uint32_t)LO16(eax); /* 0x1204DCA9: movzx esi, ax */
    /* cmp esi, MEM32(ecx + 0x23C) */ /* 0x1204DCAC: cmp esi, dword ptr [ecx + 0x23c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DCA1; /* 0x1204DCB2: jb 0x1204dca1 */
L_1204DCB4:
    esi = edx; /* 0x1204DCB4: mov esi, edx */
    /* cmp MEM32(ecx + 0x264), edx */ /* 0x1204DCB6: cmp dword ptr [ecx + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DCD2; /* 0x1204DCBC: jbe 0x1204dcd2 */
L_1204DCBE:
    ebx = MEM32(ebp + 0xC); /* 0x1204DCBE: mov ebx, dword ptr [ebp + 0xc] */
    eax = edx; /* 0x1204DCC1: mov eax, edx */
L_1204DCC3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204DCC3: inc esi */
    _flag_k = FK_INC;
    MEM32(ebx + eax * 4) = eax; /* 0x1204DCC4: mov dword ptr [ebx + eax*4], eax */
    eax = (uint32_t)LO16(esi); /* 0x1204DCC7: movzx eax, si */
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204DCCA: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DCC3; /* 0x1204DCD0: jb 0x1204dcc3 */
L_1204DCD2:
    ebx = edx; /* 0x1204DCD2: mov ebx, edx */
    eax = edx; /* 0x1204DCD4: mov eax, edx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1204DCD6: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1204DCD9: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(ecx + 0x264), edx */ /* 0x1204DCDC: cmp dword ptr [ecx + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DD48; /* 0x1204DCE2: jbe 0x1204dd48 */
L_1204DCE4:
    esi = edx; /* 0x1204DCE4: mov esi, edx */
L_1204DCE6:
    ebx = MEM32(ebp + (-0x4)); /* 0x1204DCE6: mov ebx, dword ptr [ebp - 4] */
    edi = esi; /* 0x1204DCE9: mov edi, esi */
    edi = (uint32_t)((int32_t)edi * (int32_t)6); /* 0x1204DCEB: imul edi, edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ecx + 0x24C); /* 0x1204DCEE: add edi, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    /* cmp MEM16(edi), 0xFFFFu */ /* 0x1204DCF4: cmp word ptr [edi], 0xffff */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DD2D; /* 0x1204DCF9: je 0x1204dd2d */
L_1204DCFB:
    edx = MEM32(ebp + 0x8); /* 0x1204DCFB: mov edx, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(ebx); /* 0x1204DCFE: movzx eax, bx */
    MEM32(edx + esi * 4) = eax; /* 0x1204DD01: mov dword ptr [edx + esi*4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1204DD04: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx + eax * 4) = esi; /* 0x1204DD07: mov dword ptr [edx + eax*4], esi */
    eax = (uint32_t)MEM16(edi); /* 0x1204DD0A: movzx eax, word ptr [edi] */
    edx = MEM32(ebp + 0x10); /* 0x1204DD0D: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204DD10: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204DD11: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204DD13: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + eax * 4) = esi; /* 0x1204DD14: mov dword ptr [edx + eax*4], esi */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1204DD17: movzx eax, word ptr [edi + 2] */
    MEM32(edx + eax * 4) = esi; /* 0x1204DD1B: mov dword ptr [edx + eax*4], esi */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1204DD1E: movzx eax, word ptr [edi + 4] */
    MEM32(edx + eax * 4) = esi; /* 0x1204DD22: mov dword ptr [edx + eax*4], esi */
    eax = MEM32(ebp + (-0x8)); /* 0x1204DD25: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1204DD28: mov dword ptr [ebp - 4], ebx */
    goto L_1204DD37; /* 0x1204DD2B: jmp 0x1204dd37 */
L_1204DD2D:
    edi = MEM32(ebp + 0x8); /* 0x1204DD2D: mov edi, dword ptr [ebp + 8] */
    MEM32(edi + esi * 4) = 0xFFFFu; /* 0x1204DD30: mov dword ptr [edi + esi*4], 0xffff */
L_1204DD37:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204DD37: inc eax */
    _flag_k = FK_INC;
    esi = (uint32_t)LO16(eax); /* 0x1204DD38: movzx esi, ax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1204DD3B: mov dword ptr [ebp - 8], eax */
    /* cmp esi, MEM32(ecx + 0x264) */ /* 0x1204DD3E: cmp esi, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DCE6; /* 0x1204DD44: jb 0x1204dce6 */
L_1204DD46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DD46: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DD48:
    eax = (uint32_t)LO16(ebx); /* 0x1204DD48: movzx eax, bx */
    esi = (uint32_t)LO16(ebx); /* 0x1204DD4B: movzx esi, bx */
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204DD4E: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204DD6C; /* 0x1204DD54: jae 0x1204dd6c */
L_1204DD56:
    ebx = MEM32(ebp + 0xC); /* 0x1204DD56: mov ebx, dword ptr [ebp + 0xc] */
L_1204DD59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204DD59: inc esi */
    _flag_k = FK_INC;
    MEM32(ebx + eax * 4) = 0xFFFFu; /* 0x1204DD5A: mov dword ptr [ebx + eax*4], 0xffff */
    eax = (uint32_t)LO16(esi); /* 0x1204DD61: movzx eax, si */
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204DD64: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DD59; /* 0x1204DD6A: jb 0x1204dd59 */
L_1204DD6C:
    esi = edx; /* 0x1204DD6C: mov esi, edx */
    ebx = edx; /* 0x1204DD6E: mov ebx, edx */
    /* cmp MEM32(ecx + 0x23C), edx */ /* 0x1204DD70: cmp dword ptr [ecx + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DDA0; /* 0x1204DD76: jbe 0x1204dda0 */
L_1204DD78:
    eax = MEM32(ebp + 0x10); /* 0x1204DD78: mov eax, dword ptr [ebp + 0x10] */
    edi = edx; /* 0x1204DD7B: mov edi, edx */
L_1204DD7D:
    /* cmp MEM32(eax + edi * 4), 0xFFFFu */ /* 0x1204DD7D: cmp dword ptr [eax + edi*4], 0xffff */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DD92; /* 0x1204DD84: je 0x1204dd92 */
L_1204DD86:
    edx = MEM32(ebp + 0x10); /* 0x1204DD86: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(esi); /* 0x1204DD89: movzx eax, si */
    MEM32(edx + edi * 4) = eax; /* 0x1204DD8C: mov dword ptr [edx + edi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204DD8F: inc esi */
    _flag_k = FK_INC;
    eax = edx; /* 0x1204DD90: mov eax, edx */
L_1204DD92:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204DD92: inc ebx */
    _flag_k = FK_INC;
    edi = (uint32_t)LO16(ebx); /* 0x1204DD93: movzx edi, bx */
    /* cmp edi, MEM32(ecx + 0x23C) */ /* 0x1204DD96: cmp edi, dword ptr [ecx + 0x23c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DD7D; /* 0x1204DD9C: jb 0x1204dd7d */
L_1204DD9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DD9E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DDA0:
    /* cmp MEM16(ebp + (-0x4)), 0 */ /* 0x1204DDA0: cmp word ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DDAC; /* 0x1204DDA5: je 0x1204ddac */
L_1204DDA7:
    /* test LO16(esi), LO16(esi) */ /* 0x1204DDA7: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DDB1; /* 0x1204DDAA: jne 0x1204ddb1 */
L_1204DDAC:
    edx = 0x88760B5Au; /* 0x1204DDAC: mov edx, 0x88760b5a */
L_1204DDB1:
    edi = POP32_VAL(esp); /* 0x1204DDB1: pop edi */
    esi = POP32_VAL(esp); /* 0x1204DDB2: pop esi */
    eax = edx; /* 0x1204DDB3: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1204DDB5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204DDB6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204DDB7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204DDBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204DDBFu);

L_1204DDBF:
    edi = edi; /* 0x1204DDBF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204DDC1: push ebp */
    ebp = esp; /* 0x1204DDC2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1204DDC4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1204DDC7: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1204DDCB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1204DDCF: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1204DDD3: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1204DDD7: push ebx */
    PUSH32(esp, esi); /* 0x1204DDD8: push esi */
    esi = ecx; /* 0x1204DDD9: mov esi, ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1204DDDB: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx; /* 0x1204DDDE: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x1204DDE0: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00800000u);
    ecx = ecx & 0x00800000u; /* 0x1204DDE5: and ecx, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204DDEB: push edi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1204DDEC: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1204DDEF: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + 0x14) = ecx; /* 0x1204DDF2: mov dword ptr [ebp + 0x14], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DE50; /* 0x1204DDF5: je 0x1204de50 */
L_1204DDF7:
    edi = MEM32(esi + 0x260); /* 0x1204DDF7: mov edi, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x1204DDFD: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DE02: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204DE04: push 4 */
    edx = POP32_VAL(esp); /* 0x1204DE06: pop edx */
    eax = edi; /* 0x1204DE07: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204DE09: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204DE0B: seto cl */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204DE0E: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204DE11: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204DE13: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204DE15: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204DE16: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204DE1B: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204DE1D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DE1E: pop ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1204DE1F: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x1204DE22: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DE30; /* 0x1204DE24: jne 0x1204de30 */
L_1204DE26:
    ebx = 0x8007000Eu; /* 0x1204DE26: mov ebx, 0x8007000e */
    goto L_1204E2B1; /* 0x1204DE2B: jmp 0x1204e2b1 */
L_1204DE30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DE30: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204DE32: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DE89; /* 0x1204DE34: je 0x1204de89 */
L_1204DE36:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204DE36: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204DE38:
    eax = MEM32(esi + 0x25C); /* 0x1204DE38: mov eax, dword ptr [esi + 0x25c] */
    eax = MEM32(edx + eax); /* 0x1204DE3E: mov eax, dword ptr [edx + eax] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1204DE41: mov dword ptr [ebx + ecx*4], eax */
    PUSH32(esp, 0x14u); /* 0x1204DE44: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204DE46: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204DE47: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204DE48: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, edi */ /* 0x1204DE4A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DE38; /* 0x1204DE4C: jb 0x1204de38 */
L_1204DE4E:
    goto L_1204DE89; /* 0x1204DE4E: jmp 0x1204de89 */
L_1204DE50:
    eax = ebp + (-0x24); /* 0x1204DE50: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1204DE53: push eax */
    eax = ebp + (-0x1C); /* 0x1204DE54: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1204DE57: push eax */
    ecx = esi; /* 0x1204DE58: mov ecx, esi */
    RECOMP_CALL(sub_1204BB2D); /* 0x1204DE5A: call 0x1204bb2d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204DE5F: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1204DE61: mov dword ptr [ebp - 0x28], ebx */
    /* test ebx, ebx */ /* 0x1204DE64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204E2AB; /* 0x1204DE66: js 0x1204e2ab */
L_1204DE6C:
    edi = MEM32(ebp + (-0x24)); /* 0x1204DE6C: mov edi, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1204DE6F: mov ebx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0x1204B301u); /* 0x1204DE72: push 0x1204b301 */
    PUSH32(esp, 4); /* 0x1204DE77: push 4 */
    PUSH32(esp, edi); /* 0x1204DE79: push edi */
    PUSH32(esp, ebx); /* 0x1204DE7A: push ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204DE7B: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1204DE7E: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_121BF4B8); /* 0x1204DE81: call 0x121bf4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1204DE86: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1204DE89:
    PUSH32(esp, 0x120014BCu); /* 0x1204DE89: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DE8E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1204DE90: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1204DE92: pop edx */
    eax = edi; /* 0x1204DE93: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204DE95: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204DE97: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204DE9A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204DE9C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204DE9E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204DE9F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DEA4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DEA5: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204DEA6: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1204DEA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204DEB7; /* 0x1204DEAB: jne 0x1204deb7 */
L_1204DEAD:
    ebx = 0x8007000Eu; /* 0x1204DEAD: mov ebx, 0x8007000e */
    goto L_1204E2B4; /* 0x1204DEB2: jmp 0x1204e2b4 */
L_1204DEB7:
    /* test edi, edi */ /* 0x1204DEB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DECA; /* 0x1204DEB9: je 0x1204deca */
L_1204DEBB:
    ecx = edi; /* 0x1204DEBB: mov ecx, edi */
L_1204DEBD:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1204DEBD: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x1204DEC0: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1204DEC4: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204DEC7: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204DEBD; /* 0x1204DEC8: jne 0x1204debd */
L_1204DECA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DECA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1204DECC: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DEE7; /* 0x1204DED2: jbe 0x1204dee7 */
L_1204DED4:
    ecx = MEM32(ebp + 0x10); /* 0x1204DED4: mov ecx, dword ptr [ebp + 0x10] */
L_1204DED7:
    MEM32(ecx + eax * 4) = 0xFFFFu; /* 0x1204DED7: mov dword ptr [ecx + eax*4], 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204DEDE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1204DEDF: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DED7; /* 0x1204DEE5: jb 0x1204ded7 */
L_1204DEE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DEE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1204DEE9: mov dword ptr [ebp - 0x20], eax */
    edx = eax; /* 0x1204DEEC: mov edx, eax */
    /* test edi, edi */ /* 0x1204DEEE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DEFC; /* 0x1204DEF0: je 0x1204defc */
L_1204DEF2:
    /* cmp MEM32(ebx + edx * 4), eax */ /* 0x1204DEF2: cmp dword ptr [ebx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DEFC; /* 0x1204DEF5: je 0x1204defc */
L_1204DEF7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204DEF7: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1204DEF8: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DEF2; /* 0x1204DEFA: jb 0x1204def2 */
L_1204DEFC:
    ecx = eax; /* 0x1204DEFC: mov ecx, eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1204DEFE: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1204DF01: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204DFA5; /* 0x1204DF07: jbe 0x1204dfa5 */
L_1204DF0D:
    ebx = MEM32(ebp + 0xC); /* 0x1204DF0D: mov ebx, dword ptr [ebp + 0xc] */
L_1204DF10:
    eax = (uint32_t)MEM16(ebx + eax * 4); /* 0x1204DF10: movzx eax, word ptr [ebx + eax*4] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204DF14: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DF92; /* 0x1204DF18: je 0x1204df92 */
L_1204DF1A:
    ebx = eax; /* 0x1204DF1A: mov ebx, eax */
    eax = MEM32(esi + 0x254); /* 0x1204DF1C: mov eax, dword ptr [esi + 0x254] */
    eax = MEM32(eax + ebx * 4); /* 0x1204DF22: mov eax, dword ptr [eax + ebx*4] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1204DF25: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DF2E; /* 0x1204DF28: jne 0x1204df2e */
L_1204DF2A:
    ecx = edx; /* 0x1204DF2A: mov ecx, edx */
    goto L_1204DF46; /* 0x1204DF2C: jmp 0x1204df46 */
L_1204DF2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DF2E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204DF30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DF41; /* 0x1204DF32: je 0x1204df41 */
L_1204DF34:
    edx = MEM32(ebp + (-0xC)); /* 0x1204DF34: mov edx, dword ptr [ebp - 0xc] */
L_1204DF37:
    /* cmp MEM32(edx + ecx * 4), eax */ /* 0x1204DF37: cmp dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + ecx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204DF41; /* 0x1204DF3A: je 0x1204df41 */
L_1204DF3C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204DF3C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x1204DF3D: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DF37; /* 0x1204DF3F: jb 0x1204df37 */
L_1204DF41:
    MEM32(ebp + (-0x20)) = eax; /* 0x1204DF41: mov dword ptr [ebp - 0x20], eax */
    edx = ecx; /* 0x1204DF44: mov edx, ecx */
L_1204DF46:
    PUSH32(esp, 3); /* 0x1204DF46: push 3 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)6); /* 0x1204DF48: imul ebx, ebx, 6 */
    edi = POP32_VAL(esp); /* 0x1204DF4B: pop edi */
L_1204DF4C:
    eax = MEM32(esi + 0x24C); /* 0x1204DF4C: mov eax, dword ptr [esi + 0x24c] */
    eax = (uint32_t)MEM16(ebx + eax); /* 0x1204DF52: movzx eax, word ptr [ebx + eax] */
    esi = MEM32(ebp + 0x10); /* 0x1204DF56: mov esi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(esi + eax * 4), 0xFFFFu */ /* 0x1204DF59: cmp dword ptr [esi + eax*4], 0xffff */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x14)); /* 0x1204DF60: mov esi, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204DF7B; /* 0x1204DF63: jne 0x1204df7b */
L_1204DF65:
    esi = MEM32(ebp + 0x10); /* 0x1204DF65: mov esi, dword ptr [ebp + 0x10] */
    MEM32(esi + eax * 4) = edx; /* 0x1204DF68: mov dword ptr [esi + eax*4], edx */
    esi = MEM32(ebp + (-0x4)); /* 0x1204DF6B: mov esi, dword ptr [ebp - 4] */
    eax = ecx; /* 0x1204DF6E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204DF70: add eax, eax */
    _flag_k = FK_ADD;
    eax = esi + eax * 8 + 0x8; /* 0x1204DF72: lea eax, [esi + eax*8 + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1204DF76: inc dword ptr [eax] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x14)); /* 0x1204DF78: mov esi, dword ptr [ebp - 0x14] */
L_1204DF7B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1204DF7B: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204DF7E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204DF4C; /* 0x1204DF7F: jne 0x1204df4c */
L_1204DF81:
    eax = MEM32(ebp + (-0x4)); /* 0x1204DF81: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204DF84: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0xC); /* 0x1204DF87: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1204DF8A: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax + ecx * 8)); _flag_b = (uint32_t)(1);
    MEM32(eax + ecx * 8) = MEM32(eax + ecx * 8) + 1; /* 0x1204DF8C: inc dword ptr [eax + ecx*8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x1C)); /* 0x1204DF8F: mov ecx, dword ptr [ebp - 0x1c] */
L_1204DF92:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204DF92: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(ecx); /* 0x1204DF93: movzx eax, cx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1204DF96: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204DF99: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DF10; /* 0x1204DF9F: jb 0x1204df10 */
L_1204DFA5:
    eax = MEM32(esi + 0x25C); /* 0x1204DFA5: mov eax, dword ptr [esi + 0x25c] */
    PUSH32(esp, 0x120014BCu); /* 0x1204DFAB: push 0x120014bc */
    MEM32(ebp + (-0x20)) = eax; /* 0x1204DFB0: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204DFB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1204DFB5: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1204DFB7: pop edx */
    eax = edi; /* 0x1204DFB8: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204DFBA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204DFBC: seto cl */
    MEM32(esi + 0x260) = edi; /* 0x1204DFBF: mov dword ptr [esi + 0x260], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204DFC5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204DFC7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204DFC9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204DFCA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204DFCF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204DFD0: pop ecx */
    MEM32(esi + 0x25C) = eax; /* 0x1204DFD1: mov dword ptr [esi + 0x25c], eax */
    /* test eax, eax */ /* 0x1204DFD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204DE26; /* 0x1204DFD9: je 0x1204de26 */
L_1204DFDF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204DFDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & eax; /* 0x1204DFE1: and dword ptr [ebp - 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & eax; /* 0x1204DFE4: and dword ptr [ebp - 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1204DFE7: mov dword ptr [ebp - 0x10], eax */
    /* test edi, edi */ /* 0x1204DFEA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E078; /* 0x1204DFEC: je 0x1204e078 */
L_1204DFF2:
    edx = MEM32(ebp + (-0x4)); /* 0x1204DFF2: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204DFF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204DFF7: add edx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = edx; /* 0x1204DFFA: mov dword ptr [ebp - 0x24], edx */
L_1204DFFD:
    edi = MEM32(ebp + (-0xC)); /* 0x1204DFFD: mov edi, dword ptr [ebp - 0xc] */
    MEM32(edx + (-0x4)) = eax; /* 0x1204E000: mov dword ptr [edx - 4], eax */
    ecx = MEM32(esi + 0x25C); /* 0x1204E003: mov ecx, dword ptr [esi + 0x25c] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E009: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(edi + eax * 4); /* 0x1204E00C: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebx + ecx) = eax; /* 0x1204E00F: mov dword ptr [ebx + ecx], eax */
    eax = MEM32(esi + 0x25C); /* 0x1204E012: mov eax, dword ptr [esi + 0x25c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1204E018: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebx + eax + 0x4) = ecx; /* 0x1204E01B: mov dword ptr [ebx + eax + 4], ecx */
    eax = MEM32(edx + (-0x8)); /* 0x1204E01F: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E022: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(ebx + ecx + 0x8) = eax; /* 0x1204E028: mov dword ptr [ebx + ecx + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1204E02C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + (-0x8)); /* 0x1204E02F: add eax, dword ptr [edx - 8] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x24)); /* 0x1204E032: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1204E035: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E038: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204E03B: mov dword ptr [ebp - 0x10], eax */
    MEM32(edx + 0x4) = ecx; /* 0x1204E03E: mov dword ptr [edx + 4], ecx */
    eax = MEM32(esi + 0x25C); /* 0x1204E041: mov eax, dword ptr [esi + 0x25c] */
    MEM32(ebx + eax + 0xC) = ecx; /* 0x1204E047: mov dword ptr [ebx + eax + 0xc], ecx */
    eax = MEM32(edx); /* 0x1204E04B: mov eax, dword ptr [edx] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E04D: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(ebx + ecx + 0x10) = eax; /* 0x1204E053: mov dword ptr [ebx + ecx + 0x10], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1204E057: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x1204E05A: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x14u); /* 0x1204E05C: push 0x14 */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204E05E: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E061: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E064: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1204E065: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1204E066: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1204E069: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204E06B: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edi */ /* 0x1204E06E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x10)); /* 0x1204E070: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1204E073: mov dword ptr [ebp - 0x24], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204DFFD; /* 0x1204E076: jb 0x1204dffd */
L_1204E078:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1204E078: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E07C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E07E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E090; /* 0x1204E080: je 0x1204e090 */
L_1204E082:
    eax = MEM32(ebp + (-0xC)); /* 0x1204E082: mov eax, dword ptr [ebp - 0xc] */
L_1204E085:
    /* cmp MEM32(eax + edx * 4), 0 */ /* 0x1204E085: cmp dword ptr [eax + edx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E090; /* 0x1204E089: je 0x1204e090 */
L_1204E08B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E08B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1204E08C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E085; /* 0x1204E08E: jb 0x1204e085 */
L_1204E090:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204E090: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), ebx */ /* 0x1204E092: cmp dword ptr [esi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E103; /* 0x1204E098: jbe 0x1204e103 */
L_1204E09A:
    ecx = MEM32(ebp + 0xC); /* 0x1204E09A: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E09D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E09F:
    eax = (uint32_t)MEM16(ecx + eax * 4); /* 0x1204E09F: movzx eax, word ptr [ecx + eax*4] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204E0A3: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E0F7; /* 0x1204E0A7: je 0x1204e0f7 */
L_1204E0A9:
    ecx = eax; /* 0x1204E0A9: mov ecx, eax */
    eax = MEM32(esi + 0x254); /* 0x1204E0AB: mov eax, dword ptr [esi + 0x254] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1204E0B1: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax + ecx * 4); /* 0x1204E0B4: mov ecx, dword ptr [eax + ecx*4] */
    /* cmp ecx, MEM32(ebp + (-0x24)) */ /* 0x1204E0B7: cmp ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E0C0; /* 0x1204E0BA: jne 0x1204e0c0 */
L_1204E0BC:
    eax = edx; /* 0x1204E0BC: mov eax, edx */
    goto L_1204E0D8; /* 0x1204E0BE: jmp 0x1204e0d8 */
L_1204E0C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E0C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E0C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E0D3; /* 0x1204E0C4: je 0x1204e0d3 */
L_1204E0C6:
    edx = MEM32(ebp + (-0xC)); /* 0x1204E0C6: mov edx, dword ptr [ebp - 0xc] */
L_1204E0C9:
    /* cmp MEM32(edx + eax * 4), ecx */ /* 0x1204E0C9: cmp dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E0D3; /* 0x1204E0CC: je 0x1204e0d3 */
L_1204E0CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E0CE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1204E0CF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E0C9; /* 0x1204E0D1: jb 0x1204e0c9 */
L_1204E0D3:
    MEM32(ebp + (-0x24)) = ecx; /* 0x1204E0D3: mov dword ptr [ebp - 0x24], ecx */
    edx = eax; /* 0x1204E0D6: mov edx, eax */
L_1204E0D8:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204E0D8: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1204E0DB: mov edi, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + 0x8); /* 0x1204E0DE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204E0E1: add eax, eax */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 8 + 0x4; /* 0x1204E0E3: lea ecx, [ecx + eax*8 + 4] */
    eax = MEM32(ecx); /* 0x1204E0E7: mov eax, dword ptr [ecx] */
    MEM32(esi + edi * 4) = eax; /* 0x1204E0E9: mov dword ptr [esi + edi*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1204E0EC: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x14)); /* 0x1204E0EE: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E0F1: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1204E0F4: mov ecx, dword ptr [ebp + 0xc] */
L_1204E0F7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204E0F7: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(ebx); /* 0x1204E0F8: movzx eax, bx */
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204E0FB: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E09F; /* 0x1204E101: jb 0x1204e09f */
L_1204E103:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1204E103: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E13E; /* 0x1204E107: jne 0x1204e13e */
L_1204E109:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E109: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), edx */ /* 0x1204E10B: cmp dword ptr [esi + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E157; /* 0x1204E111: jbe 0x1204e157 */
L_1204E113:
    edi = MEM32(ebp + (-0x4)); /* 0x1204E113: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x10); /* 0x1204E116: mov ebx, dword ptr [ebp + 0x10] */
L_1204E119:
    eax = MEM32(ebx + edx * 4); /* 0x1204E119: mov eax, dword ptr [ebx + edx*4] */
    /* cmp eax, 0xFFFFu */ /* 0x1204E11C: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E130; /* 0x1204E121: je 0x1204e130 */
L_1204E123:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204E123: add eax, eax */
    _flag_k = FK_ADD;
    ecx = edi + eax * 8 + 0xC; /* 0x1204E125: lea ecx, [edi + eax*8 + 0xc] */
    eax = MEM32(ecx); /* 0x1204E129: mov eax, dword ptr [ecx] */
    MEM32(ebx + edx * 4) = eax; /* 0x1204E12B: mov dword ptr [ebx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1204E12E: inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_1204E130:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E130: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0x23C) */ /* 0x1204E131: cmp edx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E119; /* 0x1204E137: jb 0x1204e119 */
L_1204E139:
    edi = MEM32(ebp + (-0x8)); /* 0x1204E139: mov edi, dword ptr [ebp - 8] */
    goto L_1204E157; /* 0x1204E13C: jmp 0x1204e157 */
L_1204E13E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E13E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1204E140: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E157; /* 0x1204E146: jbe 0x1204e157 */
L_1204E148:
    ebx = MEM32(ebp + 0x10); /* 0x1204E148: mov ebx, dword ptr [ebp + 0x10] */
L_1204E14B:
    MEM32(ebx + eax * 4) = eax; /* 0x1204E14B: mov dword ptr [ebx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E14E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1204E14F: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E14B; /* 0x1204E155: jb 0x1204e14b */
L_1204E157:
    ebx = MEM32(ebp + 0xC); /* 0x1204E157: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E15A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1204E15C: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E179; /* 0x1204E162: jbe 0x1204e179 */
L_1204E164:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E164: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E166:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E166: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx + ecx * 4) = 0xFFFFu; /* 0x1204E167: mov dword ptr [ebx + ecx*4], 0xffff */
    ecx = (uint32_t)LO16(eax); /* 0x1204E16E: movzx ecx, ax */
    /* cmp ecx, MEM32(esi + 0x264) */ /* 0x1204E171: cmp ecx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E166; /* 0x1204E177: jb 0x1204e166 */
L_1204E179:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E179: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), edx */ /* 0x1204E17B: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E1A4; /* 0x1204E181: jbe 0x1204e1a4 */
L_1204E183:
    edi = MEM32(ebp + 0x8); /* 0x1204E183: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E186: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E188:
    eax = (uint32_t)MEM16(edi + ecx * 4); /* 0x1204E188: movzx eax, word ptr [edi + ecx*4] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204E18C: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E195; /* 0x1204E190: je 0x1204e195 */
L_1204E192:
    MEM32(ebx + eax * 4) = ecx; /* 0x1204E192: mov dword ptr [ebx + eax*4], ecx */
L_1204E195:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E195: inc edx */
    _flag_k = FK_INC;
    ecx = (uint32_t)LO16(edx); /* 0x1204E196: movzx ecx, dx */
    /* cmp ecx, MEM32(esi + 0x264) */ /* 0x1204E199: cmp ecx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E188; /* 0x1204E19F: jb 0x1204e188 */
L_1204E1A1:
    edi = MEM32(ebp + (-0x8)); /* 0x1204E1A1: mov edi, dword ptr [ebp - 8] */
L_1204E1A4:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1204E1A4: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E1E0; /* 0x1204E1A8: je 0x1204e1e0 */
L_1204E1AA:
    /* test edi, edi */ /* 0x1204E1AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E29F; /* 0x1204E1AC: je 0x1204e29f */
L_1204E1B2:
    ebx = MEM32(ebp + (-0x20)); /* 0x1204E1B2: mov ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E1B5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E1B7:
    eax = MEM32(ebx + edx + 0xC); /* 0x1204E1B7: mov eax, dword ptr [ebx + edx + 0xc] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E1BB: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(edx + ecx + 0xC) = eax; /* 0x1204E1C1: mov dword ptr [edx + ecx + 0xc], eax */
    eax = MEM32(ebx + edx + 0x10); /* 0x1204E1C5: mov eax, dword ptr [ebx + edx + 0x10] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E1C9: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(edx + ecx + 0x10) = eax; /* 0x1204E1CF: mov dword ptr [edx + ecx + 0x10], eax */
    PUSH32(esp, 0x14u); /* 0x1204E1D3: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204E1D5: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204E1D6: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E1D8: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E1B7; /* 0x1204E1D9: jne 0x1204e1b7 */
L_1204E1DB:
    goto L_1204E29F; /* 0x1204E1DB: jmp 0x1204e29f */
L_1204E1E0:
    /* test edi, edi */ /* 0x1204E1E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E29F; /* 0x1204E1E2: je 0x1204e29f */
L_1204E1E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204E1E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1204E1EA: mov dword ptr [ebp - 0x1c], ebx */
L_1204E1ED:
    eax = MEM32(esi + 0x25C); /* 0x1204E1ED: mov eax, dword ptr [esi + 0x25c] */
    ecx = MEM32(ebx + eax + 0x4); /* 0x1204E1F3: mov ecx, dword ptr [ebx + eax + 4] */
    edx = MEM32(esi + 0x24C); /* 0x1204E1F7: mov edx, dword ptr [esi + 0x24c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204E1FD: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebx + eax + 0x8); /* 0x1204E200: mov eax, dword ptr [ebx + eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204E204: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x1204E206: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x1204E209: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1204E20C: mov eax, dword ptr [eax + ecx*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204E20F: imul eax, eax, 6 */
    eax = (uint32_t)MEM16(eax + edx); /* 0x1204E212: movzx eax, word ptr [eax + edx] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1204E216: mov dword ptr [ebp - 0x2c], edx */
    edx = MEM32(ebp + 0x10); /* 0x1204E219: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx + eax * 4); /* 0x1204E21C: mov eax, dword ptr [edx + eax*4] */
    MEM32(ebp + 0x14) = eax; /* 0x1204E21F: mov dword ptr [ebp + 0x14], eax */
    edx = eax; /* 0x1204E222: mov edx, eax */
    eax = (uint32_t)LO16(ecx); /* 0x1204E224: movzx eax, cx */
    MEM32(ebp + 0x8) = eax; /* 0x1204E227: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)LO16(ecx); /* 0x1204E22A: movzx eax, cx */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1204E22D: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204E276; /* 0x1204E230: jae 0x1204e276 */
L_1204E232:
    ecx = MEM32(ebp + 0xC); /* 0x1204E232: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + eax * 4); /* 0x1204E235: mov ecx, dword ptr [ecx + eax*4] */
    edi = MEM32(ebp + 0x10); /* 0x1204E238: mov edi, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204E23B: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x2C)); /* 0x1204E23E: add ecx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204E241: push 3 */
    esi = POP32_VAL(esp); /* 0x1204E243: pop esi */
L_1204E244:
    eax = (uint32_t)MEM16(ecx); /* 0x1204E244: movzx eax, word ptr [ecx] */
    eax = MEM32(edi + eax * 4); /* 0x1204E247: mov eax, dword ptr [edi + eax*4] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1204E24A: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204E252; /* 0x1204E24D: jae 0x1204e252 */
L_1204E24F:
    MEM32(ebp + 0x14) = eax; /* 0x1204E24F: mov dword ptr [ebp + 0x14], eax */
L_1204E252:
    /* cmp eax, edx */ /* 0x1204E252: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E258; /* 0x1204E254: jbe 0x1204e258 */
L_1204E256:
    edx = eax; /* 0x1204E256: mov edx, eax */
L_1204E258:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1204E258: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204E25B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E244; /* 0x1204E25C: jne 0x1204e244 */
L_1204E25E:
    edi = MEM32(ebp + 0x8); /* 0x1204E25E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204E261: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(edi); /* 0x1204E262: movzx eax, di */
    MEM32(ebp + 0x8) = edi; /* 0x1204E265: mov dword ptr [ebp + 8], edi */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1204E268: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E232; /* 0x1204E26B: jb 0x1204e232 */
L_1204E26D:
    esi = MEM32(ebp + (-0x14)); /* 0x1204E26D: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E270: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1204E273: mov ebx, dword ptr [ebp - 0x1c] */
L_1204E276:
    eax = MEM32(ebp + 0x14); /* 0x1204E276: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1204E279: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1204E27C: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebx + ecx + 0xC) = eax; /* 0x1204E27E: mov dword ptr [ebx + ecx + 0xc], eax */
    eax = MEM32(esi + 0x25C); /* 0x1204E282: mov eax, dword ptr [esi + 0x25c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E288: inc edx */
    _flag_k = FK_INC;
    MEM32(ebx + eax + 0x10) = edx; /* 0x1204E289: mov dword ptr [ebx + eax + 0x10], edx */
    PUSH32(esp, 0x14u); /* 0x1204E28D: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204E28F: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1204E290: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E292: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1204E293: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E296: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E1ED; /* 0x1204E299: jne 0x1204e1ed */
L_1204E29F:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x10u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x10u; /* 0x1204E29F: or dword ptr [esi + 0x218], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x28)); /* 0x1204E2A6: mov ebx, dword ptr [ebp - 0x28] */
    goto L_1204E2B1; /* 0x1204E2A9: jmp 0x1204e2b1 */
L_1204E2AB:
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E2AB: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1204E2AE: mov dword ptr [ebp - 0xc], eax */
L_1204E2B1:
    eax = MEM32(ebp + (-0x4)); /* 0x1204E2B1: mov eax, dword ptr [ebp - 4] */
L_1204E2B4:
    PUSH32(esp, eax); /* 0x1204E2B4: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204E2B5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1204E2BA: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x1204E2BD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1204E2C2: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_121BF388); /* 0x1204E2C5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204E2CA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1204E2CD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204E2EB; /* 0x1204E2CF: jns 0x1204e2eb */
L_1204E2D1:
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204E2D1: push dword ptr [esi + 0x25c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x218)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x218) = MEM32(esi + 0x218) & 0xFFFFFFEFu; /* 0x1204E2D7: and dword ptr [esi + 0x218], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BF388); /* 0x1204E2DE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x25C) = MEM32(esi + 0x25C) & 0; /* 0x1204E2E3: and dword ptr [esi + 0x25c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204E2EA: pop ecx */
L_1204E2EB:
    edi = POP32_VAL(esp); /* 0x1204E2EB: pop edi */
    esi = POP32_VAL(esp); /* 0x1204E2EC: pop esi */
    eax = ebx; /* 0x1204E2ED: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204E2EF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204E2F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204E2F1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204E2F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204E2F9u);

L_1204E2F9:
    edi = edi; /* 0x1204E2F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204E2FB: push ebp */
    ebp = esp; /* 0x1204E2FC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204E2FE: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204E301: push ebx */
    PUSH32(esp, esi); /* 0x1204E302: push esi */
    esi = ecx; /* 0x1204E303: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E305: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204E307: push edi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1204E308: mov dword ptr [ebp - 0xc], esi */
    eax = edx; /* 0x1204E30B: mov eax, edx */
    /* cmp MEM32(esi + 0x23C), edx */ /* 0x1204E30D: cmp dword ptr [esi + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E32D; /* 0x1204E313: jbe 0x1204e32d */
L_1204E315:
    ebx = MEM32(ebp + 0xC); /* 0x1204E315: mov ebx, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x1204E318: mov ecx, edx */
L_1204E31A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E31A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx + ecx * 4) = 0xFFFFu; /* 0x1204E31B: mov dword ptr [ebx + ecx*4], 0xffff */
    ecx = (uint32_t)LO16(eax); /* 0x1204E322: movzx ecx, ax */
    /* cmp ecx, MEM32(esi + 0x23C) */ /* 0x1204E325: cmp ecx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E31A; /* 0x1204E32B: jb 0x1204e31a */
L_1204E32D:
    edi = edx; /* 0x1204E32D: mov edi, edx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E32F: mov dword ptr [ebp - 8], edi */
    /* cmp MEM32(esi + 0x264), edx */ /* 0x1204E332: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E394; /* 0x1204E338: jbe 0x1204e394 */
L_1204E33A:
    ecx = MEM32(ebp + 0x8); /* 0x1204E33A: mov ecx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1204E33D: mov eax, edx */
L_1204E33F:
    eax = (uint32_t)MEM16(ecx + eax * 4); /* 0x1204E33F: movzx eax, word ptr [ecx + eax*4] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204E343: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E385; /* 0x1204E347: je 0x1204e385 */
L_1204E349:
    edi = MEM32(ebp + 0xC); /* 0x1204E349: mov edi, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1204E34C: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204E34E: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x24C); /* 0x1204E351: add ecx, dword ptr [esi + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204E357: push 3 */
    eax = POP32_VAL(esp); /* 0x1204E359: pop eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204E35A: mov dword ptr [ebp - 4], eax */
L_1204E35D:
    ebx = (uint32_t)MEM16(ecx); /* 0x1204E35D: movzx ebx, word ptr [ecx] */
    /* cmp MEM32(edi + ebx * 4), 0xFFFFu */ /* 0x1204E360: cmp dword ptr [edi + ebx*4], 0xffff */
    _flag_a = (uint32_t)(MEM32(edi + ebx * 4)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E373; /* 0x1204E367: jne 0x1204e373 */
L_1204E369:
    eax = (uint32_t)LO16(edx); /* 0x1204E369: movzx eax, dx */
    MEM32(edi + ebx * 4) = eax; /* 0x1204E36C: mov dword ptr [edi + ebx*4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1204E36F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E372: inc edx */
    _flag_k = FK_INC;
L_1204E373:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1204E373: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204E376: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204E377: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E35D; /* 0x1204E37A: jne 0x1204e35d */
L_1204E37C:
    esi = MEM32(ebp + (-0xC)); /* 0x1204E37C: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E37F: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x1204E382: mov ecx, dword ptr [ebp + 8] */
L_1204E385:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204E385: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(edi); /* 0x1204E386: movzx eax, di */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E389: mov dword ptr [ebp - 8], edi */
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204E38C: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E33F; /* 0x1204E392: jb 0x1204e33f */
L_1204E394:
    edi = POP32_VAL(esp); /* 0x1204E394: pop edi */
    esi = POP32_VAL(esp); /* 0x1204E395: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E396: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1204E398: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204E399: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204E39A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204E3A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204E3A2u);

L_1204E3A2:
    edi = edi; /* 0x1204E3A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204E3A4: push ebp */
    ebp = esp; /* 0x1204E3A5: mov ebp, esp */
    eax = (uint32_t)MEM16(ebp + 0xC); /* 0x1204E3A7: movzx eax, word ptr [ebp + 0xc] */
    edx = MEM32(ecx + 0x244); /* 0x1204E3AB: mov edx, dword ptr [ecx + 0x244] */
    PUSH32(esp, esi); /* 0x1204E3B1: push esi */
    esi = (uint32_t)MEM16(edx + eax * 2); /* 0x1204E3B2: movzx esi, word ptr [edx + eax*2] */
    PUSH32(esp, edi); /* 0x1204E3B6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204E3B7: mov edi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(edi); /* 0x1204E3BA: movzx eax, word ptr [edi] */
    /* cmp MEM16(edx + eax * 2), LO16(esi) */ /* 0x1204E3BD: cmp word ptr [edx + eax*2], si */
    _flag_a = (uint32_t)(MEM16(edx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E3C7; /* 0x1204E3C1: jne 0x1204e3c7 */
L_1204E3C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E3C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204E3E6; /* 0x1204E3C5: jmp 0x1204e3e6 */
L_1204E3C7:
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1204E3C7: movzx eax, word ptr [edi + 2] */
    /* cmp MEM16(edx + eax * 2), LO16(esi) */ /* 0x1204E3CB: cmp word ptr [edx + eax*2], si */
    _flag_a = (uint32_t)(MEM16(edx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E3D6; /* 0x1204E3CF: jne 0x1204e3d6 */
L_1204E3D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E3D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E3D3: inc eax */
    _flag_k = FK_INC;
    goto L_1204E3E6; /* 0x1204E3D4: jmp 0x1204e3e6 */
L_1204E3D6:
    ecx = (uint32_t)MEM16(edi + 0x4); /* 0x1204E3D6: movzx ecx, word ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E3DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx + ecx * 2), LO16(esi) */ /* 0x1204E3DC: cmp word ptr [edx + ecx*2], si */
    _flag_a = (uint32_t)(MEM16(edx + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204E3E0: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204E3E3: add eax, 2 */
    _flag_k = FK_ADD;
L_1204E3E6:
    edi = POP32_VAL(esp); /* 0x1204E3E6: pop edi */
    esi = POP32_VAL(esp); /* 0x1204E3E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204E3E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204E3E9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204E3F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204E3F1u);

L_1204E3F1:
    edi = edi; /* 0x1204E3F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204E3F3: push ebp */
    ebp = esp; /* 0x1204E3F4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204E3F6: push ecx */
    PUSH32(esp, ecx); /* 0x1204E3F7: push ecx */
    PUSH32(esp, ebx); /* 0x1204E3F8: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1204E3F9: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E3FC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204E3FE: push esi */
    PUSH32(esp, edi); /* 0x1204E3FF: push edi */
    eax = edx; /* 0x1204E400: mov eax, edx */
    /* cmp MEM32(ecx + 0x23C), edx */ /* 0x1204E402: cmp dword ptr [ecx + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E417; /* 0x1204E408: jbe 0x1204e417 */
L_1204E40A:
    _flag_a = (uint32_t)((MEM32(ebx + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + eax * 4) | 0xFFFFFFFFu));
    MEM32(ebx + eax * 4) = MEM32(ebx + eax * 4) | 0xFFFFFFFFu; /* 0x1204E40A: or dword ptr [ebx + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E40E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x23C) */ /* 0x1204E40F: cmp eax, dword ptr [ecx + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E40A; /* 0x1204E415: jb 0x1204e40a */
L_1204E417:
    eax = edx; /* 0x1204E417: mov eax, edx */
    /* cmp MEM32(ecx + 0x264), edx */ /* 0x1204E419: cmp dword ptr [ecx + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E430; /* 0x1204E41F: jbe 0x1204e430 */
L_1204E421:
    esi = MEM32(ebp + 0xC); /* 0x1204E421: mov esi, dword ptr [ebp + 0xc] */
L_1204E424:
    MEM32(esi + eax * 4) = eax; /* 0x1204E424: mov dword ptr [esi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E427: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204E428: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E424; /* 0x1204E42E: jb 0x1204e424 */
L_1204E430:
    edi = edx; /* 0x1204E430: mov edi, edx */
    esi = edx; /* 0x1204E432: mov esi, edx */
    /* cmp MEM32(ecx + 0x264), edx */ /* 0x1204E434: cmp dword ptr [ecx + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E49B; /* 0x1204E43A: jbe 0x1204e49b */
L_1204E43C:
    MEM32(ebp + (-0x4)) = edx; /* 0x1204E43C: mov dword ptr [ebp - 4], edx */
    edx = MEM32(ebp + 0xC); /* 0x1204E43F: mov edx, dword ptr [ebp + 0xc] */
L_1204E442:
    eax = MEM32(ecx + 0x24C); /* 0x1204E442: mov eax, dword ptr [ecx + 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x1204E448: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0xFFFFFFFFu */ /* 0x1204E44B: cmp dword ptr [eax], -1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1204E44E: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E485; /* 0x1204E451: je 0x1204e485 */
L_1204E453:
    ebx = MEM32(ebp + 0x8); /* 0x1204E453: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + esi * 4) = edi; /* 0x1204E456: mov dword ptr [ebx + esi*4], edi */
    ebx = MEM32(ebp + 0x10); /* 0x1204E459: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(edx + edi * 4) = esi; /* 0x1204E45C: mov dword ptr [edx + edi*4], esi */
    eax = MEM32(eax); /* 0x1204E45F: mov eax, dword ptr [eax] */
    MEM32(ebx + eax * 4) = 1; /* 0x1204E461: mov dword ptr [ebx + eax*4], 1 */
    eax = MEM32(ebp + (-0x8)); /* 0x1204E468: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x4); /* 0x1204E46B: mov eax, dword ptr [eax + 4] */
    MEM32(ebx + eax * 4) = 1; /* 0x1204E46E: mov dword ptr [ebx + eax*4], 1 */
    eax = MEM32(ebp + (-0x8)); /* 0x1204E475: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x8); /* 0x1204E478: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1204E47B: inc edi */
    _flag_k = FK_INC;
    MEM32(ebx + eax * 4) = 1; /* 0x1204E47C: mov dword ptr [ebx + eax*4], 1 */
    goto L_1204E48C; /* 0x1204E483: jmp 0x1204e48c */
L_1204E485:
    eax = MEM32(ebp + 0x8); /* 0x1204E485: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + esi * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + esi * 4) | 0xFFFFFFFFu));
    MEM32(eax + esi * 4) = MEM32(eax + esi * 4) | 0xFFFFFFFFu; /* 0x1204E488: or dword ptr [eax + esi*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E48C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0xCu; /* 0x1204E48C: add dword ptr [ebp - 4], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204E490: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ecx + 0x264) */ /* 0x1204E491: cmp esi, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E442; /* 0x1204E497: jb 0x1204e442 */
L_1204E499:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E499: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E49B:
    eax = edi; /* 0x1204E49B: mov eax, edi */
    /* cmp edi, MEM32(ecx + 0x264) */ /* 0x1204E49D: cmp edi, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204E4B5; /* 0x1204E4A3: jae 0x1204e4b5 */
L_1204E4A5:
    esi = MEM32(ebp + 0xC); /* 0x1204E4A5: mov esi, dword ptr [ebp + 0xc] */
L_1204E4A8:
    _flag_a = (uint32_t)((MEM32(esi + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + eax * 4) | 0xFFFFFFFFu));
    MEM32(esi + eax * 4) = MEM32(esi + eax * 4) | 0xFFFFFFFFu; /* 0x1204E4A8: or dword ptr [esi + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E4AC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204E4AD: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E4A8; /* 0x1204E4B3: jb 0x1204e4a8 */
L_1204E4B5:
    esi = edx; /* 0x1204E4B5: mov esi, edx */
    eax = edx; /* 0x1204E4B7: mov eax, edx */
    /* cmp MEM32(ecx + 0x23C), edx */ /* 0x1204E4B9: cmp dword ptr [ecx + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E4D4; /* 0x1204E4BF: jbe 0x1204e4d4 */
L_1204E4C1:
    /* cmp MEM32(ebx + eax * 4), 0xFFFFFFFFu */ /* 0x1204E4C1: cmp dword ptr [ebx + eax*4], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E4CB; /* 0x1204E4C5: je 0x1204e4cb */
L_1204E4C7:
    MEM32(ebx + eax * 4) = esi; /* 0x1204E4C7: mov dword ptr [ebx + eax*4], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204E4CA: inc esi */
    _flag_k = FK_INC;
L_1204E4CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E4CB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x23C) */ /* 0x1204E4CC: cmp eax, dword ptr [ecx + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E4C1; /* 0x1204E4D2: jb 0x1204e4c1 */
L_1204E4D4:
    /* test edi, edi */ /* 0x1204E4D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E4DC; /* 0x1204E4D6: je 0x1204e4dc */
L_1204E4D8:
    /* test esi, esi */ /* 0x1204E4D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204E4E1; /* 0x1204E4DA: jne 0x1204e4e1 */
L_1204E4DC:
    edx = 0x88760B5Au; /* 0x1204E4DC: mov edx, 0x88760b5a */
L_1204E4E1:
    edi = POP32_VAL(esp); /* 0x1204E4E1: pop edi */
    esi = POP32_VAL(esp); /* 0x1204E4E2: pop esi */
    eax = edx; /* 0x1204E4E3: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1204E4E5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204E4E6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204E4E7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204E4EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204E4EFu);

L_1204E4EF:
    edi = edi; /* 0x1204E4EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204E4F1: push ebp */
    ebp = esp; /* 0x1204E4F2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1204E4F4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1204E4F7: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1204E4FB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1204E4FF: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1204E503: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1204E507: push ebx */
    PUSH32(esp, esi); /* 0x1204E508: push esi */
    esi = ecx; /* 0x1204E509: mov esi, ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1204E50B: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx; /* 0x1204E50E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x1204E510: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00800000u);
    ecx = ecx & 0x00800000u; /* 0x1204E515: and ecx, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204E51B: push edi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1204E51C: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1204E51F: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + 0x14) = ecx; /* 0x1204E522: mov dword ptr [ebp + 0x14], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E580; /* 0x1204E525: je 0x1204e580 */
L_1204E527:
    edi = MEM32(esi + 0x260); /* 0x1204E527: mov edi, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x1204E52D: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E532: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204E534: push 4 */
    edx = POP32_VAL(esp); /* 0x1204E536: pop edx */
    eax = edi; /* 0x1204E537: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204E539: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204E53B: seto cl */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E53E: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204E541: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204E543: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204E545: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204E546: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204E54B: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204E54D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204E54E: pop ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1204E54F: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x1204E552: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204E560; /* 0x1204E554: jne 0x1204e560 */
L_1204E556:
    ebx = 0x8007000Eu; /* 0x1204E556: mov ebx, 0x8007000e */
    goto L_1204E9B6; /* 0x1204E55B: jmp 0x1204e9b6 */
L_1204E560:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E560: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E562: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E5BB; /* 0x1204E564: je 0x1204e5bb */
L_1204E566:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E566: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E568:
    eax = MEM32(esi + 0x25C); /* 0x1204E568: mov eax, dword ptr [esi + 0x25c] */
    eax = MEM32(edx + eax); /* 0x1204E56E: mov eax, dword ptr [edx + eax] */
    MEM32(ebx + ecx * 4) = eax; /* 0x1204E571: mov dword ptr [ebx + ecx*4], eax */
    PUSH32(esp, 0x14u); /* 0x1204E574: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204E576: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204E577: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204E578: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, edi */ /* 0x1204E57A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E568; /* 0x1204E57C: jb 0x1204e568 */
L_1204E57E:
    goto L_1204E5BB; /* 0x1204E57E: jmp 0x1204e5bb */
L_1204E580:
    eax = ebp + (-0x24); /* 0x1204E580: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1204E583: push eax */
    eax = ebp + (-0x1C); /* 0x1204E584: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1204E587: push eax */
    ecx = esi; /* 0x1204E588: mov ecx, esi */
    RECOMP_CALL(sub_1204C275); /* 0x1204E58A: call 0x1204c275 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204E58F: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1204E591: mov dword ptr [ebp - 0x28], ebx */
    /* test ebx, ebx */ /* 0x1204E594: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204E9B0; /* 0x1204E596: js 0x1204e9b0 */
L_1204E59C:
    edi = MEM32(ebp + (-0x24)); /* 0x1204E59C: mov edi, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1204E59F: mov ebx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0x1204B301u); /* 0x1204E5A2: push 0x1204b301 */
    PUSH32(esp, 4); /* 0x1204E5A7: push 4 */
    eax = POP32_VAL(esp); /* 0x1204E5A9: pop eax */
    PUSH32(esp, eax); /* 0x1204E5AA: push eax */
    PUSH32(esp, edi); /* 0x1204E5AB: push edi */
    PUSH32(esp, ebx); /* 0x1204E5AC: push ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E5AD: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1204E5B0: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_121BF4B8); /* 0x1204E5B3: call 0x121bf4b8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1204E5B8: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1204E5BB:
    PUSH32(esp, 0x120014BCu); /* 0x1204E5BB: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E5C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1204E5C2: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1204E5C4: pop edx */
    eax = edi; /* 0x1204E5C5: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204E5C7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204E5C9: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204E5CC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204E5CE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204E5D0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204E5D1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204E5D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204E5D7: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204E5D8: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1204E5DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204E5E9; /* 0x1204E5DD: jne 0x1204e5e9 */
L_1204E5DF:
    ebx = 0x8007000Eu; /* 0x1204E5DF: mov ebx, 0x8007000e */
    goto L_1204E9B9; /* 0x1204E5E4: jmp 0x1204e9b9 */
L_1204E5E9:
    /* test edi, edi */ /* 0x1204E5E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E5FC; /* 0x1204E5EB: je 0x1204e5fc */
L_1204E5ED:
    ecx = edi; /* 0x1204E5ED: mov ecx, edi */
L_1204E5EF:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1204E5EF: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x1204E5F2: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1204E5F6: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204E5F9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E5EF; /* 0x1204E5FA: jne 0x1204e5ef */
L_1204E5FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E5FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1204E5FE: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E616; /* 0x1204E604: jbe 0x1204e616 */
L_1204E606:
    ecx = MEM32(ebp + 0x10); /* 0x1204E606: mov ecx, dword ptr [ebp + 0x10] */
L_1204E609:
    _flag_a = (uint32_t)((MEM32(ecx + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + eax * 4) | 0xFFFFFFFFu));
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) | 0xFFFFFFFFu; /* 0x1204E609: or dword ptr [ecx + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E60D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1204E60E: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E609; /* 0x1204E614: jb 0x1204e609 */
L_1204E616:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E616: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E618: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1204E61A: mov dword ptr [ebp - 0x20], ecx */
    /* test edi, edi */ /* 0x1204E61D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E62B; /* 0x1204E61F: je 0x1204e62b */
L_1204E621:
    /* cmp MEM32(ebx + edx * 4), ecx */ /* 0x1204E621: cmp dword ptr [ebx + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + edx * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E62B; /* 0x1204E624: je 0x1204e62b */
L_1204E626:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E626: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1204E627: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E621; /* 0x1204E629: jb 0x1204e621 */
L_1204E62B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E62B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204E62D: mov dword ptr [ebp - 0x1c], eax */
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1204E630: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E6C8; /* 0x1204E636: jbe 0x1204e6c8 */
L_1204E63C:
    ebx = MEM32(ebp + 0xC); /* 0x1204E63C: mov ebx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebx + eax * 4); /* 0x1204E63F: mov ebx, dword ptr [ebx + eax*4] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1204E642: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E6B8; /* 0x1204E645: je 0x1204e6b8 */
L_1204E647:
    eax = MEM32(esi + 0x254); /* 0x1204E647: mov eax, dword ptr [esi + 0x254] */
    eax = MEM32(eax + ebx * 4); /* 0x1204E64D: mov eax, dword ptr [eax + ebx*4] */
    /* cmp eax, ecx */ /* 0x1204E650: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E658; /* 0x1204E652: jne 0x1204e658 */
L_1204E654:
    ecx = edx; /* 0x1204E654: mov ecx, edx */
    goto L_1204E670; /* 0x1204E656: jmp 0x1204e670 */
L_1204E658:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E658: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E65A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E66B; /* 0x1204E65C: je 0x1204e66b */
L_1204E65E:
    edx = MEM32(ebp + (-0xC)); /* 0x1204E65E: mov edx, dword ptr [ebp - 0xc] */
L_1204E661:
    /* cmp MEM32(edx + ecx * 4), eax */ /* 0x1204E661: cmp dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + ecx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E66B; /* 0x1204E664: je 0x1204e66b */
L_1204E666:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204E666: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x1204E667: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E661; /* 0x1204E669: jb 0x1204e661 */
L_1204E66B:
    MEM32(ebp + (-0x20)) = eax; /* 0x1204E66B: mov dword ptr [ebp - 0x20], eax */
    edx = ecx; /* 0x1204E66E: mov edx, ecx */
L_1204E670:
    PUSH32(esp, 3); /* 0x1204E670: push 3 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x1204E672: imul ebx, ebx, 0xc */
    edi = POP32_VAL(esp); /* 0x1204E675: pop edi */
L_1204E676:
    eax = MEM32(esi + 0x24C); /* 0x1204E676: mov eax, dword ptr [esi + 0x24c] */
    esi = MEM32(ebp + 0x10); /* 0x1204E67C: mov esi, dword ptr [ebp + 0x10] */
    eax = MEM32(ebx + eax); /* 0x1204E67F: mov eax, dword ptr [ebx + eax] */
    /* cmp MEM32(esi + eax * 4), 0xFFFFFFFFu */ /* 0x1204E682: cmp dword ptr [esi + eax*4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x14)); /* 0x1204E686: mov esi, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E6A1; /* 0x1204E689: jne 0x1204e6a1 */
L_1204E68B:
    esi = MEM32(ebp + 0x10); /* 0x1204E68B: mov esi, dword ptr [ebp + 0x10] */
    MEM32(esi + eax * 4) = edx; /* 0x1204E68E: mov dword ptr [esi + eax*4], edx */
    esi = MEM32(ebp + (-0x4)); /* 0x1204E691: mov esi, dword ptr [ebp - 4] */
    eax = ecx; /* 0x1204E694: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204E696: add eax, eax */
    _flag_k = FK_ADD;
    eax = esi + eax * 8 + 0x8; /* 0x1204E698: lea eax, [esi + eax*8 + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1204E69C: inc dword ptr [eax] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x14)); /* 0x1204E69E: mov esi, dword ptr [ebp - 0x14] */
L_1204E6A1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1204E6A1: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E6A4: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E676; /* 0x1204E6A5: jne 0x1204e676 */
L_1204E6A7:
    eax = MEM32(ebp + (-0x4)); /* 0x1204E6A7: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E6AA: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1204E6AD: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax + ecx * 8)); _flag_b = (uint32_t)(1);
    MEM32(eax + ecx * 8) = MEM32(eax + ecx * 8) + 1; /* 0x1204E6AF: inc dword ptr [eax + ecx*8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E6B2: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1204E6B5: mov ecx, dword ptr [ebp - 0x20] */
L_1204E6B8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E6B8: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204E6B9: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204E6BC: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E63C; /* 0x1204E6C2: jb 0x1204e63c */
L_1204E6C8:
    eax = MEM32(esi + 0x25C); /* 0x1204E6C8: mov eax, dword ptr [esi + 0x25c] */
    PUSH32(esp, 0x120014BCu); /* 0x1204E6CE: push 0x120014bc */
    MEM32(ebp + (-0x20)) = eax; /* 0x1204E6D3: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204E6D6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1204E6D8: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1204E6DA: pop edx */
    eax = edi; /* 0x1204E6DB: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204E6DD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204E6DF: seto cl */
    MEM32(esi + 0x260) = edi; /* 0x1204E6E2: mov dword ptr [esi + 0x260], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204E6E8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204E6EA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204E6EC: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204E6ED: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204E6F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204E6F3: pop ecx */
    MEM32(esi + 0x25C) = eax; /* 0x1204E6F4: mov dword ptr [esi + 0x25c], eax */
    /* test eax, eax */ /* 0x1204E6FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E556; /* 0x1204E6FC: je 0x1204e556 */
L_1204E702:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E702: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & eax; /* 0x1204E704: and dword ptr [ebp - 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & eax; /* 0x1204E707: and dword ptr [ebp - 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1204E70A: mov dword ptr [ebp - 0x10], eax */
    /* test edi, edi */ /* 0x1204E70D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E79B; /* 0x1204E70F: je 0x1204e79b */
L_1204E715:
    edx = MEM32(ebp + (-0x4)); /* 0x1204E715: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204E718: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1204E71A: add edx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = edx; /* 0x1204E71D: mov dword ptr [ebp - 0x24], edx */
L_1204E720:
    edi = MEM32(ebp + (-0xC)); /* 0x1204E720: mov edi, dword ptr [ebp - 0xc] */
    MEM32(edx + (-0x4)) = eax; /* 0x1204E723: mov dword ptr [edx - 4], eax */
    ecx = MEM32(esi + 0x25C); /* 0x1204E726: mov ecx, dword ptr [esi + 0x25c] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E72C: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(edi + eax * 4); /* 0x1204E72F: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebx + ecx) = eax; /* 0x1204E732: mov dword ptr [ebx + ecx], eax */
    eax = MEM32(esi + 0x25C); /* 0x1204E735: mov eax, dword ptr [esi + 0x25c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1204E73B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebx + eax + 0x4) = ecx; /* 0x1204E73E: mov dword ptr [ebx + eax + 4], ecx */
    eax = MEM32(edx + (-0x8)); /* 0x1204E742: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E745: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(ebx + ecx + 0x8) = eax; /* 0x1204E74B: mov dword ptr [ebx + ecx + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1204E74F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + (-0x8)); /* 0x1204E752: add eax, dword ptr [edx - 8] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x24)); /* 0x1204E755: mov edx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1204E758: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E75B: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204E75E: mov dword ptr [ebp - 0x10], eax */
    MEM32(edx + 0x4) = ecx; /* 0x1204E761: mov dword ptr [edx + 4], ecx */
    eax = MEM32(esi + 0x25C); /* 0x1204E764: mov eax, dword ptr [esi + 0x25c] */
    MEM32(ebx + eax + 0xC) = ecx; /* 0x1204E76A: mov dword ptr [ebx + eax + 0xc], ecx */
    eax = MEM32(edx); /* 0x1204E76E: mov eax, dword ptr [edx] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E770: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(ebx + ecx + 0x10) = eax; /* 0x1204E776: mov dword ptr [ebx + ecx + 0x10], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1204E77A: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x1204E77D: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x14u); /* 0x1204E77F: push 0x14 */
    MEM32(ebp + (-0x18)) = eax; /* 0x1204E781: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E784: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E787: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1204E788: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1204E789: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1204E78C: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1204E78E: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edi */ /* 0x1204E791: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x10)); /* 0x1204E793: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1204E796: mov dword ptr [ebp - 0x24], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E720; /* 0x1204E799: jb 0x1204e720 */
L_1204E79B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1204E79B: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E79F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E7A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E7B3; /* 0x1204E7A3: je 0x1204e7b3 */
L_1204E7A5:
    eax = MEM32(ebp + (-0xC)); /* 0x1204E7A5: mov eax, dword ptr [ebp - 0xc] */
L_1204E7A8:
    /* cmp MEM32(eax + edx * 4), 0 */ /* 0x1204E7A8: cmp dword ptr [eax + edx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E7B3; /* 0x1204E7AC: je 0x1204e7b3 */
L_1204E7AE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E7AE: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1204E7AF: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E7A8; /* 0x1204E7B1: jb 0x1204e7a8 */
L_1204E7B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204E7B3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), ebx */ /* 0x1204E7B5: cmp dword ptr [esi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E81D; /* 0x1204E7BB: jbe 0x1204e81d */
L_1204E7BD:
    eax = MEM32(ebp + 0xC); /* 0x1204E7BD: mov eax, dword ptr [ebp + 0xc] */
L_1204E7C0:
    ecx = MEM32(eax + ebx * 4); /* 0x1204E7C0: mov ecx, dword ptr [eax + ebx*4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1204E7C3: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204E7C6: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E814; /* 0x1204E7C9: je 0x1204e814 */
L_1204E7CB:
    eax = MEM32(esi + 0x254); /* 0x1204E7CB: mov eax, dword ptr [esi + 0x254] */
    ecx = MEM32(eax + ecx * 4); /* 0x1204E7D1: mov ecx, dword ptr [eax + ecx*4] */
    /* cmp ecx, MEM32(ebp + (-0x24)) */ /* 0x1204E7D4: cmp ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E7DD; /* 0x1204E7D7: jne 0x1204e7dd */
L_1204E7D9:
    eax = edx; /* 0x1204E7D9: mov eax, edx */
    goto L_1204E7F5; /* 0x1204E7DB: jmp 0x1204e7f5 */
L_1204E7DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E7DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1204E7DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E7F0; /* 0x1204E7E1: je 0x1204e7f0 */
L_1204E7E3:
    edx = MEM32(ebp + (-0xC)); /* 0x1204E7E3: mov edx, dword ptr [ebp - 0xc] */
L_1204E7E6:
    /* cmp MEM32(edx + eax * 4), ecx */ /* 0x1204E7E6: cmp dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E7F0; /* 0x1204E7E9: je 0x1204e7f0 */
L_1204E7EB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E7EB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1204E7EC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E7E6; /* 0x1204E7EE: jb 0x1204e7e6 */
L_1204E7F0:
    MEM32(ebp + (-0x24)) = ecx; /* 0x1204E7F0: mov dword ptr [ebp - 0x24], ecx */
    edx = eax; /* 0x1204E7F3: mov edx, eax */
L_1204E7F5:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204E7F5: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1204E7F8: mov edi, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + 0x8); /* 0x1204E7FB: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204E7FE: add eax, eax */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 8 + 0x4; /* 0x1204E800: lea ecx, [ecx + eax*8 + 4] */
    eax = MEM32(ecx); /* 0x1204E804: mov eax, dword ptr [ecx] */
    MEM32(esi + edi * 4) = eax; /* 0x1204E806: mov dword ptr [esi + edi*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1204E809: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x14)); /* 0x1204E80B: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E80E: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0xC); /* 0x1204E811: mov eax, dword ptr [ebp + 0xc] */
L_1204E814:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204E814: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x264) */ /* 0x1204E815: cmp ebx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E7C0; /* 0x1204E81B: jb 0x1204e7c0 */
L_1204E81D:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1204E81D: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204E856; /* 0x1204E821: jne 0x1204e856 */
L_1204E823:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E823: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), edx */ /* 0x1204E825: cmp dword ptr [esi + 0x23c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E86F; /* 0x1204E82B: jbe 0x1204e86f */
L_1204E82D:
    edi = MEM32(ebp + (-0x4)); /* 0x1204E82D: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x10); /* 0x1204E830: mov ebx, dword ptr [ebp + 0x10] */
L_1204E833:
    eax = MEM32(ebx + edx * 4); /* 0x1204E833: mov eax, dword ptr [ebx + edx*4] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1204E836: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E848; /* 0x1204E839: je 0x1204e848 */
L_1204E83B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204E83B: add eax, eax */
    _flag_k = FK_ADD;
    ecx = edi + eax * 8 + 0xC; /* 0x1204E83D: lea ecx, [edi + eax*8 + 0xc] */
    eax = MEM32(ecx); /* 0x1204E841: mov eax, dword ptr [ecx] */
    MEM32(ebx + edx * 4) = eax; /* 0x1204E843: mov dword ptr [ebx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1204E846: inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_1204E848:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1204E848: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0x23C) */ /* 0x1204E849: cmp edx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E833; /* 0x1204E84F: jb 0x1204e833 */
L_1204E851:
    edi = MEM32(ebp + (-0x8)); /* 0x1204E851: mov edi, dword ptr [ebp - 8] */
    goto L_1204E86F; /* 0x1204E854: jmp 0x1204e86f */
L_1204E856:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E856: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x23C), eax */ /* 0x1204E858: cmp dword ptr [esi + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E86F; /* 0x1204E85E: jbe 0x1204e86f */
L_1204E860:
    ebx = MEM32(ebp + 0x10); /* 0x1204E860: mov ebx, dword ptr [ebp + 0x10] */
L_1204E863:
    MEM32(ebx + eax * 4) = eax; /* 0x1204E863: mov dword ptr [ebx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E866: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x23C) */ /* 0x1204E867: cmp eax, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E863; /* 0x1204E86D: jb 0x1204e863 */
L_1204E86F:
    edx = MEM32(ebp + 0xC); /* 0x1204E86F: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E872: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1204E874: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E889; /* 0x1204E87A: jbe 0x1204e889 */
L_1204E87C:
    _flag_a = (uint32_t)((MEM32(edx + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + eax * 4) | 0xFFFFFFFFu));
    MEM32(edx + eax * 4) = MEM32(edx + eax * 4) | 0xFFFFFFFFu; /* 0x1204E87C: or dword ptr [edx + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E880: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204E881: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E87C; /* 0x1204E887: jb 0x1204e87c */
L_1204E889:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204E889: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), eax */ /* 0x1204E88B: cmp dword ptr [esi + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E8AD; /* 0x1204E891: jbe 0x1204e8ad */
L_1204E893:
    edi = MEM32(ebp + 0x8); /* 0x1204E893: mov edi, dword ptr [ebp + 8] */
L_1204E896:
    ecx = MEM32(edi + eax * 4); /* 0x1204E896: mov ecx, dword ptr [edi + eax*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204E899: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E8A1; /* 0x1204E89C: je 0x1204e8a1 */
L_1204E89E:
    MEM32(edx + ecx * 4) = eax; /* 0x1204E89E: mov dword ptr [edx + ecx*4], eax */
L_1204E8A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204E8A1: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x1204E8A2: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E896; /* 0x1204E8A8: jb 0x1204e896 */
L_1204E8AA:
    edi = MEM32(ebp + (-0x8)); /* 0x1204E8AA: mov edi, dword ptr [ebp - 8] */
L_1204E8AD:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1204E8AD: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204E8E9; /* 0x1204E8B1: je 0x1204e8e9 */
L_1204E8B3:
    /* test edi, edi */ /* 0x1204E8B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E9A4; /* 0x1204E8B5: je 0x1204e9a4 */
L_1204E8BB:
    ebx = MEM32(ebp + (-0x20)); /* 0x1204E8BB: mov ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204E8BE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204E8C0:
    eax = MEM32(ebx + edx + 0xC); /* 0x1204E8C0: mov eax, dword ptr [ebx + edx + 0xc] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E8C4: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(edx + ecx + 0xC) = eax; /* 0x1204E8CA: mov dword ptr [edx + ecx + 0xc], eax */
    eax = MEM32(ebx + edx + 0x10); /* 0x1204E8CE: mov eax, dword ptr [ebx + edx + 0x10] */
    ecx = MEM32(esi + 0x25C); /* 0x1204E8D2: mov ecx, dword ptr [esi + 0x25c] */
    MEM32(edx + ecx + 0x10) = eax; /* 0x1204E8D8: mov dword ptr [edx + ecx + 0x10], eax */
    PUSH32(esp, 0x14u); /* 0x1204E8DC: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204E8DE: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204E8DF: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E8E1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E8C0; /* 0x1204E8E2: jne 0x1204e8c0 */
L_1204E8E4:
    goto L_1204E9A4; /* 0x1204E8E4: jmp 0x1204e9a4 */
L_1204E8E9:
    /* test edi, edi */ /* 0x1204E8E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204E9A4; /* 0x1204E8EB: je 0x1204e9a4 */
L_1204E8F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204E8F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1204E8F3: mov dword ptr [ebp - 0x18], ebx */
L_1204E8F6:
    eax = MEM32(esi + 0x25C); /* 0x1204E8F6: mov eax, dword ptr [esi + 0x25c] */
    edx = MEM32(ebx + eax + 0x4); /* 0x1204E8FC: mov edx, dword ptr [ebx + eax + 4] */
    ecx = MEM32(esi + 0x24C); /* 0x1204E900: mov ecx, dword ptr [esi + 0x24c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1204E906: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebx + eax + 0x8); /* 0x1204E909: mov eax, dword ptr [ebx + eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1204E90D: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x1204E90F: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x1204E912: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + edx * 4); /* 0x1204E915: mov eax, dword ptr [eax + edx*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204E918: imul eax, eax, 0xc */
    eax = MEM32(eax + ecx); /* 0x1204E91B: mov eax, dword ptr [eax + ecx] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1204E91E: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1204E921: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + eax * 4); /* 0x1204E924: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + 0x14) = edx; /* 0x1204E927: mov dword ptr [ebp + 0x14], edx */
    MEM32(ebp + 0x8) = eax; /* 0x1204E92A: mov dword ptr [ebp + 8], eax */
    ecx = eax; /* 0x1204E92D: mov ecx, eax */
    /* cmp edx, MEM32(ebp + (-0x24)) */ /* 0x1204E92F: cmp edx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204E97E; /* 0x1204E932: jae 0x1204e97e */
L_1204E934:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1204E934: mov ebx, dword ptr [ebp - 0x1c] */
    esi = edx; /* 0x1204E937: mov esi, edx */
L_1204E939:
    eax = MEM32(ebp + 0xC); /* 0x1204E939: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(eax + esi * 4); /* 0x1204E93C: mov edx, dword ptr [eax + esi*4] */
    esi = MEM32(ebp + 0x10); /* 0x1204E93F: mov esi, dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204E942: imul edx, edx, 0xc */
    PUSH32(esp, 3); /* 0x1204E945: push 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1204E947: add edx, ebx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1204E949: pop edi */
L_1204E94A:
    eax = MEM32(edx); /* 0x1204E94A: mov eax, dword ptr [edx] */
    eax = MEM32(esi + eax * 4); /* 0x1204E94C: mov eax, dword ptr [esi + eax*4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1204E94F: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1204E957; /* 0x1204E952: jae 0x1204e957 */
L_1204E954:
    MEM32(ebp + 0x8) = eax; /* 0x1204E954: mov dword ptr [ebp + 8], eax */
L_1204E957:
    /* cmp eax, ecx */ /* 0x1204E957: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204E95D; /* 0x1204E959: jbe 0x1204e95d */
L_1204E95B:
    ecx = eax; /* 0x1204E95B: mov ecx, eax */
L_1204E95D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204E95D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E960: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E94A; /* 0x1204E961: jne 0x1204e94a */
L_1204E963:
    esi = MEM32(ebp + 0x14); /* 0x1204E963: mov esi, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1204E966: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204E969: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = esi; /* 0x1204E96A: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, MEM32(ebp + (-0x24)) */ /* 0x1204E96D: cmp esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204E939; /* 0x1204E970: jb 0x1204e939 */
L_1204E972:
    esi = MEM32(ebp + (-0x14)); /* 0x1204E972: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x8)); /* 0x1204E975: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1204E978: mov ebx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x1204E97B: mov eax, dword ptr [ebp + 8] */
L_1204E97E:
    edx = MEM32(ebp + (-0x2C)); /* 0x1204E97E: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1204E981: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebx + edx + 0xC) = eax; /* 0x1204E983: mov dword ptr [ebx + edx + 0xc], eax */
    eax = MEM32(esi + 0x25C); /* 0x1204E987: mov eax, dword ptr [esi + 0x25c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204E98D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebx + eax + 0x10) = ecx; /* 0x1204E98E: mov dword ptr [ebx + eax + 0x10], ecx */
    PUSH32(esp, 0x14u); /* 0x1204E992: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1204E994: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1204E995: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204E997: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1204E998: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1204E99B: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204E8F6; /* 0x1204E99E: jne 0x1204e8f6 */
L_1204E9A4:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x10u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x10u; /* 0x1204E9A4: or dword ptr [esi + 0x218], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x28)); /* 0x1204E9AB: mov ebx, dword ptr [ebp - 0x28] */
    goto L_1204E9B6; /* 0x1204E9AE: jmp 0x1204e9b6 */
L_1204E9B0:
    eax = MEM32(ebp + (-0x1C)); /* 0x1204E9B0: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1204E9B3: mov dword ptr [ebp - 0xc], eax */
L_1204E9B6:
    eax = MEM32(ebp + (-0x4)); /* 0x1204E9B6: mov eax, dword ptr [ebp - 4] */
L_1204E9B9:
    PUSH32(esp, eax); /* 0x1204E9B9: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x1204E9BA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1204E9BF: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x1204E9C2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1204E9C7: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_121BF388); /* 0x1204E9CA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204E9CF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1204E9D2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1204E9F0; /* 0x1204E9D4: jns 0x1204e9f0 */
L_1204E9D6:
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1204E9D6: push dword ptr [esi + 0x25c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x218)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x218) = MEM32(esi + 0x218) & 0xFFFFFFEFu; /* 0x1204E9DC: and dword ptr [esi + 0x218], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BF388); /* 0x1204E9E3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x25C) = MEM32(esi + 0x25C) & 0; /* 0x1204E9E8: and dword ptr [esi + 0x25c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204E9EF: pop ecx */
L_1204E9F0:
    edi = POP32_VAL(esp); /* 0x1204E9F0: pop edi */
    esi = POP32_VAL(esp); /* 0x1204E9F1: pop esi */
    eax = ebx; /* 0x1204E9F2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204E9F4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204E9F5: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204E9F6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204E9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204E9FEu);

L_1204E9FE:
    edi = edi; /* 0x1204E9FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EA00: push ebp */
    ebp = esp; /* 0x1204EA01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204EA03: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EA04: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1204EA06: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1204EA07: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1204EA0A: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(ecx + 0x23C), eax */ /* 0x1204EA0D: cmp dword ptr [ecx + 0x23c], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204EA22; /* 0x1204EA13: jbe 0x1204ea22 */
L_1204EA15:
    _flag_a = (uint32_t)((MEM32(edi + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + eax * 4) | 0xFFFFFFFFu));
    MEM32(edi + eax * 4) = MEM32(edi + eax * 4) | 0xFFFFFFFFu; /* 0x1204EA15: or dword ptr [edi + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EA19: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x23C) */ /* 0x1204EA1A: cmp eax, dword ptr [ecx + 0x23c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EA15; /* 0x1204EA20: jb 0x1204ea15 */
L_1204EA22:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1204EA22: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EA26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x264), eax */ /* 0x1204EA28: cmp dword ptr [ecx + 0x264], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204EA6F; /* 0x1204EA2E: jbe 0x1204ea6f */
L_1204EA30:
    PUSH32(esp, ebx); /* 0x1204EA30: push ebx */
    PUSH32(esp, esi); /* 0x1204EA31: push esi */
L_1204EA32:
    edx = MEM32(ebp + 0x8); /* 0x1204EA32: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + eax * 4); /* 0x1204EA35: mov edx, dword ptr [edx + eax*4] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1204EA38: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EA64; /* 0x1204EA3B: je 0x1204ea64 */
L_1204EA3D:
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204EA3D: imul edx, edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x24C); /* 0x1204EA40: add edx, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x1204EA46: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204EA49: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204EA4B:
    ebx = MEM32(edx + esi * 4); /* 0x1204EA4B: mov ebx, dword ptr [edx + esi*4] */
    /* cmp MEM32(edi + ebx * 4), 0xFFFFFFFFu */ /* 0x1204EA4E: cmp dword ptr [edi + ebx*4], -1 */
    _flag_a = (uint32_t)(MEM32(edi + ebx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EA58; /* 0x1204EA52: jne 0x1204ea58 */
L_1204EA54:
    MEM32(edi + ebx * 4) = ecx; /* 0x1204EA54: mov dword ptr [edi + ebx*4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204EA57: inc ecx */
    _flag_k = FK_INC;
L_1204EA58:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1204EA58: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 3 */ /* 0x1204EA59: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EA4B; /* 0x1204EA5C: jb 0x1204ea4b */
L_1204EA5E:
    MEM32(ebp + 0xC) = ecx; /* 0x1204EA5E: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1204EA61: mov ecx, dword ptr [ebp - 4] */
L_1204EA64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EA64: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x264) */ /* 0x1204EA65: cmp eax, dword ptr [ecx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EA32; /* 0x1204EA6B: jb 0x1204ea32 */
L_1204EA6D:
    esi = POP32_VAL(esp); /* 0x1204EA6D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204EA6E: pop ebx */
L_1204EA6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EA6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1204EA71: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204EA72: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204EA73: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204EA7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EA7Bu);

L_1204EA7B:
    edi = edi; /* 0x1204EA7B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EA7D: push ebp */
    ebp = esp; /* 0x1204EA7E: mov ebp, esp */
    edx = MEM32(ecx + 0x244); /* 0x1204EA80: mov edx, dword ptr [ecx + 0x244] */
    eax = MEM32(ebp + 0xC); /* 0x1204EA86: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1204EA89: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204EA8C: push esi */
    esi = MEM32(edx + eax * 4); /* 0x1204EA8D: mov esi, dword ptr [edx + eax*4] */
    eax = MEM32(ecx); /* 0x1204EA90: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1204EA92: push edi */
    /* cmp MEM32(edx + eax * 4), esi */ /* 0x1204EA93: cmp dword ptr [edx + eax*4], esi */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EA9C; /* 0x1204EA96: jne 0x1204ea9c */
L_1204EA98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EA98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204EAB7; /* 0x1204EA9A: jmp 0x1204eab7 */
L_1204EA9C:
    eax = MEM32(ecx + 0x4); /* 0x1204EA9C: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(edx + eax * 4), esi */ /* 0x1204EA9F: cmp dword ptr [edx + eax*4], esi */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EAA9; /* 0x1204EAA2: jne 0x1204eaa9 */
L_1204EAA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EAA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EAA6: inc eax */
    _flag_k = FK_INC;
    goto L_1204EAB7; /* 0x1204EAA7: jmp 0x1204eab7 */
L_1204EAA9:
    ecx = MEM32(ecx + 0x8); /* 0x1204EAA9: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EAAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + ecx * 4), esi */ /* 0x1204EAAE: cmp dword ptr [edx + ecx*4], esi */
    _flag_a = (uint32_t)(MEM32(edx + ecx * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1204EAB1: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EAB4: add eax, 2 */
    _flag_k = FK_ADD;
L_1204EAB7:
    edi = POP32_VAL(esp); /* 0x1204EAB7: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EAB8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204EAB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204EABA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204EAC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EAC2u);

L_1204EAC2:
    _flag_a = (uint32_t)(MEM32(ecx + 0x218)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ecx + 0x218) = MEM32(ecx + 0x218) & 0xFFFFFFEFu; /* 0x1204EAC2: and dword ptr [ecx + 0x218], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x23C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x23C) = MEM32(ecx + 0x23C) & 0; /* 0x1204EAC9: and dword ptr [ecx + 0x23c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x264)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x264) = MEM32(ecx + 0x264) & 0; /* 0x1204EAD0: and dword ptr [ecx + 0x264], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EAD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204EAD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204EADF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EADFu);

L_1204EADF:
    edi = edi; /* 0x1204EADF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EAE1: push ebp */
    ebp = esp; /* 0x1204EAE2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204EAE4: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204EAE7: push ebx */
    PUSH32(esp, esi); /* 0x1204EAE8: push esi */
    PUSH32(esp, edi); /* 0x1204EAE9: push edi */
    edi = ecx; /* 0x1204EAEA: mov edi, ecx */
    ecx = (uint32_t)MEM16(edi); /* 0x1204EAEC: movzx ecx, word ptr [edi] */
    esi = MEM32(edi + 0xC); /* 0x1204EAEF: mov esi, dword ptr [edi + 0xc] */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1204EAF2: movzx eax, word ptr [edi + 2] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1204EAF6: mov word ptr [edi + 4], cx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204EAFA: imul ecx, ecx, 6 */
    edx = esi + 0x24C; /* 0x1204EAFD: lea edx, [esi + 0x24c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx); /* 0x1204EB03: add ecx, dword ptr [edx] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204EB05: push eax */
    PUSH32(esp, ecx); /* 0x1204EB06: push ecx */
    ecx = esi; /* 0x1204EB07: mov ecx, esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1204EB09: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = edx; /* 0x1204EB0B: mov dword ptr [ebp - 8], edx */
    RECOMP_CALL(sub_1204CC49); /* 0x1204EB0E: call 0x1204cc49 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x1204EB13: movzx ecx, ax */
    eax = (uint32_t)LO16(eax); /* 0x1204EB16: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EB19: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204EB1C: push 3 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1204EB1E: mov dword ptr [ebp - 0xc], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204EB21: cdq  */
    ecx = POP32_VAL(esp); /* 0x1204EB22: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1204EB23: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x1204EB25: mov word ptr [edi + 8], dx */
    edx = esi + 0x250; /* 0x1204EB29: lea edx, [esi + 0x250] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1204EB2F: mov dword ptr [ebp - 4], edx */
L_1204EB32:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1204EB32: movzx eax, word ptr [edi + 4] */
    ecx = eax; /* 0x1204EB36: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204EB38: imul ecx, ecx, 3 */
    esi = eax; /* 0x1204EB3B: mov esi, eax */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x1204EB3D: movzx eax, word ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1204EB41: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x1204EB43: mov eax, dword ptr [edx] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1204EB45: movzx eax, word ptr [eax + ecx*2] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1204EB49: mov word ptr [edi + 4], ax */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204EB4D: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EB72; /* 0x1204EB51: je 0x1204eb72 */
L_1204EB53:
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204EB53: imul eax, eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x1204EB56: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1204EB58: push esi */
    PUSH32(esp, eax); /* 0x1204EB59: push eax */
    RECOMP_CALL(sub_1204CE0F); /* 0x1204EB5A: call 0x1204ce0f */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1204EB5F: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EB62: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204EB65: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204EB67: cdq  */
    ecx = POP32_VAL(esp); /* 0x1204EB68: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1204EB69: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x1204EB6B: mov word ptr [edi + 8], dx */
    edx = MEM32(ebp + (-0x4)); /* 0x1204EB6F: mov edx, dword ptr [ebp - 4] */
L_1204EB72:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1204EB72: movzx eax, word ptr [edi + 4] */
    ecx = (uint32_t)MEM16(edi); /* 0x1204EB76: movzx ecx, word ptr [edi] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1204EB79: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EB84; /* 0x1204EB7C: je 0x1204eb84 */
L_1204EB7E:
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204EB7E: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EB32; /* 0x1204EB82: jne 0x1204eb32 */
L_1204EB84:
    /* cmp MEM16(edi + 0x4), 0xFFFFu */ /* 0x1204EB84: cmp word ptr [edi + 4], 0xffff */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EBBB; /* 0x1204EB8A: jne 0x1204ebbb */
L_1204EB8C:
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x1204EB8C: movzx eax, word ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EB90: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204EB91: cdq  */
    PUSH32(esp, 3); /* 0x1204EB92: push 3 */
    ecx = POP32_VAL(esp); /* 0x1204EB94: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1204EB95: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)LO16(esi); /* 0x1204EB97: movzx ecx, si */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204EB9A: imul ecx, ecx, 3 */
    MEM16(edi + 0x4) = (uint16_t)(LO16(esi)); /* 0x1204EB9D: mov word ptr [edi + 4], si */
    SET_LO8(ebx, 1); /* 0x1204EBA1: mov bl, 1 */
    eax = (uint32_t)LO16(edx); /* 0x1204EBA3: movzx eax, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1204EBA6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x1204EBA8: mov eax, dword ptr [ebp - 8] */
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x1204EBAB: mov word ptr [edi + 8], dx */
    eax = MEM32(eax); /* 0x1204EBAF: mov eax, dword ptr [eax] */
    SET_LO16(eax, MEM16(eax + ecx * 2)); /* 0x1204EBB1: mov ax, word ptr [eax + ecx*2] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1204EBB5: mov word ptr [edi + 2], ax */
    goto L_1204EBC2; /* 0x1204EBB9: jmp 0x1204ebc2 */
L_1204EBBB:
    eax = MEM32(ebp + (-0xC)); /* 0x1204EBBB: mov eax, dword ptr [ebp - 0xc] */
    MEM16(edi + 0x8) = (uint16_t)(LO16(eax)); /* 0x1204EBBE: mov word ptr [edi + 8], ax */
L_1204EBC2:
    SET_LO16(ecx, MEM16(edi + 0x8)); /* 0x1204EBC2: mov cx, word ptr [edi + 8] */
    MEM16(edi + 0x6) = (uint16_t)(LO16(ecx)); /* 0x1204EBC6: mov word ptr [edi + 6], cx */
    SET_LO16(ecx, MEM16(edi + 0x4)); /* 0x1204EBCA: mov cx, word ptr [edi + 4] */
    MEM8(edi + 0x10) = (uint8_t)(1); /* 0x1204EBCE: mov byte ptr [edi + 0x10], 1 */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1204EBD2: mov word ptr [edi], cx */
    edi = POP32_VAL(esp); /* 0x1204EBD5: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EBD6: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1204EBD7: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1204EBD9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204EBDA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204EBDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204EBE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EBE1u);

L_1204EBE1:
    edi = edi; /* 0x1204EBE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EBE3: push ebp */
    ebp = esp; /* 0x1204EBE4: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1204EBE6: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1204EBE9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204EBEC: push esi */
    esi = MEM32(ecx + eax * 4); /* 0x1204EBED: mov esi, dword ptr [ecx + eax*4] */
    PUSH32(esp, edi); /* 0x1204EBF0: push edi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1204EBF1: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EC2A; /* 0x1204EBF4: je 0x1204ec2a */
L_1204EBF6:
    edi = MEM32(ebp + 0x14); /* 0x1204EBF6: mov edi, dword ptr [ebp + 0x14] */
L_1204EBF9:
    PUSH32(esp, 3); /* 0x1204EBF9: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204EBFB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204EBFD: pop ecx */
    eax = esi; /* 0x1204EBFE: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204EC00: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204EC02: imul eax, eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x1204EC05: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax); /* 0x1204EC08: movzx ecx, word ptr [eax] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1204EC0B: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EC32; /* 0x1204EC0E: je 0x1204ec32 */
L_1204EC10:
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1204EC10: movzx ecx, word ptr [eax + 2] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1204EC14: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EC32; /* 0x1204EC17: je 0x1204ec32 */
L_1204EC19:
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x1204EC19: movzx eax, word ptr [eax + 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204EC1D: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EC32; /* 0x1204EC20: je 0x1204ec32 */
L_1204EC22:
    esi = MEM32(edi + esi * 4); /* 0x1204EC22: mov esi, dword ptr [edi + esi*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1204EC25: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EBF9; /* 0x1204EC28: jne 0x1204ebf9 */
L_1204EC2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EC2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204EC2C:
    edi = POP32_VAL(esp); /* 0x1204EC2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EC2D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204EC2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204EC2F: ret 0x14 */
L_1204EC32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EC32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EC34: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1204EC2C; /* 0x1204EC35: jmp 0x1204ec2c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204EC3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EC3Cu);

L_1204EC3C:
    edi = edi; /* 0x1204EC3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EC3E: push ebp */
    ebp = esp; /* 0x1204EC3F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204EC41: push ecx */
    PUSH32(esp, ecx); /* 0x1204EC42: push ecx */
    PUSH32(esp, ebx); /* 0x1204EC43: push ebx */
    PUSH32(esp, esi); /* 0x1204EC44: push esi */
    esi = ecx; /* 0x1204EC45: mov esi, ecx */
    eax = MEM32(esi); /* 0x1204EC47: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x14); /* 0x1204EC49: mov ecx, dword ptr [esi + 0x14] */
    MEM32(esi + 0x8) = eax; /* 0x1204EC4C: mov dword ptr [esi + 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204EC4F: imul eax, eax, 0xc */
    PUSH32(esp, edi); /* 0x1204EC52: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1204EC53: push dword ptr [esi + 4] */
    edx = ecx + 0x24C; /* 0x1204EC56: lea edx, [ecx + 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x1204EC5C: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x1204EC5E: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, eax); /* 0x1204EC61: push eax */
    RECOMP_CALL(sub_1204CC83); /* 0x1204EC62: call 0x1204cc83 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1204EC67: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, 3); /* 0x1204EC6A: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204EC6C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EC6E: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1204EC71: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204EC72: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x10) = edx; /* 0x1204EC74: mov dword ptr [esi + 0x10], edx */
    edx = MEM32(esi + 0x14); /* 0x1204EC77: mov edx, dword ptr [esi + 0x14] */
L_1204EC7A:
    ebx = MEM32(esi + 0x8); /* 0x1204EC7A: mov ebx, dword ptr [esi + 8] */
    eax = MEM32(edx + 0x250); /* 0x1204EC7D: mov eax, dword ptr [edx + 0x250] */
    ecx = ebx; /* 0x1204EC83: mov ecx, ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204EC85: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x10); /* 0x1204EC88: add ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x1204EC8B: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi + 0x8) = eax; /* 0x1204EC8E: mov dword ptr [esi + 8], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1204EC91: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ECC3; /* 0x1204EC94: je 0x1204ecc3 */
L_1204EC96:
    edx = MEM32(edx + 0x250); /* 0x1204EC96: mov edx, dword ptr [edx + 0x250] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204EC9C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204EC9E:
    eax = MEM32(esi + 0x8); /* 0x1204EC9E: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1204ECA1: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204ECA4: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + eax * 4), ebx */ /* 0x1204ECA6: cmp dword ptr [edx + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ECB1; /* 0x1204ECA9: je 0x1204ecb1 */
L_1204ECAB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204ECAB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x1204ECAC: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EC9E; /* 0x1204ECAF: jb 0x1204ec9e */
L_1204ECB1:
    eax = ecx + 0x2; /* 0x1204ECB1: lea eax, [ecx + 2] */
    PUSH32(esp, 3); /* 0x1204ECB4: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204ECB6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1204ECB8: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204ECB9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x10) = edx; /* 0x1204ECBB: mov dword ptr [esi + 0x10], edx */
    edx = MEM32(esi + 0x14); /* 0x1204ECBE: mov edx, dword ptr [esi + 0x14] */
    goto L_1204ECC6; /* 0x1204ECC1: jmp 0x1204ecc6 */
L_1204ECC3:
    PUSH32(esp, 3); /* 0x1204ECC3: push 3 */
    ecx = POP32_VAL(esp); /* 0x1204ECC5: pop ecx */
L_1204ECC6:
    eax = MEM32(esi); /* 0x1204ECC6: mov eax, dword ptr [esi] */
    /* cmp MEM32(esi + 0x8), eax */ /* 0x1204ECC8: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ECD3; /* 0x1204ECCB: je 0x1204ecd3 */
L_1204ECCD:
    /* cmp MEM32(esi + 0x8), 0xFFFFFFFFu */ /* 0x1204ECCD: cmp dword ptr [esi + 8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EC7A; /* 0x1204ECD1: jne 0x1204ec7a */
L_1204ECD3:
    /* cmp MEM32(esi + 0x8), 0xFFFFFFFFu */ /* 0x1204ECD3: cmp dword ptr [esi + 8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204ECFD; /* 0x1204ECD7: jne 0x1204ecfd */
L_1204ECD9:
    eax = MEM32(esi + 0x10); /* 0x1204ECD9: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204ECDC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204ECDD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204ECDF: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x4)); /* 0x1204ECE1: mov eax, dword ptr [ebp - 4] */
    ecx = ebx; /* 0x1204ECE4: mov ecx, ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204ECE6: imul ecx, ecx, 3 */
    MEM32(esi + 0x8) = ebx; /* 0x1204ECE9: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x10) = edx; /* 0x1204ECEC: mov dword ptr [esi + 0x10], edx */
    eax = MEM32(eax); /* 0x1204ECEF: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1204ECF1: add ecx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x1204ECF3: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi + 0x4) = eax; /* 0x1204ECF6: mov dword ptr [esi + 4], eax */
    SET_LO8(eax, 1); /* 0x1204ECF9: mov al, 1 */
    goto L_1204ED05; /* 0x1204ECFB: jmp 0x1204ed05 */
L_1204ECFD:
    eax = MEM32(ebp + (-0x8)); /* 0x1204ECFD: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x10) = eax; /* 0x1204ED00: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204ED03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204ED05:
    ecx = MEM32(esi + 0x10); /* 0x1204ED05: mov ecx, dword ptr [esi + 0x10] */
    MEM32(esi + 0xC) = ecx; /* 0x1204ED08: mov dword ptr [esi + 0xc], ecx */
    ecx = MEM32(esi + 0x8); /* 0x1204ED0B: mov ecx, dword ptr [esi + 8] */
    edi = POP32_VAL(esp); /* 0x1204ED0E: pop edi */
    MEM8(esi + 0x18) = (uint8_t)(1); /* 0x1204ED0F: mov byte ptr [esi + 0x18], 1 */
    MEM32(esi) = ecx; /* 0x1204ED13: mov dword ptr [esi], ecx */
    esi = POP32_VAL(esp); /* 0x1204ED15: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204ED16: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204ED17: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1204ED18: ret  */
    RECOMP_REGS_OUT();
}

void sub_1204ED1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204ED1Eu);

L_1204ED1E:
    edi = edi; /* 0x1204ED1E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204ED20: push ebp */
    ebp = esp; /* 0x1204ED21: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1204ED23: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1204ED26: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + eax * 4); /* 0x1204ED29: mov ecx, dword ptr [ecx + eax*4] */
    PUSH32(esp, ebx); /* 0x1204ED2C: push ebx */
    PUSH32(esp, esi); /* 0x1204ED2D: push esi */
    PUSH32(esp, edi); /* 0x1204ED2E: push edi */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204ED2F: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ED5F; /* 0x1204ED32: je 0x1204ed5f */
L_1204ED34:
    edi = MEM32(ebp + 0x14); /* 0x1204ED34: mov edi, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0xC); /* 0x1204ED37: mov esi, dword ptr [ebp + 0xc] */
L_1204ED3A:
    PUSH32(esp, 3); /* 0x1204ED3A: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204ED3C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1204ED3E: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1204ED40: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1204ED41: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204ED43: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x1204ED46: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), esi */ /* 0x1204ED49: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ED68; /* 0x1204ED4B: je 0x1204ed68 */
L_1204ED4D:
    /* cmp MEM32(eax + 0x4), esi */ /* 0x1204ED4D: cmp dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ED68; /* 0x1204ED50: je 0x1204ed68 */
L_1204ED52:
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1204ED52: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204ED68; /* 0x1204ED55: je 0x1204ed68 */
L_1204ED57:
    ecx = MEM32(edi + ecx * 4); /* 0x1204ED57: mov ecx, dword ptr [edi + ecx*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204ED5A: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204ED3A; /* 0x1204ED5D: jne 0x1204ed3a */
L_1204ED5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204ED5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204ED61:
    edi = POP32_VAL(esp); /* 0x1204ED61: pop edi */
    esi = POP32_VAL(esp); /* 0x1204ED62: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204ED63: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204ED64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1204ED65: ret 0x14 */
L_1204ED68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204ED68: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204ED6A: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1204ED61; /* 0x1204ED6B: jmp 0x1204ed61 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204ED72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204ED72u);

L_1204ED72:
    edi = edi; /* 0x1204ED72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204ED74: push ebp */
    ebp = esp; /* 0x1204ED75: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1204ED77: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1204ED79: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1204ED7A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204ED7D: push esi */
    esi = MEM32(edx + ebx * 4); /* 0x1204ED7E: mov esi, dword ptr [edx + ebx*4] */
    PUSH32(esp, edi); /* 0x1204ED81: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1204ED82: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + edi * 4); /* 0x1204ED85: mov eax, dword ptr [edx + edi*4] */
    MEM32(edx + ebx * 4) = eax; /* 0x1204ED88: mov dword ptr [edx + ebx*4], eax */
    eax = MEM32(ecx); /* 0x1204ED8B: mov eax, dword ptr [ecx] */
    MEM32(eax + edi * 4) = esi; /* 0x1204ED8D: mov dword ptr [eax + edi*4], esi */
    eax = MEM32(ecx); /* 0x1204ED90: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + edi * 4); /* 0x1204ED92: mov eax, dword ptr [eax + edi*4] */
    MEM32(eax + 0xC) = edi; /* 0x1204ED95: mov dword ptr [eax + 0xc], edi */
    eax = MEM32(ecx); /* 0x1204ED98: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + ebx * 4); /* 0x1204ED9A: mov eax, dword ptr [eax + ebx*4] */
    edi = POP32_VAL(esp); /* 0x1204ED9D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204ED9E: pop esi */
    MEM32(eax + 0xC) = ebx; /* 0x1204ED9F: mov dword ptr [eax + 0xc], ebx */
    ebx = POP32_VAL(esp); /* 0x1204EDA2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EDA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204EDA4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204EDAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EDACu);

L_1204EDAC:
    edi = edi; /* 0x1204EDAC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EDAE: push ebp */
    ebp = esp; /* 0x1204EDAF: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EDB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1204EDB3: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204EDC9; /* 0x1204EDB6: jbe 0x1204edc9 */
L_1204EDB8:
    ecx = MEM32(ebp + 0x10); /* 0x1204EDB8: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x1204EDBB: mov edx, dword ptr [ebp + 8] */
L_1204EDBE:
    /* cmp MEM32(edx + eax * 4), ecx */ /* 0x1204EDBE: cmp dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EDCF; /* 0x1204EDC1: je 0x1204edcf */
L_1204EDC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EDC3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204EDC4: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EDBE; /* 0x1204EDC7: jb 0x1204edbe */
L_1204EDC9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1204EDC9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1204EDCB:
    ebp = POP32_VAL(esp); /* 0x1204EDCB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204EDCC: ret 0xc */
L_1204EDCF:
    SET_LO8(eax, 1); /* 0x1204EDCF: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1204EDCB; /* 0x1204EDD1: jmp 0x1204edcb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204EDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EDD8u);

L_1204EDD8:
    edi = edi; /* 0x1204EDD8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EDDA: push ebp */
    ebp = esp; /* 0x1204EDDB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204EDDD: push ebx */
    PUSH32(esp, esi); /* 0x1204EDDE: push esi */
    PUSH32(esp, edi); /* 0x1204EDDF: push edi */
    edi = ecx; /* 0x1204EDE0: mov edi, ecx */
    PUSH32(esp, MEM32(edi)); /* 0x1204EDE2: push dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1204EDE4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BF388); /* 0x1204EDE6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1204EDEB: mov ebx, dword ptr [ebp + 8] */
    MEM32(esp) = 0x120014BCu; /* 0x1204EDEE: mov dword ptr [esp], 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204EDF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204EDF7: push 4 */
    edx = POP32_VAL(esp); /* 0x1204EDF9: pop edx */
    eax = ebx; /* 0x1204EDFA: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204EDFC: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204EDFE: seto cl */
    MEM32(edi + 0x4) = esi; /* 0x1204EE01: mov dword ptr [edi + 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204EE04: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204EE06: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204EE08: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204EE09: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204EE0E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204EE0F: pop ecx */
    MEM32(edi) = eax; /* 0x1204EE10: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x1204EE12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204EE1D; /* 0x1204EE14: jne 0x1204ee1d */
L_1204EE16:
    esi = 0x8007000Eu; /* 0x1204EE16: mov esi, 0x8007000e */
    goto L_1204EE20; /* 0x1204EE1B: jmp 0x1204ee20 */
L_1204EE1D:
    MEM32(edi + 0x8) = ebx; /* 0x1204EE1D: mov dword ptr [edi + 8], ebx */
L_1204EE20:
    edi = POP32_VAL(esp); /* 0x1204EE20: pop edi */
    eax = esi; /* 0x1204EE21: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1204EE23: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204EE24: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EE25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204EE26: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204EE2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EE2Eu);

L_1204EE2E:
    edi = edi; /* 0x1204EE2E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EE30: push ebp */
    ebp = esp; /* 0x1204EE31: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1204EE33: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1204EE35: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1204EE36: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204EE39: push esi */
    esi = MEM32(edx + ebx * 4); /* 0x1204EE3A: mov esi, dword ptr [edx + ebx*4] */
    PUSH32(esp, edi); /* 0x1204EE3D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1204EE3E: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + edi * 4); /* 0x1204EE41: mov eax, dword ptr [edx + edi*4] */
    MEM32(edx + ebx * 4) = eax; /* 0x1204EE44: mov dword ptr [edx + ebx*4], eax */
    eax = MEM32(ecx); /* 0x1204EE47: mov eax, dword ptr [ecx] */
    MEM32(eax + edi * 4) = esi; /* 0x1204EE49: mov dword ptr [eax + edi*4], esi */
    eax = MEM32(ecx); /* 0x1204EE4C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + edi * 4); /* 0x1204EE4E: mov eax, dword ptr [eax + edi*4] */
    MEM32(eax + 0x8) = edi; /* 0x1204EE51: mov dword ptr [eax + 8], edi */
    eax = MEM32(ecx); /* 0x1204EE54: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + ebx * 4); /* 0x1204EE56: mov eax, dword ptr [eax + ebx*4] */
    edi = POP32_VAL(esp); /* 0x1204EE59: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EE5A: pop esi */
    MEM32(eax + 0x8) = ebx; /* 0x1204EE5B: mov dword ptr [eax + 8], ebx */
    ebx = POP32_VAL(esp); /* 0x1204EE5E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EE5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204EE60: ret 8 */
    RECOMP_REGS_OUT();
}
