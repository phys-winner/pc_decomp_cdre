#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1203307F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203307Fu);

L_1203307F:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203308A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203308Au);

L_1203308A:
    edi = edi; /* 0x1203308A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203308C: push ebp */
    ebp = esp; /* 0x1203308D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203308F: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033091: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033096: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120330A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120330A2u);

L_120330A2:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120330AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120330ADu);

L_120330AD:
    edi = edi; /* 0x120330AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120330AF: push ebp */
    ebp = esp; /* 0x120330B0: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120330B2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x120330B5: mov ecx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x120330B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120330CC; /* 0x120330BA: je 0x120330cc */
L_120330BC:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120330BC: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120330BE: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120330C0: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120330C3: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120330C6: fld dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120330C9: fstp dword ptr [eax + 8] */
L_120330CC:
    PUSH32(esp, esi); /* 0x120330CC: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120330CD: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120330D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120330E6; /* 0x120330D2: je 0x120330e6 */
L_120330D4:
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120330D4: fld dword ptr [ecx + 0xc] */
    RECOMP_CALL(sub_121BF4D0); /* 0x120330D7: call 0x121bf4d0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120330DC: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120330DF: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[0]; /* 0x120330E2: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120330E4: fstp dword ptr [esi] */
L_120330E6:
    esi = POP32_VAL(esp); /* 0x120330E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x120330E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120330E8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120330F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120330F0u);

L_120330F0:
    edi = edi; /* 0x120330F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120330F2: push ebp */
    ebp = esp; /* 0x120330F3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120330F5: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120330F7: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120330FC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033108u);

L_12033108:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033113(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033113u);

L_12033113:
    edi = edi; /* 0x12033113: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033115: push ebp */
    ebp = esp; /* 0x12033116: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12033118: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1203311B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12033120: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12033122: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12033125: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12033128: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12033129: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1203312C: fld dword ptr [ebx] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1203312E: mov dword ptr [ebp - 0x28], eax */
    _st[0] += (double)*(float*)ADDR(ebx + 0x14); /* 0x12033131: fadd dword ptr [ebx + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x28); /* 0x12033134: fadd dword ptr [ebx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12033137: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1203313A: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203313C: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203313F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033141: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12033143: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12033145: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120331AA; /* 0x12033148: jne 0x120331aa */
L_1203314A:
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x1203314A: fadd qword ptr [0x120014e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12033150: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12033153: fld dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_121BF44C); /* 0x12033156: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203315B: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203315E: fld dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x28)); /* 0x12033161: mov edx, dword ptr [ebp - 0x28] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12033164: fmul qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203316A: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203316D: fld dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0xC) = _v; } /* 0x12033170: fst dword ptr [edx + 0xc] */
    _st[0] = *(double*)ADDR(0x12001950) / _st[0]; /* 0x12033173: fdivr qword ptr [0x12001950] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12033179: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebx + 0x18)); /* 0x1203317C: fld dword ptr [ebx + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x24); /* 0x1203317F: fsub dword ptr [ebx + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12033182: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x12033185: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033187: fmulp st(2) */
    fp_xch(1); /* 0x12033189: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1203318B: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebx + 0x20)); /* 0x1203318D: fld dword ptr [ebx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x12033190: fsub dword ptr [ebx + 8] */
    fp_push(_st[1]); /* 0x12033193: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033195: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x12033197: fstp dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1203319A: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x10); /* 0x1203319D: fsub dword ptr [ebx + 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120331A0: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x120331A2: fstp dword ptr [edx + 8] */
    goto L_1203328D; /* 0x120331A5: jmp 0x1203328d */
L_120331AA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120331AA: fstp st(0) */
    PUSH32(esp, esi); /* 0x120331AC: push esi */
    fp_push(*(float*)&MEM32(ebx)); /* 0x120331AD: fld dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x120331AF: push edi */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x14); /* 0x120331B0: fsub dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120331B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x120331B5: push 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120331B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] -= (double)*(float*)ADDR(ebx + 0x28); /* 0x120331B9: fsub dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120331BC: inc edx */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x120331BD: pop esi */
    MEM32(ebp + (-0x1C)) = edx; /* 0x120331BE: mov dword ptr [ebp - 0x1c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120331C1: fstp dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x120331C4: mov dword ptr [ebp - 0x18], esi */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x120331C7: fld dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x120331CA: mov dword ptr [ebp - 0x20], ecx */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x120331CD: fsub dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120331CF: mov dword ptr [ebp - 0x14], ecx */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x28); /* 0x120331D2: fsub dword ptr [ebx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120331D5: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x28)); /* 0x120331D8: fld dword ptr [ebx + 0x28] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x120331DB: fld dword ptr [ebx] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x14); /* 0x120331DD: fadd dword ptr [ebx + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120331E0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120331E2: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120331E5: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120331E8: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120331EB: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120331ED: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120331EF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120331F9; /* 0x120331F2: jnp 0x120331f9 */
L_120331F4:
    ecx = edx; /* 0x120331F4: mov ecx, edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x120331F6: mov dword ptr [ebp - 0x20], edx */
L_120331F9:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x10))); /* 0x120331F9: fld dword ptr [ebp + ecx*4 - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120331FD: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12033200: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033202: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12033204: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1203320E; /* 0x12033207: jnp 0x1203320e */
L_12033209:
    ecx = esi; /* 0x12033209: mov ecx, esi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1203320B: mov dword ptr [ebp - 0x20], ecx */
L_1203320E:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x10))); /* 0x1203320E: fld dword ptr [ebp + ecx*4 - 0x10] */
    edi = MEM32(ebp + ecx * 4 + (-0x1C)); /* 0x12033212: mov edi, dword ptr [ebp + ecx*4 - 0x1c] */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x12033216: fadd qword ptr [0x120014e0] */
    esi = MEM32(ebp + edi * 4 + (-0x1C)); /* 0x1203321C: mov esi, dword ptr [ebp + edi*4 - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12033220: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12033223: fld dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_121BF44C); /* 0x12033226: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1203322B: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1203322E: fld dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x20)); /* 0x12033231: mov ecx, dword ptr [ebp - 0x20] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12033234: fmul qword ptr [0x120014c0] */
    edx = MEM32(ebp + (-0x28)); /* 0x1203323A: mov edx, dword ptr [ebp - 0x28] */
    eax = ecx + edi * 4; /* 0x1203323D: lea eax, [ecx + edi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12033240: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12033243: fld dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + ecx * 4) = _v; } /* 0x12033246: fst dword ptr [edx + ecx*4] */
    _st[0] = *(double*)ADDR(0x12001950) / _st[0]; /* 0x12033249: fdivr qword ptr [0x12001950] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1203324F: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x12033252: fld dword ptr [ebx + eax*4] */
    eax = edi + ecx * 4; /* 0x12033255: lea eax, [edi + ecx*4] */
    _st[0] += (double)*(float*)ADDR(ebx + eax * 4); /* 0x12033258: fadd dword ptr [ebx + eax*4] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1203325B: fld dword ptr [ebp - 0x24] */
    eax = ecx + esi * 4; /* 0x1203325E: lea eax, [ecx + esi*4] */
    fp_push(_st[0]); /* 0x12033261: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033263: fmulp st(2) */
    fp_xch(1); /* 0x12033265: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + edi * 4) = _v; } /* 0x12033267: fstp dword ptr [edx + edi*4] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x1203326A: fld dword ptr [ebx + eax*4] */
    eax = esi + ecx * 4; /* 0x1203326D: lea eax, [esi + ecx*4] */
    _st[0] += (double)*(float*)ADDR(ebx + eax * 4); /* 0x12033270: fadd dword ptr [ebx + eax*4] */
    eax = esi + edi * 4; /* 0x12033273: lea eax, [esi + edi*4] */
    fp_push(_st[1]); /* 0x12033276: fld st(1) */
    ecx = edi + esi * 4; /* 0x12033278: lea ecx, [edi + esi*4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203327B: fmulp st(1) */
    edi = POP32_VAL(esp); /* 0x1203327D: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + esi * 4) = _v; } /* 0x1203327E: fstp dword ptr [edx + esi*4] */
    esi = POP32_VAL(esp); /* 0x12033281: pop esi */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x12033282: fld dword ptr [ebx + eax*4] */
    _st[0] -= (double)*(float*)ADDR(ebx + ecx * 4); /* 0x12033285: fsub dword ptr [ebx + ecx*4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033288: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xC) = _v; } /* 0x1203328A: fstp dword ptr [edx + 0xc] */
L_1203328D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1203328D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12033290: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x12033292: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x12033294: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12033295: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203329A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1203329B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120332A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120332A3u);

L_120332A3:
    edi = edi; /* 0x120332A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120332A5: push ebp */
    ebp = esp; /* 0x120332A6: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120332A8: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120332AA: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120332AF: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x120332B2: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120332B3: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120332B6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120332B9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0E0)); /* 0x120332BC: call dword ptr [0x121ca0e0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120332C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120332C3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120332CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120332CBu);

L_120332CB:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120332D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120332D6u);

L_120332D6:
    edi = edi; /* 0x120332D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120332D8: push ebp */
    ebp = esp; /* 0x120332D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x120332DB: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120332DE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120332E3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120332E5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120332E8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120332EB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120332EC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120332EF: push eax */
    eax = ebp + (-0x10); /* 0x120332F0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120332F3: push eax */
    RECOMP_CALL(sub_120301D9); /* 0x120332F4: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120332F9: fld dword ptr [ebp + 0x10] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x120332FC: fmul qword ptr [0x120014c0] */
    eax = esi + 0xC; /* 0x12033302: lea eax, [esi + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12033305: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x14); /* 0x12033308: lea eax, [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203330B: fstp dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1203330E: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x12033311: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x18)); /* 0x12033314: mov edx, dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12033317: fld dword ptr [ebp - 0x20] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1203331A: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1203331C: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203331E: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12033320: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12033323: fld dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12033326: mov ecx, dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12033329: fld st(0) */
    eax = esi; /* 0x1203332B: mov eax, esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203332D: fmulp st(2) */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1203332F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_xch(1); /* 0x12033331: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12033333: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12033335: fld dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x12033338: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203333A: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1203333C: fstp dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1203333F: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x12033342: fstp dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x12033345: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12033346: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203334B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1203334C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12033354(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033354u);

L_12033354:
    edi = edi; /* 0x12033354: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033356: push ebp */
    ebp = esp; /* 0x12033357: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033359: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203335B: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12033360: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12033363: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x12033366: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1203336A: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1203336D: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033371: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033374: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12033377: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0D0)); /* 0x1203337A: call dword ptr [0x121ca0d0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033380: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12033381: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12033389(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033389u);

L_12033389:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033394u);

L_12033394:
    edi = edi; /* 0x12033394: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033396: push ebp */
    ebp = esp; /* 0x12033397: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12033399: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1203339C: fld dword ptr [ebp + 0x14] */
    eax = ebp + (-0x4); /* 0x1203339F: lea eax, [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x120333A2: fmul qword ptr [0x120014c0] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120333A8: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x14); /* 0x120333AB: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x120333AE: mov dword ptr [ebp - 0x20], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120333B1: fstp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x20)); /* 0x120333B4: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x120333B7: mov edx, dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120333BA: fld dword ptr [ebp - 0x18] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x120333BD: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120333BF: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120333C1: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120333C3: fld dword ptr [ebp + 0x10] */
    eax = ebp + (-0x8); /* 0x120333C6: lea eax, [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x120333C9: fmul qword ptr [0x120014c0] */
    MEM32(ebp + (-0x20)) = eax; /* 0x120333CF: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x10); /* 0x120333D2: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120333D5: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120333D8: fstp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x120333DB: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x20)); /* 0x120333DE: mov edx, dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120333E1: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x120333E4: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120333E6: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120333E8: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120333EA: fld dword ptr [ebp + 0xc] */
    eax = ebp + (-0xC); /* 0x120333ED: lea eax, [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x120333F0: fmul qword ptr [0x120014c0] */
    MEM32(ebp + (-0x20)) = eax; /* 0x120333F6: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + 0x14; /* 0x120333F9: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120333FC: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120333FF: fstp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x12033402: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x20)); /* 0x12033405: mov edx, dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12033408: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1203340B: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1203340D: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203340F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12033411: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x12033414: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12033417: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1203341A: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203341C: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1203341E: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12033421: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12033423: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12033426: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033428: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203342A: fld dword ptr [ebp - 4] */
    _st[0] *= _st[2]; /* 0x1203342D: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1203342F: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12033432: fld st(0) */
    _st[0] *= _st[7]; /* 0x12033434: fmul st(7) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033436: faddp st(2) */
    fp_xch(1); /* 0x12033438: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203343A: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203343C: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1203343F: fmulp st(6) */
    fp_push(_st[0]); /* 0x12033441: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12033443: fmulp st(3) */
    fp_xch(5); /* 0x12033445: fxch st(5) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12033447: fsubrp st(2) */
    fp_xch(1); /* 0x12033449: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203344B: fstp dword ptr [eax + 4] */
    fp_xch(1); /* 0x1203344E: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033450: fmulp st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x12033452: fmul dword ptr [ebp + 0x14] */
    fp_push(_st[2]); /* 0x12033455: fld st(2) */
    _st[0] *= _st[2]; /* 0x12033457: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033459: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1203345C: fld st(0) */
    _st[0] *= _st[3]; /* 0x1203345E: fmul st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12033460: fsubp st(2) */
    fp_xch(1); /* 0x12033462: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033464: fstp dword ptr [eax + 8] */
    fp_xch(3); /* 0x12033467: fxch st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033469: fmulp st(1) */
    fp_xch(2); /* 0x1203346B: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203346D: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203346F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12033471: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033474: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12033475: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1203347D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203347Du);

L_1203347D:
    edi = edi; /* 0x1203347D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203347F: push ebp */
    ebp = esp; /* 0x12033480: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033482: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033484: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033489: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033495(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033495u);

L_12033495:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120334A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120334A0u);

L_120334A0:
    edi = edi; /* 0x120334A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120334A2: push ebp */
    ebp = esp; /* 0x120334A3: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x120334A5: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x120334A8: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x120334AB: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x120334AE: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120334B1: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x120334B3: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x120334B6: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x120334B9: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120334BC: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x120334BF: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x120334C2: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x120334C5: fxch st(3) */
    fp_push(*(float*)&MEM32(eax)); /* 0x120334C7: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x120334C9: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120334CC: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120334CE: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120334D1: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x120334D3: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120334D6: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120334D8: fmul dword ptr [edx] */
    fp_xch(3); /* 0x120334DA: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120334DC: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x120334DE: fsubp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120334E0: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x120334E2: fsubp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120334E4: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x120334E7: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120334EA: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120334ED: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120334EF: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x120334F2: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120334F5: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120334F8: fmul dword ptr [edx + 4] */
    fp_xch(3); /* 0x120334FB: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120334FD: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120334FF: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x12033501: fsubp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x12033503: fsubp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12033505: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12033508: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1203350B: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1203350E: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12033511: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x12033514: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12033516: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x12033519: fmul dword ptr [edx + 8] */
    fp_xch(3); /* 0x1203351C: fxch st(3) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x1203351E: fsubp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12033520: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12033522: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x12033524: fsubp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x12033526: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12033528: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1203352B: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1203352E: fstp dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12033531: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x12033534: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12033535: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203353D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203353Du);

L_1203353D:
    edi = edi; /* 0x1203353D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203353F: push ebp */
    ebp = esp; /* 0x12033540: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033542: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033544: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033549: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033555u);

L_12033555:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033560u);

L_12033560:
    edi = edi; /* 0x12033560: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033562: push ebp */
    ebp = esp; /* 0x12033563: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12033565: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12033568: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12033569: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203356C: fld dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1203356F: push edi */
    fp_push(*(float*)&MEM32(esi)); /* 0x12033570: fld dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x12033572: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12033573: fld dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x12033576: push ecx */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x12033577: fld dword ptr [esi + 0xc] */
    fp_xch(2); /* 0x1203357A: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1203357C: fmul st(0), st(0) */
    fp_xch(3); /* 0x1203357E: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12033580: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12033582: faddp st(3) */
    _st[0] *= _st[0]; /* 0x12033584: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033586: faddp st(2) */
    _st[0] *= _st[0]; /* 0x12033588: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203358A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203358C: fstp dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x1203358F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12033591: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033595: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033598: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x1203359B: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120335A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120335AD; /* 0x120335A2: je 0x120335ad */
L_120335A4:
    eax = MEM32(ebp + 0x8); /* 0x120335A4: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x120335A7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12033619; /* 0x120335A9: je 0x12033619 */
L_120335AB:
    goto L_120335FF; /* 0x120335AB: jmp 0x120335ff */
L_120335AD:
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x120335AD: fld dword ptr [0x12005428] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120335B3: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120335B6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120335B8: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120335BA: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120335BC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12033607; /* 0x120335BF: jne 0x12033607 */
L_120335C1:
    RECOMP_CALL(sub_121BF44C); /* 0x120335C1: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120335C6: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120335C9: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120335CC: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x120335CF: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120335D1: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120335D3: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120335D6: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120335D8: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x120335DB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120335DD: fmulp st(2) */
    fp_xch(1); /* 0x120335DF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120335E1: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x120335E4: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x120335E6: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120335E9: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120335EC: fld dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x120335EF: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120335F1: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120335F3: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x120335F6: fmul dword ptr [esi + 0xc] */
    esi = ebp + (-0x10); /* 0x120335F9: lea esi, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120335FC: fstp dword ptr [ebp - 4] */
L_120335FF:
    edi = eax; /* 0x120335FF: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033601: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033602: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033603: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033604: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_12033619; /* 0x12033605: jmp 0x12033619 */
L_12033607:
    eax = MEM32(ebp + 0x8); /* 0x12033607: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1203360A: fstp st(0) */
    fp_push(0.0); /* 0x1203360C: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x1203360E: fst dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033610: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033613: fst dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12033616: fstp dword ptr [eax + 0xc] */
L_12033619:
    edi = POP32_VAL(esp); /* 0x12033619: pop edi */
    esi = POP32_VAL(esp); /* 0x1203361A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203361B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1203361C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12033624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033624u);

L_12033624:
    edi = edi; /* 0x12033624: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033626: push ebp */
    ebp = esp; /* 0x12033627: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033629: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203362B: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033630: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA11C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203363C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203363Cu);

L_1203363C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA11C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033647(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033647u);

L_12033647:
    edi = edi; /* 0x12033647: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033649: push ebp */
    ebp = esp; /* 0x1203364A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1203364C: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1203364F: fld dword ptr [edx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12033652: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12033655: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12033657: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1203365A: fld dword ptr [edx + 0xc] */
    fp_xch(2); /* 0x1203365D: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1203365F: fmul st(0), st(0) */
    fp_xch(3); /* 0x12033661: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12033663: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12033665: faddp st(3) */
    _st[0] *= _st[0]; /* 0x12033667: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033669: faddp st(2) */
    _st[0] *= _st[0]; /* 0x1203366B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203366D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203366F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x1200542C)); /* 0x12033672: fld dword ptr [0x1200542c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033678: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203367B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203367D: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1203367F: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12033681: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120336E6; /* 0x12033684: jne 0x120336e6 */
L_12033686:
    fp_push(*(float*)&MEM32(edx)); /* 0x12033686: fld dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x12033688: push ecx */
    _st[0] = -_st[0]; /* 0x12033689: fchs  */
    PUSH32(esp, ecx); /* 0x1203368B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1203368C: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1203368E: fld dword ptr [edx + 4] */
    _st[0] = -_st[0]; /* 0x12033691: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12033693: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12033696: fld dword ptr [edx + 8] */
    _st[0] = -_st[0]; /* 0x12033699: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1203369B: fstp dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1203369E: fld dword ptr [edx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x120336A1: fstp dword ptr [ecx + 0xc] */
    fp_push(1.0); /* 0x120336A4: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120336A6: fstp dword ptr [esp + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120336AA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x120336AD: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120336B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120336F5; /* 0x120336B4: jne 0x120336f5 */
L_120336B6:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120336B6: fld dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x120336B9: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120336BB: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120336BD: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120336C0: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120336C2: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120336C5: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120336C7: fmulp st(2) */
    fp_xch(1); /* 0x120336C9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120336CB: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120336CD: fld dword ptr [ecx + 4] */
    fp_push(_st[1]); /* 0x120336D0: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120336D2: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x120336D4: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120336D7: fld dword ptr [ecx + 8] */
    fp_push(_st[1]); /* 0x120336DA: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120336DC: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x120336DE: fstp dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x120336E1: fmul dword ptr [ecx + 0xc] */
    goto L_120336F2; /* 0x120336E4: jmp 0x120336f2 */
L_120336E6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120336E6: fstp st(0) */
    fp_push(0.0); /* 0x120336E8: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x120336EA: fst dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x4) = _v; } /* 0x120336EC: fst dword ptr [ecx + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x8) = _v; } /* 0x120336EF: fst dword ptr [ecx + 8] */
L_120336F2:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x120336F2: fstp dword ptr [ecx + 0xc] */
L_120336F5:
    eax = ecx; /* 0x120336F5: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x120336F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120336F8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12033700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033700u);

L_12033700:
    edi = edi; /* 0x12033700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033702: push ebp */
    ebp = esp; /* 0x12033703: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033705: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033707: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203370C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA148)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033718u);

L_12033718:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA148)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033723u);

L_12033723:
    edi = edi; /* 0x12033723: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033725: push ebp */
    ebp = esp; /* 0x12033726: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12033728: push ecx */
    fp_push(1.0); /* 0x12033729: fld1  */
    PUSH32(esp, esi); /* 0x1203372B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1203372C: mov esi, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + 0xC)); /* 0x1203372F: fcomp dword ptr [esi + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033732: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12033734: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203379A; /* 0x12033737: jne 0x1203379a */
L_12033739:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x12033739: fld dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF4D0); /* 0x1203373C: call 0x121bf4d0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033741: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033744: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033747: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203374A: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF4E8); /* 0x1203374D: call 0x121bf4e8 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033752: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033755: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x12033758: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033759: fstp dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1203375C: push ecx */
    fp_push(0.0); /* 0x1203375D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1203375F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033763: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033766: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x12033769: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1203376E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x12033770: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203379D; /* 0x12033773: jne 0x1203379d */
L_12033775:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033775: fld dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x12033778: fdiv dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203377B: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1203377E: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033780: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12033783: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033785: fmulp st(2) */
    fp_xch(1); /* 0x12033787: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12033789: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203378B: fld dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x1203378E: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033790: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033792: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12033795: fmul dword ptr [esi + 8] */
    goto L_120337AA; /* 0x12033798: jmp 0x120337aa */
L_1203379A:
    eax = MEM32(ebp + 0x8); /* 0x1203379A: mov eax, dword ptr [ebp + 8] */
L_1203379D:
    fp_push(*(float*)&MEM32(esi)); /* 0x1203379D: fld dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203379F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120337A1: fld dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120337A4: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120337A7: fld dword ptr [esi + 8] */
L_120337AA:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120337AA: fstp dword ptr [eax + 8] */
    esi = POP32_VAL(esp); /* 0x120337AD: pop esi */
    fp_push(0.0); /* 0x120337AE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x120337B0: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120337B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120337B4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120337BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120337BCu);

L_120337BC:
    edi = edi; /* 0x120337BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120337BE: push ebp */
    ebp = esp; /* 0x120337BF: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120337C1: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120337C3: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120337C8: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA14C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120337D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120337D4u);

L_120337D4:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA14C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120337DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120337DFu);

L_120337DF:
    edi = edi; /* 0x120337DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120337E1: push ebp */
    ebp = esp; /* 0x120337E2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120337E4: push ecx */
    PUSH32(esp, ecx); /* 0x120337E5: push ecx */
    PUSH32(esp, esi); /* 0x120337E6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120337E7: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120337EA: fld dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120337ED: fld dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120337F0: fld dword ptr [esi] */
    _st[0] *= _st[0]; /* 0x120337F2: fmul st(0), st(0) */
    fp_xch(2); /* 0x120337F4: fxch st(2) */
    _st[0] *= _st[0]; /* 0x120337F6: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120337F8: faddp st(2) */
    _st[0] *= _st[0]; /* 0x120337FA: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120337FC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120337FE: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033801: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF44C); /* 0x12033804: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033809: fstp dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1203380C: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203380F: fld dword ptr [ebp + 0xc] */
    eax = ecx + 0xC; /* 0x12033812: lea eax, [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033815: fstp dword ptr [ebp - 4] */
    MEM32(ebp + 0x8) = eax; /* 0x12033818: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0xC; /* 0x1203381B: lea eax, [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1203381E: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x12033821: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x8); /* 0x12033824: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033827: fld dword ptr [ebp - 4] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1203382A: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1203382C: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203382E: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12033830: fldz  */
    PUSH32(esp, ecx); /* 0x12033832: push ecx */
    PUSH32(esp, ecx); /* 0x12033833: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12033834: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033838: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203383B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x1203383E: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12033843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203385A; /* 0x12033845: je 0x1203385a */
L_12033847:
    /* cmp ecx, esi */ /* 0x12033847: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1203387E; /* 0x12033849: je 0x1203387e */
L_1203384B:
    fp_push(*(float*)&MEM32(esi)); /* 0x1203384B: fld dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1203384D: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203384F: fld dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12033852: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12033855: fld dword ptr [esi + 8] */
    goto L_1203387B; /* 0x12033858: jmp 0x1203387b */
L_1203385A:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203385A: fld dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1203385D: fdiv dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033860: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12033863: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033865: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12033868: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203386A: fmulp st(2) */
    fp_xch(1); /* 0x1203386C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1203386E: fstp dword ptr [ecx] */
    fp_push(_st[0]); /* 0x12033870: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12033872: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12033875: fstp dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12033878: fmul dword ptr [esi + 8] */
L_1203387B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1203387B: fstp dword ptr [ecx + 8] */
L_1203387E:
    eax = ecx; /* 0x1203387E: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x12033880: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033881: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12033882: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1203388A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203388Au);

L_1203388A:
    edi = edi; /* 0x1203388A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203388C: push ebp */
    ebp = esp; /* 0x1203388D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203388F: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033891: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12033896: fld dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x12033899: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203389A: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1203389D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120338A0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120338A3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0F8)); /* 0x120338A6: call dword ptr [0x121ca0f8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120338AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120338AD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120338B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120338B5u);

L_120338B5:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120338C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120338C0u);

L_120338C0:
    edi = edi; /* 0x120338C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120338C2: push ebp */
    ebp = esp; /* 0x120338C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120338C5: push ecx */
    PUSH32(esp, ecx); /* 0x120338C6: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120338C7: fld dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120338CA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120338CB: mov esi, dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x120338CE: fld st(0) */
    fp_push(1.0); /* 0x120338D0: fld1  */
    PUSH32(esp, edi); /* 0x120338D2: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120338D3: mov edi, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x120338D6: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120338D8: fsubrp st(2) */
    fp_xch(1); /* 0x120338DA: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120338DC: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120338DF: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x120338E1: fmul dword ptr [edi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120338E3: fld dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x120338E6: fmul dword ptr [edi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120338E9: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120338EB: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x120338EE: fmul dword ptr [edi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120338F1: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x120338F3: fld dword ptr [esi + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edi + 0xC); /* 0x120338F6: fmul dword ptr [edi + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120338F9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120338FB: fstp dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x120338FE: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033900: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12033903: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033905: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12033907: fstp st(1) */
    /* test HI8(eax), 1 */ /* 0x12033909: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12033912; /* 0x1203390C: jne 0x12033912 */
L_1203390E:
    fp_push(1.0); /* 0x1203390E: fld1  */
    goto L_12033918; /* 0x12033910: jmp 0x12033918 */
L_12033912:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x12033912: fld dword ptr [0x12001748] */
L_12033918:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12033918: fstp dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1203391B: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203391E: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033921: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12033924: fld st(0) */
    fp_push(_st[2]); /* 0x12033926: fld st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12033928: fsubrp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12005430)); /* 0x1203392A: fcomp qword ptr [0x12005430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033930: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12033932: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120339B0; /* 0x12033935: jne 0x120339b0 */
L_12033937:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12033937: fstp st(2) */
    fp_xch(1); /* 0x12033939: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1203393B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203393D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203393F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12033942: fld dword ptr [ebp - 8] */
    RECOMP_CALL(sub_121BF44C); /* 0x12033945: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203394A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1203394D: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12033950: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12033953: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033956: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF4DC); /* 0x12033959: call 0x121bf4dc */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203395E: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033961: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033964: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12033967: fld dword ptr [ebp - 8] */
    fp_push(1.0); /* 0x1203396A: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1203396C: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203396E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033971: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x12033974: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033977: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203397A: fld dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF4E8); /* 0x1203397D: call 0x121bf4e8 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033982: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033985: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12033988: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203398B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203398E: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x12033991: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12033994: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12033997: fld dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121BF4E8); /* 0x1203399A: call 0x121bf4e8 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1203399F: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120339A2: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120339A5: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x120339A8: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120339AB: fld dword ptr [ebp + 0x14] */
    goto L_120339B4; /* 0x120339AE: jmp 0x120339b4 */
L_120339B0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120339B0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120339B2: fstp st(0) */
L_120339B4:
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x120339B4: fmul dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120339B7: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x120339BA: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120339BD: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120339BF: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x120339C2: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120339C4: fmulp st(2) */
    fp_push(*(float*)&MEM32(edi)); /* 0x120339C6: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120339C8: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x120339CB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120339CD: fmulp st(2) */
    fp_xch(3); /* 0x120339CF: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120339D1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120339D3: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120339D5: fld dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x120339D8: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120339DA: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120339DC: fld dword ptr [edi + 4] */
    fp_push(_st[3]); /* 0x120339DF: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120339E1: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120339E3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120339E5: fstp dword ptr [eax + 4] */
    fp_push(_st[0]); /* 0x120339E8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x120339EA: fmul dword ptr [esi + 8] */
    fp_push(_st[2]); /* 0x120339ED: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x120339EF: fmul dword ptr [edi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120339F2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120339F4: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x120339F7: fmul dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x120339FA: fld dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x120339FD: pop edi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120339FE: fmulp st(2) */
    esi = POP32_VAL(esp); /* 0x12033A00: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033A01: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12033A03: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033A06: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12033A07: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12033A0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033A0Fu);

L_12033A0F:
    edi = edi; /* 0x12033A0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033A11: push ebp */
    ebp = esp; /* 0x12033A12: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033A14: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033A16: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033A1B: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12033A1E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033A1F: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12033A22: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12033A25: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12033A28: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12033A2B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12033A2E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA118)); /* 0x12033A31: call dword ptr [0x121ca118] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033A37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12033A38: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12033A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033A40u);

L_12033A40:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA118)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033A4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033A4Bu);

L_12033A4B:
    edi = edi; /* 0x12033A4B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033A4D: push ebp */
    ebp = esp; /* 0x12033A4E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12033A50: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033A53: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12033A56: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033A57: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12033A5A: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x12033A5D: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12033A60: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12033A63: push eax */
    RECOMP_CALL(sub_120338B5); /* 0x12033A64: call 0x120338b5 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033A69: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12033A6C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033A6D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12033A70: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x10); /* 0x12033A73: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12033A76: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x12033A79: push eax */
    RECOMP_CALL(sub_120338B5); /* 0x12033A7A: call 0x120338b5 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033A7F: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12033A82: fld st(0) */
    PUSH32(esp, ecx); /* 0x12033A84: push ecx */
    fp_push(1.0); /* 0x12033A85: fld1  */
    eax = ebp + (-0x10); /* 0x12033A87: lea eax, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12033A8A: fsubrp st(1) */
    fp_xch(1); /* 0x12033A8C: fxch st(1) */
    _st[0] += _st[0]; /* 0x12033A8E: fadd st(0), st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033A90: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12033A92: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033A95: fld dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033A98: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x12033A9B: push eax */
    eax = ebp + (-0x20); /* 0x12033A9C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12033A9F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12033AA0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120338B5); /* 0x12033AA3: call 0x120338b5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12033AA8: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033AAB: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12033AAC: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12033AB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033AB4u);

L_12033AB4:
    edi = edi; /* 0x12033AB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033AB6: push ebp */
    ebp = esp; /* 0x12033AB7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033AB9: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033ABB: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033AC0: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA120)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033ACC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033ACCu);

L_12033ACC:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA120)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033AD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033AD7u);

L_12033AD7:
    edi = edi; /* 0x12033AD7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033AD9: push ebp */
    ebp = esp; /* 0x12033ADA: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033ADC: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033ADE: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033AE3: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12033AE6: push ecx */
    PUSH32(esp, ecx); /* 0x12033AE7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12033AE8: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033AEC: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033AEF: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12033AF2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12033AF5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12033AF8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12033AFB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0FC)); /* 0x12033AFE: call dword ptr [0x121ca0fc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033B04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12033B05: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12033B0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033B0Du);

L_12033B0D:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033B18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033B18u);

L_12033B18:
    edi = edi; /* 0x12033B18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033B1A: push ebp */
    ebp = esp; /* 0x12033B1B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12033B1D: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033B20: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x12033B23: push ebx */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x12033B24: fadd dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x12033B27: push esi */
    PUSH32(esp, ecx); /* 0x12033B28: push ecx */
    PUSH32(esp, ecx); /* 0x12033B29: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x18) = _v; } /* 0x12033B2A: fstp dword ptr [ebp + 0x18] */
    fp_push(0.0); /* 0x12033B2D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12033B2F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033B33: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033B36: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x12033B39: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12033B3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12033B56; /* 0x12033B40: je 0x12033b56 */
L_12033B42:
    ebx = MEM32(ebp + 0x8); /* 0x12033B42: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0xC); /* 0x12033B45: mov esi, dword ptr [ebp + 0xc] */
    /* cmp ebx, esi */ /* 0x12033B48: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12033BA3; /* 0x12033B4A: je 0x12033ba3 */
L_12033B4C:
    PUSH32(esp, edi); /* 0x12033B4C: push edi */
    edi = ebx; /* 0x12033B4D: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033B4F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033B50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033B51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033B52: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12033B53: pop edi */
    goto L_12033BA3; /* 0x12033B54: jmp 0x12033ba3 */
L_12033B56:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033B56: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x12033B59: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033B5A: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12033B5D: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x12033B60: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12033B63: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12033B66: push eax */
    RECOMP_CALL(sub_120338B5); /* 0x12033B67: call 0x120338b5 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033B6C: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x12033B6F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033B70: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12033B73: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x10); /* 0x12033B76: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12033B79: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12033B7C: push eax */
    RECOMP_CALL(sub_120338B5); /* 0x12033B7D: call 0x120338b5 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12033B82: fld dword ptr [ebp + 0x1c] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x18); /* 0x12033B85: fdiv dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x8); /* 0x12033B88: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12033B8B: push ecx */
    eax = ebp + (-0x10); /* 0x12033B8C: lea eax, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033B8F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033B92: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033B95: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x12033B98: push eax */
    eax = ebp + (-0x20); /* 0x12033B99: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12033B9C: push eax */
    PUSH32(esp, ebx); /* 0x12033B9D: push ebx */
    RECOMP_CALL(sub_120338B5); /* 0x12033B9E: call 0x120338b5 */
    RECOMP_FLAGS_IN();
L_12033BA3:
    esi = POP32_VAL(esp); /* 0x12033BA3: pop esi */
    eax = ebx; /* 0x12033BA4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12033BA6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033BA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12033BA8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12033BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033BB0u);

L_12033BB0:
    edi = edi; /* 0x12033BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033BB2: push ebp */
    ebp = esp; /* 0x12033BB3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033BB5: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033BB7: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033BBC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033BC8u);

L_12033BC8:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033BD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033BD3u);

L_12033BD3:
    edi = edi; /* 0x12033BD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033BD5: push ebp */
    ebp = esp; /* 0x12033BD6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12033BD8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12033BD9: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12033BDC: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x12033BDF: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12033BE0: fld dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x12033BE3: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x12033BE4: fld dword ptr [esi] */
    _st[0] *= _st[0]; /* 0x12033BE6: fmul st(0), st(0) */
    fp_xch(2); /* 0x12033BE8: fxch st(2) */
    _st[0] *= _st[0]; /* 0x12033BEA: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033BEC: faddp st(2) */
    _st[0] *= _st[0]; /* 0x12033BEE: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033BF0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033BF2: fstp dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x12033BF5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12033BF7: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033BFB: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12033BFE: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x12033C01: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12033C06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12033C1B; /* 0x12033C08: je 0x12033c1b */
L_12033C0A:
    eax = MEM32(ebp + 0x8); /* 0x12033C0A: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x12033C0D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12033C7A; /* 0x12033C0F: je 0x12033c7a */
L_12033C11:
    PUSH32(esp, edi); /* 0x12033C11: push edi */
    edi = eax; /* 0x12033C12: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033C14: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033C15: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033C16: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033C17: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12033C18: pop edi */
    goto L_12033C7A; /* 0x12033C19: jmp 0x12033c7a */
L_12033C1B:
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x12033C1B: fld dword ptr [0x12005428] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033C21: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12033C24: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033C26: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12033C28: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12033C2A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12033C68; /* 0x12033C2D: jne 0x12033c68 */
L_12033C2F:
    RECOMP_CALL(sub_121BF44C); /* 0x12033C2F: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033C34: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033C37: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12033C3A: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x12033C3D: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12033C3F: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033C41: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12033C44: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033C46: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12033C49: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033C4B: fmulp st(2) */
    fp_xch(1); /* 0x12033C4D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12033C4F: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x12033C51: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12033C53: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033C56: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12033C59: fld dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x12033C5C: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033C5E: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033C60: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x12033C63: fmul dword ptr [esi + 0xc] */
    goto L_12033C77; /* 0x12033C66: jmp 0x12033c77 */
L_12033C68:
    eax = MEM32(ebp + 0x8); /* 0x12033C68: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12033C6B: fstp st(0) */
    fp_push(0.0); /* 0x12033C6D: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x12033C6F: fst dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033C71: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033C74: fst dword ptr [eax + 8] */
L_12033C77:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12033C77: fstp dword ptr [eax + 0xc] */
L_12033C7A:
    esi = POP32_VAL(esp); /* 0x12033C7A: pop esi */
    ebp = POP32_VAL(esp); /* 0x12033C7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12033C7C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12033C84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033C84u);

L_12033C84:
    edi = edi; /* 0x12033C84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033C86: push ebp */
    ebp = esp; /* 0x12033C87: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033C89: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033C8B: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033C90: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033C9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033C9Cu);

L_12033C9C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033CA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033CA7u);

L_12033CA7:
    edi = edi; /* 0x12033CA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033CA9: push ebp */
    ebp = esp; /* 0x12033CAA: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12033CAC: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033CAF: fld dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12033CB1: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12033CB2: mov esi, dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x12033CB5: fmul dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12033CB7: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033CB8: fld dword ptr [ecx + 4] */
    edi = MEM32(ebp + 0x14); /* 0x12033CBB: mov edi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12033CBE: fmul dword ptr [esi + 4] */
    _st[0] += _st[1]; /* 0x12033CC1: fadd st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033CC3: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12033CC6: fmul dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033CC9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033CCB: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033CCE: fld dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033CD1: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x12033CD3: fmul dword ptr [edi] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12033CD5: fld dword ptr [edi + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12033CD8: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033CDB: faddp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12033CDD: fld dword ptr [edi + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12033CE0: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033CE3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033CE5: fstp dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x12033CE8: fsub dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033CEB: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033CEE: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x12033CF1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12033CF3: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12033CF5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12033CF7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12033D04; /* 0x12033CFA: jp 0x12033d04 */
L_12033CFC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12033CFC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12033CFE: fstp st(0) */
L_12033D00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12033D00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12033D6B; /* 0x12033D02: jmp 0x12033d6b */
L_12033D04:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033D04: fld dword ptr [ecx + 4] */
    PUSH32(esp, ecx); /* 0x12033D07: push ecx */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12033D08: fmul dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x12033D0B: push ecx */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033D0C: faddp st(2) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033D0E: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12033D11: fmul dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033D14: faddp st(2) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12033D16: fld dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033D19: faddp st(2) */
    fp_xch(1); /* 0x12033D1B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033D1D: fstp dword ptr [ebp + 0xc] */
    _st[0] = (double)*(float*)ADDR(ebp + 0xC) / _st[0]; /* 0x12033D20: fdivr dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033D23: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033D26: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12033D29: fstp qword ptr [esp] */
    RECOMP_CALL(sub_121BF4F4); /* 0x12033D2C: call 0x121bf4f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12033D31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12033D32: pop ecx */
    /* test eax, eax */ /* 0x12033D33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12033D00; /* 0x12033D35: je 0x12033d00 */
L_12033D37:
    fp_push(*(float*)&MEM32(edi)); /* 0x12033D37: fld dword ptr [edi] */
    eax = MEM32(ebp + 0x8); /* 0x12033D39: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x12033D3C: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033D3E: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12033D41: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033D43: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x12033D45: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12033D47: faddp st(2) */
    fp_xch(1); /* 0x12033D49: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12033D4B: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12033D4D: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x12033D50: fsub dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x12033D53: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033D55: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x12033D57: fadd dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033D5A: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12033D5D: fld dword ptr [edi + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x12033D60: fsub dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033D63: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x8); /* 0x12033D65: fadd dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033D68: fstp dword ptr [eax + 8] */
L_12033D6B:
    edi = POP32_VAL(esp); /* 0x12033D6B: pop edi */
    esi = POP32_VAL(esp); /* 0x12033D6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x12033D6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12033D6E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12033D76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033D76u);

L_12033D76:
    edi = edi; /* 0x12033D76: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033D78: push ebp */
    ebp = esp; /* 0x12033D79: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033D7B: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033D7D: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033D82: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA09C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033D8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033D8Eu);

L_12033D8E:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA09C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033D99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033D99u);

L_12033D99:
    edi = edi; /* 0x12033D99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033D9B: push ebp */
    ebp = esp; /* 0x12033D9C: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x12033D9E: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12033DA1: fld dword ptr [edx] */
    eax = MEM32(ebp + 0x8); /* 0x12033DA3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x12033DA6: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12033DA9: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12033DAB: fld dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12033DAE: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12033DB1: fld dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12033DB4: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033DB7: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12033DBA: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033DBD: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x12033DBF: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033DC1: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033DC3: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x12033DC6: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033DC9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12033DCB: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12033DCE: fld dword ptr [ebp + 0x10] */
    _st[0] = -_st[0]; /* 0x12033DD1: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12033DD3: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x12033DD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12033DD7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12033DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033DDFu);

L_12033DDF:
    edi = edi; /* 0x12033DDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033DE1: push ebp */
    ebp = esp; /* 0x12033DE2: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033DE4: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033DE6: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033DEB: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033DF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033DF7u);

L_12033DF7:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033E02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033E02u);

L_12033E02:
    edi = edi; /* 0x12033E02: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033E04: push ebp */
    ebp = esp; /* 0x12033E05: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x12033E07: sub esp, 0x24 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x12033E0A: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033E0D: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x10); /* 0x12033E0F: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x12033E12: fsub dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12033E14: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12033E15: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12033E18: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12033E19: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x12033E1C: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033E1D: fld dword ptr [ecx + 4] */
    esi = ebp + (-0x24); /* 0x12033E20: lea esi, [ebp - 0x24] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x12033E23: fsub dword ptr [eax + 4] */
    edi = ebx; /* 0x12033E26: mov edi, ebx */
    PUSH32(esp, ebx); /* 0x12033E28: push ebx */
    PUSH32(esp, ebx); /* 0x12033E29: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12033E2A: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033E2D: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x12033E30: fsub dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x14); /* 0x12033E33: mov eax, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12033E36: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033E39: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x12033E3B: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12033E3D: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033E40: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x12033E43: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12033E46: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033E49: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x12033E4C: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033E4F: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12033E52: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12033E55: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12033E57: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12033E5A: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033E5C: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12033E5E: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12033E61: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12033E63: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12033E66: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033E68: fmulp st(2) */
    fp_xch(4); /* 0x12033E6A: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12033E6C: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12033E6E: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12033E71: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12033E74: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12033E76: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12033E78: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12033E7B: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x12033E7D: fmulp st(6) */
    fp_xch(4); /* 0x12033E7F: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12033E81: fsubrp st(5) */
    fp_xch(4); /* 0x12033E83: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12033E85: fstp dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033E88: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033E8A: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12033E8C: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12033E8E: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033E91: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033E92: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033E93: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x12033E94: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x12033E99: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12033E9C: fld dword ptr [ebx + 4] */
    edi = POP32_VAL(esp); /* 0x12033E9F: pop edi */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12033EA0: fmul dword ptr [eax + 4] */
    esi = POP32_VAL(esp); /* 0x12033EA3: pop esi */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12033EA4: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12033EA6: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033EA8: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x12033EAA: fld dword ptr [ebx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12033EAD: fmul dword ptr [eax + 8] */
    eax = ebx; /* 0x12033EB0: mov eax, ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033EB2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12033EB4: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033EB7: fld dword ptr [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x12033EBA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x12033EBC: fstp dword ptr [ebx + 0xc] */
    ebx = POP32_VAL(esp); /* 0x12033EBF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033EC0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12033EC1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12033EC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033EC9u);

L_12033EC9:
    edi = edi; /* 0x12033EC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033ECB: push ebp */
    ebp = esp; /* 0x12033ECC: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033ECE: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033ED0: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033ED5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0F4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033EE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033EE1u);

L_12033EE1:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0F4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033EEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033EECu);

L_12033EEC:
    edi = edi; /* 0x12033EEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033EEE: push ebp */
    ebp = esp; /* 0x12033EEF: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033EF1: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12033EF3: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033EF8: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA17C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033F04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033F04u);

L_12033F04:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA17C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033F0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033F0Fu);

L_12033F0F:
    edi = edi; /* 0x12033F0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033F11: push ebp */
    ebp = esp; /* 0x12033F12: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12033F14: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12033F17: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x12033F1A: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x12033F1D: push ebx */
    ebx = ecx; /* 0x12033F1E: mov ebx, ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x12033F20: mov dword ptr [ebp + 8], ebx */
    /* test edx, edx */ /* 0x12033F23: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12033FD0; /* 0x12033F25: je 0x12033fd0 */
L_12033F2B:
    eax = MEM32(ebp + 0x10); /* 0x12033F2B: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x18); /* 0x12033F2E: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x12033F31: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12033F32: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12033F35: push edi */
L_12033F36:
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x12033F36: fld dword ptr [eax - 4] */
    edi = ecx; /* 0x12033F39: mov edi, ecx */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x12033F3B: fmul dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x12033F3E: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12033F41: fld dword ptr [eax - 8] */
    esi = ebp + (-0x10); /* 0x12033F44: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12033F47: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F49: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12033F4B: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x20); /* 0x12033F4D: fmul dword ptr [ebx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F50: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12033F52: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x30); /* 0x12033F55: fmul dword ptr [ebx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F58: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12033F5A: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x12033F5D: fld dword ptr [ebx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12033F60: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12033F63: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x12033F66: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F69: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12033F6B: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x24); /* 0x12033F6D: fmul dword ptr [ebx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F70: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12033F72: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x34); /* 0x12033F75: fmul dword ptr [ebx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F78: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12033F7A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x18)); /* 0x12033F7D: fld dword ptr [ebx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12033F80: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12033F83: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x12033F86: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F89: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12033F8B: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x28); /* 0x12033F8D: fmul dword ptr [ebx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F90: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12033F92: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x38); /* 0x12033F95: fmul dword ptr [ebx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033F98: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12033F9A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x12033F9D: fld dword ptr [ebx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12033FA0: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12033FA3: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xC); /* 0x12033FA6: fmul dword ptr [ebx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033FA9: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12033FAB: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x2C); /* 0x12033FAD: fmul dword ptr [ebx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033FB0: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12033FB2: fld dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x12033FB5: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12033FB8: dec edx */
    _flag_k = FK_DEC;
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3C); /* 0x12033FB9: fmul dword ptr [ebx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033FBC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12033FBE: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033FC1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033FC2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033FC3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12033FC4: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12033F36; /* 0x12033FC5: jne 0x12033f36 */
L_12033FCB:
    ebx = MEM32(ebp + 0x8); /* 0x12033FCB: mov ebx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x12033FCE: pop edi */
    esi = POP32_VAL(esp); /* 0x12033FCF: pop esi */
L_12033FD0:
    eax = ebx; /* 0x12033FD0: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12033FD2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12033FD3: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12033FD4: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12033FDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033FDDu);

L_12033FDD:
    edi = edi; /* 0x12033FDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033FDF: push ebp */
    ebp = esp; /* 0x12033FE0: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12033FE2: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12033FE5: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x12033FE7: mov eax, dword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(0x12005448); /* 0x12033FEA: fmul qword ptr [0x12005448] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12033FF0: fld dword ptr [ecx + 4] */
    _st[0] *= *(double*)ADDR(0x12005440); /* 0x12033FF3: fmul qword ptr [0x12005440] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12033FF9: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12033FFB: fld dword ptr [ecx + 8] */
    _st[0] *= *(double*)ADDR(0x12005438); /* 0x12033FFE: fmul qword ptr [0x12005438] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034004: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12034006: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12034009: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203400B: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x1203400E: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034010: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12034012: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12034015: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12034017: fmulp st(3) */
    fp_push(_st[1]); /* 0x12034019: fld st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1203401B: faddp st(3) */
    fp_xch(2); /* 0x1203401D: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203401F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12034021: fld dword ptr [ecx + 4] */
    fp_push(_st[1]); /* 0x12034024: fld st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12034026: fsubp st(1) */
    fp_push(_st[2]); /* 0x12034028: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203402A: fmulp st(1) */
    fp_push(_st[1]); /* 0x1203402C: fld st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203402E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12034030: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12034033: fld dword ptr [ecx + 8] */
    fp_push(_st[1]); /* 0x12034036: fld st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12034038: fsubp st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203403A: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203403C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1203403E: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12034041: fld dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12034044: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x12034047: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034048: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12034050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034050u);

L_12034050:
    edi = edi; /* 0x12034050: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034052: push ebp */
    ebp = esp; /* 0x12034053: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12034055: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12034058: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x1203405A: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x1203405D: fld qword ptr [0x120014c0] */
    _st[1] -= _st[0]; /* 0x12034063: fsub st(1), st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12034065: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12034068: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203406A: fmulp st(3) */
    fp_xch(2); /* 0x1203406C: fxch st(2) */
    _st[0] += _st[1]; /* 0x1203406E: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12034070: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12034072: fld dword ptr [ecx + 4] */
    _st[0] -= _st[1]; /* 0x12034075: fsub st(1) */
    fp_push(_st[2]); /* 0x12034077: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034079: fmulp st(1) */
    _st[0] += _st[1]; /* 0x1203407B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203407D: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12034080: fld dword ptr [ecx + 8] */
    _st[0] -= _st[1]; /* 0x12034083: fsub st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034085: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034087: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12034089: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1203408C: fld dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1203408F: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x12034092: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034093: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203409B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203409Bu);

L_1203409B:
    edi = edi; /* 0x1203409B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203409D: push ebp */
    ebp = esp; /* 0x1203409E: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x120340A0: fld dword ptr [0x12005428] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120340A6: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120340A9: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120340AC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120340AE: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120340B0: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x120340B2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120340C0; /* 0x120340B5: jp 0x120340c0 */
L_120340B7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120340B7: fstp st(0) */
    fp_push(1.0); /* 0x120340B9: fld1  */
    goto L_12034184; /* 0x120340BB: jmp 0x12034184 */
L_120340C0:
    _st[0] *= _st[0]; /* 0x120340C0: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120340C2: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120340C5: fld dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x120340C8: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120340CA: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120340CC: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120340CF: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[0]; /* 0x120340D2: fmul st(0), st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120340D4: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120340D7: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120340DA: fld dword ptr [ebp + 0xc] */
    _st[0] = fabs(_st[0]); /* 0x120340DD: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120340DF: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120340E2: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120340E5: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120340E8: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF44C); /* 0x120340EB: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120340F0: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120340F3: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120340F6: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120340F9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120340FC: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120340FF: fld st(0) */
    _st[0] += _st[1]; /* 0x12034101: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034103: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12034106: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x12034109: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203410C: fstp dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x1203410F: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12034111: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12034114: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034116: fsubp st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034118: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1203411A: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203411C: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203411F: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12034122: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12034125: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12034127: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1203412A: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1203412C: fsubp st(2) */
    fp_xch(1); /* 0x1203412E: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12034130: fmul qword ptr [0x120014c0] */
    fp_xch(2); /* 0x12034136: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034138: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1203413A: fdivp st(1) */
    fp_xch(1); /* 0x1203413C: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1203413E: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034140: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034143: fld dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x12034146: fld1  */
    _st[1] += _st[0]; /* 0x12034148: fadd st(1), st(0) */
    fp_xch(1); /* 0x1203414A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203414C: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203414F: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034152: fmulp st(2) */
    fp_xch(1); /* 0x12034154: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034156: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034159: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203415C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203415E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034160: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12034162: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203416D; /* 0x12034165: jne 0x1203416d */
L_12034167:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034167: fstp st(0) */
    fp_push(1.0); /* 0x12034169: fld1  */
    goto L_1203417E; /* 0x1203416B: jmp 0x1203417e */
L_1203416D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x1203416D: fcom qword ptr [0x12001a48] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12034173: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12034175: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12034184; /* 0x12034178: jp 0x12034184 */
L_1203417A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1203417A: fstp st(0) */
    fp_push(0.0); /* 0x1203417C: fldz  */
L_1203417E:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203417E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034181: fld dword ptr [ebp + 8] */
L_12034184:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034184: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12034185: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1203418D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203418Du);

L_1203418D:
    edi = edi; /* 0x1203418D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203418F: push ebp */
    ebp = esp; /* 0x12034190: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12034192: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12034195: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12034196: mov ebx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12034199: fld dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x1203419B: push esi */
    fp_push(*(double*)ADDR(0x12005458)); /* 0x1203419C: fld qword ptr [0x12005458] */
    PUSH32(esp, edi); /* 0x120341A2: push edi */
    _st[1] += _st[0]; /* 0x120341A3: fadd st(1), st(0) */
    fp_xch(1); /* 0x120341A5: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120341A7: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120341AA: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120341AD: fld st(0) */
    RECOMP_CALL(sub_121BF371); /* 0x120341AF: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x120341B4: mov dword ptr [ebp + 8], eax */
    _st[0] = _st[0] - (double)(int32_t)MEM32(ebp + 0x8); /* 0x120341B7: fisub dword ptr [ebp + 8] */
    esi = 0xFFu; /* 0x120341BA: mov esi, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120341BF: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120341C1: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120341C4: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120341C7: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120341CA: fld st(0) */
    fp_push(1.0); /* 0x120341CC: fld1  */
    _st[1] -= _st[0]; /* 0x120341CE: fsub st(1), st(0) */
    fp_xch(1); /* 0x120341D0: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120341D2: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x120341D5: fld dword ptr [ebx + 4] */
    _st[0] += _st[3]; /* 0x120341D8: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120341DA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120341DD: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120341E0: fld st(0) */
    RECOMP_CALL(sub_121BF371); /* 0x120341E2: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120341E7: mov edi, eax */
    MEM32(ebp + 0x8) = edi; /* 0x120341E9: mov dword ptr [ebp + 8], edi */
    _st[0] = _st[0] - (double)(int32_t)MEM32(ebp + 0x8); /* 0x120341EC: fisub dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x120341EF: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x1; /* 0x120341F1: lea esi, [edi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFu);
    esi = esi & 0xFFu; /* 0x120341F4: and esi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120341FA: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120341FD: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12034200: fld st(0) */
    _st[0] -= _st[2]; /* 0x12034202: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12034204: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x12034207: fld dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1203420A: faddp st(4) */
    fp_xch(3); /* 0x1203420C: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203420E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034211: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12034214: fld st(0) */
    RECOMP_CALL(sub_121BF371); /* 0x12034216: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1203421B: mov ebx, eax */
    ecx = 0xFFu; /* 0x1203421D: mov ecx, 0xff */
    MEM32(ebp + 0x8) = ebx; /* 0x12034222: mov dword ptr [ebp + 8], ebx */
    _st[0] = _st[0] - (double)(int32_t)MEM32(ebp + 0x8); /* 0x12034225: fisub dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    ebx = ebx & ecx; /* 0x12034228: and ebx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x1; /* 0x1203422A: lea eax, [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1203422D: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1203422F: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12034232: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(eax * 4 + 0x120033E8); /* 0x12034235: mov edx, dword ptr [eax*4 + 0x120033e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1203423C: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203423D: fstp dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x12034240: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax * 4 + 0x120033E8); /* 0x12034242: mov ecx, dword ptr [eax*4 + 0x120033e8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12034249: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1203424C: fld st(0) */
    eax = edx + edi; /* 0x1203424E: lea eax, [edx + edi] */
    eax = MEM32(eax * 4 + 0x120033E8); /* 0x12034251: mov eax, dword ptr [eax*4 + 0x120033e8] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12034258: fsubrp st(2) */
    MEM32(ebp + 0x8) = eax; /* 0x1203425A: mov dword ptr [ebp + 8], eax */
    fp_xch(1); /* 0x1203425D: fxch st(1) */
    eax = ecx + edi; /* 0x1203425F: lea eax, [ecx + edi] */
    edi = MEM32(eax * 4 + 0x120033E8); /* 0x12034262: mov edi, dword ptr [eax*4 + 0x120033e8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12034269: fstp dword ptr [ebp - 0x28] */
    eax = edx + esi; /* 0x1203426C: lea eax, [edx + esi] */
    fp_push(_st[1]); /* 0x1203426F: fld st(1) */
    edx = MEM32(eax * 4 + 0x120033E8); /* 0x12034271: mov edx, dword ptr [eax*4 + 0x120033e8] */
    fp_push(_st[2]); /* 0x12034278: fld st(2) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x1203427A: fld qword ptr [0x12001758] */
    eax = ecx + esi; /* 0x12034280: lea eax, [ecx + esi] */
    esi = MEM32(eax * 4 + 0x120033E8); /* 0x12034283: mov esi, dword ptr [eax*4 + 0x120033e8] */
    _st[1] *= _st[0]; /* 0x1203428A: fmul st(1), st(0) */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x1203428C: fld qword ptr [0x12001ea8] */
    fp_push(_st[0]); /* 0x12034292: fld st(0) */
    ecx = MEM32(ebp + 0x8); /* 0x12034294: mov ecx, dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12034297: fsubrp st(3) */
    eax = ecx + ebx; /* 0x12034299: lea eax, [ecx + ebx] */
    fp_xch(3); /* 0x1203429C: fxch st(3) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1203429E: imul eax, eax, 0xc */
    _st[0] *= _st[0]; /* 0x120342A1: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120342A3: fmulp st(2) */
    fp_xch(1); /* 0x120342A5: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120342A7: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[4]); /* 0x120342AA: fld st(4) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12003BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x12003BF0u; /* 0x120342AC: add eax, 0x12003bf0 */
    _flag_k = FK_ADD;
    fp_push(_st[5]); /* 0x120342B1: fld st(5) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120342B3: fmulp st(2) */
    fp_xch(2); /* 0x120342B5: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120342B7: fsubrp st(1) */
    fp_xch(1); /* 0x120342B9: fxch st(1) */
    _st[0] *= _st[0]; /* 0x120342BB: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120342BD: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120342BF: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120342C2: fld dword ptr [eax + 4] */
    fp_push(_st[3]); /* 0x120342C5: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120342C7: fmulp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x120342C9: fld dword ptr [eax] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120342CB: fmulp st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120342CD: faddp st(2) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120342CF: fld dword ptr [eax + 8] */
    eax = edi + ebx; /* 0x120342D2: lea eax, [edi + ebx] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120342D5: imul eax, eax, 0xc */
    fp_push(_st[1]); /* 0x120342D8: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120342DA: fmulp st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120342DC: faddp st(2) */
    fp_xch(1); /* 0x120342DE: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120342E0: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12003BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x12003BF0u; /* 0x120342E3: add eax, 0x12003bf0 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120342E8: fld dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120342EB: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120342ED: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x120342F0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120342F2: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120342F4: faddp st(3) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120342F6: fld dword ptr [eax + 8] */
    eax = edx + ebx; /* 0x120342F9: lea eax, [edx + ebx] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120342FC: fmulp st(2) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120342FE: imul eax, eax, 0xc */
    fp_xch(2); /* 0x12034301: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034303: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12034305: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12034308: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203430B: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12003BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x12003BF0u; /* 0x1203430E: add eax, 0x12003bf0 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x12034313: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034315: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12034317: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x1203431A: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203431C: fmulp st(3) */
    fp_xch(2); /* 0x1203431E: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034320: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12034322: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034325: fld dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12034328: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x1203432B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203432D: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1203432F: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12034332: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12034334: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12034336: faddp st(3) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034338: fld dword ptr [eax + 8] */
    eax = esi + ebx; /* 0x1203433B: lea eax, [esi + ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203433E: fld dword ptr [ebp - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12034341: imul eax, eax, 0xc */
    fp_push(_st[0]); /* 0x12034344: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034346: fmulp st(2) */
    fp_xch(4); /* 0x12034348: fxch st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203434A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203434C: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12003BF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x12003BF0u; /* 0x1203434F: add eax, 0x12003bf0 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034354: fld dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x12034357: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034359: fmulp st(1) */
    fp_push(_st[5]); /* 0x1203435B: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1203435D: fmul dword ptr [eax] */
    ebx = MEM32(ebp + (-0x24)); /* 0x1203435F: mov ebx, dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034362: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034364: fld dword ptr [eax + 8] */
    eax = ecx + ebx; /* 0x12034367: lea eax, [ecx + ebx] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203436A: fmulp st(4) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1203436C: imul eax, eax, 0xc */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1203436F: faddp st(3) */
    fp_xch(2); /* 0x12034371: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12034373: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12034376: fld dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034379: fld dword ptr [ebp + 8] */
    ecx = 0x12003BF0u; /* 0x1203437C: mov ecx, 0x12003bf0 */
    fp_push(_st[0]); /* 0x12034381: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034383: fsubp st(2) */
    fp_push(_st[4]); /* 0x12034385: fld st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034387: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034389: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203438B: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203438E: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12034391: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12034394: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034396: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12034398: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x1203439B: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203439D: fmulp st(3) */
    fp_xch(2); /* 0x1203439F: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120343A1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120343A3: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + ecx + 0x4)); /* 0x120343A6: fld dword ptr [eax + ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120343AA: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120343AD: fld dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120343B0: fmulp st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120343B2: faddp st(3) */
    fp_push(*(float*)&MEM32(eax + ecx + 0x8)); /* 0x120343B4: fld dword ptr [eax + ecx + 8] */
    eax = edi + ebx; /* 0x120343B8: lea eax, [edi + ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120343BB: fld dword ptr [ebp - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120343BE: imul eax, eax, 0xc */
    fp_push(_st[0]); /* 0x120343C1: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120343C3: fmulp st(2) */
    fp_xch(4); /* 0x120343C5: fxch st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120343C7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120343C9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + ecx + 0x4)); /* 0x120343CC: fld dword ptr [eax + ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120343D0: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120343D3: fld dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x120343D6: fmulp st(6) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120343D8: faddp st(5) */
    fp_push(*(float*)&MEM32(eax + ecx + 0x8)); /* 0x120343DA: fld dword ptr [eax + ecx + 8] */
    eax = edx + ebx; /* 0x120343DE: lea eax, [edx + ebx] */
    fp_push(_st[3]); /* 0x120343E1: fld st(3) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120343E3: imul eax, eax, 0xc */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120343E6: fmulp st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120343E8: faddp st(5) */
    fp_xch(4); /* 0x120343EA: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120343EC: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120343EF: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120343F2: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120343F5: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120343F7: fsubp st(2) */
    fp_push(_st[4]); /* 0x120343F9: fld st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120343FB: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120343FD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120343FF: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + ecx + 0x4)); /* 0x12034402: fld dword ptr [eax + ecx + 4] */
    fp_push(_st[1]); /* 0x12034406: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034408: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1203440A: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + ecx); /* 0x1203440D: fmul dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034410: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + ecx + 0x8)); /* 0x12034412: fld dword ptr [eax + ecx + 8] */
    eax = esi + ebx; /* 0x12034416: lea eax, [esi + ebx] */
    fp_push(_st[3]); /* 0x12034419: fld st(3) */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1203441B: imul eax, eax, 0xc */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203441E: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034420: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034422: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12034425: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + ecx + 0x4)); /* 0x12034428: fld dword ptr [eax + ecx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203442C: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1203442E: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + ecx); /* 0x12034431: fmul dword ptr [eax + ecx] */
    edi = POP32_VAL(esp); /* 0x12034434: pop edi */
    esi = POP32_VAL(esp); /* 0x12034435: pop esi */
    ebx = POP32_VAL(esp); /* 0x12034436: pop ebx */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034437: faddp st(2) */
    fp_push(*(float*)&MEM32(eax + ecx + 0x8)); /* 0x12034439: fld dword ptr [eax + ecx + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203443D: fmulp st(3) */
    fp_xch(1); /* 0x1203443F: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034441: faddp st(2) */
    fp_xch(1); /* 0x12034443: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12034445: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12034448: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203444B: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1203444E: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034450: fsubp st(2) */
    fp_xch(1); /* 0x12034452: fxch st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12034454: fmulp st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034456: faddp st(2) */
    fp_xch(1); /* 0x12034458: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203445A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203445D: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12034460: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12034463: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12034465: fsubp st(2) */
    fp_xch(1); /* 0x12034467: fxch st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12034469: fmulp st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1203446B: faddp st(2) */
    fp_xch(1); /* 0x1203446D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203446F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034472: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12034475: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12034478: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1203447A: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203447C: fld dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x12001758); /* 0x1203447F: fmul qword ptr [0x12001758] */
    _st[0] = *(double*)ADDR(0x12001EA8) - _st[0]; /* 0x12034485: fsubr qword ptr [0x12001ea8] */
    fp_xch(3); /* 0x1203448B: fxch st(3) */
    _st[0] *= _st[0]; /* 0x1203448D: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203448F: fmulp st(3) */
    fp_xch(2); /* 0x12034491: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034493: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x12034496: fmul dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034499: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x12005450); /* 0x1203449B: fmul qword ptr [0x12005450] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120344A1: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120344A4: fld dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120344A7: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120344A8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120344B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120344B0u);

L_120344B0:
    edi = edi; /* 0x120344B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120344B2: push ebp */
    ebp = esp; /* 0x120344B3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120344B5: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120344B7: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120344BC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA180)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120344C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120344C8u);

L_120344C8:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA180)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120344D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120344D3u);

L_120344D3:
    edi = edi; /* 0x120344D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120344D5: push ebp */
    ebp = esp; /* 0x120344D6: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120344D8: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120344DA: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120344DF: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA184)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120344EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120344EBu);

L_120344EB:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA184)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120344F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120344F6u);

L_120344F6:
    edi = edi; /* 0x120344F6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120344F8: push ebp */
    ebp = esp; /* 0x120344F9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120344FB: push ecx */
    PUSH32(esp, ecx); /* 0x120344FC: push ecx */
    PUSH32(esp, esi); /* 0x120344FD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120344FE: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12034501: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x12034504: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x12034505: fld dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x12034507: push ecx */
    _st[0] *= _st[0]; /* 0x12034508: fmul st(0), st(0) */
    fp_xch(1); /* 0x1203450A: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1203450C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203450E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12034510: fstp dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x12034513: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12034515: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12034519: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203451C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x1203451F: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12034524: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034538; /* 0x12034526: je 0x12034538 */
L_12034528:
    ecx = MEM32(ebp + 0x8); /* 0x12034528: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, esi */ /* 0x1203452B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1203458E; /* 0x1203452D: je 0x1203458e */
L_1203452F:
    eax = MEM32(esi); /* 0x1203452F: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x12034531: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x4); /* 0x12034533: mov eax, dword ptr [esi + 4] */
    goto L_1203457D; /* 0x12034536: jmp 0x1203457d */
L_12034538:
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x12034538: fld dword ptr [0x12005428] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203453E: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12034541: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12034543: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034545: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12034547: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12034582; /* 0x1203454A: jne 0x12034582 */
L_1203454C:
    RECOMP_CALL(sub_121BF44C); /* 0x1203454C: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12034551: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12034554: fld dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12034557: mov ecx, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x1203455A: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1203455C: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203455E: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12034561: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12034563: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12034566: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034568: fmulp st(2) */
    fp_xch(1); /* 0x1203456A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203456C: fstp dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1203456F: mov eax, dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12034572: fmul dword ptr [esi + 4] */
    MEM32(ecx) = eax; /* 0x12034575: mov dword ptr [ecx], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034577: fstp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1203457A: mov eax, dword ptr [ebp - 4] */
L_1203457D:
    MEM32(ecx + 0x4) = eax; /* 0x1203457D: mov dword ptr [ecx + 4], eax */
    goto L_1203458E; /* 0x12034580: jmp 0x1203458e */
L_12034582:
    ecx = MEM32(ebp + 0x8); /* 0x12034582: mov ecx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034585: fstp st(0) */
    fp_push(0.0); /* 0x12034587: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x12034589: fst dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1203458B: fstp dword ptr [ecx + 4] */
L_1203458E:
    eax = ecx; /* 0x1203458E: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x12034590: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034591: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12034592: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1203459A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203459Au);

L_1203459A:
    edi = edi; /* 0x1203459A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203459C: push ebp */
    ebp = esp; /* 0x1203459D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1203459F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x120345A2: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x120345A5: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x120345A8: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x120345AB: fmul dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x120345AE: push esi */
    fp_push(*(float*)&MEM32(eax)); /* 0x120345AF: fld dword ptr [eax] */
    PUSH32(esp, edi); /* 0x120345B1: push edi */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120345B2: fmul dword ptr [ecx] */
    esi = ebp + (-0x10); /* 0x120345B4: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120345B7: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x120345B9: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120345BC: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120345BF: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120345C2: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x120345C4: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x120345C7: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120345CA: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x120345CC: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120345CF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120345D2: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120345D5: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x120345D7: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x120345DA: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120345DD: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x38); /* 0x120345DF: fadd dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120345E2: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120345E5: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120345E8: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x120345EA: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x120345ED: fmul dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x120345F0: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120345F3: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120345F5: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x120345F7: fadd dword ptr [ecx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120345FA: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120345FD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120345FE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120345FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034600: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12034601: pop edi */
    esi = POP32_VAL(esp); /* 0x12034602: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034603: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034604: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203460C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203460Cu);

L_1203460C:
    edi = edi; /* 0x1203460C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203460E: push ebp */
    ebp = esp; /* 0x1203460F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12034611: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12034614: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x12034617: mov edx, dword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x1203461A: mov eax, ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1203461C: mov dword ptr [ebp + 8], eax */
    /* test edx, edx */ /* 0x1203461F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203468F; /* 0x12034621: je 0x1203468f */
L_12034623:
    eax = MEM32(ebp + 0x10); /* 0x12034623: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12034626: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x12034627: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1203462A: push esi */
    PUSH32(esp, edi); /* 0x1203462B: push edi */
L_1203462C:
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1203462C: fld dword ptr [eax + 4] */
    edi = ecx; /* 0x1203462F: mov edi, ecx */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x12034631: fmul dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x12034634: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax)); /* 0x12034637: fld dword ptr [eax] */
    esi = ebp + (-0x10); /* 0x12034639: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x1203463C: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203463E: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x30); /* 0x12034640: fadd dword ptr [ebx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12034643: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034646: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x14); /* 0x12034649: fmul dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1203464C: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x1203464E: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034651: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x34); /* 0x12034653: fadd dword ptr [ebx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034656: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034659: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x18); /* 0x1203465C: fmul dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1203465F: fld dword ptr [ebx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12034662: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034664: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x38); /* 0x12034666: fadd dword ptr [ebx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12034669: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1203466C: fld dword ptr [ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1203466F: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x12034671: fld dword ptr [ebx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12034674: fmul dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x12034677: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1203467A: dec edx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203467B: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x3C); /* 0x1203467D: fadd dword ptr [ebx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034680: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034683: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034684: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034685: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034686: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1203462C; /* 0x12034687: jne 0x1203462c */
L_12034689:
    eax = MEM32(ebp + 0x8); /* 0x12034689: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1203468C: pop edi */
    esi = POP32_VAL(esp); /* 0x1203468D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1203468E: pop ebx */
L_1203468F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203468F: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12034690: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12034698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034698u);

L_12034698:
    edi = edi; /* 0x12034698: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203469A: push ebp */
    ebp = esp; /* 0x1203469B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1203469D: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1203469E: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x120346A1: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x120346A4: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120346A7: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120346A9: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120346AB: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120346AD: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120346B0: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x120346B2: fmul dword ptr [edx + 0xc] */
    fp_xch(2); /* 0x120346B5: fxch st(2) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120346B7: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x120346BA: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120346BD: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x120346C0: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120346C3: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x120346C6: fmul dword ptr [edx + 0x1c] */
    fp_xch(2); /* 0x120346C9: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120346CB: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120346CD: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120346CF: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120346D1: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120346D4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x120346D6: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120346D9: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x120346DB: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120346DE: faddp st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120346E0: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x120346E2: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120346E5: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x120346E8: fld1  */
    PUSH32(esp, ecx); /* 0x120346EA: push ecx */
    PUSH32(esp, ecx); /* 0x120346EB: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120346EC: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120346F0: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120346F3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x120346F6: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120346FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x120346FD: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203471F; /* 0x12034700: jne 0x1203471f */
L_12034702:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12034702: fld dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x12034705: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12034707: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034709: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1203470C: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1203470E: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12034711: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034713: fmulp st(2) */
    fp_xch(1); /* 0x12034715: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12034717: fstp dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12034719: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203471C: fstp dword ptr [eax + 4] */
L_1203471F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203471F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034720: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12034728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034728u);

L_12034728:
    edi = edi; /* 0x12034728: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203472A: push ebp */
    ebp = esp; /* 0x1203472B: mov ebp, esp */
    edx = MEM32(ebp + 0x1C); /* 0x1203472D: mov edx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x12034730: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12034733: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12034736: push edi */
    edi = ecx; /* 0x12034737: mov edi, ecx */
    /* test edx, edx */ /* 0x12034739: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120347CF; /* 0x1203473B: je 0x120347cf */
L_12034741:
    fp_push(1.0); /* 0x12034741: fld1  */
    PUSH32(esp, ebx); /* 0x12034743: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x12034744: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x12034747: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12034748: mov esi, dword ptr [ebp + 0x10] */
L_1203474B:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203474B: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x1203474E: push ecx */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x1203474F: fmul dword ptr [ebx + 0x10] */
    PUSH32(esp, ecx); /* 0x12034752: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x12034753: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12034755: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034757: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x30); /* 0x12034759: fadd dword ptr [ebx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1203475C: fstp dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x10)); /* 0x1203475F: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12034762: fld dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x14); /* 0x12034765: fmul dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12034768: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x1203476A: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203476D: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x34); /* 0x1203476F: fadd dword ptr [ebx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034772: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12034775: fld dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x1C); /* 0x12034778: fmul dword ptr [ebx + 0x1c] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1203477B: fld dword ptr [ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1203477E: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034780: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x3C); /* 0x12034782: fadd dword ptr [ebx + 0x3c] */
    MEM32(ecx) = eax; /* 0x12034785: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x12034787: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x1203478A: mov dword ptr [ecx + 4], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1203478D: fstp dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12034790: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034794: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12034797: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x1203479A: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1203479F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120347C0; /* 0x120347A1: jne 0x120347c0 */
L_120347A3:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120347A3: fld dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x120347A6: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120347A8: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120347AA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120347AD: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120347AF: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120347B2: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120347B4: fmulp st(2) */
    fp_xch(1); /* 0x120347B6: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120347B8: fstp dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120347BA: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x120347BD: fstp dword ptr [ecx + 4] */
L_120347C0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x120347C0: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x120347C3: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x120347C5: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120347C8: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1203474B; /* 0x120347C9: jne 0x1203474b */
L_120347CB:
    esi = POP32_VAL(esp); /* 0x120347CB: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120347CC: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x120347CE: pop ebx */
L_120347CF:
    eax = edi; /* 0x120347CF: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120347D1: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120347D2: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120347D3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120347DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120347DBu);

L_120347DB:
    edi = edi; /* 0x120347DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120347DD: push ebp */
    ebp = esp; /* 0x120347DE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120347E0: push ecx */
    PUSH32(esp, ecx); /* 0x120347E1: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x120347E2: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x120347E5: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x120347E8: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120347EB: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120347EE: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120347F0: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120347F2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120347F4: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120347F7: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120347FA: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x120347FC: fld dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120347FF: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12034802: fmul dword ptr [ecx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x12034805: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x12034808: mov dword ptr [eax], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203480A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203480C: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1203480F: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x12034812: mov dword ptr [eax + 4], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034815: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034816: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203481E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203481Eu);

L_1203481E:
    edi = edi; /* 0x1203481E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034820: push ebp */
    ebp = esp; /* 0x12034821: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12034823: push ecx */
    PUSH32(esp, ecx); /* 0x12034824: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x12034825: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12034828: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x12034829: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x1203482C: push edi */
    edi = edx; /* 0x1203482D: mov edi, edx */
    MEM32(ebp + 0x8) = edi; /* 0x1203482F: mov dword ptr [ebp + 8], edi */
    /* test esi, esi */ /* 0x12034832: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034874; /* 0x12034834: je 0x12034874 */
L_12034836:
    edi = MEM32(ebp + 0x18); /* 0x12034836: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x12034839: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1203483A: mov ebx, dword ptr [ebp + 0x10] */
L_1203483D:
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1203483D: fld dword ptr [ebx + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x10); /* 0x12034840: fmul dword ptr [edi + 0x10] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12034843: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x12034845: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034847: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12034849: fstp dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1203484C: mov eax, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1203484F: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x12034851: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(edi + 0x14)); /* 0x12034854: fld dword ptr [edi + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x12034857: fmul dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x14); /* 0x1203485A: add ebx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x1203485D: mov dword ptr [edx], eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203485F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034861: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12034864: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx + 0x4) = ecx; /* 0x12034867: mov dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x1203486A: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1203486D: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1203483D; /* 0x1203486E: jne 0x1203483d */
L_12034870:
    edi = MEM32(ebp + 0x8); /* 0x12034870: mov edi, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x12034873: pop ebx */
L_12034874:
    eax = edi; /* 0x12034874: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12034876: pop edi */
    esi = POP32_VAL(esp); /* 0x12034877: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034878: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12034879: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12034881(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034881u);

L_12034881:
    edi = edi; /* 0x12034881: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034883: push ebp */
    ebp = esp; /* 0x12034884: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12034886: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12034889: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1203488A: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203488D: fld dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x12034890: push edi */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12034891: fld dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x12034894: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x12034895: fld dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x12034897: push ecx */
    _st[0] *= _st[0]; /* 0x12034898: fmul st(0), st(0) */
    fp_xch(2); /* 0x1203489A: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1203489C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1203489E: faddp st(2) */
    _st[0] *= _st[0]; /* 0x120348A0: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120348A2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120348A4: fstp dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x120348A7: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120348A9: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120348AD: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120348B0: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x120348B3: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120348B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120348C5; /* 0x120348BA: je 0x120348c5 */
L_120348BC:
    eax = MEM32(ebp + 0x8); /* 0x120348BC: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x120348BF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12034923; /* 0x120348C1: je 0x12034923 */
L_120348C3:
    goto L_1203490D; /* 0x120348C3: jmp 0x1203490d */
L_120348C5:
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x120348C5: fld dword ptr [0x12005428] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120348CB: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120348CE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120348D0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120348D2: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120348D4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12034914; /* 0x120348D7: jne 0x12034914 */
L_120348D9:
    RECOMP_CALL(sub_121BF44C); /* 0x120348D9: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120348DE: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120348E1: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120348E4: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x120348E7: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120348E9: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120348EB: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120348EE: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120348F0: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x120348F3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120348F5: fmulp st(2) */
    fp_xch(1); /* 0x120348F7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120348F9: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120348FC: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x120348FE: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12034901: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12034904: fmul dword ptr [esi + 8] */
    esi = ebp + (-0xC); /* 0x12034907: lea esi, [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203490A: fstp dword ptr [ebp - 4] */
L_1203490D:
    edi = eax; /* 0x1203490D: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203490F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034910: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034911: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_12034923; /* 0x12034912: jmp 0x12034923 */
L_12034914:
    eax = MEM32(ebp + 0x8); /* 0x12034914: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034917: fstp st(0) */
    fp_push(0.0); /* 0x12034919: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x1203491B: fst dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203491D: fst dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12034920: fstp dword ptr [eax + 8] */
L_12034923:
    edi = POP32_VAL(esp); /* 0x12034923: pop edi */
    esi = POP32_VAL(esp); /* 0x12034924: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034925: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12034926: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1203492E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203492Eu);

L_1203492E:
    edi = edi; /* 0x1203492E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034930: push ebp */
    ebp = esp; /* 0x12034931: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12034933: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x12034936: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x12034939: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1203493C: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1203493F: fmul dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x12034942: push esi */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034943: fld dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12034945: push edi */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12034946: fmul dword ptr [ecx] */
    esi = ebp + (-0x10); /* 0x12034948: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203494B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1203494D: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12034950: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034953: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x12034955: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12034958: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1203495B: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1203495E: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x12034960: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12034963: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034966: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x12034968: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1203496B: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203496E: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x12034970: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034973: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12034976: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12034979: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1203497B: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1203497E: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034981: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x12034983: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12034986: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034989: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x38); /* 0x1203498B: fadd dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203498E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12034991: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12034994: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x12034996: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12034999: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203499C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1203499E: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x120349A1: fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x120349A4: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120349A7: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120349A9: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x120349AB: fadd dword ptr [ecx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120349AE: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120349B1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120349B2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120349B3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120349B4: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x120349B5: pop edi */
    esi = POP32_VAL(esp); /* 0x120349B6: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120349B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120349B8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120349C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120349C0u);

L_120349C0:
    edi = edi; /* 0x120349C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120349C2: push ebp */
    ebp = esp; /* 0x120349C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120349C5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120349C8: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x120349CB: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x120349CE: push ebx */
    ebx = ecx; /* 0x120349CF: mov ebx, ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x120349D1: mov dword ptr [ebp + 8], ebx */
    /* test edx, edx */ /* 0x120349D4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034A69; /* 0x120349D6: je 0x12034a69 */
L_120349DC:
    ebx = MEM32(ebp + 0x10); /* 0x120349DC: mov ebx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x18); /* 0x120349DF: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120349E2: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x120349E3: add ebx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120349E6: push edi */
L_120349E7:
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x120349E7: fld dword ptr [ebx - 4] */
    edi = ecx; /* 0x120349EA: mov edi, ecx */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x120349EC: fmul dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x120349EF: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x120349F2: fld dword ptr [ebx - 8] */
    esi = ebp + (-0x10); /* 0x120349F5: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120349F8: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120349FA: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x120349FC: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x120349FF: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A01: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x12034A03: fadd dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12034A06: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034A09: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x8)); /* 0x12034A0C: fmul dword ptr [ebx - 8] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034A0F: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x12034A12: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A15: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x12034A17: fld dword ptr [eax + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12034A1A: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A1C: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x12034A1E: fadd dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034A21: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034A24: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x8)); /* 0x12034A27: fmul dword ptr [ebx - 8] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034A2A: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x12034A2D: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A30: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12034A32: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x12034A34: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A37: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x12034A39: fadd dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12034A3C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034A3F: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x12034A42: fmul dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x12034A45: fld dword ptr [ebx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x12034A48: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A4B: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x12034A4D: fld dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12034A50: fmul dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x14); /* 0x12034A52: add ebx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12034A55: dec edx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034A56: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x12034A58: fadd dword ptr [eax + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034A5B: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034A5E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034A5F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034A60: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034A61: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120349E7; /* 0x12034A62: jne 0x120349e7 */
L_12034A64:
    ebx = MEM32(ebp + 0x8); /* 0x12034A64: mov ebx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x12034A67: pop edi */
    esi = POP32_VAL(esp); /* 0x12034A68: pop esi */
L_12034A69:
    eax = ebx; /* 0x12034A69: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12034A6B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034A6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12034A6D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12034A75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034A75u);

L_12034A75:
    edi = edi; /* 0x12034A75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034A77: push ebp */
    ebp = esp; /* 0x12034A78: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12034A7A: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x12034A7B: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x12034A7E: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x12034A81: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034A84: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x12034A86: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034A88: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x12034A8A: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034A8D: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12034A8F: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034A92: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x12034A94: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x12034A97: fxch st(3) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034A99: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x12034A9C: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034A9F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x12034AA2: fmul dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034AA5: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x12034AA8: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034AAB: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x12034AAE: fmul dword ptr [edx + 0x1c] */
    fp_xch(3); /* 0x12034AB1: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AB3: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AB5: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AB7: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AB9: faddp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034ABB: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x12034ABE: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034AC1: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x12034AC4: fmul dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034AC7: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x12034ACA: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12034ACD: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x12034AD0: fmul dword ptr [edx + 0x2c] */
    fp_xch(3); /* 0x12034AD3: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AD5: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AD7: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AD9: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034ADB: faddp st(4) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x12034ADD: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034AE0: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x12034AE2: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034AE5: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x12034AE7: fld dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12034AEA: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x12034AEC: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034AEF: faddp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x12034AF1: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12034AF3: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x12034AF6: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034AF9: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x12034AFC: fld1  */
    PUSH32(esp, ecx); /* 0x12034AFE: push ecx */
    PUSH32(esp, ecx); /* 0x12034AFF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12034B00: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12034B04: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12034B07: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x12034B0A: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12034B0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x12034B11: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12034B3D; /* 0x12034B14: jne 0x12034b3d */
L_12034B16:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12034B16: fld dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x12034B19: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12034B1B: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12034B1D: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12034B20: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12034B22: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12034B25: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12034B27: fmulp st(2) */
    fp_xch(1); /* 0x12034B29: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12034B2B: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034B2D: fld dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x12034B30: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034B32: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12034B34: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12034B37: fmul dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12034B3A: fstp dword ptr [eax + 8] */
L_12034B3D:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034B3D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12034B3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12034B46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034B46u);

L_12034B46:
    edi = edi; /* 0x12034B46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12034B48: push ebp */
    ebp = esp; /* 0x12034B49: mov ebp, esp */
    edx = MEM32(ebp + 0x1C); /* 0x12034B4B: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12034B4E: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12034B51: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12034B52: mov ebx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x12034B55: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034C2F; /* 0x12034B57: je 0x12034c2f */
L_12034B5D:
    fp_push(1.0); /* 0x12034B5D: fld1  */
    ecx = ebx + 0x8; /* 0x12034B5F: lea ecx, [ebx + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x12034B62: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12034B65: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x12034B66: add ebx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12034B69: push edi */
L_12034B6A:
    eax = MEM32(ebp + 0x18); /* 0x12034B6A: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x12034B6D: fld dword ptr [ebx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12034B70: fmul dword ptr [eax] */
    esi = ebp + (-0xC); /* 0x12034B72: lea esi, [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034B75: fld dword ptr [ebx - 4] */
    edi = ecx + (-0x8); /* 0x12034B78: lea edi, [ecx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x12034B7B: fmul dword ptr [eax + 0x10] */
    PUSH32(esp, ecx); /* 0x12034B7E: push ecx */
    PUSH32(esp, ecx); /* 0x12034B7F: push ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034B80: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x12034B82: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12034B85: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034B87: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x12034B89: fadd dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12034B8C: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034B8F: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x12034B92: fmul dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12034B95: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x8)); /* 0x12034B98: fmul dword ptr [ebx - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034B9B: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12034B9D: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x12034B9F: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034BA2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x12034BA4: fadd dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12034BA7: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x12034BAA: fld dword ptr [ebx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12034BAD: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034BB0: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x12034BB3: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034BB6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12034BB8: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x12034BBA: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034BBD: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x12034BBF: fadd dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12034BC2: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x12034BC5: fld dword ptr [ebx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x12034BC8: fmul dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x12034BCB: fld dword ptr [ebx - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x12034BCE: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034BD1: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x12034BD3: fld dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12034BD6: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034BD8: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x12034BDA: fadd dword ptr [eax + 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034BDD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034BDE: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12034BDF: fstp dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12034BE2: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12034BE6: fld dword ptr [ebp + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12034BE9: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12034BEA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1202FC3C); /* 0x12034BED: call 0x1202fc3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12034BF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12034C19; /* 0x12034BF4: jne 0x12034c19 */
L_12034BF6:
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12034BF6: fld dword ptr [ebp + 0x1c] */
    fp_push(1.0); /* 0x12034BF9: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12034BFB: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12034BFD: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12034C00: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12034C03: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x8)); /* 0x12034C05: fmul dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x12034C08: fstp dword ptr [ecx - 8] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x12034C0B: fld dword ptr [ecx - 4] */
    fp_push(_st[1]); /* 0x12034C0E: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034C10: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x12034C12: fstp dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12034C15: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x12034C17: fstp dword ptr [ecx] */
L_12034C19:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x14); /* 0x12034C19: add ebx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x12034C1C: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x12034C1E: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12034C21: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12034B6A; /* 0x12034C22: jne 0x12034b6a */
L_12034C28:
    ebx = MEM32(ebp + 0x8); /* 0x12034C28: mov ebx, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034C2B: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x12034C2D: pop edi */
    esi = POP32_VAL(esp); /* 0x12034C2E: pop esi */
L_12034C2F:
    eax = ebx; /* 0x12034C2F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12034C31: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12034C32: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12034C33: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12034C3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034C3Bu);

L_12034C3B:
    edi = edi; /* 0x12034C3B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12034C3D: push ebx */
    ebx = esp; /* 0x12034C3E: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x12034C40: push ecx */
    PUSH32(esp, ecx); /* 0x12034C41: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x12034C42: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12034C45: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12034C48: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12034C49: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12034C4C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x12034C50: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x12034C52: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12034C55: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12034C5A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12034C5C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x8); /* 0x12034C5F: mov eax, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x18); /* 0x12034C62: mov edx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12034C65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12034C67: push esi */
    esi = MEM32(ebx + 0x14); /* 0x12034C68: mov esi, dword ptr [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x12034C6B: push edi */
    edi = MEM32(ebx + 0x1C); /* 0x12034C6C: mov edi, dword ptr [ebx + 0x1c] */
    /* test edi, edi */ /* 0x12034C6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034C71: setne cl */
    MEM32(ebp + (-0x54)) = eax; /* 0x12034C74: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebx + 0xC); /* 0x12034C77: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x58)) = eax; /* 0x12034C7A: mov dword ptr [ebp - 0x58], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12034C7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12034C7F: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x12034C81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034C83: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12034C86: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12034C88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12034C8A: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x12034C8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034C8E: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12034C91: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x12034C93: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12034D01; /* 0x12034C96: ja 0x12034d01 */
L_12034C98:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x12034D9F)); goto _ljump; }
L_12034C9F:
    fp_push(0.0); /* 0x12034C9F: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12034CA1: fst dword ptr [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12034CA4: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12034CA7: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12034CAA: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12034CAD: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12034CB0: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12034CB3: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12034CB6: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x12034CB9: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12034CBC: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12034CBF: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12034CC2: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x12034CC5: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12034CC7: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12034CCA: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x12034CCD: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12034CD0: fstp dword ptr [ebp - 0x50] */
    goto L_12034D01; /* 0x12034CD3: jmp 0x12034d01 */
L_12034CD5:
    edi = esi; /* 0x12034CD5: mov edi, esi */
    goto L_12034D04; /* 0x12034CD7: jmp 0x12034d04 */
L_12034CD9:
    edi = edx; /* 0x12034CD9: mov edi, edx */
    goto L_12034D04; /* 0x12034CDB: jmp 0x12034d04 */
L_12034CDD:
    PUSH32(esp, esi); /* 0x12034CDD: push esi */
    PUSH32(esp, edx); /* 0x12034CDE: push edx */
    goto L_12034CF8; /* 0x12034CDF: jmp 0x12034cf8 */
L_12034CE1:
    PUSH32(esp, esi); /* 0x12034CE1: push esi */
L_12034CE2:
    PUSH32(esp, edi); /* 0x12034CE2: push edi */
    goto L_12034CF8; /* 0x12034CE3: jmp 0x12034cf8 */
L_12034CE5:
    PUSH32(esp, edx); /* 0x12034CE5: push edx */
    RECOMP_BACKEDGE();
    goto L_12034CE2; /* 0x12034CE6: jmp 0x12034ce2 */
L_12034CE8:
    PUSH32(esp, edx); /* 0x12034CE8: push edx */
    PUSH32(esp, edi); /* 0x12034CE9: push edi */
    eax = ebp + (-0x50); /* 0x12034CEA: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034CED: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x12034CEE: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12034CF3: push esi */
    eax = ebp + (-0x50); /* 0x12034CF4: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034CF7: push eax */
L_12034CF8:
    eax = ebp + (-0x50); /* 0x12034CF8: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034CFB: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x12034CFC: call 0x12030f00 */
    RECOMP_FLAGS_IN();
L_12034D01:
    edi = ebp + (-0x50); /* 0x12034D01: lea edi, [ebp - 0x50] */
L_12034D04:
    esi = MEM32(ebp + (-0x54)); /* 0x12034D04: mov esi, dword ptr [ebp - 0x54] */
    PUSH32(esp, edi); /* 0x12034D07: push edi */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x12034D08: push dword ptr [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x12034D0B: push esi */
    RECOMP_CALL(sub_12030561); /* 0x12034D0C: call 0x12030561 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x10); /* 0x12034D11: mov ecx, dword ptr [ebx + 0x10] */
    /* test ecx, ecx */ /* 0x12034D14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034D87; /* 0x12034D16: je 0x12034d87 */
L_12034D18:
    fp_push(*(float*)&MEM32(esi)); /* 0x12034D18: fld dword ptr [esi] */
    eax = MEM32(ecx + 0x8); /* 0x12034D1A: mov eax, dword ptr [ecx + 8] */
    fp_push(1.0); /* 0x12034D1D: fld1  */
    _st[1] += _st[0]; /* 0x12034D1F: fadd st(1), st(0) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12034D21: fld qword ptr [0x120014c0] */
    _st[2] *= _st[0]; /* 0x12034D27: fmul st(2), st(0) */
    fp_push((double)(int32_t)MEM32(ecx + 0x8)); /* 0x12034D29: fild dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x12034D2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034D36; /* 0x12034D2E: jns 0x12034d36 */
L_12034D30:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034D30: fadd dword ptr [0x120014d0] */
L_12034D36:
    eax = MEM32(ecx); /* 0x12034D36: mov eax, dword ptr [ecx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12034D38: fmulp st(3) */
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x12034D3A: fild dword ptr [ecx] */
    /* test eax, eax */ /* 0x12034D3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034D46; /* 0x12034D3E: jns 0x12034d46 */
L_12034D40:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034D40: fadd dword ptr [0x120014d0] */
L_12034D46:
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12034D46: faddp st(3) */
    fp_xch(2); /* 0x12034D48: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12034D4A: fstp dword ptr [esi] */
    eax = MEM32(ecx + 0xC); /* 0x12034D4C: mov eax, dword ptr [ecx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x12034D4F: fsub dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034D52: fmulp st(1) */
    fp_push((double)(int32_t)MEM32(ecx + 0xC)); /* 0x12034D54: fild dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x12034D57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034D61; /* 0x12034D59: jns 0x12034d61 */
L_12034D5B:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034D5B: fadd dword ptr [0x120014d0] */
L_12034D61:
    eax = MEM32(ecx + 0x4); /* 0x12034D61: mov eax, dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034D64: fmulp st(1) */
    fp_push((double)(int32_t)MEM32(ecx + 0x4)); /* 0x12034D66: fild dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x12034D69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034D73; /* 0x12034D6B: jns 0x12034d73 */
L_12034D6D:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034D6D: fadd dword ptr [0x120014d0] */
L_12034D73:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12034D73: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12034D75: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x12034D78: fld dword ptr [ecx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x10); /* 0x12034D7B: fsub dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12034D7E: fmul dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x10); /* 0x12034D81: fadd dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x12034D84: fstp dword ptr [esi + 8] */
L_12034D87:
    ecx = MEM32(ebp + (-0x4)); /* 0x12034D87: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12034D8A: pop edi */
    eax = esi; /* 0x12034D8B: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12034D8D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12034D8F: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12034D90: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12034D95: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12034D97: pop ebp */
    esp = ebx; /* 0x12034D98: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x12034D9A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12034D9B: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12034C9Fu: goto L_12034C9F;
      case 0x12034CD5u: goto L_12034CD5;
      case 0x12034CD9u: goto L_12034CD9;
      case 0x12034CDDu: goto L_12034CDD;
      case 0x12034CE1u: goto L_12034CE1;
      case 0x12034CE5u: goto L_12034CE5;
      case 0x12034CE8u: goto L_12034CE8;
      case 0x12034D04u: goto L_12034D04;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12034DC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12034DC4u);

L_12034DC4:
    edi = edi; /* 0x12034DC4: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12034DC6: push ebx */
    ebx = esp; /* 0x12034DC7: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x12034DC9: push ecx */
    PUSH32(esp, ecx); /* 0x12034DCA: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x12034DCB: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12034DCE: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12034DD1: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12034DD2: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12034DD5: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x12034DD9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8u; /* 0x12034DDB: sub esp, 0xa8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12034DE1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12034DE6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12034DE8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x8); /* 0x12034DEB: mov eax, dword ptr [ebx + 8] */
    fp_push(0.0); /* 0x12034DEE: fldz  */
    edx = MEM32(ebx + 0x20); /* 0x12034DF0: mov edx, dword ptr [ebx + 0x20] */
    fp_push(1.0); /* 0x12034DF3: fld1  */
    MEM32(ebp + (-0x9C)) = eax; /* 0x12034DF5: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebx + 0xC); /* 0x12034DFB: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x12034DFE: mov dword ptr [ebp - 0xa4], eax */
    eax = MEM32(ebx + 0x10); /* 0x12034E04: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12034E07: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12034E09: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x12034E0A: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x98)) = eax; /* 0x12034E0D: mov dword ptr [ebp - 0x98], eax */
    eax = MEM32(ebx + 0x14); /* 0x12034E13: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x12034E16: push edi */
    edi = MEM32(ebx + 0x24); /* 0x12034E17: mov edi, dword ptr [ebx + 0x24] */
    /* test edi, edi */ /* 0x12034E1A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034E1C: setne cl */
    MEM32(ebp + (-0xA0)) = eax; /* 0x12034E1F: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebx + 0x18); /* 0x12034E25: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x94)) = eax; /* 0x12034E28: mov dword ptr [ebp - 0x94], eax */
    eax = MEM32(ebx + 0x28); /* 0x12034E2E: mov eax, dword ptr [ebx + 0x28] */
    MEM32(ebp + (-0xA8)) = eax; /* 0x12034E31: mov dword ptr [ebp - 0xa8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12034E37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12034E39: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x12034E3B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034E3D: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12034E40: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12034E42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12034E44: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x12034E46: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12034E48: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12034E4B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x12034E4D: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12034ECF; /* 0x12034E50: ja 0x12034ecf */
L_12034E52:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x12034FE4)); goto _ljump; }
L_12034E59:
    fp_xch(1); /* 0x12034E59: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12034E5B: fst dword ptr [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12034E5E: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12034E61: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12034E64: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12034E67: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12034E6A: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12034E6D: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12034E70: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x12034E73: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12034E76: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12034E79: fst dword ptr [ebp - 0x48] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12034E7C: fst dword ptr [ebp - 0x4c] */
    fp_xch(1); /* 0x12034E7F: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12034E81: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12034E84: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x12034E87: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12034E8A: fst dword ptr [ebp - 0x50] */
    goto L_12034ECF; /* 0x12034E8D: jmp 0x12034ecf */
L_12034E8F:
    ecx = esi; /* 0x12034E8F: mov ecx, esi */
    goto L_12034ED2; /* 0x12034E91: jmp 0x12034ed2 */
L_12034E93:
    ecx = edx; /* 0x12034E93: mov ecx, edx */
    goto L_12034ED2; /* 0x12034E95: jmp 0x12034ed2 */
L_12034E97:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034E97: fstp st(1) */
    PUSH32(esp, esi); /* 0x12034E99: push esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034E9A: fstp st(0) */
    PUSH32(esp, edx); /* 0x12034E9C: push edx */
    goto L_12034EC2; /* 0x12034E9D: jmp 0x12034ec2 */
L_12034E9F:
    ecx = edi; /* 0x12034E9F: mov ecx, edi */
    goto L_12034ED2; /* 0x12034EA1: jmp 0x12034ed2 */
L_12034EA3:
    PUSH32(esp, esi); /* 0x12034EA3: push esi */
L_12034EA4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034EA4: fstp st(1) */
    PUSH32(esp, edi); /* 0x12034EA6: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034EA7: fstp st(0) */
    goto L_12034EC2; /* 0x12034EA9: jmp 0x12034ec2 */
L_12034EAB:
    PUSH32(esp, edx); /* 0x12034EAB: push edx */
    RECOMP_BACKEDGE();
    goto L_12034EA4; /* 0x12034EAC: jmp 0x12034ea4 */
L_12034EAE:
    PUSH32(esp, edx); /* 0x12034EAE: push edx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034EAF: fstp st(1) */
    PUSH32(esp, edi); /* 0x12034EB1: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034EB2: fstp st(0) */
    eax = ebp + (-0x50); /* 0x12034EB4: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034EB7: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x12034EB8: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12034EBD: push esi */
    eax = ebp + (-0x50); /* 0x12034EBE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034EC1: push eax */
L_12034EC2:
    eax = ebp + (-0x50); /* 0x12034EC2: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12034EC5: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x12034EC6: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12034ECB: fldz  */
    fp_push(1.0); /* 0x12034ECD: fld1  */
L_12034ECF:
    ecx = ebp + (-0x50); /* 0x12034ECF: lea ecx, [ebp - 0x50] */
L_12034ED2:
    edx = MEM32(ebp + (-0x94)); /* 0x12034ED2: mov edx, dword ptr [ebp - 0x94] */
    /* test edx, edx */ /* 0x12034ED8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12034FA7; /* 0x12034EDA: je 0x12034fa7 */
L_12034EE0:
    eax = MEM32(edx + 0x8); /* 0x12034EE0: mov eax, dword ptr [edx + 8] */
    fp_push((double)(int32_t)MEM32(edx + 0x8)); /* 0x12034EE3: fild dword ptr [edx + 8] */
    /* test eax, eax */ /* 0x12034EE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034EF0; /* 0x12034EE8: jns 0x12034ef0 */
L_12034EEA:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034EEA: fadd dword ptr [0x120014d0] */
L_12034EF0:
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12034EF0: fld qword ptr [0x120014c0] */
    eax = MEM32(edx + 0xC); /* 0x12034EF6: mov eax, dword ptr [edx + 0xc] */
    _st[1] *= _st[0]; /* 0x12034EF9: fmul st(1), st(0) */
    fp_xch(1); /* 0x12034EFB: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x12034EFD: fst dword ptr [ebp - 0x90] */
    fp_xch(3); /* 0x12034F03: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x12034F05: fst dword ptr [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x12034F0B: fst dword ptr [ebp - 0x88] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x12034F11: fst dword ptr [ebp - 0x84] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x12034F17: fst dword ptr [ebp - 0x80] */
    fp_push((double)(int32_t)MEM32(edx + 0xC)); /* 0x12034F1A: fild dword ptr [edx + 0xc] */
    /* test eax, eax */ /* 0x12034F1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034F27; /* 0x12034F1F: jns 0x12034f27 */
L_12034F21:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034F21: fadd dword ptr [0x120014d0] */
L_12034F27:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x12034F27: fstp dword ptr [ebp - 0x94] */
    eax = MEM32(edx); /* 0x12034F2D: mov eax, dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x12034F2F: fld dword ptr [ebp - 0x94] */
    fp_push(*(double*)ADDR(0x12001A60)); /* 0x12034F35: fld qword ptr [0x12001a60] */
    _st[0] *= _st[1]; /* 0x12034F3B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x12034F3D: fstp dword ptr [ebp - 0x7c] */
    fp_xch(1); /* 0x12034F40: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12034F42: fst dword ptr [ebp - 0x78] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x12034F45: fst dword ptr [ebp - 0x74] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12034F48: fst dword ptr [ebp - 0x70] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12034F4B: fst dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x12034F4E: fld dword ptr [edx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x10); /* 0x12034F51: fsub dword ptr [edx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x12034F54: fstp dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x12034F57: fstp dword ptr [ebp - 0x64] */
    fp_push((double)(int32_t)MEM32(edx)); /* 0x12034F5A: fild dword ptr [edx] */
    /* test eax, eax */ /* 0x12034F5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034F66; /* 0x12034F5E: jns 0x12034f66 */
L_12034F60:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034F60: fadd dword ptr [0x120014d0] */
L_12034F66:
    eax = MEM32(edx + 0x4); /* 0x12034F66: mov eax, dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12034F69: faddp st(4) */
    fp_xch(3); /* 0x12034F6B: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x12034F6D: fstp dword ptr [ebp - 0x60] */
    fp_push((double)(int32_t)MEM32(edx + 0x4)); /* 0x12034F70: fild dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x12034F73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12034F7D; /* 0x12034F75: jns 0x12034f7d */
L_12034F77:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12034F77: fadd dword ptr [0x120014d0] */
L_12034F7D:
    fp_xch(3); /* 0x12034F7D: fxch st(3) */
    eax = ebp + (-0x90); /* 0x12034F7F: lea eax, [ebp - 0x90] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12034F85: fmulp st(1) */
    PUSH32(esp, eax); /* 0x12034F87: push eax */
    PUSH32(esp, ecx); /* 0x12034F88: push ecx */
    eax = ebp + (-0x50); /* 0x12034F89: lea eax, [ebp - 0x50] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12034F8C: faddp st(2) */
    PUSH32(esp, eax); /* 0x12034F8E: push eax */
    fp_xch(1); /* 0x12034F8F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x12034F91: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x12034F94: fld dword ptr [edx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12034F97: fstp dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x12034F9A: fstp dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_12030F00); /* 0x12034F9D: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x50); /* 0x12034FA2: lea ecx, [ebp - 0x50] */
    goto L_12034FAB; /* 0x12034FA5: jmp 0x12034fab */
L_12034FA7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12034FA7: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12034FA9: fstp st(0) */
L_12034FAB:
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x12034FAB: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, ecx); /* 0x12034FB1: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x12034FB2: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x12034FB8: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x12034FBE: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x12034FC4: push dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_12030584); /* 0x12034FCA: call 0x12030584 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12034FCF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12034FD2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12034FD3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12034FD5: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12034FD6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12034FDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12034FDD: pop ebp */
    esp = ebx; /* 0x12034FDE: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x12034FE0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x12034FE1: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12034E59u: goto L_12034E59;
      case 0x12034E8Fu: goto L_12034E8F;
      case 0x12034E93u: goto L_12034E93;
      case 0x12034E97u: goto L_12034E97;
      case 0x12034E9Fu: goto L_12034E9F;
      case 0x12034EA3u: goto L_12034EA3;
      case 0x12034EABu: goto L_12034EAB;
      case 0x12034EAEu: goto L_12034EAE;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12035009(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035009u);

L_12035009:
    edi = edi; /* 0x12035009: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1203500B: push ebx */
    ebx = esp; /* 0x1203500C: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1203500E: push ecx */
    PUSH32(esp, ecx); /* 0x1203500F: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x12035010: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12035013: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12035016: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12035017: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1203501A: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1203501E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x12035020: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12035023: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12035028: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1203502A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x8); /* 0x1203502D: mov eax, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x18); /* 0x12035030: mov edx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12035033: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12035035: push esi */
    esi = MEM32(ebx + 0x14); /* 0x12035036: mov esi, dword ptr [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x12035039: push edi */
    edi = MEM32(ebx + 0x1C); /* 0x1203503A: mov edi, dword ptr [ebx + 0x1c] */
    /* test edi, edi */ /* 0x1203503D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1203503F: setne cl */
    MEM32(ebp + (-0x58)) = eax; /* 0x12035042: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebx + 0xC); /* 0x12035045: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x54)) = eax; /* 0x12035048: mov dword ptr [ebp - 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1203504B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1203504D: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1203504F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12035051: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12035054: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035056: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12035058: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1203505A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1203505C: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1203505F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x12035061: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120350DF; /* 0x12035064: ja 0x120350df */
L_12035066:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1203519D)); goto _ljump; }
L_1203506D:
    fp_push(0.0); /* 0x1203506D: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1203506F: fst dword ptr [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12035072: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12035075: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12035078: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1203507B: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1203507E: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12035081: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12035084: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x12035087: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1203508A: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1203508D: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12035090: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x12035093: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12035095: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12035098: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1203509B: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1203509E: fstp dword ptr [ebp - 0x50] */
    goto L_120350DF; /* 0x120350A1: jmp 0x120350df */
L_120350A3:
    PUSH32(esp, esi); /* 0x120350A3: push esi */
    goto L_120350D4; /* 0x120350A4: jmp 0x120350d4 */
L_120350A6:
    PUSH32(esp, edx); /* 0x120350A6: push edx */
    goto L_120350D4; /* 0x120350A7: jmp 0x120350d4 */
L_120350A9:
    PUSH32(esp, esi); /* 0x120350A9: push esi */
    PUSH32(esp, edx); /* 0x120350AA: push edx */
    goto L_120350C7; /* 0x120350AB: jmp 0x120350c7 */
L_120350AD:
    PUSH32(esp, edi); /* 0x120350AD: push edi */
    goto L_120350D4; /* 0x120350AE: jmp 0x120350d4 */
L_120350B0:
    PUSH32(esp, esi); /* 0x120350B0: push esi */
L_120350B1:
    PUSH32(esp, edi); /* 0x120350B1: push edi */
    goto L_120350C7; /* 0x120350B2: jmp 0x120350c7 */
L_120350B4:
    PUSH32(esp, edx); /* 0x120350B4: push edx */
    RECOMP_BACKEDGE();
    goto L_120350B1; /* 0x120350B5: jmp 0x120350b1 */
L_120350B7:
    PUSH32(esp, edx); /* 0x120350B7: push edx */
    PUSH32(esp, edi); /* 0x120350B8: push edi */
    eax = ebp + (-0x50); /* 0x120350B9: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120350BC: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x120350BD: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120350C2: push esi */
    eax = ebp + (-0x50); /* 0x120350C3: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120350C6: push eax */
L_120350C7:
    eax = ebp + (-0x50); /* 0x120350C7: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120350CA: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x120350CB: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x120350D0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120350D3: push eax */
L_120350D4:
    PUSH32(esp, 0); /* 0x120350D4: push 0 */
    eax = ebp + (-0x50); /* 0x120350D6: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120350D9: push eax */
    RECOMP_CALL(sub_120314A5); /* 0x120350DA: call 0x120314a5 */
    RECOMP_FLAGS_IN();
L_120350DF:
    edx = MEM32(ebx + 0x10); /* 0x120350DF: mov edx, dword ptr [ebx + 0x10] */
    /* test edx, edx */ /* 0x120350E2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12035175; /* 0x120350E4: je 0x12035175 */
L_120350EA:
    esi = MEM32(ebp + (-0x54)); /* 0x120350EA: mov esi, dword ptr [ebp - 0x54] */
    eax = MEM32(edx); /* 0x120350ED: mov eax, dword ptr [edx] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120350EF: fld dword ptr [esi] */
    fp_push((double)(int32_t)MEM32(edx)); /* 0x120350F1: fild dword ptr [edx] */
    /* test eax, eax */ /* 0x120350F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120350FD; /* 0x120350F5: jns 0x120350fd */
L_120350F7:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120350F7: fadd dword ptr [0x120014d0] */
L_120350FD:
    eax = MEM32(edx + 0x8); /* 0x120350FD: mov eax, dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12035100: fsubp st(1) */
    fp_push((double)(int32_t)MEM32(edx + 0x8)); /* 0x12035102: fild dword ptr [edx + 8] */
    /* test eax, eax */ /* 0x12035105: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1203510F; /* 0x12035107: jns 0x1203510f */
L_12035109:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035109: fadd dword ptr [0x120014d0] */
L_1203510F:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1203510F: fdivp st(1) */
    ecx = MEM32(ebp + (-0x58)); /* 0x12035111: mov ecx, dword ptr [ebp - 0x58] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12035114: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x1203511A: fmul st(1), st(0) */
    fp_push(1.0); /* 0x1203511C: fld1  */
    _st[2] -= _st[0]; /* 0x1203511E: fsub st(2), st(0) */
    fp_xch(2); /* 0x12035120: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x12035122: fstp dword ptr [ecx] */
    eax = MEM32(edx + 0x4); /* 0x12035124: mov eax, dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12035127: fld dword ptr [esi + 4] */
    fp_push((double)(int32_t)MEM32(edx + 0x4)); /* 0x1203512A: fild dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x1203512D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12035137; /* 0x1203512F: jns 0x12035137 */
L_12035131:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035131: fadd dword ptr [0x120014d0] */
L_12035137:
    eax = MEM32(edx + 0xC); /* 0x12035137: mov eax, dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203513A: fsubp st(1) */
    fp_push((double)(int32_t)MEM32(edx + 0xC)); /* 0x1203513C: fild dword ptr [edx + 0xc] */
    /* test eax, eax */ /* 0x1203513F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12035149; /* 0x12035141: jns 0x12035149 */
L_12035143:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035143: fadd dword ptr [0x120014d0] */
L_12035149:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12035149: fdivp st(1) */
    eax = ebp + (-0x50); /* 0x1203514B: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1203514E: push eax */
    PUSH32(esp, ecx); /* 0x1203514F: push ecx */
    PUSH32(esp, ecx); /* 0x12035150: push ecx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035151: fmulp st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12035153: fsubrp st(1) */
    _st[0] = -_st[0]; /* 0x12035155: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x12035157: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1203515A: fld dword ptr [esi + 8] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x10); /* 0x1203515D: fsub dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x12035160: fld dword ptr [edx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x10); /* 0x12035163: fsub dword ptr [edx + 0x10] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12035166: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x12035168: fstp dword ptr [ecx + 8] */
    RECOMP_CALL(sub_12030561); /* 0x1203516B: call 0x12030561 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x58)); /* 0x12035170: mov esi, dword ptr [ebp - 0x58] */
    goto L_12035185; /* 0x12035173: jmp 0x12035185 */
L_12035175:
    esi = MEM32(ebp + (-0x58)); /* 0x12035175: mov esi, dword ptr [ebp - 0x58] */
    eax = ebp + (-0x50); /* 0x12035178: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1203517B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1203517C: push dword ptr [ebp - 0x54] */
    PUSH32(esp, esi); /* 0x1203517F: push esi */
    RECOMP_CALL(sub_12030561); /* 0x12035180: call 0x12030561 */
    RECOMP_FLAGS_IN();
L_12035185:
    ecx = MEM32(ebp + (-0x4)); /* 0x12035185: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12035188: pop edi */
    eax = esi; /* 0x12035189: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1203518B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1203518D: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x1203518E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12035193: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12035195: pop ebp */
    esp = ebx; /* 0x12035196: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x12035198: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12035199: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1203506Du: goto L_1203506D;
      case 0x120350A3u: goto L_120350A3;
      case 0x120350A6u: goto L_120350A6;
      case 0x120350A9u: goto L_120350A9;
      case 0x120350ADu: goto L_120350AD;
      case 0x120350B0u: goto L_120350B0;
      case 0x120350B4u: goto L_120350B4;
      case 0x120350B7u: goto L_120350B7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120351C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120351C2u);

L_120351C2:
    edi = edi; /* 0x120351C2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x120351C4: push ebx */
    ebx = esp; /* 0x120351C5: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x120351C7: push ecx */
    PUSH32(esp, ecx); /* 0x120351C8: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x120351C9: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x120351CC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x120351CF: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x120351D0: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x120351D3: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x120351D7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x120351D9: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120351DF: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120351E4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120351E6: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x8); /* 0x120351E9: mov eax, dword ptr [ebx + 8] */
    fp_push(0.0); /* 0x120351EC: fldz  */
    edx = MEM32(ebx + 0x20); /* 0x120351EE: mov edx, dword ptr [ebx + 0x20] */
    fp_push(1.0); /* 0x120351F1: fld1  */
    MEM32(ebp + (-0xA0)) = eax; /* 0x120351F3: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebx + 0xC); /* 0x120351F9: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0xAC)) = eax; /* 0x120351FC: mov dword ptr [ebp - 0xac], eax */
    eax = MEM32(ebx + 0x10); /* 0x12035202: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12035205: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12035207: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x12035208: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x1203520B: mov dword ptr [ebp - 0xa4], eax */
    eax = MEM32(ebx + 0x14); /* 0x12035211: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x12035214: push edi */
    edi = MEM32(ebx + 0x24); /* 0x12035215: mov edi, dword ptr [ebx + 0x24] */
    /* test edi, edi */ /* 0x12035218: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1203521A: setne cl */
    MEM32(ebp + (-0x9C)) = eax; /* 0x1203521D: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebx + 0x18); /* 0x12035223: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x98)) = eax; /* 0x12035226: mov dword ptr [ebp - 0x98], eax */
    eax = MEM32(ebx + 0x28); /* 0x1203522C: mov eax, dword ptr [ebx + 0x28] */
    MEM32(ebp + (-0xA8)) = eax; /* 0x1203522F: mov dword ptr [ebp - 0xa8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035235: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12035237: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x12035239: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1203523B: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1203523E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035240: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12035242: add ecx, ecx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x12035244: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12035246: setne al */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12035249: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 7 */ /* 0x1203524B: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120352E9; /* 0x1203524E: ja 0x120352e9 */
L_12035254:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x12035426)); goto _ljump; }
L_1203525B:
    fp_xch(1); /* 0x1203525B: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1203525D: fst dword ptr [ebp - 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12035260: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12035263: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12035266: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12035269: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1203526C: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1203526F: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12035272: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x12035275: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12035278: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1203527B: fst dword ptr [ebp - 0x48] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1203527E: fst dword ptr [ebp - 0x4c] */
    fp_xch(1); /* 0x12035281: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12035283: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12035286: fst dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x12035289: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1203528C: fst dword ptr [ebp - 0x50] */
    goto L_120352E9; /* 0x1203528F: jmp 0x120352e9 */
L_12035291:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12035291: fstp st(1) */
    PUSH32(esp, esi); /* 0x12035293: push esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12035294: fstp st(0) */
    goto L_120352DA; /* 0x12035296: jmp 0x120352da */
L_12035298:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12035298: fstp st(1) */
    PUSH32(esp, edx); /* 0x1203529A: push edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1203529B: fstp st(0) */
    goto L_120352DA; /* 0x1203529D: jmp 0x120352da */
L_1203529F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1203529F: fstp st(1) */
    PUSH32(esp, esi); /* 0x120352A1: push esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120352A2: fstp st(0) */
    PUSH32(esp, edx); /* 0x120352A4: push edx */
    goto L_120352CD; /* 0x120352A5: jmp 0x120352cd */
L_120352A7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120352A7: fstp st(1) */
    PUSH32(esp, edi); /* 0x120352A9: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120352AA: fstp st(0) */
    goto L_120352DA; /* 0x120352AC: jmp 0x120352da */
L_120352AE:
    PUSH32(esp, esi); /* 0x120352AE: push esi */
L_120352AF:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120352AF: fstp st(1) */
    PUSH32(esp, edi); /* 0x120352B1: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120352B2: fstp st(0) */
    goto L_120352CD; /* 0x120352B4: jmp 0x120352cd */
L_120352B6:
    PUSH32(esp, edx); /* 0x120352B6: push edx */
    RECOMP_BACKEDGE();
    goto L_120352AF; /* 0x120352B7: jmp 0x120352af */
L_120352B9:
    PUSH32(esp, edx); /* 0x120352B9: push edx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120352BA: fstp st(1) */
    PUSH32(esp, edi); /* 0x120352BC: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120352BD: fstp st(0) */
    eax = ebp + (-0x50); /* 0x120352BF: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120352C2: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x120352C3: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120352C8: push esi */
    eax = ebp + (-0x50); /* 0x120352C9: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120352CC: push eax */
L_120352CD:
    eax = ebp + (-0x50); /* 0x120352CD: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120352D0: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x120352D1: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x120352D6: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120352D9: push eax */
L_120352DA:
    PUSH32(esp, 0); /* 0x120352DA: push 0 */
    eax = ebp + (-0x50); /* 0x120352DC: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120352DF: push eax */
    RECOMP_CALL(sub_120314A5); /* 0x120352E0: call 0x120314a5 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x120352E5: fldz  */
    fp_push(1.0); /* 0x120352E7: fld1  */
L_120352E9:
    ecx = MEM32(ebp + (-0x98)); /* 0x120352E9: mov ecx, dword ptr [ebp - 0x98] */
    /* test ecx, ecx */ /* 0x120352EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120353E6; /* 0x120352F1: je 0x120353e6 */
L_120352F7:
    eax = MEM32(ecx + 0x8); /* 0x120352F7: mov eax, dword ptr [ecx + 8] */
    fp_push((double)(int32_t)MEM32(ecx + 0x8)); /* 0x120352FA: fild dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x120352FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12035307; /* 0x120352FF: jns 0x12035307 */
L_12035301:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035301: fadd dword ptr [0x120014d0] */
L_12035307:
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12035307: fld qword ptr [0x12001758] */
    eax = MEM32(ecx + 0xC); /* 0x1203530D: mov eax, dword ptr [ecx + 0xc] */
    fp_push(_st[0]); /* 0x12035310: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12035312: fdivrp st(2) */
    fp_xch(1); /* 0x12035314: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x12035316: fstp dword ptr [ebp - 0x98] */
    fp_push((double)(int32_t)MEM32(ecx + 0xC)); /* 0x1203531C: fild dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x1203531F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12035329; /* 0x12035321: jns 0x12035329 */
L_12035323:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035323: fadd dword ptr [0x120014d0] */
L_12035329:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12035329: fdivp st(1) */
    eax = MEM32(ecx); /* 0x1203532B: mov eax, dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1203532D: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x12035333: fld dword ptr [ecx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x10); /* 0x12035336: fsub dword ptr [ecx + 0x10] */
    fp_push(1.0); /* 0x12035339: fld1  */
    fp_push(_st[0]); /* 0x1203533B: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1203533D: fdivrp st(2) */
    fp_xch(1); /* 0x1203533F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x12035341: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x12035347: fld dword ptr [ebp - 0x98] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1203534D: fst dword ptr [ebp - 0x90] */
    fp_xch(3); /* 0x12035353: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x12035355: fst dword ptr [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x1203535B: fst dword ptr [ebp - 0x88] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x12035361: fst dword ptr [ebp - 0x84] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x12035367: fst dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x1203536A: fld dword ptr [ebp - 0xb0] */
    fp_push(_st[0]); /* 0x12035370: fld st(0) */
    _st[0] = -_st[0]; /* 0x12035372: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x12035374: fstp dword ptr [ebp - 0x7c] */
    fp_xch(1); /* 0x12035377: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12035379: fst dword ptr [ebp - 0x78] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1203537C: fst dword ptr [ebp - 0x74] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x1203537F: fst dword ptr [ebp - 0x70] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035382: fst dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x12035385: fld dword ptr [ebp - 0x94] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x1203538B: fst dword ptr [ebp - 0x68] */
    fp_xch(1); /* 0x1203538E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x12035390: fstp dword ptr [ebp - 0x64] */
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x12035393: fild dword ptr [ecx] */
    /* test eax, eax */ /* 0x12035395: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1203539F; /* 0x12035397: jns 0x1203539f */
L_12035399:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x12035399: fadd dword ptr [0x120014d0] */
L_1203539F:
    eax = MEM32(ecx + 0x4); /* 0x1203539F: mov eax, dword ptr [ecx + 4] */
    _st[0] = -_st[0]; /* 0x120353A2: fchs  */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120353A4: fmulp st(5) */
    fp_xch(4); /* 0x120353A6: fxch st(4) */
    _st[0] -= _st[2]; /* 0x120353A8: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x120353AA: fstp dword ptr [ebp - 0x60] */
    fp_push((double)(int32_t)MEM32(ecx + 0x4)); /* 0x120353AD: fild dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x120353B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120353BA; /* 0x120353B2: jns 0x120353ba */
L_120353B4:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120353B4: fadd dword ptr [0x120014d0] */
L_120353BA:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120353BA: fmulp st(1) */
    eax = ebp + (-0x50); /* 0x120353BC: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120353BF: push eax */
    eax = ebp + (-0x90); /* 0x120353C0: lea eax, [ebp - 0x90] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120353C6: faddp st(1) */
    PUSH32(esp, eax); /* 0x120353C8: push eax */
    eax = ebp + (-0x50); /* 0x120353C9: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120353CC: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120353CD: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x120353D0: fld dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x120353D3: fchs  */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120353D5: fmulp st(2) */
    fp_xch(1); /* 0x120353D7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120353D9: fstp dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120353DC: fstp dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_12030F00); /* 0x120353DF: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    goto L_120353EA; /* 0x120353E4: jmp 0x120353ea */
L_120353E6:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120353E6: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120353E8: fstp st(0) */
L_120353EA:
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x120353EA: push dword ptr [ebp - 0xa8] */
    eax = ebp + (-0x50); /* 0x120353F0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120353F3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x120353F4: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x120353FA: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x12035400: push dword ptr [ebp - 0xac] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x12035406: push dword ptr [ebp - 0xa0] */
    RECOMP_CALL(sub_12030584); /* 0x1203540C: call 0x12030584 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12035411: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12035414: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12035415: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12035417: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12035418: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1203541D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1203541F: pop ebp */
    esp = ebx; /* 0x12035420: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x12035422: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x12035423: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1203525Bu: goto L_1203525B;
      case 0x12035291u: goto L_12035291;
      case 0x12035298u: goto L_12035298;
      case 0x1203529Fu: goto L_1203529F;
      case 0x120352A7u: goto L_120352A7;
      case 0x120352AEu: goto L_120352AE;
      case 0x120352B6u: goto L_120352B6;
      case 0x120352B9u: goto L_120352B9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203544B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203544Bu);

L_1203544B:
    edi = edi; /* 0x1203544B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203544D: push ebp */
    ebp = esp; /* 0x1203544E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x12035450: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12035456: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1203545B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1203545D: mov dword ptr [ebp - 4], eax */
    fp_push(1.0); /* 0x12035460: fld1  */
    PUSH32(esp, ebx); /* 0x12035462: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x12035463: fst dword ptr [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x12035466: push esi */
    fp_push(0.0); /* 0x12035467: fldz  */
    PUSH32(esp, edi); /* 0x12035469: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x1203546A: fst dword ptr [ebp - 0x7c] */
    eax = MEM32(ebp + 0xC); /* 0x1203546D: mov eax, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12035470: fst dword ptr [ebp - 0x78] */
    ecx = MEM32(ebp + 0x10); /* 0x12035473: mov ecx, dword ptr [ebp + 0x10] */
    esi = ebp + (-0x80); /* 0x12035476: lea esi, [ebp - 0x80] */
    edi = ebp + (-0x28); /* 0x12035479: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203547C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203547D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203547E: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x1203547F: fst dword ptr [ebp - 0x80] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x12035482: fst dword ptr [ebp - 0x78] */
    fp_xch(1); /* 0x12035485: fxch st(1) */
    esi = ebp + (-0x80); /* 0x12035487: lea esi, [ebp - 0x80] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x1203548A: fst dword ptr [ebp - 0x7c] */
    edi = ebp + (-0x1C); /* 0x1203548D: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035490: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_xch(1); /* 0x12035491: fxch st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035493: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035494: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x12035495: fst dword ptr [ebp - 0x80] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x12035498: fst dword ptr [ebp - 0x7c] */
    fp_xch(1); /* 0x1203549B: fxch st(1) */
    MEM32(ebp + (-0xA0)) = eax; /* 0x1203549D: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebp + 0x14); /* 0x120354A3: mov eax, dword ptr [ebp + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120354A6: fst dword ptr [ebp - 0x78] */
    esi = ebp + (-0x80); /* 0x120354A9: lea esi, [ebp - 0x80] */
    edi = ebp + (-0x10); /* 0x120354AC: lea edi, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x120354AF: fld dword ptr [eax + 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354B2: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120354B3: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x120354B5: fld dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x120354B8: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x120354BB: fld dword ptr [eax + 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354BE: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x120354BF: fstp dword ptr [ecx + 8] */
    fp_xch(1); /* 0x120354C2: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120354C4: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120354C7: fst dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354CA: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x120354CB: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120354CE: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120354D1: fst dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120354D4: fstp dword ptr [ebp - 0x5c] */
    esi = eax; /* 0x120354D7: mov esi, eax */
    edi = ebp + (-0x68); /* 0x120354D9: lea edi, [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120354DC: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354E1: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + 0x10; /* 0x120354E2: lea esi, [eax + 0x10] */
    edi = ebp + (-0x58); /* 0x120354E5: lea edi, [ebp - 0x58] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354E8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354E9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354EA: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + 0x8); /* 0x120354EB: mov ebx, dword ptr [ebp + 8] */
    esi = eax + 0x20; /* 0x120354EE: lea esi, [eax + 0x20] */
    edi = ebp + (-0x48); /* 0x120354F1: lea edi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354F5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120354F6: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120354F7: fld dword ptr [ebp - 0x64] */
    _st[0] *= _st[0]; /* 0x120354FA: fmul st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120354FC: fld dword ptr [ebp - 0x68] */
    ecx = ebp + (-0x68); /* 0x120354FF: lea ecx, [ebp - 0x68] */
    _st[0] *= _st[0]; /* 0x12035502: fmul st(0), st(0) */
    MEM32(ebp + (-0x80)) = ecx; /* 0x12035504: mov dword ptr [ebp - 0x80], ecx */
    ecx = ebp + (-0x58); /* 0x12035507: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x1203550A: mov dword ptr [ebp - 0x7c], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203550D: faddp st(1) */
    ecx = ebp + (-0x48); /* 0x1203550F: lea ecx, [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x12035512: fld dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x94)) = ebx; /* 0x12035515: mov dword ptr [ebp - 0x94], ebx */
    _st[0] *= _st[0]; /* 0x1203551B: fmul st(0), st(0) */
    MEM32(ebp + (-0x78)) = ecx; /* 0x1203551D: mov dword ptr [ebp - 0x78], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035520: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x12035522: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12035525: fld dword ptr [ebp - 0x74] */
    RECOMP_CALL(sub_121BF44C); /* 0x12035528: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x1203552D: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12035530: fld dword ptr [ebp - 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x12035533: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x12035535: fld dword ptr [ebp - 0x54] */
    _st[0] *= _st[0]; /* 0x12035538: fmul st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1203553A: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x1203553D: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203553F: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x12035541: fld dword ptr [ebp - 0x50] */
    _st[0] *= _st[0]; /* 0x12035544: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035546: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x12035548: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x1203554B: fld dword ptr [ebp - 0x74] */
    RECOMP_CALL(sub_121BF44C); /* 0x1203554E: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035553: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035556: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x12035559: fstp dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1203555C: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[0]; /* 0x1203555F: fmul st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x12035561: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[0]; /* 0x12035564: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035566: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x12035568: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[0]; /* 0x1203556B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203556D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1203556F: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12035572: fld dword ptr [ebp - 0x74] */
    RECOMP_CALL(sub_121BF44C); /* 0x12035575: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1203557A: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x1203557D: fld dword ptr [ebp - 0x74] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x8) = _v; } /* 0x12035580: fst dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12035583: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12035585: fld dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035588: fld dword ptr [ebp - 0x6c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203558B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203558D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1203558F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120355D1; /* 0x12035592: jne 0x120355d1 */
L_12035594:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12035594: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035596: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12035598: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120355AD; /* 0x1203559B: jp 0x120355ad */
L_1203559D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1203559D: fstp st(1) */
    PUSH32(esp, 2); /* 0x1203559F: push 2 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120355A1: fstp st(0) */
    ecx = POP32_VAL(esp); /* 0x120355A3: pop ecx */
    MEM32(ebp + (-0x6C)) = 1; /* 0x120355A4: mov dword ptr [ebp - 0x6c], 1 */
    goto L_120355C0; /* 0x120355AB: jmp 0x120355c0 */
L_120355AD:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120355AD: fcompp  */
    fp_pop(); fp_pop();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120355AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120355B1: inc ecx */
    _flag_k = FK_INC;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120355B2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120355B4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120355C5; /* 0x120355B7: jp 0x120355c5 */
L_120355B9:
    MEM32(ebp + (-0x6C)) = 2; /* 0x120355B9: mov dword ptr [ebp - 0x6c], 2 */
L_120355C0:
    MEM32(ebp + (-0x70)) = ebx; /* 0x120355C0: mov dword ptr [ebp - 0x70], ebx */
    goto L_12035606; /* 0x120355C3: jmp 0x12035606 */
L_120355C5:
    MEM32(ebp + (-0x6C)) = ebx; /* 0x120355C5: mov dword ptr [ebp - 0x6c], ebx */
    MEM32(ebp + (-0x70)) = 2; /* 0x120355C8: mov dword ptr [ebp - 0x70], 2 */
    goto L_12035606; /* 0x120355CF: jmp 0x12035606 */
L_120355D1:
    fp_xch(1); /* 0x120355D1: fxch st(1) */
    PUSH32(esp, 2); /* 0x120355D3: push 2 */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120355D5: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120355D7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120355D9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120355EB; /* 0x120355DC: jp 0x120355eb */
L_120355DE:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120355DE: fstp st(1) */
    ecx = POP32_VAL(esp); /* 0x120355E0: pop ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120355E1: fstp st(0) */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x120355E3: mov dword ptr [ebp - 0x6c], ebx */
L_120355E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120355E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120355E8: inc eax */
    _flag_k = FK_INC;
    goto L_12035603; /* 0x120355E9: jmp 0x12035603 */
L_120355EB:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120355EB: fcompp  */
    fp_pop(); fp_pop();
    ecx = ebx; /* 0x120355ED: mov ecx, ebx */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120355EF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120355F1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120355FC; /* 0x120355F4: jp 0x120355fc */
L_120355F6:
    eax = POP32_VAL(esp); /* 0x120355F6: pop eax */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120355F7: mov dword ptr [ebp - 0x6c], eax */
    RECOMP_BACKEDGE();
    goto L_120355E6; /* 0x120355FA: jmp 0x120355e6 */
L_120355FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120355FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120355FE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x6C)) = eax; /* 0x120355FF: mov dword ptr [ebp - 0x6c], eax */
    eax = POP32_VAL(esp); /* 0x12035602: pop eax */
L_12035603:
    MEM32(ebp + (-0x70)) = eax; /* 0x12035603: mov dword ptr [ebp - 0x70], eax */
L_12035606:
    eax = MEM32(ebp + (-0x94)); /* 0x12035606: mov eax, dword ptr [ebp - 0x94] */
    edx = ecx; /* 0x1203560C: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1203560E: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1203560E: shl edx, 2 */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x12035611: fld dword ptr [eax + edx] */
    MEM32(ebp + (-0x84)) = edx; /* 0x12035614: mov dword ptr [ebp - 0x84], edx */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1203561A: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035620: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12035622: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12035635; /* 0x12035625: jp 0x12035635 */
L_12035627:
    edi = MEM32(ebp + edx + (-0x80)); /* 0x12035627: mov edi, dword ptr [ebp + edx - 0x80] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1203562B: imul ecx, ecx, 0xc */
    esi = ebp + ecx + (-0x28); /* 0x1203562E: lea esi, [ebp + ecx - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035632: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035633: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035634: movsd dword ptr es:[edi], dword ptr [esi] */
L_12035635:
    esi = MEM32(ebp + edx + (-0x80)); /* 0x12035635: mov esi, dword ptr [ebp + edx - 0x80] */
    PUSH32(esp, esi); /* 0x12035639: push esi */
    PUSH32(esp, esi); /* 0x1203563A: push esi */
    MEM32(ebp + (-0x74)) = esi; /* 0x1203563B: mov dword ptr [ebp - 0x74], esi */
    RECOMP_CALL(sub_120301D9); /* 0x1203563E: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x94)); /* 0x12035643: mov eax, dword ptr [ebp - 0x94] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x12035649: mov ecx, dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(eax + ecx * 4)); /* 0x1203564C: fld dword ptr [eax + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x1203564F: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035655: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12035657: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12035729; /* 0x1203565A: jp 0x12035729 */
L_12035660:
    fp_push(*(float*)&MEM32(esi)); /* 0x12035660: fld dword ptr [esi] */
    _st[0] = fabs(_st[0]); /* 0x12035662: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035664: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035667: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1203566A: fstp dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12035670: fld dword ptr [esi + 4] */
    _st[0] = fabs(_st[0]); /* 0x12035673: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035675: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035678: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x1203567B: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12035681: fld dword ptr [esi + 8] */
    _st[0] = fabs(_st[0]); /* 0x12035684: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035686: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035689: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x1203568C: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1203568F: fld dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x12035695: fld dword ptr [ebp - 0x98] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203569B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203569D: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x1203569F: fld dword ptr [ebp - 0x6c] */
    /* test HI8(eax), 0x41u */ /* 0x120356A2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120356C0; /* 0x120356A5: jne 0x120356c0 */
L_120356A7:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120356A7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120356A9: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120356AB: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120356AD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120356D2; /* 0x120356B0: je 0x120356d2 */
L_120356B2:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120356B2: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120356B4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120356B6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120356D6; /* 0x120356B9: je 0x120356d6 */
L_120356BB:
    PUSH32(esp, 2); /* 0x120356BB: push 2 */
    ebx = POP32_VAL(esp); /* 0x120356BD: pop ebx */
    goto L_120356D6; /* 0x120356BE: jmp 0x120356d6 */
L_120356C0:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120356C0: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120356C2: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120356C4: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x120356C6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203582C; /* 0x120356C9: jne 0x1203582c */
L_120356CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120356CF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120356D1: inc ebx */
    _flag_k = FK_INC;
L_120356D2:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120356D2: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120356D4: fstp st(0) */
L_120356D6:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120356D6: fld dword ptr [esi + 4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x120356D9: imul ebx, ebx, 0xc */
    edi = MEM32(ebp + ecx * 4 + (-0x80)); /* 0x120356DC: mov edi, dword ptr [ebp + ecx*4 - 0x80] */
    _st[0] *= (double)*(float*)ADDR(ebp + ebx + (-0x20)); /* 0x120356E0: fmul dword ptr [ebp + ebx - 0x20] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120356E4: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + ebx + (-0x24)); /* 0x120356E7: fmul dword ptr [ebp + ebx - 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120356EB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120356ED: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + ebx + (-0x28))); /* 0x120356F3: fld dword ptr [ebp + ebx - 0x28] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x120356F7: fmul dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120356FA: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + ebx + (-0x20)); /* 0x120356FC: fmul dword ptr [ebp + ebx - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12035700: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x12035702: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12035708: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + ebx + (-0x24)); /* 0x1203570A: fmul dword ptr [ebp + ebx - 0x24] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203570E: fld dword ptr [esi + 4] */
    esi = ebp + (-0x90); /* 0x12035711: lea esi, [ebp - 0x90] */
    _st[0] *= (double)*(float*)ADDR(ebp + ebx + (-0x28)); /* 0x12035717: fmul dword ptr [ebp + ebx - 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203571B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x1203571D: fstp dword ptr [ebp - 0x88] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035723: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035724: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035725: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x74)); /* 0x12035726: mov esi, dword ptr [ebp - 0x74] */
L_12035729:
    edi = MEM32(ebp + ecx * 4 + (-0x80)); /* 0x12035729: mov edi, dword ptr [ebp + ecx*4 - 0x80] */
    PUSH32(esp, edi); /* 0x1203572D: push edi */
    PUSH32(esp, edi); /* 0x1203572E: push edi */
    RECOMP_CALL(sub_120301D9); /* 0x1203572F: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x70)); /* 0x12035734: mov ecx, dword ptr [ebp - 0x70] */
    ebx = MEM32(ebp + (-0x94)); /* 0x12035737: mov ebx, dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1203573D: fld dword ptr [ebx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x12035740: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035746: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12035748: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12035792; /* 0x1203574B: jp 0x12035792 */
L_1203574D:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203574D: fld dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x12035750: fmul dword ptr [edi + 8] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12035753: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x12035756: fmul dword ptr [edi + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12035759: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1203575B: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(edi)); /* 0x12035761: fld dword ptr [edi] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x12035763: fmul dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12035766: fld dword ptr [edi + 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x12035769: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203576B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1203576D: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12035773: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x12035775: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12035778: fld dword ptr [esi + 4] */
    esi = ebp + (-0x90); /* 0x1203577B: lea esi, [ebp - 0x90] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x12035781: fmul dword ptr [edi] */
    edi = MEM32(ebp + ecx * 4 + (-0x80)); /* 0x12035783: mov edi, dword ptr [ebp + ecx*4 - 0x80] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12035787: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x12035789: fstp dword ptr [ebp - 0x88] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203578F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035790: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035791: movsd dword ptr es:[edi], dword ptr [esi] */
L_12035792:
    PUSH32(esp, MEM32(ebp + ecx * 4 + (-0x80))); /* 0x12035792: push dword ptr [ebp + ecx*4 - 0x80] */
    PUSH32(esp, MEM32(ebp + ecx * 4 + (-0x80))); /* 0x12035796: push dword ptr [ebp + ecx*4 - 0x80] */
    RECOMP_CALL(sub_120301D9); /* 0x1203579A: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x1203579F: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x120357A2: push eax */
    RECOMP_CALL(sub_12030DE1); /* 0x120357A3: call 0x12030de1 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x120357A8: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x120357AB: fld dword ptr [ebp - 0x70] */
    fp_push(0.0); /* 0x120357AE: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120357B0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120357B2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120357B4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120357FB; /* 0x120357B7: jne 0x120357fb */
L_120357B9:
    eax = MEM32(ebp + (-0x84)); /* 0x120357B9: mov eax, dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebx + eax)); /* 0x120357BF: fld dword ptr [ebx + eax] */
    edi = MEM32(ebp + (-0x74)); /* 0x120357C2: mov edi, dword ptr [ebp - 0x74] */
    _st[0] = -_st[0]; /* 0x120357C5: fchs  */
    esi = ebp + (-0x90); /* 0x120357C7: lea esi, [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax) = _v; } /* 0x120357CD: fstp dword ptr [ebx + eax] */
    fp_push(*(float*)&MEM32(edi)); /* 0x120357D0: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x120357D2: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120357D4: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120357DA: fld dword ptr [edi + 4] */
    _st[0] = -_st[0]; /* 0x120357DD: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120357DF: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x120357E5: fld dword ptr [edi + 8] */
    _st[0] = -_st[0]; /* 0x120357E8: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120357EA: fstp dword ptr [ebp - 0x88] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120357F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120357F1: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] = -_st[0]; /* 0x120357F2: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x120357F4: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x120357F7: fld dword ptr [ebp - 0x70] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120357FA: movsd dword ptr es:[edi], dword ptr [esi] */
L_120357FB:
    _st[0] -= *(double*)ADDR(0x120014E0); /* 0x120357FB: fsub qword ptr [0x120014e0] */
    edi = POP32_VAL(esp); /* 0x12035801: pop edi */
    esi = POP32_VAL(esp); /* 0x12035802: pop esi */
    ebx = POP32_VAL(esp); /* 0x12035803: pop ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12035804: fstp dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12035807: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[0]; /* 0x1203580A: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x1203580C: fstp dword ptr [ebp - 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x12035812: fld dword ptr [ebp - 0x84] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12002058)); /* 0x12035818: fcomp qword ptr [0x12002058] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203581E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12035820: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12035841; /* 0x12035823: jne 0x12035841 */
L_12035825:
    eax = 0x8876086Cu; /* 0x12035825: mov eax, 0x8876086c */
    goto L_12035852; /* 0x1203582A: jmp 0x12035852 */
L_1203582C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203582C: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203582E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12035830: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120356BB; /* 0x12035833: jp 0x120356bb */
L_12035839:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12035839: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1203583B: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120356D6; /* 0x1203583C: jmp 0x120356d6 */
L_12035841:
    eax = ebp + (-0x68); /* 0x12035841: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x12035844: push eax */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x12035845: push dword ptr [ebp - 0xa0] */
    RECOMP_CALL(sub_12033108); /* 0x1203584B: call 0x12033108 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035850: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12035852:
    ecx = MEM32(ebp + (-0x4)); /* 0x12035852: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12035855: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12035857: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203585C: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1203585D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12035865(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035865u);

L_12035865:
    edi = edi; /* 0x12035865: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035867: push ebp */
    ebp = esp; /* 0x12035868: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1203586A: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1203586D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12035870: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x12035873: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x10); /* 0x12035877: lea eax, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1203587A: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1203587D: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12035881: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12035884: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x12035887: push eax */
    RECOMP_CALL(sub_12033389); /* 0x12035888: call 0x12033389 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1203588D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12035890: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12035891: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12031D8B); /* 0x12035894: call 0x12031d8b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12035899: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203589C: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1203589D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120358A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120358A5u);

L_120358A5:
    edi = edi; /* 0x120358A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120358A7: push ebp */
    ebp = esp; /* 0x120358A8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120358AA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120358AD: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x10); /* 0x120358B0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120358B3: push eax */
    RECOMP_CALL(sub_12033BC8); /* 0x120358B4: call 0x12033bc8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120358B9: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120358BC: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x120358BE: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120358C1: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x120358C4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120358C6: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120358C8: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120358CB: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120358CD: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120358D0: faddp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120358D2: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x120358D5: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120358D7: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120358DA: faddp st(4) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120358DC: fld dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120358DF: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x120358E2: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120358E4: fmulp st(2) */
    fp_xch(5); /* 0x120358E6: fxch st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120358E8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120358EA: fstp dword ptr [ebp + 0x10] */
    fp_xch(2); /* 0x120358ED: fxch st(2) */
    _st[0] = -_st[0]; /* 0x120358EF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120358F1: fstp dword ptr [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x120358F4: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120358F6: fstp dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x120358F9: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120358FB: fstp dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x120358FE: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12035900: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12035903: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12035905: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12035908: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203590A: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1203590C: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x1203590F: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12035911: faddp st(3) */
    fp_xch(2); /* 0x12035913: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12035915: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12035917: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035919: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1203591C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203591E: fmulp st(2) */
    fp_xch(1); /* 0x12035920: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12035922: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12035925: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035927: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1203592A: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203592C: fmulp st(2) */
    fp_xch(1); /* 0x1203592E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12035930: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12035933: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035935: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12035938: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203593A: fmulp st(2) */
    fp_xch(1); /* 0x1203593C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1203593E: fstp dword ptr [eax + 0x30] */
    fp_push(_st[3]); /* 0x12035941: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12035943: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12035946: fstp dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x12035949: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1203594B: fmul dword ptr [ecx + 4] */
    fp_push(_st[5]); /* 0x1203594E: fld st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035950: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12035952: fstp dword ptr [eax + 0x14] */
    fp_push(_st[1]); /* 0x12035955: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12035957: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1203595A: fstp dword ptr [eax + 0x24] */
    fp_push(_st[0]); /* 0x1203595D: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1203595F: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12035962: fstp dword ptr [eax + 0x34] */
    fp_push(_st[3]); /* 0x12035965: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12035967: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1203596A: fstp dword ptr [eax + 8] */
    fp_push(_st[2]); /* 0x1203596D: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1203596F: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x12035972: fstp dword ptr [eax + 0x18] */
    fp_push(_st[1]); /* 0x12035975: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12035977: fmul dword ptr [ecx + 8] */
    fp_push(_st[5]); /* 0x1203597A: fld st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203597C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1203597E: fstp dword ptr [eax + 0x28] */
    fp_push(_st[0]); /* 0x12035981: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12035983: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12035986: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12035989: fld dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203598C: fmulp st(4) */
    fp_xch(3); /* 0x1203598E: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12035990: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12035993: fld dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12035996: fmulp st(2) */
    fp_xch(1); /* 0x12035998: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1203599A: fstp dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1203599D: fmul dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120359A0: fstp dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x120359A3: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120359A6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x120359A8: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120359AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120359AC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120359B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120359B4u);

L_120359B4:
    edi = edi; /* 0x120359B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120359B6: push ebp */
    ebp = esp; /* 0x120359B7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120359B9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120359BC: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x18); /* 0x120359BF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120359C2: push eax */
    RECOMP_CALL(sub_12033BC8); /* 0x120359C3: call 0x12033bc8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120359C8: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x120359CB: fld st(0) */
    eax = MEM32(ebp + 0x8); /* 0x120359CD: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12001750)); /* 0x120359D0: fld qword ptr [0x12001750] */
    _st[1] *= _st[0]; /* 0x120359D6: fmul st(1), st(0) */
    fp_xch(1); /* 0x120359D8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120359DA: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120359DD: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x120359E0: fld st(0) */
    _st[0] *= _st[2]; /* 0x120359E2: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120359E4: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120359E7: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x120359EA: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120359EC: fmulp st(3) */
    fp_xch(2); /* 0x120359EE: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120359F0: fstp dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x120359F3: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x120359F5: fmul dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x120359F8: fld1  */
    _st[1] += _st[0]; /* 0x120359FA: fadd st(1), st(0) */
    fp_xch(1); /* 0x120359FC: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120359FE: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035A00: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12035A03: fld st(0) */
    fp_push(_st[5]); /* 0x12035A05: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035A07: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12035A09: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035A0C: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12035A0F: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x12035A11: fmulp st(6) */
    fp_xch(5); /* 0x12035A13: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12035A15: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x12035A18: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12035A1A: fst dword ptr [eax + 0xc] */
    fp_push(_st[3]); /* 0x12035A1D: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x12035A1F: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12035A22: fstp dword ptr [eax + 0x10] */
    fp_push(_st[3]); /* 0x12035A25: fld st(3) */
    fp_push(_st[2]); /* 0x12035A27: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035A29: fmulp st(1) */
    _st[0] += _st[3]; /* 0x12035A2B: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12035A2D: fstp dword ptr [eax + 0x14] */
    fp_push(_st[5]); /* 0x12035A30: fld st(5) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12035A32: fmulp st(4) */
    fp_xch(3); /* 0x12035A34: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x12035A36: fstp dword ptr [eax + 0x18] */
    fp_xch(2); /* 0x12035A39: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12035A3B: fst dword ptr [eax + 0x1c] */
    fp_push(_st[3]); /* 0x12035A3E: fld st(3) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12035A40: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12035A43: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12035A45: fmulp st(2) */
    fp_xch(1); /* 0x12035A47: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12035A49: fstp dword ptr [eax + 0x20] */
    fp_push(_st[4]); /* 0x12035A4C: fld st(4) */
    fp_push(_st[4]); /* 0x12035A4E: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035A50: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12035A52: fstp dword ptr [eax + 0x24] */
    fp_push(_st[5]); /* 0x12035A55: fld st(5) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x12035A57: fmulp st(5) */
    fp_xch(4); /* 0x12035A59: fxch st(4) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035A5B: faddp st(2) */
    fp_xch(1); /* 0x12035A5D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12035A5F: fstp dword ptr [eax + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12035A62: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035A65: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12035A68: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12035A6A: fmulp st(3) */
    fp_xch(2); /* 0x12035A6C: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x12035A6E: fstp dword ptr [eax + 0x30] */
    fp_push(_st[1]); /* 0x12035A71: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035A73: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12035A75: fstp dword ptr [eax + 0x34] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12035A78: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12035A7A: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12035A7D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12035A7F: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12035A82: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12035A83: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12035A8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035A8Bu);

L_12035A8B:
    edi = edi; /* 0x12035A8B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035A8D: push ebp */
    ebp = esp; /* 0x12035A8E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x12035A90: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12035A96: push esi */
    esi = MEM32(ebp + 0x14); /* 0x12035A97: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12035A9A: push edi */
    edi = ebp + (-0x90); /* 0x12035A9B: lea edi, [ebp - 0x90] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AA1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AA2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AA3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AA4: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x18); /* 0x12035AA5: mov esi, dword ptr [ebp + 0x18] */
    edi = ebp + (-0x60); /* 0x12035AA8: lea edi, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AAB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AAE: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x12035AAF: fld dword ptr [ebp - 0x60] */
    fp_push(_st[0]); /* 0x12035AB2: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x12035AB4: fld dword ptr [ebp - 0x90] */
    esi = MEM32(ebp + 0x1C); /* 0x12035ABA: mov esi, dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12035ABD: fld st(0) */
    edi = ebp + (-0x40); /* 0x12035ABF: lea edi, [ebp - 0x40] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035AC2: faddp st(2) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AC4: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_xch(1); /* 0x12035AC5: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12035AC7: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x12035ACA: fld dword ptr [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035ACD: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x12035ACE: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x12035AD0: fld dword ptr [ebp - 0x8c] */
    fp_push(_st[0]); /* 0x12035AD6: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035AD8: faddp st(2) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035ADA: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_xch(1); /* 0x12035ADB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12035ADD: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x12035AE0: fld dword ptr [ebp - 0x88] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AE6: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x12035AE7: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x58)); /* 0x12035AE9: fadd dword ptr [ebp - 0x58] */
    esi = MEM32(ebp + 0x20); /* 0x12035AEC: mov esi, dword ptr [ebp + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12035AEF: fstp dword ptr [ebp - 0x18] */
    edi = ebp + (-0x80); /* 0x12035AF2: lea edi, [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x12035AF5: fld dword ptr [ebp - 0x84] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035AFB: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x12035AFC: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x12035AFE: fadd dword ptr [ebp - 0x54] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035B01: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12035B02: fstp dword ptr [ebp - 0x14] */
    fp_xch(4); /* 0x12035B05: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12035B07: fsubrp st(5) */
    fp_xch(4); /* 0x12035B09: fxch st(4) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035B0B: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12035B0C: fstp dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12035B0F: fsubrp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035B11: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12035B12: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12035B15: fld dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12035B18: fsubp st(2) */
    fp_xch(1); /* 0x12035B1A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035B1C: fstp dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x12035B1F: fsub dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12035B22: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12035B25: fld dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12035B28: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12035B2B: fld dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12035B2E: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035B31: fld dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12035B34: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035B37: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035B3A: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035B3D: fstp qword ptr [ebp - 8] */
    fp_xch(5); /* 0x12035B40: fxch st(5) */
    _st[0] *= _st[0]; /* 0x12035B42: fmul st(0), st(0) */
    fp_xch(6); /* 0x12035B44: fxch st(6) */
    _st[0] *= _st[0]; /* 0x12035B46: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x12035B48: faddp st(6) */
    fp_xch(3); /* 0x12035B4A: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035B4C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12035B4E: faddp st(5) */
    fp_xch(1); /* 0x12035B50: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035B52: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12035B54: faddp st(4) */
    fp_xch(3); /* 0x12035B56: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035B58: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035B5B: fld dword ptr [ebp + 0x14] */
    fp_xch(1); /* 0x12035B5E: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035B60: fmul st(0), st(0) */
    fp_xch(3); /* 0x12035B62: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035B64: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12035B66: faddp st(3) */
    fp_xch(1); /* 0x12035B68: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035B6A: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035B6C: faddp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12035B6E: fld qword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x12035B71: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035B73: faddp st(2) */
    fp_xch(1); /* 0x12035B75: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035B77: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035B7A: fld dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12035B7D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035B7F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12035B81: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12035BBF; /* 0x12035B84: jne 0x12035bbf */
L_12035B86:
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x12035B86: fld dword ptr [ebp - 0x90] */
    esi = ebp + (-0x50); /* 0x12035B8C: lea esi, [ebp - 0x50] */
    _st[0] = -_st[0]; /* 0x12035B8F: fchs  */
    edi = ebp + (-0x90); /* 0x12035B91: lea edi, [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12035B97: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x12035B9A: fld dword ptr [ebp - 0x8c] */
    _st[0] = -_st[0]; /* 0x12035BA0: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12035BA2: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x12035BA5: fld dword ptr [ebp - 0x88] */
    _st[0] = -_st[0]; /* 0x12035BAB: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12035BAD: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x12035BB0: fld dword ptr [ebp - 0x84] */
    _st[0] = -_st[0]; /* 0x12035BB6: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12035BB8: fstp dword ptr [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035BBB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035BBC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035BBD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035BBE: movsd dword ptr es:[edi], dword ptr [esi] */
L_12035BBF:
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x12035BBF: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x12035BC2: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x12035BC4: fld dword ptr [ebp - 0x60] */
    fp_push(_st[0]); /* 0x12035BC7: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035BC9: faddp st(2) */
    fp_xch(1); /* 0x12035BCB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12035BCD: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x12035BD0: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x12035BD3: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x12035BD5: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[0]); /* 0x12035BD8: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035BDA: faddp st(2) */
    fp_xch(1); /* 0x12035BDC: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12035BDE: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x12035BE1: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x12035BE4: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x58)); /* 0x12035BE6: fadd dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12035BE9: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12035BEC: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x12035BEF: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x12035BF1: fadd dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12035BF4: fstp dword ptr [ebp - 0x14] */
    fp_xch(4); /* 0x12035BF7: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12035BF9: fsubrp st(5) */
    fp_xch(4); /* 0x12035BFB: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12035BFD: fstp dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12035C00: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12035C02: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x12035C05: fld dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12035C08: fsubrp st(2) */
    fp_xch(1); /* 0x12035C0A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035C0C: fstp dword ptr [ebp - 8] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x54)) - _st[0]; /* 0x12035C0F: fsubr dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12035C12: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12035C15: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12035C18: fld dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12035C1B: fld dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12035C1E: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12035C21: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035C24: fld dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035C27: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035C2A: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035C2D: fstp qword ptr [ebp - 8] */
    fp_xch(5); /* 0x12035C30: fxch st(5) */
    _st[0] *= _st[0]; /* 0x12035C32: fmul st(0), st(0) */
    fp_xch(6); /* 0x12035C34: fxch st(6) */
    _st[0] *= _st[0]; /* 0x12035C36: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x12035C38: faddp st(6) */
    fp_xch(3); /* 0x12035C3A: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035C3C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12035C3E: faddp st(5) */
    fp_xch(1); /* 0x12035C40: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035C42: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12035C44: faddp st(4) */
    fp_xch(3); /* 0x12035C46: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035C48: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035C4B: fld dword ptr [ebp + 0x14] */
    fp_xch(3); /* 0x12035C4E: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035C50: fmul st(0), st(0) */
    fp_xch(1); /* 0x12035C52: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035C54: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035C56: faddp st(1) */
    fp_xch(1); /* 0x12035C58: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035C5A: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035C5C: faddp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12035C5E: fld qword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x12035C61: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035C63: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035C65: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035C68: fld dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12035C6B: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035C6D: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x12035C6F: fld dword ptr [ebp - 0x40] */
    /* test HI8(eax), 0x41u */ /* 0x12035C72: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12035CAC; /* 0x12035C75: jne 0x12035cac */
L_12035C77:
    _st[0] = -_st[0]; /* 0x12035C77: fchs  */
    esi = ebp + (-0x50); /* 0x12035C79: lea esi, [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12035C7C: fstp dword ptr [ebp - 0x50] */
    edi = ebp + (-0x40); /* 0x12035C7F: lea edi, [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x12035C82: fld dword ptr [ebp - 0x3c] */
    _st[0] = -_st[0]; /* 0x12035C85: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12035C87: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x12035C8A: fld dword ptr [ebp - 0x38] */
    _st[0] = -_st[0]; /* 0x12035C8D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12035C8F: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12035C92: fld dword ptr [ebp - 0x34] */
    _st[0] = -_st[0]; /* 0x12035C95: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12035C97: fstp dword ptr [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035C9A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035C9B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035C9C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035C9D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12035C9E: fld dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x12035CA1: fld dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x12035CA4: fld dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x12035CA7: fld dword ptr [ebp - 0x40] */
    goto L_12035CBD; /* 0x12035CAA: jmp 0x12035cbd */
L_12035CAC:
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x12035CAC: fld dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x12035CAF: fld dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12035CB2: fld dword ptr [ebp - 0x34] */
    fp_xch(3); /* 0x12035CB5: fxch st(3) */
    fp_xch(1); /* 0x12035CB7: fxch st(1) */
    fp_xch(2); /* 0x12035CB9: fxch st(2) */
    fp_xch(1); /* 0x12035CBB: fxch st(1) */
L_12035CBD:
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x12035CBD: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x12035CC0: fld st(0) */
    fp_push(_st[2]); /* 0x12035CC2: fld st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035CC4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12035CC6: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x12035CC9: fld dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x12035CCC: fld st(0) */
    fp_push(_st[4]); /* 0x12035CCE: fld st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035CD0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12035CD2: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x12035CD5: fld dword ptr [ebp - 0x78] */
    fp_push(_st[5]); /* 0x12035CD8: fld st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035CDA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12035CDC: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12035CDF: fld dword ptr [ebp - 0x74] */
    fp_push(_st[6]); /* 0x12035CE2: fld st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12035CE4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12035CE6: fstp dword ptr [ebp - 0x14] */
    fp_xch(2); /* 0x12035CE9: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12035CEB: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12035CED: fstp dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12035CF0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12035CF2: fstp dword ptr [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x78)); /* 0x12035CF5: fsub dword ptr [ebp - 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035CF8: fstp dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x74)); /* 0x12035CFB: fsub dword ptr [ebp - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12035CFE: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12035D01: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12035D04: fld dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12035D07: fld dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12035D0A: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12035D0D: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035D10: fld dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035D13: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035D16: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12035D19: fstp qword ptr [ebp - 8] */
    fp_xch(5); /* 0x12035D1C: fxch st(5) */
    _st[0] *= _st[0]; /* 0x12035D1E: fmul st(0), st(0) */
    fp_xch(6); /* 0x12035D20: fxch st(6) */
    _st[0] *= _st[0]; /* 0x12035D22: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x12035D24: faddp st(6) */
    fp_xch(3); /* 0x12035D26: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035D28: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12035D2A: faddp st(5) */
    fp_xch(1); /* 0x12035D2C: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035D2E: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12035D30: faddp st(4) */
    fp_xch(3); /* 0x12035D32: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035D34: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035D37: fld dword ptr [ebp + 0x14] */
    fp_xch(1); /* 0x12035D3A: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035D3C: fmul st(0), st(0) */
    fp_xch(3); /* 0x12035D3E: fxch st(3) */
    _st[0] *= _st[0]; /* 0x12035D40: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12035D42: faddp st(3) */
    fp_xch(1); /* 0x12035D44: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12035D46: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035D48: faddp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12035D4A: fld qword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x12035D4D: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12035D4F: faddp st(2) */
    fp_xch(1); /* 0x12035D51: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12035D53: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12035D56: fld dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12035D59: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12035D5B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12035D5D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12035D8C; /* 0x12035D60: jne 0x12035d8c */
L_12035D62:
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x12035D62: fld dword ptr [ebp - 0x80] */
    esi = ebp + (-0x50); /* 0x12035D65: lea esi, [ebp - 0x50] */
    _st[0] = -_st[0]; /* 0x12035D68: fchs  */
    edi = ebp + (-0x80); /* 0x12035D6A: lea edi, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12035D6D: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x12035D70: fld dword ptr [ebp - 0x7c] */
    _st[0] = -_st[0]; /* 0x12035D73: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12035D75: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x12035D78: fld dword ptr [ebp - 0x78] */
    _st[0] = -_st[0]; /* 0x12035D7B: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12035D7D: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x12035D80: fld dword ptr [ebp - 0x74] */
    _st[0] = -_st[0]; /* 0x12035D83: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12035D85: fstp dword ptr [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035D88: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035D89: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035D8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035D8B: movsd dword ptr es:[edi], dword ptr [esi] */
L_12035D8C:
    eax = ebp + (-0x60); /* 0x12035D8C: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x12035D8F: push eax */
    eax = ebp + (-0x50); /* 0x12035D90: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035D93: push eax */
    RECOMP_CALL(sub_1203363C); /* 0x12035D94: call 0x1203363c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x90); /* 0x12035D99: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x12035D9F: push eax */
    eax = ebp + (-0x50); /* 0x12035DA0: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035DA3: push eax */
    eax = ebp + (-0x30); /* 0x12035DA4: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035DA7: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035DA8: call 0x12033495 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x12035DAD: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035DB0: push eax */
    eax = ebp + (-0x20); /* 0x12035DB1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12035DB4: push eax */
    RECOMP_CALL(sub_12033718); /* 0x12035DB5: call 0x12033718 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x12035DBA: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x12035DBD: push eax */
    eax = ebp + (-0x50); /* 0x12035DBE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035DC1: push eax */
    eax = ebp + (-0x30); /* 0x12035DC2: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035DC5: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035DC6: call 0x12033495 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x12035DCB: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035DCE: push eax */
    eax = ebp + (-0x10); /* 0x12035DCF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12035DD2: push eax */
    RECOMP_CALL(sub_12033718); /* 0x12035DD3: call 0x12033718 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12035DD8: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12035DDB: fadd dword ptr [ebp - 0x10] */
    eax = ebp + (-0x30); /* 0x12035DDE: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035DE1: push eax */
    eax = ebp + (-0xA0); /* 0x12035DE2: lea eax, [ebp - 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12035DE8: fstp dword ptr [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x12035DEB: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035DEC: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x12035DEF: fadd dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035DF2: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035DF5: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x12035DF8: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x12035DFB: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035DFE: fld dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x12035E01: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x12035E04: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12035E07: fld dword ptr [ebp - 0x70] */
    fp_push(*(double*)ADDR(0x12005460)); /* 0x12035E0A: fld qword ptr [0x12005460] */
    _st[1] *= _st[0]; /* 0x12035E10: fmul st(1), st(0) */
    fp_xch(1); /* 0x12035E12: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12035E14: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035E17: fld dword ptr [ebp - 0x6c] */
    _st[0] *= _st[1]; /* 0x12035E1A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12035E1C: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x12035E1F: fld dword ptr [ebp - 0x68] */
    _st[0] *= _st[1]; /* 0x12035E22: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12035E24: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x12035E27: fmul dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12035E2A: fstp dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_120337D4); /* 0x12035E2D: call 0x120337d4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA0); /* 0x12035E32: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x12035E38: push eax */
    eax = ebp + (-0x60); /* 0x12035E39: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x12035E3C: push eax */
    eax = ebp + (-0x30); /* 0x12035E3D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035E40: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035E41: call 0x12033495 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x12035E46: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0x30); /* 0x12035E49: lea esi, [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035E4C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035E4D: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x40); /* 0x12035E4E: lea eax, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035E51: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x12035E52: push eax */
    eax = ebp + (-0x50); /* 0x12035E53: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035E56: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035E57: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1203363C); /* 0x12035E58: call 0x1203363c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x12035E5D: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x12035E60: push eax */
    eax = ebp + (-0x50); /* 0x12035E61: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035E64: push eax */
    eax = ebp + (-0x30); /* 0x12035E65: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035E68: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035E69: call 0x12033495 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x12035E6E: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035E71: push eax */
    eax = ebp + (-0x20); /* 0x12035E72: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12035E75: push eax */
    RECOMP_CALL(sub_12033718); /* 0x12035E76: call 0x12033718 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x12035E7B: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x12035E7E: push eax */
    eax = ebp + (-0x50); /* 0x12035E7F: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12035E82: push eax */
    eax = ebp + (-0x30); /* 0x12035E83: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035E86: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035E87: call 0x12033495 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x12035E8C: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035E8F: push eax */
    eax = ebp + (-0x10); /* 0x12035E90: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12035E93: push eax */
    RECOMP_CALL(sub_12033718); /* 0x12035E94: call 0x12033718 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12035E99: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12035E9C: fadd dword ptr [ebp - 0x10] */
    eax = ebp + (-0x30); /* 0x12035E9F: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035EA2: push eax */
    eax = ebp + (-0xA0); /* 0x12035EA3: lea eax, [ebp - 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x12035EA9: fstp dword ptr [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x12035EAC: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12035EAD: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x12035EB0: fadd dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x12035EB3: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12035EB6: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x12035EB9: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x12035EBC: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12035EBF: fld dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x12035EC2: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x12035EC5: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x12035EC8: fld dword ptr [ebp - 0x70] */
    fp_push(*(double*)ADDR(0x12005460)); /* 0x12035ECB: fld qword ptr [0x12005460] */
    _st[1] *= _st[0]; /* 0x12035ED1: fmul st(1), st(0) */
    fp_xch(1); /* 0x12035ED3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12035ED5: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x12035ED8: fld dword ptr [ebp - 0x6c] */
    _st[0] *= _st[1]; /* 0x12035EDB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12035EDD: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x12035EE0: fld dword ptr [ebp - 0x68] */
    _st[0] *= _st[1]; /* 0x12035EE3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12035EE5: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x12035EE8: fmul dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12035EEB: fstp dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_120337D4); /* 0x12035EEE: call 0x120337d4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA0); /* 0x12035EF3: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x12035EF9: push eax */
    eax = ebp + (-0x40); /* 0x12035EFA: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x12035EFD: push eax */
    eax = ebp + (-0x30); /* 0x12035EFE: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12035F01: push eax */
    RECOMP_CALL(sub_12033495); /* 0x12035F02: call 0x12033495 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x12035F07: mov edi, dword ptr [ebp + 0xc] */
    esi = ebp + (-0x30); /* 0x12035F0A: lea esi, [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F0D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F0E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F0F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F10: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x12035F11: mov edi, dword ptr [ebp + 0x10] */
    esi = ebp + (-0x40); /* 0x12035F14: lea esi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F17: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F18: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F19: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12035F1A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12035F1B: pop edi */
    esi = POP32_VAL(esp); /* 0x12035F1C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12035F1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12035F1E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12035F26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035F26u);

L_12035F26:
    edi = edi; /* 0x12035F26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035F28: push ebp */
    ebp = esp; /* 0x12035F29: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12035F2B: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x10); /* 0x12035F2E: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12035F31: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + 0x10) = eax; /* 0x12035F32: mov dword ptr [ecx + 0x10], eax */
    ebp = POP32_VAL(esp); /* 0x12035F35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12035F36: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12035F3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035F3Eu);

L_12035F3E:
    edi = edi; /* 0x12035F3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035F40: push ebp */
    ebp = esp; /* 0x12035F41: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12035F43: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x12035F46: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x12035F49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12035F51; /* 0x12035F4B: je 0x12035f51 */
L_12035F4D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12035F4D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0xC) = eax; /* 0x12035F4E: mov dword ptr [ecx + 0xc], eax */
L_12035F51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035F51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x12035F53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12035F54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12035F5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035F5Cu);

L_12035F5C:
    edi = edi; /* 0x12035F5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035F5E: push ebp */
    ebp = esp; /* 0x12035F5F: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12035F61: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x12035F64: mov eax, dword ptr [ecx + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x12035F67: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x12035F67: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x8); /* 0x12035F6A: add eax, dword ptr [ecx + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x12035F6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12035F6E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12035F76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035F76u);

L_12035F76:
    MEM32(ecx) = 0x12005468u; /* 0x12035F76: mov dword ptr [ecx], 0x12005468 */
    ecx = MEM32(ecx + 0x8); /* 0x12035F7C: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x12035F7F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12035F90; /* 0x12035F81: je 0x12035f90 */
L_12035F83:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x12035F83: movzx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12035F87: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x12035F89: push ecx */
    RECOMP_CALL(sub_121BF388); /* 0x12035F8A: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12035F8F: pop ecx */
L_12035F90:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12035F90: ret  */
    RECOMP_REGS_OUT();
}

void sub_12035F96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12035F96u);

L_12035F96:
    edi = edi; /* 0x12035F96: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12035F98: push ebp */
    ebp = esp; /* 0x12035F99: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12035F9B: push esi */
    PUSH32(esp, edi); /* 0x12035F9C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12035F9D: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x12035FA0: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12035FA2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40u); /* 0x12035FA4: push 0x40 */
    eax = edi; /* 0x12035FA6: mov eax, edi */
    edx = POP32_VAL(esp); /* 0x12035FA8: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12035FA9: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12035FAB: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12035FAE: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12035FB0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFEFu */ /* 0x12035FB2: cmp ecx, -0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12035FDE; /* 0x12035FB5: ja 0x12035fde */
L_12035FB7:
    eax = ecx + 0x10; /* 0x12035FB7: lea eax, [ecx + 0x10] */
    PUSH32(esp, 0x120014BCu); /* 0x12035FBA: push 0x120014bc */
    PUSH32(esp, eax); /* 0x12035FBF: push eax */
    RECOMP_CALL(sub_12018970); /* 0x12035FC0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12035FC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12035FC6: pop ecx */
    /* test eax, eax */ /* 0x12035FC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12035FDE; /* 0x12035FC9: je 0x12035fde */
L_12035FCB:
    SET_LO8(ecx, LO8(eax)); /* 0x12035FCB: mov cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xFu); /* 0x12035FCD: and cl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, 0x10u); /* 0x12035FD0: mov dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - LO8(ecx)); /* 0x12035FD2: sub dl, cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO8(edx); /* 0x12035FD4: movzx ecx, dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12035FD7: add eax, ecx */
    _flag_k = FK_ADD;
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x12035FD9: mov byte ptr [eax - 1], dl */
    goto L_12035FE0; /* 0x12035FDC: jmp 0x12035fe0 */
L_12035FDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035FDE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12035FE0:
    MEM32(esi + 0x8) = eax; /* 0x12035FE0: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x12035FE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12035FEE; /* 0x12035FE5: jne 0x12035fee */
L_12035FE7:
    eax = 0x8007000Eu; /* 0x12035FE7: mov eax, 0x8007000e */
    goto L_12035FFD; /* 0x12035FEC: jmp 0x12035ffd */
L_12035FEE:
    eax = MEM32(esi); /* 0x12035FEE: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x12035FF0: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12035FF4: push esi */
    MEM32(esi + 0x4) = edi; /* 0x12035FF5: mov dword ptr [esi + 4], edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x12035FF8: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12035FFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12035FFD:
    edi = POP32_VAL(esp); /* 0x12035FFD: pop edi */
    esi = POP32_VAL(esp); /* 0x12035FFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x12035FFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12036000: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12036008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12036008u);

L_12036008:
    edi = edi; /* 0x12036008: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203600A: push ebp */
    ebp = esp; /* 0x1203600B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1203600D: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x12036010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203601B; /* 0x12036012: jne 0x1203601b */
L_12036014:
    eax = 0x8876086Cu; /* 0x12036014: mov eax, 0x8876086c */
    goto L_12036055; /* 0x12036019: jmp 0x12036055 */
L_1203601B:
    PUSH32(esp, esi); /* 0x1203601B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1203601C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1203601F: push edi */
    PUSH32(esp, 4); /* 0x12036020: push 4 */
    ecx = POP32_VAL(esp); /* 0x12036022: pop ecx */
    edi = 0x12001A98u; /* 0x12036023: mov edi, 0x12001a98 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12036028: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1203602A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1203603F; /* 0x1203602C: je 0x1203603f */
L_1203602E:
    esi = MEM32(ebp + 0xC); /* 0x1203602E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12036031: push 4 */
    ecx = POP32_VAL(esp); /* 0x12036033: pop ecx */
    edi = 0x12018314u; /* 0x12036034: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12036039: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1203603B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1203604E; /* 0x1203603D: jne 0x1203604e */
L_1203603F:
    ecx = MEM32(ebp + 0x8); /* 0x1203603F: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x12036042: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x12036044: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12036046: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12036047: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1203604A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12036053; /* 0x1203604C: jmp 0x12036053 */
L_1203604E:
    eax = 0x80004002u; /* 0x1203604E: mov eax, 0x80004002 */
L_12036053:
    edi = POP32_VAL(esp); /* 0x12036053: pop edi */
    esi = POP32_VAL(esp); /* 0x12036054: pop esi */
L_12036055:
    ebp = POP32_VAL(esp); /* 0x12036055: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12036056: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203605E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203605Eu);

L_1203605E:
    edi = edi; /* 0x1203605E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12036060: push ebp */
    ebp = esp; /* 0x12036061: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12036063: push ebx */
    PUSH32(esp, esi); /* 0x12036064: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12036065: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x4); /* 0x12036068: mov ecx, dword ptr [esi + 4] */
    eax = esi + 0xC; /* 0x1203606B: lea eax, [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1203606E: inc dword ptr [eax] */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x12036070: push edi */
    /* cmp MEM32(eax), ecx */ /* 0x12036071: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120360FB; /* 0x12036073: jl 0x120360fb */
L_12036079:
    eax = ecx + ecx; /* 0x12036079: lea eax, [ecx + ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1203607C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40u); /* 0x1203607E: push 0x40 */
    edx = POP32_VAL(esp); /* 0x12036080: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12036081: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12036083: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12036086: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12036088: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFEFu */ /* 0x1203608A: cmp ecx, -0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120360B8; /* 0x1203608D: ja 0x120360b8 */
L_1203608F:
    eax = ecx + 0x10; /* 0x1203608F: lea eax, [ecx + 0x10] */
    PUSH32(esp, 0x120014BCu); /* 0x12036092: push 0x120014bc */
    PUSH32(esp, eax); /* 0x12036097: push eax */
    RECOMP_CALL(sub_12018970); /* 0x12036098: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1203609D: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1203609F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120360A0: pop ecx */
    /* test ebx, ebx */ /* 0x120360A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120360B8; /* 0x120360A3: je 0x120360b8 */
L_120360A5:
    SET_LO8(ecx, LO8(ebx)); /* 0x120360A5: mov cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xFu); /* 0x120360A7: and cl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(edx, 0x10u); /* 0x120360AA: mov dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - LO8(ecx)); /* 0x120360AC: sub dl, cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (uint32_t)LO8(edx); /* 0x120360AE: movzx ecx, dl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x120360B1: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM8(ebx + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x120360B3: mov byte ptr [ebx - 1], dl */
    goto L_120360BA; /* 0x120360B6: jmp 0x120360ba */
L_120360B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120360B8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120360BA:
    /* test ebx, ebx */ /* 0x120360BA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120360C5; /* 0x120360BC: jne 0x120360c5 */
L_120360BE:
    eax = 0x8007000Eu; /* 0x120360BE: mov eax, 0x8007000e */
    goto L_1203610D; /* 0x120360C3: jmp 0x1203610d */
L_120360C5:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x120360C5: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120360F2; /* 0x120360C9: je 0x120360f2 */
L_120360CB:
    eax = MEM32(esi + 0x4); /* 0x120360CB: mov eax, dword ptr [esi + 4] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x120360CE: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x120360CE: shl eax, 6 */
    PUSH32(esp, eax); /* 0x120360D1: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120360D2: push dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x120360D5: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x120360D6: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x120360DB: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120360DE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120360E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120360F2; /* 0x120360E3: je 0x120360f2 */
L_120360E5:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x120360E5: movzx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x120360E9: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x120360EB: push ecx */
    RECOMP_CALL(sub_121BF388); /* 0x120360EC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120360F1: pop ecx */
L_120360F2:
    if (1u) _cf = (((MEM32(esi + 0x4)) >> 31) & 1u); /* 0x120360F2: shl dword ptr [esi + 4], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(esi + 0x4) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esi + 0x4) = MEM32(esi + 0x4) << 1u; /* 0x120360F2: shl dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ebx; /* 0x120360F5: mov dword ptr [esi + 8], ebx */
    eax = esi + 0xC; /* 0x120360F8: lea eax, [esi + 0xc] */
L_120360FB:
    edi = MEM32(eax); /* 0x120360FB: mov edi, dword ptr [eax] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x120360FD: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x120360FD: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x8); /* 0x12036100: add edi, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x12036103: push 0x10 */
    esi = edi + (-0x40); /* 0x12036105: lea esi, [edi - 0x40] */
    ecx = POP32_VAL(esp); /* 0x12036108: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12036109: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1203610B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1203610D:
    edi = POP32_VAL(esp); /* 0x1203610D: pop edi */
    esi = POP32_VAL(esp); /* 0x1203610E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1203610F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12036110: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12036111: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12036119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12036119u);

L_12036119:
    edi = edi; /* 0x12036119: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203611B: push ebp */
    ebp = esp; /* 0x1203611C: mov ebp, esp */
    fp_push(0.0); /* 0x1203611E: fldz  */
    eax = MEM32(ebp + 0x8); /* 0x12036120: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xC); /* 0x12036123: mov ecx, dword ptr [eax + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x12036126: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x12036126: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x12036129: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1203612C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x38) = _v; } /* 0x1203612E: fst dword ptr [ecx + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x34) = _v; } /* 0x12036131: fst dword ptr [ecx + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x30) = _v; } /* 0x12036134: fst dword ptr [ecx + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x2C) = _v; } /* 0x12036137: fst dword ptr [ecx + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x24) = _v; } /* 0x1203613A: fst dword ptr [ecx + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x20) = _v; } /* 0x1203613D: fst dword ptr [ecx + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x12036140: fst dword ptr [ecx + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x18) = _v; } /* 0x12036143: fst dword ptr [ecx + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x10) = _v; } /* 0x12036146: fst dword ptr [ecx + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0xC) = _v; } /* 0x12036149: fst dword ptr [ecx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1203614C: fst dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1203614F: fstp dword ptr [ecx + 4] */
    fp_push(1.0); /* 0x12036152: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x3C) = _v; } /* 0x12036154: fst dword ptr [ecx + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x28) = _v; } /* 0x12036157: fst dword ptr [ecx + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x14) = _v; } /* 0x1203615A: fst dword ptr [ecx + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1203615D: fstp dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1203615F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12036160: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12036168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12036168u);

L_12036168:
    edi = edi; /* 0x12036168: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203616A: push ebp */
    ebp = esp; /* 0x1203616B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1203616D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12036170: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12036171: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12036174: push edi */
    edi = MEM32(eax + 0xC); /* 0x12036175: mov edi, dword ptr [eax + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x12036178: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x12036178: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x8); /* 0x1203617B: add edi, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1203617E: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x12036180: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12036181: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12036183: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12036184: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12036186: pop esi */
    ebp = POP32_VAL(esp); /* 0x12036187: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12036188: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12036190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12036190u);

L_12036190:
    edi = edi; /* 0x12036190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12036192: push ebp */
    ebp = esp; /* 0x12036193: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x12036195: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12036198: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1203619D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1203619F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120361A2: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120361A5: push esi */
    PUSH32(esp, edi); /* 0x120361A6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120361A7: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120361AA: push eax */
    eax = MEM32(edi + 0xC); /* 0x120361AB: mov eax, dword ptr [edi + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x120361AE: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x120361AE: shl eax, 6 */
    esi = edi + 0x8; /* 0x120361B1: lea esi, [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x120361B4: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120361B6: push eax */
    eax = ebp + (-0x44); /* 0x120361B7: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120361BA: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x120361BB: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0xC); /* 0x120361C0: mov edi, dword ptr [edi + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x120361C3: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x120361C3: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x120361C6: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x120361C8: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x120361CA: pop ecx */
    esi = ebp + (-0x44); /* 0x120361CB: lea esi, [ebp - 0x44] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120361CE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120361D0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120361D3: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120361D4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120361D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120361D8: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120361D9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120361DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120361DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120361E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120361E7u);

L_120361E7:
    edi = edi; /* 0x120361E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120361E9: push ebp */
    ebp = esp; /* 0x120361EA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x120361EC: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120361EF: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120361F4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120361F6: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120361F9: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120361FC: push esi */
    PUSH32(esp, edi); /* 0x120361FD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120361FE: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x12036201: mov eax, dword ptr [edi + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x12036204: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x12036204: shl eax, 6 */
    esi = edi + 0x8; /* 0x12036207: lea esi, [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x1203620A: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1203620C: push eax */
    PUSH32(esp, ecx); /* 0x1203620D: push ecx */
    eax = ebp + (-0x44); /* 0x1203620E: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x12036211: push eax */
    RECOMP_CALL(sub_12030F00); /* 0x12036212: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0xC); /* 0x12036217: mov edi, dword ptr [edi + 0xc] */
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x1203621A: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x1203621A: shl edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x1203621D: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1203621F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x12036221: pop ecx */
    esi = ebp + (-0x44); /* 0x12036222: lea esi, [ebp - 0x44] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12036225: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12036227: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1203622A: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1203622B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1203622D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1203622F: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12036230: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12036235: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12036236: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120366DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120366DEu);

L_120366DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120366DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x120366E0: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0x4) = eax; /* 0x120366E3: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0xC) = eax; /* 0x120366E6: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx) = 0x12005468u; /* 0x120366E9: mov dword ptr [ecx], 0x12005468 */
    MEM32(ecx + 0x10) = 1; /* 0x120366EF: mov dword ptr [ecx + 0x10], 1 */
    eax = ecx; /* 0x120366F6: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120366F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_120366FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120366FEu);

L_120366FE:
    edi = edi; /* 0x120366FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12036700: push ebp */
    ebp = esp; /* 0x12036701: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12036703: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12036704: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x12036707: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1203670A: push edi */
    edi = MEM32(esi + 0x10); /* 0x1203670B: mov edi, dword ptr [esi + 0x10] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1203671E; /* 0x1203670E: jne 0x1203671e */
L_12036710:
    ecx = esi; /* 0x12036710: mov ecx, esi */
    RECOMP_CALL(sub_12035F76); /* 0x12036712: call 0x12035f76 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12036717: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12036718: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1203671D: pop ecx */
L_1203671E:
    eax = edi; /* 0x1203671E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12036720: pop edi */
    esi = POP32_VAL(esp); /* 0x12036721: pop esi */
    ebp = POP32_VAL(esp); /* 0x12036722: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12036723: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1203672B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203672Bu);

L_1203672B:
    edi = edi; /* 0x1203672B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203672D: push ebp */
    ebp = esp; /* 0x1203672E: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12036730: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12036731: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x12036734: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203673F; /* 0x12036736: jne 0x1203673f */
L_12036738:
    eax = 0x8876086Cu; /* 0x12036738: mov eax, 0x8876086c */
    goto L_1203678A; /* 0x1203673D: jmp 0x1203678a */
L_1203673F:
    PUSH32(esp, esi); /* 0x1203673F: push esi */
    PUSH32(esp, 0x120014BCu); /* 0x12036740: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x12036745: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x12036747: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1203674C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1203674D: pop ecx */
    /* test eax, eax */ /* 0x1203674E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203675D; /* 0x12036750: je 0x1203675d */
L_12036752:
    ecx = eax; /* 0x12036752: mov ecx, eax */
    RECOMP_CALL(sub_120366DE); /* 0x12036754: call 0x120366de */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12036759: mov esi, eax */
    goto L_1203675F; /* 0x1203675B: jmp 0x1203675f */
L_1203675D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1203675D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1203675F:
    /* test esi, esi */ /* 0x1203675F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1203676A; /* 0x12036761: jne 0x1203676a */
L_12036763:
    eax = 0x8007000Eu; /* 0x12036763: mov eax, 0x8007000e */
    goto L_12036789; /* 0x12036768: jmp 0x12036789 */
L_1203676A:
    PUSH32(esp, ebx); /* 0x1203676A: push ebx */
    PUSH32(esp, 0x10u); /* 0x1203676B: push 0x10 */
    ecx = esi; /* 0x1203676D: mov ecx, esi */
    RECOMP_CALL(sub_12035F96); /* 0x1203676F: call 0x12035f96 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12036774: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12036776: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12036784; /* 0x12036778: jns 0x12036784 */
L_1203677A:
    ecx = MEM32(esi); /* 0x1203677A: mov ecx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1203677C: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1203677D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x12036780: mov eax, ebx */
    goto L_12036788; /* 0x12036782: jmp 0x12036788 */
L_12036784:
    MEM32(edi) = esi; /* 0x12036784: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12036786: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12036788:
    ebx = POP32_VAL(esp); /* 0x12036788: pop ebx */
L_12036789:
    esi = POP32_VAL(esp); /* 0x12036789: pop esi */
L_1203678A:
    edi = POP32_VAL(esp); /* 0x1203678A: pop edi */
    ebp = POP32_VAL(esp); /* 0x1203678B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1203678C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12036794(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12036794u);

L_12036794:
    edi = edi; /* 0x12036794: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12036796: push ebp */
    ebp = esp; /* 0x12036797: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x12036799: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x120054D8)); /* 0x1203679C: fld dword ptr [0x120054d8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120367A2: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120367A4: fld dword ptr [ebp + 0x10] */
    _st[0] *= *(double*)ADDR(0x120054D0); /* 0x120367A7: fmul qword ptr [0x120054d0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120367AD: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120367B0: fld dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(0x120054C8)); /* 0x120367B3: fld qword ptr [0x120054c8] */
    _st[1] *= _st[0]; /* 0x120367B9: fmul st(1), st(0) */
    fp_xch(1); /* 0x120367BB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x120367BD: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120367C0: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x120367C3: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x120367C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120367C7: ret 0x10 */
    RECOMP_REGS_OUT();
}
