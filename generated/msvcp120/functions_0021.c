#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1102DE75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DE75u);

L_1102DE75:
    PUSH32(esp, ebp); /* 0x1102DE75: push ebp */
    ebp = esp; /* 0x1102DE76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1102DE78: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DE7B: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DE80: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DE82: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DE85: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x28); /* 0x1102DE88: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1102DE8B: push ecx */
    PUSH32(esp, 0); /* 0x1102DE8C: push 0 */
    PUSH32(esp, eax); /* 0x1102DE8E: push eax */
    RECOMP_ICALL(MEM32(0x11069048)); /* 0x1102DE8F: call dword ptr [0x11069048] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DE95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DE9D; /* 0x1102DE97: jne 0x1102de9d */
L_1102DE99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102DE99: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102DEA5; /* 0x1102DE9B: jmp 0x1102dea5 */
L_1102DE9D:
    edx = MEM32(ebp + (-0xC)); /* 0x1102DE9D: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DEA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x8)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x8))));
    eax = eax | MEM32(ebp + (-0x8)); /* 0x1102DEA2: or eax, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102DEA5:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DEA5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DEA8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102DEAA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DEAF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DEB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DEB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DEB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DEB3u);

L_1102DEB3:
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102DEB3: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DEB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DEC9; /* 0x1102DEBB: jne 0x1102dec9 */
L_1102DEBD:
    RECOMP_ICALL(MEM32(0x11069030)); /* 0x1102DEBD: call dword ptr [0x11069030] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102DEC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DEC9; /* 0x1102DEC5: jne 0x1102dec9 */
L_1102DEC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102DEC7: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DEC8: ret  */
L_1102DEC9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102DEC9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DECB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DECCu);

L_1102DECC:
    PUSH32(esp, ebp); /* 0x1102DECC: push ebp */
    ebp = esp; /* 0x1102DECD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102DECF: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DED5: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DEDA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DEDC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DEDF: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20C); /* 0x1102DEE2: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x1102DEE8: push ecx */
    PUSH32(esp, eax); /* 0x1102DEE9: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102DEEA: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DEEF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DEF0: pop ecx */
    /* test eax, eax */ /* 0x1102DEF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DF0A; /* 0x1102DEF3: je 0x1102df0a */
L_1102DEF5:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102DEF5: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20C); /* 0x1102DEF8: lea eax, [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102DEFE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102DF01: push eax */
    RECOMP_CALL(sub_1102DF18); /* 0x1102DF02: call 0x1102df18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102DF07: add esp, 0xc */
    _flag_k = FK_ADD;
L_1102DF0A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DF0A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DF0D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102DF0F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DF14: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DF16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DF17: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DF18u);

L_1102DF18:
    PUSH32(esp, ebp); /* 0x1102DF18: push ebp */
    ebp = esp; /* 0x1102DF19: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1102DF1B: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DF1E: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DF23: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DF25: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DF28: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102DF2B: push esi */
    PUSH32(esp, edi); /* 0x1102DF2C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102DF2D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1102DF2F: push edi */
    PUSH32(esp, edi); /* 0x1102DF30: push edi */
    PUSH32(esp, 3); /* 0x1102DF31: push 3 */
    PUSH32(esp, edi); /* 0x1102DF33: push edi */
    PUSH32(esp, 7); /* 0x1102DF34: push 7 */
    PUSH32(esp, 0x100u); /* 0x1102DF36: push 0x100 */
    PUSH32(esp, eax); /* 0x1102DF3B: push eax */
    RECOMP_ICALL(MEM32(0x1106905C)); /* 0x1102DF3C: call dword ptr [0x1106905c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102DF42: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1102DF44: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102DF98; /* 0x1102DF47: je 0x1102df98 */
L_1102DF49:
    PUSH32(esp, 0x28u); /* 0x1102DF49: push 0x28 */
    eax = ebp + (-0x2C); /* 0x1102DF4B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1102DF4E: push eax */
    PUSH32(esp, edi); /* 0x1102DF4F: push edi */
    PUSH32(esp, esi); /* 0x1102DF50: push esi */
    RECOMP_ICALL(MEM32(0x110691A4)); /* 0x1102DF51: call dword ptr [0x110691a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102DF57: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1102DF5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102DF91; /* 0x1102DF5C: je 0x1102df91 */
L_1102DF5E:
    ecx = MEM32(ebp + 0xC); /* 0x1102DF5E: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1102DF61: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB6109100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB6109100u; /* 0x1102DF64: add ecx, 0xb6109100 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1102DF6A: push edi */
    PUSH32(esp, 0x00989680u); /* 0x1102DF6B: push 0x989680 */
    { uint32_t _aa = eax, _ab = 2, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102DF70: adc eax, 2 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1102DF73: push eax */
    PUSH32(esp, ecx); /* 0x1102DF74: push ecx */
    RECOMP_CALL(sub_1103AF90); /* 0x1102DF75: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1102DF7A: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x2C); /* 0x1102DF7D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x28u); /* 0x1102DF80: push 0x28 */
    PUSH32(esp, eax); /* 0x1102DF82: push eax */
    PUSH32(esp, edi); /* 0x1102DF83: push edi */
    PUSH32(esp, esi); /* 0x1102DF84: push esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1102DF85: mov dword ptr [ebp - 0x18], edx */
    RECOMP_ICALL(MEM32(0x110691A8)); /* 0x1102DF88: call dword ptr [0x110691a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102DF8E: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1102DF91:
    PUSH32(esp, esi); /* 0x1102DF91: push esi */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102DF92: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
L_1102DF98:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DF98: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102DF9B: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DF9C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102DF9E: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102DF9F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DFA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DFA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DFA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DFA8u);

L_1102DFA8:
    PUSH32(esp, ebp); /* 0x1102DFA8: push ebp */
    ebp = esp; /* 0x1102DFA9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102DFAB: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DFB1: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DFB6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DFB8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102DFBB: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20C); /* 0x1102DFBE: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x1102DFC4: push ecx */
    PUSH32(esp, eax); /* 0x1102DFC5: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102DFC6: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DFCB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102DFCC: pop ecx */
    /* test eax, eax */ /* 0x1102DFCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102DFD5; /* 0x1102DFCF: jne 0x1102dfd5 */
L_1102DFD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102DFD1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102DFE2; /* 0x1102DFD3: jmp 0x1102dfe2 */
L_1102DFD5:
    eax = ebp + (-0x20C); /* 0x1102DFD5: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102DFDB: push eax */
    RECOMP_CALL(sub_1102DFF0); /* 0x1102DFDC: call 0x1102dff0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102DFE1: pop ecx */
L_1102DFE2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102DFE2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102DFE5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102DFE7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102DFEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102DFEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102DFEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102DFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102DFF0u);

L_1102DFF0:
    PUSH32(esp, ebp); /* 0x1102DFF0: push ebp */
    ebp = esp; /* 0x1102DFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1102DFF3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102DFF6: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102DFFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102DFFD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102E000: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x28); /* 0x1102E003: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1102E006: push ecx */
    PUSH32(esp, 0); /* 0x1102E007: push 0 */
    PUSH32(esp, eax); /* 0x1102E009: push eax */
    RECOMP_ICALL(MEM32(0x11069048)); /* 0x1102E00A: call dword ptr [0x11069048] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E018; /* 0x1102E012: jne 0x1102e018 */
L_1102E014:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102E014: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102E039; /* 0x1102E016: jmp 0x1102e039 */
L_1102E018:
    eax = MEM32(ebp + (-0x10)); /* 0x1102E018: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E01B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x14))));
    ecx = ecx | MEM32(ebp + (-0x14)); /* 0x1102E01D: or ecx, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x1102E020: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1102E026: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1102E028: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102E02D: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1102E032: push eax */
    PUSH32(esp, ecx); /* 0x1102E033: push ecx */
    RECOMP_CALL(sub_1103AFF0); /* 0x1102E034: call 0x1103aff0 */
    RECOMP_FLAGS_IN();
L_1102E039:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E039: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E03C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102E03E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E043: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E045: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E046: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E047(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E047u);

L_1102E047:
    PUSH32(esp, ebp); /* 0x1102E047: push ebp */
    ebp = esp; /* 0x1102E048: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1102E04A: sub esp, 0x414 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E050: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E055: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E057: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102E05A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E05B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102E05E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102E05F: mov edi, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102E062: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E068: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E07B; /* 0x1102E06A: je 0x1102e07b */
L_1102E06C:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E06C: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21u); /* 0x1102E072: push 0x21 */
    ecx = POP32_VAL(esp); /* 0x1102E074: pop ecx */
    MEM32(eax) = ecx; /* 0x1102E075: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1102E077: mov eax, ecx */
    goto L_1102E0BE; /* 0x1102E079: jmp 0x1102e0be */
L_1102E07B:
    eax = ebp + (-0x414); /* 0x1102E07B: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102E081: push eax */
    PUSH32(esp, edi); /* 0x1102E082: push edi */
    RECOMP_CALL(sub_1102E813); /* 0x1102E083: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E088: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E089: pop ecx */
    /* test eax, eax */ /* 0x1102E08A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E0B8; /* 0x1102E08C: je 0x1102e0b8 */
L_1102E08E:
    eax = ebp + (-0x20C); /* 0x1102E08E: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E094: push eax */
    PUSH32(esp, esi); /* 0x1102E095: push esi */
    RECOMP_CALL(sub_1102E813); /* 0x1102E096: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E09B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E09C: pop ecx */
    /* test eax, eax */ /* 0x1102E09D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E0B8; /* 0x1102E09F: je 0x1102e0b8 */
L_1102E0A1:
    eax = ebp + (-0x20C); /* 0x1102E0A1: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E0A7: push eax */
    eax = ebp + (-0x414); /* 0x1102E0A8: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102E0AE: push eax */
    RECOMP_CALL(sub_1102E0CE); /* 0x1102E0AF: call 0x1102e0ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E0B4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E0B5: pop ecx */
    goto L_1102E0BE; /* 0x1102E0B6: jmp 0x1102e0be */
L_1102E0B8:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E0B8: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
L_1102E0BE:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E0BE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102E0C1: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E0C2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E0C4: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E0C5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E0CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E0CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E0CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E0CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E0CEu);

L_1102E0CE:
    PUSH32(esp, ebp); /* 0x1102E0CE: push ebp */
    ebp = esp; /* 0x1102E0CF: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102E0D1: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E0D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E0EA; /* 0x1102E0D9: je 0x1102e0ea */
L_1102E0DB:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E0DB: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21u); /* 0x1102E0E1: push 0x21 */
    ecx = POP32_VAL(esp); /* 0x1102E0E3: pop ecx */
    MEM32(eax) = ecx; /* 0x1102E0E4: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1102E0E6: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1102E0E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E0E9: ret  */
L_1102E0EA:
    PUSH32(esp, esi); /* 0x1102E0EA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102E0EB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102E0ED: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E0EE: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E0F1: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x11069034)); /* 0x1102E0F4: call dword ptr [0x11069034] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E0FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E106; /* 0x1102E0FC: jne 0x1102e106 */
L_1102E0FE:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E0FE: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102E104: mov esi, eax */
L_1102E106:
    eax = esi; /* 0x1102E106: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102E108: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102E109: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E10A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E10B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E10Bu);

L_1102E10B:
    PUSH32(esp, ebp); /* 0x1102E10B: push ebp */
    ebp = esp; /* 0x1102E10C: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102E10E: pop ebp */
    goto L_1102E4A9; /* 0x1102E10F: jmp 0x1102e4a9 */
L_1102E4A9:
    PUSH32(esp, ebp); /* 0x1102E4A9: push ebp */
    ebp = esp; /* 0x1102E4AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102E4AC: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E4B2: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E4B7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E4B9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102E4BC: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20C); /* 0x1102E4BF: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E4C5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E4C6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102E4C9: push ecx */
    PUSH32(esp, eax); /* 0x1102E4CA: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102E4CB: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E4D0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E4D1: pop ecx */
    /* test eax, eax */ /* 0x1102E4D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E4E7; /* 0x1102E4D4: je 0x1102e4e7 */
L_1102E4D6:
    eax = ebp + (-0x20C); /* 0x1102E4D6: lea eax, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E4DC: push esi */
    PUSH32(esp, eax); /* 0x1102E4DD: push eax */
    RECOMP_CALL(sub_1102E500); /* 0x1102E4DE: call 0x1102e500 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E4E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E4E4: pop ecx */
    goto L_1102E4F1; /* 0x1102E4E5: jmp 0x1102e4f1 */
L_1102E4E7:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E4E7: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1102E4ED: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E4EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102E4F1:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E4F1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E4F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E4F6: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E4F7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E4FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E4FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E4FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E114(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E114u);

L_1102E114:
    PUSH32(esp, ebp); /* 0x1102E114: push ebp */
    ebp = esp; /* 0x1102E115: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102E117: pop ebp */
    goto L_1102E500; /* 0x1102E118: jmp 0x1102e500 */
L_1102E500:
    PUSH32(esp, ebp); /* 0x1102E500: push ebp */
    ebp = esp; /* 0x1102E501: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1102E503: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E506: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E50B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E50D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102E510: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x28); /* 0x1102E513: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1102E516: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E517: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102E51A: push ecx */
    PUSH32(esp, 0); /* 0x1102E51B: push 0 */
    PUSH32(esp, eax); /* 0x1102E51D: push eax */
    RECOMP_ICALL(MEM32(0x11069048)); /* 0x1102E51E: call dword ptr [0x11069048] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E524: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E538; /* 0x1102E526: je 0x1102e538 */
L_1102E528:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1102E528: push dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102E52B: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102E171); /* 0x1102E52E: call 0x1102e171 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1102E533: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_1102E579; /* 0x1102E536: jmp 0x1102e579 */
L_1102E538:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E538: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1102E53E: mov dword ptr [esi], eax */
    /* cmp eax, 0x35u */ /* 0x1102E540: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E543: je 0x1102e573 */
L_1102E545:
    /* cmp eax, 0xA1u */ /* 0x1102E545: cmp eax, 0xa1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E54A: je 0x1102e573 */
L_1102E54C:
    /* cmp eax, 2 */ /* 0x1102E54C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E54F: je 0x1102e573 */
L_1102E551:
    /* cmp eax, 0xFu */ /* 0x1102E551: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E554: je 0x1102e573 */
L_1102E556:
    /* cmp eax, 0x7Bu */ /* 0x1102E556: cmp eax, 0x7b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E559: je 0x1102e573 */
L_1102E55B:
    /* cmp eax, 0x57u */ /* 0x1102E55B: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E55E: je 0x1102e573 */
L_1102E560:
    /* cmp eax, 3 */ /* 0x1102E560: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E563: je 0x1102e573 */
L_1102E565:
    /* cmp eax, 0x20u */ /* 0x1102E565: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E56F; /* 0x1102E568: jne 0x1102e56f */
L_1102E56A:
    PUSH32(esp, 9); /* 0x1102E56A: push 9 */
    eax = POP32_VAL(esp); /* 0x1102E56C: pop eax */
    goto L_1102E576; /* 0x1102E56D: jmp 0x1102e576 */
L_1102E56F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E56F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102E579; /* 0x1102E571: jmp 0x1102e579 */
L_1102E573:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E573: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102E575: inc eax */
    _flag_k = FK_INC;
L_1102E576:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102E576: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102E579:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E579: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E57C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E57E: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E57F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E584: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E586: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E587: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E11D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E11Du);

L_1102E11D:
    PUSH32(esp, ebp); /* 0x1102E11D: push ebp */
    ebp = esp; /* 0x1102E11E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E120: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069194)); /* 0x1102E123: call dword ptr [0x11069194] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E129: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102E12A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E134; /* 0x1102E12D: je 0x1102e134 */
L_1102E12F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E12F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102E131: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1102E132: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E133: ret  */
L_1102E134:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E134: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E13A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0x11u */ /* 0x1102E13C: cmp dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102E13F: sete cl */
    eax = ecx + (-0x1); /* 0x1102E142: lea eax, [ecx - 1] */
    ebp = POP32_VAL(esp); /* 0x1102E145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E146: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E147(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E147u);

L_1102E147:
    PUSH32(esp, ebp); /* 0x1102E147: push ebp */
    ebp = esp; /* 0x1102E148: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E14A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069180)); /* 0x1102E14D: call dword ptr [0x11069180] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E153: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102E154: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E15E; /* 0x1102E157: je 0x1102e15e */
L_1102E159:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E159: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102E15B: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1102E15C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E15D: ret  */
L_1102E15E:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E15E: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E164: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0x11u */ /* 0x1102E166: cmp dword ptr [eax], 0x11 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102E169: sete cl */
    eax = ecx + (-0x1); /* 0x1102E16C: lea eax, [ecx - 1] */
    ebp = POP32_VAL(esp); /* 0x1102E16F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E170: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E171(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E171u);

L_1102E171:
    PUSH32(esp, ebp); /* 0x1102E171: push ebp */
    ebp = esp; /* 0x1102E172: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102E174: mov eax, dword ptr [ebp + 8] */
    /* test LO8(eax), 0x10u */ /* 0x1102E177: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E180; /* 0x1102E179: je 0x1102e180 */
L_1102E17B:
    PUSH32(esp, 3); /* 0x1102E17B: push 3 */
    eax = POP32_VAL(esp); /* 0x1102E17D: pop eax */
    ebp = POP32_VAL(esp); /* 0x1102E17E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E17F: ret  */
L_1102E180:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7BA7u);
    eax = eax & 0x7BA7u; /* 0x1102E180: and eax, 0x7ba7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102E185: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102E187: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    eax = eax & 0xFFFFFFF9u; /* 0x1102E189: and eax, 0xfffffff9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x1102E18C: add eax, 9 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102E18F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E190: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E191u);

L_1102E191:
    PUSH32(esp, ebp); /* 0x1102E191: push ebp */
    ebp = esp; /* 0x1102E192: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1102E194: sub esp, 0x414 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E19A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E19F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E1A1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1102E1A4: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x414); /* 0x1102E1A7: lea ecx, [ebp - 0x414] */
    PUSH32(esp, ebx); /* 0x1102E1AD: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1102E1AE: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1102E1B1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102E1B2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102E1B5: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1102E1B6: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1102E1B9: push ecx */
    PUSH32(esp, eax); /* 0x1102E1BA: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102E1BB: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E1C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E1C1: pop ecx */
    /* test eax, eax */ /* 0x1102E1C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E1D0; /* 0x1102E1C4: jne 0x1102e1d0 */
L_1102E1C6:
    MEM32(edi) = 0xA1u; /* 0x1102E1C6: mov dword ptr [edi], 0xa1 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1102E1CC: mov byte ptr [esi], al */
    goto L_1102E20C; /* 0x1102E1CE: jmp 0x1102e20c */
L_1102E1D0:
    PUSH32(esp, ebx); /* 0x1102E1D0: push ebx */
    PUSH32(esp, edi); /* 0x1102E1D1: push edi */
    eax = ebp + (-0x414); /* 0x1102E1D2: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102E1D8: push eax */
    eax = ebp + (-0x20C); /* 0x1102E1D9: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E1DF: push eax */
    RECOMP_CALL(sub_1102E21D); /* 0x1102E1E0: call 0x1102e21d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102E1E5: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1102E1E8: mov edi, eax */
    /* cmp MEM16(ebp + (-0x20C)), 0 */ /* 0x1102E1EA: cmp word ptr [ebp - 0x20c], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x20C))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E207; /* 0x1102E1F2: je 0x1102e207 */
L_1102E1F4:
    eax = ebp + (-0x20C); /* 0x1102E1F4: lea eax, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E1FA: push esi */
    PUSH32(esp, eax); /* 0x1102E1FB: push eax */
    RECOMP_CALL(sub_1102E7F0); /* 0x1102E1FC: call 0x1102e7f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E201: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E202: pop ecx */
    /* test eax, eax */ /* 0x1102E203: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E20A; /* 0x1102E205: jne 0x1102e20a */
L_1102E207:
    MEM8(esi) = (uint8_t)(0); /* 0x1102E207: mov byte ptr [esi], 0 */
L_1102E20A:
    eax = edi; /* 0x1102E20A: mov eax, edi */
L_1102E20C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E20C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102E20F: pop edi */
    esi = POP32_VAL(esp); /* 0x1102E210: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E211: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102E213: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E214: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E219: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E21B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E21C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E21D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E21Du);

L_1102E21D:
    PUSH32(esp, 0x270u); /* 0x1102E21D: push 0x270 */
    eax = 0x1103EEDCu; /* 0x1102E222: mov eax, 0x1103eedc */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102E227: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x1102E22C: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1102E22F: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1102E232: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x1102E235: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x27C)) = ecx; /* 0x1102E238: mov dword ptr [ebp - 0x27c], ecx */
    ecx = ebp + (-0x28); /* 0x1102E23E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1102E241: push eax */
    RECOMP_CALL(sub_11016CBD); /* 0x1102E242: call 0x11016cbd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102E247: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1102E249: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(ebp + (-0x18)), edx */ /* 0x1102E24C: cmp dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E26A; /* 0x1102E24F: je 0x1102e26a */
L_1102E251:
    esi = 0x1100321Cu; /* 0x1102E251: mov esi, 0x1100321c */
    PUSH32(esp, esi); /* 0x1102E256: push esi */
    RECOMP_ICALL(MEM32(0x11069110)); /* 0x1102E257: call dword ptr [0x11069110] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E25D: pop ecx */
    PUSH32(esp, eax); /* 0x1102E25E: push eax */
    PUSH32(esp, esi); /* 0x1102E25F: push esi */
    ecx = ebp + (-0x28); /* 0x1102E260: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102E867); /* 0x1102E263: call 0x1102e867 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102E268: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102E26A:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x1102E26A: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1102E26E: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102E276; /* 0x1102E271: jae 0x1102e276 */
L_1102E273:
    eax = ebp + (-0x28); /* 0x1102E273: lea eax, [ebp - 0x28] */
L_1102E276:
    PUSH32(esp, edx); /* 0x1102E276: push edx */
    PUSH32(esp, edx); /* 0x1102E277: push edx */
    PUSH32(esp, edx); /* 0x1102E278: push edx */
    ecx = ebp + (-0x278); /* 0x1102E279: lea ecx, [ebp - 0x278] */
    PUSH32(esp, ecx); /* 0x1102E27F: push ecx */
    PUSH32(esp, edx); /* 0x1102E280: push edx */
    PUSH32(esp, eax); /* 0x1102E281: push eax */
    RECOMP_ICALL(MEM32(0x11069054)); /* 0x1102E282: call dword ptr [0x11069054] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102E288: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1102E28A: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E29E; /* 0x1102E28D: jne 0x1102e29e */
L_1102E28F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E28F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = 0xA1u; /* 0x1102E291: mov dword ptr [ebx], 0xa1 */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1102E297: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102E29A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102E2E9; /* 0x1102E29C: jmp 0x1102e2e9 */
L_1102E29E:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1102E29E: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x1102E2A1: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1102E2A3: pop eax */
    /* cmp MEM16(ebp + (-0x24C)), LO16(eax) */ /* 0x1102E2A4: cmp word ptr [ebp - 0x24c], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24C))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E2ED; /* 0x1102E2AB: jne 0x1102e2ed */
L_1102E2AD:
    /* cmp MEM16(ebp + (-0x24A)), 0 */ /* 0x1102E2AD: cmp word ptr [ebp - 0x24a], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24A))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E2CA; /* 0x1102E2B5: je 0x1102e2ca */
L_1102E2B7:
    /* cmp MEM16(ebp + (-0x24A)), LO16(eax) */ /* 0x1102E2B7: cmp word ptr [ebp - 0x24a], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24A))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E2ED; /* 0x1102E2BE: jne 0x1102e2ed */
L_1102E2C0:
    /* cmp MEM16(ebp + (-0x248)), 0 */ /* 0x1102E2C0: cmp word ptr [ebp - 0x248], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x248))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E2ED; /* 0x1102E2C8: jne 0x1102e2ed */
L_1102E2CA:
    ecx = MEM32(ebp + (-0x27C)); /* 0x1102E2CA: mov ecx, dword ptr [ebp - 0x27c] */
    PUSH32(esp, ecx); /* 0x1102E2D0: push ecx */
    PUSH32(esp, esi); /* 0x1102E2D1: push esi */
    PUSH32(esp, edi); /* 0x1102E2D2: push edi */
    RECOMP_CALL(sub_1102E390); /* 0x1102E2D3: call 0x1102e390 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102E2D8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E2DA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x1102E2DD: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E310; /* 0x1102E2E0: jne 0x1102e310 */
L_1102E2E2:
    PUSH32(esp, esi); /* 0x1102E2E2: push esi */
    RECOMP_ICALL(MEM32(0x11069058)); /* 0x1102E2E3: call dword ptr [0x11069058] */
    RECOMP_FLAGS_IN();
L_1102E2E9:
    esi = ebx; /* 0x1102E2E9: mov esi, ebx */
    goto L_1102E310; /* 0x1102E2EB: jmp 0x1102e310 */
L_1102E2ED:
    eax = ebp + (-0x24C); /* 0x1102E2ED: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x1102E2F3: push eax */
    PUSH32(esp, edi); /* 0x1102E2F4: push edi */
    RECOMP_CALL(sub_1102E70D); /* 0x1102E2F5: call 0x1102e70d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x278))); /* 0x1102E2FA: push dword ptr [ebp - 0x278] */
    RECOMP_CALL(sub_1102E171); /* 0x1102E300: call 0x1102e171 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x27C)); /* 0x1102E305: mov ecx, dword ptr [ebp - 0x27c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E30B: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x1102E30E: mov dword ptr [ecx], eax */
L_1102E310:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1102E312: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1102E315: push eax */
    PUSH32(esp, 1); /* 0x1102E316: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x1102E318: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102E31D: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1102E31F: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E324: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E325u);

L_1102E325:
    PUSH32(esp, ebp); /* 0x1102E325: push ebp */
    ebp = esp; /* 0x1102E326: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102E328: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E32E: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E333: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E335: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102E338: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1102E33B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102E33E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102E33F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102E342: push eax */
    PUSH32(esp, ecx); /* 0x1102E343: push ecx */
    eax = ebp + (-0x20C); /* 0x1102E344: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E34A: push eax */
    RECOMP_CALL(sub_1102E390); /* 0x1102E34B: call 0x1102e390 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E350: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x20C)), 0 */ /* 0x1102E353: cmp word ptr [ebp - 0x20c], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x20C))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E374; /* 0x1102E35B: je 0x1102e374 */
L_1102E35D:
    eax = ebp + (-0x20C); /* 0x1102E35D: lea eax, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E363: push esi */
    PUSH32(esp, eax); /* 0x1102E364: push eax */
    RECOMP_CALL(sub_1102E7F0); /* 0x1102E365: call 0x1102e7f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E36A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E36B: pop ecx */
    /* test eax, eax */ /* 0x1102E36C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E374; /* 0x1102E36E: je 0x1102e374 */
L_1102E370:
    eax = esi; /* 0x1102E370: mov eax, esi */
    goto L_1102E381; /* 0x1102E372: jmp 0x1102e381 */
L_1102E374:
    PUSH32(esp, 0x110048B6u); /* 0x1102E374: push 0x110048b6 */
    PUSH32(esp, esi); /* 0x1102E379: push esi */
    RECOMP_CALL(sub_1102E6F1); /* 0x1102E37A: call 0x1102e6f1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E37F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E380: pop ecx */
L_1102E381:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E381: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E384: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E386: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E387: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E38C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E38E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E38F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E390u);

L_1102E390:
    PUSH32(esp, ebp); /* 0x1102E390: push ebp */
    ebp = esp; /* 0x1102E391: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x1102E393: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E399: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E39E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E3A0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1102E3A3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1102E3A4: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x254); /* 0x1102E3A7: lea eax, [ebp - 0x254] */
    PUSH32(esp, esi); /* 0x1102E3AD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102E3AE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102E3B1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1102E3B2: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1102E3B5: push eax */
    PUSH32(esp, ebx); /* 0x1102E3B6: push ebx */
    RECOMP_ICALL(MEM32(0x11069050)); /* 0x1102E3B7: call dword ptr [0x11069050] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E3BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E3FF; /* 0x1102E3BF: je 0x1102e3ff */
L_1102E3C1:
    PUSH32(esp, 0x2Eu); /* 0x1102E3C1: push 0x2e */
    eax = POP32_VAL(esp); /* 0x1102E3C3: pop eax */
L_1102E3C4:
    /* cmp MEM16(ebp + (-0x228)), LO16(eax) */ /* 0x1102E3C4: cmp word ptr [ebp - 0x228], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x228))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E420; /* 0x1102E3CB: jne 0x1102e420 */
L_1102E3CD:
    /* cmp MEM16(ebp + (-0x226)), 0 */ /* 0x1102E3CD: cmp word ptr [ebp - 0x226], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x226))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E3EA; /* 0x1102E3D5: je 0x1102e3ea */
L_1102E3D7:
    /* cmp MEM16(ebp + (-0x226)), LO16(eax) */ /* 0x1102E3D7: cmp word ptr [ebp - 0x226], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x226))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E420; /* 0x1102E3DE: jne 0x1102e420 */
L_1102E3E0:
    /* cmp MEM16(ebp + (-0x224)), 0 */ /* 0x1102E3E0: cmp word ptr [ebp - 0x224], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x224))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E420; /* 0x1102E3E8: jne 0x1102e420 */
L_1102E3EA:
    eax = ebp + (-0x254); /* 0x1102E3EA: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x1102E3F0: push eax */
    PUSH32(esp, ebx); /* 0x1102E3F1: push ebx */
    RECOMP_ICALL(MEM32(0x11069050)); /* 0x1102E3F2: call dword ptr [0x11069050] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Eu); /* 0x1102E3F8: push 0x2e */
    /* test eax, eax */ /* 0x1102E3FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1102E3FC: pop eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E3C4; /* 0x1102E3FD: jne 0x1102e3c4 */
L_1102E3FF:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1102E3FF: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x11003218u); /* 0x1102E402: push 0x11003218 */
    PUSH32(esp, esi); /* 0x1102E407: push esi */
    RECOMP_CALL(sub_1102E70D); /* 0x1102E408: call 0x1102e70d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E40D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E40E: pop ecx */
L_1102E40F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E40F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102E412: pop edi */
    esi = POP32_VAL(esp); /* 0x1102E413: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E414: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102E416: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E417: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E41C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E41E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E41F: ret  */
L_1102E420:
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x1102E420: push dword ptr [ebp - 0x254] */
    RECOMP_CALL(sub_1102E171); /* 0x1102E426: call 0x1102e171 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1102E42B: mov dword ptr [edi], eax */
    eax = ebp + (-0x228); /* 0x1102E42D: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1102E433: push eax */
    PUSH32(esp, esi); /* 0x1102E434: push esi */
    RECOMP_CALL(sub_1102E70D); /* 0x1102E435: call 0x1102e70d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E43A: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1102E40F; /* 0x1102E43D: jmp 0x1102e40f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102E43F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E43Fu);

L_1102E43F:
    PUSH32(esp, ebp); /* 0x1102E43F: push ebp */
    ebp = esp; /* 0x1102E440: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E442: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069198)); /* 0x1102E445: call dword ptr [0x11069198] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E44B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E44C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102E44E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102E451: setne al */
    ebp = POP32_VAL(esp); /* 0x1102E454: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E455: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E456(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E456u);

L_1102E456:
    PUSH32(esp, ebp); /* 0x1102E456: push ebp */
    ebp = esp; /* 0x1102E457: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E459: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069184)); /* 0x1102E45C: call dword ptr [0x11069184] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E462: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E463: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102E465: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102E468: setne al */
    ebp = POP32_VAL(esp); /* 0x1102E46B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E46C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E46D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E46Du);

L_1102E46D:
    PUSH32(esp, ebp); /* 0x1102E46D: push ebp */
    ebp = esp; /* 0x1102E46E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E470: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E473: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069168)); /* 0x1102E476: call dword ptr [0x11069168] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E47C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E47D: pop ecx */
    /* test eax, eax */ /* 0x1102E47E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E484; /* 0x1102E480: jne 0x1102e484 */
L_1102E482:
    ebp = POP32_VAL(esp); /* 0x1102E482: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E483: ret  */
L_1102E484:
    ebp = POP32_VAL(esp); /* 0x1102E484: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1106903C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102E48B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E48Bu);

L_1102E48B:
    PUSH32(esp, ebp); /* 0x1102E48B: push ebp */
    ebp = esp; /* 0x1102E48C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E48E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E491: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069334)); /* 0x1102E494: call dword ptr [0x11069334] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E49A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E49B: pop ecx */
    /* test eax, eax */ /* 0x1102E49C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E4A2; /* 0x1102E49E: jne 0x1102e4a2 */
L_1102E4A0:
    ebp = POP32_VAL(esp); /* 0x1102E4A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E4A1: ret  */
L_1102E4A2:
    ebp = POP32_VAL(esp); /* 0x1102E4A2: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1106903C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102E4A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E4A9u);

L_1102E4A9:
    PUSH32(esp, ebp); /* 0x1102E4A9: push ebp */
    ebp = esp; /* 0x1102E4AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x1102E4AC: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E4B2: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E4B7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E4B9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102E4BC: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20C); /* 0x1102E4BF: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E4C5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E4C6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102E4C9: push ecx */
    PUSH32(esp, eax); /* 0x1102E4CA: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102E4CB: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E4D0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E4D1: pop ecx */
    /* test eax, eax */ /* 0x1102E4D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E4E7; /* 0x1102E4D4: je 0x1102e4e7 */
L_1102E4D6:
    eax = ebp + (-0x20C); /* 0x1102E4D6: lea eax, [ebp - 0x20c] */
    PUSH32(esp, esi); /* 0x1102E4DC: push esi */
    PUSH32(esp, eax); /* 0x1102E4DD: push eax */
    RECOMP_CALL(sub_1102E500); /* 0x1102E4DE: call 0x1102e500 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E4E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E4E4: pop ecx */
    goto L_1102E4F1; /* 0x1102E4E5: jmp 0x1102e4f1 */
L_1102E4E7:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E4E7: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1102E4ED: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E4EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102E4F1:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E4F1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E4F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E4F6: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E4F7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E4FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E4FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E4FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E500u);

L_1102E500:
    PUSH32(esp, ebp); /* 0x1102E500: push ebp */
    ebp = esp; /* 0x1102E501: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1102E503: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E506: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E50B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E50D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102E510: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x28); /* 0x1102E513: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1102E516: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E517: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102E51A: push ecx */
    PUSH32(esp, 0); /* 0x1102E51B: push 0 */
    PUSH32(esp, eax); /* 0x1102E51D: push eax */
    RECOMP_ICALL(MEM32(0x11069048)); /* 0x1102E51E: call dword ptr [0x11069048] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E524: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E538; /* 0x1102E526: je 0x1102e538 */
L_1102E528:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1102E528: push dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102E52B: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102E171); /* 0x1102E52E: call 0x1102e171 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1102E533: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_1102E579; /* 0x1102E536: jmp 0x1102e579 */
L_1102E538:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E538: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1102E53E: mov dword ptr [esi], eax */
    /* cmp eax, 0x35u */ /* 0x1102E540: cmp eax, 0x35 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E543: je 0x1102e573 */
L_1102E545:
    /* cmp eax, 0xA1u */ /* 0x1102E545: cmp eax, 0xa1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E54A: je 0x1102e573 */
L_1102E54C:
    /* cmp eax, 2 */ /* 0x1102E54C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E54F: je 0x1102e573 */
L_1102E551:
    /* cmp eax, 0xFu */ /* 0x1102E551: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E554: je 0x1102e573 */
L_1102E556:
    /* cmp eax, 0x7Bu */ /* 0x1102E556: cmp eax, 0x7b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E559: je 0x1102e573 */
L_1102E55B:
    /* cmp eax, 0x57u */ /* 0x1102E55B: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E55E: je 0x1102e573 */
L_1102E560:
    /* cmp eax, 3 */ /* 0x1102E560: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E573; /* 0x1102E563: je 0x1102e573 */
L_1102E565:
    /* cmp eax, 0x20u */ /* 0x1102E565: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E56F; /* 0x1102E568: jne 0x1102e56f */
L_1102E56A:
    PUSH32(esp, 9); /* 0x1102E56A: push 9 */
    eax = POP32_VAL(esp); /* 0x1102E56C: pop eax */
    goto L_1102E576; /* 0x1102E56D: jmp 0x1102e576 */
L_1102E56F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E56F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102E579; /* 0x1102E571: jmp 0x1102e579 */
L_1102E573:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E573: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102E575: inc eax */
    _flag_k = FK_INC;
L_1102E576:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1102E576: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102E579:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E579: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E57C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E57E: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E57F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E584: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E586: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E587: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E588u);

L_1102E588:
    PUSH32(esp, ebp); /* 0x1102E588: push ebp */
    ebp = esp; /* 0x1102E589: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x224u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x224u; /* 0x1102E58B: sub esp, 0x224 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E591: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E596: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E598: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1102E59B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102E59E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102E5A0: push esi */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1102E5A1: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x220)) = ecx; /* 0x1102E5A7: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x21C)) = ecx; /* 0x1102E5AD: mov dword ptr [ebp - 0x21c], ecx */
    MEM32(ebp + (-0x218)) = ecx; /* 0x1102E5B3: mov dword ptr [ebp - 0x218], ecx */
    MEM32(ebp + (-0x214)) = ecx; /* 0x1102E5B9: mov dword ptr [ebp - 0x214], ecx */
    MEM32(ebp + (-0x210)) = ecx; /* 0x1102E5BF: mov dword ptr [ebp - 0x210], ecx */
    ecx = ebp + (-0x20C); /* 0x1102E5C5: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, edi); /* 0x1102E5CB: push edi */
    PUSH32(esp, ecx); /* 0x1102E5CC: push ecx */
    PUSH32(esp, eax); /* 0x1102E5CD: push eax */
    RECOMP_CALL(sub_1102E813); /* 0x1102E5CE: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E5D3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E5D4: pop ecx */
    /* test eax, eax */ /* 0x1102E5D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E5E1; /* 0x1102E5D7: jne 0x1102e5e1 */
L_1102E5D9:
    esi = ebp + (-0x224); /* 0x1102E5D9: lea esi, [ebp - 0x224] */
    goto L_1102E5F8; /* 0x1102E5DF: jmp 0x1102e5f8 */
L_1102E5E1:
    eax = ebp + (-0x20C); /* 0x1102E5E1: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E5E7: push eax */
    eax = ebp + (-0x224); /* 0x1102E5E8: lea eax, [ebp - 0x224] */
    PUSH32(esp, eax); /* 0x1102E5EE: push eax */
    RECOMP_CALL(sub_1102E612); /* 0x1102E5EF: call 0x1102e612 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E5F4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E5F5: pop ecx */
    esi = eax; /* 0x1102E5F6: mov esi, eax */
L_1102E5F8:
    eax = MEM32(ebp + 0x8); /* 0x1102E5F8: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x1102E5FB: mov edi, eax */
    PUSH32(esp, 6); /* 0x1102E5FD: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102E5FF: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102E600: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E602: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102E605: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E606: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E608: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E609: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E60E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E610: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E611: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E612u);

L_1102E612:
    PUSH32(esp, 0x4Cu); /* 0x1102E612: push 0x4c */
    eax = 0x1103EF0Cu; /* 0x1102E614: mov eax, 0x1103ef0c */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102E619: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1102E61E: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x1102E621: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102E624: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102E626: push eax */
    MEM32(ebp + (-0x40)) = ebx; /* 0x1102E627: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1102E62A: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1102E62D: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x1102E630: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1102E633: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1102E636: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_CALL(sub_11016CBD); /* 0x1102E639: call 0x11016cbd */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1102E63E: mov edx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102E641: mov dword ptr [ebp - 4], ebx */
    /* test edx, edx */ /* 0x1102E644: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E672; /* 0x1102E646: je 0x1102e672 */
L_1102E648:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102E648: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x1102E64B: mov eax, dword ptr [ebp - 0x28] */
    esi = eax; /* 0x1102E64E: mov esi, eax */
    /* cmp ecx, 8 */ /* 0x1102E650: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102E658; /* 0x1102E653: jae 0x1102e658 */
L_1102E655:
    esi = ebp + (-0x28); /* 0x1102E655: lea esi, [ebp - 0x28] */
L_1102E658:
    /* cmp MEM16(esi + edx * 2 + (-0x2)), 0x2Fu */ /* 0x1102E658: cmp word ptr [esi + edx*2 - 2], 0x2f */
    _flag_a = (uint32_t)(MEM16(esi + edx * 2 + (-0x2))) << 16; _flag_b = (uint32_t)(0x2Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E68F; /* 0x1102E65E: je 0x1102e68f */
L_1102E660:
    esi = eax; /* 0x1102E660: mov esi, eax */
    /* cmp ecx, 8 */ /* 0x1102E662: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102E66A; /* 0x1102E665: jae 0x1102e66a */
L_1102E667:
    esi = ebp + (-0x28); /* 0x1102E667: lea esi, [ebp - 0x28] */
L_1102E66A:
    /* cmp MEM16(esi + edx * 2 + (-0x2)), 0x5Cu */ /* 0x1102E66A: cmp word ptr [esi + edx*2 - 2], 0x5c */
    _flag_a = (uint32_t)(MEM16(esi + edx * 2 + (-0x2))) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E68F; /* 0x1102E670: je 0x1102e68f */
L_1102E672:
    esi = 0x11003224u; /* 0x1102E672: mov esi, 0x11003224 */
    PUSH32(esp, esi); /* 0x1102E677: push esi */
    RECOMP_ICALL(MEM32(0x11069110)); /* 0x1102E678: call dword ptr [0x11069110] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E67E: pop ecx */
    PUSH32(esp, eax); /* 0x1102E67F: push eax */
    PUSH32(esp, esi); /* 0x1102E680: push esi */
    ecx = ebp + (-0x28); /* 0x1102E681: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102E867); /* 0x1102E684: call 0x1102e867 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1102E689: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x1102E68C: mov eax, dword ptr [ebp - 0x28] */
L_1102E68F:
    /* cmp ecx, 8 */ /* 0x1102E68F: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102E697; /* 0x1102E692: jae 0x1102e697 */
L_1102E694:
    eax = ebp + (-0x28); /* 0x1102E694: lea eax, [ebp - 0x28] */
L_1102E697:
    ecx = ebp + (-0x50); /* 0x1102E697: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x1102E69A: push ecx */
    ecx = ebp + (-0x58); /* 0x1102E69B: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x1102E69E: push ecx */
    ecx = ebp + (-0x48); /* 0x1102E69F: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x1102E6A2: push ecx */
    PUSH32(esp, eax); /* 0x1102E6A3: push eax */
    RECOMP_ICALL(MEM32(0x1106904C)); /* 0x1102E6A4: call dword ptr [0x1106904c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E6AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E6D2; /* 0x1102E6AC: je 0x1102e6d2 */
L_1102E6AE:
    eax = MEM32(ebp + (-0x58)); /* 0x1102E6AE: mov eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1102E6B1: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x1102E6B4: mov eax, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1102E6B7: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x1102E6BA: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1102E6BD: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x1102E6C0: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1102E6C3: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1102E6C6: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1102E6C9: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1102E6CC: mov eax, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1102E6CF: mov dword ptr [ebp - 0x2c], eax */
L_1102E6D2:
    edi = MEM32(ebp + 0x8); /* 0x1102E6D2: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0x40); /* 0x1102E6D5: lea esi, [ebp - 0x40] */
    PUSH32(esp, 6); /* 0x1102E6D8: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102E6DA: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102E6DB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1102E6DD: push ebx */
    PUSH32(esp, 1); /* 0x1102E6DE: push 1 */
    ecx = ebp + (-0x28); /* 0x1102E6E0: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x1102E6E3: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102E6E8: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B354); /* 0x1102E6EB: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E6F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E6F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E6F1u);

L_1102E6F1:
    PUSH32(esp, ebp); /* 0x1102E6F1: push ebp */
    ebp = esp; /* 0x1102E6F2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E6F4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x104u); /* 0x1102E6F7: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E6FC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069170)); /* 0x1102E6FF: call dword ptr [0x11069170] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102E705: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E708: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102E70B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E70C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E70D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E70Du);

L_1102E70D:
    PUSH32(esp, ebp); /* 0x1102E70D: push ebp */
    ebp = esp; /* 0x1102E70E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E710: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x104u); /* 0x1102E713: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E718: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069174)); /* 0x1102E71B: call dword ptr [0x11069174] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102E721: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E724: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102E727: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E728: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E729(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E729u);

L_1102E729:
    PUSH32(esp, ebp); /* 0x1102E729: push ebp */
    ebp = esp; /* 0x1102E72A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1102E72C: sub esp, 0x414 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102E732: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102E737: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102E739: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102E73C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102E73D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102E740: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102E741: mov edi, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102E744: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E74A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E75D; /* 0x1102E74C: je 0x1102e75d */
L_1102E74E:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E74E: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21u); /* 0x1102E754: push 0x21 */
    ecx = POP32_VAL(esp); /* 0x1102E756: pop ecx */
    MEM32(eax) = ecx; /* 0x1102E757: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1102E759: mov eax, ecx */
    goto L_1102E7A0; /* 0x1102E75B: jmp 0x1102e7a0 */
L_1102E75D:
    eax = ebp + (-0x414); /* 0x1102E75D: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102E763: push eax */
    PUSH32(esp, edi); /* 0x1102E764: push edi */
    RECOMP_CALL(sub_1102E813); /* 0x1102E765: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E76A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E76B: pop ecx */
    /* test eax, eax */ /* 0x1102E76C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E79A; /* 0x1102E76E: je 0x1102e79a */
L_1102E770:
    eax = ebp + (-0x20C); /* 0x1102E770: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E776: push eax */
    PUSH32(esp, esi); /* 0x1102E777: push esi */
    RECOMP_CALL(sub_1102E813); /* 0x1102E778: call 0x1102e813 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E77D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E77E: pop ecx */
    /* test eax, eax */ /* 0x1102E77F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E79A; /* 0x1102E781: je 0x1102e79a */
L_1102E783:
    eax = ebp + (-0x20C); /* 0x1102E783: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1102E789: push eax */
    eax = ebp + (-0x414); /* 0x1102E78A: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1102E790: push eax */
    RECOMP_CALL(sub_1102E7B0); /* 0x1102E791: call 0x1102e7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E796: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E797: pop ecx */
    goto L_1102E7A0; /* 0x1102E798: jmp 0x1102e7a0 */
L_1102E79A:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E79A: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
L_1102E7A0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102E7A0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102E7A3: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102E7A4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102E7A6: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102E7A7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102E7AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102E7AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E7AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E7B0u);

L_1102E7B0:
    PUSH32(esp, ebp); /* 0x1102E7B0: push ebp */
    ebp = esp; /* 0x1102E7B1: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106919C)); /* 0x1102E7B3: call dword ptr [0x1106919c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102E7B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E7CC; /* 0x1102E7BB: je 0x1102e7cc */
L_1102E7BD:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1102E7BD: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x21u); /* 0x1102E7C3: push 0x21 */
    ecx = POP32_VAL(esp); /* 0x1102E7C5: pop ecx */
    MEM32(eax) = ecx; /* 0x1102E7C6: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1102E7C8: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1102E7CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E7CB: ret  */
L_1102E7CC:
    PUSH32(esp, esi); /* 0x1102E7CC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102E7CD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102E7CF: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E7D0: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E7D3: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x110691A0)); /* 0x1102E7D6: call dword ptr [0x110691a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E7DC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1102E7DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E7EB; /* 0x1102E7E1: jne 0x1102e7eb */
L_1102E7E3:
    RECOMP_ICALL(MEM32(0x1106903C)); /* 0x1102E7E3: call dword ptr [0x1106903c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102E7E9: mov esi, eax */
L_1102E7EB:
    eax = esi; /* 0x1102E7EB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102E7ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102E7EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E7EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E7F0u);

L_1102E7F0:
    PUSH32(esp, ebp); /* 0x1102E7F0: push ebp */
    ebp = esp; /* 0x1102E7F1: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102E7F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102E7F5: push eax */
    PUSH32(esp, eax); /* 0x1102E7F6: push eax */
    PUSH32(esp, 0x104u); /* 0x1102E7F7: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E7FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1102E7FF: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E801: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102E804: push eax */
    RECOMP_CALL(sub_1102DEB3); /* 0x1102E805: call 0x1102deb3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102E80A: push eax */
    RECOMP_ICALL(MEM32(0x11069060)); /* 0x1102E80B: call dword ptr [0x11069060] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102E811: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E812: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E813(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E813u);

L_1102E813:
    PUSH32(esp, ebp); /* 0x1102E813: push ebp */
    ebp = esp; /* 0x1102E814: mov ebp, esp */
    PUSH32(esp, 0x104u); /* 0x1102E816: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E81B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1102E81E: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E820: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1102E823: push 0 */
    RECOMP_CALL(sub_1102DEB3); /* 0x1102E825: call 0x1102deb3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102E82A: push eax */
    RECOMP_ICALL(MEM32(0x11069064)); /* 0x1102E82B: call dword ptr [0x11069064] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102E831: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E832: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E833(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E833u);

L_1102E833:
    PUSH32(esp, ebp); /* 0x1102E833: push ebp */
    ebp = esp; /* 0x1102E834: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E836: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069164)); /* 0x1102E839: call dword ptr [0x11069164] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E83F: pop ecx */
    /* test eax, eax */ /* 0x1102E840: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E846; /* 0x1102E842: jne 0x1102e846 */
L_1102E844:
    ebp = POP32_VAL(esp); /* 0x1102E844: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E845: ret  */
L_1102E846:
    ebp = POP32_VAL(esp); /* 0x1102E846: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1106903C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102E84D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E84Du);

L_1102E84D:
    PUSH32(esp, ebp); /* 0x1102E84D: push ebp */
    ebp = esp; /* 0x1102E84E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E850: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106916C)); /* 0x1102E853: call dword ptr [0x1106916c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E859: pop ecx */
    /* test eax, eax */ /* 0x1102E85A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102E860; /* 0x1102E85C: jne 0x1102e860 */
L_1102E85E:
    ebp = POP32_VAL(esp); /* 0x1102E85E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E85F: ret  */
L_1102E860:
    ebp = POP32_VAL(esp); /* 0x1102E860: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1106903C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102E867(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E867u);

L_1102E867:
    PUSH32(esp, ebp); /* 0x1102E867: push ebp */
    ebp = esp; /* 0x1102E868: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102E86A: push esi */
    PUSH32(esp, edi); /* 0x1102E86B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102E86C: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1102E86F: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1102E871: push edi */
    RECOMP_CALL(sub_11021C8B); /* 0x1102E872: call 0x11021c8b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102E877: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E899; /* 0x1102E879: je 0x1102e899 */
L_1102E87B:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1102E87B: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102E885; /* 0x1102E87F: jb 0x1102e885 */
L_1102E881:
    eax = MEM32(esi); /* 0x1102E881: mov eax, dword ptr [esi] */
    goto L_1102E887; /* 0x1102E883: jmp 0x1102e887 */
L_1102E885:
    eax = esi; /* 0x1102E885: mov eax, esi */
L_1102E887:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E887: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1102E88A: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x1102E88C: mov ecx, esi */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1102E88E: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, edi); /* 0x1102E890: push edi */
    PUSH32(esp, esi); /* 0x1102E891: push esi */
    RECOMP_CALL(sub_11022706); /* 0x1102E892: call 0x11022706 */
    RECOMP_FLAGS_IN();
    goto L_1102E8F9; /* 0x1102E897: jmp 0x1102e8f9 */
L_1102E899:
    ecx = MEM32(esi + 0x10); /* 0x1102E899: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102E89C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1102E89F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1102E8A0: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1102E8A3: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1102E8A5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102E8FF; /* 0x1102E8A7: jbe 0x1102e8ff */
L_1102E8A9:
    /* test ebx, ebx */ /* 0x1102E8A9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E8F6; /* 0x1102E8AB: je 0x1102e8f6 */
L_1102E8AD:
    eax = ecx + ebx; /* 0x1102E8AD: lea eax, [ecx + ebx] */
    ecx = esi; /* 0x1102E8B0: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1102E8B2: push 0 */
    PUSH32(esp, eax); /* 0x1102E8B4: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1102E8B5: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_11021737); /* 0x1102E8B8: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102E8BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E8F6; /* 0x1102E8BF: je 0x1102e8f6 */
L_1102E8C1:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1102E8C1: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102E8CB; /* 0x1102E8C5: jb 0x1102e8cb */
L_1102E8C7:
    ecx = MEM32(esi); /* 0x1102E8C7: mov ecx, dword ptr [esi] */
    goto L_1102E8CD; /* 0x1102E8C9: jmp 0x1102e8cd */
L_1102E8CB:
    ecx = esi; /* 0x1102E8CB: mov ecx, esi */
L_1102E8CD:
    eax = MEM32(esi + 0x10); /* 0x1102E8CD: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x1102E8D0: push ebx */
    PUSH32(esp, edi); /* 0x1102E8D1: push edi */
    eax = ecx + eax * 2; /* 0x1102E8D2: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x1102E8D5: push eax */
    RECOMP_CALL(sub_1102294B); /* 0x1102E8D6: call 0x1102294b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1102E8DB: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102E8DE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1102E8E1: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x1102E8E5: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1102E8EE; /* 0x1102E8E8: jb 0x1102e8ee */
L_1102E8EA:
    eax = MEM32(esi); /* 0x1102E8EA: mov eax, dword ptr [esi] */
    goto L_1102E8F0; /* 0x1102E8EC: jmp 0x1102e8f0 */
L_1102E8EE:
    eax = esi; /* 0x1102E8EE: mov eax, esi */
L_1102E8F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102E8F0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x1102E8F2: mov word ptr [eax + ecx*2], dx */
L_1102E8F6:
    eax = esi; /* 0x1102E8F6: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x1102E8F8: pop ebx */
L_1102E8F9:
    edi = POP32_VAL(esp); /* 0x1102E8F9: pop edi */
    esi = POP32_VAL(esp); /* 0x1102E8FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102E8FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1102E8FC: ret 8 */
L_1102E8FF:
    PUSH32(esp, 0x11004948u); /* 0x1102E8FF: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x1102E904: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102E909u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102E90A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E90Au);

L_1102E90A:
    PUSH32(esp, 0x1Cu); /* 0x1102E90A: push 0x1c */
    eax = 0x1103EF39u; /* 0x1102E90C: mov eax, 0x1103ef39 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102E911: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102E916: mov esi, ecx */
    eax = MEM32(ebp + 0x10); /* 0x1102E918: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x28); /* 0x1102E91B: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1102E91E: push eax */
    RECOMP_CALL(sub_11010191); /* 0x1102E91F: call 0x11010191 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102E924: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x28); /* 0x1102E928: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1102E92B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102E92C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1102E92F: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102E931: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F58E); /* 0x1102E934: call 0x1100f58e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1102E939: push 0 */
    PUSH32(esp, 1); /* 0x1102E93B: push 1 */
    ecx = ebp + (-0x28); /* 0x1102E93D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1102E940: call 0x11010630 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001658u; /* 0x1102E945: mov dword ptr [esi], 0x11001658 */
    eax = esi; /* 0x1102E94B: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1102E94D: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102E952: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102E955(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E955u);

L_1102E955:
    PUSH32(esp, ebp); /* 0x1102E955: push ebp */
    ebp = esp; /* 0x1102E956: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102E958: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1102E95B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102E978; /* 0x1102E95D: jle 0x1102e978 */
L_1102E95F:
    /* cmp eax, 2 */ /* 0x1102E95F: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102E974; /* 0x1102E962: jle 0x1102e974 */
L_1102E964:
    /* cmp eax, 3 */ /* 0x1102E964: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102E970; /* 0x1102E967: je 0x1102e970 */
L_1102E969:
    /* cmp eax, 4 */ /* 0x1102E969: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102E978; /* 0x1102E96C: jne 0x1102e978 */
L_1102E96E:
    goto L_1102E97A; /* 0x1102E96E: jmp 0x1102e97a */
L_1102E970:
    PUSH32(esp, 0); /* 0x1102E970: push 0 */
    goto L_1102E97C; /* 0x1102E972: jmp 0x1102e97c */
L_1102E974:
    PUSH32(esp, 6); /* 0x1102E974: push 6 */
    goto L_1102E97C; /* 0x1102E976: jmp 0x1102e97c */
L_1102E978:
    ebp = POP32_VAL(esp); /* 0x1102E978: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E979: ret  */
L_1102E97A:
    PUSH32(esp, 1); /* 0x1102E97A: push 1 */
L_1102E97C:
    RECOMP_CALL(sub_1102E982); /* 0x1102E97C: call 0x1102e982 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102E981u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102E982(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E982u);

L_1102E982:
    PUSH32(esp, ebp); /* 0x1102E982: push ebp */
    ebp = esp; /* 0x1102E983: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102E985: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x14); /* 0x1102E988: lea ecx, [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102E98B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(eax * 4 + 0x11003228)); /* 0x1102E98E: push dword ptr [eax*4 + 0x11003228] */
    PUSH32(esp, 0x110631F0u); /* 0x1102E995: push 0x110631f0 */
    PUSH32(esp, MEM32(eax * 4 + 0x11003244)); /* 0x1102E99A: push dword ptr [eax*4 + 0x11003244] */
    RECOMP_CALL(sub_1102E90A); /* 0x1102E9A1: call 0x1102e90a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11044B34u); /* 0x1102E9A6: push 0x11044b34 */
    eax = ebp + (-0x14); /* 0x1102E9AB: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102E9AE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1102E9AF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102E9B4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102E9B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E9B5u);

L_1102E9B5:
    PUSH32(esp, ebp); /* 0x1102E9B5: push ebp */
    ebp = esp; /* 0x1102E9B6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102E9B8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1102E9BB: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1102E9BD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102E9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E9C0u);

L_1102E9C0:
    PUSH32(esp, 0x110668BCu); /* 0x1102E9C0: push 0x110668bc */
    RECOMP_CALL(sub_1102EFA6); /* 0x1102E9C5: call 0x1102efa6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E9CA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E9CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E9CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E9CCu);

L_1102E9CC:
    PUSH32(esp, 1); /* 0x1102E9CC: push 1 */
    PUSH32(esp, 0x110668BCu); /* 0x1102E9CE: push 0x110668bc */
    RECOMP_CALL(sub_1102EFD9); /* 0x1102E9D3: call 0x1102efd9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E9D8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102E9D9: pop ecx */
    /* test eax, eax */ /* 0x1102E9DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102E9E9; /* 0x1102E9DC: je 0x1102e9e9 */
L_1102E9DE:
    PUSH32(esp, 0x11003260u); /* 0x1102E9DE: push 0x11003260 */
    RECOMP_CALL(sub_1102EB5D); /* 0x1102E9E3: call 0x1102eb5d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E9E8: pop ecx */
L_1102E9E9:
    PUSH32(esp, 0x1102E9C0u); /* 0x1102E9E9: push 0x1102e9c0 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1102E9EE: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102E9F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102E9F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102E9F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102E9F5u);

L_1102E9F5:
    PUSH32(esp, ebp); /* 0x1102E9F5: push ebp */
    ebp = esp; /* 0x1102E9F6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102E9F8: push esi */
    PUSH32(esp, edi); /* 0x1102E9F9: push edi */
    PUSH32(esp, 0x1102E9CCu); /* 0x1102E9FA: push 0x1102e9cc */
    PUSH32(esp, 0x110668B8u); /* 0x1102E9FF: push 0x110668b8 */
    RECOMP_CALL(sub_1102F0B4); /* 0x1102EA04: call 0x1102f0b4 */
    RECOMP_FLAGS_IN();
    edi = 0x110668BCu; /* 0x1102EA09: mov edi, 0x110668bc */
    PUSH32(esp, edi); /* 0x1102EA0E: push edi */
    RECOMP_CALL(sub_1102F017); /* 0x1102EA0F: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1102EA14: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102EA17: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), 0 */ /* 0x1102EA1A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EA2C; /* 0x1102EA1D: jne 0x1102ea2c */
L_1102EA1F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102EA1F: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x1102EA22: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA25: pop ecx */
    MEM32(esi) = 1; /* 0x1102EA26: mov dword ptr [esi], 1 */
L_1102EA2C:
    PUSH32(esp, edi); /* 0x1102EA2C: push edi */
    RECOMP_CALL(sub_1102F092); /* 0x1102EA2D: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA32: pop ecx */
    edi = POP32_VAL(esp); /* 0x1102EA33: pop edi */
    esi = POP32_VAL(esp); /* 0x1102EA34: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EA35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EA36: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EA37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EA37u);

L_1102EA37:
    PUSH32(esp, ebp); /* 0x1102EA37: push ebp */
    ebp = esp; /* 0x1102EA38: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1102EA3A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102EA3D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102EA42: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102EA44: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102EA47: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1102EA4A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102EA4B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102EA4E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102EA4F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102EA52: push edi */
    PUSH32(esp, esi); /* 0x1102EA53: push esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1102EA54: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102EA57: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102EFCC); /* 0x1102EA59: call 0x1102efcc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA5E: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102EA5F: mov dword ptr [ebp - 0x18], eax */
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1102EA62: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EA7B; /* 0x1102EA65: jne 0x1102ea7b */
L_1102EA67:
    PUSH32(esp, esi); /* 0x1102EA67: push esi */
    RECOMP_CALL(sub_1102EF6E); /* 0x1102EA68: call 0x1102ef6e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA6D: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102EA6E: push dword ptr [ebp - 0x18] */
    ecx = MEM32(ebx); /* 0x1102EA71: mov ecx, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x110691B8)); /* 0x1102EA73: call dword ptr [0x110691b8] */
    RECOMP_FLAGS_IN();
    goto L_1102EAAE; /* 0x1102EA79: jmp 0x1102eaae */
L_1102EA7B:
    eax = ebp + (-0x14); /* 0x1102EA7B: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102EA7E: push 1 */
    PUSH32(esp, eax); /* 0x1102EA80: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102EA81: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102EA86: push esi */
    RECOMP_CALL(sub_1102EF6E); /* 0x1102EA87: call 0x1102ef6e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1102EA8C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102EA8F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1102EA90: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1102F67F); /* 0x1102EA93: call 0x1102f67f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x1102EA98: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1102EA9A: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102EA9D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102EA9E: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110691BC)); /* 0x1102EAA1: call dword ptr [0x110691bc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102EAA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EAAE; /* 0x1102EAA9: jne 0x1102eaae */
L_1102EAAB:
    PUSH32(esp, 2); /* 0x1102EAAB: push 2 */
    edi = POP32_VAL(esp); /* 0x1102EAAD: pop edi */
L_1102EAAE:
    PUSH32(esp, esi); /* 0x1102EAAE: push esi */
    RECOMP_CALL(sub_1102F028); /* 0x1102EAAF: call 0x1102f028 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EAB4: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102EAB5: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1102EAB8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102EABA: pop edi */
    esi = POP32_VAL(esp); /* 0x1102EABB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102EABC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102EABE: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102EABF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102EAC4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EAC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EAC7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EAC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EAC8u);

L_1102EAC8:
    PUSH32(esp, ebp); /* 0x1102EAC8: push ebp */
    ebp = esp; /* 0x1102EAC9: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102EACB: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x1102EACE: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x110691C4)); /* 0x1102EAD0: call dword ptr [0x110691c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102EAD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102EAD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EAD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EADA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EADAu);

L_1102EADA:
    PUSH32(esp, ebp); /* 0x1102EADA: push ebp */
    ebp = esp; /* 0x1102EADB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102EADD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102EADE: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1102EAE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EAFA; /* 0x1102EAE3: je 0x1102eafa */
L_1102EAE5:
    ecx = MEM32(esi); /* 0x1102EAE5: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1102EAE7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EAFA; /* 0x1102EAE9: je 0x1102eafa */
L_1102EAEB:
    RECOMP_ICALL(MEM32(0x110691B4)); /* 0x1102EAEB: call dword ptr [0x110691b4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1102EAF1: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1102EAF3: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EAF9: pop ecx */
L_1102EAFA:
    esi = POP32_VAL(esp); /* 0x1102EAFA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EAFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EAFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EAFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EAFDu);

L_1102EAFD:
    PUSH32(esp, ebp); /* 0x1102EAFD: push ebp */
    ebp = esp; /* 0x1102EAFE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102EB00: push esi */
    PUSH32(esp, edi); /* 0x1102EB01: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102EB02: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x24u); /* 0x1102EB05: push 0x24 */
    PUSH32(esp, 1); /* 0x1102EB07: push 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1102EB09: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x110691AC)); /* 0x1102EB0C: call dword ptr [0x110691ac] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102EB12: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102EB14: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102EB15: pop ecx */
    /* test esi, esi */ /* 0x1102EB16: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EB1D; /* 0x1102EB18: jne 0x1102eb1d */
L_1102EB1A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102EB1A: inc eax */
    _flag_k = FK_INC;
    goto L_1102EB29; /* 0x1102EB1B: jmp 0x1102eb29 */
L_1102EB1D:
    ecx = esi; /* 0x1102EB1D: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x110691B0)); /* 0x1102EB1F: call dword ptr [0x110691b0] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = esi; /* 0x1102EB25: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102EB27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102EB29:
    edi = POP32_VAL(esp); /* 0x1102EB29: pop edi */
    esi = POP32_VAL(esp); /* 0x1102EB2A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EB2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EB2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EB2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EB2Du);

L_1102EB2D:
    PUSH32(esp, ebp); /* 0x1102EB2D: push ebp */
    ebp = esp; /* 0x1102EB2E: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102EB30: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x1102EB33: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x110691C0)); /* 0x1102EB35: call dword ptr [0x110691c0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102EB3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102EB3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EB3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EB3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EB3Fu);

    goto L_1102EB3F;
L_1102EA37:
    PUSH32(esp, ebp); /* 0x1102EA37: push ebp */
    ebp = esp; /* 0x1102EA38: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1102EA3A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102EA3D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102EA42: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102EA44: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102EA47: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1102EA4A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102EA4B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102EA4E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102EA4F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102EA52: push edi */
    PUSH32(esp, esi); /* 0x1102EA53: push esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1102EA54: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102EA57: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102EFCC); /* 0x1102EA59: call 0x1102efcc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA5E: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102EA5F: mov dword ptr [ebp - 0x18], eax */
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1102EA62: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EA7B; /* 0x1102EA65: jne 0x1102ea7b */
L_1102EA67:
    PUSH32(esp, esi); /* 0x1102EA67: push esi */
    RECOMP_CALL(sub_1102EF6E); /* 0x1102EA68: call 0x1102ef6e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EA6D: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102EA6E: push dword ptr [ebp - 0x18] */
    ecx = MEM32(ebx); /* 0x1102EA71: mov ecx, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x110691B8)); /* 0x1102EA73: call dword ptr [0x110691b8] */
    RECOMP_FLAGS_IN();
    goto L_1102EAAE; /* 0x1102EA79: jmp 0x1102eaae */
L_1102EA7B:
    eax = ebp + (-0x14); /* 0x1102EA7B: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102EA7E: push 1 */
    PUSH32(esp, eax); /* 0x1102EA80: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102EA81: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102EA86: push esi */
    RECOMP_CALL(sub_1102EF6E); /* 0x1102EA87: call 0x1102ef6e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1102EA8C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102EA8F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1102EA90: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1102F67F); /* 0x1102EA93: call 0x1102f67f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x1102EA98: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1102EA9A: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102EA9D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102EA9E: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110691BC)); /* 0x1102EAA1: call dword ptr [0x110691bc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102EAA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EAAE; /* 0x1102EAA9: jne 0x1102eaae */
L_1102EAAB:
    PUSH32(esp, 2); /* 0x1102EAAB: push 2 */
    edi = POP32_VAL(esp); /* 0x1102EAAD: pop edi */
L_1102EAAE:
    PUSH32(esp, esi); /* 0x1102EAAE: push esi */
    RECOMP_CALL(sub_1102F028); /* 0x1102EAAF: call 0x1102f028 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EAB4: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102EAB5: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1102EAB8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102EABA: pop edi */
    esi = POP32_VAL(esp); /* 0x1102EABB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102EABC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102EABE: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102EABF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102EAC4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EAC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EAC7: ret  */
L_1102EB3F:
    PUSH32(esp, ebp); /* 0x1102EB3F: push ebp */
    ebp = esp; /* 0x1102EB40: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1102EB42: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1102EA37; /* 0x1102EB43: jmp 0x1102ea37 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102EB48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EB48u);

L_1102EB48:
    PUSH32(esp, ebp); /* 0x1102EB48: push ebp */
    ebp = esp; /* 0x1102EB49: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1102EB4B: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102EB4D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102EB50: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EA37); /* 0x1102EB53: call 0x1102ea37 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102EB58: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102EB5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EB5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EB5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EB5Du);

L_1102EB5D:
    PUSH32(esp, ebp); /* 0x1102EB5D: push ebp */
    ebp = esp; /* 0x1102EB5E: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x1102EB60: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1102EB66: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102EB69: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102EB6A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069314)); /* 0x1102EB6D: call dword ptr [0x11069314] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x1102EB73: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1102EB79: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102EB7C: push eax */
    PUSH32(esp, 0xAu); /* 0x1102EB7D: push 0xa */
    RECOMP_ICALL(MEM32(0x11069318)); /* 0x1102EB7F: call dword ptr [0x11069318] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102EB85: add esp, 0x10 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(0x11069320)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102EB8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EB8Eu);

L_1102EB8E:
    PUSH32(esp, ebp); /* 0x1102EB8E: push ebp */
    ebp = esp; /* 0x1102EB8F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1102EB91: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1102EB94: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xC); /* 0x1102EB98: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1102EB9B: push esi */
    PUSH32(esp, eax); /* 0x1102EB9C: push eax */
    RECOMP_CALL(sub_1102EAFD); /* 0x1102EB9D: call 0x1102eafd */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x1102EBA2: lea eax, [ebp - 4] */
    PUSH32(esp, 1); /* 0x1102EBA5: push 1 */
    PUSH32(esp, eax); /* 0x1102EBA7: push eax */
    RECOMP_CALL(sub_1102EFD9); /* 0x1102EBA8: call 0x1102efd9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1102EBAD: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1102EBB0: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x1102EBB3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1102EBB6: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0xC); /* 0x1102EBB9: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102EBBC: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x4); /* 0x1102EBBF: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1102EBC2: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1102EBC5: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1102EBC8: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x4); /* 0x1102EBCB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1102EBCE: push eax */
    RECOMP_CALL(sub_1102F017); /* 0x1102EBCF: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x1102EBD4: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1102EBD7: push eax */
    PUSH32(esp, 0x1102EDB3u); /* 0x1102EBD8: push 0x1102edb3 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102EBDD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102ED7B); /* 0x1102EBE0: call 0x1102ed7b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102EBE5: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102EBE7: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1102EBEA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EC05; /* 0x1102EBEC: jne 0x1102ec05 */
L_1102EBEE:
    goto L_1102EBFF; /* 0x1102EBEE: jmp 0x1102ebff */
L_1102EBF0:
    eax = ebp + (-0x4); /* 0x1102EBF0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1102EBF3: push eax */
    eax = ebp + (-0xC); /* 0x1102EBF4: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1102EBF7: push eax */
    RECOMP_CALL(sub_1102EB48); /* 0x1102EBF8: call 0x1102eb48 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EBFD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102EBFE: pop ecx */
L_1102EBFF:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1102EBFF: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EBF0; /* 0x1102EC03: je 0x1102ebf0 */
L_1102EC05:
    eax = ebp + (-0x4); /* 0x1102EC05: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1102EC08: push eax */
    RECOMP_CALL(sub_1102F092); /* 0x1102EC09: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1102EC0E: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1102EC11: push eax */
    RECOMP_CALL(sub_1102EADA); /* 0x1102EC12: call 0x1102eada */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x1102EC17: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1102EC1A: push eax */
    RECOMP_CALL(sub_1102EFA6); /* 0x1102EC1B: call 0x1102efa6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102EC20: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1102EC23: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102EC25: pop esi */
    esp = ebp; /* 0x1102EC26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EC28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EC29: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EC2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EC2Au);

L_1102EC2A:
    PUSH32(esp, ebp); /* 0x1102EC2A: push ebp */
    ebp = esp; /* 0x1102EC2B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102EC2D: push ecx */
    PUSH32(esp, ecx); /* 0x1102EC2E: push ecx */
    PUSH32(esp, 0); /* 0x1102EC2F: push 0 */
    PUSH32(esp, 1); /* 0x1102EC31: push 1 */
    PUSH32(esp, 2); /* 0x1102EC33: push 2 */
    eax = ebp + (-0x8); /* 0x1102EC35: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1102EC38: push eax */
    RECOMP_ICALL(MEM32(0x11069024)); /* 0x1102EC39: call dword ptr [0x11069024] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102EC3F: push eax */
    RECOMP_ICALL(MEM32(0x11069020)); /* 0x1102EC40: call dword ptr [0x11069020] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102EC46: push eax */
    RECOMP_ICALL(MEM32(0x11069024)); /* 0x1102EC47: call dword ptr [0x11069024] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102EC4D: push eax */
    RECOMP_ICALL(MEM32(0x1106902C)); /* 0x1102EC4E: call dword ptr [0x1106902c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102EC54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EC63; /* 0x1102EC56: je 0x1102ec63 */
L_1102EC58:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1102EC58: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102EC5B: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
    goto L_1102EC67; /* 0x1102EC61: jmp 0x1102ec67 */
L_1102EC63:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1102EC63: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102EC67:
    RECOMP_ICALL(MEM32(0x1106901C)); /* 0x1102EC67: call dword ptr [0x1106901c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1102EC6D: mov edx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1102EC6F: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x1102EC72: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EC74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EC75: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EC76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EC76u);

L_1102EC76:
    PUSH32(esp, ebp); /* 0x1102EC76: push ebp */
    ebp = esp; /* 0x1102EC77: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102EC79: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102EC7C: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102EC82: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102EC84: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1102EC86: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1102EC89: add eax, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102EC8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EC8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EC8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EC8Eu);

L_1102EC8E:
    PUSH32(esp, ebp); /* 0x1102EC8E: push ebp */
    ebp = esp; /* 0x1102EC8F: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1102EC91: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102EC94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1102EC96: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1102EC99: sete al */
    ebp = POP32_VAL(esp); /* 0x1102EC9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EC9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EC9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EC9Eu);

L_1102EC9E:
    PUSH32(esp, ebp); /* 0x1102EC9E: push ebp */
    ebp = esp; /* 0x1102EC9F: mov ebp, esp */
    RECOMP_CALL(sub_1102F45A); /* 0x1102ECA1: call 0x1102f45a */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102ECA6: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x110691D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102ECAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ECADu);

L_1102ECAD:
    PUSH32(esp, ebp); /* 0x1102ECAD: push ebp */
    ebp = esp; /* 0x1102ECAE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102ECB0: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1102ECB1: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102ECB3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069028)); /* 0x1102ECB6: call dword ptr [0x11069028] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102ECBC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102ECF3; /* 0x1102ECBF: je 0x1102ecf3 */
L_1102ECC1:
    eax = ebp + (-0x4); /* 0x1102ECC1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1102ECC4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102ECC5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069018)); /* 0x1102ECC8: call dword ptr [0x11069018] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1102ECCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102ECF3; /* 0x1102ECD0: je 0x1102ecf3 */
L_1102ECD2:
    ecx = MEM32(ebp + 0x10); /* 0x1102ECD2: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1102ECD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102ECDE; /* 0x1102ECD7: je 0x1102ecde */
L_1102ECD9:
    eax = MEM32(ebp + (-0x4)); /* 0x1102ECD9: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx) = eax; /* 0x1102ECDC: mov dword ptr [ecx], eax */
L_1102ECDE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102ECDE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069040)); /* 0x1102ECE1: call dword ptr [0x11069040] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102ECE7: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102ECE9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1102ECEB: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1102ECEE: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1102ECF6; /* 0x1102ECF1: jmp 0x1102ecf6 */
L_1102ECF3:
    PUSH32(esp, 4); /* 0x1102ECF3: push 4 */
    eax = POP32_VAL(esp); /* 0x1102ECF5: pop eax */
L_1102ECF6:
    esp = ebp; /* 0x1102ECF6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102ECF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102ECF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102ECFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ECFAu);

L_1102ECFA:
    PUSH32(esp, ebp); /* 0x1102ECFA: push ebp */
    ebp = esp; /* 0x1102ECFB: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1102ECFD: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1102ED00: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102ED03: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102ED05: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1102ED07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102ED08: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102ED09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ED09u);

L_1102ED09:
    PUSH32(esp, ebp); /* 0x1102ED09: push ebp */
    ebp = esp; /* 0x1102ED0A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102ED0C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102ED0F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102ED14: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102ED16: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102ED19: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102ED1A: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x14); /* 0x1102ED1D: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102ED20: push 1 */
    PUSH32(esp, eax); /* 0x1102ED22: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102ED23: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102ED28: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102ED29: pop ecx */
L_1102ED2A:
    eax = ebp + (-0x14); /* 0x1102ED2A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102ED2D: push eax */
    PUSH32(esp, esi); /* 0x1102ED2E: push esi */
    RECOMP_CALL(sub_1102F67F); /* 0x1102ED2F: call 0x1102f67f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102ED34: push eax */
    RECOMP_ICALL(MEM32(0x110691C8)); /* 0x1102ED35: call dword ptr [0x110691c8] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1102ED3B: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102ED3E: push 1 */
    PUSH32(esp, eax); /* 0x1102ED40: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102ED41: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1102ED46: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1102ED49: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1102ED4C: mov eax, dword ptr [esi] */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x1102ED4E: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102ED2A; /* 0x1102ED51: jl 0x1102ed2a */
L_1102ED53:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102ED5A; /* 0x1102ED53: jg 0x1102ed5a */
L_1102ED55:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1102ED55: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1102ED2A; /* 0x1102ED58: jb 0x1102ed2a */
L_1102ED5A:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1102ED5A: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102ED6C; /* 0x1102ED5D: jne 0x1102ed6c */
L_1102ED5F:
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x1102ED5F: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102ED6C; /* 0x1102ED62: jne 0x1102ed6c */
L_1102ED64:
    eax = MEM32(ebp + (-0xC)); /* 0x1102ED64: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1102ED67: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102ED2A; /* 0x1102ED6A: jl 0x1102ed2a */
L_1102ED6C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102ED6C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102ED6F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102ED71: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102ED72: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102ED77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102ED79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102ED7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102ED7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ED7Bu);

L_1102ED7B:
    PUSH32(esp, ebp); /* 0x1102ED7B: push ebp */
    ebp = esp; /* 0x1102ED7C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102ED7E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102ED7F: mov esi, dword ptr [ebp + 8] */
    eax = esi + 0x4; /* 0x1102ED82: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1102ED85: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102ED86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102ED88: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102ED89: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102ED8C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102ED8F: push eax */
    PUSH32(esp, eax); /* 0x1102ED90: push eax */
    RECOMP_ICALL(MEM32(0x110691CC)); /* 0x1102ED91: call dword ptr [0x110691cc] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1102ED97: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102ED99: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102ED9C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102ED9E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1102EDA0: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1102EDA3: add eax, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1102EDA6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EDA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EDA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EDA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EDA9u);

L_1102EDA9:
    PUSH32(esp, 0); /* 0x1102EDA9: push 0 */
    RECOMP_ICALL(MEM32(0x110691C8)); /* 0x1102EDAB: call dword ptr [0x110691c8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EDB1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EDB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EDB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EDB3u);

L_1102EDB3:
    PUSH32(esp, ebp); /* 0x1102EDB3: push ebp */
    ebp = esp; /* 0x1102EDB4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102EDB6: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1102EDB9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102EDBA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102EDBD: push edi */
    PUSH32(esp, 5); /* 0x1102EDBE: push 5 */
    ecx = POP32_VAL(esp); /* 0x1102EDC0: pop ecx */
    edi = ebp + (-0x14); /* 0x1102EDC1: lea edi, [ebp - 0x14] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102EDC4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1102EDC6: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1102F017); /* 0x1102EDC9: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1102EDCE: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1102EDD1: push dword ptr [ebp - 0xc] */
    MEM32(eax) = 1; /* 0x1102EDD4: mov dword ptr [eax], 1 */
    RECOMP_CALL(sub_1102EB2D); /* 0x1102EDDA: call 0x1102eb2d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1102EDDF: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1102F092); /* 0x1102EDE2: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1102EDE7: push dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(ebp + (-0x14))); /* 0x1102EDEA: call dword ptr [ebp - 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102EDED: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1102EDF0: mov esi, eax */
    RECOMP_CALL(sub_1102F45A); /* 0x1102EDF2: call 0x1102f45a */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1102F7CC); /* 0x1102EDF7: call 0x1102f7cc */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1102EDFC: pop edi */
    eax = esi; /* 0x1102EDFD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102EDFF: pop esi */
    esp = ebp; /* 0x1102EE00: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EE02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102EE03: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102EE06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EE06u);

L_1102EE06:
    PUSH32(esp, ebp); /* 0x1102EE06: push ebp */
    ebp = esp; /* 0x1102EE07: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1102EE09: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102EE0C: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102EE11: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102EE13: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1102EE16: push ebx */
    PUSH32(esp, esi); /* 0x1102EE17: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1102EE18: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1102EE1B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102EE1C: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x1102EE1F: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1102EE21: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEFFu);
    eax = eax & 0xFFFFFEFFu; /* 0x1102EE23: and eax, 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x1102EE28: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EE56; /* 0x1102EE2B: jne 0x1102ee56 */
L_1102EE2D:
    esi = MEM32(edi); /* 0x1102EE2D: mov esi, dword ptr [edi] */
    ebx = MEM32(0x1106901C); /* 0x1102EE2F: mov ebx, dword ptr [0x1106901c] */
    RECOMP_ICALL(ebx); /* 0x1102EE35: call ebx */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x24), eax */ /* 0x1102EE37: cmp dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EE4C; /* 0x1102EE3A: je 0x1102ee4c */
L_1102EE3C:
    ecx = esi + 0x4; /* 0x1102EE3C: lea ecx, [esi + 4] */
    RECOMP_ICALL(MEM32(0x110691D4)); /* 0x1102EE3F: call dword ptr [0x110691d4] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x1102EE45: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1102EE47: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x24) = eax; /* 0x1102EE49: mov dword ptr [ecx + 0x24], eax */
L_1102EE4C:
    eax = MEM32(edi); /* 0x1102EE4C: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1; /* 0x1102EE4E: inc dword ptr [eax + 0x28] */
    _flag_k = FK_INC;
    goto L_1102EF5B; /* 0x1102EE51: jmp 0x1102ef5b */
L_1102EE56:
    /* test esi, esi */ /* 0x1102EE56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EE81; /* 0x1102EE58: jne 0x1102ee81 */
L_1102EE5A:
    eax = MEM32(edi); /* 0x1102EE5A: mov eax, dword ptr [edi] */
    ebx = MEM32(0x1106901C); /* 0x1102EE5C: mov ebx, dword ptr [0x1106901c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102EE62: mov dword ptr [ebp - 0x18], eax */
    RECOMP_ICALL(ebx); /* 0x1102EE65: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1102EE67: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + 0x24), eax */ /* 0x1102EE6A: cmp dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EF23; /* 0x1102EE6D: je 0x1102ef23 */
L_1102EE73:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1102EE73: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x110691D4)); /* 0x1102EE76: call dword ptr [0x110691d4] */
    RECOMP_FLAGS_IN();
    goto L_1102EF23; /* 0x1102EE7C: jmp 0x1102ef23 */
L_1102EE81:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1102EE81: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x1102EE85: mov eax, dword ptr [esi] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1102EF01; /* 0x1102EE87: jl 0x1102ef01 */
L_1102EE89:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102EE8F; /* 0x1102EE89: jg 0x1102ee8f */
L_1102EE8B:
    /* test eax, eax */ /* 0x1102EE8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_1102EF01; /* 0x1102EE8D: jb 0x1102ef01 */
L_1102EE8F:
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x4)));
    eax = eax | MEM32(esi + 0x4); /* 0x1102EE8F: or eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EE99; /* 0x1102EE92: jne 0x1102ee99 */
L_1102EE94:
    /* cmp MEM32(esi + 0x8), eax */ /* 0x1102EE94: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102EF01; /* 0x1102EE97: jle 0x1102ef01 */
L_1102EE99:
    eax = ebp + (-0x14); /* 0x1102EE99: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102EE9C: push 1 */
    PUSH32(esp, eax); /* 0x1102EE9E: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102EE9F: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x1106901C); /* 0x1102EEA4: mov ebx, dword ptr [0x1106901c] */
L_1102EEAA:
    eax = MEM32(esi); /* 0x1102EEAA: mov eax, dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x1102EEAC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102EEAD: pop ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x1102EEAE: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x1102EEB1: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102EECF; /* 0x1102EEB4: jl 0x1102eecf */
L_1102EEB6:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102EEBD; /* 0x1102EEB6: jg 0x1102eebd */
L_1102EEB8:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1102EEB8: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102EECF; /* 0x1102EEBB: jb 0x1102eecf */
L_1102EEBD:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1102EEBD: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EF3B; /* 0x1102EEC0: jne 0x1102ef3b */
L_1102EEC2:
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x1102EEC2: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EF3B; /* 0x1102EEC5: jne 0x1102ef3b */
L_1102EEC7:
    eax = MEM32(ebp + (-0xC)); /* 0x1102EEC7: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1102EECA: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102EF3B; /* 0x1102EECD: jge 0x1102ef3b */
L_1102EECF:
    RECOMP_ICALL(ebx); /* 0x1102EECF: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1102EED1: mov ecx, dword ptr [edi] */
    /* cmp MEM32(ecx + 0x24), eax */ /* 0x1102EED3: cmp dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EF23; /* 0x1102EED6: je 0x1102ef23 */
L_1102EED8:
    eax = ebp + (-0x14); /* 0x1102EED8: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102EEDB: push eax */
    PUSH32(esp, esi); /* 0x1102EEDC: push esi */
    RECOMP_CALL(sub_1102F67F); /* 0x1102EEDD: call 0x1102f67f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EEE2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102EEE3: pop ecx */
    ecx = MEM32(edi); /* 0x1102EEE4: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1102EEE6: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1102EEE7: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x110691DC)); /* 0x1102EEEA: call dword ptr [0x110691dc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102EEF0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EF23; /* 0x1102EEF2: jne 0x1102ef23 */
L_1102EEF4:
    eax = ebp + (-0x14); /* 0x1102EEF4: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102EEF7: push 1 */
    PUSH32(esp, eax); /* 0x1102EEF9: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102EEFA: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1102EEAA; /* 0x1102EEFF: jmp 0x1102eeaa */
L_1102EF01:
    eax = MEM32(edi); /* 0x1102EF01: mov eax, dword ptr [edi] */
    ebx = MEM32(0x1106901C); /* 0x1102EF03: mov ebx, dword ptr [0x1106901c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102EF09: mov dword ptr [ebp - 0x18], eax */
    RECOMP_ICALL(ebx); /* 0x1102EF0C: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1102EF0E: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + 0x24), eax */ /* 0x1102EF11: cmp dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EF23; /* 0x1102EF14: je 0x1102ef23 */
L_1102EF16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1102EF16: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x110691D8)); /* 0x1102EF19: call dword ptr [0x110691d8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102EF1F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EF3B; /* 0x1102EF21: je 0x1102ef3b */
L_1102EF23:
    eax = MEM32(edi); /* 0x1102EF23: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1; /* 0x1102EF25: inc dword ptr [eax + 0x28] */
    _flag_k = FK_INC;
    /* cmp MEM32(eax + 0x28), 1 */ /* 0x1102EF28: cmp dword ptr [eax + 0x28], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1102EF54; /* 0x1102EF2C: jle 0x1102ef54 */
L_1102EF2E:
    eax = MEM32(edi); /* 0x1102EF2E: mov eax, dword ptr [edi] */
    /* test MEM32(eax), 0x100u */ /* 0x1102EF30: test dword ptr [eax], 0x100 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EF5B; /* 0x1102EF36: jne 0x1102ef5b */
L_1102EF38:
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) - 1; /* 0x1102EF38: dec dword ptr [eax + 0x28] */
    _flag_k = FK_DEC;
L_1102EF3B:
    /* test esi, esi */ /* 0x1102EF3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EF4F; /* 0x1102EF3D: je 0x1102ef4f */
L_1102EF3F:
    eax = MEM32(esi); /* 0x1102EF3F: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x4)));
    eax = eax | MEM32(esi + 0x4); /* 0x1102EF41: or eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EF4B; /* 0x1102EF44: jne 0x1102ef4b */
L_1102EF46:
    /* cmp MEM32(esi + 0x8), eax */ /* 0x1102EF46: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EF4F; /* 0x1102EF49: je 0x1102ef4f */
L_1102EF4B:
    PUSH32(esp, 2); /* 0x1102EF4B: push 2 */
    goto L_1102EF51; /* 0x1102EF4D: jmp 0x1102ef51 */
L_1102EF4F:
    PUSH32(esp, 3); /* 0x1102EF4F: push 3 */
L_1102EF51:
    eax = POP32_VAL(esp); /* 0x1102EF51: pop eax */
    goto L_1102EF5D; /* 0x1102EF52: jmp 0x1102ef5d */
L_1102EF54:
    RECOMP_ICALL(ebx); /* 0x1102EF54: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1102EF56: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x24) = eax; /* 0x1102EF58: mov dword ptr [ecx + 0x24], eax */
L_1102EF5B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102EF5B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102EF5D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1102EF5D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102EF60: pop edi */
    esi = POP32_VAL(esp); /* 0x1102EF61: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102EF62: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102EF64: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102EF65: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102EF6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102EF6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EF6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EF6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EF6Eu);

L_1102EF6E:
    PUSH32(esp, ebp); /* 0x1102EF6E: push ebp */
    ebp = esp; /* 0x1102EF6F: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102EF71: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1102EF74: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)((MEM32(eax + 0x24) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x24) | 0xFFFFFFFFu));
    MEM32(eax + 0x24) = MEM32(eax + 0x24) | 0xFFFFFFFFu; /* 0x1102EF76: or dword ptr [eax + 0x24], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102EF7A: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) - 1; /* 0x1102EF7C: dec dword ptr [eax + 0x28] */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x1102EF7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EF80: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EF81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EF81u);

L_1102EF81:
    PUSH32(esp, ebp); /* 0x1102EF81: push ebp */
    ebp = esp; /* 0x1102EF82: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102EF84: push esi */
    PUSH32(esp, edi); /* 0x1102EF85: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102EF86: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102EF89: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x1102EF8B: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x28), esi */ /* 0x1102EF8D: cmp dword ptr [eax + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102EFA0; /* 0x1102EF90: je 0x1102efa0 */
L_1102EF92:
    RECOMP_ICALL(MEM32(0x1106901C)); /* 0x1102EF92: call dword ptr [0x1106901c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1102EF98: mov ecx, dword ptr [edi] */
    /* cmp MEM32(ecx + 0x24), eax */ /* 0x1102EF9A: cmp dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102EFA0; /* 0x1102EF9D: jne 0x1102efa0 */
L_1102EF9F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102EF9F: inc esi */
    _flag_k = FK_INC;
L_1102EFA0:
    edi = POP32_VAL(esp); /* 0x1102EFA0: pop edi */
    eax = esi; /* 0x1102EFA1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102EFA3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EFA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EFA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EFA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EFA6u);

L_1102EFA6:
    PUSH32(esp, ebp); /* 0x1102EFA6: push ebp */
    ebp = esp; /* 0x1102EFA7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102EFA9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102EFAA: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1102EFAD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EFC9; /* 0x1102EFAF: je 0x1102efc9 */
L_1102EFB1:
    ecx = MEM32(esi); /* 0x1102EFB1: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1102EFB3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102EFC9; /* 0x1102EFB5: je 0x1102efc9 */
L_1102EFB7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1102EFB7: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1102EFBA: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1102EFC0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1102EFC2: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102EFC8: pop ecx */
L_1102EFC9:
    esi = POP32_VAL(esp); /* 0x1102EFC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102EFCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EFCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EFCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EFCCu);

L_1102EFCC:
    PUSH32(esp, ebp); /* 0x1102EFCC: push ebp */
    ebp = esp; /* 0x1102EFCD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102EFCF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1102EFD2: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1102EFD4: add eax, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102EFD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102EFD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102EFD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102EFD9u);

L_1102EFD9:
    PUSH32(esp, ebp); /* 0x1102EFD9: push ebp */
    ebp = esp; /* 0x1102EFDA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102EFDC: push esi */
    PUSH32(esp, edi); /* 0x1102EFDD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1102EFDE: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x2Cu); /* 0x1102EFE1: push 0x2c */
    PUSH32(esp, 1); /* 0x1102EFE3: push 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1102EFE5: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x110691AC)); /* 0x1102EFE8: call dword ptr [0x110691ac] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102EFEE: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102EFF0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102EFF1: pop ecx */
    /* test esi, esi */ /* 0x1102EFF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102EFF9; /* 0x1102EFF4: jne 0x1102eff9 */
L_1102EFF6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102EFF6: inc eax */
    _flag_k = FK_INC;
    goto L_1102F013; /* 0x1102EFF7: jmp 0x1102f013 */
L_1102EFF9:
    ecx = esi + 0x4; /* 0x1102EFF9: lea ecx, [esi + 4] */
    /* test ecx, ecx */ /* 0x1102EFFC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F006; /* 0x1102EFFE: je 0x1102f006 */
L_1102F000:
    RECOMP_ICALL(MEM32(0x110690EC)); /* 0x1102F000: call dword ptr [0x110690ec] */
    RECOMP_FLAGS_IN();
L_1102F006:
    eax = MEM32(ebp + 0xC); /* 0x1102F006: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(esi + 0x24) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x24) | 0xFFFFFFFFu));
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | 0xFFFFFFFFu; /* 0x1102F009: or dword ptr [esi + 0x24], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1102F00D: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F00F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x1102F011: mov dword ptr [edi], esi */
L_1102F013:
    edi = POP32_VAL(esp); /* 0x1102F013: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F014: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F015: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F016: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F017(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F017u);

L_1102F017:
    PUSH32(esp, ebp); /* 0x1102F017: push ebp */
    ebp = esp; /* 0x1102F018: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1102F01A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F01C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EE06); /* 0x1102F01F: call 0x1102ee06 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F024: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F025: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102F026: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F027: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F028u);

L_1102F028:
    PUSH32(esp, ebp); /* 0x1102F028: push ebp */
    ebp = esp; /* 0x1102F029: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x1106901C)); /* 0x1102F02B: call dword ptr [0x1106901c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1102F031: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1102F034: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x24) = eax; /* 0x1102F036: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(edx); /* 0x1102F039: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1; /* 0x1102F03B: inc dword ptr [eax + 0x28] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1102F03E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F03F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F040u);

L_1102F040:
    PUSH32(esp, ebp); /* 0x1102F040: push ebp */
    ebp = esp; /* 0x1102F041: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102F043: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F046: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EE06); /* 0x1102F049: call 0x1102ee06 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F04E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F04F: pop ecx */
    /* cmp eax, 3 */ /* 0x1102F050: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F058; /* 0x1102F053: jne 0x1102f058 */
L_1102F055:
    PUSH32(esp, 2); /* 0x1102F055: push 2 */
    eax = POP32_VAL(esp); /* 0x1102F057: pop eax */
L_1102F058:
    ebp = POP32_VAL(esp); /* 0x1102F058: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F059: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F05A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F05Au);

L_1102F05A:
    PUSH32(esp, ebp); /* 0x1102F05A: push ebp */
    ebp = esp; /* 0x1102F05B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102F05D: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102F060: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102F065: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102F067: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102F06A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102F06D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1102F06F: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1102F072: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1102F075: mov dword ptr [ebp - 0x10], ecx */
    ecx = ebp + (-0x14); /* 0x1102F078: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1102F07B: push ecx */
    PUSH32(esp, eax); /* 0x1102F07C: push eax */
    RECOMP_CALL(sub_1102EE06); /* 0x1102F07D: call 0x1102ee06 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F082: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F083: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102F084: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102F087: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1102F089: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102F08E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F091: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F092(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F092u);

L_1102F092:
    PUSH32(esp, ebp); /* 0x1102F092: push ebp */
    ebp = esp; /* 0x1102F093: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1102F095: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1102F098: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) - 1; /* 0x1102F09A: dec dword ptr [eax + 0x28] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1102F0B0; /* 0x1102F09D: jne 0x1102f0b0 */
L_1102F09F:
    eax = MEM32(ecx); /* 0x1102F09F: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)((MEM32(eax + 0x24) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x24) | 0xFFFFFFFFu));
    MEM32(eax + 0x24) = MEM32(eax + 0x24) | 0xFFFFFFFFu; /* 0x1102F0A1: or dword ptr [eax + 0x24], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx); /* 0x1102F0A5: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1102F0A7: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x110691E0)); /* 0x1102F0AA: call dword ptr [0x110691e0] */
    RECOMP_FLAGS_IN();
L_1102F0B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F0B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1102F0B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F0B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F0B4u);

L_1102F0B4:
    PUSH32(esp, ebp); /* 0x1102F0B4: push ebp */
    ebp = esp; /* 0x1102F0B5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F0B7: push esi */
    PUSH32(esp, edi); /* 0x1102F0B8: push edi */
    PUSH32(esp, 2); /* 0x1102F0B9: push 2 */
    esi = POP32_VAL(esp); /* 0x1102F0BB: pop esi */
    edi = 0x110668C8u; /* 0x1102F0BC: mov edi, 0x110668c8 */
    /* cmp MEM32(0x110668C4), esi */ /* 0x1102F0C1: cmp dword ptr [0x110668c4], esi */
    _flag_a = (uint32_t)(MEM32(0x110668C4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F110; /* 0x1102F0C7: je 0x1102f110 */
L_1102F0C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F0C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x110668C4u; /* 0x1102F0CB: mov ecx, 0x110668c4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F0D0: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x1102F0D1: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    /* test eax, eax */ /* 0x1102F0D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F0F3; /* 0x1102F0D5: jne 0x1102f0f3 */
L_1102F0D7:
    PUSH32(esp, eax); /* 0x1102F0D7: push eax */
    PUSH32(esp, 0xFA0u); /* 0x1102F0D8: push 0xfa0 */
    PUSH32(esp, edi); /* 0x1102F0DD: push edi */
    RECOMP_ICALL(MEM32(0x11069328)); /* 0x1102F0DE: call dword ptr [0x11069328] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1102F130u); /* 0x1102F0E4: push 0x1102f130 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1102F0E9: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102F0EE: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1102F0F7; /* 0x1102F0F1: jmp 0x1102f0f7 */
L_1102F0F3:
    /* cmp eax, esi */ /* 0x1102F0F3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F108; /* 0x1102F0F5: jne 0x1102f108 */
L_1102F0F7:
    MEM32(0x110668C4) = esi; /* 0x1102F0F7: mov dword ptr [0x110668c4], esi */
    goto L_1102F110; /* 0x1102F0FD: jmp 0x1102f110 */
L_1102F0FF:
    PUSH32(esp, 1); /* 0x1102F0FF: push 1 */
    RECOMP_ICALL(MEM32(0x110691C8)); /* 0x1102F101: call dword ptr [0x110691c8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F107: pop ecx */
L_1102F108:
    /* cmp MEM32(0x110668C4), esi */ /* 0x1102F108: cmp dword ptr [0x110668c4], esi */
    _flag_a = (uint32_t)(MEM32(0x110668C4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F0FF; /* 0x1102F10E: jne 0x1102f0ff */
L_1102F110:
    PUSH32(esp, edi); /* 0x1102F110: push edi */
    RECOMP_ICALL(MEM32(0x11069078)); /* 0x1102F111: call dword ptr [0x11069078] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1102F117: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM8(esi), 0 */ /* 0x1102F11A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F125; /* 0x1102F11D: jne 0x1102f125 */
L_1102F11F:
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x1102F11F: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    MEM8(esi) = (uint8_t)(1); /* 0x1102F122: mov byte ptr [esi], 1 */
L_1102F125:
    PUSH32(esp, edi); /* 0x1102F125: push edi */
    RECOMP_ICALL(MEM32(0x11069074)); /* 0x1102F126: call dword ptr [0x11069074] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1102F12C: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F12D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F12E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F12F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F130u);

L_1102F130:
    PUSH32(esp, 0x110668C8u); /* 0x1102F130: push 0x110668c8 */
    RECOMP_ICALL(MEM32(0x11069070)); /* 0x1102F135: call dword ptr [0x11069070] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F13B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F13C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F13Cu);

L_1102F13C:
    PUSH32(esp, 0x10u); /* 0x1102F13C: push 0x10 */
    eax = 0x1103EF6Eu; /* 0x1102F13E: mov eax, 0x1103ef6e */
    RECOMP_CALL(sub_1103B372); /* 0x1102F143: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102F148: mov edi, ecx */
    esi = edi + 0x4; /* 0x1102F14A: lea esi, [edi + 4] */
    MEM32(edi) = 0x11001E64u; /* 0x1102F14D: mov dword ptr [edi], 0x11001e64 */
    PUSH32(esp, esi); /* 0x1102F153: push esi */
    RECOMP_CALL(sub_1102F1D3); /* 0x1102F154: call 0x1102f1d3 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x14)) = (uint8_t)(1); /* 0x1102F159: mov byte ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x10)) = esi; /* 0x1102F15D: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102F160: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x8; /* 0x1102F164: lea esi, [edi + 8] */
    PUSH32(esp, 1); /* 0x1102F167: push 1 */
    PUSH32(esp, esi); /* 0x1102F169: push esi */
    RECOMP_CALL(sub_1102F26F); /* 0x1102F16A: call 0x1102f26f */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(1); /* 0x1102F16F: mov byte ptr [ebp - 0x1c], 1 */
    MEM32(ebp + (-0x18)) = esi; /* 0x1102F173: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, esi); /* 0x1102F176: push esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1102F177: mov byte ptr [ebp - 4], 1 */
    MEM8(edi + 0xC) = (uint8_t)(0); /* 0x1102F17B: mov byte ptr [edi + 0xc], 0 */
    RECOMP_CALL(sub_1102F292); /* 0x1102F17F: call 0x1102f292 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102F184: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1102F187: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102F189: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F18E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F1AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F1ADu);

L_1102F1AD:
    PUSH32(esp, esi); /* 0x1102F1AD: push esi */
    PUSH32(esp, edi); /* 0x1102F1AE: push edi */
    esi = ecx + 0x8; /* 0x1102F1AF: lea esi, [ecx + 8] */
    MEM32(ecx) = 0x11001E64u; /* 0x1102F1B2: mov dword ptr [ecx], 0x11001e64 */
    PUSH32(esp, esi); /* 0x1102F1B8: push esi */
    edi = ecx + 0x4; /* 0x1102F1B9: lea edi, [ecx + 4] */
    RECOMP_CALL(sub_1102F2B1); /* 0x1102F1BC: call 0x1102f2b1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1102F1C1: push esi */
    RECOMP_CALL(sub_1102EFA6); /* 0x1102F1C2: call 0x1102efa6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1102F1C7: push edi */
    RECOMP_CALL(sub_1102EADA); /* 0x1102F1C8: call 0x1102eada */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F1CD: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1102F1D0: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F1D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F1D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F1D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F1D3u);

L_1102F1D3:
    PUSH32(esp, ebp); /* 0x1102F1D3: push ebp */
    ebp = esp; /* 0x1102F1D4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F1D6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F1D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EAFD); /* 0x1102F1DA: call 0x1102eafd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F1DF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F1E1: pop ecx */
    /* test esi, esi */ /* 0x1102F1E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F1ED; /* 0x1102F1E4: je 0x1102f1ed */
L_1102F1E6:
    PUSH32(esp, esi); /* 0x1102F1E6: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F1E7: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F1EC: pop ecx */
L_1102F1ED:
    eax = esi; /* 0x1102F1ED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F1EF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F1F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F1F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F1F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F1F2u);

L_1102F1F2:
    PUSH32(esp, ebp); /* 0x1102F1F2: push ebp */
    ebp = esp; /* 0x1102F1F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F1F5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F1F6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EB2D); /* 0x1102F1F9: call 0x1102eb2d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F1FE: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F200: pop ecx */
    /* test esi, esi */ /* 0x1102F201: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F20C; /* 0x1102F203: je 0x1102f20c */
L_1102F205:
    PUSH32(esp, esi); /* 0x1102F205: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F206: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F20B: pop ecx */
L_1102F20C:
    eax = esi; /* 0x1102F20C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F20E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F20F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F210: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F211(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F211u);

L_1102F211:
    PUSH32(esp, ebp); /* 0x1102F211: push ebp */
    ebp = esp; /* 0x1102F212: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F214: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102F215: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F218: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EB48); /* 0x1102F21B: call 0x1102eb48 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F220: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F222: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F223: pop ecx */
    /* test esi, esi */ /* 0x1102F224: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F22F; /* 0x1102F226: je 0x1102f22f */
L_1102F228:
    PUSH32(esp, esi); /* 0x1102F228: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F229: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F22E: pop ecx */
L_1102F22F:
    eax = esi; /* 0x1102F22F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F231: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F232: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F233: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F234u);

L_1102F234:
    PUSH32(esp, ebp); /* 0x1102F234: push ebp */
    ebp = esp; /* 0x1102F235: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F237: push esi */
    esi = ecx; /* 0x1102F238: mov esi, ecx */
    PUSH32(esp, esi); /* 0x1102F23A: push esi */
    PUSH32(esp, 0x1102F325u); /* 0x1102F23B: push 0x1102f325 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F240: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102F2F6); /* 0x1102F243: call 0x1102f2f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F248: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x1102F24B: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F26A; /* 0x1102F24F: jne 0x1102f26a */
L_1102F251:
    PUSH32(esp, ebx); /* 0x1102F251: push ebx */
    PUSH32(esp, edi); /* 0x1102F252: push edi */
    edi = esi + 0x8; /* 0x1102F253: lea edi, [esi + 8] */
    ebx = esi + 0x4; /* 0x1102F256: lea ebx, [esi + 4] */
L_1102F259:
    PUSH32(esp, edi); /* 0x1102F259: push edi */
    PUSH32(esp, ebx); /* 0x1102F25A: push ebx */
    RECOMP_CALL(sub_1102F211); /* 0x1102F25B: call 0x1102f211 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x1102F260: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x1102F264: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F265: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F259; /* 0x1102F266: je 0x1102f259 */
L_1102F268:
    edi = POP32_VAL(esp); /* 0x1102F268: pop edi */
    ebx = POP32_VAL(esp); /* 0x1102F269: pop ebx */
L_1102F26A:
    esi = POP32_VAL(esp); /* 0x1102F26A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F26B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102F26C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102F26F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F26Fu);

L_1102F26F:
    PUSH32(esp, ebp); /* 0x1102F26F: push ebp */
    ebp = esp; /* 0x1102F270: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F272: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102F273: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F276: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102EFD9); /* 0x1102F279: call 0x1102efd9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F27E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F280: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F281: pop ecx */
    /* test esi, esi */ /* 0x1102F282: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F28D; /* 0x1102F284: je 0x1102f28d */
L_1102F286:
    PUSH32(esp, esi); /* 0x1102F286: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F287: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F28C: pop ecx */
L_1102F28D:
    eax = esi; /* 0x1102F28D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F28F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F291: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F292(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F292u);

L_1102F292:
    PUSH32(esp, ebp); /* 0x1102F292: push ebp */
    ebp = esp; /* 0x1102F293: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F295: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F296: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102F017); /* 0x1102F299: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F29E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F2A0: pop ecx */
    /* test esi, esi */ /* 0x1102F2A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F2AC; /* 0x1102F2A3: je 0x1102f2ac */
L_1102F2A5:
    PUSH32(esp, esi); /* 0x1102F2A5: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F2A6: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F2AB: pop ecx */
L_1102F2AC:
    eax = esi; /* 0x1102F2AC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F2AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F2AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F2B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F2B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F2B1u);

L_1102F2B1:
    PUSH32(esp, ebp); /* 0x1102F2B1: push ebp */
    ebp = esp; /* 0x1102F2B2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F2B4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F2B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102F092); /* 0x1102F2B8: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F2BD: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F2BF: pop ecx */
    /* test esi, esi */ /* 0x1102F2C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F2CB; /* 0x1102F2C2: je 0x1102f2cb */
L_1102F2C4:
    PUSH32(esp, esi); /* 0x1102F2C4: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F2C5: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F2CA: pop ecx */
L_1102F2CB:
    eax = esi; /* 0x1102F2CB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F2CD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F2CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F2CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F2D0u);

L_1102F2D0:
    PUSH32(esp, esi); /* 0x1102F2D0: push esi */
    esi = ecx; /* 0x1102F2D1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1102F2D3: push edi */
    edi = esi + 0x8; /* 0x1102F2D4: lea edi, [esi + 8] */
    PUSH32(esp, edi); /* 0x1102F2D7: push edi */
    RECOMP_CALL(sub_1102F292); /* 0x1102F2D8: call 0x1102f292 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x4; /* 0x1102F2DD: lea eax, [esi + 4] */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x1102F2E0: mov byte ptr [esi + 0xc], 1 */
    PUSH32(esp, eax); /* 0x1102F2E4: push eax */
    RECOMP_CALL(sub_1102F1F2); /* 0x1102F2E5: call 0x1102f1f2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1102F2EA: push edi */
    RECOMP_CALL(sub_1102F2B1); /* 0x1102F2EB: call 0x1102f2b1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F2F0: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1102F2F3: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F2F4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F2F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F2F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F2F6u);

L_1102F2F6:
    PUSH32(esp, ebp); /* 0x1102F2F6: push ebp */
    ebp = esp; /* 0x1102F2F7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F2F9: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102F2FA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102F2FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F300: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102ED7B); /* 0x1102F303: call 0x1102ed7b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F308: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F30A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x1102F30D: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102F315; /* 0x1102F310: jne 0x1102f315 */
L_1102F312:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F312: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102F314: inc esi */
    _flag_k = FK_INC;
L_1102F315:
    /* test esi, esi */ /* 0x1102F315: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F320; /* 0x1102F317: je 0x1102f320 */
L_1102F319:
    PUSH32(esp, esi); /* 0x1102F319: push esi */
    RECOMP_CALL(sub_1102E955); /* 0x1102F31A: call 0x1102e955 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F31F: pop ecx */
L_1102F320:
    eax = esi; /* 0x1102F320: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F322: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F323: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F324: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F325u);

L_1102F325:
    PUSH32(esp, 4); /* 0x1102F325: push 4 */
    eax = 0x1103EF89u; /* 0x1102F327: mov eax, 0x1103ef89 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102F32C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1102F331: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102F334: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102F338: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1102F33A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F33C: mov esi, eax */
    RECOMP_CALL(sub_1102F7CC); /* 0x1102F33E: call 0x1102f7cc */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102F343: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102F345: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102F34A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102F354(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F354u);

L_1102F354:
    PUSH32(esp, ebp); /* 0x1102F354: push ebp */
    ebp = esp; /* 0x1102F355: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F357: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F358: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1102F35B: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E4)); /* 0x1102F35D: call dword ptr [0x110692e4] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100328Cu; /* 0x1102F363: mov dword ptr [esi], 0x1100328c */
    eax = esi; /* 0x1102F369: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F36B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F36C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102F36D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102F38C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F38Cu);

L_1102F38C:
    PUSH32(esp, ebp); /* 0x1102F38C: push ebp */
    ebp = esp; /* 0x1102F38D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1102F38F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x1102F392: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x11003294u; /* 0x1102F395: mov dword ptr [ebp - 4], 0x11003294 */
    PUSH32(esp, eax); /* 0x1102F39C: push eax */
    ecx = ebp + (-0x10); /* 0x1102F39D: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1102F3A0: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11044BE4u); /* 0x1102F3A6: push 0x11044be4 */
    eax = ebp + (-0x10); /* 0x1102F3AB: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x1100328Cu; /* 0x1102F3AE: mov dword ptr [ebp - 0x10], 0x1100328c */
    PUSH32(esp, eax); /* 0x1102F3B5: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1102F3B6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102F3BBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102F3BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F3BCu);

L_1102F3BC:
    PUSH32(esp, ebp); /* 0x1102F3BC: push ebp */
    ebp = esp; /* 0x1102F3BD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1102F3BF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x1102F3C2: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110032ACu; /* 0x1102F3C5: mov dword ptr [ebp - 4], 0x110032ac */
    PUSH32(esp, eax); /* 0x1102F3CC: push eax */
    ecx = ebp + (-0x10); /* 0x1102F3CD: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1102F3D0: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11044C20u); /* 0x1102F3D6: push 0x11044c20 */
    eax = ebp + (-0x10); /* 0x1102F3DB: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x110032A4u; /* 0x1102F3DE: mov dword ptr [ebp - 0x10], 0x110032a4 */
    PUSH32(esp, eax); /* 0x1102F3E5: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1102F3E6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102F3EBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102F3EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F3ECu);

L_1102F3EC:
    PUSH32(esp, ebp); /* 0x1102F3EC: push ebp */
    ebp = esp; /* 0x1102F3ED: mov ebp, esp */
    PUSH32(esp, 0x1102F5FFu); /* 0x1102F3EF: push 0x1102f5ff */
    PUSH32(esp, 0x110668E8u); /* 0x1102F3F4: push 0x110668e8 */
    RECOMP_CALL(sub_1102F0B4); /* 0x1102F3F9: call 0x1102f0b4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F3FE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F3FF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1102F400: pop ebp */
    goto L_1102F4FD; /* 0x1102F401: jmp 0x1102f4fd */
L_1102F4FD:
    PUSH32(esp, ebp); /* 0x1102F4FD: push ebp */
    ebp = esp; /* 0x1102F4FE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F500: push esi */
    PUSH32(esp, edi); /* 0x1102F501: push edi */
    PUSH32(esp, 4); /* 0x1102F502: push 4 */
    esi = POP32_VAL(esp); /* 0x1102F504: pop esi */
    edi = 0x11068838u; /* 0x1102F505: mov edi, 0x11068838 */
    PUSH32(esp, edi); /* 0x1102F50A: push edi */
    RECOMP_CALL(sub_1102F017); /* 0x1102F50B: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F510: pop ecx */
    /* test eax, eax */ /* 0x1102F511: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F519; /* 0x1102F513: je 0x1102f519 */
L_1102F515:
    PUSH32(esp, esi); /* 0x1102F515: push esi */
    eax = POP32_VAL(esp); /* 0x1102F516: pop eax */
    goto L_1102F572; /* 0x1102F517: jmp 0x1102f572 */
L_1102F519:
    eax = MEM32(0x110668F4); /* 0x1102F519: mov eax, dword ptr [0x110668f4] */
    ecx = 0x3E8u; /* 0x1102F51E: mov ecx, 0x3e8 */
    /* cmp eax, ecx */ /* 0x1102F523: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F53D; /* 0x1102F525: jge 0x1102f53d */
L_1102F527:
    /* cmp MEM8(eax * 8 + 0x110668F8), 0 */ /* 0x1102F527: cmp byte ptr [eax*8 + 0x110668f8], 0 */
    _flag_a = (uint32_t)(MEM8(eax * 8 + 0x110668F8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F536; /* 0x1102F52F: je 0x1102f536 */
L_1102F531:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F531: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1102F532: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F527; /* 0x1102F534: jl 0x1102f527 */
L_1102F536:
    MEM32(0x110668F4) = eax; /* 0x1102F536: mov dword ptr [0x110668f4], eax */
    /* cmp eax, ecx */ /* 0x1102F53B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1102F53D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1102F562; /* 0x1102F53D: je 0x1102f562 */
L_1102F53F:
    ecx = MEM32(ebp + 0x8); /* 0x1102F53F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1102F542: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F544: inc eax */
    _flag_k = FK_INC;
    MEM32(0x110668F4) = eax; /* 0x1102F545: mov dword ptr [0x110668f4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F54A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102F54C: mov eax, dword ptr [ecx] */
    MEM8(eax * 8 + 0x110668F8) = (uint8_t)(1); /* 0x1102F54E: mov byte ptr [eax*8 + 0x110668f8], 1 */
    ecx = MEM32(ecx); /* 0x1102F556: mov ecx, dword ptr [ecx] */
    eax = MEM32(ebp + 0xC); /* 0x1102F558: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx * 8 + 0x110668FC) = eax; /* 0x1102F55B: mov dword ptr [ecx*8 + 0x110668fc], eax */
L_1102F562:
    PUSH32(esp, edi); /* 0x1102F562: push edi */
    RECOMP_CALL(sub_1102F092); /* 0x1102F563: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F568: pop ecx */
    /* test eax, eax */ /* 0x1102F569: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F570; /* 0x1102F56B: je 0x1102f570 */
L_1102F56D:
    PUSH32(esp, 4); /* 0x1102F56D: push 4 */
    esi = POP32_VAL(esp); /* 0x1102F56F: pop esi */
L_1102F570:
    eax = esi; /* 0x1102F570: mov eax, esi */
L_1102F572:
    edi = POP32_VAL(esp); /* 0x1102F572: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F573: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F574: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F575: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F406(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F406u);

L_1102F406:
    PUSH32(esp, ebp); /* 0x1102F406: push ebp */
    ebp = esp; /* 0x1102F407: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F409: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102F40A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102F40D: push edi */
    /* cmp esi, MEM32(0x110668F0) */ /* 0x1102F40E: cmp esi, dword ptr [0x110668f0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x110668F0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F453; /* 0x1102F414: jl 0x1102f453 */
L_1102F416:
    /* cmp esi, 0x3E8u */ /* 0x1102F416: cmp esi, 0x3e8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F453; /* 0x1102F41C: jge 0x1102f453 */
L_1102F41E:
    edi = 0x11068838u; /* 0x1102F41E: mov edi, 0x11068838 */
    PUSH32(esp, edi); /* 0x1102F423: push edi */
    RECOMP_CALL(sub_1102F017); /* 0x1102F424: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F429: pop ecx */
    /* test eax, eax */ /* 0x1102F42A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F453; /* 0x1102F42C: jne 0x1102f453 */
L_1102F42E:
    MEM8(esi * 8 + 0x110668F8) = (uint8_t)(LO8(eax)); /* 0x1102F42E: mov byte ptr [esi*8 + 0x110668f8], al */
    /* cmp esi, MEM32(0x110668F4) */ /* 0x1102F435: cmp esi, dword ptr [0x110668f4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x110668F4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F443; /* 0x1102F43B: jge 0x1102f443 */
L_1102F43D:
    MEM32(0x110668F4) = esi; /* 0x1102F43D: mov dword ptr [0x110668f4], esi */
L_1102F443:
    PUSH32(esp, edi); /* 0x1102F443: push edi */
    RECOMP_CALL(sub_1102F092); /* 0x1102F444: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1102F449: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102F44B: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102F44C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x1102F44E: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102F456; /* 0x1102F451: jmp 0x1102f456 */
L_1102F453:
    PUSH32(esp, 4); /* 0x1102F453: push 4 */
    eax = POP32_VAL(esp); /* 0x1102F455: pop eax */
L_1102F456:
    edi = POP32_VAL(esp); /* 0x1102F456: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F457: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F458: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F459: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F45A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F45Au);

L_1102F45A:
    PUSH32(esp, ebp); /* 0x1102F45A: push ebp */
    ebp = esp; /* 0x1102F45B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102F45D: push ecx */
    PUSH32(esp, ebx); /* 0x1102F45E: push ebx */
    PUSH32(esp, MEM32(0x1106883C)); /* 0x1102F45F: push dword ptr [0x1106883c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102F465: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x110691F0)); /* 0x1102F467: call dword ptr [0x110691f0] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1102F46D: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1102F470: pop ecx */
    /* test eax, eax */ /* 0x1102F471: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F4BA; /* 0x1102F473: je 0x1102f4ba */
L_1102F475:
    PUSH32(esp, esi); /* 0x1102F475: push esi */
    PUSH32(esp, edi); /* 0x1102F476: push edi */
L_1102F477:
    ecx = ebx; /* 0x1102F477: mov ecx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102F479: inc ebx */
    _flag_k = FK_INC;
    /* cmp ecx, 4 */ /* 0x1102F47A: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F4B8; /* 0x1102F47D: jge 0x1102f4b8 */
L_1102F47F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102F47F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x110668FCu; /* 0x1102F481: mov esi, 0x110668fc */
    edi = eax; /* 0x1102F486: mov edi, eax */
L_1102F488:
    /* cmp MEM8(esi + (-0x4)), 0 */ /* 0x1102F488: cmp byte ptr [esi - 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F4A3; /* 0x1102F48C: je 0x1102f4a3 */
L_1102F48E:
    /* cmp MEM32(esi), 0 */ /* 0x1102F48E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F4A3; /* 0x1102F491: je 0x1102f4a3 */
L_1102F493:
    eax = MEM32(edi); /* 0x1102F493: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x1102F495: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F4A3; /* 0x1102F497: je 0x1102f4a3 */
L_1102F499:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1102F499: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102F49C: push eax */
    RECOMP_ICALL(MEM32(esi)); /* 0x1102F49D: call dword ptr [esi] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F49F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102F4A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1102F4A2: inc ecx */
    _flag_k = FK_INC;
L_1102F4A3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1102F4A3: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1102F4A6: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x1106883Cu */ /* 0x1102F4A9: cmp esi, 0x1106883c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1106883Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F488; /* 0x1102F4AF: jl 0x1102f488 */
L_1102F4B1:
    eax = MEM32(ebp + (-0x4)); /* 0x1102F4B1: mov eax, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1102F4B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F477; /* 0x1102F4B6: jne 0x1102f477 */
L_1102F4B8:
    edi = POP32_VAL(esp); /* 0x1102F4B8: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F4B9: pop esi */
L_1102F4BA:
    ebx = POP32_VAL(esp); /* 0x1102F4BA: pop ebx */
    esp = ebp; /* 0x1102F4BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F4BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F4BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F4BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F4BFu);

L_1102F4BF:
    PUSH32(esp, ebp); /* 0x1102F4BF: push ebp */
    ebp = esp; /* 0x1102F4C0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F4C2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102F4C3: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102F4C6: push esi */
    RECOMP_CALL(sub_1102F59D); /* 0x1102F4C7: call 0x1102f59d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F4CC: pop ecx */
    /* test eax, eax */ /* 0x1102F4CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F4D6; /* 0x1102F4CF: je 0x1102f4d6 */
L_1102F4D1:
    eax = MEM32(eax + esi * 4); /* 0x1102F4D1: mov eax, dword ptr [eax + esi*4] */
    goto L_1102F4D8; /* 0x1102F4D4: jmp 0x1102f4d8 */
L_1102F4D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F4D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102F4D8:
    esi = POP32_VAL(esp); /* 0x1102F4D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F4D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F4DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F4DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F4DBu);

L_1102F4DB:
    PUSH32(esp, ebp); /* 0x1102F4DB: push ebp */
    ebp = esp; /* 0x1102F4DC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F4DE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102F4DF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102F4E2: push esi */
    RECOMP_CALL(sub_1102F59D); /* 0x1102F4E3: call 0x1102f59d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F4E8: pop ecx */
    /* test eax, eax */ /* 0x1102F4E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F4F7; /* 0x1102F4EB: je 0x1102f4f7 */
L_1102F4ED:
    ecx = MEM32(ebp + 0xC); /* 0x1102F4ED: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + esi * 4) = ecx; /* 0x1102F4F0: mov dword ptr [eax + esi*4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F4F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102F4FA; /* 0x1102F4F5: jmp 0x1102f4fa */
L_1102F4F7:
    PUSH32(esp, 4); /* 0x1102F4F7: push 4 */
    eax = POP32_VAL(esp); /* 0x1102F4F9: pop eax */
L_1102F4FA:
    esi = POP32_VAL(esp); /* 0x1102F4FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F4FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F4FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F4FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F4FDu);

L_1102F4FD:
    PUSH32(esp, ebp); /* 0x1102F4FD: push ebp */
    ebp = esp; /* 0x1102F4FE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102F500: push esi */
    PUSH32(esp, edi); /* 0x1102F501: push edi */
    PUSH32(esp, 4); /* 0x1102F502: push 4 */
    esi = POP32_VAL(esp); /* 0x1102F504: pop esi */
    edi = 0x11068838u; /* 0x1102F505: mov edi, 0x11068838 */
    PUSH32(esp, edi); /* 0x1102F50A: push edi */
    RECOMP_CALL(sub_1102F017); /* 0x1102F50B: call 0x1102f017 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F510: pop ecx */
    /* test eax, eax */ /* 0x1102F511: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F519; /* 0x1102F513: je 0x1102f519 */
L_1102F515:
    PUSH32(esp, esi); /* 0x1102F515: push esi */
    eax = POP32_VAL(esp); /* 0x1102F516: pop eax */
    goto L_1102F572; /* 0x1102F517: jmp 0x1102f572 */
L_1102F519:
    eax = MEM32(0x110668F4); /* 0x1102F519: mov eax, dword ptr [0x110668f4] */
    ecx = 0x3E8u; /* 0x1102F51E: mov ecx, 0x3e8 */
    /* cmp eax, ecx */ /* 0x1102F523: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F53D; /* 0x1102F525: jge 0x1102f53d */
L_1102F527:
    /* cmp MEM8(eax * 8 + 0x110668F8), 0 */ /* 0x1102F527: cmp byte ptr [eax*8 + 0x110668f8], 0 */
    _flag_a = (uint32_t)(MEM8(eax * 8 + 0x110668F8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F536; /* 0x1102F52F: je 0x1102f536 */
L_1102F531:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F531: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1102F532: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F527; /* 0x1102F534: jl 0x1102f527 */
L_1102F536:
    MEM32(0x110668F4) = eax; /* 0x1102F536: mov dword ptr [0x110668f4], eax */
    /* cmp eax, ecx */ /* 0x1102F53B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1102F53D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1102F562; /* 0x1102F53D: je 0x1102f562 */
L_1102F53F:
    ecx = MEM32(ebp + 0x8); /* 0x1102F53F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1102F542: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1102F544: inc eax */
    _flag_k = FK_INC;
    MEM32(0x110668F4) = eax; /* 0x1102F545: mov dword ptr [0x110668f4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F54A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102F54C: mov eax, dword ptr [ecx] */
    MEM8(eax * 8 + 0x110668F8) = (uint8_t)(1); /* 0x1102F54E: mov byte ptr [eax*8 + 0x110668f8], 1 */
    ecx = MEM32(ecx); /* 0x1102F556: mov ecx, dword ptr [ecx] */
    eax = MEM32(ebp + 0xC); /* 0x1102F558: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx * 8 + 0x110668FC) = eax; /* 0x1102F55B: mov dword ptr [ecx*8 + 0x110668fc], eax */
L_1102F562:
    PUSH32(esp, edi); /* 0x1102F562: push edi */
    RECOMP_CALL(sub_1102F092); /* 0x1102F563: call 0x1102f092 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F568: pop ecx */
    /* test eax, eax */ /* 0x1102F569: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F570; /* 0x1102F56B: je 0x1102f570 */
L_1102F56D:
    PUSH32(esp, 4); /* 0x1102F56D: push 4 */
    esi = POP32_VAL(esp); /* 0x1102F56F: pop esi */
L_1102F570:
    eax = esi; /* 0x1102F570: mov eax, esi */
L_1102F572:
    edi = POP32_VAL(esp); /* 0x1102F572: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F573: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F574: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F575: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F576u);

L_1102F576:
    RECOMP_CALL(sub_1102F45A); /* 0x1102F576: call 0x1102f45a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11068838u); /* 0x1102F57B: push 0x11068838 */
    RECOMP_CALL(sub_1102EFA6); /* 0x1102F580: call 0x1102efa6 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x110668EC), 0 */ /* 0x1102F585: cmp dword ptr [0x110668ec], 0 */
    _flag_a = (uint32_t)(MEM32(0x110668EC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1102F58C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F59C; /* 0x1102F58D: je 0x1102f59c */
L_1102F58F:
    PUSH32(esp, MEM32(0x1106883C)); /* 0x1102F58F: push dword ptr [0x1106883c] */
    RECOMP_ICALL(MEM32(0x110691EC)); /* 0x1102F595: call dword ptr [0x110691ec] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F59B: pop ecx */
L_1102F59C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F59C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F59D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F59Du);

L_1102F59D:
    PUSH32(esp, ebp); /* 0x1102F59D: push ebp */
    ebp = esp; /* 0x1102F59E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102F5A0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102F5A3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F5A4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(0x110668F0) */ /* 0x1102F5A6: cmp eax, dword ptr [0x110668f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110668F0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102F5FA; /* 0x1102F5AC: jl 0x1102f5fa */
L_1102F5AE:
    PUSH32(esp, edi); /* 0x1102F5AE: push edi */
    edi = 0x3E8u; /* 0x1102F5AF: mov edi, 0x3e8 */
    /* cmp eax, edi */ /* 0x1102F5B4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1102F5F9; /* 0x1102F5B6: jge 0x1102f5f9 */
L_1102F5B8:
    PUSH32(esp, MEM32(0x1106883C)); /* 0x1102F5B8: push dword ptr [0x1106883c] */
    RECOMP_ICALL(MEM32(0x110691F0)); /* 0x1102F5BE: call dword ptr [0x110691f0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F5C4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F5C6: pop ecx */
    /* test esi, esi */ /* 0x1102F5C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F5F9; /* 0x1102F5C9: jne 0x1102f5f9 */
L_1102F5CB:
    PUSH32(esp, 4); /* 0x1102F5CB: push 4 */
    PUSH32(esp, edi); /* 0x1102F5CD: push edi */
    RECOMP_ICALL(MEM32(0x110691F8)); /* 0x1102F5CE: call dword ptr [0x110691f8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F5D4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1102F5D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F5D7: pop ecx */
    /* test esi, esi */ /* 0x1102F5D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102F5EF; /* 0x1102F5DA: je 0x1102f5ef */
L_1102F5DC:
    PUSH32(esp, esi); /* 0x1102F5DC: push esi */
    PUSH32(esp, MEM32(0x1106883C)); /* 0x1102F5DD: push dword ptr [0x1106883c] */
    RECOMP_ICALL(MEM32(0x110691F4)); /* 0x1102F5E3: call dword ptr [0x110691f4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F5E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F5EA: pop ecx */
    /* test eax, eax */ /* 0x1102F5EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F5F9; /* 0x1102F5ED: jne 0x1102f5f9 */
L_1102F5EF:
    PUSH32(esp, esi); /* 0x1102F5EF: push esi */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1102F5F0: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F5F6: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102F5F7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102F5F9:
    edi = POP32_VAL(esp); /* 0x1102F5F9: pop edi */
L_1102F5FA:
    eax = esi; /* 0x1102F5FA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102F5FC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102F5FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F5FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F5FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F5FFu);

L_1102F5FF:
    PUSH32(esp, 0); /* 0x1102F5FF: push 0 */
    RECOMP_ICALL(MEM32(0x110691E8)); /* 0x1102F601: call dword ptr [0x110691e8] */
    RECOMP_FLAGS_IN();
    MEM32(0x1106883C) = eax; /* 0x1102F607: mov dword ptr [0x1106883c], eax */
    ecx = POP32_VAL(esp); /* 0x1102F60C: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102F60D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102F63E; /* 0x1102F610: je 0x1102f63e */
L_1102F612:
    PUSH32(esp, 1); /* 0x1102F612: push 1 */
    PUSH32(esp, 0x11068838u); /* 0x1102F614: push 0x11068838 */
    RECOMP_CALL(sub_1102EFD9); /* 0x1102F619: call 0x1102efd9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F61E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1102F61F: pop ecx */
    /* test eax, eax */ /* 0x1102F620: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F63E; /* 0x1102F622: jne 0x1102f63e */
L_1102F624:
    PUSH32(esp, 0x1102F576u); /* 0x1102F624: push 0x1102f576 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1102F629: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102F62E: pop ecx */
    /* test eax, eax */ /* 0x1102F62F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102F63E; /* 0x1102F631: jne 0x1102f63e */
L_1102F633:
    MEM32(0x110668EC) = 1; /* 0x1102F633: mov dword ptr [0x110668ec], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F63D: ret  */
L_1102F63E:
    { _itail_tgt = (uint32_t)(MEM32(0x11069320)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102F644(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F644u);

L_1102F644:
    PUSH32(esp, ebp); /* 0x1102F644: push ebp */
    ebp = esp; /* 0x1102F645: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102F647: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102F64A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102F64F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102F651: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1102F654: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102F655: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x14); /* 0x1102F658: lea eax, [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1102F65B: push 1 */
    PUSH32(esp, eax); /* 0x1102F65D: push eax */
    RECOMP_CALL(sub_1102F787); /* 0x1102F65E: call 0x1102f787 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1102F663: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102F666: push eax */
    PUSH32(esp, esi); /* 0x1102F667: push esi */
    RECOMP_CALL(sub_1102F67F); /* 0x1102F668: call 0x1102f67f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102F66D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102F670: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102F673: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1102F675: pop esi */
    RECOMP_CALL(sub_1103B32A); /* 0x1102F676: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102F67B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F67D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F67E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F67F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F67Fu);

L_1102F67F:
    PUSH32(esp, ebp); /* 0x1102F67F: push ebp */
    ebp = esp; /* 0x1102F680: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1102F682: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1102F685: push esi */
    PUSH32(esp, edi); /* 0x1102F686: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102F687: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x20); /* 0x1102F68A: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102F68D: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1102F690: push eax */
    RECOMP_CALL(sub_1102F6EA); /* 0x1102F691: call 0x1102f6ea */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1102F696: mov esi, eax */
    edi = ebp + (-0x10); /* 0x1102F698: lea edi, [ebp - 0x10] */
    ecx = 0x000F4240u; /* 0x1102F69B: mov ecx, 0xf4240 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102F6A0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6A3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1102F6A6: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x8)); /* 0x1102F6A7: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000F423Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x000F423Fu; /* 0x1102F6AA: add eax, 0xf423f */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1102F6AF: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1102F6B0: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x10)) * (int32_t)0x3E8u); /* 0x1102F6B2: imul ecx, dword ptr [ebp - 0x10], 0x3e8 */
    edi = POP32_VAL(esp); /* 0x1102F6B9: pop edi */
    esi = POP32_VAL(esp); /* 0x1102F6BA: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1102F6BB: add eax, ecx */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1102F6BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F6BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F6C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102F6C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102F6C1u);

L_1102F6C1:
    PUSH32(esp, ebp); /* 0x1102F6C1: push ebp */
    ebp = esp; /* 0x1102F6C2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102F6C4: push ecx */
    PUSH32(esp, ecx); /* 0x1102F6C5: push ecx */
    eax = ebp + (-0x8); /* 0x1102F6C6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1102F6C9: push eax */
    RECOMP_ICALL(MEM32(0x11069014)); /* 0x1102F6CA: call dword ptr [0x11069014] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1102F6D0: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102F6D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x1102F6D5: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F6D8: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD53E8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xD53E8000u; /* 0x1102F6DB: sub eax, 0xd53e8000 */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0x019DB1DEu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102F6E0: sbb edx, 0x19db1de */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = ebp; /* 0x1102F6E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102F6E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102F6E9: ret  */
    RECOMP_REGS_OUT();
}
