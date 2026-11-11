#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1006B10D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B10Du);

L_1006B10D:
    PUSH32(esp, ebp); /* 0x1006B10D: push ebp */
    ebp = esp; /* 0x1006B10E: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x1006B110: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006B115: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006B118: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x1C); /* 0x1006B11B: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B11E: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1006B121: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1006B123: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006B126: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B127: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B128u);

L_1006B128:
    PUSH32(esp, ebp); /* 0x1006B128: push ebp */
    ebp = esp; /* 0x1006B129: mov ebp, esp */
    RECOMP_CALL(sub_10073624); /* 0x1006B12B: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006B130: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B140; /* 0x1006B132: je 0x1006b140 */
L_1006B134:
    edx = MEM32(eax); /* 0x1006B134: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006B136: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B138: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x1006B13B: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006B13E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B13F: ret  */
L_1006B140:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006B140: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x1006B142: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B143: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B144(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B144u);

    goto L_1006B144;
L_1006AFB8:
    RECOMP_CALL(sub_10073624); /* 0x1006AFB8: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006AFBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AFC8; /* 0x1006AFBF: je 0x1006afc8 */
L_1006AFC1:
    edx = MEM32(eax); /* 0x1006AFC1: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006AFC3: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x4)); goto _ljump; }
L_1006AFC8:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006AFC8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AFCB: ret  */
L_1006B144:
    RECOMP_BACKEDGE();
    goto L_1006AFB8; /* 0x1006B144: jmp 0x1006afb8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006B149(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B149u);

L_1006B149:
    RECOMP_CALL(sub_10014872); /* 0x1006B149: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x1C); /* 0x1006B14E: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ecx); /* 0x1006B151: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006B156(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B156u);

L_1006B156:
    PUSH32(esp, ebp); /* 0x1006B156: push ebp */
    ebp = esp; /* 0x1006B157: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x1006B159: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x1C); /* 0x1006B15E: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x1006B161: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1006B164: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x1006B166: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B167: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B168u);

L_1006B168:
    PUSH32(esp, ebp); /* 0x1006B168: push ebp */
    ebp = esp; /* 0x1006B169: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1006B16B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006B16E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006B16F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006B171: push edi */
    /* cmp MEM32(0x100E44F4), esi */ /* 0x1006B172: cmp dword ptr [0x100e44f4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E44F4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B1D2; /* 0x1006B178: jne 0x1006b1d2 */
L_1006B17A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006B17A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x100E44F8u; /* 0x1006B17C: mov edi, 0x100e44f8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006B181: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B182: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x1006B184: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006B188: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B1A5; /* 0x1006B18A: jne 0x1006b1a5 */
L_1006B18C:
    RECOMP_ICALL(MEM32(0x100E513C)); /* 0x1006B18C: call dword ptr [0x100e513c] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E44F4) = eax; /* 0x1006B192: mov dword ptr [0x100e44f4], eax */
    /* cmp MEM32(0x100E44F4), esi */ /* 0x1006B197: cmp dword ptr [0x100e44f4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E44F4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B1D2; /* 0x1006B19D: jne 0x1006b1d2 */
L_1006B19F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B19F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(edi); /* 0x1006B1A1: xchg dword ptr [edi], eax */
      MEM32(edi) = eax;
      eax = _tmp; }
    goto L_1006B1CA; /* 0x1006B1A3: jmp 0x1006b1ca */
L_1006B1A5:
    MEM32(ebp + (-0x18)) = esi; /* 0x1006B1A5: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x14)) = 0x1007A46Cu; /* 0x1006B1A8: mov dword ptr [ebp - 0x14], 0x1007a46c */
    goto L_1006B1C2; /* 0x1006B1AF: jmp 0x1006b1c2 */
L_1006B1B1:
    /* cmp MEM32(0x100E44F8), 1 */ /* 0x1006B1B1: cmp dword ptr [0x100e44f8], 1 */
    _flag_a = (uint32_t)(MEM32(0x100E44F8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B1CA; /* 0x1006B1B8: jne 0x1006b1ca */
L_1006B1BA:
    ecx = ebp + (-0x20); /* 0x1006B1BA: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10068D76); /* 0x1006B1BD: call 0x10068d76 */
    RECOMP_FLAGS_IN();
L_1006B1C2:
    /* cmp MEM32(0x100E44F4), esi */ /* 0x1006B1C2: cmp dword ptr [0x100e44f4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E44F4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B1B1; /* 0x1006B1C8: je 0x1006b1b1 */
L_1006B1CA:
    /* cmp MEM32(0x100E44F4), esi */ /* 0x1006B1CA: cmp dword ptr [0x100e44f4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E44F4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B1DD; /* 0x1006B1D0: je 0x1006b1dd */
L_1006B1D2:
    eax = MEM32(0x100E44F4); /* 0x1006B1D2: mov eax, dword ptr [0x100e44f4] */
    edi = POP32_VAL(esp); /* 0x1006B1D7: pop edi */
    esi = POP32_VAL(esp); /* 0x1006B1D8: pop esi */
    esp = ebp; /* 0x1006B1D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B1DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B1DC: ret  */
L_1006B1DD:
    PUSH32(esp, 1); /* 0x1006B1DD: push 1 */
    eax = ebp + (-0x4); /* 0x1006B1DF: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x1002C7ECu; /* 0x1006B1E2: mov dword ptr [ebp - 4], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006B1E9: push eax */
    ecx = ebp + (-0x10); /* 0x1006B1EA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006B1ED: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x1006B1F2: push 0x1002c7fc */
    eax = ebp + (-0x10); /* 0x1006B1F7: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x1002D1CCu; /* 0x1006B1FA: mov dword ptr [ebp - 0x10], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x1006B201: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006B202: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006B207u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006B208(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B208u);

L_1006B208:
    PUSH32(esp, ebp); /* 0x1006B208: push ebp */
    ebp = esp; /* 0x1006B209: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006B20B: push ebx */
    PUSH32(esp, esi); /* 0x1006B20C: push esi */
    esi = ecx; /* 0x1006B20D: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006B20F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1006756Cu; /* 0x1006B211: mov dword ptr [esi], 0x1006756c */
    MEM32(esi + 0x4) = ebx; /* 0x1006B217: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x1006B21A: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_10014872); /* 0x1006B21D: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1006B222: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B225: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1006B227: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi + 0xC) = ebx; /* 0x1006B22A: mov dword ptr [esi + 0xc], ebx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B22D: setne al */
    MEM32(esi + 0x10) = ebx; /* 0x1006B230: mov dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1006B233: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x1006B236: mov dword ptr [esi + 0x18], eax */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1006B239: mov al, byte ptr [ebp + 0xc] */
    MEM32(esi) = 0x1006B260u; /* 0x1006B23C: mov dword ptr [esi], 0x1006b260 */
    MEM32(esi + 0x14) = ebx; /* 0x1006B242: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x1006B245: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = ebx; /* 0x1006B248: mov dword ptr [esi + 0x24], ebx */
    MEM8(esi + 0x28) = (uint8_t)(LO8(eax)); /* 0x1006B24B: mov byte ptr [esi + 0x28], al */
    eax = esi; /* 0x1006B24E: mov eax, esi */
    MEM8(esi + 0x29) = (uint8_t)(LO8(ebx)); /* 0x1006B250: mov byte ptr [esi + 0x29], bl */
    esi = POP32_VAL(esp); /* 0x1006B253: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006B254: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006B255: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006B256: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006B260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B260u);

L_1006B260:
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006B260: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006B263: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006B265: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1006B266: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006B268: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006B26B: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006B26D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1006B26E: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006B270: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(esi), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006B273: adc byte ptr [esi], bh */
      MEM8(esi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = 0x8B551006u; /* 0x1006B275: mov edi, 0x8b551006 */
    /* in: no port I/O under Win32 */ /* 0x1006B27A: in al, dx */
    PUSH32(esp, esi); /* 0x1006B27B: push esi */
    esi = ecx; /* 0x1006B27C: mov esi, ecx */
    RECOMP_CALL(sub_1006B31C); /* 0x1006B27E: call 0x1006b31c */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1006B283: mov al, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006B286: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x100674F4u; /* 0x1006B288: mov dword ptr [esi], 0x100674f4 */
    MEM32(esi + 0x10) = ecx; /* 0x1006B28E: mov dword ptr [esi + 0x10], ecx */
    MEM8(esi + 0x18) = (uint8_t)(LO8(eax)); /* 0x1006B291: mov byte ptr [esi + 0x18], al */
    eax = esi; /* 0x1006B294: mov eax, esi */
    MEM32(esi + 0x1C) = ecx; /* 0x1006B296: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x1006B299: mov dword ptr [esi + 0x20], ecx */
    MEM8(esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1006B29C: mov byte ptr [esi + 0x24], cl */
    MEM32(esi + 0x10) = esi; /* 0x1006B29F: mov dword ptr [esi + 0x10], esi */
    esi = POP32_VAL(esp); /* 0x1006B2A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006B2A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B2A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B278(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B278u);

L_1006B278:
    PUSH32(esp, ebp); /* 0x1006B278: push ebp */
    ebp = esp; /* 0x1006B279: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006B27B: push esi */
    esi = ecx; /* 0x1006B27C: mov esi, ecx */
    RECOMP_CALL(sub_1006B31C); /* 0x1006B27E: call 0x1006b31c */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1006B283: mov al, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006B286: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x100674F4u; /* 0x1006B288: mov dword ptr [esi], 0x100674f4 */
    MEM32(esi + 0x10) = ecx; /* 0x1006B28E: mov dword ptr [esi + 0x10], ecx */
    MEM8(esi + 0x18) = (uint8_t)(LO8(eax)); /* 0x1006B291: mov byte ptr [esi + 0x18], al */
    eax = esi; /* 0x1006B294: mov eax, esi */
    MEM32(esi + 0x1C) = ecx; /* 0x1006B296: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x1006B299: mov dword ptr [esi + 0x20], ecx */
    MEM8(esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1006B29C: mov byte ptr [esi + 0x24], cl */
    MEM32(esi + 0x10) = esi; /* 0x1006B29F: mov dword ptr [esi + 0x10], esi */
    esi = POP32_VAL(esp); /* 0x1006B2A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006B2A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B2A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B2A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B2A7u);

L_1006B2A7:
    PUSH32(esp, ebp); /* 0x1006B2A7: push ebp */
    ebp = esp; /* 0x1006B2A8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006B2AA: push ecx */
    PUSH32(esp, esi); /* 0x1006B2AB: push esi */
    esi = ecx; /* 0x1006B2AC: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006B2AE: push edi */
    /* cmp MEM8(esi + 0x18), 0 */ /* 0x1006B2AF: cmp byte ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B313; /* 0x1006B2B3: je 0x1006b313 */
L_1006B2B5:
    RECOMP_CALL(sub_10023E7E); /* 0x1006B2B5: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1006B2BA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006B2EE; /* 0x1006B2BD: jl 0x1006b2ee */
L_1006B2BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006B2BF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006B2C1: push edi */
    PUSH32(esp, esi); /* 0x1006B2C2: push esi */
    PUSH32(esp, 0x1006B3F0u); /* 0x1006B2C3: push 0x1006b3f0 */
    RECOMP_CALL(sub_100244BF); /* 0x1006B2C8: call 0x100244bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006B2CD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1006B2D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B2E2; /* 0x1006B2D2: je 0x1006b2e2 */
L_1006B2D4:
    ecx = MEM32(ebp + 0x8); /* 0x1006B2D4: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1006B2D7: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, eax); /* 0x1006B2D9: push eax */
    RECOMP_CALL(sub_10026FED); /* 0x1006B2DA: call 0x10026fed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006B2DF: pop ecx */
    edi = eax; /* 0x1006B2E0: mov edi, eax */
L_1006B2E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B2E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = edi; /* 0x1006B2E4: mov dword ptr [esi + 0x14], edi */
    /* test edi, edi */ /* 0x1006B2E7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B2E9: setne al */
    goto L_1006B315; /* 0x1006B2EC: jmp 0x1006b315 */
L_1006B2EE:
    RECOMP_CALL(sub_1006B168); /* 0x1006B2EE: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1006B2F3: push 0x20 */
    PUSH32(esp, 0); /* 0x1006B2F5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B2F7: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006B2FA: push esi */
    PUSH32(esp, 0x1006B411u); /* 0x1006B2FB: push 0x1006b411 */
    PUSH32(esp, eax); /* 0x1006B300: push eax */
    eax = esi + 0x14; /* 0x1006B301: lea eax, [esi + 0x14] */
    PUSH32(esp, eax); /* 0x1006B304: push eax */
    RECOMP_ICALL(MEM32(0x100E5160)); /* 0x1006B305: call dword ptr [0x100e5160] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006B30B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006B30C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006B30E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006B310: inc eax */
    _flag_k = FK_INC;
    goto L_1006B315; /* 0x1006B311: jmp 0x1006b315 */
L_1006B313:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006B313: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006B315:
    edi = POP32_VAL(esp); /* 0x1006B315: pop edi */
    esi = POP32_VAL(esp); /* 0x1006B316: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006B317: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006B318: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B319: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B31C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B31Cu);

L_1006B31C:
    PUSH32(esp, esi); /* 0x1006B31C: push esi */
    esi = ecx; /* 0x1006B31D: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1006B31F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1006756Cu; /* 0x1006B323: mov dword ptr [esi], 0x1006756c */
    MEM32(esi + 0x8) = 0; /* 0x1006B329: mov dword ptr [esi + 8], 0 */
    RECOMP_CALL(sub_10014872); /* 0x1006B330: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1006B335: mov dword ptr [esi + 4], eax */
    eax = esi; /* 0x1006B338: mov eax, esi */
    MEM32(esi) = 0x10067520u; /* 0x1006B33A: mov dword ptr [esi], 0x10067520 */
    esi = POP32_VAL(esp); /* 0x1006B340: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B341: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B342(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B342u);

L_1006B342:
    PUSH32(esp, ebp); /* 0x1006B342: push ebp */
    ebp = esp; /* 0x1006B343: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006B345: push esi */
    esi = ecx; /* 0x1006B346: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B348: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006B34A: inc eax */
    _flag_k = FK_INC;
    edx = esi + 0x20; /* 0x1006B34B: lea edx, [esi + 0x20] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x1006B34E: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006B352: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x1006B353: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B3C0; /* 0x1006B356: jne 0x1006b3c0 */
L_1006B358:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1006B358: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006B35C: push ebx */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B35D: setne bl */
    /* cmp MEM8(esi + 0x18), 0 */ /* 0x1006B360: cmp byte ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B39B; /* 0x1006B364: je 0x1006b39b */
L_1006B366:
    RECOMP_CALL(sub_10023E7E); /* 0x1006B366: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1006B36B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006B382; /* 0x1006B36E: jl 0x1006b382 */
L_1006B370:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006B370: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B39B; /* 0x1006B372: je 0x1006b39b */
L_1006B374:
    ecx = MEM32(esi + 0x14); /* 0x1006B374: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x1006B377: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B39B; /* 0x1006B379: je 0x1006b39b */
L_1006B37B:
    RECOMP_CALL(sub_1007A5B7); /* 0x1006B37B: call 0x1007a5b7 */
    RECOMP_FLAGS_IN();
    goto L_1006B39B; /* 0x1006B380: jmp 0x1006b39b */
L_1006B382:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B382: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006B384: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B386: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006B389: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1006B38A: push eax */
    RECOMP_CALL(sub_1006B168); /* 0x1006B38B: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x14); /* 0x1006B390: mov edx, dword ptr [esi + 0x14] */
    ecx = eax; /* 0x1006B393: mov ecx, eax */
    RECOMP_CALL(sub_1006EF60); /* 0x1006B395: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006B39A: pop ecx */
L_1006B39B:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1006B39B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1006B39F: mov ecx, dword ptr [ebp + 8] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B3A2: sete al */
    MEM8(esi + 0x24) = (uint8_t)(LO8(eax)); /* 0x1006B3A5: mov byte ptr [esi + 0x24], al */
    ebx = POP32_VAL(esp); /* 0x1006B3A8: pop ebx */
    /* test ecx, ecx */ /* 0x1006B3A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B3B4; /* 0x1006B3AB: je 0x1006b3b4 */
L_1006B3AD:
    eax = MEM32(esi + 0x4); /* 0x1006B3AD: mov eax, dword ptr [esi + 4] */
    MEM32(ecx) = eax; /* 0x1006B3B0: mov dword ptr [ecx], eax */
    goto L_1006B3BC; /* 0x1006B3B2: jmp 0x1006b3bc */
L_1006B3B4:
    ecx = MEM32(esi + 0x4); /* 0x1006B3B4: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ecx); /* 0x1006B3B7: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1006B3B9: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
L_1006B3BC:
    SET_LO8(eax, 1); /* 0x1006B3BC: mov al, 1 */
    goto L_1006B3C2; /* 0x1006B3BE: jmp 0x1006b3c2 */
L_1006B3C0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006B3C0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006B3C2:
    esi = POP32_VAL(esp); /* 0x1006B3C2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006B3C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006B3C4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006B3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B3F0u);

L_1006B3F0:
    PUSH32(esp, ebp); /* 0x1006B3F0: push ebp */
    ebp = esp; /* 0x1006B3F1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1006B3F3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1006B3F6: push 0 */
    PUSH32(esp, 0); /* 0x1006B3F8: push 0 */
    eax = MEM32(ecx); /* 0x1006B3FA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B3FC: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B3FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B40D; /* 0x1006B400: je 0x1006b40d */
L_1006B402:
    edx = MEM32(ebp + 0x10); /* 0x1006B402: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1006B405: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A5ED); /* 0x1006B408: call 0x1007a5ed */
    RECOMP_FLAGS_IN();
L_1006B40D:
    ebp = POP32_VAL(esp); /* 0x1006B40D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006B40E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006B411(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B411u);

L_1006B411:
    PUSH32(esp, ebp); /* 0x1006B411: push ebp */
    ebp = esp; /* 0x1006B412: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1006B414: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1006B417: push 0 */
    PUSH32(esp, 0); /* 0x1006B419: push 0 */
    eax = MEM32(ecx); /* 0x1006B41B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B41D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006B41F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006B420: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006B423(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B423u);

L_1006B423:
    PUSH32(esp, esi); /* 0x1006B423: push esi */
    esi = ecx; /* 0x1006B424: mov esi, ecx */
    ecx = esi + 0x4; /* 0x1006B426: lea ecx, [esi + 4] */
    MEM32(esi) = 0; /* 0x1006B429: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_1002C0DD); /* 0x1006B42F: call 0x1002c0dd */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006B434: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006B436: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B437: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B438u);

L_1006B438:
    PUSH32(esp, esi); /* 0x1006B438: push esi */
    PUSH32(esp, edi); /* 0x1006B439: push edi */
    edi = ecx; /* 0x1006B43A: mov edi, ecx */
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x1006B43C: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B452; /* 0x1006B440: je 0x1006b452 */
L_1006B442:
    ecx = edi + 0x4; /* 0x1006B442: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_1006F3EE); /* 0x1006B445: call 0x1006f3ee */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x4; /* 0x1006B44A: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B44D: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
L_1006B452:
    ecx = edi; /* 0x1006B452: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x1006B454: pop edi */
    esi = POP32_VAL(esp); /* 0x1006B455: pop esi */
    goto L_1006B6CE; /* 0x1006B456: jmp 0x1006b6ce */
L_1006B6CE:
    PUSH32(esp, ebp); /* 0x1006B6CE: push ebp */
    ebp = esp; /* 0x1006B6CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1006B6D1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006B6D4: push esi */
    esi = ecx; /* 0x1006B6D5: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1006B6D7: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B727; /* 0x1006B6DA: je 0x1006b727 */
L_1006B6DC:
    PUSH32(esp, edi); /* 0x1006B6DC: push edi */
    eax = esi + 0x4; /* 0x1006B6DD: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1006B6E0: push eax */
    ecx = ebp + (-0x20); /* 0x1006B6E1: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B6E4: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi); /* 0x1006B6E9: mov edi, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1006B6EB: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(esi) = 0; /* 0x1006B6EE: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B6F4: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    goto L_1006B722; /* 0x1006B6F9: jmp 0x1006b722 */
L_1006B6FB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006B6FB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x4; /* 0x1006B6FF: lea esi, [edi + 4] */
    ecx = MEM32(esi); /* 0x1006B702: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x4); /* 0x1006B704: lea edx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x1006B707: push edi */
    PUSH32(esp, edx); /* 0x1006B708: push edx */
    eax = MEM32(ecx); /* 0x1006B709: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B70B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1006B70D: mov ecx, dword ptr [esi] */
    edi = MEM32(edi); /* 0x1006B70F: mov edi, dword ptr [edi] */
    eax = MEM32(ecx); /* 0x1006B711: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B713: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1006B716: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1006B719: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B722; /* 0x1006B71B: je 0x1006b722 */
L_1006B71D:
    eax = MEM32(ecx); /* 0x1006B71D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006B71F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006B722:
    /* test edi, edi */ /* 0x1006B722: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B6FB; /* 0x1006B724: jne 0x1006b6fb */
L_1006B726:
    edi = POP32_VAL(esp); /* 0x1006B726: pop edi */
L_1006B727:
    esi = POP32_VAL(esp); /* 0x1006B727: pop esi */
    esp = ebp; /* 0x1006B728: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B72A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B72B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B45B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B45Bu);

L_1006B45B:
    PUSH32(esp, ebp); /* 0x1006B45B: push ebp */
    ebp = esp; /* 0x1006B45C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006B45E: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006B461: push -1 */
    PUSH32(esp, 0x100DAEECu); /* 0x1006B463: push 0x100daeec */
    eax = MEM32(FS_BASE + (0)); /* 0x1006B468: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1006B46E: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1006B46F: sub esp, 0x4c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006B472: push ebx */
    PUSH32(esp, esi); /* 0x1006B473: push esi */
    eax = MEM32(0x100DF7B8); /* 0x1006B474: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1006B479: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006B47B: push eax */
    eax = esp + 0x58; /* 0x1006B47C: lea eax, [esp + 0x58] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1006B480: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1006B486: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006B488: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = 0x1006756Cu; /* 0x1006B48A: mov dword ptr [esp + 0x2c], 0x1006756c */
    MEM32(esp + 0x30) = ebx; /* 0x1006B492: mov dword ptr [esp + 0x30], ebx */
    MEM32(esp + 0x34) = ebx; /* 0x1006B496: mov dword ptr [esp + 0x34], ebx */
    RECOMP_CALL(sub_10014872); /* 0x1006B49A: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x30) = eax; /* 0x1006B49F: mov dword ptr [esp + 0x30], eax */
    ecx = esp + 0x10; /* 0x1006B4A3: lea ecx, [esp + 0x10] */
    MEM32(esp + 0x3C) = ebx; /* 0x1006B4A7: mov dword ptr [esp + 0x3c], ebx */
    eax = esp + 0x2C; /* 0x1006B4AB: lea eax, [esp + 0x2c] */
    MEM32(esp + 0x2C) = 0x100674F4u; /* 0x1006B4AF: mov dword ptr [esp + 0x2c], 0x100674f4 */
    MEM8(esp + 0x44) = (uint8_t)(LO8(ebx)); /* 0x1006B4B7: mov byte ptr [esp + 0x44], bl */
    MEM32(esp + 0x3C) = eax; /* 0x1006B4BB: mov dword ptr [esp + 0x3c], eax */
    eax = esi + 0x4; /* 0x1006B4BF: lea eax, [esi + 4] */
    MEM32(esp + 0x48) = ebx; /* 0x1006B4C2: mov dword ptr [esp + 0x48], ebx */
    MEM32(esp + 0x4C) = ebx; /* 0x1006B4C6: mov dword ptr [esp + 0x4c], ebx */
    MEM8(esp + 0x50) = (uint8_t)(LO8(ebx)); /* 0x1006B4CA: mov byte ptr [esp + 0x50], bl */
    PUSH32(esp, eax); /* 0x1006B4CE: push eax */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B4CF: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x60) = ebx; /* 0x1006B4D4: mov dword ptr [esp + 0x60], ebx */
    SET_LO8(edx, 1); /* 0x1006B4D8: mov dl, 1 */
    ecx = MEM32(esi); /* 0x1006B4DA: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1006C215); /* 0x1006B4DC: call 0x1006c215 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1006B4E1: mov ecx, dword ptr [ebp + 8] */
    MEM32(esp + 0x38) = eax; /* 0x1006B4E4: mov dword ptr [esp + 0x38], eax */
    eax = esp + 0x38; /* 0x1006B4E8: lea eax, [esp + 0x38] */
    MEM32(esi) = eax; /* 0x1006B4EC: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B4EE: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x60) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x60) | 0xFFFFFFFFu));
    MEM32(esp + 0x60) = MEM32(esp + 0x60) | 0xFFFFFFFFu; /* 0x1006B4F3: or dword ptr [esp + 0x60], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x10); /* 0x1006B4F8: mov ecx, dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B4FC: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100698DA); /* 0x1006B501: call 0x100698da */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1006B506: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006F3EE); /* 0x1006B509: call 0x1006f3ee */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x58); /* 0x1006B50E: mov ecx, dword ptr [esp + 0x58] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1006B512: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1006B519: pop ecx */
    esi = POP32_VAL(esp); /* 0x1006B51A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006B51B: pop ebx */
    esp = ebp; /* 0x1006B51C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B51E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B51F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B522(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B522u);

L_1006B522:
    PUSH32(esp, ebp); /* 0x1006B522: push ebp */
    ebp = esp; /* 0x1006B523: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006B525: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006B528: push -1 */
    PUSH32(esp, 0x100DAF3Eu); /* 0x1006B52A: push 0x100daf3e */
    eax = MEM32(FS_BASE + (0)); /* 0x1006B52F: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1006B535: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1006B536: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006B539: push ebx */
    PUSH32(esp, esi); /* 0x1006B53A: push esi */
    PUSH32(esp, edi); /* 0x1006B53B: push edi */
    eax = MEM32(0x100DF7B8); /* 0x1006B53C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1006B541: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006B543: push eax */
    eax = esp + 0x48; /* 0x1006B544: lea eax, [esp + 0x48] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1006B548: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x1006B54E: mov eax, ecx */
    MEM32(esp + 0x14) = eax; /* 0x1006B550: mov dword ptr [esp + 0x14], eax */
    ebx = MEM32(ebp + 0xC); /* 0x1006B554: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1006B557: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B562; /* 0x1006B559: jne 0x1006b562 */
L_1006B55B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006B55B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006B63B; /* 0x1006B55D: jmp 0x1006b63b */
L_1006B562:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1006B562: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B576; /* 0x1006B565: jne 0x1006b576 */
L_1006B567:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B567: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006B45B); /* 0x1006B56A: call 0x1006b45b */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006B56F: mov al, 1 */
    goto L_1006B63B; /* 0x1006B571: jmp 0x1006b63b */
L_1006B576:
    PUSH32(esp, 0x28u); /* 0x1006B576: push 0x28 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006B578: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006B57D: pop ecx */
    MEM32(esp + 0x18) = eax; /* 0x1006B57E: mov dword ptr [esp + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006B582: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x50) = edi; /* 0x1006B584: mov dword ptr [esp + 0x50], edi */
    /* test eax, eax */ /* 0x1006B588: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B597; /* 0x1006B58A: je 0x1006b597 */
L_1006B58C:
    PUSH32(esp, 1); /* 0x1006B58C: push 1 */
    ecx = eax; /* 0x1006B58E: mov ecx, eax */
    RECOMP_CALL(sub_1006B278); /* 0x1006B590: call 0x1006b278 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006B595: mov edi, eax */
L_1006B597:
    eax = MEM32(esp + 0x14); /* 0x1006B597: mov eax, dword ptr [esp + 0x14] */
    ecx = esp + 0x28; /* 0x1006B59B: lea ecx, [esp + 0x28] */
    _flag_a = (uint32_t)((MEM32(esp + 0x50) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x50) | 0xFFFFFFFFu));
    MEM32(esp + 0x50) = MEM32(esp + 0x50) | 0xFFFFFFFFu; /* 0x1006B59F: or dword ptr [esp + 0x50], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0xC; /* 0x1006B5A4: lea esi, [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1006B5A7: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006B5AA: push eax */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B5AB: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x1006B5B0: mov eax, dword ptr [esp + 0x14] */
    SET_LO8(edx, 1); /* 0x1006B5B4: mov dl, 1 */
    MEM32(esp + 0x50) = 1; /* 0x1006B5B6: mov dword ptr [esp + 0x50], 1 */
    ecx = MEM32(eax); /* 0x1006B5BE: mov ecx, dword ptr [eax] */
    RECOMP_CALL(sub_1006C215); /* 0x1006B5C0: call 0x1006c215 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1006B5C5: mov dword ptr [esi], eax */
    ecx = edi; /* 0x1006B5C7: mov ecx, edi */
    eax = MEM32(esp + 0x14); /* 0x1006B5C9: mov eax, dword ptr [esp + 0x14] */
    PUSH32(esp, ebx); /* 0x1006B5CD: push ebx */
    MEM32(eax) = esi; /* 0x1006B5CE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1006B2A7); /* 0x1006B5D0: call 0x1006b2a7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B5D5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B608; /* 0x1006B5D7: jne 0x1006b608 */
L_1006B5D9:
    PUSH32(esp, 1); /* 0x1006B5D9: push 1 */
    eax = esp + 0x1C; /* 0x1006B5DB: lea eax, [esp + 0x1c] */
    MEM32(esp + 0x1C) = 0x1002C7ECu; /* 0x1006B5DF: mov dword ptr [esp + 0x1c], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006B5E7: push eax */
    ecx = esp + 0x24; /* 0x1006B5E8: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006B5EC: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x1006B5F1: push 0x1002c7fc */
    eax = esp + 0x20; /* 0x1006B5F6: lea eax, [esp + 0x20] */
    MEM32(esp + 0x20) = 0x1002D1CCu; /* 0x1006B5FA: mov dword ptr [esp + 0x20], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x1006B602: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006B603: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006B608:
    ecx = MEM32(ebp + 0x8); /* 0x1006B608: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B60B: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x50) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x50) | 0xFFFFFFFFu));
    MEM32(esp + 0x50) = MEM32(esp + 0x50) | 0xFFFFFFFFu; /* 0x1006B610: or dword ptr [esp + 0x50], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x28); /* 0x1006B615: mov ecx, dword ptr [esp + 0x28] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B619: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100698DA); /* 0x1006B61E: call 0x100698da */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x24), 0 */ /* 0x1006B623: cmp byte ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x1006B627: mov ecx, edi */
    edx = MEM32(edi); /* 0x1006B629: mov edx, dword ptr [edi] */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006B62B: sete bl */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1006B62E: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1006B631: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006F3EE); /* 0x1006B634: call 0x1006f3ee */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x1006B639: mov al, bl */
L_1006B63B:
    ecx = MEM32(esp + 0x48); /* 0x1006B63B: mov ecx, dword ptr [esp + 0x48] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1006B63F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1006B646: pop ecx */
    edi = POP32_VAL(esp); /* 0x1006B647: pop edi */
    esi = POP32_VAL(esp); /* 0x1006B648: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006B649: pop ebx */
    esp = ebp; /* 0x1006B64A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B64C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006B64D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006B650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B650u);

L_1006B650:
    PUSH32(esp, 0x20u); /* 0x1006B650: push 0x20 */
    eax = 0x100DAF90u; /* 0x1006B652: mov eax, 0x100daf90 */
    RECOMP_CALL(sub_100149A4); /* 0x1006B657: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006B65C: mov edi, ecx */
    /* cmp MEM32(edi), 0 */ /* 0x1006B65E: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B6C8; /* 0x1006B661: je 0x1006b6c8 */
L_1006B663:
    eax = edi + 0x4; /* 0x1006B663: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x1006B666: push eax */
    ecx = ebp + (-0x2C); /* 0x1006B667: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B66A: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006B66F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi); /* 0x1006B673: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1006B675: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006B679: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B6B6; /* 0x1006B67B: je 0x1006b6b6 */
L_1006B67D:
    ebx = esi + 0x4; /* 0x1006B67D: lea ebx, [esi + 4] */
    ecx = MEM32(ebx); /* 0x1006B680: mov ecx, dword ptr [ebx] */
    edx = ebp + (-0x10); /* 0x1006B682: lea edx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1006B685: push esi */
    PUSH32(esp, edx); /* 0x1006B686: push edx */
    eax = MEM32(ecx); /* 0x1006B687: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B689: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B68B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B69C; /* 0x1006B68D: jne 0x1006b69c */
L_1006B68F:
    ecx = MEM32(ebx); /* 0x1006B68F: mov ecx, dword ptr [ebx] */
    esi = MEM32(esi); /* 0x1006B691: mov esi, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x1006B693: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B695: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1006B698: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B67D; /* 0x1006B69A: jne 0x1006b67d */
L_1006B69C:
    /* test esi, esi */ /* 0x1006B69C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B6B6; /* 0x1006B69E: je 0x1006b6b6 */
L_1006B6A0:
    eax = MEM32(esi); /* 0x1006B6A0: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1006B6A2: mov dword ptr [edi], eax */
    ecx = MEM32(esi + 0x4); /* 0x1006B6A4: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx); /* 0x1006B6A7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B6A9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1006B6AC: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ecx); /* 0x1006B6AF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006B6B1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_1006B6BC; /* 0x1006B6B4: jmp 0x1006b6bc */
L_1006B6B6:
    MEM32(edi) = 0; /* 0x1006B6B6: mov dword ptr [edi], 0 */
L_1006B6BC:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006B6BC: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x2C)); /* 0x1006B6C0: mov ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B6C3: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
L_1006B6C8:
    RECOMP_CALL(sub_100149D7); /* 0x1006B6C8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B6CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B6CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B6CEu);

L_1006B6CE:
    PUSH32(esp, ebp); /* 0x1006B6CE: push ebp */
    ebp = esp; /* 0x1006B6CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1006B6D1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006B6D4: push esi */
    esi = ecx; /* 0x1006B6D5: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1006B6D7: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B727; /* 0x1006B6DA: je 0x1006b727 */
L_1006B6DC:
    PUSH32(esp, edi); /* 0x1006B6DC: push edi */
    eax = esi + 0x4; /* 0x1006B6DD: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1006B6E0: push eax */
    ecx = ebp + (-0x20); /* 0x1006B6E1: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B6E4: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi); /* 0x1006B6E9: mov edi, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1006B6EB: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(esi) = 0; /* 0x1006B6EE: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B6F4: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    goto L_1006B722; /* 0x1006B6F9: jmp 0x1006b722 */
L_1006B6FB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006B6FB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x4; /* 0x1006B6FF: lea esi, [edi + 4] */
    ecx = MEM32(esi); /* 0x1006B702: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x4); /* 0x1006B704: lea edx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x1006B707: push edi */
    PUSH32(esp, edx); /* 0x1006B708: push edx */
    eax = MEM32(ecx); /* 0x1006B709: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B70B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1006B70D: mov ecx, dword ptr [esi] */
    edi = MEM32(edi); /* 0x1006B70F: mov edi, dword ptr [edi] */
    eax = MEM32(ecx); /* 0x1006B711: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B713: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1006B716: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1006B719: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B722; /* 0x1006B71B: je 0x1006b722 */
L_1006B71D:
    eax = MEM32(ecx); /* 0x1006B71D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006B71F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006B722:
    /* test edi, edi */ /* 0x1006B722: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B6FB; /* 0x1006B724: jne 0x1006b6fb */
L_1006B726:
    edi = POP32_VAL(esp); /* 0x1006B726: pop edi */
L_1006B727:
    esi = POP32_VAL(esp); /* 0x1006B727: pop esi */
    esp = ebp; /* 0x1006B728: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B72A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B72B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B72C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B72Cu);

L_1006B72C:
    PUSH32(esp, esi); /* 0x1006B72C: push esi */
    esi = ecx; /* 0x1006B72D: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1006B72F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x8; /* 0x1006B733: lea ecx, [esi + 8] */
    MEM32(esi) = 0; /* 0x1006B736: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_1002C0DD); /* 0x1006B73C: call 0x1002c0dd */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006B741: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006B743: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B744: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B745(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B745u);

L_1006B745:
    PUSH32(esp, ebx); /* 0x1006B745: push ebx */
    PUSH32(esp, esi); /* 0x1006B746: push esi */
    PUSH32(esp, edi); /* 0x1006B747: push edi */
    edi = ecx; /* 0x1006B748: mov edi, ecx */
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x1006B74A: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B760; /* 0x1006B74E: je 0x1006b760 */
L_1006B750:
    ecx = edi + 0x8; /* 0x1006B750: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_1006F3EE); /* 0x1006B753: call 0x1006f3ee */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x8; /* 0x1006B758: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B75B: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
L_1006B760:
    esi = MEM32(edi); /* 0x1006B760: mov esi, dword ptr [edi] */
    /* cmp esi, 1 */ /* 0x1006B762: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006B785; /* 0x1006B765: jbe 0x1006b785 */
L_1006B767:
    ecx = MEM32(esi + 0x4); /* 0x1006B767: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x1006B76A: mov ebx, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1006B76C: push esi */
    PUSH32(esp, 0); /* 0x1006B76D: push 0 */
    eax = MEM32(ecx); /* 0x1006B76F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006B771: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B773: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B77F; /* 0x1006B775: je 0x1006b77f */
L_1006B777:
    ecx = MEM32(esi + 0x4); /* 0x1006B777: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx); /* 0x1006B77A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B77C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1006B77F:
    esi = ebx; /* 0x1006B77F: mov esi, ebx */
    /* test ebx, ebx */ /* 0x1006B781: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B767; /* 0x1006B783: jne 0x1006b767 */
L_1006B785:
    ecx = MEM32(edi + 0x4); /* 0x1006B785: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x1006B788: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B79C; /* 0x1006B78A: je 0x1006b79c */
L_1006B78C:
    esi = MEM32(ecx); /* 0x1006B78C: mov esi, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x4); /* 0x1006B78E: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x1006B791: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006B793: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006B796: mov ecx, esi */
    /* test esi, esi */ /* 0x1006B798: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B78C; /* 0x1006B79A: jne 0x1006b78c */
L_1006B79C:
    edi = POP32_VAL(esp); /* 0x1006B79C: pop edi */
    esi = POP32_VAL(esp); /* 0x1006B79D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006B79E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B79F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B7A0u);

L_1006B7A0:
    PUSH32(esp, ebp); /* 0x1006B7A0: push ebp */
    ebp = esp; /* 0x1006B7A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006B7A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006B7A6: push -1 */
    PUSH32(esp, 0x100DAFE0u); /* 0x1006B7A8: push 0x100dafe0 */
    eax = MEM32(FS_BASE + (0)); /* 0x1006B7AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1006B7B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1006B7B4: sub esp, 0x4c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006B7B7: push ebx */
    PUSH32(esp, esi); /* 0x1006B7B8: push esi */
    eax = MEM32(0x100DF7B8); /* 0x1006B7B9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1006B7BE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006B7C0: push eax */
    eax = esp + 0x58; /* 0x1006B7C1: lea eax, [esp + 0x58] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1006B7C5: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1006B7CB: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x1006B7CD: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006B7D0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B800; /* 0x1006B7D3: je 0x1006b800 */
L_1006B7D5:
    /* test eax, eax */ /* 0x1006B7D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B7E5; /* 0x1006B7D7: jne 0x1006b7e5 */
L_1006B7D9:
    eax = MEM32(esi); /* 0x1006B7D9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006B7DB: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006B7DC: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006B7DE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1006B8AE; /* 0x1006B7E0: jmp 0x1006b8ae */
L_1006B7E5:
    PUSH32(esp, eax); /* 0x1006B7E5: push eax */
    PUSH32(esp, 1); /* 0x1006B7E6: push 1 */
    eax = esp + 0x18; /* 0x1006B7E8: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = esi; /* 0x1006B7EC: mov dword ptr [esp + 0x18], esi */
    PUSH32(esp, 1); /* 0x1006B7F0: push 1 */
    PUSH32(esp, eax); /* 0x1006B7F2: push eax */
    RECOMP_CALL(sub_1006BA5F); /* 0x1006B7F3: call 0x1006ba5f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1006B7F8: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1006B8AE; /* 0x1006B7FB: jmp 0x1006b8ae */
L_1006B800:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006B800: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x34) = 0x1007A46Cu; /* 0x1006B802: mov dword ptr [esp + 0x34], 0x1007a46c */
    MEM32(esp + 0x30) = ebx; /* 0x1006B80A: mov dword ptr [esp + 0x30], ebx */
L_1006B80E:
    eax = MEM32(esi); /* 0x1006B80E: mov eax, dword ptr [esi] */
    /* cmp eax, 1 */ /* 0x1006B810: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B8AC; /* 0x1006B813: je 0x1006b8ac */
L_1006B819:
    ecx = esp + 0x28; /* 0x1006B819: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_1006A8DE); /* 0x1006B81D: call 0x1006a8de */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B822: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B80E; /* 0x1006B824: jne 0x1006b80e */
L_1006B826:
    MEM32(esp + 0x1C) = 0x1006756Cu; /* 0x1006B826: mov dword ptr [esp + 0x1c], 0x1006756c */
    MEM32(esp + 0x20) = ebx; /* 0x1006B82E: mov dword ptr [esp + 0x20], ebx */
    MEM32(esp + 0x24) = ebx; /* 0x1006B832: mov dword ptr [esp + 0x24], ebx */
    RECOMP_CALL(sub_10014872); /* 0x1006B836: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x20) = eax; /* 0x1006B83B: mov dword ptr [esp + 0x20], eax */
    ecx = esp + 0x38; /* 0x1006B83F: lea ecx, [esp + 0x38] */
    eax = esp + 0x1C; /* 0x1006B843: lea eax, [esp + 0x1c] */
    MEM32(esp + 0x1C) = 0x10067520u; /* 0x1006B847: mov dword ptr [esp + 0x1c], 0x10067520 */
    MEM32(esp + 0x18) = eax; /* 0x1006B84F: mov dword ptr [esp + 0x18], eax */
    eax = esi + 0x8; /* 0x1006B853: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1006B856: push eax */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B857: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x60) = ebx; /* 0x1006B85C: mov dword ptr [esp + 0x60], ebx */
    /* cmp MEM32(esi), 1 */ /* 0x1006B860: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B869; /* 0x1006B863: jne 0x1006b869 */
L_1006B865:
    SET_LO8(ebx, 1); /* 0x1006B865: mov bl, 1 */
    goto L_1006B87C; /* 0x1006B867: jmp 0x1006b87c */
L_1006B869:
    ecx = MEM32(esi); /* 0x1006B869: mov ecx, dword ptr [esi] */
    SET_LO8(edx, 1); /* 0x1006B86B: mov dl, 1 */
    RECOMP_CALL(sub_1006C215); /* 0x1006B86D: call 0x1006c215 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = eax; /* 0x1006B872: mov dword ptr [esp + 0x14], eax */
    eax = esp + 0x14; /* 0x1006B876: lea eax, [esp + 0x14] */
    MEM32(esi) = eax; /* 0x1006B87A: mov dword ptr [esi], eax */
L_1006B87C:
    _flag_a = (uint32_t)((MEM32(esp + 0x60) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x60) | 0xFFFFFFFFu));
    MEM32(esp + 0x60) = MEM32(esp + 0x60) | 0xFFFFFFFFu; /* 0x1006B87C: or dword ptr [esp + 0x60], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x38); /* 0x1006B881: mov ecx, dword ptr [esp + 0x38] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B885: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006B88A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B8AC; /* 0x1006B88C: jne 0x1006b8ac */
L_1006B88E:
    /* cmp MEM32(esp + 0x24), 1 */ /* 0x1006B88E: cmp dword ptr [esp + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B8AC; /* 0x1006B893: je 0x1006b8ac */
L_1006B895:
    PUSH32(esp, 2); /* 0x1006B895: push 2 */
    ecx = POP32_VAL(esp); /* 0x1006B897: pop ecx */
    edx = esp + 0x24; /* 0x1006B898: lea edx, [esp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B89C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1006B89E: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x1006B8A2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006B8AC; /* 0x1006B8A5: je 0x1006b8ac */
L_1006B8A7:
    RECOMP_CALL(sub_100698DA); /* 0x1006B8A7: call 0x100698da */
    RECOMP_FLAGS_IN();
L_1006B8AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006B8AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006B8AE:
    ecx = MEM32(esp + 0x58); /* 0x1006B8AE: mov ecx, dword ptr [esp + 0x58] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1006B8B2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1006B8B9: pop ecx */
    esi = POP32_VAL(esp); /* 0x1006B8BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006B8BB: pop ebx */
    esp = ebp; /* 0x1006B8BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B8BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B8BF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B8C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B8C2u);

L_1006B8C2:
    PUSH32(esp, 0x20u); /* 0x1006B8C2: push 0x20 */
    eax = 0x100DAF90u; /* 0x1006B8C4: mov eax, 0x100daf90 */
    RECOMP_CALL(sub_100149A4); /* 0x1006B8C9: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1006B8CE: mov ebx, ecx */
    eax = ebx + 0x8; /* 0x1006B8D0: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1006B8D3: push eax */
    ecx = ebp + (-0x2C); /* 0x1006B8D4: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B8D7: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006B8DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1006B8DE: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(ebx), 1 */ /* 0x1006B8E1: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B910; /* 0x1006B8E4: jne 0x1006b910 */
L_1006B8E6:
    esi = MEM32(ebx + 0x4); /* 0x1006B8E6: mov esi, dword ptr [ebx + 4] */
    MEM32(ebx + 0x4) = edi; /* 0x1006B8E9: mov dword ptr [ebx + 4], edi */
    /* test esi, esi */ /* 0x1006B8EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B90E; /* 0x1006B8EE: je 0x1006b90e */
L_1006B8F0:
    ecx = MEM32(esi + 0x4); /* 0x1006B8F0: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x1006B8F3: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006B8F5: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx); /* 0x1006B8F8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006B8FA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B8FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B905; /* 0x1006B8FF: je 0x1006b905 */
L_1006B901:
    MEM32(esi) = edi; /* 0x1006B901: mov dword ptr [esi], edi */
    edi = esi; /* 0x1006B903: mov edi, esi */
L_1006B905:
    eax = MEM32(ebp + (-0x10)); /* 0x1006B905: mov eax, dword ptr [ebp - 0x10] */
    esi = eax; /* 0x1006B908: mov esi, eax */
    /* test eax, eax */ /* 0x1006B90A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B8F0; /* 0x1006B90C: jne 0x1006b8f0 */
L_1006B90E:
    MEM32(ebx) = edi; /* 0x1006B90E: mov dword ptr [ebx], edi */
L_1006B910:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006B910: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x2C)); /* 0x1006B914: mov ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B917: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1006B91C: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B921: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B922(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B922u);

L_1006B922:
    PUSH32(esp, 0x44u); /* 0x1006B922: push 0x44 */
    eax = 0x100DB030u; /* 0x1006B924: mov eax, 0x100db030 */
    RECOMP_CALL(sub_10025BA2); /* 0x1006B929: call 0x10025ba2 */
    RECOMP_FLAGS_IN();
    eax = ecx; /* 0x1006B92E: mov eax, ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006B930: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006B933: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = 0x10067598u; /* 0x1006B935: mov dword ptr [ebp - 0x24], 0x10067598 */
    esi = ecx; /* 0x1006B93C: mov esi, ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1006B93E: mov dword ptr [ebp - 0x20], ecx */
    edi = ecx; /* 0x1006B941: mov edi, ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1006B943: mov dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1006B946: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006B949: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, eax); /* 0x1006B94C: push eax */
    ecx = ebp + (-0x50); /* 0x1006B94D: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B950: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006B955: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1006B957: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x14)); /* 0x1006B95B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006B95E: inc ebx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x1006B95F: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* cmp ebx, 1 */ /* 0x1006B961: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006BA32; /* 0x1006B964: jbe 0x1006ba32 */
L_1006B96A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006B96A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1006B96C: mov eax, ebx */
    /* test ebx, ebx */ /* 0x1006B96E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B979; /* 0x1006B970: je 0x1006b979 */
L_1006B972:
    eax = MEM32(eax); /* 0x1006B972: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006B974: inc edx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1006B975: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B972; /* 0x1006B977: jne 0x1006b972 */
L_1006B979:
    ecx = edx; /* 0x1006B979: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1006B97B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1006B97B: shl ecx, 2 */
    eax = ecx + 0x8; /* 0x1006B97E: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x1006B981: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006B9C1; /* 0x1006B983: jbe 0x1006b9c1 */
L_1006B985:
    edx = edx * 4 + 0x8; /* 0x1006B985: lea edx, [edx*4 + 8] */
    /* cmp edx, 0x400u */ /* 0x1006B98C: cmp edx, 0x400 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006B9A9; /* 0x1006B992: ja 0x1006b9a9 */
L_1006B994:
    eax = edx; /* 0x1006B994: mov eax, edx */
    RECOMP_CALL(sub_10012BBF); /* 0x1006B996: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x1006B99B: mov esi, esp */
    /* test esi, esi */ /* 0x1006B99D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B9C7; /* 0x1006B99F: je 0x1006b9c7 */
L_1006B9A1:
    MEM32(esi) = 0xCCCCu; /* 0x1006B9A1: mov dword ptr [esi], 0xcccc */
    goto L_1006B9BC; /* 0x1006B9A7: jmp 0x1006b9bc */
L_1006B9A9:
    PUSH32(esp, edx); /* 0x1006B9A9: push edx */
    RECOMP_CALL(sub_1000ED30); /* 0x1006B9AA: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006B9AF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1006B9B1: pop ecx */
    /* test esi, esi */ /* 0x1006B9B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B9C7; /* 0x1006B9B4: je 0x1006b9c7 */
L_1006B9B6:
    MEM32(esi) = 0xDDDDu; /* 0x1006B9B6: mov dword ptr [esi], 0xdddd */
L_1006B9BC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1006B9BC: add esi, 8 */
    _flag_k = FK_ADD;
    goto L_1006B9C3; /* 0x1006B9BF: jmp 0x1006b9c3 */
L_1006B9C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006B9C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006B9C3:
    /* test esi, esi */ /* 0x1006B9C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B9F1; /* 0x1006B9C5: jne 0x1006b9f1 */
L_1006B9C7:
    PUSH32(esp, 1); /* 0x1006B9C7: push 1 */
    eax = ebp + (-0x14); /* 0x1006B9C9: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x1002C7ECu; /* 0x1006B9CC: mov dword ptr [ebp - 0x14], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006B9D3: push eax */
    ecx = ebp + (-0x34); /* 0x1006B9D4: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006B9D7: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x1006B9DC: push 0x1002c7fc */
    eax = ebp + (-0x34); /* 0x1006B9E1: lea eax, [ebp - 0x34] */
    MEM32(ebp + (-0x34)) = 0x1002D1CCu; /* 0x1006B9E4: mov dword ptr [ebp - 0x34], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x1006B9EB: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006B9EC: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006B9F1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1006B9F1: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006B9F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1006B9F7: mov dword ptr [ebp - 0x20], esi */
    /* test ebx, ebx */ /* 0x1006B9FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BA32; /* 0x1006B9FC: je 0x1006ba32 */
L_1006B9FE:
    ecx = MEM32(ebx + 0x4); /* 0x1006B9FE: mov ecx, dword ptr [ebx + 4] */
    edx = ebp + (-0x28); /* 0x1006BA01: lea edx, [ebp - 0x28] */
    eax = MEM32(ebx); /* 0x1006BA04: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1006BA06: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x1006BA09: push ebx */
    eax = MEM32(ecx); /* 0x1006BA0A: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1006BA0C: push edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006BA0D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006BA0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BA1E; /* 0x1006BA11: je 0x1006ba1e */
L_1006BA13:
    ecx = MEM32(ebp + (-0x14)); /* 0x1006BA13: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx + 0x4); /* 0x1006BA16: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx) = eax; /* 0x1006BA19: mov dword ptr [ebx], eax */
    MEM32(ecx + 0x4) = ebx; /* 0x1006BA1B: mov dword ptr [ecx + 4], ebx */
L_1006BA1E:
    eax = MEM32(ebp + (-0x28)); /* 0x1006BA1E: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1006BA21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BA29; /* 0x1006BA23: je 0x1006ba29 */
L_1006BA25:
    MEM32(esi + edi * 4) = eax; /* 0x1006BA25: mov dword ptr [esi + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006BA28: inc edi */
    _flag_k = FK_INC;
L_1006BA29:
    eax = MEM32(ebp + (-0x18)); /* 0x1006BA29: mov eax, dword ptr [ebp - 0x18] */
    ebx = eax; /* 0x1006BA2C: mov ebx, eax */
    /* test eax, eax */ /* 0x1006BA2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B9FE; /* 0x1006BA30: jne 0x1006b9fe */
L_1006BA32:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1006BA32: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + (-0x50)); /* 0x1006BA36: mov ecx, dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006BA39: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    goto L_1006BA49; /* 0x1006BA3E: jmp 0x1006ba49 */
L_1006BA40:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1006BA40: dec edi */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + edi * 4); /* 0x1006BA41: mov ecx, dword ptr [esi + edi*4] */
    eax = MEM32(ecx); /* 0x1006BA44: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006BA46: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006BA49:
    /* test edi, edi */ /* 0x1006BA49: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BA40; /* 0x1006BA4B: jne 0x1006ba40 */
L_1006BA4D:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1006BA4D: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_10012BD5); /* 0x1006BA50: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006BA55: pop ecx */
    esp = ebp + (-0x60); /* 0x1006BA56: lea esp, [ebp - 0x60] */
    RECOMP_CALL(sub_10025C1A); /* 0x1006BA59: call 0x10025c1a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006BA5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006BA5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BA5Fu);

L_1006BA5F:
    PUSH32(esp, 0x9Cu); /* 0x1006BA5F: push 0x9c */
    eax = 0x100DB08Fu; /* 0x1006BA64: mov eax, 0x100db08f */
    RECOMP_CALL(sub_100149A4); /* 0x1006BA69: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1006BA6E: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1006BA71: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BA9D; /* 0x1006BA73: jne 0x1006ba9d */
L_1006BA75:
    eax = ebp + (-0x44); /* 0x1006BA75: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x44)) = 0x1006BDA4u; /* 0x1006BA78: mov dword ptr [ebp - 0x44], 0x1006bda4 */
    PUSH32(esp, eax); /* 0x1006BA7F: push eax */
    ecx = ebp + (-0x80); /* 0x1006BA80: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006BA83: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x80)) = 0x1006754Cu; /* 0x1006BA88: mov dword ptr [ebp - 0x80], 0x1006754c */
    eax = ebp + (-0x80); /* 0x1006BA8F: lea eax, [ebp - 0x80] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006BA92: push 0x100dcee8 */
L_1006BA97:
    PUSH32(esp, eax); /* 0x1006BA97: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006BA98: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006BA9D:
    ecx = MEM32(ebp + 0xC); /* 0x1006BA9D: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1006BAA0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BAAB; /* 0x1006BAA2: jne 0x1006baab */
L_1006BAA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BAA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006BD9D; /* 0x1006BAA6: jmp 0x1006bd9d */
L_1006BAAB:
    edi = MEM32(ebp + 0x14); /* 0x1006BAAB: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1006BAAE: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x1006BAB1: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BAF3; /* 0x1006BAB4: jne 0x1006baf3 */
L_1006BAB6:
    /* test edi, edi */ /* 0x1006BAB6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BABE; /* 0x1006BAB8: je 0x1006babe */
L_1006BABA:
    /* cmp edi, edx */ /* 0x1006BABA: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BAF3; /* 0x1006BABC: jne 0x1006baf3 */
L_1006BABE:
    ecx = MEM32(esi); /* 0x1006BABE: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1006BAC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BAE8; /* 0x1006BAC2: jne 0x1006bae8 */
L_1006BAC4:
    eax = ebp + (-0x4C); /* 0x1006BAC4: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = 0x1006BDA4u; /* 0x1006BAC7: mov dword ptr [ebp - 0x4c], 0x1006bda4 */
    PUSH32(esp, eax); /* 0x1006BACE: push eax */
    ecx = ebp + (-0x5C); /* 0x1006BACF: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006BAD2: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = 0x1006754Cu; /* 0x1006BAD7: mov dword ptr [ebp - 0x5c], 0x1006754c */
    eax = ebp + (-0x5C); /* 0x1006BADE: lea eax, [ebp - 0x5c] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006BAE1: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006BA97; /* 0x1006BAE6: jmp 0x1006ba97 */
L_1006BAE8:
    PUSH32(esp, edi); /* 0x1006BAE8: push edi */
    RECOMP_CALL(sub_1006B7A0); /* 0x1006BAE9: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
    goto L_1006BD9D; /* 0x1006BAEE: jmp 0x1006bd9d */
L_1006BAF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006BAF3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1006BAF5: mov eax, ebx */
    /* test ecx, ecx */ /* 0x1006BAF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BB09; /* 0x1006BAF9: je 0x1006bb09 */
L_1006BAFB:
    /* cmp MEM32(esi + eax * 4), ebx */ /* 0x1006BAFB: cmp dword ptr [esi + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BBB9; /* 0x1006BAFE: je 0x1006bbb9 */
L_1006BB04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BB04: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1006BB05: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006BAFB; /* 0x1006BB07: jb 0x1006bafb */
L_1006BB09:
    /* test edi, edi */ /* 0x1006BB09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BB13; /* 0x1006BB0B: je 0x1006bb13 */
L_1006BB0D:
    SET_LO8(eax, 1); /* 0x1006BB0D: mov al, 1 */
    /* cmp edi, edx */ /* 0x1006BB0F: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BB15; /* 0x1006BB11: jne 0x1006bb15 */
L_1006BB13:
    SET_LO8(eax, LO8(ebx)); /* 0x1006BB13: mov al, bl */
L_1006BB15:
    PUSH32(esp, eax); /* 0x1006BB15: push eax */
    /* cmp edi, edx */ /* 0x1006BB16: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006BB18: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1006BB1B: movzx eax, al */
    PUSH32(esp, eax); /* 0x1006BB1E: push eax */
    PUSH32(esp, ecx); /* 0x1006BB1F: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006BB20: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x38); /* 0x1006BB23: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1006BE28); /* 0x1006BB26: call 0x1006be28 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1006BB2B: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1006BB2D: mov dword ptr [ebp - 4], ebx */
    esi = MEM32(ebp + (-0x28)); /* 0x1006BB30: mov esi, dword ptr [ebp - 0x28] */
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(ebx)); /* 0x1006BB33: mov byte ptr [ebp - 0xd], bl */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1006BB36: mov dword ptr [ebp - 0x14], ecx */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1006BB39: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006BC67; /* 0x1006BB3C: jbe 0x1006bc67 */
L_1006BB42:
    eax = MEM32(ebp + 0x8); /* 0x1006BB42: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x1006BB45: mov eax, dword ptr [eax + ecx*4] */
    ecx = ebp + (-0xA8); /* 0x1006BB48: lea ecx, [ebp - 0xa8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006BB4E: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1006BB51: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006BB54: push eax */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006BB55: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1006BB5A: mov eax, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1006BB5D: mov byte ptr [ebp - 4], 1 */
    edx = MEM32(ebp + (-0x34)); /* 0x1006BB61: mov edx, dword ptr [ebp - 0x34] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x14))); /* 0x1006BB64: imul edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x2C)); /* 0x1006BB68: add edx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x38)); /* 0x1006BB6B: add edx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x1006BB6E: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
    ecx = MEM32(eax); /* 0x1006BB71: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1006BB73: mov dword ptr [ebp - 0x3c], edx */
    /* cmp ecx, 1 */ /* 0x1006BB76: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BBE0; /* 0x1006BB79: jne 0x1006bbe0 */
L_1006BB7B:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1006BB7B: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(edx + 0x4); /* 0x1006BB7F: mov ecx, dword ptr [edx + 4] */
    PUSH32(esp, edx); /* 0x1006BB82: push edx */
    edx = ebp + (-0x18); /* 0x1006BB83: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1006BB86: push edx */
    eax = MEM32(ecx); /* 0x1006BB87: mov eax, dword ptr [ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BC10; /* 0x1006BB89: je 0x1006bc10 */
L_1006BB8F:
    RECOMP_ICALL(MEM32(eax)); /* 0x1006BB8F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006BB91: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BBAD; /* 0x1006BB93: je 0x1006bbad */
L_1006BB95:
    eax = MEM32(ebp + (-0x1C)); /* 0x1006BB95: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1006BB98: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(eax + 0x4); /* 0x1006BB9A: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_1006C215); /* 0x1006BB9D: call 0x1006c215 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C)); /* 0x1006BBA2: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ecx) = eax; /* 0x1006BBA5: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1006BBA7: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(eax + 0x4) = ecx; /* 0x1006BBAA: mov dword ptr [eax + 4], ecx */
L_1006BBAD:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1006BBAD: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BBF1; /* 0x1006BBB1: je 0x1006bbf1 */
L_1006BBB3:
    MEM8(ebp + (-0xD)) = (uint8_t)(1); /* 0x1006BBB3: mov byte ptr [ebp - 0xd], 1 */
    goto L_1006BBF1; /* 0x1006BBB7: jmp 0x1006bbf1 */
L_1006BBB9:
    eax = ebp + (-0x50); /* 0x1006BBB9: lea eax, [ebp - 0x50] */
    MEM32(ebp + (-0x50)) = 0x1006BDA4u; /* 0x1006BBBC: mov dword ptr [ebp - 0x50], 0x1006bda4 */
    PUSH32(esp, eax); /* 0x1006BBC3: push eax */
    ecx = ebp + (-0x74); /* 0x1006BBC4: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006BBC7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x74)) = 0x1006754Cu; /* 0x1006BBCC: mov dword ptr [ebp - 0x74], 0x1006754c */
    eax = ebp + (-0x74); /* 0x1006BBD3: lea eax, [ebp - 0x74] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006BBD6: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006BA97; /* 0x1006BBDB: jmp 0x1006ba97 */
L_1006BBE0:
    SET_LO8(edx, 1); /* 0x1006BBE0: mov dl, 1 */
    RECOMP_CALL(sub_1006C215); /* 0x1006BBE2: call 0x1006c215 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C)); /* 0x1006BBE7: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ecx) = eax; /* 0x1006BBEA: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1006BBEC: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ecx; /* 0x1006BBEF: mov dword ptr [eax], ecx */
L_1006BBF1:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1006BBF1: mov byte ptr [ebp - 4], bl */
    ecx = MEM32(ebp + (-0xA8)); /* 0x1006BBF4: mov ecx, dword ptr [ebp - 0xa8] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006BBFA: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1006BBFF: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006BC02: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1006BC03: mov dword ptr [ebp - 0x14], ecx */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1006BC06: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006BC5C; /* 0x1006BC09: jae 0x1006bc5c */
L_1006BC0B:
    RECOMP_BACKEDGE();
    goto L_1006BB42; /* 0x1006BC0B: jmp 0x1006bb42 */
L_1006BC10:
    RECOMP_ICALL(MEM32(eax)); /* 0x1006BC10: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1006BC12: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BC1C; /* 0x1006BC16: je 0x1006bc1c */
L_1006BC18:
    MEM8(ebp + (-0xD)) = (uint8_t)(1); /* 0x1006BC18: mov byte ptr [ebp - 0xd], 1 */
L_1006BC1C:
    eax = MEM32(ebp + (-0x14)); /* 0x1006BC1C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BC1F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x1006BC20: mov dword ptr [ebp + 8], eax */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1006BC23: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006BC4E; /* 0x1006BC26: jae 0x1006bc4e */
L_1006BC28:
    edi = eax; /* 0x1006BC28: mov edi, eax */
L_1006BC2A:
    edx = MEM32(ebp + (-0x34)); /* 0x1006BC2A: mov edx, dword ptr [ebp - 0x34] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x1006BC2D: imul edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x2C)); /* 0x1006BC30: add edx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x38)); /* 0x1006BC33: add edx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x1006BC36: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1006BC39: push edx */
    ecx = MEM32(edx + 0x4); /* 0x1006BC3A: mov ecx, dword ptr [edx + 4] */
    edx = ebp + (-0x18); /* 0x1006BC3D: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1006BC40: push edx */
    eax = MEM32(ecx); /* 0x1006BC41: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006BC43: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006BC45: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1006BC46: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006BC2A; /* 0x1006BC49: jb 0x1006bc2a */
L_1006BC4B:
    edi = MEM32(ebp + 0x14); /* 0x1006BC4B: mov edi, dword ptr [ebp + 0x14] */
L_1006BC4E:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1006BC4E: mov byte ptr [ebp - 4], bl */
    ecx = MEM32(ebp + (-0xA8)); /* 0x1006BC51: mov ecx, dword ptr [ebp - 0xa8] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006BC57: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
L_1006BC5C:
    SET_LO8(eax, MEM8(ebp + (-0xD))); /* 0x1006BC5C: mov al, byte ptr [ebp - 0xd] */
    /* test LO8(eax), LO8(eax) */ /* 0x1006BC5F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BD6C; /* 0x1006BC61: jne 0x1006bd6c */
L_1006BC67:
    edx = esi + 0x8; /* 0x1006BC67: lea edx, [esi + 8] */
    /* cmp MEM32(edx), 1 */ /* 0x1006BC6A: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BD6C; /* 0x1006BC6D: je 0x1006bd6c */
L_1006BC73:
    PUSH32(esp, 2); /* 0x1006BC73: push 2 */
    ecx = POP32_VAL(esp); /* 0x1006BC75: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BC76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1006BC78: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x1006BC7C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BD6C; /* 0x1006BC7F: je 0x1006bd6c */
L_1006BC85:
    /* test edi, edi */ /* 0x1006BC85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BCA8; /* 0x1006BC87: jne 0x1006bca8 */
L_1006BC89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006BC89: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x14; /* 0x1006BC8B: lea eax, [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006BC8E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006BC8F: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006BC93: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 1 */ /* 0x1006BC94: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BD67; /* 0x1006BC97: jne 0x1006bd67 */
L_1006BC9D:
    MEM32(esi + 0xC) = ebx; /* 0x1006BC9D: mov dword ptr [esi + 0xc], ebx */
    MEM8(esi + 0x29) = (uint8_t)(LO8(ecx)); /* 0x1006BCA0: mov byte ptr [esi + 0x29], cl */
    goto L_1006BD6C; /* 0x1006BCA3: jmp 0x1006bd6c */
L_1006BCA8:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1006BCA8: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BD67; /* 0x1006BCAB: je 0x1006bd67 */
L_1006BCB1:
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x1006BCB1: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BD67; /* 0x1006BCB4: jne 0x1006bd67 */
L_1006BCBA:
    RECOMP_CALL(sub_10023E7E); /* 0x1006BCBA: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1006BCBF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006BD1D; /* 0x1006BCC2: jl 0x1006bd1d */
L_1006BCC4:
    PUSH32(esp, ebx); /* 0x1006BCC4: push ebx */
    PUSH32(esp, esi); /* 0x1006BCC5: push esi */
    PUSH32(esp, 0x1006BFE0u); /* 0x1006BCC6: push 0x1006bfe0 */
    RECOMP_CALL(sub_100244BF); /* 0x1006BCCB: call 0x100244bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006BCD0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1006BCD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BCE4; /* 0x1006BCD5: je 0x1006bce4 */
L_1006BCD7:
    PUSH32(esp, eax); /* 0x1006BCD7: push eax */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1006BCD8: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = edi; /* 0x1006BCDA: mov ecx, edi */
    RECOMP_CALL(sub_10026FED); /* 0x1006BCDC: call 0x10026fed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006BCE1: pop ecx */
    ebx = eax; /* 0x1006BCE2: mov ebx, eax */
L_1006BCE4:
    MEM32(esi + 0x10) = ebx; /* 0x1006BCE4: mov dword ptr [esi + 0x10], ebx */
    /* test ebx, ebx */ /* 0x1006BCE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BD64; /* 0x1006BCE9: jne 0x1006bd64 */
L_1006BCEB:
    PUSH32(esp, 1); /* 0x1006BCEB: push 1 */
    eax = ebp + (-0x40); /* 0x1006BCED: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x40)) = 0x1002C7ECu; /* 0x1006BCF0: mov dword ptr [ebp - 0x40], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006BCF7: push eax */
    ecx = ebp + (-0x8C); /* 0x1006BCF8: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006BCFE: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8C)) = 0x1002D1CCu; /* 0x1006BD03: mov dword ptr [ebp - 0x8c], 0x1002d1cc */
    eax = ebp + (-0x8C); /* 0x1006BD0D: lea eax, [ebp - 0x8c] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1006BD13: push 0x1002c7fc */
    RECOMP_BACKEDGE();
    goto L_1006BA97; /* 0x1006BD18: jmp 0x1006ba97 */
L_1006BD1D:
    RECOMP_CALL(sub_1006B168); /* 0x1006BD1D: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1006BD22: push 0x20 */
    PUSH32(esp, ebx); /* 0x1006BD24: push ebx */
    PUSH32(esp, edi); /* 0x1006BD25: push edi */
    PUSH32(esp, esi); /* 0x1006BD26: push esi */
    PUSH32(esp, 0x1006C02Bu); /* 0x1006BD27: push 0x1006c02b */
    PUSH32(esp, eax); /* 0x1006BD2C: push eax */
    eax = esi + 0x10; /* 0x1006BD2D: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x1006BD30: push eax */
    RECOMP_ICALL(MEM32(0x100E5160)); /* 0x1006BD31: call dword ptr [0x100e5160] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006BD37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BD64; /* 0x1006BD39: jne 0x1006bd64 */
L_1006BD3B:
    PUSH32(esp, 1); /* 0x1006BD3B: push 1 */
    eax = ebp + (-0x48); /* 0x1006BD3D: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0x48)) = 0x1002C7ECu; /* 0x1006BD40: mov dword ptr [ebp - 0x48], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006BD47: push eax */
    ecx = ebp + (-0x68); /* 0x1006BD48: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006BD4B: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = 0x1002D1CCu; /* 0x1006BD50: mov dword ptr [ebp - 0x68], 0x1002d1cc */
    eax = ebp + (-0x68); /* 0x1006BD57: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1006BD5A: push 0x1002c7fc */
    RECOMP_BACKEDGE();
    goto L_1006BA97; /* 0x1006BD5F: jmp 0x1006ba97 */
L_1006BD64:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x1006BD64: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
L_1006BD67:
    RECOMP_CALL(sub_100698DA); /* 0x1006BD67: call 0x100698da */
    RECOMP_FLAGS_IN();
L_1006BD6C:
    eax = MEM32(esi + 0xC); /* 0x1006BD6C: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x1006BD6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006BD78; /* 0x1006BD71: jne 0x1006bd78 */
L_1006BD73:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1006BD73: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006BD93; /* 0x1006BD76: jmp 0x1006bd93 */
L_1006BD78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x1006BD78: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006BD7B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x38)); /* 0x1006BD7D: sub eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x34)); /* 0x1006BD80: div dword ptr [ebp - 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x1006BD83: mov ebx, eax */
    goto L_1006BD93; /* 0x1006BD85: jmp 0x1006bd93 */
L_1006BD87:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006BD87: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1006BD88: mov dword ptr [ebp - 0x24], ecx */
    ecx = MEM32(ebp + (-0x28)); /* 0x1006BD8B: mov ecx, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006BD8E: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
L_1006BD93:
    ecx = MEM32(ebp + (-0x24)); /* 0x1006BD93: mov ecx, dword ptr [ebp - 0x24] */
    /* cmp ecx, MEM32(ebp + (-0x20)) */ /* 0x1006BD96: cmp ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006BD87; /* 0x1006BD99: jb 0x1006bd87 */
L_1006BD9B:
    eax = ebx; /* 0x1006BD9B: mov eax, ebx */
L_1006BD9D:
    RECOMP_CALL(sub_100149D7); /* 0x1006BD9D: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006BDA2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006BDA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BDA4u);

L_1006BDA4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_1006BDEB; /* 0x1006BDA4: jo 0x1006bdeb */
L_1006BDA6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_1006BE0D; /* 0x1006BDA6: jbe 0x1006be0d */
L_1006BDA8:
    /* outsb: no port I/O under Win32 */ /* 0x1006BDA8: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1006BE1E; /* 0x1006BDA9: je 0x1006be1e */
L_1006BDAB:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1006BDAB: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1006BDAE: in al, dx */
    PUSH32(esp, esi); /* 0x1006BDAF: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006BDB0: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006BDB3: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006BDB5: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006754Cu; /* 0x1006BDBA: mov dword ptr [esi], 0x1006754c */
    eax = esi; /* 0x1006BDC0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006BDC2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006BDC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006BDC4: ret 4 */
L_1006BDEB:
    esi = ecx; /* 0x1006BDEB: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006BDED: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006BE04u; /* 0x1006BDF2: mov dword ptr [esi], 0x1006be04 */
    eax = esi; /* 0x1006BDF8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006BDFA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006BDFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006BDFC: ret 4 */
L_1006BE0D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(eax)); /* 0x1006BE0F: add ah, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xEu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0xEu); /* 0x1006BE11: sub al, 0xe */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BE13: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1006BE17: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1006BE19u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1006BE1E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE1E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0)) << 24;
    SET_LO8(eax, LO8(eax) | 0); /* 0x1006BE20: or al, 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1006BE24: in al, 0xbd */
    PUSH32(esp, _seg_es); /* 0x1006BE26: push es */
    { uint32_t _aa = MEM8(edx + 0x4), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BE27: adc byte ptr [edx + 4], ch */
      MEM8(edx + 0x4) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = 0x100DB0F6u; /* 0x1006BE2A: mov eax, 0x100db0f6 */
    RECOMP_CALL(sub_100149A4); /* 0x1006BE2F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006BE34: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006BE36: mov dword ptr [ebp - 0x10], edi */
    ebx = MEM32(ebp + 0xC); /* 0x1006BE39: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0; /* 0x1006BE3C: and dword ptr [edi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x30u; /* 0x1006BE40: mov dword ptr [edi], 0x30 */
    MEM32(edi + 0x4) = 8; /* 0x1006BE46: mov dword ptr [edi + 4], 8 */
    eax = ebx * 8 + 0x30; /* 0x1006BE4D: lea eax, [ebx*8 + 0x30] */
    PUSH32(esp, eax); /* 0x1006BE54: push eax */
    MEM32(edi + 0x8) = eax; /* 0x1006BE55: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10011683); /* 0x1006BE58: call 0x10011683 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1006BE5D: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = eax; /* 0x1006BE61: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1006BE63: pop ecx */
    MEM32(edi + 0xC) = esi; /* 0x1006BE64: mov dword ptr [edi + 0xc], esi */
    MEM32(edi + 0x10) = esi; /* 0x1006BE67: mov dword ptr [edi + 0x10], esi */
    MEM32(ebp + 0x8) = esi; /* 0x1006BE6A: mov dword ptr [ebp + 8], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BE90; /* 0x1006BE6D: je 0x1006be90 */
L_1006BE6F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006BE6F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006BE73: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BEB6; /* 0x1006BE75: je 0x1006beb6 */
L_1006BE77:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1006BE77: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1006BE7A: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006BE7C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1006BE7F: push ebx */
    RECOMP_CALL(sub_1006B208); /* 0x1006BE80: call 0x1006b208 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006BF0Cu; /* 0x1006BE85: mov dword ptr [esi], 0x1006bf0c */
    MEM32(esi + 0x1C) = ebx; /* 0x1006BE8B: mov dword ptr [esi + 0x1c], ebx */
    goto L_1006BEB6; /* 0x1006BE8E: jmp 0x1006beb6 */
L_1006BE90:
    MEM32(ebp + (-0x4)) = 1; /* 0x1006BE90: mov dword ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x1006BE97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BEB6; /* 0x1006BE99: je 0x1006beb6 */
L_1006BE9B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1006BE9B: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1006BE9E: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006BEA0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1006BEA3: push ebx */
    RECOMP_CALL(sub_1006B208); /* 0x1006BEA4: call 0x1006b208 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006BEF0u; /* 0x1006BEA9: mov dword ptr [esi], 0x1006bef0 */
    MEM32(esi + 0x1C) = 1; /* 0x1006BEAF: mov dword ptr [esi + 0x1c], 1 */
L_1006BEB6:
    ecx = MEM32(edi); /* 0x1006BEB6: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x1006BEB8: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1006BEBB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BED1; /* 0x1006BEBD: je 0x1006bed1 */
L_1006BEBF:
    edx = ebx; /* 0x1006BEBF: mov edx, ebx */
L_1006BEC1:
    /* test ecx, ecx */ /* 0x1006BEC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BECB; /* 0x1006BEC3: je 0x1006becb */
L_1006BEC5:
    eax = MEM32(edi + 0x10); /* 0x1006BEC5: mov eax, dword ptr [edi + 0x10] */
    MEM32(ecx + 0x4) = eax; /* 0x1006BEC8: mov dword ptr [ecx + 4], eax */
L_1006BECB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x4); /* 0x1006BECB: add ecx, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006BECE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006BEC1; /* 0x1006BECF: jne 0x1006bec1 */
L_1006BED1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BED1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x14), LO8(eax) */ /* 0x1006BED3: cmp byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006BED6: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BED9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1006BEDA: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x1006BEDC: mov dword ptr [edi + 0x18], eax */
    eax = edi; /* 0x1006BEDF: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x1006BEE1: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1006BEE6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1006BE04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BE04u);

L_1006BE04:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x1006BE04: movsb byte ptr es:[edi], byte ptr [esi] */
    { uint32_t _tmp = edx; /* 0x1006BE05: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    PUSH32(esp, _seg_es); /* 0x1006BE06: push es */
    { uint32_t _aa = HI8(eax), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BE07: adc ah, dh */
      SET_HI8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x1006BE09u, "fisttp qword ptr [ecx]");
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BE0B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(eax)); /* 0x1006BE0F: add ah, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xEu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0xEu); /* 0x1006BE11: sub al, 0xe */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BE13: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006BE15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1006BE17: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1006BE19u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1006BE28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BE28u);

L_1006BE28:
    PUSH32(esp, 4); /* 0x1006BE28: push 4 */
    eax = 0x100DB0F6u; /* 0x1006BE2A: mov eax, 0x100db0f6 */
    RECOMP_CALL(sub_100149A4); /* 0x1006BE2F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006BE34: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006BE36: mov dword ptr [ebp - 0x10], edi */
    ebx = MEM32(ebp + 0xC); /* 0x1006BE39: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0; /* 0x1006BE3C: and dword ptr [edi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x30u; /* 0x1006BE40: mov dword ptr [edi], 0x30 */
    MEM32(edi + 0x4) = 8; /* 0x1006BE46: mov dword ptr [edi + 4], 8 */
    eax = ebx * 8 + 0x30; /* 0x1006BE4D: lea eax, [ebx*8 + 0x30] */
    PUSH32(esp, eax); /* 0x1006BE54: push eax */
    MEM32(edi + 0x8) = eax; /* 0x1006BE55: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10011683); /* 0x1006BE58: call 0x10011683 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1006BE5D: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = eax; /* 0x1006BE61: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1006BE63: pop ecx */
    MEM32(edi + 0xC) = esi; /* 0x1006BE64: mov dword ptr [edi + 0xc], esi */
    MEM32(edi + 0x10) = esi; /* 0x1006BE67: mov dword ptr [edi + 0x10], esi */
    MEM32(ebp + 0x8) = esi; /* 0x1006BE6A: mov dword ptr [ebp + 8], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BE90; /* 0x1006BE6D: je 0x1006be90 */
L_1006BE6F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006BE6F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006BE73: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BEB6; /* 0x1006BE75: je 0x1006beb6 */
L_1006BE77:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1006BE77: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1006BE7A: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006BE7C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1006BE7F: push ebx */
    RECOMP_CALL(sub_1006B208); /* 0x1006BE80: call 0x1006b208 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006BF0Cu; /* 0x1006BE85: mov dword ptr [esi], 0x1006bf0c */
    MEM32(esi + 0x1C) = ebx; /* 0x1006BE8B: mov dword ptr [esi + 0x1c], ebx */
    goto L_1006BEB6; /* 0x1006BE8E: jmp 0x1006beb6 */
L_1006BE90:
    MEM32(ebp + (-0x4)) = 1; /* 0x1006BE90: mov dword ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x1006BE97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BEB6; /* 0x1006BE99: je 0x1006beb6 */
L_1006BE9B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1006BE9B: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1006BE9E: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006BEA0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1006BEA3: push ebx */
    RECOMP_CALL(sub_1006B208); /* 0x1006BEA4: call 0x1006b208 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1006BEF0u; /* 0x1006BEA9: mov dword ptr [esi], 0x1006bef0 */
    MEM32(esi + 0x1C) = 1; /* 0x1006BEAF: mov dword ptr [esi + 0x1c], 1 */
L_1006BEB6:
    ecx = MEM32(edi); /* 0x1006BEB6: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x1006BEB8: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1006BEBB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BED1; /* 0x1006BEBD: je 0x1006bed1 */
L_1006BEBF:
    edx = ebx; /* 0x1006BEBF: mov edx, ebx */
L_1006BEC1:
    /* test ecx, ecx */ /* 0x1006BEC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BECB; /* 0x1006BEC3: je 0x1006becb */
L_1006BEC5:
    eax = MEM32(edi + 0x10); /* 0x1006BEC5: mov eax, dword ptr [edi + 0x10] */
    MEM32(ecx + 0x4) = eax; /* 0x1006BEC8: mov dword ptr [ecx + 4], eax */
L_1006BECB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x4); /* 0x1006BECB: add ecx, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006BECE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006BEC1; /* 0x1006BECF: jne 0x1006bec1 */
L_1006BED1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BED1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x14), LO8(eax) */ /* 0x1006BED3: cmp byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006BED6: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BED9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1006BEDA: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x1006BEDC: mov dword ptr [edi + 0x18], eax */
    eax = edi; /* 0x1006BEDF: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x1006BEE1: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1006BEE6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1006BEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BEF0u);

L_1006BEF0:
    /* in: no port I/O under Win32 */ /* 0x1006BEF0: in al, dx */
    { uint32_t _rv = (MEM8(esi)) & 255u, _rn = ((0x10u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi) = (uint8_t)(_rv); } /* 0x1006BEF1: rol byte ptr [esi], 0x10 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1006BEF4: leave  */
    { uint32_t _rv = (MEM8(esi)) & 255u, _rn = ((0x10u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi) = (uint8_t)(_rv); } /* 0x1006BEF5: rol byte ptr [esi], 0x10 */
    esp = 0x25100325u; /* 0x1006BEF8: mov esp, 0x25100325 */
    { uint32_t _rv = (MEM32(esi)) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi) = _rv; } /* 0x1006BEFD: rol dword ptr [esi], 0x10 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1006BF00: leave  */
    { uint32_t _rv = (MEM8(esi)) & 255u, _rn = ((0x10u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi) = (uint8_t)(_rv); } /* 0x1006BF01: rol byte ptr [esi], 0x10 */
    edi = 0x80F41006u; /* 0x1006BF04: mov edi, 0x80f41006 */
    PUSH32(esp, _seg_es); /* 0x1006BF0A: push es */
    { uint32_t _aa = MEM8(ecx + eax * 8 + 0x6), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BF0B: adc byte ptr [ecx + eax*8 + 6], cl */
      MEM8(ecx + eax * 8 + 0x6) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(ecx + 0x101006C1), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BF0F: adc byte ptr [ecx + 0x101006c1], cl */
      MEM8(ecx + 0x101006C1) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_FLAGS_OUT(); esp += 4106; { RECOMP_REGS_OUT(); return; } /* 0x1006BF15: ret 0x1006 */
    RECOMP_REGS_OUT();
}

void sub_1006BF0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BF0Cu);

L_1006BF0C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1006BF0C: dec esp */
    _flag_k = FK_DEC;
    { uint32_t _rv = (MEM32(esi)) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi) = _rv; } /* 0x1006BF0D: rol dword ptr [esi], 0x10 */
    ecx = eax; /* 0x1006BF10: mov ecx, eax */
    PUSH32(esp, _seg_es); /* 0x1006BF12: push es */
    { uint32_t _aa = MEM8(eax), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006BF13: adc byte ptr [eax], dl */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_FLAGS_OUT(); esp += 4106; { RECOMP_REGS_OUT(); return; } /* 0x1006BF15: ret 0x1006 */
    RECOMP_REGS_OUT();
}

void sub_1006BF3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BF3Eu);

L_1006BF3E:
    PUSH32(esp, ebp); /* 0x1006BF3E: push ebp */
    ebp = esp; /* 0x1006BF3F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006BF41: push ebx */
    PUSH32(esp, esi); /* 0x1006BF42: push esi */
    esi = ecx; /* 0x1006BF43: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006BF45: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006BF46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1006BF48: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x28), 0 */ /* 0x1006BF49: cmp byte ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(esi + 0x4); /* 0x1006BF4D: mov ebx, dword ptr [esi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BF60; /* 0x1006BF50: je 0x1006bf60 */
L_1006BF52:
    eax = esi + 0x14; /* 0x1006BF52: lea eax, [esi + 0x14] */
    edx = edi; /* 0x1006BF55: mov edx, edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1006BF57: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006BF5B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1006BF5C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BFD9; /* 0x1006BF5E: jne 0x1006bfd9 */
L_1006BF60:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1006BF60: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1006BF64: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1006BF67: mov dword ptr [esi + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BF9E; /* 0x1006BF6A: je 0x1006bf9e */
L_1006BF6C:
    RECOMP_CALL(sub_10023E7E); /* 0x1006BF6C: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1006BF71: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006BF80; /* 0x1006BF74: jl 0x1006bf80 */
L_1006BF76:
    ecx = MEM32(esi + 0x10); /* 0x1006BF76: mov ecx, dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1007A5B7); /* 0x1006BF79: call 0x1007a5b7 */
    RECOMP_FLAGS_IN();
    goto L_1006BF92; /* 0x1006BF7E: jmp 0x1006bf92 */
L_1006BF80:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006BF80: push -1 */
    RECOMP_CALL(sub_1006B168); /* 0x1006BF82: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x10); /* 0x1006BF87: mov edx, dword ptr [esi + 0x10] */
    ecx = eax; /* 0x1006BF8A: mov ecx, eax */
    RECOMP_CALL(sub_1006EF60); /* 0x1006BF8C: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006BF91: pop ecx */
L_1006BF92:
    /* cmp MEM32(esi + 0x14), edi */ /* 0x1006BF92: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006BF9E; /* 0x1006BF95: jne 0x1006bf9e */
L_1006BF97:
    ecx = esi; /* 0x1006BF97: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006BF99: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
L_1006BF9E:
    esi = MEM32(ebp + 0xC); /* 0x1006BF9E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x1006BFA1: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x8), 2 */ /* 0x1006BFA4: cmp dword ptr [eax + 8], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BFC7; /* 0x1006BFA8: je 0x1006bfc7 */
L_1006BFAA:
    ecx = MEM32(esi + 0x4); /* 0x1006BFAA: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BFAD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1006BFAF: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x1006BFB2: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x1006BFB6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006BFC7; /* 0x1006BFB9: je 0x1006bfc7 */
L_1006BFBB:
    eax = MEM32(ebp + 0x8); /* 0x1006BFBB: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1006BFBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BFD9; /* 0x1006BFC0: je 0x1006bfd9 */
L_1006BFC2:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1006BFC2: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006BFD9; /* 0x1006BFC5: jmp 0x1006bfd9 */
L_1006BFC7:
    eax = MEM32(ebp + 0x8); /* 0x1006BFC7: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1006BFCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006BFD2; /* 0x1006BFCC: je 0x1006bfd2 */
L_1006BFCE:
    MEM32(eax) = ebx; /* 0x1006BFCE: mov dword ptr [eax], ebx */
    goto L_1006BFD9; /* 0x1006BFD0: jmp 0x1006bfd9 */
L_1006BFD2:
    eax = MEM32(ebx); /* 0x1006BFD2: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1006BFD4: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006BFD6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006BFD9:
    edi = POP32_VAL(esp); /* 0x1006BFD9: pop edi */
    esi = POP32_VAL(esp); /* 0x1006BFDA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006BFDB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006BFDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006BFDD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006BFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006BFE0u);

L_1006BFE0:
    PUSH32(esp, ebp); /* 0x1006BFE0: push ebp */
    ebp = esp; /* 0x1006BFE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006BFE3: push ebx */
    PUSH32(esp, esi); /* 0x1006BFE4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1006BFE5: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006BFE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1006BFEA: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BFEC: inc eax */
    _flag_k = FK_INC;
    ecx = esi + 0x14; /* 0x1006BFED: lea ecx, [esi + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006BFF0: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006BFF4: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x1006BFF5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C00F; /* 0x1006BFF8: jne 0x1006c00f */
L_1006BFFA:
    ecx = MEM32(esi + 0x4); /* 0x1006BFFA: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x1006BFFD: mov bl, al */
    MEM8(esi + 0x29) = (uint8_t)(LO8(ebx)); /* 0x1006BFFF: mov byte ptr [esi + 0x29], bl */
    /* test ecx, ecx */ /* 0x1006C002: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C00F; /* 0x1006C004: je 0x1006c00f */
L_1006C006:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1006C006: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1006C00A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006C00C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006C00F:
    ecx = esi; /* 0x1006C00F: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006C011: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006C016: pop esi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006C017: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x1006C019: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C027; /* 0x1006C01A: je 0x1006c027 */
L_1006C01C:
    edx = MEM32(ebp + 0x10); /* 0x1006C01C: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1006C01F: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A5ED); /* 0x1006C022: call 0x1007a5ed */
    RECOMP_FLAGS_IN();
L_1006C027:
    ebp = POP32_VAL(esp); /* 0x1006C027: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006C028: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006C02B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C02Bu);

L_1006C02B:
    PUSH32(esp, ebp); /* 0x1006C02B: push ebp */
    ebp = esp; /* 0x1006C02C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C02E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006C02F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006C032: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006C034: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006C035: inc eax */
    _flag_k = FK_INC;
    ecx = esi + 0x14; /* 0x1006C036: lea ecx, [esi + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006C039: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006C03D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x1006C03E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C06D; /* 0x1006C041: jne 0x1006c06d */
L_1006C043:
    edi = MEM32(esi + 0x4); /* 0x1006C043: mov edi, dword ptr [esi + 4] */
    PUSH32(esp, 0); /* 0x1006C046: push 0 */
    PUSH32(esp, ecx); /* 0x1006C048: push ecx */
    RECOMP_CALL(sub_1006B168); /* 0x1006C049: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x10); /* 0x1006C04E: mov edx, dword ptr [esi + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1006C051: pop ecx */
    ecx = eax; /* 0x1006C052: mov ecx, eax */
    RECOMP_CALL(sub_1006EF60); /* 0x1006C054: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x29) = (uint8_t)(1); /* 0x1006C059: mov byte ptr [esi + 0x29], 1 */
    ecx = POP32_VAL(esp); /* 0x1006C05D: pop ecx */
    /* test edi, edi */ /* 0x1006C05E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C06D; /* 0x1006C060: je 0x1006c06d */
L_1006C062:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1006C062: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1006C066: mov ecx, edi */
    eax = MEM32(edi); /* 0x1006C068: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006C06A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006C06D:
    ecx = esi; /* 0x1006C06D: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006C06F: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006C074: pop edi */
    esi = POP32_VAL(esp); /* 0x1006C075: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C076: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C077: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C0CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C0CDu);

L_1006C0CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006C0CD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x24; /* 0x1006C0CF: lea eax, [ecx + 0x24] */
    PUSH32(esp, esi); /* 0x1006C0D2: push esi */
    esi = MEM32(ecx + 0x18); /* 0x1006C0D3: mov esi, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006C0D6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1006C0D7: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006C0DB: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x1; /* 0x1006C0DC: lea eax, [esi + 1] */
    esi = POP32_VAL(esp); /* 0x1006C0DF: pop esi */
    /* cmp edx, eax */ /* 0x1006C0E0: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C0EB; /* 0x1006C0E2: jne 0x1006c0eb */
L_1006C0E4:
    PUSH32(esp, ecx); /* 0x1006C0E4: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006C0E5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006C0EA: pop ecx */
L_1006C0EB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C0EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C0EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C0ECu);

L_1006C0EC:
    PUSH32(esp, ebp); /* 0x1006C0EC: push ebp */
    ebp = esp; /* 0x1006C0ED: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006C0EF: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006C0F2: push esi */
    esi = ecx; /* 0x1006C0F3: mov esi, ecx */
    /* test edx, edx */ /* 0x1006C0F5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C0FC; /* 0x1006C0F7: je 0x1006c0fc */
L_1006C0F9:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1006C0F9: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006C0FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006C0FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x20; /* 0x1006C0FE: lea eax, [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006C101: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006C102: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006C106: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x1C) */ /* 0x1006C107: cmp ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C117; /* 0x1006C10A: jne 0x1006c117 */
L_1006C10C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006C10C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1006C10F: mov ecx, esi */
    PUSH32(esp, edx); /* 0x1006C111: push edx */
    RECOMP_CALL(sub_1006BF3E); /* 0x1006C112: call 0x1006bf3e */
    RECOMP_FLAGS_IN();
L_1006C117:
    ecx = esi; /* 0x1006C117: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006C119: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006C11E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x1006C120: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C121: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C122: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C14C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C14Cu);

L_1006C14C:
    PUSH32(esp, ebp); /* 0x1006C14C: push ebp */
    ebp = esp; /* 0x1006C14D: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006C14F: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006C152: push esi */
    esi = ecx; /* 0x1006C153: mov esi, ecx */
    /* test edx, edx */ /* 0x1006C155: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C15C; /* 0x1006C157: je 0x1006c15c */
L_1006C159:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1006C159: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006C15C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006C15C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x20; /* 0x1006C15E: lea eax, [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006C161: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006C162: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006C166: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x1C) */ /* 0x1006C167: cmp ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C182; /* 0x1006C16A: jne 0x1006c182 */
L_1006C16C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006C16C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1006C16F: mov ecx, esi */
    PUSH32(esp, edx); /* 0x1006C171: push edx */
    RECOMP_CALL(sub_1006BF3E); /* 0x1006C172: call 0x1006bf3e */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006C177: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006C179: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006C17E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006C184; /* 0x1006C180: jmp 0x1006c184 */
L_1006C182:
    SET_LO8(eax, 1); /* 0x1006C182: mov al, 1 */
L_1006C184:
    esi = POP32_VAL(esp); /* 0x1006C184: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C185: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C186: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C1C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C1C2u);

L_1006C1C2:
    PUSH32(esp, ebp); /* 0x1006C1C2: push ebp */
    ebp = esp; /* 0x1006C1C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006C1C5: push ecx */
    PUSH32(esp, esi); /* 0x1006C1C6: push esi */
    esi = ecx; /* 0x1006C1C7: mov esi, ecx */
    /* cmp MEM8(esi + 0x29), 0 */ /* 0x1006C1C9: cmp byte ptr [esi + 0x29], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x29)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006C1E9; /* 0x1006C1CD: je 0x1006c1e9 */
L_1006C1CF:
    PUSH32(esp, 0); /* 0x1006C1CF: push 0 */
    eax = ebp + (-0x4); /* 0x1006C1D1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1006C1D4: push eax */
    RECOMP_CALL(sub_1006C14C); /* 0x1006C1D5: call 0x1006c14c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006C1DA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C1E5; /* 0x1006C1DC: je 0x1006c1e5 */
L_1006C1DE:
    ecx = esi; /* 0x1006C1DE: mov ecx, esi */
    RECOMP_CALL(sub_1006C0CD); /* 0x1006C1E0: call 0x1006c0cd */
    RECOMP_FLAGS_IN();
L_1006C1E5:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006C1E5: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006C1EB; /* 0x1006C1E7: jmp 0x1006c1eb */
L_1006C1E9:
    SET_LO8(eax, 1); /* 0x1006C1E9: mov al, 1 */
L_1006C1EB:
    esi = POP32_VAL(esp); /* 0x1006C1EB: pop esi */
    esp = ebp; /* 0x1006C1EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006C1EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C1EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C215(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C215u);

L_1006C215:
    PUSH32(esp, ebp); /* 0x1006C215: push ebp */
    ebp = esp; /* 0x1006C216: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006C218: push ecx */
    PUSH32(esp, esi); /* 0x1006C219: push esi */
    PUSH32(esp, edi); /* 0x1006C21A: push edi */
    esi = ecx; /* 0x1006C21B: mov esi, ecx */
    SET_LO8(eax, LO8(edx)); /* 0x1006C21D: mov al, dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006C21F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1006C221: mov byte ptr [ebp - 1], al */
    /* test esi, esi */ /* 0x1006C224: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C24E; /* 0x1006C226: je 0x1006c24e */
L_1006C228:
    PUSH32(esp, ebx); /* 0x1006C228: push ebx */
L_1006C229:
    ecx = MEM32(esi + 0x4); /* 0x1006C229: mov ecx, dword ptr [esi + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x1006C22C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(esi); /* 0x1006C22E: mov ebx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x1006C230: mov eax, dword ptr [ecx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C239; /* 0x1006C232: je 0x1006c239 */
L_1006C234:
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006C234: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_1006C23C; /* 0x1006C237: jmp 0x1006c23c */
L_1006C239:
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1006C239: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_1006C23C:
    /* test LO8(eax), LO8(eax) */ /* 0x1006C23C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C244; /* 0x1006C23E: je 0x1006c244 */
L_1006C240:
    MEM32(esi) = edi; /* 0x1006C240: mov dword ptr [esi], edi */
    edi = esi; /* 0x1006C242: mov edi, esi */
L_1006C244:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1006C244: mov al, byte ptr [ebp - 1] */
    esi = ebx; /* 0x1006C247: mov esi, ebx */
    /* test ebx, ebx */ /* 0x1006C249: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006C229; /* 0x1006C24B: jne 0x1006c229 */
L_1006C24D:
    ebx = POP32_VAL(esp); /* 0x1006C24D: pop ebx */
L_1006C24E:
    eax = edi; /* 0x1006C24E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006C250: pop edi */
    esi = POP32_VAL(esp); /* 0x1006C251: pop esi */
    esp = ebp; /* 0x1006C252: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006C254: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C255: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C256u);

L_1006C256:
    PUSH32(esp, ebp); /* 0x1006C256: push ebp */
    ebp = esp; /* 0x1006C257: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006C259: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006C25C: push esi */
    PUSH32(esp, edi); /* 0x1006C25D: push edi */
    edi = ecx; /* 0x1006C25E: mov edi, ecx */
    eax = MEM32(edi); /* 0x1006C260: mov eax, dword ptr [edi] */
    /* cmp eax, 1 */ /* 0x1006C262: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006C2BB; /* 0x1006C265: je 0x1006c2bb */
L_1006C267:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1006C267: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = 0x1007A46Cu; /* 0x1006C26B: mov dword ptr [ebp - 0xc], 0x1007a46c */
    goto L_1006C280; /* 0x1006C272: jmp 0x1006c280 */
L_1006C274:
    ecx = ebp + (-0x18); /* 0x1006C274: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10068D76); /* 0x1006C277: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006C27C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C289; /* 0x1006C27E: je 0x1006c289 */
L_1006C280:
    esi = MEM32(edi); /* 0x1006C280: mov esi, dword ptr [edi] */
    /* cmp esi, 1 */ /* 0x1006C282: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006C2BB; /* 0x1006C285: je 0x1006c2bb */
L_1006C287:
    RECOMP_BACKEDGE();
    goto L_1006C274; /* 0x1006C287: jmp 0x1006c274 */
L_1006C289:
    RECOMP_CALL(sub_10023AF4); /* 0x1006C289: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1006C28E: mov dword ptr [ebp - 4], eax */
    ecx = ebp + (-0x8); /* 0x1006C291: lea ecx, [ebp - 8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1006C294: mov dword ptr [ebp - 8], esi */
    eax = esi; /* 0x1006C297: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x1006C299: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x1006C29D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006C2B6; /* 0x1006C29F: je 0x1006c2b6 */
L_1006C2A1:
    edx = eax; /* 0x1006C2A1: mov edx, eax */
    /* cmp eax, 1 */ /* 0x1006C2A3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006C2BB; /* 0x1006C2A6: je 0x1006c2bb */
L_1006C2A8:
    MEM32(ebp + (-0x8)) = eax; /* 0x1006C2A8: mov dword ptr [ebp - 8], eax */
    ecx = ebp + (-0x8); /* 0x1006C2AB: lea ecx, [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x1006C2AE: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006C2B2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006C2A1; /* 0x1006C2B4: jne 0x1006c2a1 */
L_1006C2B6:
    RECOMP_CALL(sub_100698DA); /* 0x1006C2B6: call 0x100698da */
    RECOMP_FLAGS_IN();
L_1006C2BB:
    edi = POP32_VAL(esp); /* 0x1006C2BB: pop edi */
    esi = POP32_VAL(esp); /* 0x1006C2BC: pop esi */
    esp = ebp; /* 0x1006C2BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006C2BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C2C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C2D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C2D1u);

L_1006C2D1:
    PUSH32(esp, ebp); /* 0x1006C2D1: push ebp */
    ebp = esp; /* 0x1006C2D2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C2D4: push esi */
    esi = ecx; /* 0x1006C2D5: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1006C2D7: push dword ptr [esi + 4] */
    MEM32(esi) = 0x10067598u; /* 0x1006C2DA: mov dword ptr [esi], 0x10067598 */
    RECOMP_CALL(sub_10012BD5); /* 0x1006C2E0: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1006C2E5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x1006C2E9: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006C2F3; /* 0x1006C2EA: je 0x1006c2f3 */
L_1006C2EC:
    PUSH32(esp, esi); /* 0x1006C2EC: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006C2ED: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006C2F2: pop ecx */
L_1006C2F3:
    eax = esi; /* 0x1006C2F3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C2F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C2F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C2F7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C2FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C2FAu);

L_1006C2FA:
    PUSH32(esp, ebp); /* 0x1006C2FA: push ebp */
    ebp = esp; /* 0x1006C2FB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C2FD: push esi */
    eax = ebp + 0x8; /* 0x1006C2FE: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C301: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C303: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C304: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1006C309: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x1006C30C: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1006C30F: mov eax, esi */
    MEM32(esi) = 0x100677F4u; /* 0x1006C311: mov dword ptr [esi], 0x100677f4 */
    esi = POP32_VAL(esp); /* 0x1006C317: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C318: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C319: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C31C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C31Cu);

L_1006C31C:
    PUSH32(esp, ebp); /* 0x1006C31C: push ebp */
    ebp = esp; /* 0x1006C31D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C31F: push esi */
    esi = ecx; /* 0x1006C320: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C322: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1006C327: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = eax; /* 0x1006C32A: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1006C32D: mov eax, esi */
    MEM32(esi) = 0x100677F4u; /* 0x1006C32F: mov dword ptr [esi], 0x100677f4 */
    esi = POP32_VAL(esp); /* 0x1006C335: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C336: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C337: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C33A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C33Au);

L_1006C33A:
    eax = MEM32(ecx + 0xC); /* 0x1006C33A: mov eax, dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C33D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C33E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C33Eu);

L_1006C33E:
    PUSH32(esp, ebp); /* 0x1006C33E: push ebp */
    ebp = esp; /* 0x1006C33F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C341: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006C342: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1006C345: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006C347: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006C2FA); /* 0x1006C34A: call 0x1006c2fa */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067834u; /* 0x1006C34F: mov dword ptr [esi], 0x10067834 */
    eax = esi; /* 0x1006C355: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C357: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C358: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C359: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C35C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C35Cu);

L_1006C35C:
    PUSH32(esp, ebp); /* 0x1006C35C: push ebp */
    ebp = esp; /* 0x1006C35D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C35F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006C360: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006C363: mov esi, ecx */
    RECOMP_CALL(sub_1006C31C); /* 0x1006C365: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067834u; /* 0x1006C36A: mov dword ptr [esi], 0x10067834 */
    eax = esi; /* 0x1006C370: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C372: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C373: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C374: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C377(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C377u);

L_1006C377:
    PUSH32(esp, ebp); /* 0x1006C377: push ebp */
    ebp = esp; /* 0x1006C378: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C37A: push esi */
    eax = ebp + 0x8; /* 0x1006C37B: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C37E: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C380: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C381: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677B4u; /* 0x1006C386: mov dword ptr [esi], 0x100677b4 */
    eax = esi; /* 0x1006C38C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C38E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C38F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C390: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C393u);

L_1006C393:
    PUSH32(esp, esi); /* 0x1006C393: push esi */
    esi = ecx; /* 0x1006C394: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C396: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677B4u; /* 0x1006C39B: mov dword ptr [esi], 0x100677b4 */
    eax = esi; /* 0x1006C3A1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C3A3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C3A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C3A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C3A5u);

L_1006C3A5:
    PUSH32(esp, ebp); /* 0x1006C3A5: push ebp */
    ebp = esp; /* 0x1006C3A6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C3A8: push esi */
    eax = ebp + 0x8; /* 0x1006C3A9: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C3AC: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C3AE: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C3AF: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100674D4u; /* 0x1006C3B4: mov dword ptr [esi], 0x100674d4 */
    eax = esi; /* 0x1006C3BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C3BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C3BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C3BE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C3C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C3C1u);

L_1006C3C1:
    PUSH32(esp, esi); /* 0x1006C3C1: push esi */
    esi = ecx; /* 0x1006C3C2: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C3C4: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100674D4u; /* 0x1006C3C9: mov dword ptr [esi], 0x100674d4 */
    eax = esi; /* 0x1006C3CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C3D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C3D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C3D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C3D3u);

L_1006C3D3:
    PUSH32(esp, ebp); /* 0x1006C3D3: push ebp */
    ebp = esp; /* 0x1006C3D4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C3D6: push esi */
    eax = ebp + 0x8; /* 0x1006C3D7: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C3DA: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C3DC: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C3DD: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067634u; /* 0x1006C3E2: mov dword ptr [esi], 0x10067634 */
    eax = esi; /* 0x1006C3E8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C3EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C3EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C3EC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C3EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C3EFu);

L_1006C3EF:
    PUSH32(esp, esi); /* 0x1006C3EF: push esi */
    esi = ecx; /* 0x1006C3F0: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C3F2: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067634u; /* 0x1006C3F7: mov dword ptr [esi], 0x10067634 */
    eax = esi; /* 0x1006C3FD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C3FF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C400: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C401(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C401u);

L_1006C401:
    PUSH32(esp, ebp); /* 0x1006C401: push ebp */
    ebp = esp; /* 0x1006C402: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C404: push esi */
    eax = ebp + 0x8; /* 0x1006C405: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C408: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C40A: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C40B: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067734u; /* 0x1006C410: mov dword ptr [esi], 0x10067734 */
    eax = esi; /* 0x1006C416: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C418: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C419: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C41A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C41D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C41Du);

L_1006C41D:
    PUSH32(esp, esi); /* 0x1006C41D: push esi */
    esi = ecx; /* 0x1006C41E: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C420: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067734u; /* 0x1006C425: mov dword ptr [esi], 0x10067734 */
    eax = esi; /* 0x1006C42B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C42D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C42E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C42F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C42Fu);

L_1006C42F:
    PUSH32(esp, ebp); /* 0x1006C42F: push ebp */
    ebp = esp; /* 0x1006C430: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C432: push esi */
    eax = ebp + 0x8; /* 0x1006C433: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C436: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C438: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C439: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067614u; /* 0x1006C43E: mov dword ptr [esi], 0x10067614 */
    eax = esi; /* 0x1006C444: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C446: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C447: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C448: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C44B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C44Bu);

L_1006C44B:
    PUSH32(esp, esi); /* 0x1006C44B: push esi */
    esi = ecx; /* 0x1006C44C: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C44E: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067614u; /* 0x1006C453: mov dword ptr [esi], 0x10067614 */
    eax = esi; /* 0x1006C459: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C45B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C45C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C45D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C45Du);

L_1006C45D:
    PUSH32(esp, ebp); /* 0x1006C45D: push ebp */
    ebp = esp; /* 0x1006C45E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C460: push esi */
    eax = ebp + 0x8; /* 0x1006C461: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C464: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C466: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C467: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067814u; /* 0x1006C46C: mov dword ptr [esi], 0x10067814 */
    eax = esi; /* 0x1006C472: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C474: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C475: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C476: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C479(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C479u);

L_1006C479:
    PUSH32(esp, esi); /* 0x1006C479: push esi */
    esi = ecx; /* 0x1006C47A: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C47C: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067814u; /* 0x1006C481: mov dword ptr [esi], 0x10067814 */
    eax = esi; /* 0x1006C487: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C489: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C48A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C48B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C48Bu);

L_1006C48B:
    PUSH32(esp, ebp); /* 0x1006C48B: push ebp */
    ebp = esp; /* 0x1006C48C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C48E: push esi */
    eax = ebp + 0x8; /* 0x1006C48F: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C492: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C494: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C495: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675F4u; /* 0x1006C49A: mov dword ptr [esi], 0x100675f4 */
    eax = esi; /* 0x1006C4A0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C4A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C4A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C4A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C4A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C4A7u);

L_1006C4A7:
    PUSH32(esp, esi); /* 0x1006C4A7: push esi */
    esi = ecx; /* 0x1006C4A8: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C4AA: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675F4u; /* 0x1006C4AF: mov dword ptr [esi], 0x100675f4 */
    eax = esi; /* 0x1006C4B5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C4B7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C4B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C4B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C4B9u);

L_1006C4B9:
    PUSH32(esp, ebp); /* 0x1006C4B9: push ebp */
    ebp = esp; /* 0x1006C4BA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C4BC: push esi */
    eax = ebp + 0x8; /* 0x1006C4BD: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C4C0: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C4C2: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C4C3: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067774u; /* 0x1006C4C8: mov dword ptr [esi], 0x10067774 */
    eax = esi; /* 0x1006C4CE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C4D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C4D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C4D2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C4D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C4D5u);

L_1006C4D5:
    PUSH32(esp, esi); /* 0x1006C4D5: push esi */
    esi = ecx; /* 0x1006C4D6: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C4D8: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067774u; /* 0x1006C4DD: mov dword ptr [esi], 0x10067774 */
    eax = esi; /* 0x1006C4E3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C4E5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C4E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C4E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C4E7u);

L_1006C4E7:
    PUSH32(esp, ebp); /* 0x1006C4E7: push ebp */
    ebp = esp; /* 0x1006C4E8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C4EA: push esi */
    eax = ebp + 0x8; /* 0x1006C4EB: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C4EE: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C4F0: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C4F1: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067444u; /* 0x1006C4F6: mov dword ptr [esi], 0x10067444 */
    eax = esi; /* 0x1006C4FC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C4FE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C4FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C500: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C503(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C503u);

L_1006C503:
    PUSH32(esp, esi); /* 0x1006C503: push esi */
    esi = ecx; /* 0x1006C504: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C506: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067444u; /* 0x1006C50B: mov dword ptr [esi], 0x10067444 */
    eax = esi; /* 0x1006C511: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C513: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C514: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C515u);

L_1006C515:
    PUSH32(esp, ebp); /* 0x1006C515: push ebp */
    ebp = esp; /* 0x1006C516: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C518: push esi */
    eax = ebp + 0x8; /* 0x1006C519: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C51C: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C51E: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C51F: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676F4u; /* 0x1006C524: mov dword ptr [esi], 0x100676f4 */
    eax = esi; /* 0x1006C52A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C52C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C52D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C52E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C531u);

L_1006C531:
    PUSH32(esp, esi); /* 0x1006C531: push esi */
    esi = ecx; /* 0x1006C532: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C534: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676F4u; /* 0x1006C539: mov dword ptr [esi], 0x100676f4 */
    eax = esi; /* 0x1006C53F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C541: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C542: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C543(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C543u);

L_1006C543:
    PUSH32(esp, ebp); /* 0x1006C543: push ebp */
    ebp = esp; /* 0x1006C544: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C546: push esi */
    eax = ebp + 0x8; /* 0x1006C547: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C54A: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C54C: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C54D: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067654u; /* 0x1006C552: mov dword ptr [esi], 0x10067654 */
    eax = esi; /* 0x1006C558: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C55A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C55B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C55C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C55F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C55Fu);

L_1006C55F:
    PUSH32(esp, esi); /* 0x1006C55F: push esi */
    esi = ecx; /* 0x1006C560: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C562: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067654u; /* 0x1006C567: mov dword ptr [esi], 0x10067654 */
    eax = esi; /* 0x1006C56D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C56F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C570: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C571(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C571u);

L_1006C571:
    PUSH32(esp, ebp); /* 0x1006C571: push ebp */
    ebp = esp; /* 0x1006C572: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C574: push esi */
    eax = ebp + 0x8; /* 0x1006C575: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C578: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C57A: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C57B: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675D4u; /* 0x1006C580: mov dword ptr [esi], 0x100675d4 */
    eax = esi; /* 0x1006C586: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C588: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C589: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C58A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C58D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C58Du);

L_1006C58D:
    PUSH32(esp, esi); /* 0x1006C58D: push esi */
    esi = ecx; /* 0x1006C58E: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C590: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675D4u; /* 0x1006C595: mov dword ptr [esi], 0x100675d4 */
    eax = esi; /* 0x1006C59B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C59D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C59E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C59F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C59Fu);

L_1006C59F:
    PUSH32(esp, ebp); /* 0x1006C59F: push ebp */
    ebp = esp; /* 0x1006C5A0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C5A2: push esi */
    eax = ebp + 0x8; /* 0x1006C5A3: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C5A6: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C5A8: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C5A9: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067674u; /* 0x1006C5AE: mov dword ptr [esi], 0x10067674 */
    eax = esi; /* 0x1006C5B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C5B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C5B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C5B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C5BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C5BBu);

L_1006C5BB:
    PUSH32(esp, esi); /* 0x1006C5BB: push esi */
    esi = ecx; /* 0x1006C5BC: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C5BE: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067674u; /* 0x1006C5C3: mov dword ptr [esi], 0x10067674 */
    eax = esi; /* 0x1006C5C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C5CB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C5CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C5CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C5CDu);

L_1006C5CD:
    PUSH32(esp, ebp); /* 0x1006C5CD: push ebp */
    ebp = esp; /* 0x1006C5CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C5D0: push esi */
    eax = ebp + 0x8; /* 0x1006C5D1: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C5D4: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C5D6: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C5D7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067714u; /* 0x1006C5DC: mov dword ptr [esi], 0x10067714 */
    eax = esi; /* 0x1006C5E2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C5E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C5E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C5E6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C5E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C5E9u);

L_1006C5E9:
    PUSH32(esp, esi); /* 0x1006C5E9: push esi */
    esi = ecx; /* 0x1006C5EA: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C5EC: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067714u; /* 0x1006C5F1: mov dword ptr [esi], 0x10067714 */
    eax = esi; /* 0x1006C5F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C5F9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C5FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C5FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C5FBu);

L_1006C5FB:
    PUSH32(esp, ebp); /* 0x1006C5FB: push ebp */
    ebp = esp; /* 0x1006C5FC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C5FE: push esi */
    eax = ebp + 0x8; /* 0x1006C5FF: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C602: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C604: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C605: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676B4u; /* 0x1006C60A: mov dword ptr [esi], 0x100676b4 */
    eax = esi; /* 0x1006C610: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C612: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C613: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C614: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C617(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C617u);

L_1006C617:
    PUSH32(esp, esi); /* 0x1006C617: push esi */
    esi = ecx; /* 0x1006C618: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C61A: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676B4u; /* 0x1006C61F: mov dword ptr [esi], 0x100676b4 */
    eax = esi; /* 0x1006C625: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C627: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C628: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C629(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C629u);

L_1006C629:
    PUSH32(esp, ebp); /* 0x1006C629: push ebp */
    ebp = esp; /* 0x1006C62A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C62C: push esi */
    eax = ebp + 0x8; /* 0x1006C62D: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C630: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C632: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C633: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067694u; /* 0x1006C638: mov dword ptr [esi], 0x10067694 */
    eax = esi; /* 0x1006C63E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C640: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C641: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C642: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C645(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C645u);

L_1006C645:
    PUSH32(esp, esi); /* 0x1006C645: push esi */
    esi = ecx; /* 0x1006C646: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C648: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067694u; /* 0x1006C64D: mov dword ptr [esi], 0x10067694 */
    eax = esi; /* 0x1006C653: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C655: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C656: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C657(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C657u);

L_1006C657:
    PUSH32(esp, ebp); /* 0x1006C657: push ebp */
    ebp = esp; /* 0x1006C658: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C65A: push esi */
    eax = ebp + 0x8; /* 0x1006C65B: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C65E: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C660: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C661: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676D4u; /* 0x1006C666: mov dword ptr [esi], 0x100676d4 */
    eax = esi; /* 0x1006C66C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C66E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C66F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C670: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C673(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C673u);

L_1006C673:
    PUSH32(esp, esi); /* 0x1006C673: push esi */
    esi = ecx; /* 0x1006C674: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C676: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100676D4u; /* 0x1006C67B: mov dword ptr [esi], 0x100676d4 */
    eax = esi; /* 0x1006C681: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C683: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C684: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C685(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C685u);

L_1006C685:
    PUSH32(esp, ebp); /* 0x1006C685: push ebp */
    ebp = esp; /* 0x1006C686: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C688: push esi */
    eax = ebp + 0x8; /* 0x1006C689: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C68C: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C68E: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C68F: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067794u; /* 0x1006C694: mov dword ptr [esi], 0x10067794 */
    eax = esi; /* 0x1006C69A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C69C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C69D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C69E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C6A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C6A1u);

L_1006C6A1:
    PUSH32(esp, esi); /* 0x1006C6A1: push esi */
    esi = ecx; /* 0x1006C6A2: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C6A4: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067794u; /* 0x1006C6A9: mov dword ptr [esi], 0x10067794 */
    eax = esi; /* 0x1006C6AF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C6B1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C6B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C6B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C6B3u);

L_1006C6B3:
    PUSH32(esp, ebp); /* 0x1006C6B3: push ebp */
    ebp = esp; /* 0x1006C6B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C6B6: push esi */
    eax = ebp + 0x8; /* 0x1006C6B7: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C6BA: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C6BC: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C6BD: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675B4u; /* 0x1006C6C2: mov dword ptr [esi], 0x100675b4 */
    eax = esi; /* 0x1006C6C8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C6CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C6CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C6CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C6CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C6CFu);

L_1006C6CF:
    PUSH32(esp, esi); /* 0x1006C6CF: push esi */
    esi = ecx; /* 0x1006C6D0: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C6D2: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675B4u; /* 0x1006C6D7: mov dword ptr [esi], 0x100675b4 */
    eax = esi; /* 0x1006C6DD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C6DF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C6E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C6E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C6E1u);

L_1006C6E1:
    PUSH32(esp, ebp); /* 0x1006C6E1: push ebp */
    ebp = esp; /* 0x1006C6E2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C6E4: push esi */
    eax = ebp + 0x8; /* 0x1006C6E5: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C6E8: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C6EA: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C6EB: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067854u; /* 0x1006C6F0: mov dword ptr [esi], 0x10067854 */
    eax = esi; /* 0x1006C6F6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C6F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C6F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C6FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C6FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C6FDu);

L_1006C6FD:
    PUSH32(esp, esi); /* 0x1006C6FD: push esi */
    esi = ecx; /* 0x1006C6FE: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C700: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067854u; /* 0x1006C705: mov dword ptr [esi], 0x10067854 */
    eax = esi; /* 0x1006C70B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C70D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C70E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C70F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C70Fu);

L_1006C70F:
    PUSH32(esp, ebp); /* 0x1006C70F: push ebp */
    ebp = esp; /* 0x1006C710: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C712: push esi */
    eax = ebp + 0x8; /* 0x1006C713: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C716: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C718: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C719: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677D4u; /* 0x1006C71E: mov dword ptr [esi], 0x100677d4 */
    eax = esi; /* 0x1006C724: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C726: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C727: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C728: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C72B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C72Bu);

L_1006C72B:
    PUSH32(esp, esi); /* 0x1006C72B: push esi */
    esi = ecx; /* 0x1006C72C: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C72E: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677D4u; /* 0x1006C733: mov dword ptr [esi], 0x100677d4 */
    eax = esi; /* 0x1006C739: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C73B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C73C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C73D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C73Du);

L_1006C73D:
    PUSH32(esp, ebp); /* 0x1006C73D: push ebp */
    ebp = esp; /* 0x1006C73E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C740: push esi */
    eax = ebp + 0x8; /* 0x1006C741: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C744: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C746: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C747: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067754u; /* 0x1006C74C: mov dword ptr [esi], 0x10067754 */
    eax = esi; /* 0x1006C752: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C754: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C755: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C756: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C759(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C759u);

L_1006C759:
    PUSH32(esp, esi); /* 0x1006C759: push esi */
    esi = ecx; /* 0x1006C75A: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C75C: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067754u; /* 0x1006C761: mov dword ptr [esi], 0x10067754 */
    eax = esi; /* 0x1006C767: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C769: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C76A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C76B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C76Bu);

L_1006C76B:
    PUSH32(esp, ebp); /* 0x1006C76B: push ebp */
    ebp = esp; /* 0x1006C76C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C76E: push esi */
    eax = ebp + 0x8; /* 0x1006C76F: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1006C772: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1006C774: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1006C775: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067484u; /* 0x1006C77A: mov dword ptr [esi], 0x10067484 */
    eax = esi; /* 0x1006C780: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C782: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C783: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C784: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C787(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C787u);

L_1006C787:
    PUSH32(esp, esi); /* 0x1006C787: push esi */
    esi = ecx; /* 0x1006C788: mov esi, ecx */
    RECOMP_CALL(sub_1009DD55); /* 0x1006C78A: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067484u; /* 0x1006C78F: mov dword ptr [esi], 0x10067484 */
    eax = esi; /* 0x1006C795: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C797: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006C798: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006C799(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C799u);

L_1006C799:
    PUSH32(esp, ebp); /* 0x1006C799: push ebp */
    ebp = esp; /* 0x1006C79A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006C79C: push ebx */
    ebx = ecx; /* 0x1006C79D: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006C79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006C7A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006C7A3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1006C7A4: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebx) = 0x10027EFCu; /* 0x1006C7A7: mov dword ptr [ebx], 0x10027efc */
    MEM32(ebx + 0x4) = ecx; /* 0x1006C7AD: mov dword ptr [ebx + 4], ecx */
    PUSH32(esp, edi); /* 0x1006C7B0: push edi */
    edi = ebx + 0x8; /* 0x1006C7B1: lea edi, [ebx + 8] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006C7B4: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006C7B5: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006C7B6: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006C7B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x1006C7B9: mov word ptr [ebx + 0xc], ax */
    eax = MEM32(ebp + 0x8); /* 0x1006C7BD: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x8) = ecx; /* 0x1006C7C0: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x1C) = ecx; /* 0x1006C7C3: mov dword ptr [ebx + 0x1c], ecx */
    MEM32(ebx + 0x20) = ecx; /* 0x1006C7C6: mov dword ptr [ebx + 0x20], ecx */
    ecx = esi; /* 0x1006C7C9: mov ecx, esi */
    MEM32(ebx + 0x14) = eax; /* 0x1006C7CB: mov dword ptr [ebx + 0x14], eax */
    MEM32(ebx + 0x18) = esi; /* 0x1006C7CE: mov dword ptr [ebx + 0x18], esi */
    eax = MEM32(esi); /* 0x1006C7D1: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006C7D3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x24) = eax; /* 0x1006C7D5: mov dword ptr [ebx + 0x24], eax */
    ecx = esi; /* 0x1006C7D8: mov ecx, esi */
    eax = MEM32(esi + 0x28); /* 0x1006C7DA: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0; /* 0x1006C7DD: and dword ptr [ebx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x28) = eax; /* 0x1006C7E1: mov dword ptr [ebx + 0x28], eax */
    eax = MEM32(esi); /* 0x1006C7E4: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006C7E6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006C7E9: pop edi */
    MEM32(ebx + 0x2C) = eax; /* 0x1006C7EA: mov dword ptr [ebx + 0x2c], eax */
    eax = ebx; /* 0x1006C7ED: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x1006C7EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006C7F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006C7F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006C7F2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006C87F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C87Fu);

L_1006C87F:
    PUSH32(esp, ebp); /* 0x1006C87F: push ebp */
    ebp = esp; /* 0x1006C880: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006C882: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006C883: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006C886: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006C888: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067694u; /* 0x1006C88D: mov dword ptr [esi], 0x10067694 */
    eax = esi; /* 0x1006C893: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006C895: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006C896: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006C897: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006C9DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006C9DAu);

L_1006C9DA:
    PUSH32(esp, ebp); /* 0x1006C9DA: push ebp */
    ebp = esp; /* 0x1006C9DB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006C9DD: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1006C9E0: push ebx */
    PUSH32(esp, esi); /* 0x1006C9E1: push esi */
    esi = ecx; /* 0x1006C9E2: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - 1; /* 0x1006C9E4: dec dword ptr [esi + 0x30] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006CA79; /* 0x1006C9E7: jne 0x1006ca79 */
L_1006C9ED:
    eax = MEM32(esi + 0x14); /* 0x1006C9ED: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1006C9F0: push dword ptr [esi + 0x20] */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1006C9F3: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0xC); /* 0x1006C9F7: mov eax, dword ptr [eax + 0xc] */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006C9FA: setne bl */
    PUSH32(esp, MEM32(eax + 0x70)); /* 0x1006C9FD: push dword ptr [eax + 0x70] */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x1006CA00: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006CA06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CA0F; /* 0x1006CA08: jne 0x1006ca0f */
L_1006CA0A:
    RECOMP_CALL(sub_1006EE8E); /* 0x1006CA0A: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
L_1006CA0F:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x1006CA0F: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x18); /* 0x1006CA13: mov ecx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x1006CA16: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CA58; /* 0x1006CA18: jne 0x1006ca58 */
L_1006CA1A:
    ecx = MEM32(esi + 0x14); /* 0x1006CA1A: mov ecx, dword ptr [esi + 0x14] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006CA1D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006CA1F: sete al */
    eax = (uint32_t)LO8(eax); /* 0x1006CA22: movzx eax, al */
    PUSH32(esp, eax); /* 0x1006CA25: push eax */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x1006CA26: push dword ptr [esi + 0x28] */
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1006CA29: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_100757FA); /* 0x1006CA2C: call 0x100757fa */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006CA31: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CA79; /* 0x1006CA33: jne 0x1006ca79 */
L_1006CA35:
    RECOMP_ICALL(MEM32(0x100E504C)); /* 0x1006CA35: call dword ptr [0x100e504c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006CA3B: push eax */
    ecx = esi + 0x8; /* 0x1006CA3C: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_1006F904); /* 0x1006CA3F: call 0x1006f904 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x1006CA44: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, esi); /* 0x1006CA47: push esi */
    RECOMP_CALL(sub_10075D49); /* 0x1006CA48: call 0x10075d49 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x1006CA4D: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, esi); /* 0x1006CA50: push esi */
    RECOMP_CALL(sub_10075C64); /* 0x1006CA51: call 0x10075c64 */
    RECOMP_FLAGS_IN();
    goto L_1006CA79; /* 0x1006CA56: jmp 0x1006ca79 */
L_1006CA58:
    RECOMP_CALL(sub_1006C9DA); /* 0x1006CA58: call 0x1006c9da */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x1006CA5D: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, esi); /* 0x1006CA60: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC4u; /* 0x1006CA61: add ecx, 0xc4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10075F4B); /* 0x1006CA67: call 0x10075f4b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006CA6C: push esi */
    MEM32(esi) = 0x10027EFCu; /* 0x1006CA6D: mov dword ptr [esi], 0x10027efc */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006CA73: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006CA78: pop ecx */
L_1006CA79:
    esi = POP32_VAL(esp); /* 0x1006CA79: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006CA7A: pop ebx */
    esp = ebp; /* 0x1006CA7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006CA7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006CA7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006CA7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CA7Fu);

L_1006CA7F:
    PUSH32(esp, ebp); /* 0x1006CA7F: push ebp */
    ebp = esp; /* 0x1006CA80: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006CA82: push ecx */
    PUSH32(esp, ecx); /* 0x1006CA83: push ecx */
    eax = MEM32(ecx + 0x14); /* 0x1006CA84: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x1006CA87: push ebx */
    PUSH32(esp, esi); /* 0x1006CA88: push esi */
    PUSH32(esp, edi); /* 0x1006CA89: push edi */
    ebx = MEM32(eax + 0xC); /* 0x1006CA8A: mov ebx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006CA8D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x28); /* 0x1006CA8F: mov eax, dword ptr [ecx + 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006CA92: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x24); /* 0x1006CA95: mov eax, dword ptr [ecx + 0x24] */
    esi = ebx + 0x2C; /* 0x1006CA98: lea esi, [ebx + 0x2c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006CA9B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1006CA9E: push esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x1006CA9F: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x64); /* 0x1006CAA5: mov ecx, dword ptr [ebx + 0x64] */
    /* test ecx, ecx */ /* 0x1006CAA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006CAB1; /* 0x1006CAAA: je 0x1006cab1 */
L_1006CAAC:
    ecx = MEM32(ecx + 0x18); /* 0x1006CAAC: mov ecx, dword ptr [ecx + 0x18] */
    goto L_1006CAB3; /* 0x1006CAAF: jmp 0x1006cab3 */
L_1006CAB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006CAB1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006CAB3:
    /* test ecx, ecx */ /* 0x1006CAB3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006CAE1; /* 0x1006CAB5: je 0x1006cae1 */
L_1006CAB7:
    edx = (uint32_t)((int32_t)MEM32(ebp + (-0x4)) * (int32_t)0x34u); /* 0x1006CAB7: imul edx, dword ptr [ebp - 4], 0x34 */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x8)) * (int32_t)0x34u); /* 0x1006CABB: imul eax, dword ptr [ebp - 8], 0x34 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006CABF: mov dword ptr [ebp - 8], eax */
L_1006CAC2:
    eax = MEM32(ecx + 0x10); /* 0x1006CAC2: mov eax, dword ptr [ecx + 0x10] */
    eax = MEM32(edx + eax + 0x30); /* 0x1006CAC5: mov eax, dword ptr [edx + eax + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x1006CAC9: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x18); /* 0x1006CACC: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1006CACF: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x64) */ /* 0x1006CAD1: cmp ecx, dword ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006CADB; /* 0x1006CAD4: je 0x1006cadb */
L_1006CAD6:
    ecx = MEM32(ecx + 0x18); /* 0x1006CAD6: mov ecx, dword ptr [ecx + 0x18] */
    goto L_1006CADD; /* 0x1006CAD9: jmp 0x1006cadd */
L_1006CADB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006CADB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006CADD:
    /* test ecx, ecx */ /* 0x1006CADD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CAC2; /* 0x1006CADF: jne 0x1006cac2 */
L_1006CAE1:
    PUSH32(esp, esi); /* 0x1006CAE1: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x1006CAE2: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1006CAE8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006CAEA: pop edi */
    esi = POP32_VAL(esp); /* 0x1006CAEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006CAEC: pop ebx */
    esp = ebp; /* 0x1006CAED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006CAEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006CAF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006CB06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CB06u);

L_1006CB06:
    PUSH32(esp, ebp); /* 0x1006CB06: push ebp */
    ebp = esp; /* 0x1006CB07: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006CB09: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006CB0A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1006CB0D: push edi */
    PUSH32(esp, esi); /* 0x1006CB0E: push esi */
    edi = ecx; /* 0x1006CB0F: mov edi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006CB11: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0x100677F4u; /* 0x1006CB16: mov dword ptr [edi], 0x100677f4 */
    eax = MEM32(esi + 0xC); /* 0x1006CB1C: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x1006CB1F: mov dword ptr [edi + 0xc], eax */
    eax = edi; /* 0x1006CB22: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006CB24: pop edi */
    esi = POP32_VAL(esp); /* 0x1006CB25: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006CB26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006CB27: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006CB49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CB49u);

L_1006CB49:
    PUSH32(esp, ebp); /* 0x1006CB49: push ebp */
    ebp = esp; /* 0x1006CB4A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006CB4C: push ecx */
    PUSH32(esp, esi); /* 0x1006CB4D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006CB4E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x1006CB51: push dword ptr [esi + 0xac] */
    RECOMP_ICALL(MEM32(0x100E5148)); /* 0x1006CB57: call dword ptr [0x100e5148] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x1006CB5D: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, 0); /* 0x1006CB60: push 0 */
    PUSH32(esp, esi); /* 0x1006CB62: push esi */
    RECOMP_CALL(sub_10033DB3); /* 0x1006CB63: call 0x10033db3 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006CB68: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006CB69: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006CB6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006CB6B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006CBA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CBA7u);

L_1006CBA7:
    PUSH32(esp, ebp); /* 0x1006CBA7: push ebp */
    ebp = esp; /* 0x1006CBA8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006CBAA: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006CBAD: push esi */
    esi = ecx; /* 0x1006CBAE: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x1006CBB0: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1006CBB5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006CBF5; /* 0x1006CBB7: je 0x1006cbf5 */
L_1006CBB9:
    ecx = MEM32(esi + 0x1C); /* 0x1006CBB9: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1006CBBC: push dword ptr [esi + 8] */
    eax = MEM32(ecx); /* 0x1006CBBF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006CBC1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006CBC4: push eax */
    PUSH32(esp, ecx); /* 0x1006CBC5: push ecx */
    PUSH32(esp, 4); /* 0x1006CBC6: push 4 */
    RECOMP_CALL(sub_10023B01); /* 0x1006CBC8: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x2C; /* 0x1006CBCD: lea eax, [esi + 0x2c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006CBD0: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006CBD3: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1006CBD7: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006CBEB; /* 0x1006CBD8: jne 0x1006cbeb */
L_1006CBDA:
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x1006CBDA: push dword ptr [esi + 0xa8] */
    RECOMP_ICALL(MEM32(0x100E5140)); /* 0x1006CBE0: call dword ptr [0x100e5140] */
    RECOMP_FLAGS_IN();
L_1006CBE6:
    esi = POP32_VAL(esp); /* 0x1006CBE6: pop esi */
    esp = ebp; /* 0x1006CBE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006CBE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006CBEA: ret  */
L_1006CBEB:
    eax = ecx + 0x1; /* 0x1006CBEB: lea eax, [ecx + 1] */
    /* cmp eax, 1 */ /* 0x1006CBEE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006CC0B; /* 0x1006CBF1: ja 0x1006cc0b */
L_1006CBF3:
    RECOMP_BACKEDGE();
    goto L_1006CBE6; /* 0x1006CBF3: jmp 0x1006cbe6 */
L_1006CBF5:
    ecx = ebp + (-0xC); /* 0x1006CBF5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006CBF8: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x10067774u; /* 0x1006CBFD: mov dword ptr [ebp - 0xc], 0x10067774 */
    PUSH32(esp, 0x100DCF5Cu); /* 0x1006CC04: push 0x100dcf5c */
    goto L_1006CC1F; /* 0x1006CC09: jmp 0x1006cc1f */
L_1006CC0B:
    ecx = ebp + (-0xC); /* 0x1006CC0B: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006CC0E: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x100675F4u; /* 0x1006CC13: mov dword ptr [ebp - 0xc], 0x100675f4 */
    PUSH32(esp, 0x100DCF78u); /* 0x1006CC1A: push 0x100dcf78 */
L_1006CC1F:
    eax = ebp + (-0xC); /* 0x1006CC1F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1006CC22: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006CC23: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006CC28u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006CC29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CC29u);

L_1006CC29:
    PUSH32(esp, ebp); /* 0x1006CC29: push ebp */
    ebp = esp; /* 0x1006CC2A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006CC2C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006CC2D: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006CC30: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006CC32: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675F4u; /* 0x1006CC37: mov dword ptr [esi], 0x100675f4 */
    eax = esi; /* 0x1006CC3D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006CC3F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006CC40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006CC41: ret 4 */
    RECOMP_REGS_OUT();
}
