#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1415F5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F5D0u);

L_1415F5D0:
    eax = MEM32(edx + 0x50); /* 0x1415F5D0: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415F5D3: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F5D8: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F60F; /* 0x1415F5DB: je 0x1415f60f */
L_1415F5DD:
    eax = MEM32(ecx + 0x50); /* 0x1415F5DD: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415F5E0: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F5E5: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F60F; /* 0x1415F5E8: je 0x1415f60f */
L_1415F5EA:
    eax = MEM32(edx + 0xC8); /* 0x1415F5EA: mov eax, dword ptr [edx + 0xc8] */
    /* cmp eax, MEM32(ecx + 0xC8) */ /* 0x1415F5F0: cmp eax, dword ptr [ecx + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F60C; /* 0x1415F5F6: jne 0x1415f60c */
L_1415F5F8:
    eax = MEM32(edx + 0xCC); /* 0x1415F5F8: mov eax, dword ptr [edx + 0xcc] */
    /* cmp eax, MEM32(ecx + 0xCC) */ /* 0x1415F5FE: cmp eax, dword ptr [ecx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F60C; /* 0x1415F604: jne 0x1415f60c */
L_1415F606:
    eax = 1; /* 0x1415F606: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F60B: ret  */
L_1415F60C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415F60C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F60E: ret  */
L_1415F60F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1415F60F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F611: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F620u);

L_1415F620:
    edi = edi; /* 0x1415F620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415F622: push ebp */
    ebp = esp; /* 0x1415F623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1415F625: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1415F628: push ebx */
    PUSH32(esp, esi); /* 0x1415F629: push esi */
    esi = ecx; /* 0x1415F62A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1415F62C: push edi */
    edi = eax; /* 0x1415F62D: mov edi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1415F62F: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F69F; /* 0x1415F632: je 0x1415f69f */
L_1415F634:
    eax = MEM32(esi + 0x50); /* 0x1415F634: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415F637: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F63C: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F69F; /* 0x1415F63F: je 0x1415f69f */
L_1415F641:
    /* test MEM8(edi + 0xB0B0), 4 */ /* 0x1415F641: test byte ptr [edi + 0xb0b0], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0xB0B0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F66F; /* 0x1415F648: je 0x1415f66f */
L_1415F64A:
    ecx = MEM32(esi + 0xC8); /* 0x1415F64A: mov ecx, dword ptr [esi + 0xc8] */
    edx = MEM32(esi + 0xCC); /* 0x1415F650: mov edx, dword ptr [esi + 0xcc] */
    eax = ecx; /* 0x1415F656: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1415F658: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F68B; /* 0x1415F65A: je 0x1415f68b */
L_1415F65C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1415F65C: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1415F65E: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F69F; /* 0x1415F661: jne 0x1415f69f */
L_1415F663:
    eax = 1; /* 0x1415F663: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x1415F668: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F669: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415F66A: pop ebx */
    esp = ebp; /* 0x1415F66B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F66D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F66E: ret  */
L_1415F66F:
    ebx = ebp + (-0x8); /* 0x1415F66F: lea ebx, [ebp - 8] */
    RECOMP_CALL(sub_1415EF60); /* 0x1415F672: call 0x1415ef60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1415F677: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1415F69F; /* 0x1415F679: js 0x1415f69f */
L_1415F67B:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1415F67B: fld qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1415F67E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415F680: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415F682: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415F684: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415F694; /* 0x1415F687: jp 0x1415f694 */
L_1415F689:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415F689: fstp st(0) */
L_1415F68B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415F68B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1415F68D: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F68E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415F68F: pop ebx */
    esp = ebp; /* 0x1415F690: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F693: ret  */
L_1415F694:
    fp_push(1.0); /* 0x1415F694: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415F696: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415F698: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415F69A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1415F663; /* 0x1415F69D: jnp 0x1415f663 */
L_1415F69F:
    edi = POP32_VAL(esp); /* 0x1415F69F: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F6A0: pop esi */
    eax = 2; /* 0x1415F6A1: mov eax, 2 */
    ebx = POP32_VAL(esp); /* 0x1415F6A6: pop ebx */
    esp = ebp; /* 0x1415F6A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F6A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F6AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F6B0u);

L_1415F6B0:
    edi = edi; /* 0x1415F6B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415F6B2: push ebp */
    ebp = esp; /* 0x1415F6B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415F6B5: sub esp, 8 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1415F6B8: fldz  */
    eax = MEM32(ecx + 0x54); /* 0x1415F6BA: mov eax, dword ptr [ecx + 0x54] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(0xFE0FFFFFu);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) & 0xFE0FFFFFu; /* 0x1415F6BD: and dword ptr [ecx + 0x50], 0xfe0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xC0) = _v; } /* 0x1415F6C4: fstp qword ptr [ecx + 0xc0] */
    MEM32(ebp + (-0x8)) = 0; /* 0x1415F6CA: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x4)) = 0xFFF00000u; /* 0x1415F6D1: mov dword ptr [ebp - 4], 0xfff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1415F6D8: fld qword ptr [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x1415F6DB: mov dword ptr [ebp - 8], 0 */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xD8) = _v; } /* 0x1415F6E2: fstp qword ptr [ecx + 0xd8] */
    MEM32(ebp + (-0x4)) = 0x7FF00000u; /* 0x1415F6E8: mov dword ptr [ebp - 4], 0x7ff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1415F6EF: fld qword ptr [ebp - 8] */
    MEM32(ecx + 0xE8) = 0; /* 0x1415F6F2: mov dword ptr [ecx + 0xe8], 0 */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xE0) = _v; } /* 0x1415F6FC: fstp qword ptr [ecx + 0xe0] */
    MEM32(ecx + 0xEC) = 0x80000000u; /* 0x1415F702: mov dword ptr [ecx + 0xec], 0x80000000 */
    MEM32(ecx + 0xF0) = 0xFFFFFFFFu; /* 0x1415F70C: mov dword ptr [ecx + 0xf0], 0xffffffff */
    MEM32(ecx + 0xF4) = 0x7FFFFFFFu; /* 0x1415F716: mov dword ptr [ecx + 0xf4], 0x7fffffff */
    MEM32(ecx + 0xF8) = 0; /* 0x1415F720: mov dword ptr [ecx + 0xf8], 0 */
    MEM32(ecx + 0xFC) = 0; /* 0x1415F72A: mov dword ptr [ecx + 0xfc], 0 */
    MEM32(ecx + 0x100) = 0xFFFFFFFFu; /* 0x1415F734: mov dword ptr [ecx + 0x100], 0xffffffff */
    MEM32(ecx + 0x104) = 0xFFFFFFFFu; /* 0x1415F73E: mov dword ptr [ecx + 0x104], 0xffffffff */
    MEM32(ecx + 0xC8) = 0; /* 0x1415F748: mov dword ptr [ecx + 0xc8], 0 */
    MEM32(ecx + 0xCC) = 0; /* 0x1415F752: mov dword ptr [ecx + 0xcc], 0 */
    MEM32(ecx + 0xD0) = 0; /* 0x1415F75C: mov dword ptr [ecx + 0xd0], 0 */
    MEM32(ecx + 0xD4) = 0; /* 0x1415F766: mov dword ptr [ecx + 0xd4], 0 */
    MEM32(ecx + 0x54) = eax; /* 0x1415F770: mov dword ptr [ecx + 0x54], eax */
    esp = ebp; /* 0x1415F773: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F776: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F780u);

L_1415F780:
    edi = edi; /* 0x1415F780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415F782: push ebp */
    ebp = esp; /* 0x1415F783: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415F785: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1415F788: push esi */
    PUSH32(esp, edi); /* 0x1415F789: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1415F78A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F791; /* 0x1415F78D: jne 0x1415f791 */
L_1415F78F:
    eax = ecx; /* 0x1415F78F: mov eax, ecx */
L_1415F791:
    eax = MEM32(eax + 0x60); /* 0x1415F791: mov eax, dword ptr [eax + 0x60] */
    esi = MEM32(eax + 0x8); /* 0x1415F794: mov esi, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1415F797: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1415F79A: mov dword ptr [ebp - 4], eax */
    eax = esi; /* 0x1415F79D: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x1415F79F: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F7A4: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F7B4; /* 0x1415F7A7: je 0x1415f7b4 */
L_1415F7A9:
    edx = MEM32(edx + 0xB1F4); /* 0x1415F7A9: mov edx, dword ptr [edx + 0xb1f4] */
    esi = MEM32(ecx + 0x60); /* 0x1415F7AF: mov esi, dword ptr [ecx + 0x60] */
    goto L_1415F7D0; /* 0x1415F7B2: jmp 0x1415f7d0 */
L_1415F7B4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00200000u);
    esi = esi & 0x00200000u; /* 0x1415F7B4: and esi, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0)); _flag_b = (uint32_t)((esi | 0));
    esi = esi | 0; /* 0x1415F7BA: or esi, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x60); /* 0x1415F7BD: mov esi, dword ptr [ecx + 0x60] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F7CA; /* 0x1415F7C0: je 0x1415f7ca */
L_1415F7C2:
    edx = MEM32(edx + 0xB1E0); /* 0x1415F7C2: mov edx, dword ptr [edx + 0xb1e0] */
    goto L_1415F7D0; /* 0x1415F7C8: jmp 0x1415f7d0 */
L_1415F7CA:
    edx = MEM32(edx + 0xB1AC); /* 0x1415F7CA: mov edx, dword ptr [edx + 0xb1ac] */
L_1415F7D0:
    /* cmp esi, edx */ /* 0x1415F7D0: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F837; /* 0x1415F7D2: je 0x1415f837 */
L_1415F7D4:
    /* test esi, esi */ /* 0x1415F7D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F7FE; /* 0x1415F7D6: je 0x1415f7fe */
L_1415F7D8:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1415F7D8: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F7FE; /* 0x1415F7DB: je 0x1415f7fe */
L_1415F7DD:
    edi = MEM32(ecx + 0x4); /* 0x1415F7DD: mov edi, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x1415F7E0: mov eax, dword ptr [ecx] */
    /* test edi, edi */ /* 0x1415F7E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F7EA; /* 0x1415F7E4: je 0x1415f7ea */
L_1415F7E6:
    MEM32(edi) = eax; /* 0x1415F7E6: mov dword ptr [edi], eax */
    goto L_1415F7ED; /* 0x1415F7E8: jmp 0x1415f7ed */
L_1415F7EA:
    MEM32(esi + 0x28) = eax; /* 0x1415F7EA: mov dword ptr [esi + 0x28], eax */
L_1415F7ED:
    edi = MEM32(ecx); /* 0x1415F7ED: mov edi, dword ptr [ecx] */
    eax = MEM32(ecx + 0x4); /* 0x1415F7EF: mov eax, dword ptr [ecx + 4] */
    /* test edi, edi */ /* 0x1415F7F2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F7FB; /* 0x1415F7F4: je 0x1415f7fb */
L_1415F7F6:
    MEM32(edi + 0x4) = eax; /* 0x1415F7F6: mov dword ptr [edi + 4], eax */
    goto L_1415F7FE; /* 0x1415F7F9: jmp 0x1415f7fe */
L_1415F7FB:
    MEM32(esi + 0x2C) = eax; /* 0x1415F7FB: mov dword ptr [esi + 0x2c], eax */
L_1415F7FE:
    /* test edx, edx */ /* 0x1415F7FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F834; /* 0x1415F800: je 0x1415f834 */
L_1415F802:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1415F802: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F834; /* 0x1415F805: je 0x1415f834 */
L_1415F807:
    eax = MEM32(edx + 0x2C); /* 0x1415F807: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ecx + 0x4) = eax; /* 0x1415F80A: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x2C); /* 0x1415F80D: mov eax, dword ptr [edx + 0x2c] */
    /* test eax, eax */ /* 0x1415F810: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F828; /* 0x1415F812: je 0x1415f828 */
L_1415F814:
    MEM32(eax) = ecx; /* 0x1415F814: mov dword ptr [eax], ecx */
    MEM32(ecx) = 0; /* 0x1415F816: mov dword ptr [ecx], 0 */
    MEM32(edx + 0x2C) = ecx; /* 0x1415F81C: mov dword ptr [edx + 0x2c], ecx */
    MEM32(ecx + 0x60) = edx; /* 0x1415F81F: mov dword ptr [ecx + 0x60], edx */
    edi = POP32_VAL(esp); /* 0x1415F822: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F823: pop esi */
    esp = ebp; /* 0x1415F824: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F826: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F827: ret  */
L_1415F828:
    MEM32(edx + 0x28) = ecx; /* 0x1415F828: mov dword ptr [edx + 0x28], ecx */
    MEM32(ecx) = 0; /* 0x1415F82B: mov dword ptr [ecx], 0 */
    MEM32(edx + 0x2C) = ecx; /* 0x1415F831: mov dword ptr [edx + 0x2c], ecx */
L_1415F834:
    MEM32(ecx + 0x60) = edx; /* 0x1415F834: mov dword ptr [ecx + 0x60], edx */
L_1415F837:
    edi = POP32_VAL(esp); /* 0x1415F837: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F838: pop esi */
    esp = ebp; /* 0x1415F839: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F83B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F83C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F850u);

L_1415F850:
    edi = edi; /* 0x1415F850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415F852: push ebp */
    ebp = esp; /* 0x1415F853: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415F855: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1415F858: push esi */
    PUSH32(esp, edi); /* 0x1415F859: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1415F85A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F861; /* 0x1415F85D: jne 0x1415f861 */
L_1415F85F:
    eax = ecx; /* 0x1415F85F: mov eax, ecx */
L_1415F861:
    eax = MEM32(eax + 0x60); /* 0x1415F861: mov eax, dword ptr [eax + 0x60] */
    esi = MEM32(eax + 0x8); /* 0x1415F864: mov esi, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1415F867: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1415F86A: mov dword ptr [ebp - 4], eax */
    eax = esi; /* 0x1415F86D: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x1415F86F: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F874: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F884; /* 0x1415F877: je 0x1415f884 */
L_1415F879:
    edx = MEM32(edx + 0xB1E8); /* 0x1415F879: mov edx, dword ptr [edx + 0xb1e8] */
    esi = MEM32(ecx + 0x60); /* 0x1415F87F: mov esi, dword ptr [ecx + 0x60] */
    goto L_1415F8A0; /* 0x1415F882: jmp 0x1415f8a0 */
L_1415F884:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00200000u);
    esi = esi & 0x00200000u; /* 0x1415F884: and esi, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0)); _flag_b = (uint32_t)((esi | 0));
    esi = esi | 0; /* 0x1415F88A: or esi, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x60); /* 0x1415F88D: mov esi, dword ptr [ecx + 0x60] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F89A; /* 0x1415F890: je 0x1415f89a */
L_1415F892:
    edx = MEM32(edx + 0xB1D8); /* 0x1415F892: mov edx, dword ptr [edx + 0xb1d8] */
    goto L_1415F8A0; /* 0x1415F898: jmp 0x1415f8a0 */
L_1415F89A:
    edx = MEM32(edx + 0xB198); /* 0x1415F89A: mov edx, dword ptr [edx + 0xb198] */
L_1415F8A0:
    /* cmp esi, edx */ /* 0x1415F8A0: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F907; /* 0x1415F8A2: je 0x1415f907 */
L_1415F8A4:
    /* test esi, esi */ /* 0x1415F8A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F8CE; /* 0x1415F8A6: je 0x1415f8ce */
L_1415F8A8:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1415F8A8: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F8CE; /* 0x1415F8AB: je 0x1415f8ce */
L_1415F8AD:
    edi = MEM32(ecx + 0x4); /* 0x1415F8AD: mov edi, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x1415F8B0: mov eax, dword ptr [ecx] */
    /* test edi, edi */ /* 0x1415F8B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F8BA; /* 0x1415F8B4: je 0x1415f8ba */
L_1415F8B6:
    MEM32(edi) = eax; /* 0x1415F8B6: mov dword ptr [edi], eax */
    goto L_1415F8BD; /* 0x1415F8B8: jmp 0x1415f8bd */
L_1415F8BA:
    MEM32(esi + 0x28) = eax; /* 0x1415F8BA: mov dword ptr [esi + 0x28], eax */
L_1415F8BD:
    edi = MEM32(ecx); /* 0x1415F8BD: mov edi, dword ptr [ecx] */
    eax = MEM32(ecx + 0x4); /* 0x1415F8BF: mov eax, dword ptr [ecx + 4] */
    /* test edi, edi */ /* 0x1415F8C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F8CB; /* 0x1415F8C4: je 0x1415f8cb */
L_1415F8C6:
    MEM32(edi + 0x4) = eax; /* 0x1415F8C6: mov dword ptr [edi + 4], eax */
    goto L_1415F8CE; /* 0x1415F8C9: jmp 0x1415f8ce */
L_1415F8CB:
    MEM32(esi + 0x2C) = eax; /* 0x1415F8CB: mov dword ptr [esi + 0x2c], eax */
L_1415F8CE:
    /* test edx, edx */ /* 0x1415F8CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F904; /* 0x1415F8D0: je 0x1415f904 */
L_1415F8D2:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1415F8D2: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415F904; /* 0x1415F8D5: je 0x1415f904 */
L_1415F8D7:
    eax = MEM32(edx + 0x2C); /* 0x1415F8D7: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ecx + 0x4) = eax; /* 0x1415F8DA: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x2C); /* 0x1415F8DD: mov eax, dword ptr [edx + 0x2c] */
    /* test eax, eax */ /* 0x1415F8E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415F8F8; /* 0x1415F8E2: je 0x1415f8f8 */
L_1415F8E4:
    MEM32(eax) = ecx; /* 0x1415F8E4: mov dword ptr [eax], ecx */
    MEM32(ecx) = 0; /* 0x1415F8E6: mov dword ptr [ecx], 0 */
    MEM32(edx + 0x2C) = ecx; /* 0x1415F8EC: mov dword ptr [edx + 0x2c], ecx */
    MEM32(ecx + 0x60) = edx; /* 0x1415F8EF: mov dword ptr [ecx + 0x60], edx */
    edi = POP32_VAL(esp); /* 0x1415F8F2: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F8F3: pop esi */
    esp = ebp; /* 0x1415F8F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F8F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F8F7: ret  */
L_1415F8F8:
    MEM32(edx + 0x28) = ecx; /* 0x1415F8F8: mov dword ptr [edx + 0x28], ecx */
    MEM32(ecx) = 0; /* 0x1415F8FB: mov dword ptr [ecx], 0 */
    MEM32(edx + 0x2C) = ecx; /* 0x1415F901: mov dword ptr [edx + 0x2c], ecx */
L_1415F904:
    MEM32(ecx + 0x60) = edx; /* 0x1415F904: mov dword ptr [ecx + 0x60], edx */
L_1415F907:
    edi = POP32_VAL(esp); /* 0x1415F907: pop edi */
    esi = POP32_VAL(esp); /* 0x1415F908: pop esi */
    esp = ebp; /* 0x1415F909: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415F90B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F90C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F920u);

L_1415F920:
    fp_push(*(double*)ADDR(edx + 0xC0)); /* 0x1415F920: fld qword ptr [edx + 0xc0] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xC0) = _v; } /* 0x1415F926: fstp qword ptr [ecx + 0xc0] */
    eax = MEM32(edx + 0xC8); /* 0x1415F92C: mov eax, dword ptr [edx + 0xc8] */
    MEM32(ecx + 0xC8) = eax; /* 0x1415F932: mov dword ptr [ecx + 0xc8], eax */
    eax = MEM32(edx + 0xCC); /* 0x1415F938: mov eax, dword ptr [edx + 0xcc] */
    MEM32(ecx + 0xCC) = eax; /* 0x1415F93E: mov dword ptr [ecx + 0xcc], eax */
    eax = MEM32(edx + 0xD0); /* 0x1415F944: mov eax, dword ptr [edx + 0xd0] */
    MEM32(ecx + 0xD0) = eax; /* 0x1415F94A: mov dword ptr [ecx + 0xd0], eax */
    eax = MEM32(edx + 0xD4); /* 0x1415F950: mov eax, dword ptr [edx + 0xd4] */
    MEM32(ecx + 0xD4) = eax; /* 0x1415F956: mov dword ptr [ecx + 0xd4], eax */
    fp_push(*(double*)ADDR(edx + 0xD8)); /* 0x1415F95C: fld qword ptr [edx + 0xd8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xD8) = _v; } /* 0x1415F962: fstp qword ptr [ecx + 0xd8] */
    fp_push(*(double*)ADDR(edx + 0xE0)); /* 0x1415F968: fld qword ptr [edx + 0xe0] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xE0) = _v; } /* 0x1415F96E: fstp qword ptr [ecx + 0xe0] */
    eax = MEM32(edx + 0xE8); /* 0x1415F974: mov eax, dword ptr [edx + 0xe8] */
    MEM32(ecx + 0xE8) = eax; /* 0x1415F97A: mov dword ptr [ecx + 0xe8], eax */
    eax = MEM32(edx + 0xEC); /* 0x1415F980: mov eax, dword ptr [edx + 0xec] */
    MEM32(ecx + 0xEC) = eax; /* 0x1415F986: mov dword ptr [ecx + 0xec], eax */
    eax = MEM32(edx + 0xF0); /* 0x1415F98C: mov eax, dword ptr [edx + 0xf0] */
    MEM32(ecx + 0xF0) = eax; /* 0x1415F992: mov dword ptr [ecx + 0xf0], eax */
    eax = MEM32(edx + 0xF4); /* 0x1415F998: mov eax, dword ptr [edx + 0xf4] */
    MEM32(ecx + 0xF4) = eax; /* 0x1415F99E: mov dword ptr [ecx + 0xf4], eax */
    eax = MEM32(edx + 0xF8); /* 0x1415F9A4: mov eax, dword ptr [edx + 0xf8] */
    MEM32(ecx + 0xF8) = eax; /* 0x1415F9AA: mov dword ptr [ecx + 0xf8], eax */
    eax = MEM32(edx + 0xFC); /* 0x1415F9B0: mov eax, dword ptr [edx + 0xfc] */
    MEM32(ecx + 0xFC) = eax; /* 0x1415F9B6: mov dword ptr [ecx + 0xfc], eax */
    eax = MEM32(edx + 0x100); /* 0x1415F9BC: mov eax, dword ptr [edx + 0x100] */
    MEM32(ecx + 0x100) = eax; /* 0x1415F9C2: mov dword ptr [ecx + 0x100], eax */
    eax = MEM32(edx + 0x104); /* 0x1415F9C8: mov eax, dword ptr [edx + 0x104] */
    MEM32(ecx + 0x104) = eax; /* 0x1415F9CE: mov dword ptr [ecx + 0x104], eax */
    eax = MEM32(edx + 0x50); /* 0x1415F9D4: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x50))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x50)));
    eax = eax ^ MEM32(ecx + 0x50); /* 0x1415F9D7: xor eax, dword ptr [ecx + 0x50] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x54) ^ 0)); _flag_b = (uint32_t)((MEM32(ecx + 0x54) ^ 0));
    MEM32(ecx + 0x54) = MEM32(ecx + 0x54) ^ 0; /* 0x1415F9DA: xor dword ptr [ecx + 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01F00000u);
    eax = eax & 0x01F00000u; /* 0x1415F9DE: and eax, 0x1f00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x50) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x50) ^ eax));
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) ^ eax; /* 0x1415F9E3: xor dword ptr [ecx + 0x50], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415F9E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F9E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F9F0u);

L_1415F9F0:
    edi = edi; /* 0x1415F9F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415F9F2: push ebp */
    ebp = esp; /* 0x1415F9F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1415F9F5: push ecx */
    PUSH32(esp, ebx); /* 0x1415F9F6: push ebx */
    PUSH32(esp, esi); /* 0x1415F9F7: push esi */
    PUSH32(esp, edi); /* 0x1415F9F8: push edi */
    edi = eax; /* 0x1415F9F9: mov edi, eax */
    eax = MEM32(edi + 0x50); /* 0x1415F9FB: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415F9FE: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415FA03: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FA1B; /* 0x1415FA06: je 0x1415fa1b */
L_1415FA08:
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x1415FA08: fld qword ptr [edi + 0xc0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415FA0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x1415FA10: fstp qword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x1415FA13: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FA14: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FA15: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FA16: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FA17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1415FA18: ret 0x10 */
L_1415FA1B:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1415FA1B: fld qword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1415FA1E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FA21: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = edi; /* 0x1415FA24: mov edx, edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FA26: fstp qword ptr [esp] */
    RECOMP_CALL(sub_14161200); /* 0x1415FA29: call 0x14161200 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1415FA2E: fld qword ptr [ebp + 0x10] */
    ebx = MEM32(0x14001104); /* 0x1415FA31: mov ebx, dword ptr [0x14001104] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FA37: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FA3A: fstp qword ptr [esp] */
    RECOMP_ICALL(ebx); /* 0x1415FA3D: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FA3F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1415FA42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FA70; /* 0x1415FA44: je 0x1415fa70 */
L_1415FA46:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1415FA46: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FA49: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FA4C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_141ED062); /* 0x1415FA4F: call 0x141ed062 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1415FA54: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FA57: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FA5A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FA5C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FA5E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FA70; /* 0x1415FA61: jp 0x1415fa70 */
L_1415FA63:
    eax = MEM32(edi + 0x54); /* 0x1415FA63: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00200000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00200000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00200000u; /* 0x1415FA66: or dword ptr [edi + 0x50], 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x1415FA6D: mov dword ptr [edi + 0x54], eax */
L_1415FA70:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1415FA70: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FA73: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FA75: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FA77: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1415FA87; /* 0x1415FA7A: jnp 0x1415fa87 */
L_1415FA7C:
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00800000u; /* 0x1415FA7C: or dword ptr [edi + 0x50], 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FA83: fstp st(0) */
    goto L_1415FAA3; /* 0x1415FA85: jmp 0x1415faa3 */
L_1415FA87:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1415FA87: fstp dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FA8A: sub esp, 8 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1415FA8D: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FA90: fstp qword ptr [esp] */
    RECOMP_ICALL(ebx); /* 0x1415FA93: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FA95: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1415FA98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FAA9; /* 0x1415FA9A: jne 0x1415faa9 */
L_1415FA9C:
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00400000u; /* 0x1415FA9C: or dword ptr [edi + 0x50], 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FAA3:
    eax = MEM32(edi + 0x54); /* 0x1415FAA3: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x1415FAA6: mov dword ptr [edi + 0x54], eax */
L_1415FAA9:
    ebx = MEM32(ebp + 0x8); /* 0x1415FAA9: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1415FAAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141615B0); /* 0x1415FAAE: call 0x141615b0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1415FAB3: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FAB4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415FAB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1415FAB7: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FAB8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FAB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1415FABA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1415FAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415FAD0u);

L_1415FAD0:
    edi = edi; /* 0x1415FAD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415FAD2: push ebp */
    ebp = esp; /* 0x1415FAD3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1415FAD5: push ecx */
    PUSH32(esp, ebx); /* 0x1415FAD6: push ebx */
    PUSH32(esp, esi); /* 0x1415FAD7: push esi */
    PUSH32(esp, edi); /* 0x1415FAD8: push edi */
    edi = eax; /* 0x1415FAD9: mov edi, eax */
    eax = MEM32(edi + 0x50); /* 0x1415FADB: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415FADE: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415FAE3: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FB0F; /* 0x1415FAE6: je 0x1415fb0f */
L_1415FAE8:
    eax = MEM32(ebp + 0xC); /* 0x1415FAE8: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(edi + 0xC8) */ /* 0x1415FAEB: cmp eax, dword ptr [edi + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FB02; /* 0x1415FAF1: jne 0x1415fb02 */
L_1415FAF3:
    eax = MEM32(ebp + 0x10); /* 0x1415FAF3: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(edi + 0xCC) */ /* 0x1415FAF6: cmp eax, dword ptr [edi + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415FBC9; /* 0x1415FAFC: je 0x1415fbc9 */
L_1415FB02:
    eax = 0x80004005u; /* 0x1415FB02: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1415FB07: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FB08: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FB09: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FB0A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FB0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1415FB0C: ret 0x10 */
L_1415FB0F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1415FB0F: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1415FB12: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1415FB15: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x1415FB18: mov edx, edi */
    RECOMP_CALL(sub_14161310); /* 0x1415FB1A: call 0x14161310 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x1415FB1F: fld qword ptr [edi + 0xc0] */
    eax = MEM32(edi + 0x60); /* 0x1415FB25: mov eax, dword ptr [edi + 0x60] */
    *(double*)ADDR(ebp + 0xC) = _st[0]; /* 0x1415FB28: fst qword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1415FB2B: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1415FB2E: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415FB31: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FBC7; /* 0x1415FB34: jne 0x1415fbc7 */
L_1415FB3A:
    ebx = MEM32(0x14001104); /* 0x1415FB3A: mov ebx, dword ptr [0x14001104] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1415FB40: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1415FB43: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FB46: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FB49: fstp qword ptr [esp] */
    RECOMP_ICALL(ebx); /* 0x1415FB4C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FB4E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1415FB51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FB7F; /* 0x1415FB53: je 0x1415fb7f */
L_1415FB55:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1415FB55: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FB58: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FB5B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_141ED062); /* 0x1415FB5E: call 0x141ed062 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1415FB63: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FB66: add esp, 8 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FB69: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FB6B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FB6D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FB7F; /* 0x1415FB70: jp 0x1415fb7f */
L_1415FB72:
    eax = MEM32(edi + 0x54); /* 0x1415FB72: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00200000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00200000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00200000u; /* 0x1415FB75: or dword ptr [edi + 0x50], 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x1415FB7C: mov dword ptr [edi + 0x54], eax */
L_1415FB7F:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1415FB7F: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FB82: fucomp st(0) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FB84: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FB86: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1415FB94; /* 0x1415FB89: jnp 0x1415fb94 */
L_1415FB8B:
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00800000u; /* 0x1415FB8B: or dword ptr [edi + 0x50], 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1415FBAD; /* 0x1415FB92: jmp 0x1415fbad */
L_1415FB94:
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1415FB94: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1415FB97: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1415FB9A: fstp qword ptr [esp] */
    RECOMP_ICALL(ebx); /* 0x1415FB9D: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1415FB9F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1415FBA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FBB3; /* 0x1415FBA4: jne 0x1415fbb3 */
L_1415FBA6:
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00400000u; /* 0x1415FBA6: or dword ptr [edi + 0x50], 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FBAD:
    eax = MEM32(edi + 0x54); /* 0x1415FBAD: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x1415FBB0: mov dword ptr [edi + 0x54], eax */
L_1415FBB3:
    ebx = MEM32(ebp + 0x8); /* 0x1415FBB3: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1415FBB6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141615B0); /* 0x1415FBB8: call 0x141615b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415FBBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1415FBBF: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FBC0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FBC1: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FBC2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FBC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1415FBC4: ret 0x10 */
L_1415FBC7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FBC7: fstp st(0) */
L_1415FBC9:
    edi = POP32_VAL(esp); /* 0x1415FBC9: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FBCA: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415FBCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1415FBCD: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FBCE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FBCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1415FBD0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1415FBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415FBE0u);

L_1415FBE0:
    edi = edi; /* 0x1415FBE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415FBE2: push ebp */
    ebp = esp; /* 0x1415FBE3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1415FBE5: push ebx */
    PUSH32(esp, esi); /* 0x1415FBE6: push esi */
    PUSH32(esp, edi); /* 0x1415FBE7: push edi */
    ebx = eax; /* 0x1415FBE8: mov ebx, eax */
    edi = ecx; /* 0x1415FBEA: mov edi, ecx */
    RECOMP_CALL(sub_1415F6B0); /* 0x1415FBEC: call 0x1415f6b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x34); /* 0x1415FBF1: mov eax, dword ptr [ebx + 0x34] */
    /* cmp eax, MEM32(ebx + 0x3C) */ /* 0x1415FBF4: cmp eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1415FD07; /* 0x1415FBF7: jg 0x1415fd07 */
L_1415FBFD:
    if (CMP_L(_flag_a, _flag_b)) goto L_1415FC0B; /* 0x1415FBFD: jl 0x1415fc0b */
L_1415FBFF:
    eax = MEM32(ebx + 0x30); /* 0x1415FBFF: mov eax, dword ptr [ebx + 0x30] */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1415FC02: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1415FD07; /* 0x1415FC05: ja 0x1415fd07 */
L_1415FC0B:
    eax = MEM32(ebx + 0x14); /* 0x1415FC0B: mov eax, dword ptr [ebx + 0x14] */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x1415FC0E: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1415FD07; /* 0x1415FC11: ja 0x1415fd07 */
L_1415FC17:
    if (CMP_B(_flag_a, _flag_b)) goto L_1415FC25; /* 0x1415FC17: jb 0x1415fc25 */
L_1415FC19:
    eax = MEM32(ebx + 0x10); /* 0x1415FC19: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, MEM32(ebx + 0x18) */ /* 0x1415FC1C: cmp eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1415FD07; /* 0x1415FC1F: ja 0x1415fd07 */
L_1415FC25:
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x1415FC25: fld qword ptr [ebx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x1415FC28: fcomp qword ptr [ebx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FC2A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1415FC2C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1415FD07; /* 0x1415FC2F: jnp 0x1415fd07 */
L_1415FC35:
    eax = MEM32(ebp + 0xC); /* 0x1415FC35: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x50))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x50)));
    eax = eax ^ MEM32(edi + 0x50); /* 0x1415FC38: xor eax, dword ptr [edi + 0x50] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0x54) ^ 0)); _flag_b = (uint32_t)((MEM32(edi + 0x54) ^ 0));
    MEM32(edi + 0x54) = MEM32(edi + 0x54) ^ 0; /* 0x1415FC3B: xor dword ptr [edi + 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01F00000u);
    eax = eax & 0x01F00000u; /* 0x1415FC3F: and eax, 0x1f00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0x50) ^ eax)); _flag_b = (uint32_t)((MEM32(edi + 0x50) ^ eax));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) ^ eax; /* 0x1415FC44: xor dword ptr [edi + 0x50], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x28); /* 0x1415FC47: mov eax, dword ptr [ebx + 0x28] */
    edx = MEM32(ebx + 0x20); /* 0x1415FC4A: mov edx, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebx + 0x24); /* 0x1415FC4D: mov ecx, dword ptr [ebx + 0x24] */
    MEM32(edi + 0xC8) = eax; /* 0x1415FC50: mov dword ptr [edi + 0xc8], eax */
    eax = MEM32(ebx + 0x2C); /* 0x1415FC56: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(edi + 0xD0) = edx; /* 0x1415FC59: mov dword ptr [edi + 0xd0], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1415FC5F: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xCC) = eax; /* 0x1415FC61: mov dword ptr [edi + 0xcc], eax */
    MEM32(edi + 0xD4) = ecx; /* 0x1415FC67: mov dword ptr [edi + 0xd4], ecx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1415FC6D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FC79; /* 0x1415FC70: jne 0x1415fc79 */
L_1415FC72:
    esi = edi; /* 0x1415FC72: mov esi, edi */
    RECOMP_CALL(sub_141614D0); /* 0x1415FC74: call 0x141614d0 */
    RECOMP_FLAGS_IN();
L_1415FC79:
    eax = MEM32(ebx + 0x38); /* 0x1415FC79: mov eax, dword ptr [ebx + 0x38] */
    esi = MEM32(ebx + 0x30); /* 0x1415FC7C: mov esi, dword ptr [ebx + 0x30] */
    edx = MEM32(ebx + 0x3C); /* 0x1415FC7F: mov edx, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebx + 0x34); /* 0x1415FC82: mov ecx, dword ptr [ebx + 0x34] */
    MEM32(edi + 0xE8) = esi; /* 0x1415FC85: mov dword ptr [edi + 0xe8], esi */
    MEM32(edi + 0xEC) = ecx; /* 0x1415FC8B: mov dword ptr [edi + 0xec], ecx */
    MEM32(edi + 0xF0) = eax; /* 0x1415FC91: mov dword ptr [edi + 0xf0], eax */
    MEM32(edi + 0xF4) = edx; /* 0x1415FC97: mov dword ptr [edi + 0xf4], edx */
    /* cmp esi, eax */ /* 0x1415FC9D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FCAE; /* 0x1415FC9F: jne 0x1415fcae */
L_1415FCA1:
    /* cmp ecx, edx */ /* 0x1415FCA1: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FCAE; /* 0x1415FCA3: jne 0x1415fcae */
L_1415FCA5:
    PUSH32(esp, ecx); /* 0x1415FCA5: push ecx */
    PUSH32(esp, esi); /* 0x1415FCA6: push esi */
    esi = edi; /* 0x1415FCA7: mov esi, edi */
    RECOMP_CALL(sub_141613F0); /* 0x1415FCA9: call 0x141613f0 */
    RECOMP_FLAGS_IN();
L_1415FCAE:
    eax = MEM32(ebx + 0x18); /* 0x1415FCAE: mov eax, dword ptr [ebx + 0x18] */
    edx = MEM32(ebx + 0x10); /* 0x1415FCB1: mov edx, dword ptr [ebx + 0x10] */
    esi = MEM32(ebx + 0x1C); /* 0x1415FCB4: mov esi, dword ptr [ebx + 0x1c] */
    ecx = MEM32(ebx + 0x14); /* 0x1415FCB7: mov ecx, dword ptr [ebx + 0x14] */
    MEM32(edi + 0xF8) = edx; /* 0x1415FCBA: mov dword ptr [edi + 0xf8], edx */
    MEM32(edi + 0xFC) = ecx; /* 0x1415FCC0: mov dword ptr [edi + 0xfc], ecx */
    MEM32(edi + 0x100) = eax; /* 0x1415FCC6: mov dword ptr [edi + 0x100], eax */
    MEM32(edi + 0x104) = esi; /* 0x1415FCCC: mov dword ptr [edi + 0x104], esi */
    /* cmp edx, eax */ /* 0x1415FCD2: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FCE3; /* 0x1415FCD4: jne 0x1415fce3 */
L_1415FCD6:
    /* cmp ecx, esi */ /* 0x1415FCD6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FCE3; /* 0x1415FCD8: jne 0x1415fce3 */
L_1415FCDA:
    PUSH32(esp, ecx); /* 0x1415FCDA: push ecx */
    PUSH32(esp, edx); /* 0x1415FCDB: push edx */
    esi = edi; /* 0x1415FCDC: mov esi, edi */
    RECOMP_CALL(sub_141613F0); /* 0x1415FCDE: call 0x141613f0 */
    RECOMP_FLAGS_IN();
L_1415FCE3:
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x1415FCE3: fld qword ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1415FCE6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(ebx)); /* 0x1415FCE8: fld qword ptr [ebx] */
    ebx = MEM32(ebp + 0x8); /* 0x1415FCEA: mov ebx, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0xD8) = _v; } /* 0x1415FCED: fstp qword ptr [edi + 0xd8] */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0xE0) = _v; } /* 0x1415FCF3: fstp qword ptr [edi + 0xe0] */
    RECOMP_CALL(sub_141615B0); /* 0x1415FCF9: call 0x141615b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1415FCFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1415FD00: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FD01: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FD02: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1415FD03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1415FD04: ret 0xc */
L_1415FD07:
    edi = POP32_VAL(esp); /* 0x1415FD07: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FD08: pop esi */
    eax = 0x80004005u; /* 0x1415FD09: mov eax, 0x80004005 */
    ebx = POP32_VAL(esp); /* 0x1415FD0E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1415FD0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1415FD10: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1415FD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415FD20u);

L_1415FD20:
    edi = edi; /* 0x1415FD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415FD22: push ebp */
    ebp = esp; /* 0x1415FD23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1415FD25: push ecx */
    eax = MEM32(ebp + 0x1C); /* 0x1415FD26: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x1415FD29: push ebx */
    ebx = ecx; /* 0x1415FD2A: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1415FD2C: push esi */
    esi = 1; /* 0x1415FD2D: mov esi, 1 */
    /* test ebx, ebx */ /* 0x1415FD32: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FD45; /* 0x1415FD34: je 0x1415fd45 */
L_1415FD36:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1415FD36: push dword ptr [ebp + 8] */
    esi = edi; /* 0x1415FD39: mov esi, edi */
    RECOMP_CALL(sub_14160DC0); /* 0x1415FD3B: call 0x14160dc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1415FD40: mov esi, eax */
    eax = MEM32(ebp + 0x1C); /* 0x1415FD42: mov eax, dword ptr [ebp + 0x1c] */
L_1415FD45:
    ecx = MEM32(ebp + 0x14); /* 0x1415FD45: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x18); /* 0x1415FD48: mov edx, dword ptr [ebp + 0x18] */
    /* test LO8(eax), 0x40u */ /* 0x1415FD4B: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FD55; /* 0x1415FD4D: je 0x1415fd55 */
L_1415FD4F:
    _flag_a = (uint32_t)((ecx | 0x00800000u)); _flag_b = (uint32_t)((ecx | 0x00800000u));
    ecx = ecx | 0x00800000u; /* 0x1415FD4F: or ecx, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FD55:
    /* test LO8(eax), LO8(eax) */ /* 0x1415FD55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1415FD5F; /* 0x1415FD57: jns 0x1415fd5f */
L_1415FD59:
    _flag_a = (uint32_t)((ecx | 0x00400000u)); _flag_b = (uint32_t)((ecx | 0x00400000u));
    ecx = ecx | 0x00400000u; /* 0x1415FD59: or ecx, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FD5F:
    /* test eax, 0x400u */ /* 0x1415FD5F: test eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FD6C; /* 0x1415FD64: je 0x1415fd6c */
L_1415FD66:
    _flag_a = (uint32_t)((ecx | 0x8000u)); _flag_b = (uint32_t)((ecx | 0x8000u));
    ecx = ecx | 0x8000u; /* 0x1415FD66: or ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FD6C:
    /* test eax, 0x1000u */ /* 0x1415FD6C: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FD79; /* 0x1415FD71: je 0x1415fd79 */
L_1415FD73:
    _flag_a = (uint32_t)((ecx | 0x00010000u)); _flag_b = (uint32_t)((ecx | 0x00010000u));
    ecx = ecx | 0x00010000u; /* 0x1415FD73: or ecx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FD79:
    /* test eax, 0x800u */ /* 0x1415FD79: test eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FD83; /* 0x1415FD7E: je 0x1415fd83 */
L_1415FD80:
    _flag_a = (uint32_t)((ecx | 0x10u)); _flag_b = (uint32_t)((ecx | 0x10u));
    ecx = ecx | 0x10u; /* 0x1415FD80: or ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FD83:
    eax = MEM32(edi + 0x50); /* 0x1415FD83: mov eax, dword ptr [edi + 0x50] */
    ebx = MEM32(edi + 0x54); /* 0x1415FD86: mov ebx, dword ptr [edi + 0x54] */
    ecx = ~ecx; /* 0x1415FD89: not ecx */
    edx = ~edx; /* 0x1415FD8B: not edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1415FD8D: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebp + 0xC))); _flag_b = (uint32_t)((ecx | MEM32(ebp + 0xC)));
    ecx = ecx | MEM32(ebp + 0xC); /* 0x1415FD8F: or ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x1415FD92: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((edx | MEM32(ebp + 0x10)));
    edx = edx | MEM32(ebp + 0x10); /* 0x1415FD94: or edx, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1415FD97: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FD9F; /* 0x1415FD99: jne 0x1415fd9f */
L_1415FD9B:
    /* cmp ebx, edx */ /* 0x1415FD9B: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415FDA7; /* 0x1415FD9D: je 0x1415fda7 */
L_1415FD9F:
    MEM32(edi + 0x50) = ecx; /* 0x1415FD9F: mov dword ptr [edi + 0x50], ecx */
    MEM32(edi + 0x54) = edx; /* 0x1415FDA2: mov dword ptr [edi + 0x54], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1415FDA5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FDA7:
    eax = MEM32(ebp + 0x20); /* 0x1415FDA7: mov eax, dword ptr [ebp + 0x20] */
    /* cmp eax, 0x11u */ /* 0x1415FDAA: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415FDB9; /* 0x1415FDAD: je 0x1415fdb9 */
L_1415FDAF:
    /* cmp MEM32(edi + 0x5C), eax */ /* 0x1415FDAF: cmp dword ptr [edi + 0x5c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415FDB6; /* 0x1415FDB2: je 0x1415fdb6 */
L_1415FDB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1415FDB4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1415FDB6:
    MEM32(edi + 0x5C) = eax; /* 0x1415FDB6: mov dword ptr [edi + 0x5c], eax */
L_1415FDB9:
    eax = esi; /* 0x1415FDB9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1415FDBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FDBC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x1415FDBD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1415FDBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1415FDBF: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1415FDD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415FDD0u);

L_1415FDD0:
    edi = edi; /* 0x1415FDD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1415FDD2: push ebp */
    ebp = esp; /* 0x1415FDD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x1415FDD5: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1415FDD8: sub esp, 0x34 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1415FDDB: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1415FDDE: push ebx */
    *(double*)ADDR(esp + 0x20) = _st[0]; /* 0x1415FDDF: fst qword ptr [esp + 0x20] */
    PUSH32(esp, esi); /* 0x1415FDE3: push esi */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FDE4: fucom st(0) */
    PUSH32(esp, edi); /* 0x1415FDE6: push edi */
    edi = ecx; /* 0x1415FDE7: mov edi, ecx */
    MEM32(esp + 0x24) = edi; /* 0x1415FDE9: mov dword ptr [esp + 0x24], edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FDED: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FDEF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141603D4; /* 0x1415FDF2: jp 0x141603d4 */
L_1415FDF8:
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1415FDF8: fld qword ptr [ebp + 0x14] */
    *(double*)ADDR(esp + 0x30) = _st[0]; /* 0x1415FDFB: fst qword ptr [esp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FDFF: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FE01: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FE03: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141603D2; /* 0x1415FE06: jp 0x141603d2 */
L_1415FE0C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FE0C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FE0E: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1415FE10: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141601D2; /* 0x1415FE13: jne 0x141601d2 */
L_1415FE19:
    eax = MEM32(ebp + 0xC); /* 0x1415FE19: mov eax, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x1415FE1C: fldz  */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x1415FE1E: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FE30; /* 0x1415FE21: jne 0x1415fe30 */
L_1415FE23:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1415FE23: fstp st(2) */
    fp_push(_st[1]); /* 0x1415FE25: fld st(1) */
    *(double*)ADDR(esp + 0x28) = _st[0]; /* 0x1415FE27: fst qword ptr [esp + 0x28] */
    *(double*)ADDR(ebp + 0xC) = _st[0]; /* 0x1415FE2B: fst qword ptr [ebp + 0xc] */
    fp_xch(2); /* 0x1415FE2E: fxch st(2) */
L_1415FE30:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1415FE30: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FE4A; /* 0x1415FE34: jne 0x1415fe4a */
L_1415FE36:
    /* cmp MEM32(ebp + 0x18), 0x80000000u */ /* 0x1415FE36: cmp dword ptr [ebp + 0x18], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415FE4A; /* 0x1415FE3D: jne 0x1415fe4a */
L_1415FE3F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1415FE3F: fstp st(1) */
    *(double*)ADDR(esp + 0x30) = _st[0]; /* 0x1415FE41: fst qword ptr [esp + 0x30] */
    *(double*)ADDR(ebp + 0x14) = _st[0]; /* 0x1415FE45: fst qword ptr [ebp + 0x14] */
    goto L_1415FE4C; /* 0x1415FE48: jmp 0x1415fe4c */
L_1415FE4A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FE4A: fstp st(0) */
L_1415FE4C:
    eax = MEM32(edi + 0x50); /* 0x1415FE4C: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1415FE4F: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415FE54: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1415FF76; /* 0x1415FE57: je 0x1415ff76 */
L_1415FE5D:
    /* cmp MEM32(edi + 0x5C), 5 */ /* 0x1415FE5D: cmp dword ptr [edi + 0x5c], 5 */
    _flag_a = (uint32_t)(MEM32(edi + 0x5C)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1415FF1D; /* 0x1415FE61: je 0x1415ff1d */
L_1415FE67:
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x1415FE67: fld qword ptr [edi + 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x28) = _v; } /* 0x1415FE6D: fstp dword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esp + 0x28)); /* 0x1415FE71: fld dword ptr [esp + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x20) = _v; } /* 0x1415FE75: fst dword ptr [esp + 0x20] */
    fp_push(_st[0]); /* 0x1415FE79: fld st(0) */
    _st[0] = fabs(_st[0]); /* 0x1415FE7B: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x28) = _v; } /* 0x1415FE7D: fstp dword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esp + 0x28)); /* 0x1415FE81: fld dword ptr [esp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x140668C0)); /* 0x1415FE85: fcomp dword ptr [0x140668c0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FE8B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1415FE8D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FE98; /* 0x1415FE90: jp 0x1415fe98 */
L_1415FE92:
    fp_push(0.0); /* 0x1415FE92: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x20) = _v; } /* 0x1415FE94: fstp dword ptr [esp + 0x20] */
L_1415FE98:
    fp_push(_st[0]); /* 0x1415FE98: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FE9A: fucomp st(0) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FE9C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FE9E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FF62; /* 0x1415FEA1: jp 0x1415ff62 */
L_1415FEA7:
    fp_xch(2); /* 0x1415FEA7: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x28) = _v; } /* 0x1415FEA9: fstp dword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esp + 0x28)); /* 0x1415FEAD: fld dword ptr [esp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1415FEB1: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FEB3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1415FEB5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FF07; /* 0x1415FEB8: jp 0x1415ff07 */
L_1415FEBA:
    fp_xch(1); /* 0x1415FEBA: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x28) = _v; } /* 0x1415FEBC: fst dword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esp + 0x28)); /* 0x1415FEC0: fld dword ptr [esp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1415FEC4: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FEC6: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1415FEC8: fstp st(2) */
    /* test HI8(eax), 1 */ /* 0x1415FECA: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160001; /* 0x1415FECD: je 0x14160001 */
L_1415FED3:
    fp_xch(1); /* 0x1415FED3: fxch st(1) */
L_1415FED5:
    fp_push(*(float*)&MEM32(esp + 0x20)); /* 0x1415FED5: fld dword ptr [esp + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1415FED9: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FEDB: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1415FEDD: fstp st(2) */
    /* test HI8(eax), 1 */ /* 0x1415FEDF: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FF0B; /* 0x1415FEE2: jne 0x1415ff0b */
L_1415FEE4:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x28) = _v; } /* 0x1415FEE4: fstp dword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esp + 0x28)); /* 0x1415FEE8: fld dword ptr [esp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FEEC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FEEE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1415FEF0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160005; /* 0x1415FEF3: je 0x14160005 */
L_1415FEF9:
    eax = 0x80004005u; /* 0x1415FEF9: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1415FEFE: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FEFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FF00: pop ebx */
    esp = ebp; /* 0x1415FF01: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415FF03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1415FF04: ret 0x14 */
L_1415FF07:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1415FF07: fstp st(2) */
    RECOMP_BACKEDGE();
    goto L_1415FED5; /* 0x1415FF09: jmp 0x1415fed5 */
L_1415FF0B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FF0B: fstp st(0) */
    eax = 0x80004005u; /* 0x1415FF0D: mov eax, 0x80004005 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FF12: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x1415FF14: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FF15: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FF16: pop ebx */
    esp = ebp; /* 0x1415FF17: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415FF19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1415FF1A: ret 0x14 */
L_1415FF1D:
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x1415FF1D: fld qword ptr [edi + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1415FF23: fucomp st(0) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FF25: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FF27: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160001; /* 0x1415FF2A: jp 0x14160001 */
L_1415FF30:
    fp_xch(1); /* 0x1415FF30: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0xC0)); /* 0x1415FF32: fcomp qword ptr [edi + 0xc0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FF38: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1415FF3A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141601D4; /* 0x1415FF3D: jp 0x141601d4 */
L_1415FF43:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0xC0)); /* 0x1415FF43: fcomp qword ptr [edi + 0xc0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FF49: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1415FF4B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160005; /* 0x1415FF4E: je 0x14160005 */
L_1415FF54:
    eax = 0x80004005u; /* 0x1415FF54: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1415FF59: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FF5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FF5B: pop ebx */
    esp = ebp; /* 0x1415FF5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415FF5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1415FF5F: ret 0x14 */
L_1415FF62:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1415FF62: fstp st(2) */
    eax = 1; /* 0x1415FF64: mov eax, 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FF69: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FF6B: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x1415FF6D: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FF6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FF6F: pop ebx */
    esp = ebp; /* 0x1415FF70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415FF72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1415FF73: ret 0x14 */
L_1415FF76:
    fp_push(*(double*)ADDR(edi + 0xD8)); /* 0x1415FF76: fld qword ptr [edi + 0xd8] */
    fp_push(*(double*)ADDR(edi + 0xE0)); /* 0x1415FF7C: fld qword ptr [edi + 0xe0] */
    fp_xch(3); /* 0x1415FF82: fxch st(3) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1415FF84: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FF86: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FF88: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1415FFEB; /* 0x1415FF8B: jnp 0x1415ffeb */
L_1415FF8D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FF8D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FF8F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1415FF91: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FFA1; /* 0x1415FF94: jp 0x1415ffa1 */
L_1415FF96:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FF96: fstp st(0) */
    fp_push(_st[0]); /* 0x1415FF98: fld st(0) */
    *(double*)ADDR(esp + 0x28) = _st[0]; /* 0x1415FF9A: fst qword ptr [esp + 0x28] */
    *(double*)ADDR(ebp + 0xC) = _st[0]; /* 0x1415FF9E: fst qword ptr [ebp + 0xc] */
L_1415FFA1:
    fp_xch(2); /* 0x1415FFA1: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1415FFA3: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FFA5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1415FFA7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415FFB7; /* 0x1415FFAA: jne 0x1415ffb7 */
L_1415FFAC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FFAC: fstp st(0) */
    fp_push(_st[2]); /* 0x1415FFAE: fld st(2) */
    *(double*)ADDR(esp + 0x30) = _st[0]; /* 0x1415FFB0: fst qword ptr [esp + 0x30] */
    *(double*)ADDR(ebp + 0x14) = _st[0]; /* 0x1415FFB4: fst qword ptr [ebp + 0x14] */
L_1415FFB7:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1415FFB7: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FFB9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1415FFBB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415FFE9; /* 0x1415FFBE: jp 0x1415ffe9 */
L_1415FFC0:
    eax = MEM32(ebp + 0x8); /* 0x1415FFC0: mov eax, dword ptr [ebp + 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1415FFC3: fstp st(1) */
    SET_LO8(eax, MEM8(eax + 0xB28C)); /* 0x1415FFC5: mov al, byte ptr [eax + 0xb28c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1415FFCB: fstp st(1) */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x1415FFCD: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FFCF: fstp st(0) */
    eax = (uint32_t)LO8(eax); /* 0x1415FFD1: movzx eax, al */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1415FFD4: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1415FFD6: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1415FFD8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004004u);
    eax = eax & 0x80004004u; /* 0x1415FFDA: and eax, 0x80004004 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1415FFDF: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x1415FFE0: pop edi */
    esi = POP32_VAL(esp); /* 0x1415FFE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1415FFE2: pop ebx */
    esp = ebp; /* 0x1415FFE3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1415FFE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1415FFE6: ret 0x14 */
L_1415FFE9:
    fp_xch(2); /* 0x1415FFE9: fxch st(2) */
L_1415FFEB:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FFEB: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FFED: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1415FFEF: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x1415FFF1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160013; /* 0x1415FFF4: jp 0x14160013 */
L_1415FFF6:
    fp_xch(2); /* 0x1415FFF6: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415FFF8: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415FFFA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415FFFC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160015; /* 0x1415FFFF: jp 0x14160015 */
L_14160001:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160001: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160003: fstp st(0) */
L_14160005:
    eax = 1; /* 0x14160005: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x1416000A: pop edi */
    esi = POP32_VAL(esp); /* 0x1416000B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416000C: pop ebx */
    esp = ebp; /* 0x1416000D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416000F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160010: ret 0x14 */
L_14160013:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x14160013: fstp st(2) */
L_14160015:
    ebx = MEM32(ebp + 0x8); /* 0x14160015: mov ebx, dword ptr [ebp + 8] */
    fp_xch(1); /* 0x14160018: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0xD8) = _v; } /* 0x1416001A: fstp qword ptr [edi + 0xd8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14160020: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi + 0xE0) = _v; } /* 0x14160022: fstp qword ptr [edi + 0xe0] */
    RECOMP_CALL(sub_141615B0); /* 0x14160028: call 0x141615b0 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x1416002D: fld qword ptr [esp + 0x30] */
    fp_push(*(double*)ADDR(esp + 0x28)); /* 0x14160031: fld qword ptr [esp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160035: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160037: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160039: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141601B8; /* 0x1416003C: jp 0x141601b8 */
L_14160042:
    eax = MEM32(ebp + 0xC); /* 0x14160042: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x14160045: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160052; /* 0x14160048: jne 0x14160052 */
L_1416004A:
    eax = MEM32(ebp + 0x10); /* 0x1416004A: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x1416004D: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160061; /* 0x14160050: je 0x14160061 */
L_14160052:
    fp_push(0.0); /* 0x14160052: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160054: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160056: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160058: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141601B8; /* 0x1416005B: jp 0x141601b8 */
L_14160061:
    ecx = MEM32(edi + 0x5C); /* 0x14160061: mov ecx, dword ptr [edi + 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160064: fstp st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x14160066: add ecx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + ecx + 0x1402D110); /* 0x14160068: mov eax, dword ptr [ecx + ecx + 0x1402d110] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1416006F: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x14160071: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 4 */ /* 0x14160073: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141601A0; /* 0x14160075: je 0x141601a0 */
L_1416007B:
    eax = MEM32(ecx + 0x14028110); /* 0x1416007B: mov eax, dword ptr [ecx + 0x14028110] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160081: fstp st(0) */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    SET_LO8(eax, LO8(eax) & 0x30u); /* 0x14160083: and al, 0x30 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x20u */ /* 0x14160085: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141600AE; /* 0x14160087: je 0x141600ae */
L_14160089:
    ecx = edi; /* 0x14160089: mov ecx, edi */
    RECOMP_CALL(sub_140E31C0); /* 0x1416008B: call 0x140e31c0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14160090: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141600AE; /* 0x14160092: jne 0x141600ae */
L_14160094:
    ecx = edi; /* 0x14160094: mov ecx, edi */
    RECOMP_CALL(sub_140E3200); /* 0x14160096: call 0x140e3200 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1416009B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141600AE; /* 0x1416009D: jne 0x141600ae */
L_1416009F:
    ecx = edi; /* 0x1416009F: mov ecx, edi */
    RECOMP_CALL(sub_140E3230); /* 0x141600A1: call 0x140e3230 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141600A6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416019C; /* 0x141600A8: je 0x1416019c */
L_141600AE:
    ecx = edi; /* 0x141600AE: mov ecx, edi */
    RECOMP_CALL(sub_140E31C0); /* 0x141600B0: call 0x140e31c0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141600B5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141600D3; /* 0x141600B7: jne 0x141600d3 */
L_141600B9:
    ecx = edi; /* 0x141600B9: mov ecx, edi */
    RECOMP_CALL(sub_140E3200); /* 0x141600BB: call 0x140e3200 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141600C0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141600D3; /* 0x141600C2: jne 0x141600d3 */
L_141600C4:
    ecx = edi; /* 0x141600C4: mov ecx, edi */
    RECOMP_CALL(sub_140E3230); /* 0x141600C6: call 0x140e3230 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141600CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141601B0; /* 0x141600CD: je 0x141601b0 */
L_141600D3:
    eax = MEM32(edi + 0xD0); /* 0x141600D3: mov eax, dword ptr [edi + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x141600D9: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141600DE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x141600E0: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141600FE; /* 0x141600E5: jne 0x141600fe */
L_141600E7:
    /* test ecx, ecx */ /* 0x141600E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141600FE; /* 0x141600E9: jne 0x141600fe */
L_141600EB:
    eax = MEM32(edi + 0xC8); /* 0x141600EB: mov eax, dword ptr [edi + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x141600F1: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141600F6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141601B0; /* 0x141600F8: je 0x141601b0 */
L_141600FE:
    /* cmp MEM32(edi + 0xEC), ecx */ /* 0x141600FE: cmp dword ptr [edi + 0xec], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0xEC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160104: jg 0x1416019c */
L_1416010A:
    if (CMP_L(_flag_a, _flag_b)) goto L_1416011C; /* 0x1416010A: jl 0x1416011c */
L_1416010C:
    /* cmp MEM32(edi + 0xE8), 0x007FFFFFu */ /* 0x1416010C: cmp dword ptr [edi + 0xe8], 0x7fffff */
    _flag_a = (uint32_t)(MEM32(edi + 0xE8)); _flag_b = (uint32_t)(0x007FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160116: ja 0x1416019c */
L_1416011C:
    /* cmp MEM32(edi + 0xF4), 0xFFFFFFFFu */ /* 0x1416011C: cmp dword ptr [edi + 0xf4], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xF4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160123: jl 0x1416019c */
L_14160125:
    if (CMP_G(_flag_a, _flag_b)) goto L_14160133; /* 0x14160125: jg 0x14160133 */
L_14160127:
    /* cmp MEM32(edi + 0xF0), 0xFF800001u */ /* 0x14160127: cmp dword ptr [edi + 0xf0], 0xff800001 */
    _flag_a = (uint32_t)(MEM32(edi + 0xF0)); _flag_b = (uint32_t)(0xFF800001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160131: jb 0x1416019c */
L_14160133:
    edx = MEM32(edi + 0xFC); /* 0x14160133: mov edx, dword ptr [edi + 0xfc] */
    eax = MEM32(edi + 0xF8); /* 0x14160139: mov eax, dword ptr [edi + 0xf8] */
    /* test edx, edx */ /* 0x1416013F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160141: ja 0x1416019c */
L_14160143:
    if (0) goto L_1416014C; /* 0x14160143: jb 0x1416014c */
L_14160145:
    /* cmp eax, 0x807FFFFFu */ /* 0x14160145: cmp eax, 0x807fffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x807FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1416019C; /* 0x1416014A: ja 0x1416019c */
L_1416014C:
    esi = MEM32(edi + 0x104); /* 0x1416014C: mov esi, dword ptr [edi + 0x104] */
    ecx = MEM32(edi + 0x100); /* 0x14160152: mov ecx, dword ptr [edi + 0x100] */
    /* test esi, esi */ /* 0x14160158: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416019C; /* 0x1416015A: ja 0x1416019c */
L_1416015C:
    if (0) goto L_14160166; /* 0x1416015C: jb 0x14160166 */
L_1416015E:
    /* cmp ecx, 0x807FFFFFu */ /* 0x1416015E: cmp ecx, 0x807fffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x807FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1416019C; /* 0x14160164: ja 0x1416019c */
L_14160166:
    /* test edx, edx */ /* 0x14160166: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416017C; /* 0x14160168: jne 0x1416017c */
L_1416016A:
    /* cmp eax, 0x007FFFFFu */ /* 0x1416016A: cmp eax, 0x7fffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x007FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1416017C; /* 0x1416016F: jbe 0x1416017c */
L_14160171:
    /* test edx, edx */ /* 0x14160171: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416017C; /* 0x14160173: jne 0x1416017c */
L_14160175:
    /* cmp eax, 0x80000000u */ /* 0x14160175: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1416019C; /* 0x1416017A: jb 0x1416019c */
L_1416017C:
    /* test esi, esi */ /* 0x1416017C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416018A; /* 0x1416017E: jne 0x1416018a */
L_14160180:
    /* cmp ecx, 0x007FFFFFu */ /* 0x14160180: cmp ecx, 0x7fffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x007FFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141601B0; /* 0x14160186: jbe 0x141601b0 */
L_14160188:
    /* test esi, esi */ /* 0x14160188: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1416018A:
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x1416018A: fld qword ptr [esp + 0x30] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_141601B4; /* 0x1416018E: ja 0x141601b4 */
L_14160190:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_141601A0; /* 0x14160190: jb 0x141601a0 */
L_14160192:
    /* cmp ecx, 0x80000000u */ /* 0x14160192: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141601B4; /* 0x14160198: jae 0x141601b4 */
L_1416019A:
    goto L_141601A0; /* 0x1416019A: jmp 0x141601a0 */
L_1416019C:
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x1416019C: fld qword ptr [esp + 0x30] */
L_141601A0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141601A0: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x141601A3: fstp qword ptr [esp] */
    PUSH32(esp, 0x11u); /* 0x141601A6: push 0x11 */
    PUSH32(esp, ebx); /* 0x141601A8: push ebx */
    eax = edi; /* 0x141601A9: mov eax, edi */
    RECOMP_CALL(sub_1415F9F0); /* 0x141601AB: call 0x1415f9f0 */
    RECOMP_FLAGS_IN();
L_141601B0:
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x141601B0: fld qword ptr [esp + 0x30] */
L_141601B4:
    fp_push(*(double*)ADDR(esp + 0x28)); /* 0x141601B4: fld qword ptr [esp + 0x28] */
L_141601B8:
    eax = MEM32(edi + 0x50); /* 0x141601B8: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141601BB: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141601C0: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141603B4; /* 0x141601C3: jne 0x141603b4 */
L_141601C9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141601C9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141601CB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x141601CD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_141601E4; /* 0x141601D0: jnp 0x141601e4 */
L_141601D2:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141601D2: fstp st(1) */
L_141601D4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141601D4: fstp st(0) */
    eax = 0x80004005u; /* 0x141601D6: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x141601DB: pop edi */
    esi = POP32_VAL(esp); /* 0x141601DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x141601DD: pop ebx */
    esp = ebp; /* 0x141601DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141601E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141601E1: ret 0x14 */
L_141601E4:
    eax = MEM32(edi + 0x5C); /* 0x141601E4: mov eax, dword ptr [edi + 0x5c] */
    ecx = MEM32(eax * 4 + 0x1402D110); /* 0x141601E7: mov ecx, dword ptr [eax*4 + 0x1402d110] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x141601EE: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 4 */ /* 0x141601F1: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141602C8; /* 0x141601F4: je 0x141602c8 */
L_141601FA:
    fp_push(*(double*)ADDR(0x14066800)); /* 0x141601FA: fld qword ptr [0x14066800] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160200: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160202: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x14160204: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1416021C; /* 0x14160207: jnp 0x1416021c */
L_14160209:
    fp_push(*(double*)ADDR(0x14066878)); /* 0x14160209: fld qword ptr [0x14066878] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1416020F: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160211: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14160213: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141602BF; /* 0x14160216: jne 0x141602bf */
L_1416021C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1416021C: fstp st(1) */
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x1416021E: fld qword ptr [esp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160222: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160224: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160226: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_141603C5; /* 0x14160229: jnp 0x141603c5 */
L_1416022F:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x20) = _v; } /* 0x1416022F: fstp dword ptr [esp + 0x20] */
    MEM32(esp + 0x24) = 0; /* 0x14160233: mov dword ptr [esp + 0x24], 0 */
    ecx = MEM32(esp + 0x20); /* 0x1416023B: mov ecx, dword ptr [esp + 0x20] */
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x1416023F: fld qword ptr [esp + 0x30] */
    eax = ecx; /* 0x14160243: mov eax, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x30) = _v; } /* 0x14160245: fstp dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x14160249: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416024E: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = ecx; /* 0x14160251: mov dword ptr [esp + 0x28], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160263; /* 0x14160255: je 0x14160263 */
L_14160257:
    MEM32(esp + 0x28) = ecx; /* 0x14160257: mov dword ptr [esp + 0x28], ecx */
    MEM32(esp + 0x24) = 0xFFFFFFFFu; /* 0x1416025B: mov dword ptr [esp + 0x24], 0xffffffff */
L_14160263:
    eax = MEM32(esp + 0x30); /* 0x14160263: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x14160267: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esp + 0x20))); _flag_b = (uint32_t)((eax ^ MEM32(esp + 0x20)));
    eax = eax ^ MEM32(esp + 0x20); /* 0x1416026A: xor eax, dword ptr [esp + 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x80000000u; /* 0x1416026E: mov esi, 0x80000000 */
    edx = 1; /* 0x14160273: mov edx, 1 */
    MEM32(esp + 0x30) = eax; /* 0x14160278: mov dword ptr [esp + 0x30], eax */
    ecx = 0x1Eu; /* 0x1416027C: mov ecx, 0x1e */
L_14160281:
    eax = 1; /* 0x14160281: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x14160286: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x14160286: shl eax, cl */
    /* test MEM32(esp + 0x30), eax */ /* 0x14160288: test dword ptr [esp + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160297; /* 0x1416028C: jne 0x14160297 */
L_1416028E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1416028E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1416028F: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x14160291: dec ecx */
    _flag_k = FK_DEC;
    /* cmp edx, 0x20u */ /* 0x14160292: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14160281; /* 0x14160295: jb 0x14160281 */
L_14160297:
    eax = MEM32(ebp + 0x8); /* 0x14160297: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1416029A: push ebx */
    PUSH32(esp, esi); /* 0x1416029B: push esi */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x1416029C: push dword ptr [esp + 0x2c] */
    ecx = edi; /* 0x141602A0: mov ecx, edi */
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x141602A2: push dword ptr [esp + 0x34] */
    PUSH32(esp, eax); /* 0x141602A6: push eax */
    RECOMP_CALL(sub_14160820); /* 0x141602A7: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141602AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141603DB; /* 0x141602AE: js 0x141603db */
L_141602B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141602B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141602B6: pop edi */
    esi = POP32_VAL(esp); /* 0x141602B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x141602B8: pop ebx */
    esp = ebp; /* 0x141602B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141602BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141602BC: ret 0x14 */
L_141602BF:
    /* cmp ecx, 4 */ /* 0x141602BF: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160391; /* 0x141602C2: jne 0x14160391 */
L_141602C8:
    fp_push(*(double*)ADDR(0x14066808)); /* 0x141602C8: fld qword ptr [0x14066808] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141602CE: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141602D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x141602D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_141602EE; /* 0x141602D5: jnp 0x141602ee */
L_141602D7:
    fp_push(*(double*)ADDR(0x14066810)); /* 0x141602D7: fld qword ptr [0x14066810] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x141602DD: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141602DF: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141602E1: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x141602E3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160393; /* 0x141602E6: jne 0x14160393 */
L_141602EC:
    goto L_141602F0; /* 0x141602EC: jmp 0x141602f0 */
L_141602EE:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141602EE: fstp st(1) */
L_141602F0:
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x141602F0: fld qword ptr [esp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141602F4: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141602F6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x141602F8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_141603C3; /* 0x141602FB: jnp 0x141603c3 */
L_14160301:
    fp_xch(1); /* 0x14160301: fxch st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14160303: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x38) = _v; } /* 0x14160305: fstp qword ptr [esp + 0x38] */
    MEM32(esp + 0x20) = 0x80000000u; /* 0x14160309: mov dword ptr [esp + 0x20], 0x80000000 */
    ebx = edi + 0x1; /* 0x14160311: lea ebx, [edi + 1] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x14160314: fstp qword ptr [esp + 0x30] */
    esi = MEM32(esp + 0x30); /* 0x14160318: mov esi, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((esi ^ MEM32(esp + 0x38))); _flag_b = (uint32_t)((esi ^ MEM32(esp + 0x38)));
    esi = esi ^ MEM32(esp + 0x38); /* 0x1416031C: xor esi, dword ptr [esp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x34); /* 0x14160320: mov eax, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)((eax ^ MEM32(esp + 0x3C))); _flag_b = (uint32_t)((eax ^ MEM32(esp + 0x3C)));
    eax = eax ^ MEM32(esp + 0x3C); /* 0x14160324: xor eax, dword ptr [esp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = esi; /* 0x14160328: mov dword ptr [esp + 0x28], esi */
    MEM32(esp + 0x30) = eax; /* 0x1416032C: mov dword ptr [esp + 0x30], eax */
L_14160330:
    ecx = 0x3Fu; /* 0x14160330: mov ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x14160335: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = 1; /* 0x14160337: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1416033C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141ED070); /* 0x1416033E: call 0x141ed070 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x30); /* 0x14160343: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x14160347: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x14160349: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1416034B: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160367; /* 0x1416034D: jne 0x14160367 */
L_1416034F:
    esi = MEM32(esp + 0x28); /* 0x1416034F: mov esi, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x14160353: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x20); /* 0x14160355: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x14160359: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1416035B: inc ebx */
    _flag_k = FK_INC;
    MEM32(esp + 0x20) = eax; /* 0x1416035C: mov dword ptr [esp + 0x20], eax */
    /* cmp ebx, 0x40u */ /* 0x14160360: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14160330; /* 0x14160363: jb 0x14160330 */
L_14160365:
    goto L_1416036B; /* 0x14160365: jmp 0x1416036b */
L_14160367:
    eax = MEM32(esp + 0x20); /* 0x14160367: mov eax, dword ptr [esp + 0x20] */
L_1416036B:
    ecx = MEM32(esp + 0x24); /* 0x1416036B: mov ecx, dword ptr [esp + 0x24] */
    PUSH32(esp, eax); /* 0x1416036F: push eax */
    eax = MEM32(ebp + 0x8); /* 0x14160370: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x14160373: push edi */
    PUSH32(esp, MEM32(esp + 0x44)); /* 0x14160374: push dword ptr [esp + 0x44] */
    PUSH32(esp, MEM32(esp + 0x44)); /* 0x14160378: push dword ptr [esp + 0x44] */
    PUSH32(esp, eax); /* 0x1416037C: push eax */
    RECOMP_CALL(sub_14160820); /* 0x1416037D: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160382: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141603DB; /* 0x14160384: js 0x141603db */
L_14160386:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160386: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14160388: pop edi */
    esi = POP32_VAL(esp); /* 0x14160389: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416038A: pop ebx */
    esp = ebp; /* 0x1416038B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416038D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1416038E: ret 0x14 */
L_14160391:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160391: fstp st(1) */
L_14160393:
    PUSH32(esp, 0); /* 0x14160393: push 0 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160395: fstp st(0) */
    PUSH32(esp, 0); /* 0x14160397: push 0 */
    PUSH32(esp, 0); /* 0x14160399: push 0 */
    PUSH32(esp, 0); /* 0x1416039B: push 0 */
    PUSH32(esp, ebx); /* 0x1416039D: push ebx */
    ecx = edi; /* 0x1416039E: mov ecx, edi */
    RECOMP_CALL(sub_14160820); /* 0x141603A0: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141603A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141603DB; /* 0x141603A7: js 0x141603db */
L_141603A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141603A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141603AB: pop edi */
    esi = POP32_VAL(esp); /* 0x141603AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x141603AD: pop ebx */
    esp = ebp; /* 0x141603AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141603B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141603B1: ret 0x14 */
L_141603B4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141603B4: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141603B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141603B8: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x141603BA: pop edi */
    esi = POP32_VAL(esp); /* 0x141603BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x141603BC: pop ebx */
    esp = ebp; /* 0x141603BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141603BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141603C0: ret 0x14 */
L_141603C3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141603C3: fstp st(0) */
L_141603C5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141603C5: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141603C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141603C9: pop edi */
    esi = POP32_VAL(esp); /* 0x141603CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x141603CB: pop ebx */
    esp = ebp; /* 0x141603CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141603CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141603CF: ret 0x14 */
L_141603D2:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141603D2: fstp st(1) */
L_141603D4:
    eax = 1; /* 0x141603D4: mov eax, 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141603D9: fstp st(0) */
L_141603DB:
    edi = POP32_VAL(esp); /* 0x141603DB: pop edi */
    esi = POP32_VAL(esp); /* 0x141603DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x141603DD: pop ebx */
    esp = ebp; /* 0x141603DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141603E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141603E1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_141603F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141603F0u);

L_141603F0:
    edi = edi; /* 0x141603F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141603F2: push ebp */
    ebp = esp; /* 0x141603F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x141603F5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x141603F8: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141603FB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x141603FC: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x141603FF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x14160400: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x14160403: push edi */
    edi = MEM32(ebp + 0x18); /* 0x14160404: mov edi, dword ptr [ebp + 0x18] */
    edx = ecx; /* 0x14160407: mov edx, ecx */
    ecx = MEM32(ebp + 0x14); /* 0x14160409: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(esp + 0x1C) = edx; /* 0x1416040C: mov dword ptr [esp + 0x1c], edx */
    MEM32(esp + 0x18) = ebx; /* 0x14160410: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x10) = ecx; /* 0x14160414: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x14) = esi; /* 0x14160418: mov dword ptr [esp + 0x14], esi */
    /* cmp ebx, edi */ /* 0x1416041C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_14160426; /* 0x1416041E: jl 0x14160426 */
L_14160420:
    if (CMP_G(_flag_a, _flag_b)) goto L_14160467; /* 0x14160420: jg 0x14160467 */
L_14160422:
    /* cmp esi, ecx */ /* 0x14160422: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160467; /* 0x14160424: ja 0x14160467 */
L_14160426:
    eax = edx + 0x50; /* 0x14160426: lea eax, [edx + 0x50] */
    MEM32(esp + 0x20) = eax; /* 0x14160429: mov dword ptr [esp + 0x20], eax */
    eax = MEM32(eax); /* 0x1416042D: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1416042F: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160434: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160475; /* 0x14160437: je 0x14160475 */
L_14160439:
    eax = MEM32(edx + 0xC8); /* 0x14160439: mov eax, dword ptr [edx + 0xc8] */
    edx = MEM32(edx + 0xCC); /* 0x1416043F: mov edx, dword ptr [edx + 0xcc] */
    /* cmp edx, ebx */ /* 0x14160445: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_14160467; /* 0x14160447: jl 0x14160467 */
L_14160449:
    if (CMP_G(_flag_a, _flag_b)) goto L_1416044F; /* 0x14160449: jg 0x1416044f */
L_1416044B:
    /* cmp eax, esi */ /* 0x1416044B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14160467; /* 0x1416044D: jb 0x14160467 */
L_1416044F:
    /* cmp edx, edi */ /* 0x1416044F: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_14160467; /* 0x14160451: jg 0x14160467 */
L_14160453:
    if (CMP_L(_flag_a, _flag_b)) goto L_14160459; /* 0x14160453: jl 0x14160459 */
L_14160455:
    /* cmp eax, ecx */ /* 0x14160455: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160467; /* 0x14160457: ja 0x14160467 */
L_14160459:
    eax = 1; /* 0x14160459: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x1416045E: pop edi */
    esi = POP32_VAL(esp); /* 0x1416045F: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160460: pop ebx */
    esp = ebp; /* 0x14160461: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160463: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160464: ret 0x14 */
L_14160467:
    eax = 0x80004005u; /* 0x14160467: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1416046C: pop edi */
    esi = POP32_VAL(esp); /* 0x1416046D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416046E: pop ebx */
    esp = ebp; /* 0x1416046F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160471: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160472: ret 0x14 */
L_14160475:
    eax = MEM32(edx + 0xE8); /* 0x14160475: mov eax, dword ptr [edx + 0xe8] */
    /* cmp ebx, MEM32(edx + 0xEC) */ /* 0x1416047B: cmp ebx, dword ptr [edx + 0xec] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_14160499; /* 0x14160481: jg 0x14160499 */
L_14160483:
    if (CMP_L(_flag_a, _flag_b)) goto L_14160489; /* 0x14160483: jl 0x14160489 */
L_14160485:
    /* cmp esi, eax */ /* 0x14160485: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14160499; /* 0x14160487: jae 0x14160499 */
L_14160489:
    ebx = MEM32(edx + 0xEC); /* 0x14160489: mov ebx, dword ptr [edx + 0xec] */
    esi = eax; /* 0x1416048F: mov esi, eax */
    MEM32(esp + 0x14) = esi; /* 0x14160491: mov dword ptr [esp + 0x14], esi */
    MEM32(esp + 0x18) = ebx; /* 0x14160495: mov dword ptr [esp + 0x18], ebx */
L_14160499:
    /* cmp edi, MEM32(edx + 0xF4) */ /* 0x14160499: cmp edi, dword ptr [edx + 0xf4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_141604BB; /* 0x1416049F: jl 0x141604bb */
L_141604A1:
    if (CMP_G(_flag_a, _flag_b)) goto L_141604AB; /* 0x141604A1: jg 0x141604ab */
L_141604A3:
    /* cmp ecx, MEM32(edx + 0xF0) */ /* 0x141604A3: cmp ecx, dword ptr [edx + 0xf0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141604BB; /* 0x141604A9: jbe 0x141604bb */
L_141604AB:
    ecx = MEM32(edx + 0xF0); /* 0x141604AB: mov ecx, dword ptr [edx + 0xf0] */
    edi = MEM32(edx + 0xF4); /* 0x141604B1: mov edi, dword ptr [edx + 0xf4] */
    MEM32(esp + 0x10) = ecx; /* 0x141604B7: mov dword ptr [esp + 0x10], ecx */
L_141604BB:
    /* cmp ebx, edi */ /* 0x141604BB: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_141604E6; /* 0x141604BD: jl 0x141604e6 */
L_141604BF:
    if (CMP_G(_flag_a, _flag_b)) goto L_141604C5; /* 0x141604BF: jg 0x141604c5 */
L_141604C1:
    /* cmp esi, ecx */ /* 0x141604C1: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141604E6; /* 0x141604C3: jbe 0x141604e6 */
L_141604C5:
    eax = MEM32(ebp + 0x8); /* 0x141604C5: mov eax, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax + 0xB28C)); /* 0x141604C8: mov al, byte ptr [eax + 0xb28c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x141604CE: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x141604D0: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141604D3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141604D5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004004u);
    eax = eax & 0x80004004u; /* 0x141604D7: and eax, 0x80004004 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141604DC: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x141604DD: pop edi */
    esi = POP32_VAL(esp); /* 0x141604DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x141604DF: pop ebx */
    esp = ebp; /* 0x141604E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141604E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141604E3: ret 0x14 */
L_141604E6:
    /* cmp esi, eax */ /* 0x141604E6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160506; /* 0x141604E8: jne 0x14160506 */
L_141604EA:
    /* cmp ebx, MEM32(edx + 0xEC) */ /* 0x141604EA: cmp ebx, dword ptr [edx + 0xec] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160506; /* 0x141604F0: jne 0x14160506 */
L_141604F2:
    /* cmp ecx, MEM32(edx + 0xF0) */ /* 0x141604F2: cmp ecx, dword ptr [edx + 0xf0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160506; /* 0x141604F8: jne 0x14160506 */
L_141604FA:
    /* cmp edi, MEM32(edx + 0xF4) */ /* 0x141604FA: cmp edi, dword ptr [edx + 0xf4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160459; /* 0x14160500: je 0x14160459 */
L_14160506:
    MEM32(edx + 0xE8) = esi; /* 0x14160506: mov dword ptr [edx + 0xe8], esi */
    MEM32(edx + 0xEC) = ebx; /* 0x1416050C: mov dword ptr [edx + 0xec], ebx */
    MEM32(edx + 0xF0) = ecx; /* 0x14160512: mov dword ptr [edx + 0xf0], ecx */
    MEM32(edx + 0xF4) = edi; /* 0x14160518: mov dword ptr [edx + 0xf4], edi */
    /* cmp esi, ecx */ /* 0x1416051E: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160547; /* 0x14160520: jne 0x14160547 */
L_14160522:
    /* cmp ebx, edi */ /* 0x14160522: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160547; /* 0x14160524: jne 0x14160547 */
L_14160526:
    PUSH32(esp, ebx); /* 0x14160526: push ebx */
    PUSH32(esp, esi); /* 0x14160527: push esi */
    esi = edx; /* 0x14160528: mov esi, edx */
    RECOMP_CALL(sub_141613F0); /* 0x1416052A: call 0x141613f0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x20); /* 0x1416052F: mov edx, dword ptr [esp + 0x20] */
    eax = MEM32(edx + 0x4); /* 0x14160533: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((MEM32(edx) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(edx) | 0x01000000u));
    MEM32(edx) = MEM32(edx) | 0x01000000u; /* 0x14160536: or dword ptr [edx], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esp + 0x14); /* 0x1416053C: mov esi, dword ptr [esp + 0x14] */
    MEM32(edx + 0x4) = eax; /* 0x14160540: mov dword ptr [edx + 4], eax */
    edx = MEM32(esp + 0x1C); /* 0x14160543: mov edx, dword ptr [esp + 0x1c] */
L_14160547:
    eax = MEM32(edx + 0x50); /* 0x14160547: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1416054A: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416054F: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141605F7; /* 0x14160552: jne 0x141605f7 */
L_14160558:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x14160558: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1416056E; /* 0x1416055B: jg 0x1416056e */
L_1416055D:
    if (CMP_L(_flag_a, _flag_b)) goto L_14160564; /* 0x1416055D: jl 0x14160564 */
L_1416055F:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1416055F: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1416056E; /* 0x14160562: ja 0x1416056e */
L_14160564:
    /* test edi, edi */ /* 0x14160564: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14160587; /* 0x14160566: jg 0x14160587 */
L_14160568:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416056E; /* 0x14160568: jl 0x1416056e */
L_1416056A:
    /* test ecx, ecx */ /* 0x1416056A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_14160587; /* 0x1416056C: jae 0x14160587 */
L_1416056E:
    PUSH32(esp, edi); /* 0x1416056E: push edi */
    PUSH32(esp, ecx); /* 0x1416056F: push ecx */
    PUSH32(esp, ebx); /* 0x14160570: push ebx */
    PUSH32(esp, esi); /* 0x14160571: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160572: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x14160575: push edx */
    RECOMP_CALL(sub_14160610); /* 0x14160576: call 0x14160610 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416057B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141605F9; /* 0x1416057D: js 0x141605f9 */
L_14160583:
    ecx = MEM32(esp + 0x10); /* 0x14160583: mov ecx, dword ptr [esp + 0x10] */
L_14160587:
    eax = ebx; /* 0x14160587: mov eax, ebx */
    _flag_a = (uint32_t)((esi ^ ecx)); _flag_b = (uint32_t)((esi ^ ecx));
    esi = esi ^ ecx; /* 0x14160589: xor esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x1416058B: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1416058D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = 0; /* 0x1416058F: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x24) = esi; /* 0x14160597: mov dword ptr [esp + 0x24], esi */
    MEM32(esp + 0x20) = eax; /* 0x1416059B: mov dword ptr [esp + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1416059F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141605A1:
    ecx = 0x3Fu; /* 0x141605A1: mov ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x141605A6: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = 1; /* 0x141605A8: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141605AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141ED070); /* 0x141605AF: call 0x141ed070 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x141605B4: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x141605B8: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141605BA: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141605BC: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141605D8; /* 0x141605BE: jne 0x141605d8 */
L_141605C0:
    esi = MEM32(esp + 0x24); /* 0x141605C0: mov esi, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x141605C4: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x10); /* 0x141605C6: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141605CA: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141605CC: inc ebx */
    _flag_k = FK_INC;
    MEM32(esp + 0x10) = eax; /* 0x141605CD: mov dword ptr [esp + 0x10], eax */
    /* cmp ebx, 0x3Fu */ /* 0x141605D1: cmp ebx, 0x3f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141605A1; /* 0x141605D4: jb 0x141605a1 */
L_141605D6:
    goto L_141605DC; /* 0x141605D6: jmp 0x141605dc */
L_141605D8:
    eax = MEM32(esp + 0x10); /* 0x141605D8: mov eax, dword ptr [esp + 0x10] */
L_141605DC:
    ebx = MEM32(esp + 0x18); /* 0x141605DC: mov ebx, dword ptr [esp + 0x18] */
    ecx = MEM32(esp + 0x1C); /* 0x141605E0: mov ecx, dword ptr [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x141605E4: push eax */
    PUSH32(esp, edi); /* 0x141605E5: push edi */
    PUSH32(esp, ebx); /* 0x141605E6: push ebx */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x141605E7: push dword ptr [esp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141605EB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14160820); /* 0x141605EE: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141605F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141605F9; /* 0x141605F5: js 0x141605f9 */
L_141605F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141605F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141605F9:
    edi = POP32_VAL(esp); /* 0x141605F9: pop edi */
    esi = POP32_VAL(esp); /* 0x141605FA: pop esi */
    ebx = POP32_VAL(esp); /* 0x141605FB: pop ebx */
    esp = ebp; /* 0x141605FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141605FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141605FF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_14160610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14160610u);

L_14160610:
    edi = edi; /* 0x14160610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14160612: push ebp */
    ebp = esp; /* 0x14160613: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x14160615: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x14160618: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1416061B: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x1416061C: mov ebx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1416061F: push esi */
    esi = MEM32(ebp + 0x14); /* 0x14160620: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x14160623: push edi */
    edi = MEM32(ebp + 0x10); /* 0x14160624: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = esi; /* 0x14160627: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0x1C) = edx; /* 0x1416062A: mov dword ptr [ebp + 0x1c], edx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1416062D: mov dword ptr [ebp - 8], edi */
    /* cmp esi, ebx */ /* 0x14160630: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1416063A; /* 0x14160632: jb 0x1416063a */
L_14160634:
    if (CMP_A(_flag_a, _flag_b)) goto L_14160678; /* 0x14160634: ja 0x14160678 */
L_14160636:
    /* cmp edi, edx */ /* 0x14160636: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160678; /* 0x14160638: ja 0x14160678 */
L_1416063A:
    ecx = MEM32(ebp + 0x8); /* 0x1416063A: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x50); /* 0x1416063D: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14160640: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160645: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160686; /* 0x14160648: je 0x14160686 */
L_1416064A:
    eax = MEM32(ecx + 0xC8); /* 0x1416064A: mov eax, dword ptr [ecx + 0xc8] */
    ecx = MEM32(ecx + 0xCC); /* 0x14160650: mov ecx, dword ptr [ecx + 0xcc] */
    /* cmp ecx, esi */ /* 0x14160656: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14160678; /* 0x14160658: jb 0x14160678 */
L_1416065A:
    if (CMP_A(_flag_a, _flag_b)) goto L_14160660; /* 0x1416065A: ja 0x14160660 */
L_1416065C:
    /* cmp eax, edi */ /* 0x1416065C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14160678; /* 0x1416065E: jb 0x14160678 */
L_14160660:
    /* cmp ecx, ebx */ /* 0x14160660: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160678; /* 0x14160662: ja 0x14160678 */
L_14160664:
    if (CMP_B(_flag_a, _flag_b)) goto L_1416066A; /* 0x14160664: jb 0x1416066a */
L_14160666:
    /* cmp eax, edx */ /* 0x14160666: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160678; /* 0x14160668: ja 0x14160678 */
L_1416066A:
    eax = 1; /* 0x1416066A: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x1416066F: pop edi */
    esi = POP32_VAL(esp); /* 0x14160670: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160671: pop ebx */
    esp = ebp; /* 0x14160672: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14160675: ret 0x18 */
L_14160678:
    eax = 0x80004005u; /* 0x14160678: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1416067D: pop edi */
    esi = POP32_VAL(esp); /* 0x1416067E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416067F: pop ebx */
    esp = ebp; /* 0x14160680: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160682: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14160683: ret 0x18 */
L_14160686:
    eax = MEM32(ecx + 0xF8); /* 0x14160686: mov eax, dword ptr [ecx + 0xf8] */
    /* cmp esi, MEM32(ecx + 0xFC) */ /* 0x1416068C: cmp esi, dword ptr [ecx + 0xfc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141606A8; /* 0x14160692: ja 0x141606a8 */
L_14160694:
    if (CMP_B(_flag_a, _flag_b)) goto L_1416069A; /* 0x14160694: jb 0x1416069a */
L_14160696:
    /* cmp edi, eax */ /* 0x14160696: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141606A8; /* 0x14160698: jae 0x141606a8 */
L_1416069A:
    esi = MEM32(ecx + 0xFC); /* 0x1416069A: mov esi, dword ptr [ecx + 0xfc] */
    edi = eax; /* 0x141606A0: mov edi, eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x141606A2: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x141606A5: mov dword ptr [ebp - 4], esi */
L_141606A8:
    /* cmp ebx, MEM32(ecx + 0x104) */ /* 0x141606A8: cmp ebx, dword ptr [ecx + 0x104] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x104));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141606C9; /* 0x141606AE: jb 0x141606c9 */
L_141606B0:
    if (CMP_A(_flag_a, _flag_b)) goto L_141606BA; /* 0x141606B0: ja 0x141606ba */
L_141606B2:
    /* cmp edx, MEM32(ecx + 0x100) */ /* 0x141606B2: cmp edx, dword ptr [ecx + 0x100] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141606C9; /* 0x141606B8: jbe 0x141606c9 */
L_141606BA:
    edx = MEM32(ecx + 0x100); /* 0x141606BA: mov edx, dword ptr [ecx + 0x100] */
    ebx = MEM32(ecx + 0x104); /* 0x141606C0: mov ebx, dword ptr [ecx + 0x104] */
    MEM32(ebp + 0x1C) = edx; /* 0x141606C6: mov dword ptr [ebp + 0x1c], edx */
L_141606C9:
    /* cmp esi, ebx */ /* 0x141606C9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141606F4; /* 0x141606CB: jb 0x141606f4 */
L_141606CD:
    if (CMP_A(_flag_a, _flag_b)) goto L_141606D3; /* 0x141606CD: ja 0x141606d3 */
L_141606CF:
    /* cmp edi, edx */ /* 0x141606CF: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141606F4; /* 0x141606D1: jbe 0x141606f4 */
L_141606D3:
    eax = MEM32(ebp + 0xC); /* 0x141606D3: mov eax, dword ptr [ebp + 0xc] */
    SET_LO8(eax, MEM8(eax + 0xB28C)); /* 0x141606D6: mov al, byte ptr [eax + 0xb28c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x141606DC: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x141606DE: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141606E1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141606E3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004004u);
    eax = eax & 0x80004004u; /* 0x141606E5: and eax, 0x80004004 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141606EA: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x141606EB: pop edi */
    esi = POP32_VAL(esp); /* 0x141606EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x141606ED: pop ebx */
    esp = ebp; /* 0x141606EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141606F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x141606F1: ret 0x18 */
L_141606F4:
    /* cmp edi, eax */ /* 0x141606F4: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160714; /* 0x141606F6: jne 0x14160714 */
L_141606F8:
    /* cmp esi, MEM32(ecx + 0xFC) */ /* 0x141606F8: cmp esi, dword ptr [ecx + 0xfc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160714; /* 0x141606FE: jne 0x14160714 */
L_14160700:
    /* cmp edx, MEM32(ecx + 0x100) */ /* 0x14160700: cmp edx, dword ptr [ecx + 0x100] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160714; /* 0x14160706: jne 0x14160714 */
L_14160708:
    /* cmp ebx, MEM32(ecx + 0x104) */ /* 0x14160708: cmp ebx, dword ptr [ecx + 0x104] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x104));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416066A; /* 0x1416070E: je 0x1416066a */
L_14160714:
    MEM32(ecx + 0xF8) = edi; /* 0x14160714: mov dword ptr [ecx + 0xf8], edi */
    MEM32(ecx + 0xFC) = esi; /* 0x1416071A: mov dword ptr [ecx + 0xfc], esi */
    MEM32(ecx + 0x100) = edx; /* 0x14160720: mov dword ptr [ecx + 0x100], edx */
    MEM32(ecx + 0x104) = ebx; /* 0x14160726: mov dword ptr [ecx + 0x104], ebx */
    /* cmp edi, edx */ /* 0x1416072C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160750; /* 0x1416072E: jne 0x14160750 */
L_14160730:
    /* cmp esi, ebx */ /* 0x14160730: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160750; /* 0x14160732: jne 0x14160750 */
L_14160734:
    PUSH32(esp, esi); /* 0x14160734: push esi */
    PUSH32(esp, edi); /* 0x14160735: push edi */
    esi = ecx; /* 0x14160736: mov esi, ecx */
    RECOMP_CALL(sub_141613F0); /* 0x14160738: call 0x141613f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ecx + 0x54); /* 0x1416073D: mov eax, dword ptr [ecx + 0x54] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(ecx + 0x50) | 0x01000000u));
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) | 0x01000000u; /* 0x14160740: or dword ptr [ecx + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x14160747: mov esi, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x1C); /* 0x1416074A: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x54) = eax; /* 0x1416074D: mov dword ptr [ecx + 0x54], eax */
L_14160750:
    eax = MEM32(ecx + 0x50); /* 0x14160750: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14160753: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160758: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160801; /* 0x1416075B: jne 0x14160801 */
L_14160761:
    ecx = esi; /* 0x14160761: mov ecx, esi */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x14160763: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14160765: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160799; /* 0x14160767: jne 0x14160799 */
L_14160769:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160769: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160785; /* 0x1416076B: ja 0x14160785 */
L_1416076D:
    if (0) goto L_14160777; /* 0x1416076D: jb 0x14160777 */
L_1416076F:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x1416076F: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14160785; /* 0x14160775: ja 0x14160785 */
L_14160777:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160777: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160799; /* 0x14160779: ja 0x14160799 */
L_1416077B:
    if (0) goto L_14160785; /* 0x1416077B: jb 0x14160785 */
L_1416077D:
    /* cmp edx, 0x80000000u */ /* 0x1416077D: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14160799; /* 0x14160783: jae 0x14160799 */
L_14160785:
    eax = MEM32(ebp + 0xC); /* 0x14160785: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x14160788: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1416078B: push ebx */
    PUSH32(esp, edx); /* 0x1416078C: push edx */
    PUSH32(esp, esi); /* 0x1416078D: push esi */
    PUSH32(esp, edi); /* 0x1416078E: push edi */
    PUSH32(esp, eax); /* 0x1416078F: push eax */
    RECOMP_CALL(sub_141603F0); /* 0x14160790: call 0x141603f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160795: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160803; /* 0x14160797: js 0x14160803 */
L_14160799:
    eax = edi; /* 0x14160799: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x1C))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x1C)));
    eax = eax ^ MEM32(ebp + 0x1C); /* 0x1416079B: xor eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1416079E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x141607A0: mov dword ptr [ebp + 0x1c], eax */
    eax = esi; /* 0x141607A3: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141607A5: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = 0; /* 0x141607A7: mov dword ptr [ebp + 0x14], 0 */
    MEM32(ebp + (-0xC)) = eax; /* 0x141607AE: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141607B1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141607B3:
    ecx = 0x3Fu; /* 0x141607B3: mov ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x141607B8: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = 1; /* 0x141607BA: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141607BF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141ED070); /* 0x141607C1: call 0x141ed070 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x1C); /* 0x141607C6: mov esi, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x141607C9: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x141607CC: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141607CE: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141607D0: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141607E6; /* 0x141607D2: jne 0x141607e6 */
L_141607D4:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x141607D4: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x14); /* 0x141607D6: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141607D9: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141607DB: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x141607DC: mov dword ptr [ebp + 0x14], eax */
    /* cmp edi, 0x3Fu */ /* 0x141607DF: cmp edi, 0x3f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141607B3; /* 0x141607E2: jb 0x141607b3 */
L_141607E4:
    goto L_141607E9; /* 0x141607E4: jmp 0x141607e9 */
L_141607E6:
    eax = MEM32(ebp + 0x14); /* 0x141607E6: mov eax, dword ptr [ebp + 0x14] */
L_141607E9:
    edi = MEM32(ebp + (-0x8)); /* 0x141607E9: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x141607EC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x141607EF: push eax */
    PUSH32(esp, ebx); /* 0x141607F0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x141607F1: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x141607F4: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141607F5: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_14160820); /* 0x141607F8: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141607FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160803; /* 0x141607FF: js 0x14160803 */
L_14160801:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160801: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14160803:
    edi = POP32_VAL(esp); /* 0x14160803: pop edi */
    esi = POP32_VAL(esp); /* 0x14160804: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160805: pop ebx */
    esp = ebp; /* 0x14160806: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160808: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14160809: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_14160820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14160820u);

L_14160820:
    edi = edi; /* 0x14160820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14160822: push ebp */
    ebp = esp; /* 0x14160823: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x14160825: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x14160828: sub esp, 0x34 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x1416082B: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1416082E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1416082F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x14160832: push esi */
    esi = ecx; /* 0x14160833: mov esi, ecx */
    eax = MEM32(esi + 0xCC); /* 0x14160835: mov eax, dword ptr [esi + 0xcc] */
    ecx = MEM32(esi + 0xC8); /* 0x1416083B: mov ecx, dword ptr [esi + 0xc8] */
    MEM32(esp + 0x30) = eax; /* 0x14160841: mov dword ptr [esp + 0x30], eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x10)));
    eax = eax ^ MEM32(ebp + 0x10); /* 0x14160845: xor eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x14160848: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xD0));
    ecx = ecx & MEM32(esi + 0xD0); /* 0x1416084A: and ecx, dword ptr [esi + 0xd0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xD4));
    eax = eax & MEM32(esi + 0xD4); /* 0x14160850: and eax, dword ptr [esi + 0xd4] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x14160856: push edi */
    edi = MEM32(ebp + 0x14); /* 0x14160857: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1416085A: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1416085C: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1416085E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = esi; /* 0x14160860: mov dword ptr [esp + 0x30], esi */
    MEM32(esp + 0x28) = edx; /* 0x14160864: mov dword ptr [esp + 0x28], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160878; /* 0x14160868: je 0x14160878 */
L_1416086A:
    eax = 0x80004005u; /* 0x1416086A: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x1416086F: pop edi */
    esi = POP32_VAL(esp); /* 0x14160870: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160871: pop ebx */
    esp = ebp; /* 0x14160872: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160874: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160875: ret 0x14 */
L_14160878:
    ecx = MEM32(esi + 0xD0); /* 0x14160878: mov ecx, dword ptr [esi + 0xd0] */
    edx = MEM32(esi + 0xD4); /* 0x1416087E: mov edx, dword ptr [esi + 0xd4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x34));
    edx = edx & MEM32(esp + 0x34); /* 0x14160884: and edx, dword ptr [esp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x14160888: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC8));
    eax = eax & MEM32(esi + 0xC8); /* 0x1416088A: and eax, dword ptr [esi + 0xc8] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x10); /* 0x14160890: mov esi, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x24) = edx; /* 0x14160893: mov dword ptr [esp + 0x24], edx */
    edx = MEM32(esp + 0x28); /* 0x14160897: mov edx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1416089B: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | MEM32(esp + 0x24))); _flag_b = (uint32_t)((esi | MEM32(esp + 0x24)));
    esi = esi | MEM32(esp + 0x24); /* 0x1416089D: or esi, dword ptr [esp + 0x24] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    ebx = ebx & edi; /* 0x141608A1: and ebx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x141608A3: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x141608A5: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = esi; /* 0x141608A7: mov dword ptr [esp + 0x2c], esi */
    esi = MEM32(esp + 0x30); /* 0x141608AB: mov esi, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((edx | MEM32(esi + 0xD4))); _flag_b = (uint32_t)((edx | MEM32(esi + 0xD4)));
    edx = edx | MEM32(esi + 0xD4); /* 0x141608AF: or edx, dword ptr [esi + 0xd4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141608B5: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141608B7: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x34) = ecx; /* 0x141608B9: mov dword ptr [esp + 0x34], ecx */
    ecx = MEM32(esp + 0x2C); /* 0x141608BD: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141608C1: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = edx; /* 0x141608C3: mov dword ptr [esp + 0x28], edx */
    MEM32(esp + 0x30) = ecx; /* 0x141608C7: mov dword ptr [esp + 0x30], ecx */
    /* cmp MEM32(esp + 0x34), eax */ /* 0x141608CB: cmp dword ptr [esp + 0x34], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141608F5; /* 0x141608CF: jne 0x141608f5 */
L_141608D1:
    /* cmp ecx, MEM32(esp + 0x24) */ /* 0x141608D1: cmp ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141608F5; /* 0x141608D5: jne 0x141608f5 */
L_141608D7:
    /* cmp edi, MEM32(esi + 0xD0) */ /* 0x141608D7: cmp edi, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141608F5; /* 0x141608DD: jne 0x141608f5 */
L_141608DF:
    /* cmp edx, MEM32(esi + 0xD4) */ /* 0x141608DF: cmp edx, dword ptr [esi + 0xd4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xD4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141608F5; /* 0x141608E5: jne 0x141608f5 */
L_141608E7:
    eax = 1; /* 0x141608E7: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x141608EC: pop edi */
    esi = POP32_VAL(esp); /* 0x141608ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x141608EE: pop ebx */
    esp = ebp; /* 0x141608EF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141608F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141608F2: ret 0x14 */
L_141608F5:
    eax = MEM32(esp + 0x2C); /* 0x141608F5: mov eax, dword ptr [esp + 0x2c] */
    MEM32(esi + 0xCC) = eax; /* 0x141608F9: mov dword ptr [esi + 0xcc], eax */
    eax = edi; /* 0x141608FF: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x14160901: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC8) = ebx; /* 0x14160903: mov dword ptr [esi + 0xc8], ebx */
    MEM32(esi + 0xD0) = edi; /* 0x14160909: mov dword ptr [esi + 0xd0], edi */
    MEM32(esi + 0xD4) = edx; /* 0x1416090F: mov dword ptr [esi + 0xd4], edx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14160915: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160930; /* 0x14160918: jne 0x14160930 */
L_1416091A:
    RECOMP_CALL(sub_141614D0); /* 0x1416091A: call 0x141614d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x54); /* 0x1416091F: mov eax, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x01000000u; /* 0x14160922: or dword ptr [esi + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esp + 0x28); /* 0x14160929: mov edx, dword ptr [esp + 0x28] */
    MEM32(esi + 0x54) = eax; /* 0x1416092D: mov dword ptr [esi + 0x54], eax */
L_14160930:
    ecx = MEM32(esi + 0x50); /* 0x14160930: mov ecx, dword ptr [esi + 0x50] */
    eax = ecx; /* 0x14160933: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14160935: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416093A: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160BC7; /* 0x1416093D: jne 0x14160bc7 */
L_14160943:
    eax = MEM32(esi + 0x5C); /* 0x14160943: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(double*)ADDR(esi + 0xD8)); /* 0x14160946: fld qword ptr [esi + 0xd8] */
    eax = MEM32(eax * 4 + 0x1402D110); /* 0x1416094C: mov eax, dword ptr [eax*4 + 0x1402d110] */
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x14160953: fld qword ptr [esi + 0xe0] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x14160959: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 4 */ /* 0x1416095B: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160A78; /* 0x1416095D: je 0x14160a78 */
L_14160963:
    edx = MEM32(esp + 0x34); /* 0x14160963: mov edx, dword ptr [esp + 0x34] */
    eax = edx; /* 0x14160967: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x14160969: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = 0; /* 0x1416096E: mov dword ptr [esp + 0x38], 0 */
    /* cmp eax, 0x7F800000u */ /* 0x14160976: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160988; /* 0x1416097B: jne 0x14160988 */
L_1416097D:
    /* cmp MEM32(esp + 0x38), 0 */ /* 0x1416097D: cmp dword ptr [esp + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160A97; /* 0x14160982: je 0x14160a97 */
L_14160988:
    fp_push(0.0); /* 0x14160988: fldz  */
    eax = ebx; /* 0x1416098A: mov eax, ebx */
    eax = ~eax; /* 0x1416098C: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1416098E: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x14160990: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160995: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141609BF; /* 0x14160998: je 0x141609bf */
L_1416099A:
    fp_push(*(float*)&MEM32(0x140668C0)); /* 0x1416099A: fld dword ptr [0x140668c0] */
    eax = ebx; /* 0x141609A0: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141609A2: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x141609A4: mov dword ptr [esp + 0x24], eax */
    fp_push(*(float*)&MEM32(esp + 0x24)); /* 0x141609A8: fld dword ptr [esp + 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141609AC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141609AE: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141609B0: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x141609B2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141609D2; /* 0x141609B5: jp 0x141609d2 */
L_141609B7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141609B7: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x24) = _v; } /* 0x141609B9: fst dword ptr [esp + 0x24] */
    goto L_141609CE; /* 0x141609BD: jmp 0x141609ce */
L_141609BF:
    eax = edi; /* 0x141609BF: mov eax, edi */
    eax = ~eax; /* 0x141609C1: not eax */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x141609C3: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80000000u)); _flag_b = (uint32_t)((eax | 0x80000000u));
    eax = eax | 0x80000000u; /* 0x141609C5: or eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x141609CA: mov dword ptr [esp + 0x24], eax */
L_141609CE:
    fp_push(*(float*)&MEM32(esp + 0x24)); /* 0x141609CE: fld dword ptr [esp + 0x24] */
L_141609D2:
    fp_xch(3); /* 0x141609D2: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x38) = _v; } /* 0x141609D4: fst dword ptr [esp + 0x38] */
    fp_push(*(float*)&MEM32(esp + 0x38)); /* 0x141609D8: fld dword ptr [esp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x141609DC: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141609DE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x141609E0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141609E9; /* 0x141609E3: jp 0x141609e9 */
L_141609E5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141609E5: fstp st(0) */
    goto L_141609EB; /* 0x141609E7: jmp 0x141609eb */
L_141609E9:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x141609E9: fstp st(3) */
L_141609EB:
    eax = edx; /* 0x141609EB: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x141609ED: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141609F2: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160A20; /* 0x141609F5: je 0x14160a20 */
L_141609F7:
    fp_push(*(float*)&MEM32(0x140668BC)); /* 0x141609F7: fld dword ptr [0x140668bc] */
    eax = ebx; /* 0x141609FD: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141609FF: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x14160A01: mov dword ptr [esp + 0x24], eax */
    fp_push(*(float*)&MEM32(esp + 0x24)); /* 0x14160A05: fld dword ptr [esp + 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160A09: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160A0B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160A0D: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x14160A0F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160A37; /* 0x14160A12: jne 0x14160a37 */
L_14160A14:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160A14: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x24) = _v; } /* 0x14160A16: fstp dword ptr [esp + 0x24] */
    fp_push(*(float*)&MEM32(esp + 0x24)); /* 0x14160A1A: fld dword ptr [esp + 0x24] */
    goto L_14160A39; /* 0x14160A1E: jmp 0x14160a39 */
L_14160A20:
    eax = edi; /* 0x14160A20: mov eax, edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160A22: fstp st(0) */
    eax = ~eax; /* 0x14160A24: not eax */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x14160A26: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x14160A28: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x14160A2D: mov dword ptr [esp + 0x24], eax */
    fp_push(*(float*)&MEM32(esp + 0x24)); /* 0x14160A31: fld dword ptr [esp + 0x24] */
    goto L_14160A39; /* 0x14160A35: jmp 0x14160a39 */
L_14160A37:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160A37: fstp st(1) */
L_14160A39:
    fp_xch(1); /* 0x14160A39: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x38) = _v; } /* 0x14160A3B: fst dword ptr [esp + 0x38] */
    fp_push(*(float*)&MEM32(esp + 0x38)); /* 0x14160A3F: fld dword ptr [esp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14160A43: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160A45: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x14160A47: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160A50; /* 0x14160A4A: jne 0x14160a50 */
L_14160A4C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160A4C: fstp st(0) */
    goto L_14160A52; /* 0x14160A4E: jmp 0x14160a52 */
L_14160A50:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160A50: fstp st(1) */
L_14160A52:
    eax = MEM32(ebp + 0x8); /* 0x14160A52: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14160A55: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x14160A58: fstp qword ptr [esp + 8] */
    ecx = esi; /* 0x14160A5C: mov ecx, esi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14160A5E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x14160A61: push eax */
    RECOMP_CALL(sub_1415FDD0); /* 0x14160A62: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160A67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14160B68; /* 0x14160A69: jns 0x14160b68 */
L_14160A6F:
    edi = POP32_VAL(esp); /* 0x14160A6F: pop edi */
    esi = POP32_VAL(esp); /* 0x14160A70: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160A71: pop ebx */
    esp = ebp; /* 0x14160A72: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160A74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160A75: ret 0x14 */
L_14160A78:
    eax = MEM32(esp + 0x30); /* 0x14160A78: mov eax, dword ptr [esp + 0x30] */
    MEM32(esp + 0x38) = 0; /* 0x14160A7C: mov dword ptr [esp + 0x38], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    eax = eax & 0x7FF00000u; /* 0x14160A84: and eax, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esp + 0x38), 0 */ /* 0x14160A89: cmp dword ptr [esp + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160AAF; /* 0x14160A8E: jne 0x14160aaf */
L_14160A90:
    /* cmp eax, 0x7FF00000u */ /* 0x14160A90: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160AAF; /* 0x14160A95: jne 0x14160aaf */
L_14160A97:
    eax = MEM32(esi + 0x54); /* 0x14160A97: mov eax, dword ptr [esi + 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160A9A: fstp st(0) */
    _flag_a = (uint32_t)((ecx | 0x00C00000u)); _flag_b = (uint32_t)((ecx | 0x00C00000u));
    ecx = ecx | 0x00C00000u; /* 0x14160A9C: or ecx, 0xc00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160AA2: fstp st(0) */
    MEM32(esi + 0x50) = ecx; /* 0x14160AA4: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x54) = eax; /* 0x14160AA7: mov dword ptr [esi + 0x54], eax */
    goto L_14160B68; /* 0x14160AAA: jmp 0x14160b68 */
L_14160AAF:
    ecx = MEM32(esp + 0x2C); /* 0x14160AAF: mov ecx, dword ptr [esp + 0x2c] */
    ecx = ~ecx; /* 0x14160AB3: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x14160AB5: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    ecx = ecx & 0x80000000u; /* 0x14160AB7: and ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160ABD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14160ABF: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160AD5; /* 0x14160AC1: je 0x14160ad5 */
L_14160AC3:
    eax = MEM32(esp + 0x34); /* 0x14160AC3: mov eax, dword ptr [esp + 0x34] */
    ecx = MEM32(esp + 0x30); /* 0x14160AC7: mov ecx, dword ptr [esp + 0x30] */
    MEM32(esp + 0x38) = eax; /* 0x14160ACB: mov dword ptr [esp + 0x38], eax */
    MEM32(esp + 0x3C) = ecx; /* 0x14160ACF: mov dword ptr [esp + 0x3c], ecx */
    goto L_14160AF4; /* 0x14160AD3: jmp 0x14160af4 */
L_14160AD5:
    eax = edx; /* 0x14160AD5: mov eax, edx */
    eax = ~eax; /* 0x14160AD7: not eax */
    _flag_a = (uint32_t)((eax | MEM32(esp + 0x2C))); _flag_b = (uint32_t)((eax | MEM32(esp + 0x2C)));
    eax = eax | MEM32(esp + 0x2C); /* 0x14160AD9: or eax, dword ptr [esp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x14160ADD: mov ecx, edi */
    ecx = ~ecx; /* 0x14160ADF: not ecx */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x14160AE1: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80000000u)); _flag_b = (uint32_t)((eax | 0x80000000u));
    eax = eax | 0x80000000u; /* 0x14160AE3: or eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = ecx; /* 0x14160AE8: mov dword ptr [esp + 0x38], ecx */
    ecx = MEM32(esp + 0x30); /* 0x14160AEC: mov ecx, dword ptr [esp + 0x30] */
    MEM32(esp + 0x3C) = eax; /* 0x14160AF0: mov dword ptr [esp + 0x3c], eax */
L_14160AF4:
    fp_push(*(double*)ADDR(esp + 0x38)); /* 0x14160AF4: fld qword ptr [esp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14160AF8: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160AFA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x14160AFC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160B05; /* 0x14160AFF: jne 0x14160b05 */
L_14160B01:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x14160B01: fstp st(2) */
    goto L_14160B07; /* 0x14160B03: jmp 0x14160b07 */
L_14160B05:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160B05: fstp st(0) */
L_14160B07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    ecx = ecx & 0x80000000u; /* 0x14160B07: and ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160B0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14160B0F: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160B21; /* 0x14160B11: je 0x14160b21 */
L_14160B13:
    eax = MEM32(esp + 0x34); /* 0x14160B13: mov eax, dword ptr [esp + 0x34] */
    MEM32(esp + 0x38) = eax; /* 0x14160B17: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(esp + 0x30); /* 0x14160B1B: mov eax, dword ptr [esp + 0x30] */
    goto L_14160B38; /* 0x14160B1F: jmp 0x14160b38 */
L_14160B21:
    eax = edx; /* 0x14160B21: mov eax, edx */
    ecx = edi; /* 0x14160B23: mov ecx, edi */
    eax = ~eax; /* 0x14160B25: not eax */
    _flag_a = (uint32_t)((eax | MEM32(esp + 0x2C))); _flag_b = (uint32_t)((eax | MEM32(esp + 0x2C)));
    eax = eax | MEM32(esp + 0x2C); /* 0x14160B27: or eax, dword ptr [esp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x14160B2B: not ecx */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x14160B2D: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x14160B2F: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = ecx; /* 0x14160B34: mov dword ptr [esp + 0x38], ecx */
L_14160B38:
    MEM32(esp + 0x3C) = eax; /* 0x14160B38: mov dword ptr [esp + 0x3c], eax */
    fp_push(*(double*)ADDR(esp + 0x38)); /* 0x14160B3C: fld qword ptr [esp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160B40: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160B42: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14160B44: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160B4D; /* 0x14160B47: jp 0x14160b4d */
L_14160B49:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160B49: fstp st(1) */
    goto L_14160B4F; /* 0x14160B4B: jmp 0x14160b4f */
L_14160B4D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160B4D: fstp st(0) */
L_14160B4F:
    eax = MEM32(ebp + 0x8); /* 0x14160B4F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14160B52: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x14160B55: fstp qword ptr [esp + 8] */
    ecx = esi; /* 0x14160B59: mov ecx, esi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14160B5B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x14160B5E: push eax */
    RECOMP_CALL(sub_1415FDD0); /* 0x14160B5F: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160B64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160BC9; /* 0x14160B66: js 0x14160bc9 */
L_14160B68:
    MEM32(esp + 0x28) = ~MEM32(esp + 0x28); /* 0x14160B68: not dword ptr [esp + 0x28] */
    edi = ~edi; /* 0x14160B6C: not edi */
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x14160B6E: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(esp + 0x28); /* 0x14160B70: mov ebx, dword ptr [esp + 0x28] */
    eax = ebx; /* 0x14160B74: mov eax, ebx */
    _flag_a = (uint32_t)((eax | MEM32(esp + 0x2C))); _flag_b = (uint32_t)((eax | MEM32(esp + 0x2C)));
    eax = eax | MEM32(esp + 0x2C); /* 0x14160B76: or eax, dword ptr [esp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x14160B7A: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = eax; /* 0x14160B80: mov dword ptr [esp + 0x2c], eax */
    eax = ebx; /* 0x14160B84: mov eax, ebx */
    _flag_a = (uint32_t)((ebx | MEM32(esp + 0x30))); _flag_b = (uint32_t)((ebx | MEM32(esp + 0x30)));
    ebx = ebx | MEM32(esp + 0x30); /* 0x14160B86: or ebx, dword ptr [esp + 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14160B8A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x14160B8C: mov ecx, edx */
    _flag_a = (uint32_t)((edx | MEM32(esp + 0x34))); _flag_b = (uint32_t)((edx | MEM32(esp + 0x34)));
    edx = edx | MEM32(esp + 0x34); /* 0x14160B8E: or edx, dword ptr [esp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x14160B92: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    eax = eax & MEM32(esp + 0x2C); /* 0x14160B94: and eax, dword ptr [esp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x14160B98: not ecx */
    PUSH32(esp, eax); /* 0x14160B9A: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x14160B9B: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x14160B9D: push ecx */
    PUSH32(esp, ebx); /* 0x14160B9E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x14160B9F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x14160BA2: push edx */
    PUSH32(esp, ebx); /* 0x14160BA3: push ebx */
    ecx = esi; /* 0x14160BA4: mov ecx, esi */
    RECOMP_CALL(sub_141603F0); /* 0x14160BA6: call 0x141603f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160BAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160BC9; /* 0x14160BAD: js 0x14160bc9 */
L_14160BAF:
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x14160BAF: push dword ptr [esp + 0x2c] */
    PUSH32(esp, edi); /* 0x14160BB3: push edi */
    PUSH32(esp, MEM32(esp + 0x38)); /* 0x14160BB4: push dword ptr [esp + 0x38] */
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x14160BB8: push dword ptr [esp + 0x40] */
    PUSH32(esp, ebx); /* 0x14160BBC: push ebx */
    PUSH32(esp, esi); /* 0x14160BBD: push esi */
    RECOMP_CALL(sub_14160610); /* 0x14160BBE: call 0x14160610 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160BC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160BC9; /* 0x14160BC5: js 0x14160bc9 */
L_14160BC7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160BC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14160BC9:
    edi = POP32_VAL(esp); /* 0x14160BC9: pop edi */
    esi = POP32_VAL(esp); /* 0x14160BCA: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160BCB: pop ebx */
    esp = ebp; /* 0x14160BCC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160BCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14160BCF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_14160BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14160BE0u);

L_14160BE0:
    edi = edi; /* 0x14160BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14160BE2: push ebp */
    ebp = esp; /* 0x14160BE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14160BE5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14160BE8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x14160BE9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x14160BEC: push esi */
    PUSH32(esp, edi); /* 0x14160BED: push edi */
    edi = ecx; /* 0x14160BEE: mov edi, ecx */
    esi = eax; /* 0x14160BF0: mov esi, eax */
    eax = MEM32(edi + 0x60); /* 0x14160BF2: mov eax, dword ptr [edi + 0x60] */
    ecx = MEM32(eax + 0x8); /* 0x14160BF5: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x14160BF8: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44210008u);
    ecx = ecx & 0x44210008u; /* 0x14160BFB: and ecx, 0x44210008 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x14160C01: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x14160C06: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14160C08: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160CF5; /* 0x14160C0A: jne 0x14160cf5 */
L_14160C10:
    eax = MEM32(edi + 0x5C); /* 0x14160C10: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax * 4 + 0x14028110); /* 0x14160C13: mov eax, dword ptr [eax*4 + 0x14028110] */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x14160C1A: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x14160C1A: shr eax, 9 */
    /* test LO8(eax), 1 */ /* 0x14160C1D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160C62; /* 0x14160C1F: je 0x14160c62 */
L_14160C21:
    fp_push(*(double*)ADDR(esi)); /* 0x14160C21: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x14160C23: fld qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160C26: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160C28: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160C2A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_14160C3A; /* 0x14160C2D: jnp 0x14160c3a */
L_14160C2F:
    fp_push(*(double*)ADDR(esi)); /* 0x14160C2F: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x14160C31: fucomp st(0) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160C33: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160C35: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_14160C62; /* 0x14160C38: jnp 0x14160c62 */
L_14160C3A:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x14160C3A: fld qword ptr [esi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14160C3D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x14160C40: fstp qword ptr [esp + 8] */
    ecx = edi; /* 0x14160C44: mov ecx, edi */
    fp_push(*(double*)ADDR(esi)); /* 0x14160C46: fld qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14160C48: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x14160C4B: push ebx */
    RECOMP_CALL(sub_1415FDD0); /* 0x14160C4C: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160C51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160D27; /* 0x14160C53: js 0x14160d27 */
L_14160C59:
    MEM8(ebp + (-0x1)) = (uint8_t)((TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160C59: sete byte ptr [ebp - 1] */
    goto L_14160CEA; /* 0x14160C5D: jmp 0x14160cea */
L_14160C62:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x14160C62: push dword ptr [esi + 0x3c] */
    ecx = edi; /* 0x14160C65: mov ecx, edi */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x14160C67: push dword ptr [esi + 0x38] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x14160C6A: push dword ptr [esi + 0x34] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x14160C6D: push dword ptr [esi + 0x30] */
    PUSH32(esp, ebx); /* 0x14160C70: push ebx */
    RECOMP_CALL(sub_141603F0); /* 0x14160C71: call 0x141603f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160C76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160D27; /* 0x14160C78: js 0x14160d27 */
L_14160C7E:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x14160C7E: push dword ptr [esi + 0x1c] */
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160C81: sete bl */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x14160C84: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x14160C87: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x14160C8A: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160C8D: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x14160C90: push edi */
    RECOMP_CALL(sub_14160610); /* 0x14160C91: call 0x14160610 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160C96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160D27; /* 0x14160C98: js 0x14160d27 */
L_14160C9E:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x14160C9E: push dword ptr [esi + 0x24] */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160CA1: sete al */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x14160CA4: push dword ptr [esi + 0x20] */
    ecx = edi; /* 0x14160CA7: mov ecx, edi */
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x14160CA9: push dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)((LO8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ebx) | LO8(eax))) << 24;
    SET_LO8(ebx, LO8(ebx) | LO8(eax)); /* 0x14160CAC: or bl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x14160CAE: push dword ptr [esi + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160CB1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14160820); /* 0x14160CB4: call 0x14160820 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160D27; /* 0x14160CBB: js 0x14160d27 */
L_14160CBD:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x14160CBD: fld qword ptr [esi + 8] */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160CC0: sete al */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14160CC3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x14160CC6: fstp qword ptr [esp + 8] */
    ecx = edi; /* 0x14160CCA: mov ecx, edi */
    fp_push(*(double*)ADDR(esi)); /* 0x14160CCC: fld qword ptr [esi] */
    _flag_a = (uint32_t)((LO8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ebx) | LO8(eax))) << 24;
    SET_LO8(ebx, LO8(ebx) | LO8(eax)); /* 0x14160CCE: or bl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14160CD0: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160CD3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1415FDD0); /* 0x14160CD6: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160CDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160D27; /* 0x14160CDD: js 0x14160d27 */
L_14160CDF:
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160CDF: sete al */
    _flag_a = (uint32_t)((LO8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ebx) | LO8(eax))) << 24;
    SET_LO8(ebx, LO8(ebx) | LO8(eax)); /* 0x14160CE2: or bl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x14160CE4: mov byte ptr [ebp - 1], bl */
    ebx = MEM32(ebp + 0x8); /* 0x14160CE7: mov ebx, dword ptr [ebp + 8] */
L_14160CEA:
    esi = ebp + 0xC; /* 0x14160CEA: lea esi, [ebp + 0xc] */
    RECOMP_CALL(sub_141615B0); /* 0x14160CED: call 0x141615b0 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x14160CF2: mov dl, byte ptr [ebp - 1] */
L_14160CF5:
    esi = MEM32(edi + 0x50); /* 0x14160CF5: mov esi, dword ptr [edi + 0x50] */
    ecx = MEM32(ebp + 0xC); /* 0x14160CF8: mov ecx, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x14160CFB: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x14160CFD: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x14160CFF: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00C10000u);
    eax = eax & 0x00C10000u; /* 0x14160D01: and eax, 0xc10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160D06: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160D20; /* 0x14160D09: je 0x14160d20 */
L_14160D0B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00C10000u);
    ecx = ecx & 0x00C10000u; /* 0x14160D0B: and ecx, 0xc10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160D11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x14160D13: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(edi + 0x54))); _flag_b = (uint32_t)((eax | MEM32(edi + 0x54)));
    eax = eax | MEM32(edi + 0x54); /* 0x14160D15: or eax, dword ptr [edi + 0x54] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x50) = ecx; /* 0x14160D18: mov dword ptr [edi + 0x50], ecx */
    MEM32(edi + 0x54) = eax; /* 0x14160D1B: mov dword ptr [edi + 0x54], eax */
    SET_LO8(edx, 1); /* 0x14160D1E: mov dl, 1 */
L_14160D20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160D20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(edx), LO8(edx) */ /* 0x14160D22: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160D24: sete al */
L_14160D27:
    edi = POP32_VAL(esp); /* 0x14160D27: pop edi */
    esi = POP32_VAL(esp); /* 0x14160D28: pop esi */
    ebx = POP32_VAL(esp); /* 0x14160D29: pop ebx */
    esp = ebp; /* 0x14160D2A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160D2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14160D2D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14160D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14160D40u);

L_14160D40:
    edi = edi; /* 0x14160D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14160D42: push ebp */
    ebp = esp; /* 0x14160D43: mov ebp, esp */
    eax = MEM32(esi + 0x60); /* 0x14160D45: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax + 0x8); /* 0x14160D48: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x14160D4B: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, ebx); /* 0x14160D4E: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44210008u);
    ecx = ecx & 0x44210008u; /* 0x14160D4F: and ecx, 0x44210008 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x14160D55: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x14160D5A: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14160D5C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x14160D5E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x14160D61: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160D71; /* 0x14160D62: je 0x14160d71 */
L_14160D64:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00030010u);
    ecx = ecx & 0x00030010u; /* 0x14160D64: and ecx, 0x30010 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = 0; /* 0x14160D6A: mov dword ptr [ebp + 0xc], 0 */
L_14160D71:
    edx = MEM32(esi + 0x50); /* 0x14160D71: mov edx, dword ptr [esi + 0x50] */
    edi = MEM32(esi + 0x54); /* 0x14160D74: mov edi, dword ptr [esi + 0x54] */
    eax = edx; /* 0x14160D77: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00320010u);
    ecx = ecx & 0x00320010u; /* 0x14160D79: and ecx, 0x320010 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00320010u);
    eax = eax & 0x00320010u; /* 0x14160D7F: and eax, 0x320010 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = 0; /* 0x14160D84: mov dword ptr [ebp + 0xc], 0 */
    /* cmp eax, ecx */ /* 0x14160D8B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160D95; /* 0x14160D8D: jne 0x14160d95 */
L_14160D8F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x14160D8F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160DA5; /* 0x14160D93: je 0x14160da5 */
L_14160D95:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFCDFFEFu);
    edx = edx & 0xFFCDFFEFu; /* 0x14160D95: and edx, 0xffcdffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x14160D9B: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = edx; /* 0x14160D9D: mov dword ptr [esi + 0x50], edx */
    MEM32(esi + 0x54) = edi; /* 0x14160DA0: mov dword ptr [esi + 0x54], edi */
    SET_LO8(ebx, 1); /* 0x14160DA3: mov bl, 1 */
L_14160DA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160DA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x14160DA7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x14160DA9: pop edi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160DAA: sete al */
    ebx = POP32_VAL(esp); /* 0x14160DAD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14160DAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14160DAF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14160DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14160DC0u);

L_14160DC0:
    edi = edi; /* 0x14160DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14160DC2: push ebp */
    ebp = esp; /* 0x14160DC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x14160DC5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x14160DC8: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x14160DCA: push edi */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(edx)); /* 0x14160DCB: mov byte ptr [ebp - 5], dl */
    /* test ebx, 0x200000F0u */ /* 0x14160DCE: test ebx, 0x200000f0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200000F0u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F0A; /* 0x14160DD4: je 0x14160f0a */
L_14160DDA:
    fp_push(0.0); /* 0x14160DDA: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14160DDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14160DDE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0; /* 0x14160DE0: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0xFFF00000u; /* 0x14160DE7: mov dword ptr [ebp - 0x18], 0xfff00000 */
    MEM32(ebp + (-0x14)) = 0; /* 0x14160DEE: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0x7FF00000u; /* 0x14160DF5: mov dword ptr [ebp - 0x10], 0x7ff00000 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x14160DFC: mov dword ptr [ebp - 0xc], ecx */
    /* test LO8(ebx), 2 */ /* 0x14160DFF: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160E08; /* 0x14160E02: je 0x14160e08 */
L_14160E04:
    fp_push(_st[0]); /* 0x14160E04: fld st(0) */
    goto L_14160E0B; /* 0x14160E06: jmp 0x14160e0b */
L_14160E08:
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x14160E08: fld qword ptr [ebp - 0x1c] */
L_14160E0B:
    /* test LO8(ebx), 4 */ /* 0x14160E0B: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160E17; /* 0x14160E0E: jne 0x14160e17 */
L_14160E10:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160E10: fstp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x14160E12: fld qword ptr [ebp - 0x14] */
    fp_xch(1); /* 0x14160E15: fxch st(1) */
L_14160E17:
    /* test LO8(ebx), 0x10u */ /* 0x14160E17: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160E42; /* 0x14160E1A: je 0x14160e42 */
L_14160E1C:
    fp_push(*(double*)ADDR(0x14066838)); /* 0x14160E1C: fld qword ptr [0x14066838] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160E22: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160E24: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14160E26: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160E2F; /* 0x14160E29: jne 0x14160e2f */
L_14160E2B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160E2B: fstp st(1) */
    goto L_14160E31; /* 0x14160E2D: jmp 0x14160e31 */
L_14160E2F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160E2F: fstp st(0) */
L_14160E31:
    fp_push(1.0); /* 0x14160E31: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14160E33: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160E35: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x14160E37: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160E40; /* 0x14160E3A: jp 0x14160e40 */
L_14160E3C:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x14160E3C: fstp st(2) */
    goto L_14160E42; /* 0x14160E3E: jmp 0x14160e42 */
L_14160E40:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160E40: fstp st(0) */
L_14160E42:
    eax = ebx; /* 0x14160E42: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000032u);
    eax = eax & 0x20000032u; /* 0x14160E44: and eax, 0x20000032 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20000032u */ /* 0x14160E49: cmp eax, 0x20000032 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000032u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160E5A; /* 0x14160E4E: jne 0x14160e5a */
L_14160E50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14160E50: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x00100000u; /* 0x14160E52: mov edi, 0x100000 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x14160E57: mov dword ptr [ebp - 0xc], ecx */
L_14160E5A:
    /* test LO8(ebx), 0x20u */ /* 0x14160E5A: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160E68; /* 0x14160E5D: je 0x14160e68 */
L_14160E5F:
    _flag_a = (uint32_t)((edi | 0x00200000u)); _flag_b = (uint32_t)((edi | 0x00200000u));
    edi = edi | 0x00200000u; /* 0x14160E5F: or edi, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x14160E65: mov dword ptr [ebp - 0xc], ecx */
L_14160E68:
    /* test LO8(ebx), 0x40u */ /* 0x14160E68: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160E76; /* 0x14160E6B: je 0x14160e76 */
L_14160E6D:
    _flag_a = (uint32_t)((edi | 0x00800000u)); _flag_b = (uint32_t)((edi | 0x00800000u));
    edi = edi | 0x00800000u; /* 0x14160E6D: or edi, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x14160E73: mov dword ptr [ebp - 0xc], ecx */
L_14160E76:
    /* test LO8(ebx), LO8(ebx) */ /* 0x14160E76: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14160E83; /* 0x14160E78: jns 0x14160e83 */
L_14160E7A:
    _flag_a = (uint32_t)((edi | 0x00400000u)); _flag_b = (uint32_t)((edi | 0x00400000u));
    edi = edi | 0x00400000u; /* 0x14160E7A: or edi, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x14160E80: mov dword ptr [ebp - 0xc], ecx */
L_14160E83:
    MEM32(ebp + (-0x1C)) = 0; /* 0x14160E83: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0xFFF00000u; /* 0x14160E8A: mov dword ptr [ebp - 0x18], 0xfff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x14160E91: fld qword ptr [ebp - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14160E94: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160E96: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160E98: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14160EB7; /* 0x14160E9B: jp 0x14160eb7 */
L_14160E9D:
    MEM32(ebp + (-0x1C)) = 0; /* 0x14160E9D: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0x7FF00000u; /* 0x14160EA4: mov dword ptr [ebp - 0x18], 0x7ff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x14160EAB: fld qword ptr [ebp - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14160EAE: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14160EB0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14160EB2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_14160EDD; /* 0x14160EB5: jnp 0x14160edd */
L_14160EB7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14160EB7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x14160EBA: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x14160EBC: fstp qword ptr [esp + 8] */
    ecx = esi; /* 0x14160EC0: mov ecx, esi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14160EC2: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160EC5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1415FDD0); /* 0x14160EC8: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160ECD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160FE8; /* 0x14160ECF: js 0x14160fe8 */
L_14160ED5:
    SET_LO8(edx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160ED5: sete dl */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(edx)); /* 0x14160ED8: mov byte ptr [ebp - 5], dl */
    goto L_14160EE1; /* 0x14160EDB: jmp 0x14160ee1 */
L_14160EDD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14160EDD: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14160EDF: fstp st(0) */
L_14160EE1:
    eax = MEM32(esi + 0x54); /* 0x14160EE1: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(esi + 0x50); /* 0x14160EE4: mov ecx, dword ptr [esi + 0x50] */
    ecx = ~ecx; /* 0x14160EE7: not ecx */
    eax = ~eax; /* 0x14160EE9: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    eax = eax & MEM32(ebp + (-0xC)); /* 0x14160EEB: and eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x14160EEE: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14160EF0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F0A; /* 0x14160EF2: je 0x14160f0a */
L_14160EF4:
    eax = MEM32(esi + 0x50); /* 0x14160EF4: mov eax, dword ptr [esi + 0x50] */
    ecx = MEM32(esi + 0x54); /* 0x14160EF7: mov ecx, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x14160EFA: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0xC))));
    ecx = ecx | MEM32(ebp + (-0xC)); /* 0x14160EFC: or ecx, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, 1); /* 0x14160EFF: mov dl, 1 */
    MEM32(esi + 0x50) = eax; /* 0x14160F01: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x54) = ecx; /* 0x14160F04: mov dword ptr [esi + 0x54], ecx */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(edx)); /* 0x14160F07: mov byte ptr [ebp - 5], dl */
L_14160F0A:
    /* test ebx, 0x40000100u */ /* 0x14160F0A: test ebx, 0x40000100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40000100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F6E; /* 0x14160F10: je 0x14160f6e */
L_14160F12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160F12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x14160F14: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x80000000u; /* 0x14160F17: mov ecx, 0x80000000 */
    MEM32(ebp + (-0xC)) = 0x7FFFFFFFu; /* 0x14160F1C: mov dword ptr [ebp - 0xc], 0x7fffffff */
    /* test LO8(ebx), 2 */ /* 0x14160F23: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F2A; /* 0x14160F26: je 0x14160f2a */
L_14160F28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14160F28: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_14160F2A:
    /* test LO8(ebx), 4 */ /* 0x14160F2A: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F34; /* 0x14160F2D: je 0x14160f34 */
L_14160F2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14160F2F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x14160F31: mov dword ptr [ebp - 0xc], edi */
L_14160F34:
    /* test eax, eax */ /* 0x14160F34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160F4E; /* 0x14160F36: jne 0x14160f4e */
L_14160F38:
    /* cmp ecx, 0x80000000u */ /* 0x14160F38: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160F4E; /* 0x14160F3E: jne 0x14160f4e */
L_14160F40:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x14160F40: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14160F4E; /* 0x14160F43: jne 0x14160f4e */
L_14160F45:
    /* cmp MEM32(ebp + (-0xC)), 0x7FFFFFFFu */ /* 0x14160F45: cmp dword ptr [ebp - 0xc], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14160F6E; /* 0x14160F4C: je 0x14160f6e */
L_14160F4E:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x14160F4E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x14160F51: push edi */
    PUSH32(esp, ecx); /* 0x14160F52: push ecx */
    PUSH32(esp, eax); /* 0x14160F53: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14160F54: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x14160F57: mov ecx, esi */
    RECOMP_CALL(sub_141603F0); /* 0x14160F59: call 0x141603f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14160F5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14160FE8; /* 0x14160F60: js 0x14160fe8 */
L_14160F66:
    SET_LO8(edx, MEM8(ebp + (-0x5))); /* 0x14160F66: mov dl, byte ptr [ebp - 5] */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160F69: sete al */
    _flag_a = (uint32_t)((LO8(edx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(eax)); /* 0x14160F6C: or dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_14160F6E:
    /* test ebx, 0x400u */ /* 0x14160F6E: test ebx, 0x400 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160F96; /* 0x14160F74: je 0x14160f96 */
L_14160F76:
    ecx = MEM32(esi + 0x50); /* 0x14160F76: mov ecx, dword ptr [esi + 0x50] */
    edi = MEM32(esi + 0x54); /* 0x14160F79: mov edi, dword ptr [esi + 0x54] */
    eax = ecx; /* 0x14160F7C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x14160F7E: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160F83: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160F96; /* 0x14160F86: jne 0x14160f96 */
L_14160F88:
    _flag_a = (uint32_t)((ecx | 0x8000u)); _flag_b = (uint32_t)((ecx | 0x8000u));
    ecx = ecx | 0x8000u; /* 0x14160F88: or ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = ecx; /* 0x14160F8E: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x54) = edi; /* 0x14160F91: mov dword ptr [esi + 0x54], edi */
    SET_LO8(edx, 1); /* 0x14160F94: mov dl, 1 */
L_14160F96:
    /* test ebx, 0x800u */ /* 0x14160F96: test ebx, 0x800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160FB9; /* 0x14160F9C: je 0x14160fb9 */
L_14160F9E:
    ecx = MEM32(esi + 0x50); /* 0x14160F9E: mov ecx, dword ptr [esi + 0x50] */
    edi = MEM32(esi + 0x54); /* 0x14160FA1: mov edi, dword ptr [esi + 0x54] */
    eax = ecx; /* 0x14160FA4: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x14160FA6: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160FA9: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160FB9; /* 0x14160FAC: jne 0x14160fb9 */
L_14160FAE:
    _flag_a = (uint32_t)((ecx | 0x10u)); _flag_b = (uint32_t)((ecx | 0x10u));
    ecx = ecx | 0x10u; /* 0x14160FAE: or ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = ecx; /* 0x14160FB1: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x54) = edi; /* 0x14160FB4: mov dword ptr [esi + 0x54], edi */
    SET_LO8(edx, 1); /* 0x14160FB7: mov dl, 1 */
L_14160FB9:
    /* test ebx, 0x1000u */ /* 0x14160FB9: test ebx, 0x1000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14160FE1; /* 0x14160FBF: je 0x14160fe1 */
L_14160FC1:
    ecx = MEM32(esi + 0x50); /* 0x14160FC1: mov ecx, dword ptr [esi + 0x50] */
    edi = MEM32(esi + 0x54); /* 0x14160FC4: mov edi, dword ptr [esi + 0x54] */
    eax = ecx; /* 0x14160FC7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x14160FC9: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14160FCE: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14160FE1; /* 0x14160FD1: jne 0x14160fe1 */
L_14160FD3:
    _flag_a = (uint32_t)((ecx | 0x00010000u)); _flag_b = (uint32_t)((ecx | 0x00010000u));
    ecx = ecx | 0x00010000u; /* 0x14160FD3: or ecx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = ecx; /* 0x14160FD9: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x54) = edi; /* 0x14160FDC: mov dword ptr [esi + 0x54], edi */
    SET_LO8(edx, 1); /* 0x14160FDF: mov dl, 1 */
L_14160FE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14160FE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(edx), LO8(edx) */ /* 0x14160FE3: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x14160FE5: sete al */
L_14160FE8:
    edi = POP32_VAL(esp); /* 0x14160FE8: pop edi */
    esp = ebp; /* 0x14160FE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14160FEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14160FEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14161000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161000u);

L_14161000:
    edi = edi; /* 0x14161000: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161002: push ebp */
    ebp = esp; /* 0x14161003: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x14161005: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x50); /* 0x14161008: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    eax = eax & MEM32(esi + 0x50); /* 0x1416100B: and eax, dword ptr [esi + 0x50] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00F00000u);
    eax = eax & 0x00F00000u; /* 0x1416100E: and eax, 0xf00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | eax)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | eax));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | eax; /* 0x14161013: or dword ptr [edi + 0x50], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(edx + 0xD8)); /* 0x14161016: fld qword ptr [edx + 0xd8] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x1416101C: fst qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(edx + 0xE0)); /* 0x1416101F: fld qword ptr [edx + 0xe0] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x14161025: fst qword ptr [ebp - 0xc] */
    fp_xch(1); /* 0x14161028: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1416102A: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416102C: fnstsw ax */
    fp_push(*(double*)ADDR(0x14066800)); /* 0x1416102E: fld qword ptr [0x14066800] */
    fp_push(*(double*)ADDR(0x14066870)); /* 0x14161034: fld qword ptr [0x14066870] */
    fp_push(0.0); /* 0x1416103A: fldz  */
    fp_push(*(double*)ADDR(0x14066878)); /* 0x1416103C: fld qword ptr [0x14066878] */
    /* test HI8(eax), 0x44u */ /* 0x14161042: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141610E7; /* 0x14161045: jp 0x141610e7 */
L_1416104B:
    fp_xch(5); /* 0x1416104B: fxch st(5) */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x1416104D: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416104F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x14161051: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_141610EB; /* 0x14161054: jp 0x141610eb */
L_1416105A:
    /* cmp MEM32(edx + 0x5C), 5 */ /* 0x1416105A: cmp dword ptr [edx + 0x5c], 5 */
    _flag_a = (uint32_t)(MEM32(edx + 0x5C)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161084; /* 0x1416105E: je 0x14161084 */
L_14161060:
    fp_xch(4); /* 0x14161060: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x14161062: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161064: fnstsw ax */
    fp_xch(4); /* 0x14161066: fxch st(4) */
    /* test HI8(eax), 0x41u */ /* 0x14161068: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161084; /* 0x1416106B: jne 0x14161084 */
L_1416106D:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1416106D: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416106F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x14161071: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14161084; /* 0x14161074: jp 0x14161084 */
L_14161076:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161076: fstp st(0) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x14161078: fstp st(3) */
    fp_push(_st[0]); /* 0x1416107A: fld st(0) */
    fp_push(_st[3]); /* 0x1416107C: fld st(3) */
    fp_xch(1); /* 0x1416107E: fxch st(1) */
L_14161080:
    fp_xch(4); /* 0x14161080: fxch st(4) */
    fp_xch(1); /* 0x14161082: fxch st(1) */
L_14161084:
    fp_push(*(double*)ADDR(esi + 0xD8)); /* 0x14161084: fld qword ptr [esi + 0xd8] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1416108A: fst qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x1416108D: fld qword ptr [esi + 0xe0] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x14161093: fst qword ptr [ebp - 0x14] */
    fp_xch(1); /* 0x14161096: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x14161098: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416109A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1416109C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14161116; /* 0x1416109F: jp 0x14161116 */
L_141610A1:
    fp_xch(1); /* 0x141610A1: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[0]); /* 0x141610A3: fucom st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141610A5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x141610A7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1416111A; /* 0x141610AA: jp 0x1416111a */
L_141610AC:
    /* cmp MEM32(esi + 0x5C), 5 */ /* 0x141610AC: cmp dword ptr [esi + 0x5c], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416114A; /* 0x141610B0: je 0x1416114a */
L_141610B6:
    fp_xch(7); /* 0x141610B6: fxch st(7) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141610B8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141610BA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x141610BC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1416114C; /* 0x141610BF: jp 0x1416114c */
L_141610C5:
    fp_xch(4); /* 0x141610C5: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x141610C7: fcomp st(6) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141610C9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x141610CB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416114E; /* 0x141610CE: jne 0x1416114e */
L_141610D0:
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x141610D0: fstp st(5) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x141610D2: fstp st(2) */
L_141610D4:
    fp_xch(1); /* 0x141610D4: fxch st(1) */
    fp_xch(3); /* 0x141610D6: fxch st(3) */
L_141610D8:
    fp_xch(2); /* 0x141610D8: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x141610DA: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x141610DC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x141610DE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_14161154; /* 0x141610E1: jp 0x14161154 */
L_141610E3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141610E3: fstp st(1) */
    goto L_14161156; /* 0x141610E5: jmp 0x14161156 */
L_141610E7:
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x141610E7: fstp st(5) */
    goto L_141610ED; /* 0x141610E9: jmp 0x141610ed */
L_141610EB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141610EB: fstp st(0) */
L_141610ED:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x141610ED: fstp st(3) */
    MEM32(ebp + (-0xC)) = 0; /* 0x141610EF: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0x7FF00000u; /* 0x141610F6: mov dword ptr [ebp - 8], 0x7ff00000 */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x141610FD: fld qword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = 0; /* 0x14161100: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0xFFF00000u; /* 0x14161107: mov dword ptr [ebp - 0x10], 0xfff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x1416110E: fld qword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_14161080; /* 0x14161111: jmp 0x14161080 */
L_14161116:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161116: fstp st(1) */
    goto L_1416111C; /* 0x14161118: jmp 0x1416111c */
L_1416111A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1416111A: fstp st(0) */
L_1416111C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1416111C: fstp st(0) */
    MEM32(ebp + (-0x14)) = 0; /* 0x1416111E: mov dword ptr [ebp - 0x14], 0 */
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x14161125: fstp st(5) */
    MEM32(ebp + (-0x10)) = 0x7FF00000u; /* 0x14161127: mov dword ptr [ebp - 0x10], 0x7ff00000 */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1416112E: fstp st(2) */
    MEM32(ebp + (-0xC)) = 0; /* 0x14161130: mov dword ptr [ebp - 0xc], 0 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161137: fstp st(0) */
    MEM32(ebp + (-0x8)) = 0xFFF00000u; /* 0x14161139: mov dword ptr [ebp - 8], 0xfff00000 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161140: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x14161142: fld qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x14161145: fld qword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_141610D4; /* 0x14161148: jmp 0x141610d4 */
L_1416114A:
    { _st[7] = _st[0]; g_st_i64[7] = g_st_i64[0]; fp_pop(); } /* 0x1416114A: fstp st(7) */
L_1416114C:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x1416114C: fstp st(4) */
L_1416114E:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1416114E: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161150: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_141610D8; /* 0x14161152: jmp 0x141610d8 */
L_14161154:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161154: fstp st(0) */
L_14161156:
    fp_xch(1); /* 0x14161156: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161158: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416115A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1416115C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161165; /* 0x1416115F: jne 0x14161165 */
L_14161161:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x14161161: fstp st(2) */
    goto L_14161167; /* 0x14161163: jmp 0x14161167 */
L_14161165:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161165: fstp st(0) */
L_14161167:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14161167: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x1416116A: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x1416116C: fstp qword ptr [esp + 8] */
    ecx = edi; /* 0x14161170: mov ecx, edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14161172: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14161175: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1415FDD0); /* 0x14161178: call 0x1415fdd0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416117D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416117F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14161180: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14161190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161190u);

L_14161190:
    edi = edi; /* 0x14161190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161192: push ebp */
    ebp = esp; /* 0x14161193: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x14161195: sub esp, 0x88 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1416119B: push esi */
    PUSH32(esp, 0); /* 0x1416119C: push 0 */
    eax = ebp + (-0x44); /* 0x1416119E: lea eax, [ebp - 0x44] */
    ecx = ebx; /* 0x141611A1: mov ecx, ebx */
    RECOMP_CALL(sub_1415F160); /* 0x141611A3: call 0x1415f160 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141611A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141611F1; /* 0x141611AA: js 0x141611f1 */
L_141611AC:
    PUSH32(esp, 0); /* 0x141611AC: push 0 */
    eax = ebp + (-0x84); /* 0x141611AE: lea eax, [ebp - 0x84] */
    ecx = edi; /* 0x141611B4: mov ecx, edi */
    RECOMP_CALL(sub_1415F160); /* 0x141611B6: call 0x1415f160 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141611BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141611F1; /* 0x141611BD: js 0x141611f1 */
L_141611BF:
    PUSH32(esp, MEM32(edi + 0x54)); /* 0x141611BF: push dword ptr [edi + 0x54] */
    eax = ebp + (-0x84); /* 0x141611C2: lea eax, [ebp - 0x84] */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x141611C8: push dword ptr [edi + 0x50] */
    esi = ebx + 0x50; /* 0x141611CB: lea esi, [ebx + 0x50] */
    PUSH32(esp, eax); /* 0x141611CE: push eax */
    PUSH32(esp, esi); /* 0x141611CF: push esi */
    eax = ebp + (-0x44); /* 0x141611D0: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x141611D3: push eax */
    RECOMP_CALL(sub_140F76B0); /* 0x141611D4: call 0x140f76b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x141611D9: push dword ptr [esi + 4] */
    eax = ebp + (-0x44); /* 0x141611DC: lea eax, [ebp - 0x44] */
    PUSH32(esp, MEM32(esi)); /* 0x141611DF: push dword ptr [esi] */
    ecx = ebx; /* 0x141611E1: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141611E3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1415FBE0); /* 0x141611E6: call 0x1415fbe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141611EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141611F1; /* 0x141611ED: js 0x141611f1 */
L_141611EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141611EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141611F1:
    esi = POP32_VAL(esp); /* 0x141611F1: pop esi */
    esp = ebp; /* 0x141611F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141611F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141611F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14161200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161200u);

L_14161200:
    edi = edi; /* 0x14161200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161202: push ebp */
    ebp = esp; /* 0x14161203: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14161205: push esi */
    esi = eax; /* 0x14161206: mov esi, eax */
    /* cmp esi, 0x11u */ /* 0x14161208: cmp esi, 0x11 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161210; /* 0x1416120B: jne 0x14161210 */
L_1416120D:
    esi = MEM32(edx + 0x5C); /* 0x1416120D: mov esi, dword ptr [edx + 0x5c] */
L_14161210:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x14161210: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(edx + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(edx + 0x50) | 0x01000000u));
    MEM32(edx + 0x50) = MEM32(edx + 0x50) | 0x01000000u; /* 0x14161213: or dword ptr [edx + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x54); /* 0x1416121A: mov eax, dword ptr [edx + 0x54] */
    *(double*)ADDR(edx + 0xC0) = _st[0]; /* 0x1416121D: fst qword ptr [edx + 0xc0] */
    *(double*)ADDR(edx + 0xD8) = _st[0]; /* 0x14161223: fst qword ptr [edx + 0xd8] */
    MEM32(edx + 0x54) = eax; /* 0x14161229: mov dword ptr [edx + 0x54], eax */
    *(double*)ADDR(edx + 0xE0) = _st[0]; /* 0x1416122C: fst qword ptr [edx + 0xe0] */
    /* cmp esi, 2 */ /* 0x14161232: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_14161296; /* 0x14161235: jl 0x14161296 */
L_14161237:
    /* cmp esi, 4 */ /* 0x14161237: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_14161257; /* 0x1416123A: jle 0x14161257 */
L_1416123C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1416123C: fstp st(0) */
    /* cmp esi, 5 */ /* 0x1416123E: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161298; /* 0x14161241: jne 0x14161298 */
L_14161243:
    eax = MEM32(ebp + 0x8); /* 0x14161243: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + 0xC8) = eax; /* 0x14161246: mov dword ptr [edx + 0xc8], eax */
    eax = MEM32(ebp + 0xC); /* 0x1416124C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0xCC) = eax; /* 0x1416124F: mov dword ptr [edx + 0xcc], eax */
    goto L_141612AC; /* 0x14161255: jmp 0x141612ac */
L_14161257:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x14161257: fstp dword ptr [ebp + 0xc] */
    MEM32(edx + 0xCC) = 0; /* 0x1416125A: mov dword ptr [edx + 0xcc], 0 */
    eax = MEM32(ebp + 0xC); /* 0x14161264: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0xC8) = eax; /* 0x14161267: mov dword ptr [edx + 0xc8], eax */
    ecx = eax; /* 0x1416126D: mov ecx, eax */
    eax = MEM32(edx + 0xCC); /* 0x1416126F: mov eax, dword ptr [edx + 0xcc] */
    MEM32(ebp + 0xC) = eax; /* 0x14161275: mov dword ptr [ebp + 0xc], eax */
    eax = ecx; /* 0x14161278: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x1416127A: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416127F: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141612AC; /* 0x14161282: je 0x141612ac */
L_14161284:
    MEM32(edx + 0xC8) = ecx; /* 0x14161284: mov dword ptr [edx + 0xc8], ecx */
    MEM32(edx + 0xCC) = 0xFFFFFFFFu; /* 0x1416128A: mov dword ptr [edx + 0xcc], 0xffffffff */
    goto L_141612AC; /* 0x14161294: jmp 0x141612ac */
L_14161296:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161296: fstp st(0) */
L_14161298:
    MEM32(edx + 0xC8) = 0; /* 0x14161298: mov dword ptr [edx + 0xc8], 0 */
    MEM32(edx + 0xCC) = 0; /* 0x141612A2: mov dword ptr [edx + 0xcc], 0 */
L_141612AC:
    eax = MEM32(edx + 0xC8); /* 0x141612AC: mov eax, dword ptr [edx + 0xc8] */
    ecx = MEM32(edx + 0xCC); /* 0x141612B2: mov ecx, dword ptr [edx + 0xcc] */
    MEM32(edx + 0xD0) = 0xFFFFFFFFu; /* 0x141612B8: mov dword ptr [edx + 0xd0], 0xffffffff */
    MEM32(edx + 0xD4) = 0xFFFFFFFFu; /* 0x141612C2: mov dword ptr [edx + 0xd4], 0xffffffff */
    MEM32(edx + 0xE8) = eax; /* 0x141612CC: mov dword ptr [edx + 0xe8], eax */
    MEM32(edx + 0xEC) = ecx; /* 0x141612D2: mov dword ptr [edx + 0xec], ecx */
    MEM32(edx + 0xF0) = eax; /* 0x141612D8: mov dword ptr [edx + 0xf0], eax */
    MEM32(edx + 0xF4) = ecx; /* 0x141612DE: mov dword ptr [edx + 0xf4], ecx */
    MEM32(edx + 0xF8) = eax; /* 0x141612E4: mov dword ptr [edx + 0xf8], eax */
    MEM32(edx + 0xFC) = ecx; /* 0x141612EA: mov dword ptr [edx + 0xfc], ecx */
    MEM32(edx + 0x100) = eax; /* 0x141612F0: mov dword ptr [edx + 0x100], eax */
    MEM32(edx + 0x104) = ecx; /* 0x141612F6: mov dword ptr [edx + 0x104], ecx */
    esi = POP32_VAL(esp); /* 0x141612FC: pop esi */
    ebp = POP32_VAL(esp); /* 0x141612FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141612FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14161310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161310u);

L_14161310:
    edi = edi; /* 0x14161310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161312: push ebp */
    ebp = esp; /* 0x14161313: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14161315: push esi */
    esi = eax; /* 0x14161316: mov esi, eax */
    /* cmp esi, 0x11u */ /* 0x14161318: cmp esi, 0x11 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161320; /* 0x1416131B: jne 0x14161320 */
L_1416131D:
    esi = MEM32(edx + 0x5C); /* 0x1416131D: mov esi, dword ptr [edx + 0x5c] */
L_14161320:
    eax = MEM32(edx + 0x54); /* 0x14161320: mov eax, dword ptr [edx + 0x54] */
    ecx = MEM32(ebp + 0x8); /* 0x14161323: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(edx + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(edx + 0x50) | 0x01000000u));
    MEM32(edx + 0x50) = MEM32(edx + 0x50) | 0x01000000u; /* 0x14161326: or dword ptr [edx + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x54) = eax; /* 0x1416132D: mov dword ptr [edx + 0x54], eax */
    eax = MEM32(ebp + 0xC); /* 0x14161330: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0xD0) = 0xFFFFFFFFu; /* 0x14161333: mov dword ptr [edx + 0xd0], 0xffffffff */
    MEM32(edx + 0xD4) = 0xFFFFFFFFu; /* 0x1416133D: mov dword ptr [edx + 0xd4], 0xffffffff */
    MEM32(edx + 0xC8) = ecx; /* 0x14161347: mov dword ptr [edx + 0xc8], ecx */
    MEM32(edx + 0xCC) = eax; /* 0x1416134D: mov dword ptr [edx + 0xcc], eax */
    MEM32(edx + 0xE8) = ecx; /* 0x14161353: mov dword ptr [edx + 0xe8], ecx */
    MEM32(edx + 0xEC) = eax; /* 0x14161359: mov dword ptr [edx + 0xec], eax */
    MEM32(edx + 0xF0) = ecx; /* 0x1416135F: mov dword ptr [edx + 0xf0], ecx */
    MEM32(edx + 0xF4) = eax; /* 0x14161365: mov dword ptr [edx + 0xf4], eax */
    MEM32(edx + 0xF8) = ecx; /* 0x1416136B: mov dword ptr [edx + 0xf8], ecx */
    MEM32(edx + 0xFC) = eax; /* 0x14161371: mov dword ptr [edx + 0xfc], eax */
    MEM32(edx + 0x100) = ecx; /* 0x14161377: mov dword ptr [edx + 0x100], ecx */
    MEM32(edx + 0x104) = eax; /* 0x1416137D: mov dword ptr [edx + 0x104], eax */
    /* cmp esi, 0xEu */ /* 0x14161383: cmp esi, 0xe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141613A3; /* 0x14161386: ja 0x141613a3 */
L_14161388:
    eax = (uint32_t)MEM8(esi + 0x141613D4); /* 0x14161388: movzx eax, byte ptr [esi + 0x141613d4] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x141613C8)); goto _ljump; }
L_14161396:
    MEM32(ebp + 0xC) = ecx; /* 0x14161396: mov dword ptr [ebp + 0xc], ecx */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x14161399: fld dword ptr [ebp + 0xc] */
    goto L_141613A5; /* 0x1416139C: jmp 0x141613a5 */
L_1416139E:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1416139E: fld qword ptr [ebp + 8] */
    goto L_141613A5; /* 0x141613A1: jmp 0x141613a5 */
L_141613A3:
    fp_push(0.0); /* 0x141613A3: fldz  */
L_141613A5:
    { double _v = fp_pop(); *(double*)ADDR(edx + 0xC0) = _v; } /* 0x141613A5: fstp qword ptr [edx + 0xc0] */
    esi = POP32_VAL(esp); /* 0x141613AB: pop esi */
    fp_push(*(double*)ADDR(edx + 0xC0)); /* 0x141613AC: fld qword ptr [edx + 0xc0] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0xD8) = _v; } /* 0x141613B2: fstp qword ptr [edx + 0xd8] */
    fp_push(*(double*)ADDR(edx + 0xC0)); /* 0x141613B8: fld qword ptr [edx + 0xc0] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0xE0) = _v; } /* 0x141613BE: fstp qword ptr [edx + 0xe0] */
    ebp = POP32_VAL(esp); /* 0x141613C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141613C5: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x14161396u: goto L_14161396;
      case 0x1416139Eu: goto L_1416139E;
      case 0x141613A3u: goto L_141613A3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141613F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141613F0u);

L_141613F0:
    edi = edi; /* 0x141613F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141613F2: push ebp */
    ebp = esp; /* 0x141613F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141613F5: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x141613F8: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x01000000u; /* 0x141613FB: or dword ptr [esi + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x54); /* 0x14161402: mov eax, dword ptr [esi + 0x54] */
    PUSH32(esp, ebx); /* 0x14161405: push ebx */
    ebx = MEM32(esi + 0x5C); /* 0x14161406: mov ebx, dword ptr [esi + 0x5c] */
    PUSH32(esp, edi); /* 0x14161409: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1416140A: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1416140D: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x14161410: mov dword ptr [ebp - 4], edx */
    MEM32(esi + 0x54) = eax; /* 0x14161413: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0xD0) = 0xFFFFFFFFu; /* 0x14161416: mov dword ptr [esi + 0xd0], 0xffffffff */
    MEM32(esi + 0xD4) = 0xFFFFFFFFu; /* 0x14161420: mov dword ptr [esi + 0xd4], 0xffffffff */
    MEM32(esi + 0xC8) = edi; /* 0x1416142A: mov dword ptr [esi + 0xc8], edi */
    MEM32(esi + 0xCC) = edx; /* 0x14161430: mov dword ptr [esi + 0xcc], edx */
    MEM32(esi + 0xE8) = edi; /* 0x14161436: mov dword ptr [esi + 0xe8], edi */
    MEM32(esi + 0xEC) = edx; /* 0x1416143C: mov dword ptr [esi + 0xec], edx */
    MEM32(esi + 0xF0) = edi; /* 0x14161442: mov dword ptr [esi + 0xf0], edi */
    MEM32(esi + 0xF4) = edx; /* 0x14161448: mov dword ptr [esi + 0xf4], edx */
    MEM32(esi + 0xF8) = edi; /* 0x1416144E: mov dword ptr [esi + 0xf8], edi */
    MEM32(esi + 0xFC) = edx; /* 0x14161454: mov dword ptr [esi + 0xfc], edx */
    MEM32(esi + 0x100) = edi; /* 0x1416145A: mov dword ptr [esi + 0x100], edi */
    MEM32(esi + 0x104) = edx; /* 0x14161460: mov dword ptr [esi + 0x104], edx */
    /* cmp ebx, 0xEu */ /* 0x14161466: cmp ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14161486; /* 0x14161469: ja 0x14161486 */
L_1416146B:
    eax = (uint32_t)MEM8(ebx + 0x141614BC); /* 0x1416146B: movzx eax, byte ptr [ebx + 0x141614bc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x141614B0)); goto _ljump; }
L_14161479:
    MEM32(ebp + 0xC) = edi; /* 0x14161479: mov dword ptr [ebp + 0xc], edi */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1416147C: fld dword ptr [ebp + 0xc] */
    goto L_14161488; /* 0x1416147F: jmp 0x14161488 */
L_14161481:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x14161481: fld qword ptr [ebp - 8] */
    goto L_14161488; /* 0x14161484: jmp 0x14161488 */
L_14161486:
    fp_push(0.0); /* 0x14161486: fldz  */
L_14161488:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xC0) = _v; } /* 0x14161488: fstp qword ptr [esi + 0xc0] */
    edi = POP32_VAL(esp); /* 0x1416148E: pop edi */
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x1416148F: fld qword ptr [esi + 0xc0] */
    ebx = POP32_VAL(esp); /* 0x14161495: pop ebx */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xD8) = _v; } /* 0x14161496: fstp qword ptr [esi + 0xd8] */
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x1416149C: fld qword ptr [esi + 0xc0] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xE0) = _v; } /* 0x141614A2: fstp qword ptr [esi + 0xe0] */
    esp = ebp; /* 0x141614A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141614AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141614AB: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x14161479u: goto L_14161479;
      case 0x14161481u: goto L_14161481;
      case 0x14161486u: goto L_14161486;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141614D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141614D0u);

L_141614D0:
    edi = edi; /* 0x141614D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141614D2: push ebp */
    ebp = esp; /* 0x141614D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141614D5: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0xCC); /* 0x141614D8: mov edx, dword ptr [esi + 0xcc] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x01000000u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x01000000u; /* 0x141614DE: or dword ptr [esi + 0x50], 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x54); /* 0x141614E5: mov eax, dword ptr [esi + 0x54] */
    PUSH32(esp, ebx); /* 0x141614E8: push ebx */
    ebx = MEM32(esi + 0x5C); /* 0x141614E9: mov ebx, dword ptr [esi + 0x5c] */
    PUSH32(esp, edi); /* 0x141614EC: push edi */
    edi = MEM32(esi + 0xC8); /* 0x141614ED: mov edi, dword ptr [esi + 0xc8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x141614F3: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x141614F6: mov dword ptr [ebp - 4], edx */
    MEM32(esi + 0x54) = eax; /* 0x141614F9: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0xD0) = 0xFFFFFFFFu; /* 0x141614FC: mov dword ptr [esi + 0xd0], 0xffffffff */
    MEM32(esi + 0xD4) = 0xFFFFFFFFu; /* 0x14161506: mov dword ptr [esi + 0xd4], 0xffffffff */
    MEM32(esi + 0xE8) = edi; /* 0x14161510: mov dword ptr [esi + 0xe8], edi */
    MEM32(esi + 0xEC) = edx; /* 0x14161516: mov dword ptr [esi + 0xec], edx */
    MEM32(esi + 0xF0) = edi; /* 0x1416151C: mov dword ptr [esi + 0xf0], edi */
    MEM32(esi + 0xF4) = edx; /* 0x14161522: mov dword ptr [esi + 0xf4], edx */
    MEM32(esi + 0xF8) = edi; /* 0x14161528: mov dword ptr [esi + 0xf8], edi */
    MEM32(esi + 0xFC) = edx; /* 0x1416152E: mov dword ptr [esi + 0xfc], edx */
    MEM32(esi + 0x100) = edi; /* 0x14161534: mov dword ptr [esi + 0x100], edi */
    MEM32(esi + 0x104) = edx; /* 0x1416153A: mov dword ptr [esi + 0x104], edx */
    /* cmp ebx, 0xEu */ /* 0x14161540: cmp ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14161560; /* 0x14161543: ja 0x14161560 */
L_14161545:
    eax = (uint32_t)MEM8(ebx + 0x14161594); /* 0x14161545: movzx eax, byte ptr [ebx + 0x14161594] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14161588)); goto _ljump; }
L_14161553:
    MEM32(ebp + (-0x4)) = edi; /* 0x14161553: mov dword ptr [ebp - 4], edi */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x14161556: fld dword ptr [ebp - 4] */
    goto L_14161562; /* 0x14161559: jmp 0x14161562 */
L_1416155B:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1416155B: fld qword ptr [ebp - 8] */
    goto L_14161562; /* 0x1416155E: jmp 0x14161562 */
L_14161560:
    fp_push(0.0); /* 0x14161560: fldz  */
L_14161562:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xC0) = _v; } /* 0x14161562: fstp qword ptr [esi + 0xc0] */
    edi = POP32_VAL(esp); /* 0x14161568: pop edi */
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x14161569: fld qword ptr [esi + 0xc0] */
    ebx = POP32_VAL(esp); /* 0x1416156F: pop ebx */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xD8) = _v; } /* 0x14161570: fstp qword ptr [esi + 0xd8] */
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x14161576: fld qword ptr [esi + 0xc0] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0xE0) = _v; } /* 0x1416157C: fstp qword ptr [esi + 0xe0] */
    esp = ebp; /* 0x14161582: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14161584: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14161585: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14161553u: goto L_14161553;
      case 0x1416155Bu: goto L_1416155B;
      case 0x14161560u: goto L_14161560;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141615B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141615B0u);

L_141615B0:
    edi = edi; /* 0x141615B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141615B2: push ebp */
    ebp = esp; /* 0x141615B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x141615B5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(edi + 0xD8)); /* 0x141615B8: fld qword ptr [edi + 0xd8] */
    PUSH32(esp, edi); /* 0x141615BE: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x141615BF: fstp dword ptr [ebp - 8] */
    edx = ebx + 0x2F0; /* 0x141615C2: lea edx, [ebx + 0x2f0] */
    fp_push(*(double*)ADDR(edi + 0xE0)); /* 0x141615C8: fld qword ptr [edi + 0xe0] */
    ecx = ebx; /* 0x141615CE: mov ecx, ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x141615D0: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_14151AB0); /* 0x141615D3: call 0x14151ab0 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x141615D8: fld dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141615DB: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x141615DE: fstp qword ptr [esp] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x141615E1: mov byte ptr [ebp - 1], al */
    RECOMP_ICALL(MEM32(0x14001104)); /* 0x141615E4: call dword ptr [0x14001104] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141615EA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141615ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161626; /* 0x141615EF: je 0x14161626 */
L_141615F1:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x141615F1: fld dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141615F4: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x141615F7: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x14001104)); /* 0x141615FA: call dword ptr [0x14001104] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14161600: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14161603: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161626; /* 0x14161605: je 0x14161626 */
L_14161607:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0xFFBFFFFFu; /* 0x14161607: and dword ptr [edi + 0x50], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x54); /* 0x1416160E: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x14161611: mov dword ptr [edi + 0x54], eax */
    /* test esi, esi */ /* 0x14161614: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416163F; /* 0x14161616: je 0x1416163f */
L_14161618:
    eax = MEM32(esi + 0x4); /* 0x14161618: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(esi) = MEM32(esi) & 0xFFBFFFFFu; /* 0x1416161B: and dword ptr [esi], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x14161621: mov dword ptr [esi + 4], eax */
    goto L_1416163F; /* 0x14161624: jmp 0x1416163f */
L_14161626:
    _flag_a = (uint32_t)(MEM32(ebx + 0x2F4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x2F4) = MEM32(ebx + 0x2F4) + 1; /* 0x14161626: inc dword ptr [ebx + 0x2f4] */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1416162C: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416163F; /* 0x14161630: je 0x1416163f */
L_14161632:
    eax = MEM32(edi + 0x54); /* 0x14161632: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00400000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00400000u; /* 0x14161635: or dword ptr [edi + 0x50], 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x1416163C: mov dword ptr [edi + 0x54], eax */
L_1416163F:
    eax = MEM32(edi + 0x5C); /* 0x1416163F: mov eax, dword ptr [edi + 0x5c] */
    ecx = MEM32(eax * 4 + 0x1402D110); /* 0x14161642: mov ecx, dword ptr [eax*4 + 0x1402d110] */
    eax = ecx; /* 0x14161649: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1416164B: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1416164B: shr eax, 5 */
    /* test LO8(eax), 1 */ /* 0x1416164E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141616E9; /* 0x14161650: je 0x141616e9 */
L_14161656:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xFu); /* 0x14161656: and cl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 4 */ /* 0x14161659: cmp cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141616E9; /* 0x1416165C: je 0x141616e9 */
L_14161662:
    PUSH32(esp, edi); /* 0x14161662: push edi */
    edx = ebx + 0x304; /* 0x14161663: lea edx, [ebx + 0x304] */
    ecx = ebx; /* 0x14161669: mov ecx, ebx */
    RECOMP_CALL(sub_14151AB0); /* 0x1416166B: call 0x14151ab0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0xD0); /* 0x14161670: mov edx, dword ptr [edi + 0xd0] */
    ecx = MEM32(edi + 0xD4); /* 0x14161676: mov ecx, dword ptr [edi + 0xd4] */
    edx = ~edx; /* 0x1416167C: not edx */
    _flag_a = (uint32_t)((edx | MEM32(edi + 0xC8))); _flag_b = (uint32_t)((edx | MEM32(edi + 0xC8)));
    edx = edx | MEM32(edi + 0xC8); /* 0x1416167E: or edx, dword ptr [edi + 0xc8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x14161684: not ecx */
    _flag_a = (uint32_t)((ecx | MEM32(edi + 0xCC))); _flag_b = (uint32_t)((ecx | MEM32(edi + 0xCC)));
    ecx = ecx | MEM32(edi + 0xCC); /* 0x14161686: or ecx, dword ptr [edi + 0xcc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1416168C: mov byte ptr [ebp - 1], al */
    eax = edx; /* 0x1416168F: mov eax, edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x14161691: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    eax = eax & 0x7F800000u; /* 0x14161694: and eax, 0x7f800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14161699: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x1416169B: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141616CC; /* 0x141616A0: jne 0x141616cc */
L_141616A2:
    /* test ecx, ecx */ /* 0x141616A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141616CC; /* 0x141616A4: jne 0x141616cc */
L_141616A6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x007FFFFFu);
    edx = edx & 0x007FFFFFu; /* 0x141616A6: and edx, 0x7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x141616AC: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141616CC; /* 0x141616AE: je 0x141616cc */
L_141616B0:
    _flag_a = (uint32_t)(MEM32(ebx + 0x308)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x308) = MEM32(ebx + 0x308) + 1; /* 0x141616B0: inc dword ptr [ebx + 0x308] */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + (-0x1)), LO8(ecx) */ /* 0x141616B6: cmp byte ptr [ebp - 1], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141616E9; /* 0x141616B9: je 0x141616e9 */
L_141616BB:
    eax = MEM32(edi + 0x54); /* 0x141616BB: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00800000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00800000u; /* 0x141616BE: or dword ptr [edi + 0x50], 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x141616C5: mov dword ptr [edi + 0x54], eax */
    esp = ebp; /* 0x141616C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141616CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141616CB: ret  */
L_141616CC:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0xFF7FFFFFu; /* 0x141616CC: and dword ptr [edi + 0x50], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x54); /* 0x141616D3: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x141616D6: mov dword ptr [edi + 0x54], eax */
    /* test esi, esi */ /* 0x141616D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141616E9; /* 0x141616DB: je 0x141616e9 */
L_141616DD:
    eax = MEM32(esi + 0x4); /* 0x141616DD: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(esi) = MEM32(esi) & 0xFF7FFFFFu; /* 0x141616E0: and dword ptr [esi], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x141616E6: mov dword ptr [esi + 4], eax */
L_141616E9:
    esp = ebp; /* 0x141616E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141616EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141616EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_141617B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141617B0u);

L_141617B0:
    edi = edi; /* 0x141617B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141617B2: push ebp */
    ebp = esp; /* 0x141617B3: mov ebp, esp */
    ecx = MEM32(ebp + 0x18); /* 0x141617B5: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141617B8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141617BB: push ebx */
    PUSH32(esp, esi); /* 0x141617BC: push esi */
    esi = MEM32(ebp + 0x10); /* 0x141617BD: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x141617C0: push edi */
    edi = MEM32(ebp + 0x14); /* 0x141617C1: mov edi, dword ptr [ebp + 0x14] */
    /* cmp esi, edi */ /* 0x141617C4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161835; /* 0x141617C6: jne 0x14161835 */
L_141617C8:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141617C8: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416181E; /* 0x141617CB: je 0x1416181e */
L_141617CD:
    ebx = MEM32(ebp + 0x1C); /* 0x141617CD: mov ebx, dword ptr [ebp + 0x1c] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x141617D0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416181E; /* 0x141617D2: je 0x1416181e */
L_141617D4:
    ecx = MEM32(esi + 0x78); /* 0x141617D4: mov ecx, dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_141628F0); /* 0x141617D7: call 0x141628f0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141617DC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141617DF: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x141617E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161832; /* 0x141617E4: je 0x14161832 */
L_141617E6:
    /* cmp MEM32(esi + 0x6C), 0xFFFFFFFFu */ /* 0x141617E6: cmp dword ptr [esi + 0x6c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141617FE; /* 0x141617EA: je 0x141617fe */
L_141617EC:
    eax = MEM32(esi + 0x6C); /* 0x141617EC: mov eax, dword ptr [esi + 0x6c] */
    PUSH32(esp, ebx); /* 0x141617EF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x141617F0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x141617F3: push eax */
    PUSH32(esp, eax); /* 0x141617F4: push eax */
    PUSH32(esp, 0); /* 0x141617F5: push 0 */
    PUSH32(esp, 0); /* 0x141617F7: push 0 */
    RECOMP_CALL(sub_141617B0); /* 0x141617F9: call 0x141617b0 */
    RECOMP_FLAGS_IN();
L_141617FE:
    /* test LO8(eax), LO8(eax) */ /* 0x141617FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161832; /* 0x14161800: je 0x14161832 */
L_14161802:
    /* cmp MEM32(esi + 0x68), 0xFFFFFFFFu */ /* 0x14161802: cmp dword ptr [esi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416181A; /* 0x14161806: je 0x1416181a */
L_14161808:
    eax = MEM32(esi + 0x68); /* 0x14161808: mov eax, dword ptr [esi + 0x68] */
    PUSH32(esp, ebx); /* 0x1416180B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1416180C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x1416180F: push eax */
    PUSH32(esp, eax); /* 0x14161810: push eax */
    PUSH32(esp, 0); /* 0x14161811: push 0 */
    PUSH32(esp, 0); /* 0x14161813: push 0 */
    RECOMP_CALL(sub_141617B0); /* 0x14161815: call 0x141617b0 */
    RECOMP_FLAGS_IN();
L_1416181A:
    /* test LO8(eax), LO8(eax) */ /* 0x1416181A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161832; /* 0x1416181C: je 0x14161832 */
L_1416181E:
    ecx = MEM32(ebp + 0x8); /* 0x1416181E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14161821: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x14161823: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x14161826: pop edi */
    esi = POP32_VAL(esp); /* 0x14161827: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14161828: sete al */
    ebx = POP32_VAL(esp); /* 0x1416182B: pop ebx */
    esp = ebp; /* 0x1416182C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416182E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1416182F: ret 0x18 */
L_14161832:
    ecx = MEM32(ebp + 0x18); /* 0x14161832: mov ecx, dword ptr [ebp + 0x18] */
L_14161835:
    fp_push(*(double*)ADDR(0x14066840)); /* 0x14161835: fld qword ptr [0x14066840] */
    fp_push(0.0); /* 0x1416183B: fldz  */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1416183D: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161905; /* 0x14161840: je 0x14161905 */
L_14161846:
    eax = MEM32(esi + 0x50); /* 0x14161846: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14161849: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416184E: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161862; /* 0x14161851: jne 0x14161862 */
L_14161853:
    edi = POP32_VAL(esp); /* 0x14161853: pop edi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161854: fstp st(1) */
    esi = POP32_VAL(esp); /* 0x14161856: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161857: fstp st(0) */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14161859: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x1416185B: pop ebx */
    esp = ebp; /* 0x1416185C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416185E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1416185F: ret 0x18 */
L_14161862:
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161862: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161871; /* 0x14161864: je 0x14161871 */
L_14161866:
    edx = MEM32(ebp + 0x8); /* 0x14161866: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0xC8); /* 0x14161869: add edx, dword ptr [esi + 0xc8] */
    _flag_k = FK_ADD;
    goto L_141618CC; /* 0x1416186F: jmp 0x141618cc */
L_14161871:
    fp_xch(1); /* 0x14161871: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xC0)); /* 0x14161873: fcom qword ptr [esi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161879: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1416187B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161893; /* 0x1416187E: jne 0x14161893 */
L_14161880:
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x14161880: fld qword ptr [esi + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161886: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161888: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1416188A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161893; /* 0x1416188D: je 0x14161893 */
L_1416188F:
    fp_push(_st[1]); /* 0x1416188F: fld st(1) */
    goto L_141618AA; /* 0x14161891: jmp 0x141618aa */
L_14161893:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xC0)); /* 0x14161893: fcom qword ptr [esi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161899: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1416189B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141618A8; /* 0x1416189E: jne 0x141618a8 */
L_141618A0:
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x141618A0: fld qword ptr [esi + 0xc0] */
    goto L_141618AA; /* 0x141618A6: jmp 0x141618aa */
L_141618A8:
    fp_push(_st[0]); /* 0x141618A8: fld st(0) */
L_141618AA:
    edx = MEM32(ebp + 0x8); /* 0x141618AA: mov edx, dword ptr [ebp + 8] */
    MEM16(ebp + 0x1A) = _fpu_cw; /* 0x141618AD: fnstcw word ptr [ebp + 0x1a] */
    eax = (uint32_t)MEM16(ebp + 0x1A); /* 0x141618B0: movzx eax, word ptr [ebp + 0x1a] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x141618B4: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x141618B9: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x141618BC: fldcw word ptr [ebp + 0x10] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x8)) = (uint64_t)_q; } /* 0x141618BF: fistp qword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x141618C2: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x141618C5: add edx, eax */
    _flag_k = FK_ADD;
    _fpu_cw = MEM16(ebp + 0x1A); /* 0x141618C7: fldcw word ptr [ebp + 0x1a] */
    fp_xch(1); /* 0x141618CA: fxch st(1) */
L_141618CC:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141618CC: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161971; /* 0x141618CF: je 0x14161971 */
L_141618D5:
    eax = MEM32(edi + 0x50); /* 0x141618D5: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141618D8: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141618DD: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161853; /* 0x141618E0: je 0x14161853 */
L_141618E6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x141618E6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416190A; /* 0x141618E8: je 0x1416190a */
L_141618EA:
    ecx = MEM32(ebp + 0xC); /* 0x141618EA: mov ecx, dword ptr [ebp + 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x141618ED: fstp st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC8); /* 0x141618EF: add ecx, dword ptr [edi + 0xc8] */
    _flag_k = FK_ADD;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x141618F5: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x141618F7: pop edi */
    /* cmp edx, ecx */ /* 0x141618F8: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x141618FA: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141618FB: sete al */
    ebx = POP32_VAL(esp); /* 0x141618FE: pop ebx */
    esp = ebp; /* 0x141618FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14161901: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14161902: ret 0x18 */
L_14161905:
    edx = MEM32(ebp + 0x8); /* 0x14161905: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_141618CC; /* 0x14161908: jmp 0x141618cc */
L_1416190A:
    fp_xch(1); /* 0x1416190A: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0xC0)); /* 0x1416190C: fcom qword ptr [edi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161912: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161914: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161928; /* 0x14161917: jne 0x14161928 */
L_14161919:
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x14161919: fld qword ptr [edi + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1416191F: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161921: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161923: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161941; /* 0x14161926: jne 0x14161941 */
L_14161928:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161928: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0xC0)); /* 0x1416192A: fcom qword ptr [edi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161930: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161932: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161943; /* 0x14161935: jne 0x14161943 */
L_14161937:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161937: fstp st(0) */
    fp_push(*(double*)ADDR(edi + 0xC0)); /* 0x14161939: fld qword ptr [edi + 0xc0] */
    goto L_14161943; /* 0x1416193F: jmp 0x14161943 */
L_14161941:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161941: fstp st(0) */
L_14161943:
    ecx = MEM32(ebp + 0xC); /* 0x14161943: mov ecx, dword ptr [ebp + 0xc] */
    MEM16(ebp + 0x1A) = _fpu_cw; /* 0x14161946: fnstcw word ptr [ebp + 0x1a] */
    eax = (uint32_t)MEM16(ebp + 0x1A); /* 0x14161949: movzx eax, word ptr [ebp + 0x1a] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x1416194D: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x14161952: mov dword ptr [ebp + 8], eax */
    edi = POP32_VAL(esp); /* 0x14161955: pop edi */
    esi = POP32_VAL(esp); /* 0x14161956: pop esi */
    _fpu_cw = MEM16(ebp + 0x8); /* 0x14161957: fldcw word ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x1416195A: pop ebx */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x8)) = (uint64_t)_q; } /* 0x1416195B: fistp qword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1416195E: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x14161961: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x14161963: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _fpu_cw = MEM16(ebp + 0x1A); /* 0x14161965: fldcw word ptr [ebp + 0x1a] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14161968: sete al */
    esp = ebp; /* 0x1416196B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416196D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1416196E: ret 0x18 */
L_14161971:
    ecx = MEM32(ebp + 0xC); /* 0x14161971: mov ecx, dword ptr [ebp + 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161974: fstp st(1) */
    edi = POP32_VAL(esp); /* 0x14161976: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161977: fstp st(0) */
    /* cmp edx, ecx */ /* 0x14161979: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1416197B: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1416197C: sete al */
    ebx = POP32_VAL(esp); /* 0x1416197F: pop ebx */
    esp = ebp; /* 0x14161980: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14161982: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14161983: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_14161990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161990u);

L_14161990:
    edi = edi; /* 0x14161990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161992: push ebp */
    ebp = esp; /* 0x14161993: mov ebp, esp */
    eax = MEM32(edi + 0x74); /* 0x14161995: mov eax, dword ptr [edi + 0x74] */
    /* cmp eax, MEM32(esi + 0x74) */ /* 0x14161998: cmp eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141619D7; /* 0x1416199B: jne 0x141619d7 */
L_1416199D:
    PUSH32(esp, 0); /* 0x1416199D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1416199F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x141619A2: push dword ptr [esi + 0x6c] */
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x141619A5: push dword ptr [edi + 0x6c] */
    PUSH32(esp, MEM32(esi + 0x70)); /* 0x141619A8: push dword ptr [esi + 0x70] */
    PUSH32(esp, MEM32(edi + 0x70)); /* 0x141619AB: push dword ptr [edi + 0x70] */
    RECOMP_CALL(sub_141617B0); /* 0x141619AE: call 0x141617b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141619B3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141619D7; /* 0x141619B5: je 0x141619d7 */
L_141619B7:
    PUSH32(esp, 0); /* 0x141619B7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141619B9: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x141619BC: push dword ptr [esi + 0x68] */
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x141619BF: push dword ptr [edi + 0x68] */
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x141619C2: push dword ptr [esi + 0x64] */
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x141619C5: push dword ptr [edi + 0x64] */
    RECOMP_CALL(sub_141617B0); /* 0x141619C8: call 0x141617b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141619CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141619D7; /* 0x141619CF: je 0x141619d7 */
L_141619D1:
    SET_LO8(eax, 1); /* 0x141619D1: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x141619D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141619D4: ret 4 */
L_141619D7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141619D7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x141619D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141619DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141619F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141619F0u);

L_141619F0:
    edi = edi; /* 0x141619F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141619F2: push ebp */
    ebp = esp; /* 0x141619F3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141619F5: push ebx */
    PUSH32(esp, esi); /* 0x141619F6: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141619F7: push dword ptr [ebp + 0x14] */
    esi = eax; /* 0x141619FA: mov esi, eax */
    PUSH32(esp, 1); /* 0x141619FC: push 1 */
    PUSH32(esp, edi); /* 0x141619FE: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141619FF: push dword ptr [ebp + 8] */
    ebx = ecx; /* 0x14161A02: mov ebx, ecx */
    PUSH32(esp, 0); /* 0x14161A04: push 0 */
    PUSH32(esp, 0); /* 0x14161A06: push 0 */
    RECOMP_CALL(sub_141617B0); /* 0x14161A08: call 0x141617b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14161A0D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161A62; /* 0x14161A0F: jne 0x14161a62 */
L_14161A11:
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x14161A11: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161A1F; /* 0x14161A15: je 0x14161a1f */
L_14161A17:
    esi = POP32_VAL(esp); /* 0x14161A17: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14161A18: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x14161A1A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14161A1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x14161A1C: ret 0x10 */
L_14161A1F:
    eax = MEM32(edi + 0x50); /* 0x14161A1F: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14161A22: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161A27: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161A36; /* 0x14161A2A: je 0x14161a36 */
L_14161A2C:
    eax = MEM32(edi + 0xC8); /* 0x14161A2C: mov eax, dword ptr [edi + 0xc8] */
    ecx = eax; /* 0x14161A32: mov ecx, eax */
    goto L_14161A42; /* 0x14161A34: jmp 0x14161a42 */
L_14161A36:
    eax = MEM32(edi + 0xF8); /* 0x14161A36: mov eax, dword ptr [edi + 0xf8] */
    ecx = MEM32(edi + 0x100); /* 0x14161A3C: mov ecx, dword ptr [edi + 0x100] */
L_14161A42:
    edx = eax + ebx; /* 0x14161A42: lea edx, [eax + ebx] */
    /* cmp edx, eax */ /* 0x14161A45: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161A4F; /* 0x14161A47: jb 0x14161a4f */
L_14161A49:
    eax = edx; /* 0x14161A49: mov eax, edx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x14161A4B: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_14161A51; /* 0x14161A4D: jmp 0x14161a51 */
L_14161A4F:
    SET_LO8(edx, 1); /* 0x14161A4F: mov dl, 1 */
L_14161A51:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x14161A51: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x14161A53: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161A5B; /* 0x14161A55: jb 0x14161a5b */
L_14161A57:
    /* test LO8(edx), LO8(edx) */ /* 0x14161A57: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161A60; /* 0x14161A59: je 0x14161a60 */
L_14161A5B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14161A5B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x14161A5D: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_14161A60:
    ebx = eax; /* 0x14161A60: mov ebx, eax */
L_14161A62:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x14161A62: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14161A17; /* 0x14161A65: ja 0x14161a17 */
L_14161A67:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x14161A67: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x14161A6A: pop esi */
    SET_LO8(eax, (CMP_AE(_flag_a, _flag_b)) ? 1 : 0); /* 0x14161A6B: setae al */
    ebx = POP32_VAL(esp); /* 0x14161A6E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14161A6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x14161A70: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_14161A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14161A80u);

L_14161A80:
    edi = edi; /* 0x14161A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14161A82: push ebp */
    ebp = esp; /* 0x14161A83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x14161A85: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14161A88: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x14161A89: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x14161A8C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x14161A8D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x14161A90: push edi */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x14161A91: mov byte ptr [ebp - 1], 0 */
    /* cmp esi, ebx */ /* 0x14161A95: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161B2E; /* 0x14161A97: jne 0x14161b2e */
L_14161A9D:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x14161A9D: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161B1A; /* 0x14161AA0: je 0x14161b1a */
L_14161AA2:
    ecx = MEM32(esi + 0x78); /* 0x14161AA2: mov ecx, dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_141628F0); /* 0x14161AA5: call 0x141628f0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14161AAA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14161AAD: sete cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161AB0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161AB2: je 0x141620e9 */
L_14161AB8:
    ebx = MEM32(ebp + 0x1C); /* 0x14161AB8: mov ebx, dword ptr [ebp + 0x1c] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x14161ABB: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161ACF; /* 0x14161ABD: je 0x14161acf */
L_14161ABF:
    ecx = MEM32(esi + 0x50); /* 0x14161ABF: mov ecx, dword ptr [esi + 0x50] */
    eax = MEM32(esi + 0x54); /* 0x14161AC2: mov eax, dword ptr [esi + 0x54] */
    if (1) _cf = (((ecx) >> 3) & 1u); /* 0x14161AC5: shrd ecx, eax, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (4u)) | ((uint32_t)(eax) << (32 - (4u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (4u)) | ((uint32_t)(eax) << (32 - (4u)))) : (ecx));
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x14161AC9: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x14161AC9: shr eax, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) & 1); /* 0x14161ACC: and cl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_14161ACF:
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161ACF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161AD1: je 0x141620e9 */
L_14161AD7:
    /* cmp MEM32(esi + 0x6C), 0xFFFFFFFFu */ /* 0x14161AD7: cmp dword ptr [esi + 0x6c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x18); /* 0x14161ADB: mov edi, dword ptr [ebp + 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161AF2; /* 0x14161ADE: je 0x14161af2 */
L_14161AE0:
    eax = MEM32(esi + 0x6C); /* 0x14161AE0: mov eax, dword ptr [esi + 0x6c] */
    PUSH32(esp, ebx); /* 0x14161AE3: push ebx */
    PUSH32(esp, edi); /* 0x14161AE4: push edi */
    PUSH32(esp, eax); /* 0x14161AE5: push eax */
    PUSH32(esp, eax); /* 0x14161AE6: push eax */
    PUSH32(esp, 0); /* 0x14161AE7: push 0 */
    PUSH32(esp, 0); /* 0x14161AE9: push 0 */
    RECOMP_CALL(sub_14161A80); /* 0x14161AEB: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, LO8(eax)); /* 0x14161AF0: mov cl, al */
L_14161AF2:
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161AF2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161AF4: je 0x141620e9 */
L_14161AFA:
    /* cmp MEM32(esi + 0x68), 0xFFFFFFFFu */ /* 0x14161AFA: cmp dword ptr [esi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14161B12; /* 0x14161AFE: je 0x14161b12 */
L_14161B00:
    eax = MEM32(esi + 0x68); /* 0x14161B00: mov eax, dword ptr [esi + 0x68] */
    PUSH32(esp, ebx); /* 0x14161B03: push ebx */
    PUSH32(esp, edi); /* 0x14161B04: push edi */
    PUSH32(esp, eax); /* 0x14161B05: push eax */
    PUSH32(esp, eax); /* 0x14161B06: push eax */
    PUSH32(esp, 0); /* 0x14161B07: push 0 */
    PUSH32(esp, 0); /* 0x14161B09: push 0 */
    RECOMP_CALL(sub_14161A80); /* 0x14161B0B: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, LO8(eax)); /* 0x14161B10: mov cl, al */
L_14161B12:
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161B12: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161B14: je 0x141620e9 */
L_14161B1A:
    ecx = MEM32(ebp + 0x8); /* 0x14161B1A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14161B1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x14161B1F: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x14161B22: setne al */
    edi = POP32_VAL(esp); /* 0x14161B25: pop edi */
    esi = POP32_VAL(esp); /* 0x14161B26: pop esi */
    ebx = POP32_VAL(esp); /* 0x14161B27: pop ebx */
    esp = ebp; /* 0x14161B28: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14161B2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14161B2B: ret 0x18 */
L_14161B2E:
    fp_push(*(double*)ADDR(0x14066840)); /* 0x14161B2E: fld qword ptr [0x14066840] */
    ecx = MEM32(ebp + 0x18); /* 0x14161B34: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(0.0); /* 0x14161B37: fldz  */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x14161B39: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161B5C; /* 0x14161B3C: jne 0x14161b5c */
L_14161B3E:
    edx = MEM32(ebp + 0x8); /* 0x14161B3E: mov edx, dword ptr [ebp + 8] */
    ecx = edx; /* 0x14161B41: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14161B43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x14161B45: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x14161B48: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x14161B4B: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x34)) = edx; /* 0x14161B4E: mov dword ptr [ebp - 0x34], edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14161B51: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x14161B54: mov dword ptr [ebp - 0x24], eax */
    goto L_14161D7A; /* 0x14161B57: jmp 0x14161d7a */
L_14161B5C:
    eax = MEM32(esi + 0x50); /* 0x14161B5C: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14161B5F: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161B64: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161C09; /* 0x14161B66: je 0x14161c09 */
L_14161B6C:
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161B6C: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x14161B6F: mov edx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x34)) = edx; /* 0x14161B72: mov dword ptr [ebp - 0x34], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161B9B; /* 0x14161B75: je 0x14161b9b */
L_14161B77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14161B77: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x14161B79: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0xC8); /* 0x14161B7B: add edi, dword ptr [esi + 0xc8] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = MEM32(esi + 0xCC), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161B81: adc ecx, dword ptr [esi + 0xcc] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x2C)) = edi; /* 0x14161B87: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x14161B8A: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x14161B8D: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x14161B90: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x20)) = edi; /* 0x14161B93: mov dword ptr [ebp - 0x20], edi */
    goto L_14161D7A; /* 0x14161B96: jmp 0x14161d7a */
L_14161B9B:
    eax = MEM32(esi + 0xFC); /* 0x14161B9B: mov eax, dword ptr [esi + 0xfc] */
    edi = MEM32(esi + 0xF8); /* 0x14161BA1: mov edi, dword ptr [esi + 0xf8] */
    ecx = MEM32(esi + 0x100); /* 0x14161BA7: mov ecx, dword ptr [esi + 0x100] */
    MEM32(ebp + (-0x24)) = eax; /* 0x14161BAD: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(esi + 0x104); /* 0x14161BB0: mov eax, dword ptr [esi + 0x104] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14161BB6: mov dword ptr [ebp - 0x1c], eax */
    eax = edi + edx; /* 0x14161BB9: lea eax, [edi + edx] */
    MEM32(ebp + (-0x2C)) = edi; /* 0x14161BBC: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x14161BBF: mov dword ptr [ebp - 0x20], ecx */
    /* cmp eax, edi */ /* 0x14161BC2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161BD9; /* 0x14161BC4: jb 0x14161bd9 */
L_14161BC6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x14161BC6: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = edi; /* 0x14161BC8: mov dword ptr [ebp - 0x2c], edi */
    edi = MEM32(esi + 0xFC); /* 0x14161BCB: mov edi, dword ptr [esi + 0xfc] */
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161BD1: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x24)) = edi; /* 0x14161BD4: mov dword ptr [ebp - 0x24], edi */
    goto L_14161BDD; /* 0x14161BD7: jmp 0x14161bdd */
L_14161BD9:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161BD9: mov byte ptr [ebp - 1], 1 */
L_14161BDD:
    eax = ecx + edx; /* 0x14161BDD: lea eax, [ecx + edx] */
    /* cmp eax, ecx */ /* 0x14161BE0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161BFD; /* 0x14161BE2: jb 0x14161bfd */
L_14161BE4:
    eax = MEM32(esi + 0x104); /* 0x14161BE4: mov eax, dword ptr [esi + 0x104] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x14161BEA: add ecx, edx */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161BEC: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x20)) = ecx; /* 0x14161BEF: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x14161BF2: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14161BF5: mov dword ptr [ebp - 0x1c], eax */
    goto L_14161D7A; /* 0x14161BF8: jmp 0x14161d7a */
L_14161BFD:
    ecx = MEM32(ebp + 0x18); /* 0x14161BFD: mov ecx, dword ptr [ebp + 0x18] */
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161C00: mov byte ptr [ebp - 1], 1 */
    goto L_14161D7A; /* 0x14161C04: jmp 0x14161d7a */
L_14161C09:
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161C09: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_xch(1); /* 0x14161C0C: fxch st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161C7F; /* 0x14161C0E: je 0x14161c7f */
L_14161C10:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xC0)); /* 0x14161C10: fcom qword ptr [esi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161C16: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161C18: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161C30; /* 0x14161C1B: jne 0x14161c30 */
L_14161C1D:
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x14161C1D: fld qword ptr [esi + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161C23: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161C25: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161C27: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161C30; /* 0x14161C2A: je 0x14161c30 */
L_14161C2C:
    fp_push(_st[1]); /* 0x14161C2C: fld st(1) */
    goto L_14161C47; /* 0x14161C2E: jmp 0x14161c47 */
L_14161C30:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xC0)); /* 0x14161C30: fcom qword ptr [esi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161C36: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161C38: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161C45; /* 0x14161C3B: jne 0x14161c45 */
L_14161C3D:
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x14161C3D: fld qword ptr [esi + 0xc0] */
    goto L_14161C47; /* 0x14161C43: jmp 0x14161c47 */
L_14161C45:
    fp_push(_st[0]); /* 0x14161C45: fld st(0) */
L_14161C47:
    edx = MEM32(ebp + 0x8); /* 0x14161C47: mov edx, dword ptr [ebp + 8] */
    MEM16(ebp + 0x1E) = _fpu_cw; /* 0x14161C4A: fnstcw word ptr [ebp + 0x1e] */
    eax = (uint32_t)MEM16(ebp + 0x1E); /* 0x14161C4D: movzx eax, word ptr [ebp + 0x1e] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161C51: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x14161C56: mov dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14161C59: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cw = MEM16(ebp + (-0x34)); /* 0x14161C5B: fldcw word ptr [ebp - 0x34] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x38)) = (uint64_t)_q; } /* 0x14161C5E: fistp qword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x34)) = edx; /* 0x14161C61: mov dword ptr [ebp - 0x34], edx */
    eax = MEM32(ebp + (-0x38)); /* 0x14161C64: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x14161C67: add eax, edx */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161C69: adc edi, edi */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _fpu_cw = MEM16(ebp + 0x1E); /* 0x14161C6B: fldcw word ptr [ebp + 0x1e] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x14161C6E: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x14161C71: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x20)) = eax; /* 0x14161C74: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x14161C77: mov dword ptr [ebp - 0x1c], edi */
    goto L_14161D78; /* 0x14161C7A: jmp 0x14161d78 */
L_14161C7F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xD8)); /* 0x14161C7F: fcom qword ptr [esi + 0xd8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161C85: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161C87: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161C9F; /* 0x14161C8A: jne 0x14161c9f */
L_14161C8C:
    fp_push(*(double*)ADDR(esi + 0xD8)); /* 0x14161C8C: fld qword ptr [esi + 0xd8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161C92: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161C94: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161C96: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161C9F; /* 0x14161C99: je 0x14161c9f */
L_14161C9B:
    fp_push(_st[1]); /* 0x14161C9B: fld st(1) */
    goto L_14161CB6; /* 0x14161C9D: jmp 0x14161cb6 */
L_14161C9F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xD8)); /* 0x14161C9F: fcom qword ptr [esi + 0xd8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161CA5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161CA7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161CB4; /* 0x14161CAA: jne 0x14161cb4 */
L_14161CAC:
    fp_push(*(double*)ADDR(esi + 0xD8)); /* 0x14161CAC: fld qword ptr [esi + 0xd8] */
    goto L_14161CB6; /* 0x14161CB2: jmp 0x14161cb6 */
L_14161CB4:
    fp_push(_st[0]); /* 0x14161CB4: fld st(0) */
L_14161CB6:
    MEM16(ebp + 0x1E) = _fpu_cw; /* 0x14161CB6: fnstcw word ptr [ebp + 0x1e] */
    MEM32(ebp + (-0x24)) = 0; /* 0x14161CB9: mov dword ptr [ebp - 0x24], 0 */
    eax = (uint32_t)MEM16(ebp + 0x1E); /* 0x14161CC0: movzx eax, word ptr [ebp + 0x1e] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161CC4: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x14161CC9: mov dword ptr [ebp - 0x34], eax */
    _fpu_cw = MEM16(ebp + (-0x34)); /* 0x14161CCC: fldcw word ptr [ebp - 0x34] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x38)) = (uint64_t)_q; } /* 0x14161CCF: fistp qword ptr [ebp - 0x38] */
    edi = MEM32(ebp + (-0x38)); /* 0x14161CD2: mov edi, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x2C)) = edi; /* 0x14161CD5: mov dword ptr [ebp - 0x2c], edi */
    _fpu_cw = MEM16(ebp + 0x1E); /* 0x14161CD8: fldcw word ptr [ebp + 0x1e] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xE0)); /* 0x14161CDB: fcom qword ptr [esi + 0xe0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161CE1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161CE3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161CFB; /* 0x14161CE6: jne 0x14161cfb */
L_14161CE8:
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x14161CE8: fld qword ptr [esi + 0xe0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161CEE: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161CF0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161CF2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161CFB; /* 0x14161CF5: je 0x14161cfb */
L_14161CF7:
    fp_push(_st[1]); /* 0x14161CF7: fld st(1) */
    goto L_14161D12; /* 0x14161CF9: jmp 0x14161d12 */
L_14161CFB:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0xE0)); /* 0x14161CFB: fcom qword ptr [esi + 0xe0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161D01: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161D03: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161D10; /* 0x14161D06: jne 0x14161d10 */
L_14161D08:
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x14161D08: fld qword ptr [esi + 0xe0] */
    goto L_14161D12; /* 0x14161D0E: jmp 0x14161d12 */
L_14161D10:
    fp_push(_st[0]); /* 0x14161D10: fld st(0) */
L_14161D12:
    edx = MEM32(ebp + 0x8); /* 0x14161D12: mov edx, dword ptr [ebp + 8] */
    MEM16(ebp + 0x1E) = _fpu_cw; /* 0x14161D15: fnstcw word ptr [ebp + 0x1e] */
    eax = (uint32_t)MEM16(ebp + 0x1E); /* 0x14161D18: movzx eax, word ptr [ebp + 0x1e] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161D1C: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x14161D21: mov dword ptr [ebp - 0x34], eax */
    eax = edi + edx; /* 0x14161D24: lea eax, [edi + edx] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x14161D27: mov dword ptr [ebp - 0x1c], 0 */
    _fpu_cw = MEM16(ebp + (-0x34)); /* 0x14161D2E: fldcw word ptr [ebp - 0x34] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x38)) = (uint64_t)_q; } /* 0x14161D31: fistp qword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x34)) = edx; /* 0x14161D34: mov dword ptr [ebp - 0x34], edx */
    ecx = MEM32(ebp + (-0x38)); /* 0x14161D37: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x14161D3A: mov dword ptr [ebp - 0x20], ecx */
    _fpu_cw = MEM16(ebp + 0x1E); /* 0x14161D3D: fldcw word ptr [ebp + 0x1e] */
    /* cmp eax, edi */ /* 0x14161D40: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161D55; /* 0x14161D42: jb 0x14161d55 */
L_14161D44:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x14161D44: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = edi; /* 0x14161D46: mov dword ptr [ebp - 0x2c], edi */
    edi = 0; /* 0x14161D49: mov edi, 0 */
    { uint32_t _aa = edi, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161D4E: adc edi, edi */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x24)) = edi; /* 0x14161D50: mov dword ptr [ebp - 0x24], edi */
    goto L_14161D59; /* 0x14161D53: jmp 0x14161d59 */
L_14161D55:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161D55: mov byte ptr [ebp - 1], 1 */
L_14161D59:
    eax = ecx + edx; /* 0x14161D59: lea eax, [ecx + edx] */
    /* cmp eax, ecx */ /* 0x14161D5C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161D71; /* 0x14161D5E: jb 0x14161d71 */
L_14161D60:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x14161D60: add ecx, edx */
    _flag_k = FK_ADD;
    eax = 0; /* 0x14161D62: mov eax, 0 */
    { uint32_t _aa = eax, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161D67: adc eax, eax */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x20)) = ecx; /* 0x14161D69: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14161D6C: mov dword ptr [ebp - 0x1c], eax */
    goto L_14161D75; /* 0x14161D6F: jmp 0x14161d75 */
L_14161D71:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161D71: mov byte ptr [ebp - 1], 1 */
L_14161D75:
    ecx = MEM32(ebp + 0x18); /* 0x14161D75: mov ecx, dword ptr [ebp + 0x18] */
L_14161D78:
    fp_xch(1); /* 0x14161D78: fxch st(1) */
L_14161D7A:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x14161D7A: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161D9D; /* 0x14161D7D: jne 0x14161d9d */
L_14161D7F:
    edi = MEM32(ebp + 0xC); /* 0x14161D7F: mov edi, dword ptr [ebp + 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161D82: fstp st(1) */
    ecx = edi; /* 0x14161D84: mov ecx, edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161D86: fstp st(0) */
    MEM32(ebp + (-0xC)) = 0; /* 0x14161D88: mov dword ptr [ebp - 0xc], 0 */
    eax = ecx; /* 0x14161D8F: mov eax, ecx */
    MEM32(ebp + 0x1C) = 0; /* 0x14161D91: mov dword ptr [ebp + 0x1c], 0 */
    goto L_14161FB8; /* 0x14161D98: jmp 0x14161fb8 */
L_14161D9D:
    eax = MEM32(ebx + 0x50); /* 0x14161D9D: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14161DA0: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), LO8(ecx) */ /* 0x14161DA5: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161E5A; /* 0x14161DA7: je 0x14161e5a */
L_14161DAD:
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161DAD: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161DB0: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161DB2: fstp st(0) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161DDC; /* 0x14161DB4: je 0x14161ddc */
L_14161DB6:
    edi = MEM32(ebp + 0xC); /* 0x14161DB6: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14161DB9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x14161DBB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0xC8); /* 0x14161DBD: add eax, dword ptr [ebx + 0xc8] */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = MEM32(ebx + 0xCC), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161DC3: adc ecx, dword ptr [ebx + 0xcc] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x1C) = ecx; /* 0x14161DC9: mov dword ptr [ebp + 0x1c], ecx */
    edx = MEM32(ebp + 0x1C); /* 0x14161DCC: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0xC)) = edx; /* 0x14161DCF: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ebp + 0x8); /* 0x14161DD2: mov edx, dword ptr [ebp + 8] */
    ecx = eax; /* 0x14161DD5: mov ecx, eax */
    goto L_14161FB8; /* 0x14161DD7: jmp 0x14161fb8 */
L_14161DDC:
    edi = MEM32(ebx + 0x104); /* 0x14161DDC: mov edi, dword ptr [ebx + 0x104] */
    eax = MEM32(ebx + 0xF8); /* 0x14161DE2: mov eax, dword ptr [ebx + 0xf8] */
    ecx = MEM32(ebx + 0xFC); /* 0x14161DE8: mov ecx, dword ptr [ebx + 0xfc] */
    MEM32(ebp + (-0xC)) = edi; /* 0x14161DEE: mov dword ptr [ebp - 0xc], edi */
    edi = MEM32(ebp + 0xC); /* 0x14161DF1: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x14161DF4: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x14161DF7: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x1C) = ecx; /* 0x14161DF9: mov dword ptr [ebp + 0x1c], ecx */
    ecx = MEM32(ebx + 0x100); /* 0x14161DFC: mov ecx, dword ptr [ebx + 0x100] */
    /* cmp eax, MEM32(ebx + 0xF8) */ /* 0x14161E02: cmp eax, dword ptr [ebx + 0xf8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xF8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161E23; /* 0x14161E08: jb 0x14161e23 */
L_14161E0A:
    eax = MEM32(ebx + 0xF8); /* 0x14161E0A: mov eax, dword ptr [ebx + 0xf8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x14161E10: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x14161E12: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0xFC); /* 0x14161E15: mov eax, dword ptr [ebx + 0xfc] */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161E1B: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x1C) = eax; /* 0x14161E1E: mov dword ptr [ebp + 0x1c], eax */
    goto L_14161E27; /* 0x14161E21: jmp 0x14161e27 */
L_14161E23:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161E23: mov byte ptr [ebp - 1], 1 */
L_14161E27:
    eax = ecx + edi; /* 0x14161E27: lea eax, [ecx + edi] */
    /* cmp eax, ecx */ /* 0x14161E2A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14161FAF; /* 0x14161E2C: jae 0x14161faf */
L_14161E32:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x14161E32: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161E36: je 0x141620e9 */
L_14161E3C:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x14161E3C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161FF6; /* 0x14161E3F: jne 0x14161ff6 */
L_14161E45:
    MEM32(ebp + (-0x2C)) = 0; /* 0x14161E45: mov dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)((esi | esi)); _flag_b = (uint32_t)((esi | esi));
    esi = esi | esi; /* 0x14161E4C: or esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = 0xFFFFFFFFu; /* 0x14161E4E: mov dword ptr [ebp - 0x24], 0xffffffff */
    goto L_14162060; /* 0x14161E55: jmp 0x14162060 */
L_14161E5A:
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161E5A: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_xch(1); /* 0x14161E5D: fxch st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161ECF; /* 0x14161E5F: je 0x14161ecf */
L_14161E61:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xC0)); /* 0x14161E61: fcom qword ptr [ebx + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161E67: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161E69: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161E81; /* 0x14161E6C: jne 0x14161e81 */
L_14161E6E:
    fp_push(*(double*)ADDR(ebx + 0xC0)); /* 0x14161E6E: fld qword ptr [ebx + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161E74: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161E76: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161E78: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161E81; /* 0x14161E7B: je 0x14161e81 */
L_14161E7D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161E7D: fstp st(0) */
    goto L_14161E98; /* 0x14161E7F: jmp 0x14161e98 */
L_14161E81:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161E81: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xC0)); /* 0x14161E83: fcom qword ptr [ebx + 0xc0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161E89: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161E8B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161E98; /* 0x14161E8E: jne 0x14161e98 */
L_14161E90:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161E90: fstp st(0) */
    fp_push(*(double*)ADDR(ebx + 0xC0)); /* 0x14161E92: fld qword ptr [ebx + 0xc0] */
L_14161E98:
    edi = MEM32(ebp + 0xC); /* 0x14161E98: mov edi, dword ptr [ebp + 0xc] */
    MEM16(ebp + 0x1E) = _fpu_cw; /* 0x14161E9B: fnstcw word ptr [ebp + 0x1e] */
    eax = (uint32_t)MEM16(ebp + 0x1E); /* 0x14161E9E: movzx eax, word ptr [ebp + 0x1e] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161EA2: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x14161EA7: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14161EAA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x14161EAC: fldcw word ptr [ebp - 0x14] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x18)) = (uint64_t)_q; } /* 0x14161EAF: fistp qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x18)); /* 0x14161EB2: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x14161EB5: add eax, edi */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161EB7: adc ecx, ecx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _fpu_cw = MEM16(ebp + 0x1E); /* 0x14161EB9: fldcw word ptr [ebp + 0x1e] */
    MEM32(ebp + 0x1C) = ecx; /* 0x14161EBC: mov dword ptr [ebp + 0x1c], ecx */
    esi = MEM32(ebp + 0x1C); /* 0x14161EBF: mov esi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0xC)) = esi; /* 0x14161EC2: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + 0x10); /* 0x14161EC5: mov esi, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x14161EC8: mov ecx, eax */
    goto L_14161FB8; /* 0x14161ECA: jmp 0x14161fb8 */
L_14161ECF:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xD8)); /* 0x14161ECF: fcom qword ptr [ebx + 0xd8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161ED5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161ED7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161EEF; /* 0x14161EDA: jne 0x14161eef */
L_14161EDC:
    fp_push(*(double*)ADDR(ebx + 0xD8)); /* 0x14161EDC: fld qword ptr [ebx + 0xd8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161EE2: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161EE4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161EE6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161EEF; /* 0x14161EE9: je 0x14161eef */
L_14161EEB:
    fp_push(_st[1]); /* 0x14161EEB: fld st(1) */
    goto L_14161F06; /* 0x14161EED: jmp 0x14161f06 */
L_14161EEF:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xD8)); /* 0x14161EEF: fcom qword ptr [ebx + 0xd8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161EF5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161EF7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161F04; /* 0x14161EFA: jne 0x14161f04 */
L_14161EFC:
    fp_push(*(double*)ADDR(ebx + 0xD8)); /* 0x14161EFC: fld qword ptr [ebx + 0xd8] */
    goto L_14161F06; /* 0x14161F02: jmp 0x14161f06 */
L_14161F04:
    fp_push(_st[0]); /* 0x14161F04: fld st(0) */
L_14161F06:
    MEM16(ebp + 0x12) = _fpu_cw; /* 0x14161F06: fnstcw word ptr [ebp + 0x12] */
    eax = (uint32_t)MEM16(ebp + 0x12); /* 0x14161F09: movzx eax, word ptr [ebp + 0x12] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161F0D: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x14161F12: mov dword ptr [ebp + 0x1c], eax */
    _fpu_cw = MEM16(ebp + 0x1C); /* 0x14161F15: fldcw word ptr [ebp + 0x1c] */
    MEM32(ebp + 0x1C) = 0; /* 0x14161F18: mov dword ptr [ebp + 0x1c], 0 */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x18)) = (uint64_t)_q; } /* 0x14161F1F: fistp qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x18)); /* 0x14161F22: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x14161F25: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + 0x12); /* 0x14161F28: fldcw word ptr [ebp + 0x12] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xE0)); /* 0x14161F2B: fcom qword ptr [ebx + 0xe0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161F31: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161F33: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161F4B; /* 0x14161F36: jne 0x14161f4b */
L_14161F38:
    fp_push(*(double*)ADDR(ebx + 0xE0)); /* 0x14161F38: fld qword ptr [ebx + 0xe0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x14161F3E: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161F40: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161F42: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14161F4B; /* 0x14161F45: je 0x14161f4b */
L_14161F47:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161F47: fstp st(0) */
    goto L_14161F62; /* 0x14161F49: jmp 0x14161f62 */
L_14161F4B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x14161F4B: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0xE0)); /* 0x14161F4D: fcom qword ptr [ebx + 0xe0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x14161F53: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x14161F55: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161F62; /* 0x14161F58: jne 0x14161f62 */
L_14161F5A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x14161F5A: fstp st(0) */
    fp_push(*(double*)ADDR(ebx + 0xE0)); /* 0x14161F5C: fld qword ptr [ebx + 0xe0] */
L_14161F62:
    edi = MEM32(ebp + 0xC); /* 0x14161F62: mov edi, dword ptr [ebp + 0xc] */
    MEM16(ebp + 0x12) = _fpu_cw; /* 0x14161F65: fnstcw word ptr [ebp + 0x12] */
    eax = (uint32_t)MEM16(ebp + 0x12); /* 0x14161F68: movzx eax, word ptr [ebp + 0x12] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14161F6C: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x14161F71: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x14161F74: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x14161F77: add eax, edi */
    _flag_k = FK_ADD;
    _fpu_cw = MEM16(ebp + (-0xC)); /* 0x14161F79: fldcw word ptr [ebp - 0xc] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0x10)) = (uint64_t)_q; } /* 0x14161F7C: fistp qword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = 0; /* 0x14161F7F: mov dword ptr [ebp - 0xc], 0 */
    ecx = MEM32(ebp + (-0x10)); /* 0x14161F86: mov ecx, dword ptr [ebp - 0x10] */
    _fpu_cw = MEM16(ebp + 0x12); /* 0x14161F89: fldcw word ptr [ebp + 0x12] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x14161F8C: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14161FA0; /* 0x14161F8F: jb 0x14161fa0 */
L_14161F91:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + edi; /* 0x14161F91: add dword ptr [ebp - 0x14], edi */
    _flag_k = FK_ADD;
    eax = 0; /* 0x14161F94: mov eax, 0 */
    { uint32_t _aa = eax, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161F99: adc eax, eax */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x1C) = eax; /* 0x14161F9B: mov dword ptr [ebp + 0x1c], eax */
    goto L_14161FA4; /* 0x14161F9E: jmp 0x14161fa4 */
L_14161FA0:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x14161FA0: mov byte ptr [ebp - 1], 1 */
L_14161FA4:
    eax = ecx + edi; /* 0x14161FA4: lea eax, [ecx + edi] */
    /* cmp eax, ecx */ /* 0x14161FA7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141620E9; /* 0x14161FA9: jb 0x141620e9 */
L_14161FAF:
    eax = MEM32(ebp + (-0x14)); /* 0x14161FAF: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x14161FB2: add ecx, edi */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ebp + (-0xC)), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14161FB4: adc dword ptr [ebp - 0xc], 0 */
      MEM32(ebp + (-0xC)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_14161FB8:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x14161FB8: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14161E32; /* 0x14161FBC: jne 0x14161e32 */
L_14161FC2:
    edx = MEM32(ebp + (-0x1C)); /* 0x14161FC2: mov edx, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ebp + 0x1C), edx */ /* 0x14161FC5: cmp dword ptr [ebp + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x14161FC8: mov edx, dword ptr [ebp + 8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_14161FEB; /* 0x14161FCB: ja 0x14161feb */
L_14161FCD:
    if (CMP_B(_flag_a, _flag_b)) goto L_14161FD4; /* 0x14161FCD: jb 0x14161fd4 */
L_14161FCF:
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x14161FCF: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14161FEB; /* 0x14161FD2: ja 0x14161feb */
L_14161FD4:
    eax = MEM32(ebp + (-0x24)); /* 0x14161FD4: mov eax, dword ptr [ebp - 0x24] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x14161FD7: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14161E32; /* 0x14161FDA: jb 0x14161e32 */
L_14161FE0:
    if (CMP_A(_flag_a, _flag_b)) goto L_14161FEB; /* 0x14161FE0: ja 0x14161feb */
L_14161FE2:
    /* cmp MEM32(ebp + (-0x2C)), ecx */ /* 0x14161FE2: cmp dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_14161E32; /* 0x14161FE5: jbe 0x14161e32 */
L_14161FEB:
    SET_LO8(eax, 1); /* 0x14161FEB: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x14161FED: pop edi */
    esi = POP32_VAL(esp); /* 0x14161FEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x14161FEF: pop ebx */
    esp = ebp; /* 0x14161FF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14161FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x14161FF3: ret 0x18 */
L_14161FF6:
    eax = MEM32(esi + 0x50); /* 0x14161FF6: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14161FF9: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14161FFE: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162020; /* 0x14162001: je 0x14162020 */
L_14162003:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162003: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0xC8); /* 0x14162005: add edx, dword ptr [esi + 0xc8] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0xFFFFFFFFu; /* 0x1416200B: mov dword ptr [ebp - 0x24], 0xffffffff */
    { uint32_t _aa = eax, _ab = MEM32(esi + 0xCC), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14162012: adc eax, dword ptr [esi + 0xcc] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x14162018: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1416201B: mov dword ptr [ebp - 0x2c], eax */
    goto L_1416205D; /* 0x1416201E: jmp 0x1416205d */
L_14162020:
    eax = MEM32(esi + 0xD0); /* 0x14162020: mov eax, dword ptr [esi + 0xd0] */
    ecx = MEM32(esi + 0xC8); /* 0x14162026: mov ecx, dword ptr [esi + 0xc8] */
    ebx = ebp + (-0x28); /* 0x1416202C: lea ebx, [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x1416202F: push ebx */
    ebx = ebp + (-0x30); /* 0x14162030: lea ebx, [ebp - 0x30] */
    PUSH32(esp, ebx); /* 0x14162033: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x14162034: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x14162036: push -1 */
    PUSH32(esp, 0); /* 0x14162038: push 0 */
    PUSH32(esp, edx); /* 0x1416203A: push edx */
    PUSH32(esp, MEM32(esi + 0xD4)); /* 0x1416203B: push dword ptr [esi + 0xd4] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x14162041: mov dword ptr [ebp - 0x30], ecx */
    PUSH32(esp, eax); /* 0x14162044: push eax */
    PUSH32(esp, MEM32(esi + 0xCC)); /* 0x14162045: push dword ptr [esi + 0xcc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1416204B: mov dword ptr [ebp - 0x28], eax */
    PUSH32(esp, ecx); /* 0x1416204E: push ecx */
    RECOMP_CALL(sub_14162220); /* 0x1416204F: call 0x14162220 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x30)); /* 0x14162054: mov edx, dword ptr [ebp - 0x30] */
    esi = MEM32(ebp + (-0x28)); /* 0x14162057: mov esi, dword ptr [ebp - 0x28] */
    ebx = MEM32(ebp + 0x14); /* 0x1416205A: mov ebx, dword ptr [ebp + 0x14] */
L_1416205D:
    MEM32(ebp + (-0x34)) = edx; /* 0x1416205D: mov dword ptr [ebp - 0x34], edx */
L_14162060:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x14162060: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162073; /* 0x14162063: jne 0x14162073 */
L_14162065:
    MEM32(ebp + (-0x2C)) = 0; /* 0x14162065: mov dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1416206C: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1416206E: mov dword ptr [ebp - 0x24], ebx */
    goto L_141620DA; /* 0x14162071: jmp 0x141620da */
L_14162073:
    eax = MEM32(ebx + 0x50); /* 0x14162073: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14162076: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416207B: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416209D; /* 0x1416207E: je 0x1416209d */
L_14162080:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162080: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC8); /* 0x14162082: add edi, dword ptr [ebx + 0xc8] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0xFFFFFFFFu; /* 0x14162088: mov dword ptr [ebp - 0x24], 0xffffffff */
    { uint32_t _aa = eax, _ab = MEM32(ebx + 0xCC), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1416208F: adc eax, dword ptr [ebx + 0xcc] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x2C)) = eax; /* 0x14162095: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162098: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141620DA; /* 0x1416209B: jmp 0x141620da */
L_1416209D:
    eax = MEM32(ebx + 0xD0); /* 0x1416209D: mov eax, dword ptr [ebx + 0xd0] */
    ecx = MEM32(ebx + 0xC8); /* 0x141620A3: mov ecx, dword ptr [ebx + 0xc8] */
    edx = ebp + (-0x28); /* 0x141620A9: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x141620AC: push edx */
    edx = ebp + (-0x30); /* 0x141620AD: lea edx, [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x141620B0: push edx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141620B1: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141620B3: push -1 */
    PUSH32(esp, 0); /* 0x141620B5: push 0 */
    PUSH32(esp, edi); /* 0x141620B7: push edi */
    PUSH32(esp, MEM32(ebx + 0xD4)); /* 0x141620B8: push dword ptr [ebx + 0xd4] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x141620BE: mov dword ptr [ebp - 0x30], ecx */
    PUSH32(esp, eax); /* 0x141620C1: push eax */
    PUSH32(esp, MEM32(ebx + 0xCC)); /* 0x141620C2: push dword ptr [ebx + 0xcc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x141620C8: mov dword ptr [ebp - 0x28], eax */
    PUSH32(esp, ecx); /* 0x141620CB: push ecx */
    RECOMP_CALL(sub_14162220); /* 0x141620CC: call 0x14162220 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x30)); /* 0x141620D1: mov edi, dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x28)); /* 0x141620D4: mov eax, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x34)); /* 0x141620D7: mov edx, dword ptr [ebp - 0x34] */
L_141620DA:
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x141620DA: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x141620DC: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x141620DE: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0)); _flag_b = (uint32_t)((edi | 0));
    edi = edi | 0; /* 0x141620E0: or edi, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14161FEB; /* 0x141620E3: jne 0x14161feb */
L_141620E9:
    edi = POP32_VAL(esp); /* 0x141620E9: pop edi */
    esi = POP32_VAL(esp); /* 0x141620EA: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141620EB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x141620ED: pop ebx */
    esp = ebp; /* 0x141620EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141620F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x141620F1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_14162100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162100u);

L_14162100:
    edi = edi; /* 0x14162100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162102: push ebp */
    ebp = esp; /* 0x14162103: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14162105: push ecx */
    eax = MEM32(esi + 0x74); /* 0x14162106: mov eax, dword ptr [esi + 0x74] */
    /* cmp eax, MEM32(edi + 0x74) */ /* 0x14162109: cmp eax, dword ptr [edi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162116; /* 0x1416210C: je 0x14162116 */
L_1416210E:
    SET_LO8(eax, 1); /* 0x1416210E: mov al, 1 */
    esp = ebp; /* 0x14162110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14162113: ret 4 */
L_14162116:
    eax = MEM32(esi + 0x60); /* 0x14162116: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x14162119: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6000u);
    ecx = ecx & 0x6000u; /* 0x1416211C: and ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162122: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14162124: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x14162126: mov byte ptr [ebp - 4], 1 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162130; /* 0x1416212A: jne 0x14162130 */
L_1416212C:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1416212C: mov byte ptr [ebp - 4], 0 */
L_14162130:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x14162130: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14162133: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x14162136: push dword ptr [edi + 0x6c] */
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x14162139: push dword ptr [esi + 0x6c] */
    PUSH32(esp, MEM32(edi + 0x70)); /* 0x1416213C: push dword ptr [edi + 0x70] */
    PUSH32(esp, MEM32(esi + 0x70)); /* 0x1416213F: push dword ptr [esi + 0x70] */
    RECOMP_CALL(sub_14161A80); /* 0x14162142: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14162147: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416210E; /* 0x14162149: jne 0x1416210e */
L_1416214B:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1416214B: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1416214E: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x14162151: push dword ptr [edi + 0x68] */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x14162154: push dword ptr [esi + 0x68] */
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x14162157: push dword ptr [edi + 0x64] */
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x1416215A: push dword ptr [esi + 0x64] */
    RECOMP_CALL(sub_14161A80); /* 0x1416215D: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14162162: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14162164: setne al */
    esp = ebp; /* 0x14162167: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162169: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1416216A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14162180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162180u);

L_14162180:
    edi = edi; /* 0x14162180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162182: push ebp */
    ebp = esp; /* 0x14162183: mov ebp, esp */
    eax = MEM32(edx + 0x50); /* 0x14162185: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14162188: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416218D: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141621B7; /* 0x14162190: je 0x141621b7 */
L_14162192:
    eax = MEM32(ebp + 0x8); /* 0x14162192: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0xC8) */ /* 0x14162195: cmp eax, dword ptr [edx + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141621B1; /* 0x1416219B: jne 0x141621b1 */
L_1416219D:
    eax = MEM32(ebp + 0xC); /* 0x1416219D: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(edx + 0xCC) */ /* 0x141621A0: cmp eax, dword ptr [edx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141621B1; /* 0x141621A6: jne 0x141621b1 */
L_141621A8:
    eax = 1; /* 0x141621A8: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x141621AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141621AE: ret 8 */
L_141621B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141621B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141621B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141621B4: ret 8 */
L_141621B7:
    PUSH32(esp, esi); /* 0x141621B7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x141621B8: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edx + 0xEC) */ /* 0x141621BB: cmp esi, dword ptr [edx + 0xec] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_14162209; /* 0x141621C1: jl 0x14162209 */
L_141621C3:
    eax = MEM32(ebp + 0x8); /* 0x141621C3: mov eax, dword ptr [ebp + 8] */
    if (CMP_G(_flag_a, _flag_b)) goto L_141621D0; /* 0x141621C6: jg 0x141621d0 */
L_141621C8:
    /* cmp eax, MEM32(edx + 0xE8) */ /* 0x141621C8: cmp eax, dword ptr [edx + 0xe8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xE8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14162209; /* 0x141621CE: jb 0x14162209 */
L_141621D0:
    /* cmp esi, MEM32(edx + 0xF4) */ /* 0x141621D0: cmp esi, dword ptr [edx + 0xf4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_14162209; /* 0x141621D6: jg 0x14162209 */
L_141621D8:
    if (CMP_L(_flag_a, _flag_b)) goto L_141621E2; /* 0x141621D8: jl 0x141621e2 */
L_141621DA:
    /* cmp eax, MEM32(edx + 0xF0) */ /* 0x141621DA: cmp eax, dword ptr [edx + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14162209; /* 0x141621E0: ja 0x14162209 */
L_141621E2:
    ecx = MEM32(edx + 0xC8); /* 0x141621E2: mov ecx, dword ptr [edx + 0xc8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141621E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0xCC); /* 0x141621EA: mov eax, dword ptr [edx + 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xD0));
    ecx = ecx & MEM32(edx + 0xD0); /* 0x141621F0: and ecx, dword ptr [edx + 0xd0] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141621F6: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xD4));
    eax = eax & MEM32(edx + 0xD4); /* 0x141621F8: and eax, dword ptr [edx + 0xd4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141621FE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162209; /* 0x14162200: jne 0x14162209 */
L_14162202:
    SET_LO8(eax, 1); /* 0x14162202: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x14162204: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14162206: ret 8 */
L_14162209:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14162209: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x1416220B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1416220C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1416220D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14162220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162220u);

L_14162220:
    edi = edi; /* 0x14162220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162222: push ebp */
    ebp = esp; /* 0x14162223: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x14162225: sub esp, 0x24 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x14162228: mov ecx, dword ptr [ebp + 0x24] */
    edx = MEM32(ebp + 0x20); /* 0x1416222B: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1416222E: push ebx */
    PUSH32(esp, esi); /* 0x1416222F: push esi */
    PUSH32(esp, edi); /* 0x14162230: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14162231: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14162233: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14162235: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162237: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x14162239: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1416223C: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1416223F: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x14162242: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0x14); /* 0x14162245: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14162248: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x1416224B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1416224E: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x14162251: mov dword ptr [ebp - 0x10], eax */
L_14162254:
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0xC))));
    eax = eax | MEM32(ebp + (-0xC)); /* 0x14162254: or eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x14162257: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1416225A: mov dword ptr [ebp - 0x20], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162269; /* 0x1416225D: jne 0x14162269 */
L_1416225F:
    eax = edx; /* 0x1416225F: mov eax, edx */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14162261: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162407; /* 0x14162263: je 0x14162407 */
L_14162269:
    ecx = MEM32(ebp + (-0x24)); /* 0x14162269: mov ecx, dword ptr [ebp - 0x24] */
    /* cmp ecx, 0x40u */ /* 0x1416226C: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14162407; /* 0x1416226F: jae 0x14162407 */
L_14162275:
    eax = 1; /* 0x14162275: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1416227A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141ED070); /* 0x1416227C: call 0x141ed070 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x24) = eax; /* 0x14162281: mov dword ptr [ebp + 0x24], eax */
    eax = edx; /* 0x14162284: mov eax, edx */
    edx = MEM32(ebp + 0x24); /* 0x14162286: mov edx, dword ptr [ebp + 0x24] */
    esi = edx; /* 0x14162289: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    esi = esi & MEM32(ebp + (-0x10)); /* 0x1416228B: and esi, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1416228E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    ecx = ecx & MEM32(ebp + (-0xC)); /* 0x14162290: and ecx, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    esi = esi & MEM32(ebp + (-0x1C)); /* 0x14162293: and esi, dword ptr [ebp - 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    ecx = ecx & MEM32(ebp + (-0x20)); /* 0x14162296: and ecx, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x14162299: mov dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x1416229C: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416239B; /* 0x1416229E: je 0x1416239b */
L_141622A4:
    /* cmp edi, 2 */ /* 0x141622A4: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141622D2; /* 0x141622A7: jne 0x141622d2 */
L_141622A9:
    /* test ebx, ebx */ /* 0x141622A9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141622D2; /* 0x141622AB: jne 0x141622d2 */
L_141622AD:
    eax = MEM32(ebp + 0xC); /* 0x141622AD: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x1C)));
    eax = eax | MEM32(ebp + 0x1C); /* 0x141622B0: or eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x141622B3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + 0x18))); _flag_b = (uint32_t)((ecx | MEM32(ebp + 0x18)));
    ecx = ecx | MEM32(ebp + 0x18); /* 0x141622B6: or ecx, dword ptr [ebp + 0x18] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    eax = eax & MEM32(ebp + 0x14); /* 0x141622B9: and eax, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x141622BC: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141622BF: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141622C1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141622C3: mov eax, edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141623DA; /* 0x141622C5: jne 0x141623da */
L_141622CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141622CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141623DF; /* 0x141622CD: jmp 0x141623df */
L_141622D2:
    /* cmp edi, 1 */ /* 0x141622D2: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416234A; /* 0x141622D5: jne 0x1416234a */
L_141622D7:
    /* test ebx, ebx */ /* 0x141622D7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416234A; /* 0x141622D9: jne 0x1416234a */
L_141622DB:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x18)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x18)) | eax));
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) | eax; /* 0x141622DB: or dword ptr [ebp - 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x141622DE: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x18); /* 0x141622E1: mov esi, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x1C); /* 0x141622E4: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | edx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | edx));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | edx; /* 0x141622E7: or dword ptr [ebp - 0x14], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141622EA: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    ecx = ecx & MEM32(ebp + 0x8); /* 0x141622EC: and ecx, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141622EF: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141622F1: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141622F3: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141622F5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162317; /* 0x141622F7: je 0x14162317 */
L_141622F9:
    esi = MEM32(ebp + (-0x4)); /* 0x141622F9: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x24); /* 0x141622FC: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x141622FF: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x14162301: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((edx | MEM32(ebp + 0x14))); _flag_b = (uint32_t)((edx | MEM32(ebp + 0x14)));
    edx = edx | MEM32(ebp + 0x14); /* 0x14162304: or edx, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x14162307: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = edx; /* 0x1416230A: mov dword ptr [ebp - 8], edx */
    edi = 1; /* 0x1416230D: mov edi, 1 */
    goto L_141623DF; /* 0x14162312: jmp 0x141623df */
L_14162317:
    ecx = MEM32(ebp + 0x8); /* 0x14162317: mov ecx, dword ptr [ebp + 8] */
    eax = edi; /* 0x1416231A: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1416231C: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x1416231E: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x14162321: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x14162323: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x14162326: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x14162328: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1416232A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x24); /* 0x1416232C: mov eax, dword ptr [ebp + 0x24] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162340; /* 0x1416232F: jne 0x14162340 */
L_14162331:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | ebx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | ebx));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | ebx; /* 0x14162331: or dword ptr [ebp - 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x14162334: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x14162336: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14162339: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141623DF; /* 0x1416233B: jmp 0x141623df */
L_14162340:
    edi = 1; /* 0x14162340: mov edi, 1 */
    goto L_141623DF; /* 0x14162345: jmp 0x141623df */
L_1416234A:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x18)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x18)) | eax));
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) | eax; /* 0x1416234A: or dword ptr [ebp - 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1416234D: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x18); /* 0x14162350: mov esi, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x1C); /* 0x14162353: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | edx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | edx));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | edx; /* 0x14162356: or dword ptr [ebp - 0x14], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x14162359: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    ecx = ecx & MEM32(ebp + 0x8); /* 0x1416235B: and ecx, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1416235E: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x14162360: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x14162362: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14162364: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162375; /* 0x14162366: je 0x14162375 */
L_14162368:
    eax = MEM32(ebp + 0x24); /* 0x14162368: mov eax, dword ptr [ebp + 0x24] */
    esi = MEM32(ebp + (-0x4)); /* 0x1416236B: mov esi, dword ptr [ebp - 4] */
    edi = 1; /* 0x1416236E: mov edi, 1 */
    goto L_141623DF; /* 0x14162373: jmp 0x141623df */
L_14162375:
    ecx = MEM32(ebp + 0x8); /* 0x14162375: mov ecx, dword ptr [ebp + 8] */
    eax = edi; /* 0x14162378: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1416237A: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x1416237C: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x1416237F: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x14162381: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x14162384: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x14162386: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14162388: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1416238A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x24); /* 0x1416238C: mov eax, dword ptr [ebp + 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_141623DF; /* 0x1416238F: je 0x141623df */
L_14162391:
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x14162391: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | ebx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | ebx));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | ebx; /* 0x14162393: or dword ptr [ebp - 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x14162396: mov dword ptr [ebp - 4], esi */
    goto L_141623DF; /* 0x14162399: jmp 0x141623df */
L_1416239B:
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x1416239B: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141623D4; /* 0x1416239D: jne 0x141623d4 */
L_1416239F:
    edx = MEM32(ebp + 0xC); /* 0x1416239F: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x1C); /* 0x141623A2: mov eax, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x8); /* 0x141623A5: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x141623A8: mov ecx, dword ptr [ebp + 0x18] */
    esi = ~esi; /* 0x141623AB: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    esi = esi & MEM32(ebp + (-0x10)); /* 0x141623AD: and esi, dword ptr [ebp - 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ~edx; /* 0x141623B0: not edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    edx = edx & MEM32(ebp + (-0xC)); /* 0x141623B2: and edx, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x141623B5: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    eax = eax & MEM32(ebp + (-0x20)); /* 0x141623B7: and eax, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x141623BA: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    ecx = ecx & MEM32(ebp + (-0x1C)); /* 0x141623BC: and ecx, dword ptr [ebp - 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x141623BF: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x24); /* 0x141623C1: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    edx = edx & MEM32(ebp + 0x14); /* 0x141623C4: and edx, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141623C7: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x141623C9: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x141623CB: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141623D7; /* 0x141623CD: je 0x141623d7 */
L_141623CF:
    esi = MEM32(ebp + (-0x4)); /* 0x141623CF: mov esi, dword ptr [ebp - 4] */
    goto L_141623DF; /* 0x141623D2: jmp 0x141623df */
L_141623D4:
    eax = MEM32(ebp + 0x24); /* 0x141623D4: mov eax, dword ptr [ebp + 0x24] */
L_141623D7:
    esi = MEM32(ebp + (-0x4)); /* 0x141623D7: mov esi, dword ptr [ebp - 4] */
L_141623DA:
    edi = 2; /* 0x141623DA: mov edi, 2 */
L_141623DF:
    ecx = MEM32(ebp + 0x14); /* 0x141623DF: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x1C)); /* 0x141623E2: mov edx, dword ptr [ebp - 0x1c] */
    ecx = ~ecx; /* 0x141623E5: not ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & ecx; /* 0x141623E7: and dword ptr [ebp - 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x141623EA: not eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & eax; /* 0x141623EC: and dword ptr [ebp - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x141623EF: mov dword ptr [ebp + 0x14], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x141623F2: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    ecx = ecx & MEM32(ebp + 0x14); /* 0x141623F5: and ecx, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x141623F8: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x10)); /* 0x141623FA: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141623FD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x141623FF: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_14162254; /* 0x14162402: jmp 0x14162254 */
L_14162407:
    ecx = MEM32(ebp + 0x28); /* 0x14162407: mov ecx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + (-0x8)); /* 0x1416240A: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx + 0x4) = eax; /* 0x1416240D: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x14162410: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ecx) = esi; /* 0x14162413: mov dword ptr [ecx], esi */
    ecx = MEM32(ebp + 0x2C); /* 0x14162415: mov ecx, dword ptr [ebp + 0x2c] */
    edi = POP32_VAL(esp); /* 0x14162418: pop edi */
    MEM32(ecx) = eax; /* 0x14162419: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1416241B: mov eax, dword ptr [ebp - 0x18] */
    esi = POP32_VAL(esp); /* 0x1416241E: pop esi */
    MEM32(ecx + 0x4) = eax; /* 0x1416241F: mov dword ptr [ecx + 4], eax */
    ebx = POP32_VAL(esp); /* 0x14162422: pop ebx */
    esp = ebp; /* 0x14162423: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162425: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x14162426: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_14162430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162430u);

L_14162430:
    edi = edi; /* 0x14162430: mov edi, edi */
    PUSH32(esp, esi); /* 0x14162432: push esi */
    esi = ecx; /* 0x14162433: mov esi, ecx */
    eax = MEM32(esi + 0x50); /* 0x14162435: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x14162438: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416243D: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162446; /* 0x14162440: je 0x14162446 */
L_14162442:
    SET_LO8(eax, 1); /* 0x14162442: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x14162444: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162445: ret  */
L_14162446:
    ecx = MEM32(esi + 0x6C); /* 0x14162446: mov ecx, dword ptr [esi + 0x6c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162449: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162457; /* 0x1416244C: je 0x14162457 */
L_1416244E:
    RECOMP_CALL(sub_14162430); /* 0x1416244E: call 0x14162430 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14162453: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141624A9; /* 0x14162455: je 0x141624a9 */
L_14162457:
    ecx = MEM32(esi + 0x68); /* 0x14162457: mov ecx, dword ptr [esi + 0x68] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1416245A: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162468; /* 0x1416245D: je 0x14162468 */
L_1416245F:
    RECOMP_CALL(sub_14162430); /* 0x1416245F: call 0x14162430 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14162464: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141624A9; /* 0x14162466: je 0x141624a9 */
L_14162468:
    eax = MEM32(esi + 0x60); /* 0x14162468: mov eax, dword ptr [esi + 0x60] */
    edx = MEM32(eax + 0x8); /* 0x1416246B: mov edx, dword ptr [eax + 8] */
    esi = MEM32(eax + 0xC); /* 0x1416246E: mov esi, dword ptr [eax + 0xc] */
    eax = edx; /* 0x14162471: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100010u);
    eax = eax & 0x00100010u; /* 0x14162473: and eax, 0x100010 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14162478: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10u */ /* 0x1416247A: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162499; /* 0x1416247D: jne 0x14162499 */
L_1416247F:
    /* test ecx, ecx */ /* 0x1416247F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162499; /* 0x14162481: jne 0x14162499 */
L_14162483:
    eax = edx; /* 0x14162483: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x14162485: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1416248A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162442; /* 0x1416248C: je 0x14162442 */
L_1416248E:
    ecx = esi; /* 0x1416248E: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x14162490: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162493: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14162495: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162442; /* 0x14162497: jne 0x14162442 */
L_14162499:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0C000000u);
    edx = edx & 0x0C000000u; /* 0x14162499: and edx, 0xc000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x180u);
    esi = esi & 0x180u; /* 0x1416249F: and esi, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x141624A5: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162442; /* 0x141624A7: jne 0x14162442 */
L_141624A9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141624A9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x141624AB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141624AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_141624C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141624C0u);

L_141624C0:
    edi = edi; /* 0x141624C0: mov edi, edi */
    PUSH32(esp, ecx); /* 0x141624C2: push ecx */
    PUSH32(esp, esi); /* 0x141624C3: push esi */
    PUSH32(esp, edi); /* 0x141624C4: push edi */
    edi = eax; /* 0x141624C5: mov edi, eax */
L_141624C7:
    eax = MEM32(edi + 0x60); /* 0x141624C7: mov eax, dword ptr [edi + 0x60] */
    eax = MEM32(eax + 0x8); /* 0x141624CA: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x141624CD: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141624D0: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162513; /* 0x141624D3: je 0x14162513 */
L_141624D5:
    eax = MEM32(edi + 0x98); /* 0x141624D5: mov eax, dword ptr [edi + 0x98] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141624DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162513; /* 0x141624DE: je 0x14162513 */
L_141624E0:
    /* cmp MEM32(edi + 0x90), 0 */ /* 0x141624E0: cmp dword ptr [edi + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162513; /* 0x141624E7: jne 0x14162513 */
L_141624E9:
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x141624E9: push dword ptr [eax + 0x48] */
    RECOMP_CALL(sub_141E3841); /* 0x141624EC: call 0x141e3841 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141624F1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162513; /* 0x141624F3: je 0x14162513 */
L_141624F5:
    esi = MEM32(edi + 0x98); /* 0x141624F5: mov esi, dword ptr [edi + 0x98] */
    RECOMP_CALL(sub_1414DCC0); /* 0x141624FB: call 0x1414dcc0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14162500: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x14162502: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416250B; /* 0x14162505: jne 0x1416250b */
L_14162507:
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x14162507: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141624C7; /* 0x14162509: jmp 0x141624c7 */
L_1416250B:
    eax = MEM32(esi + 0xC); /* 0x1416250B: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(eax + edi * 4); /* 0x1416250E: mov edi, dword ptr [eax + edi*4] */
    RECOMP_BACKEDGE();
    goto L_141624C7; /* 0x14162511: jmp 0x141624c7 */
L_14162513:
    eax = edi; /* 0x14162513: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14162515: pop edi */
    esi = POP32_VAL(esp); /* 0x14162516: pop esi */
    ecx = POP32_VAL(esp); /* 0x14162517: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162518: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162520u);

L_14162520:
    eax = MEM32(ecx + 0x9C); /* 0x14162520: mov eax, dword ptr [ecx + 0x9c] */
    MEM32(edx + 0x9C) = eax; /* 0x14162526: mov dword ptr [edx + 0x9c], eax */
    eax = MEM32(ecx + 0xA0); /* 0x1416252C: mov eax, dword ptr [ecx + 0xa0] */
    MEM32(edx + 0xA0) = eax; /* 0x14162532: mov dword ptr [edx + 0xa0], eax */
    eax = MEM32(ecx + 0xAC); /* 0x14162538: mov eax, dword ptr [ecx + 0xac] */
    MEM32(edx + 0xAC) = eax; /* 0x1416253E: mov dword ptr [edx + 0xac], eax */
    eax = MEM32(ecx + 0xB0); /* 0x14162544: mov eax, dword ptr [ecx + 0xb0] */
    MEM32(edx + 0xB0) = eax; /* 0x1416254A: mov dword ptr [edx + 0xb0], eax */
    eax = MEM32(ecx + 0xB4); /* 0x14162550: mov eax, dword ptr [ecx + 0xb4] */
    MEM32(edx + 0xB4) = eax; /* 0x14162556: mov dword ptr [edx + 0xb4], eax */
    eax = MEM32(ecx + 0xBC); /* 0x1416255C: mov eax, dword ptr [ecx + 0xbc] */
    MEM32(edx + 0xBC) = eax; /* 0x14162562: mov dword ptr [edx + 0xbc], eax */
    eax = MEM32(ecx + 0x28); /* 0x14162568: mov eax, dword ptr [ecx + 0x28] */
    MEM32(edx + 0x28) = eax; /* 0x1416256B: mov dword ptr [edx + 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416256E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162570: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162580u);

L_14162580:
    eax = MEM32(eax + 0x5C); /* 0x14162580: mov eax, dword ptr [eax + 0x5c] */
    /* test eax, eax */ /* 0x14162583: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416258D; /* 0x14162585: jne 0x1416258d */
L_14162587:
    eax = 3; /* 0x14162587: mov eax, 3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416258C: ret  */
L_1416258D:
    eax = MEM32(eax * 4 + 0x140147B8); /* 0x1416258D: mov eax, dword ptr [eax*4 + 0x140147b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x14162594: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162597: ret  */
    RECOMP_REGS_OUT();
}

void sub_141625A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141625A0u);

L_141625A0:
    edi = edi; /* 0x141625A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141625A2: push ebp */
    ebp = esp; /* 0x141625A3: mov ebp, esp */
    edx = MEM32(esi + 0x5C); /* 0x141625A5: mov edx, dword ptr [esi + 0x5c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141625A8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141625AB: push ebx */
    PUSH32(esp, edi); /* 0x141625AC: push edi */
    edi = eax; /* 0x141625AD: mov edi, eax */
    ecx = MEM32(edi + 0x5C); /* 0x141625AF: mov ecx, dword ptr [edi + 0x5c] */
    /* cmp edx, ecx */ /* 0x141625B2: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625B4: je 0x141625fa */
L_141625B6:
    /* cmp edx, 4 */ /* 0x141625B6: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141625C2; /* 0x141625B9: jne 0x141625c2 */
L_141625BB:
    /* cmp ecx, 3 */ /* 0x141625BB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625BE: je 0x141625fa */
L_141625C0:
    goto L_141625D7; /* 0x141625C0: jmp 0x141625d7 */
L_141625C2:
    /* cmp edx, 0xCu */ /* 0x141625C2: cmp edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141625D2; /* 0x141625C5: jne 0x141625d2 */
L_141625C7:
    /* cmp ecx, 0xBu */ /* 0x141625C7: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625CA: je 0x141625fa */
L_141625CC:
    /* test ecx, ecx */ /* 0x141625CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625CE: je 0x141625fa */
L_141625D0:
    goto L_141625D7; /* 0x141625D0: jmp 0x141625d7 */
L_141625D2:
    /* cmp edx, 0x11u */ /* 0x141625D2: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625DC; /* 0x141625D5: je 0x141625dc */
L_141625D7:
    /* cmp ecx, 0x11u */ /* 0x141625D7: cmp ecx, 0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625DA: je 0x141625fa */
L_141625DC:
    /* test MEM32(edx * 4 + 0x140147B8), 0x8000u */ /* 0x141625DC: test dword ptr [edx*4 + 0x140147b8], 0x8000 */
    _flag_a = (uint32_t)(MEM32(edx * 4 + 0x140147B8)); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141625EE; /* 0x141625E7: je 0x141625ee */
L_141625E9:
    /* cmp ecx, 0x20u */ /* 0x141625E9: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x141625EC: je 0x141625fa */
L_141625EE:
    /* cmp edx, 0x11u */ /* 0x141625EE: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162602; /* 0x141625F1: jne 0x14162602 */
L_141625F3:
    /* cmp ecx, edx */ /* 0x141625F3: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_141625F5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_14162642; /* 0x141625F5: je 0x14162642 */
L_141625F7:
    MEM32(esi + 0x5C) = ecx; /* 0x141625F7: mov dword ptr [esi + 0x5c], ecx */
L_141625FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141625FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141625FC: pop edi */
    ebx = POP32_VAL(esp); /* 0x141625FD: pop ebx */
    esp = ebp; /* 0x141625FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162600: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162601: ret  */
L_14162602:
    /* cmp edx, 3 */ /* 0x14162602: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162617; /* 0x14162605: jne 0x14162617 */
L_14162607:
    /* cmp ecx, 4 */ /* 0x14162607: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162642; /* 0x1416260A: jne 0x14162642 */
L_1416260C:
    MEM32(esi + 0x5C) = ecx; /* 0x1416260C: mov dword ptr [esi + 0x5c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416260F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14162611: pop edi */
    ebx = POP32_VAL(esp); /* 0x14162612: pop ebx */
    esp = ebp; /* 0x14162613: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162615: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162616: ret  */
L_14162617:
    /* cmp edx, 0xBu */ /* 0x14162617: cmp edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162620; /* 0x1416261A: je 0x14162620 */
L_1416261C:
    /* test edx, edx */ /* 0x1416261C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162630; /* 0x1416261E: jne 0x14162630 */
L_14162620:
    /* cmp ecx, 0xCu */ /* 0x14162620: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162642; /* 0x14162623: jne 0x14162642 */
L_14162625:
    MEM32(esi + 0x5C) = ecx; /* 0x14162625: mov dword ptr [esi + 0x5c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162628: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1416262A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1416262B: pop ebx */
    esp = ebp; /* 0x1416262C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416262E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416262F: ret  */
L_14162630:
    /* cmp edx, 0x20u */ /* 0x14162630: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162642; /* 0x14162633: jne 0x14162642 */
L_14162635:
    /* test MEM32(ecx * 4 + 0x140147B8), 0x8000u */ /* 0x14162635: test dword ptr [ecx*4 + 0x140147b8], 0x8000 */
    _flag_a = (uint32_t)(MEM32(ecx * 4 + 0x140147B8)); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141625F5; /* 0x14162640: jmp 0x141625f5 */
L_14162642:
    eax = MEM32(esi + 0x60); /* 0x14162642: mov eax, dword ptr [esi + 0x60] */
    ebx = MEM32(eax + 0x8); /* 0x14162645: mov ebx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x14162648: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1416264B: mov dword ptr [ebp - 4], eax */
    eax = ebx; /* 0x1416264E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000010u);
    eax = eax & 0x80000010u; /* 0x14162650: and eax, 0x80000010 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0; /* 0x14162655: mov dword ptr [ebp - 4], 0 */
    /* cmp eax, 0x80000010u */ /* 0x1416265C: cmp eax, 0x80000010 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000010u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162669; /* 0x14162661: jne 0x14162669 */
L_14162663:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x14162663: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625F7; /* 0x14162667: je 0x141625f7 */
L_14162669:
    eax = MEM32(edi + 0x60); /* 0x14162669: mov eax, dword ptr [edi + 0x60] */
    edi = MEM32(eax + 0x8); /* 0x1416266C: mov edi, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1416266F: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14162672: mov dword ptr [ebp - 4], eax */
    eax = edi; /* 0x14162675: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000010u);
    eax = eax & 0x80000010u; /* 0x14162677: and eax, 0x80000010 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0; /* 0x1416267C: mov dword ptr [ebp - 4], 0 */
    /* cmp eax, 0x80000010u */ /* 0x14162683: cmp eax, 0x80000010 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000010u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162694; /* 0x14162688: jne 0x14162694 */
L_1416268A:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1416268A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141625FA; /* 0x1416268E: je 0x141625fa */
L_14162694:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    ebx = ebx & 0x80000000u; /* 0x14162694: and ebx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0)); _flag_b = (uint32_t)((ebx | 0));
    ebx = ebx | 0; /* 0x1416269A: or ebx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141626BE; /* 0x1416269D: je 0x141626be */
L_1416269F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    edi = edi & 0x80000000u; /* 0x1416269F: and edi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0)); _flag_b = (uint32_t)((edi | 0));
    edi = edi | 0; /* 0x141626A5: or edi, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141626BE; /* 0x141626A8: je 0x141626be */
L_141626AA:
    /* cmp edx, 0x11u */ /* 0x141626AA: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141625FA; /* 0x141626AD: jne 0x141625fa */
L_141626B3:
    MEM32(esi + 0x5C) = ecx; /* 0x141626B3: mov dword ptr [esi + 0x5c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141626B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141626B8: pop edi */
    ebx = POP32_VAL(esp); /* 0x141626B9: pop ebx */
    esp = ebp; /* 0x141626BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141626BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141626BD: ret  */
L_141626BE:
    edi = POP32_VAL(esp); /* 0x141626BE: pop edi */
    eax = 0x80004005u; /* 0x141626BF: mov eax, 0x80004005 */
    ebx = POP32_VAL(esp); /* 0x141626C4: pop ebx */
    esp = ebp; /* 0x141626C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141626C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141626C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_141626D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141626D0u);

L_141626D0:
    eax = MEM32(esi + 0x60); /* 0x141626D0: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x141626D3: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    ecx = ecx & 0x4000u; /* 0x141626D6: and ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141626DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141626DE: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141626EB; /* 0x141626E0: je 0x141626eb */
L_141626E2:
    MEM32(edx) = 1; /* 0x141626E2: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141626E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141626EA: ret  */
L_141626EB:
    eax = MEM32(esi + 0x5C); /* 0x141626EB: mov eax, dword ptr [esi + 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE9u; /* 0x141626EE: add eax, -0x17 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x30u */ /* 0x141626F1: cmp eax, 0x30 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14162728; /* 0x141626F4: ja 0x14162728 */
L_141626F6:
    eax = (uint32_t)MEM8(eax + 0x14162748); /* 0x141626F6: movzx eax, byte ptr [eax + 0x14162748] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14162734)); goto _ljump; }
L_14162704:
    MEM32(edx) = 1; /* 0x14162704: mov dword ptr [edx], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416270A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416270C: ret  */
L_1416270D:
    MEM32(edx) = 2; /* 0x1416270D: mov dword ptr [edx], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162713: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162715: ret  */
L_14162716:
    MEM32(edx) = 3; /* 0x14162716: mov dword ptr [edx], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416271C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416271E: ret  */
L_1416271F:
    MEM32(edx) = 4; /* 0x1416271F: mov dword ptr [edx], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162725: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162727: ret  */
L_14162728:
    MEM32(edx) = 0; /* 0x14162728: mov dword ptr [edx], 0 */
    eax = 0x8007054Fu; /* 0x1416272E: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162733: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14162704u: goto L_14162704;
      case 0x1416270Du: goto L_1416270D;
      case 0x14162716u: goto L_14162716;
      case 0x1416271Fu: goto L_1416271F;
      case 0x14162728u: goto L_14162728;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14162780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162780u);

L_14162780:
    eax = MEM32(edi + 0x60); /* 0x14162780: mov eax, dword ptr [edi + 0x60] */
    /* cmp eax, MEM32(esi + 0x60) */ /* 0x14162783: cmp eax, dword ptr [esi + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x60));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141627A5; /* 0x14162786: jne 0x141627a5 */
L_14162788:
    eax = MEM32(edi + 0x74); /* 0x14162788: mov eax, dword ptr [edi + 0x74] */
    /* cmp eax, MEM32(esi + 0x74) */ /* 0x1416278B: cmp eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141627A5; /* 0x1416278E: jne 0x141627a5 */
L_14162790:
    eax = MEM32(edi + 0x6C); /* 0x14162790: mov eax, dword ptr [edi + 0x6c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162793: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627A8; /* 0x14162796: je 0x141627a8 */
L_14162798:
    /* cmp eax, MEM32(esi + 0x6C) */ /* 0x14162798: cmp eax, dword ptr [esi + 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141627A5; /* 0x1416279B: jne 0x141627a5 */
L_1416279D:
    eax = MEM32(edi + 0x70); /* 0x1416279D: mov eax, dword ptr [edi + 0x70] */
    /* cmp eax, MEM32(esi + 0x70) */ /* 0x141627A0: cmp eax, dword ptr [esi + 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627B9; /* 0x141627A3: je 0x141627b9 */
L_141627A5:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141627A5: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141627A7: ret  */
L_141627A8:
    ecx = MEM32(esi + 0x6C); /* 0x141627A8: mov ecx, dword ptr [esi + 0x6c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141627AB: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627B9; /* 0x141627AE: je 0x141627b9 */
L_141627B0:
    RECOMP_CALL(sub_14163C00); /* 0x141627B0: call 0x14163c00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141627B5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141627A5; /* 0x141627B7: je 0x141627a5 */
L_141627B9:
    eax = MEM32(edi + 0x68); /* 0x141627B9: mov eax, dword ptr [edi + 0x68] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141627BC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627D1; /* 0x141627BF: je 0x141627d1 */
L_141627C1:
    /* cmp eax, MEM32(esi + 0x68) */ /* 0x141627C1: cmp eax, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141627A5; /* 0x141627C4: jne 0x141627a5 */
L_141627C6:
    eax = MEM32(edi + 0x64); /* 0x141627C6: mov eax, dword ptr [edi + 0x64] */
    /* cmp eax, MEM32(esi + 0x64) */ /* 0x141627C9: cmp eax, dword ptr [esi + 0x64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627E2; /* 0x141627CC: je 0x141627e2 */
L_141627CE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141627CE: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141627D0: ret  */
L_141627D1:
    ecx = MEM32(esi + 0x68); /* 0x141627D1: mov ecx, dword ptr [esi + 0x68] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141627D4: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141627E2; /* 0x141627D7: je 0x141627e2 */
L_141627D9:
    RECOMP_CALL(sub_14163C00); /* 0x141627D9: call 0x14163c00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141627DE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141627A5; /* 0x141627E0: je 0x141627a5 */
L_141627E2:
    eax = MEM32(esi + 0xB0); /* 0x141627E2: mov eax, dword ptr [esi + 0xb0] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0xB0))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0xB0)));
    eax = eax ^ MEM32(edi + 0xB0); /* 0x141627E8: xor eax, dword ptr [edi + 0xb0] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0xFFFFu */ /* 0x141627EE: test eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x141627F3: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141627F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162800u);

L_14162800:
    eax = MEM32(ecx + 0x6C); /* 0x14162800: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162803: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416282C; /* 0x14162806: je 0x1416282c */
L_14162808:
    eax = MEM32(eax + 0x98); /* 0x14162808: mov eax, dword ptr [eax + 0x98] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1416280E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416282C; /* 0x14162811: je 0x1416282c */
L_14162813:
    eax = MEM32(eax + 0x48); /* 0x14162813: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x14162816: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51500000u */ /* 0x1416281B: cmp eax, 0x51500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162829; /* 0x14162820: je 0x14162829 */
L_14162822:
    /* cmp eax, 0x51600000u */ /* 0x14162822: cmp eax, 0x51600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416282C; /* 0x14162827: jne 0x1416282c */
L_14162829:
    SET_LO8(eax, 1); /* 0x14162829: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416282B: ret  */
L_1416282C:
    eax = MEM32(ecx + 0x68); /* 0x1416282C: mov eax, dword ptr [ecx + 0x68] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1416282F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162855; /* 0x14162832: je 0x14162855 */
L_14162834:
    eax = MEM32(eax + 0x98); /* 0x14162834: mov eax, dword ptr [eax + 0x98] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1416283A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162855; /* 0x1416283D: je 0x14162855 */
L_1416283F:
    eax = MEM32(eax + 0x48); /* 0x1416283F: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x14162842: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x51500000u */ /* 0x14162847: cmp eax, 0x51500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162829; /* 0x1416284C: je 0x14162829 */
L_1416284E:
    /* cmp eax, 0x51600000u */ /* 0x1416284E: cmp eax, 0x51600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162829; /* 0x14162853: je 0x14162829 */
L_14162855:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14162855: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162857: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162860u);

L_14162860:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162860: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416288E; /* 0x14162863: je 0x1416288e */
L_14162865:
    eax = MEM32(ecx + 0x50); /* 0x14162865: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x14162868: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416286B: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162891; /* 0x1416286E: jne 0x14162891 */
L_14162870:
    eax = MEM32(ecx + 0x8C); /* 0x14162870: mov eax, dword ptr [ecx + 0x8c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162876: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162886; /* 0x14162879: je 0x14162886 */
L_1416287B:
    eax = MEM32(eax + 0x50); /* 0x1416287B: mov eax, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1416287E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14162881: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162891; /* 0x14162884: jne 0x14162891 */
L_14162886:
    ecx = MEM32(ecx + 0x6C); /* 0x14162886: mov ecx, dword ptr [ecx + 0x6c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162889: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162865; /* 0x1416288C: jne 0x14162865 */
L_1416288E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1416288E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162890: ret  */
L_14162891:
    SET_LO8(eax, 1); /* 0x14162891: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162893: ret  */
    RECOMP_REGS_OUT();
}

void sub_141628A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141628A0u);

L_141628A0:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141628A0: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141628E2; /* 0x141628A3: je 0x141628e2 */
L_141628A5:
    goto L_141628B0; /* 0x141628A5: jmp 0x141628b0 */
L_141628B0:
    eax = MEM32(ecx + 0x98); /* 0x141628B0: mov eax, dword ptr [ecx + 0x98] */
    eax = MEM32(eax + 0x48); /* 0x141628B6: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x141628B9: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x12900000u */ /* 0x141628BE: cmp eax, 0x12900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141628E2; /* 0x141628C3: je 0x141628e2 */
L_141628C5:
    /* cmp eax, 0x93900000u */ /* 0x141628C5: cmp eax, 0x93900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141628E2; /* 0x141628CA: je 0x141628e2 */
L_141628CC:
    /* cmp eax, 0x93A00000u */ /* 0x141628CC: cmp eax, 0x93a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141628E2; /* 0x141628D1: je 0x141628e2 */
L_141628D3:
    /* cmp eax, 0x12E00000u */ /* 0x141628D3: cmp eax, 0x12e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141628E2; /* 0x141628D8: je 0x141628e2 */
L_141628DA:
    ecx = MEM32(ecx + 0x78); /* 0x141628DA: mov ecx, dword ptr [ecx + 0x78] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141628DD: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141628B0; /* 0x141628E0: jne 0x141628b0 */
L_141628E2:
    eax = ecx; /* 0x141628E2: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141628E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_141628F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141628F0u);

L_141628F0:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141628F0: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416292B; /* 0x141628F3: je 0x1416292b */
L_141628F5:
    goto L_14162900; /* 0x141628F5: jmp 0x14162900 */
L_14162900:
    eax = MEM32(ecx + 0x98); /* 0x14162900: mov eax, dword ptr [ecx + 0x98] */
    eax = MEM32(eax + 0x48); /* 0x14162906: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x14162909: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x12900000u */ /* 0x1416290E: cmp eax, 0x12900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416292B; /* 0x14162913: je 0x1416292b */
L_14162915:
    /* cmp eax, 0x93900000u */ /* 0x14162915: cmp eax, 0x93900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416292B; /* 0x1416291A: je 0x1416292b */
L_1416291C:
    /* cmp eax, 0x93A00000u */ /* 0x1416291C: cmp eax, 0x93a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416292B; /* 0x14162921: je 0x1416292b */
L_14162923:
    ecx = MEM32(ecx + 0x78); /* 0x14162923: mov ecx, dword ptr [ecx + 0x78] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162926: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162900; /* 0x14162929: jne 0x14162900 */
L_1416292B:
    eax = ecx; /* 0x1416292B: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416292D: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162940u);

L_14162940:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162940: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416296D; /* 0x14162943: je 0x1416296d */
L_14162945:
    goto L_14162950; /* 0x14162945: jmp 0x14162950 */
L_14162950:
    eax = MEM32(ecx + 0x98); /* 0x14162950: mov eax, dword ptr [ecx + 0x98] */
    eax = MEM32(eax + 0x48); /* 0x14162956: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x14162959: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x23D00000u */ /* 0x1416295E: cmp eax, 0x23d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416296D; /* 0x14162963: je 0x1416296d */
L_14162965:
    ecx = MEM32(ecx + 0x78); /* 0x14162965: mov ecx, dword ptr [ecx + 0x78] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162968: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162950; /* 0x1416296B: jne 0x14162950 */
L_1416296D:
    eax = ecx; /* 0x1416296D: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416296F: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162980u);

L_14162980:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162980: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416298D; /* 0x14162983: jne 0x1416298d */
L_14162985:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14162985: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x14162986: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14162988: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ecx; /* 0x1416298A: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416298C: ret  */
L_1416298D:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1416298D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162998; /* 0x14162990: jne 0x14162998 */
L_14162992:
    eax = 1; /* 0x14162992: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162997: ret  */
L_14162998:
    eax = MEM32(eax + 0x58); /* 0x14162998: mov eax, dword ptr [eax + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x58); /* 0x1416299B: sub eax, dword ptr [ecx + 0x58] */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416299E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141629B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141629B0u);

L_141629B0:
    edi = edi; /* 0x141629B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141629B2: push ebp */
    ebp = esp; /* 0x141629B3: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x141629B5: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x8C); /* 0x141629B8: mov ecx, dword ptr [edx + 0x8c] */
    PUSH32(esp, esi); /* 0x141629BE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141629BF: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8C); /* 0x141629C2: mov eax, dword ptr [esi + 0x8c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141629C8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141629D9; /* 0x141629CB: jne 0x141629d9 */
L_141629CD:
    /* cmp ecx, eax */ /* 0x141629CD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141629E6; /* 0x141629CF: je 0x141629e6 */
L_141629D1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141629D1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141629D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x141629D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141629D6: ret 0xc */
L_141629D9:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x141629D9: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141629F8; /* 0x141629DC: je 0x141629f8 */
L_141629DE:
    eax = MEM32(eax + 0x58); /* 0x141629DE: mov eax, dword ptr [eax + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x58); /* 0x141629E1: sub eax, dword ptr [ecx + 0x58] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_14162A65; /* 0x141629E4: jne 0x14162a65 */
L_141629E6:
    eax = MEM32(esi + 0x90); /* 0x141629E6: mov eax, dword ptr [esi + 0x90] */
    ecx = MEM32(edx + 0x90); /* 0x141629EC: mov ecx, dword ptr [edx + 0x90] */
    /* cmp eax, ecx */ /* 0x141629F2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141629D1; /* 0x141629F4: jb 0x141629d1 */
L_141629F6:
    if (CMP_BE(_flag_a, _flag_b)) goto L_14162A02; /* 0x141629F6: jbe 0x14162a02 */
L_141629F8:
    eax = 1; /* 0x141629F8: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x141629FD: pop esi */
    ebp = POP32_VAL(esp); /* 0x141629FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141629FF: ret 0xc */
L_14162A02:
    eax = MEM32(esi + 0x64); /* 0x14162A02: mov eax, dword ptr [esi + 0x64] */
    ecx = MEM32(edx + 0x64); /* 0x14162A05: mov ecx, dword ptr [edx + 0x64] */
    /* cmp eax, ecx */ /* 0x14162A08: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141629D1; /* 0x14162A0A: jb 0x141629d1 */
L_14162A0C:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141629F8; /* 0x14162A0C: ja 0x141629f8 */
L_14162A0E:
    ecx = MEM32(edx + 0x68); /* 0x14162A0E: mov ecx, dword ptr [edx + 0x68] */
    eax = MEM32(esi + 0x68); /* 0x14162A11: mov eax, dword ptr [esi + 0x68] */
    RECOMP_CALL(sub_14162980); /* 0x14162A14: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162A19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162A65; /* 0x14162A1B: jne 0x14162a65 */
L_14162A1D:
    eax = MEM32(esi + 0x70); /* 0x14162A1D: mov eax, dword ptr [esi + 0x70] */
    ecx = MEM32(edx + 0x70); /* 0x14162A20: mov ecx, dword ptr [edx + 0x70] */
    /* cmp eax, ecx */ /* 0x14162A23: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141629D1; /* 0x14162A25: jb 0x141629d1 */
L_14162A27:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141629F8; /* 0x14162A27: ja 0x141629f8 */
L_14162A29:
    ecx = MEM32(edx + 0x6C); /* 0x14162A29: mov ecx, dword ptr [edx + 0x6c] */
    eax = MEM32(esi + 0x6C); /* 0x14162A2C: mov eax, dword ptr [esi + 0x6c] */
    RECOMP_CALL(sub_14162980); /* 0x14162A2F: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162A34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162A65; /* 0x14162A36: jne 0x14162a65 */
L_14162A38:
    eax = MEM32(esi + 0x74); /* 0x14162A38: mov eax, dword ptr [esi + 0x74] */
    ecx = MEM32(edx + 0x74); /* 0x14162A3B: mov ecx, dword ptr [edx + 0x74] */
    /* cmp eax, ecx */ /* 0x14162A3E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141629D1; /* 0x14162A40: jb 0x141629d1 */
L_14162A42:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141629F8; /* 0x14162A42: ja 0x141629f8 */
L_14162A44:
    ecx = MEM32(edx + 0x78); /* 0x14162A44: mov ecx, dword ptr [edx + 0x78] */
    eax = MEM32(esi + 0x78); /* 0x14162A47: mov eax, dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_14162980); /* 0x14162A4A: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162A4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162A65; /* 0x14162A51: jne 0x14162a65 */
L_14162A53:
    SET_LO8(eax, MEM8(esi + 0x7C)); /* 0x14162A53: mov al, byte ptr [esi + 0x7c] */
    SET_LO8(ecx, MEM8(edx + 0x7C)); /* 0x14162A56: mov cl, byte ptr [edx + 0x7c] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x14162A59: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141629D1; /* 0x14162A5B: ja 0x141629d1 */
L_14162A61:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14162A61: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14162A63: neg eax */
    _flag_k = FK_CMP;
L_14162A65:
    esi = POP32_VAL(esp); /* 0x14162A65: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162A66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162A67: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162A70u);

L_14162A70:
    edi = edi; /* 0x14162A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162A72: push ebp */
    ebp = esp; /* 0x14162A73: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x14162A75: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x8C); /* 0x14162A78: mov ecx, dword ptr [edx + 0x8c] */
    PUSH32(esp, esi); /* 0x14162A7E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x14162A7F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8C); /* 0x14162A82: mov eax, dword ptr [esi + 0x8c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162A88: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162A99; /* 0x14162A8B: jne 0x14162a99 */
L_14162A8D:
    /* cmp ecx, eax */ /* 0x14162A8D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162AAA; /* 0x14162A8F: je 0x14162aaa */
L_14162A91:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162A91: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14162A94: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162A95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162A96: ret 0xc */
L_14162A99:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162A99: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162ABC; /* 0x14162A9C: je 0x14162abc */
L_14162A9E:
    eax = MEM32(eax + 0x58); /* 0x14162A9E: mov eax, dword ptr [eax + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x58); /* 0x14162AA1: sub eax, dword ptr [ecx + 0x58] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_14162B3D; /* 0x14162AA4: jne 0x14162b3d */
L_14162AAA:
    eax = MEM32(esi + 0x90); /* 0x14162AAA: mov eax, dword ptr [esi + 0x90] */
    ecx = MEM32(edx + 0x90); /* 0x14162AB0: mov ecx, dword ptr [edx + 0x90] */
    /* cmp eax, ecx */ /* 0x14162AB6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162AB8: jb 0x14162a91 */
L_14162ABA:
    if (CMP_BE(_flag_a, _flag_b)) goto L_14162AC6; /* 0x14162ABA: jbe 0x14162ac6 */
L_14162ABC:
    eax = 1; /* 0x14162ABC: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x14162AC1: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162AC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162AC3: ret 0xc */
L_14162AC6:
    eax = MEM32(esi + 0x64); /* 0x14162AC6: mov eax, dword ptr [esi + 0x64] */
    ecx = MEM32(edx + 0x64); /* 0x14162AC9: mov ecx, dword ptr [edx + 0x64] */
    /* cmp eax, ecx */ /* 0x14162ACC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162ACE: jb 0x14162a91 */
L_14162AD0:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162ABC; /* 0x14162AD0: ja 0x14162abc */
L_14162AD2:
    ecx = MEM32(edx + 0x68); /* 0x14162AD2: mov ecx, dword ptr [edx + 0x68] */
    eax = MEM32(esi + 0x68); /* 0x14162AD5: mov eax, dword ptr [esi + 0x68] */
    RECOMP_CALL(sub_14162980); /* 0x14162AD8: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162ADD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162B3D; /* 0x14162ADF: jne 0x14162b3d */
L_14162AE1:
    eax = MEM32(esi + 0x60); /* 0x14162AE1: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax); /* 0x14162AE4: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x60); /* 0x14162AE6: mov eax, dword ptr [edx + 0x60] */
    eax = MEM32(eax); /* 0x14162AE9: mov eax, dword ptr [eax] */
    /* cmp ecx, eax */ /* 0x14162AEB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162AED: jb 0x14162a91 */
L_14162AEF:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162ABC; /* 0x14162AEF: ja 0x14162abc */
L_14162AF1:
    eax = MEM32(esi + 0x70); /* 0x14162AF1: mov eax, dword ptr [esi + 0x70] */
    ecx = MEM32(edx + 0x70); /* 0x14162AF4: mov ecx, dword ptr [edx + 0x70] */
    /* cmp eax, ecx */ /* 0x14162AF7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162AF9: jb 0x14162a91 */
L_14162AFB:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162ABC; /* 0x14162AFB: ja 0x14162abc */
L_14162AFD:
    ecx = MEM32(edx + 0x6C); /* 0x14162AFD: mov ecx, dword ptr [edx + 0x6c] */
    eax = MEM32(esi + 0x6C); /* 0x14162B00: mov eax, dword ptr [esi + 0x6c] */
    RECOMP_CALL(sub_14162980); /* 0x14162B03: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162B3D; /* 0x14162B0A: jne 0x14162b3d */
L_14162B0C:
    eax = MEM32(esi + 0x74); /* 0x14162B0C: mov eax, dword ptr [esi + 0x74] */
    ecx = MEM32(edx + 0x74); /* 0x14162B0F: mov ecx, dword ptr [edx + 0x74] */
    /* cmp eax, ecx */ /* 0x14162B12: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162B14: jb 0x14162a91 */
L_14162B1A:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162ABC; /* 0x14162B1A: ja 0x14162abc */
L_14162B1C:
    ecx = MEM32(edx + 0x78); /* 0x14162B1C: mov ecx, dword ptr [edx + 0x78] */
    eax = MEM32(esi + 0x78); /* 0x14162B1F: mov eax, dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_14162980); /* 0x14162B22: call 0x14162980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162B27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162B3D; /* 0x14162B29: jne 0x14162b3d */
L_14162B2B:
    SET_LO8(eax, MEM8(esi + 0x7C)); /* 0x14162B2B: mov al, byte ptr [esi + 0x7c] */
    SET_LO8(ecx, MEM8(edx + 0x7C)); /* 0x14162B2E: mov cl, byte ptr [edx + 0x7c] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x14162B31: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162A91; /* 0x14162B33: ja 0x14162a91 */
L_14162B39:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14162B39: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14162B3B: neg eax */
    _flag_k = FK_CMP;
L_14162B3D:
    esi = POP32_VAL(esp); /* 0x14162B3D: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162B3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162B3F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162B50u);

L_14162B50:
    edi = edi; /* 0x14162B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162B52: push ebp */
    ebp = esp; /* 0x14162B53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14162B55: push esi */
    esi = MEM32(ebp + 0x8); /* 0x14162B56: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x14162B59: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x14162B5A: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x14162B5D: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x14162B60: push edi */
    PUSH32(esp, esi); /* 0x14162B61: push esi */
    RECOMP_CALL(sub_14162A70); /* 0x14162B62: call 0x14162a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162B67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162BB3; /* 0x14162B69: jne 0x14162bb3 */
L_14162B6B:
    eax = MEM32(esi + 0x50); /* 0x14162B6B: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14162B6E: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14162B73: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162B7C; /* 0x14162B76: je 0x14162b7c */
L_14162B78:
    SET_LO8(ecx, 1); /* 0x14162B78: mov cl, 1 */
    goto L_14162B7E; /* 0x14162B7A: jmp 0x14162b7e */
L_14162B7C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x14162B7C: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_14162B7E:
    eax = MEM32(edi + 0x50); /* 0x14162B7E: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14162B81: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14162B86: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162B8F; /* 0x14162B89: je 0x14162b8f */
L_14162B8B:
    SET_LO8(eax, 1); /* 0x14162B8B: mov al, 1 */
    goto L_14162B91; /* 0x14162B8D: jmp 0x14162b91 */
L_14162B8F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14162B8F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_14162B91:
    /* test LO8(ecx), LO8(ecx) */ /* 0x14162B91: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162BA2; /* 0x14162B93: je 0x14162ba2 */
L_14162B95:
    /* test LO8(eax), LO8(eax) */ /* 0x14162B95: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162BB1; /* 0x14162B97: jne 0x14162bb1 */
L_14162B99:
    edi = POP32_VAL(esp); /* 0x14162B99: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162B9A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14162B9D: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162B9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162B9F: ret 0xc */
L_14162BA2:
    /* test LO8(eax), LO8(eax) */ /* 0x14162BA2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162BB1; /* 0x14162BA4: je 0x14162bb1 */
L_14162BA6:
    edi = POP32_VAL(esp); /* 0x14162BA6: pop edi */
    eax = 1; /* 0x14162BA7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x14162BAC: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162BAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162BAE: ret 0xc */
L_14162BB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162BB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14162BB3:
    edi = POP32_VAL(esp); /* 0x14162BB3: pop edi */
    esi = POP32_VAL(esp); /* 0x14162BB4: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162BB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162BB6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162BC0u);

L_14162BC0:
    edi = edi; /* 0x14162BC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162BC2: push ebp */
    ebp = esp; /* 0x14162BC3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14162BC5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x14162BC6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x14162BC9: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x14162BCA: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x14162BCD: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x14162BD0: push esi */
    PUSH32(esp, edi); /* 0x14162BD1: push edi */
    RECOMP_CALL(sub_14162A70); /* 0x14162BD2: call 0x14162a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162BD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162BE7; /* 0x14162BD9: jne 0x14162be7 */
L_14162BDB:
    eax = MEM32(edi + 0xBC); /* 0x14162BDB: mov eax, dword ptr [edi + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0xBC); /* 0x14162BE1: sub eax, dword ptr [esi + 0xbc] */
    _flag_k = FK_CMP;
L_14162BE7:
    edi = POP32_VAL(esp); /* 0x14162BE7: pop edi */
    esi = POP32_VAL(esp); /* 0x14162BE8: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162BE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162BEA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162C00u);

L_14162C00:
    edi = edi; /* 0x14162C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162C02: push ebp */
    ebp = esp; /* 0x14162C03: mov ebp, esp */
    eax = MEM32(edx + 0x9C); /* 0x14162C05: mov eax, dword ptr [edx + 0x9c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x14162C0B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x14162C0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162C26; /* 0x14162C10: je 0x14162c26 */
L_14162C12:
    /* cmp MEM32(ecx + 0x9C), 0 */ /* 0x14162C12: cmp dword ptr [ecx + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162C22; /* 0x14162C19: jne 0x14162c22 */
L_14162C1B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162C1B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x14162C1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162C20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162C21: ret  */
L_14162C22:
    /* test eax, eax */ /* 0x14162C22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162C38; /* 0x14162C24: jne 0x14162c38 */
L_14162C26:
    /* cmp MEM32(ecx + 0x9C), 0 */ /* 0x14162C26: cmp dword ptr [ecx + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162C38; /* 0x14162C2D: je 0x14162c38 */
L_14162C2F:
    eax = 1; /* 0x14162C2F: mov eax, 1 */
    esp = ebp; /* 0x14162C34: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162C36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162C37: ret  */
L_14162C38:
    PUSH32(esp, esi); /* 0x14162C38: push esi */
    /* test eax, eax */ /* 0x14162C39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162C68; /* 0x14162C3B: je 0x14162c68 */
L_14162C3D:
    esi = MEM32(ecx + 0x9C); /* 0x14162C3D: mov esi, dword ptr [ecx + 0x9c] */
    /* test esi, esi */ /* 0x14162C43: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162C68; /* 0x14162C45: je 0x14162c68 */
L_14162C47:
    eax = MEM32(eax + 0x30); /* 0x14162C47: mov eax, dword ptr [eax + 0x30] */
    esi = MEM32(esi + 0x30); /* 0x14162C4A: mov esi, dword ptr [esi + 0x30] */
    /* cmp eax, esi */ /* 0x14162C4D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162C61; /* 0x14162C4F: jne 0x14162c61 */
L_14162C51:
    eax = MEM32(edx + 0xA0); /* 0x14162C51: mov eax, dword ptr [edx + 0xa0] */
    esi = MEM32(ecx + 0xA0); /* 0x14162C57: mov esi, dword ptr [ecx + 0xa0] */
    /* cmp eax, esi */ /* 0x14162C5D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162C68; /* 0x14162C5F: je 0x14162c68 */
L_14162C61:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x14162C61: sub eax, esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x14162C63: pop esi */
    esp = ebp; /* 0x14162C64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162C67: ret  */
L_14162C68:
    eax = MEM32(edx + 0x60); /* 0x14162C68: mov eax, dword ptr [edx + 0x60] */
    edx = MEM32(eax + 0x8); /* 0x14162C6B: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x14162C6E: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14162C71: mov dword ptr [ebp - 4], eax */
    esi = edx; /* 0x14162C74: mov esi, edx */
    if (1) _cf = (((esi) >> 27) & 1u); /* 0x14162C76: shrd esi, eax, 0x1c */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((esi) >> (28u)) | ((uint32_t)(eax) << (32 - (28u)))) : (esi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = ((1) ? (((esi) >> (28u)) | ((uint32_t)(eax) << (32 - (28u)))) : (esi));
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x14162C7A: shr eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax >> 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 28u; /* 0x14162C7A: shr eax, 0x1c */
    MEM32(ebp + (-0x8)) = eax; /* 0x14162C7D: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x60); /* 0x14162C80: mov eax, dword ptr [ecx + 0x60] */
    PUSH32(esp, ebx); /* 0x14162C83: push ebx */
    PUSH32(esp, edi); /* 0x14162C84: push edi */
    edi = MEM32(eax + 0x8); /* 0x14162C85: mov edi, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x14162C88: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x14162C8B: mov dword ptr [ebp - 8], eax */
    ebx = edi; /* 0x14162C8E: mov ebx, edi */
    if (1) _cf = (((ebx) >> 27) & 1u); /* 0x14162C90: shrd ebx, eax, 0x1c */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) >> (28u)) | ((uint32_t)(eax) << (32 - (28u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) >> (28u)) | ((uint32_t)(eax) << (32 - (28u)))) : (ebx));
    ecx = ebx; /* 0x14162C94: mov ecx, ebx */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x14162C96: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x14162C98: shr eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax >> 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 28u; /* 0x14162C98: shr eax, 0x1c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14162C9B: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14162C9E: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x14162CA1: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162CB7; /* 0x14162CA4: je 0x14162cb7 */
L_14162CA6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x14162CA6: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x14162CA9: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x14162CAC: sub esi, ebx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x14162CAE: pop edi */
    ebx = POP32_VAL(esp); /* 0x14162CAF: pop ebx */
    eax = esi; /* 0x14162CB0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x14162CB2: pop esi */
    esp = ebp; /* 0x14162CB3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162CB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162CB6: ret  */
L_14162CB7:
    eax = MEM32(ebp + (-0x4)); /* 0x14162CB7: mov eax, dword ptr [ebp - 4] */
    esi = edx; /* 0x14162CBA: mov esi, edx */
    if (1) _cf = (((esi) >> 22) & 1u); /* 0x14162CBC: shrd esi, eax, 0x17 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((esi) >> (23u)) | ((uint32_t)(eax) << (32 - (23u)))) : (esi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = ((1) ? (((esi) >> (23u)) | ((uint32_t)(eax) << (32 - (23u)))) : (esi));
    if (23u) _cf = (((eax) >> 22) & 1u); /* 0x14162CC0: shr eax, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((eax >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 23u; /* 0x14162CC0: shr eax, 0x17 */
    MEM32(ebp + (-0x10)) = eax; /* 0x14162CC3: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x14162CC6: mov eax, dword ptr [ebp - 8] */
    ebx = edi; /* 0x14162CC9: mov ebx, edi */
    if (1) _cf = (((ebx) >> 22) & 1u); /* 0x14162CCB: shrd ebx, eax, 0x17 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ebx) >> (23u)) | ((uint32_t)(eax) << (32 - (23u)))) : (ebx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ((1) ? (((ebx) >> (23u)) | ((uint32_t)(eax) << (32 - (23u)))) : (ebx));
    ecx = ebx; /* 0x14162CCF: mov ecx, ebx */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x14162CD1: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (23u) _cf = (((eax) >> 22) & 1u); /* 0x14162CD3: shr eax, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((eax >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 23u; /* 0x14162CD3: shr eax, 0x17 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14162CD6: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14162CD9: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x14162CDC: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162CF2; /* 0x14162CDF: je 0x14162cf2 */
L_14162CE1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x14162CE1: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x14162CE4: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x14162CE7: sub esi, ebx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x14162CE9: pop edi */
    ebx = POP32_VAL(esp); /* 0x14162CEA: pop ebx */
    eax = esi; /* 0x14162CEB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x14162CED: pop esi */
    esp = ebp; /* 0x14162CEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162CF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162CF1: ret  */
L_14162CF2:
    eax = MEM32(ebp + (-0x4)); /* 0x14162CF2: mov eax, dword ptr [ebp - 4] */
    if (1) _cf = (((edx) >> 6) & 1u); /* 0x14162CF5: shrd edx, eax, 7 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (7u)) | ((uint32_t)(eax) << (32 - (7u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (7u)) | ((uint32_t)(eax) << (32 - (7u)))) : (edx));
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x14162CF9: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x14162CF9: shr eax, 7 */
    MEM32(ebp + (-0x10)) = eax; /* 0x14162CFC: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x14162CFF: mov eax, dword ptr [ebp - 8] */
    if (1) _cf = (((edi) >> 6) & 1u); /* 0x14162D02: shrd edi, eax, 7 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (7u)) | ((uint32_t)(eax) << (32 - (7u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (7u)) | ((uint32_t)(eax) << (32 - (7u)))) : (edi));
    ecx = edi; /* 0x14162D06: mov ecx, edi */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x14162D08: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x14162D0A: shr eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 7u; /* 0x14162D0A: shr eax, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14162D0D: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14162D10: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x14162D13: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162D29; /* 0x14162D16: je 0x14162d29 */
L_14162D18:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi & 1; /* 0x14162D18: and edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x14162D1B: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x14162D1E: sub edx, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x14162D20: pop edi */
    ebx = POP32_VAL(esp); /* 0x14162D21: pop ebx */
    eax = edx; /* 0x14162D22: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x14162D24: pop esi */
    esp = ebp; /* 0x14162D25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162D27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162D28: ret  */
L_14162D29:
    edi = POP32_VAL(esp); /* 0x14162D29: pop edi */
    ebx = POP32_VAL(esp); /* 0x14162D2A: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162D2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14162D2D: pop esi */
    esp = ebp; /* 0x14162D2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162D30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162D31: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162D40u);

L_14162D40:
    edi = edi; /* 0x14162D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162D42: push ebp */
    ebp = esp; /* 0x14162D43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14162D45: push esi */
    esi = MEM32(ebp + 0xC); /* 0x14162D46: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x14162D49: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14162D4A: mov edi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x14162D4D: mov ecx, esi */
    edx = edi; /* 0x14162D4F: mov edx, edi */
    RECOMP_CALL(sub_14162C00); /* 0x14162D51: call 0x14162c00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162D56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162D78; /* 0x14162D58: jne 0x14162d78 */
L_14162D5A:
    SET_LO8(eax, MEM8(edi + 0x34)); /* 0x14162D5A: mov al, byte ptr [edi + 0x34] */
    SET_LO8(ecx, MEM8(esi + 0x34)); /* 0x14162D5D: mov cl, byte ptr [esi + 0x34] */
    /* cmp LO8(eax), LO8(ecx) */ /* 0x14162D60: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162D72; /* 0x14162D62: je 0x14162d72 */
L_14162D64:
    ecx = (uint32_t)LO8(ecx); /* 0x14162D64: movzx ecx, cl */
    eax = (uint32_t)LO8(eax); /* 0x14162D67: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x14162D6A: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x14162D6B: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x14162D6D: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162D6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162D6F: ret 0xc */
L_14162D72:
    eax = MEM32(edi + 0x58); /* 0x14162D72: mov eax, dword ptr [edi + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x58); /* 0x14162D75: sub eax, dword ptr [esi + 0x58] */
    _flag_k = FK_CMP;
L_14162D78:
    edi = POP32_VAL(esp); /* 0x14162D78: pop edi */
    esi = POP32_VAL(esp); /* 0x14162D79: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162D7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162D7B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162D90u);

L_14162D90:
    edi = edi; /* 0x14162D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162D92: push ebp */
    ebp = esp; /* 0x14162D93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x14162D95: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x14162D98: push ecx */
    PUSH32(esp, esi); /* 0x14162D99: push esi */
    esi = eax; /* 0x14162D9A: mov esi, eax */
    eax = MEM32(edx + 0x60); /* 0x14162D9C: mov eax, dword ptr [edx + 0x60] */
    ecx = MEM32(eax); /* 0x14162D9F: mov ecx, dword ptr [eax] */
    eax = MEM32(esi + 0x60); /* 0x14162DA1: mov eax, dword ptr [esi + 0x60] */
    eax = MEM32(eax); /* 0x14162DA4: mov eax, dword ptr [eax] */
    /* cmp ecx, eax */ /* 0x14162DA6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14162DB2; /* 0x14162DA8: jae 0x14162db2 */
L_14162DAA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162DAA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14162DAD: pop esi */
    esp = ebp; /* 0x14162DAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162DB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162DB1: ret  */
L_14162DB2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_14162DBE; /* 0x14162DB2: jbe 0x14162dbe */
L_14162DB4:
    eax = 1; /* 0x14162DB4: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x14162DB9: pop esi */
    esp = ebp; /* 0x14162DBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162DBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162DBD: ret  */
L_14162DBE:
    eax = MEM32(edx + 0x5C); /* 0x14162DBE: mov eax, dword ptr [edx + 0x5c] */
    /* test eax, eax */ /* 0x14162DC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162DCC; /* 0x14162DC3: jne 0x14162dcc */
L_14162DC5:
    eax = 3; /* 0x14162DC5: mov eax, 3 */
    goto L_14162DD6; /* 0x14162DCA: jmp 0x14162dd6 */
L_14162DCC:
    eax = MEM32(eax * 4 + 0x140147B8); /* 0x14162DCC: mov eax, dword ptr [eax*4 + 0x140147b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x14162DD3: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_14162DD6:
    ecx = MEM32(esi + 0x5C); /* 0x14162DD6: mov ecx, dword ptr [esi + 0x5c] */
    /* test ecx, ecx */ /* 0x14162DD9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162DE4; /* 0x14162DDB: jne 0x14162de4 */
L_14162DDD:
    ecx = 3; /* 0x14162DDD: mov ecx, 3 */
    goto L_14162DEE; /* 0x14162DE2: jmp 0x14162dee */
L_14162DE4:
    ecx = MEM32(ecx * 4 + 0x140147B8); /* 0x14162DE4: mov ecx, dword ptr [ecx*4 + 0x140147b8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x14162DEB: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_14162DEE:
    /* cmp eax, ecx */ /* 0x14162DEE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162DAA; /* 0x14162DF0: jb 0x14162daa */
L_14162DF2:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162DB4; /* 0x14162DF2: ja 0x14162db4 */
L_14162DF4:
    eax = MEM32(edx + 0xC8); /* 0x14162DF4: mov eax, dword ptr [edx + 0xc8] */
    ecx = MEM32(esi + 0xC8); /* 0x14162DFA: mov ecx, dword ptr [esi + 0xc8] */
    edx = MEM32(edx + 0xCC); /* 0x14162E00: mov edx, dword ptr [edx + 0xcc] */
    esi = MEM32(esi + 0xCC); /* 0x14162E06: mov esi, dword ptr [esi + 0xcc] */
    /* cmp edx, esi */ /* 0x14162E0C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_14162DB4; /* 0x14162E0E: jg 0x14162db4 */
L_14162E10:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_14162DAA; /* 0x14162E10: jl 0x14162daa */
L_14162E12:
    /* cmp eax, ecx */ /* 0x14162E12: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162DAA; /* 0x14162E14: jb 0x14162daa */
L_14162E16:
    /* cmp edx, esi */ /* 0x14162E16: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_14162E20; /* 0x14162E18: jl 0x14162e20 */
L_14162E1A:
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_14162DB4; /* 0x14162E1A: jg 0x14162db4 */
L_14162E1C:
    /* cmp eax, ecx */ /* 0x14162E1C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162DB4; /* 0x14162E1E: ja 0x14162db4 */
L_14162E20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162E20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14162E22: pop esi */
    esp = ebp; /* 0x14162E23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162E25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14162E26: ret  */
    RECOMP_REGS_OUT();
}

void sub_14162E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162E30u);

L_14162E30:
    edi = edi; /* 0x14162E30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162E32: push ebp */
    ebp = esp; /* 0x14162E33: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14162E35: push esi */
    esi = MEM32(ebp + 0xC); /* 0x14162E36: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x14162E39: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14162E3A: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x14162E3D: mov eax, esi */
    edx = edi; /* 0x14162E3F: mov edx, edi */
    RECOMP_CALL(sub_14162D90); /* 0x14162E41: call 0x14162d90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14162E46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162E8C; /* 0x14162E48: jne 0x14162e8c */
L_14162E4A:
    edx = MEM32(edi + 0x50); /* 0x14162E4A: mov edx, dword ptr [edi + 0x50] */
    eax = MEM32(edi + 0x54); /* 0x14162E4D: mov eax, dword ptr [edi + 0x54] */
    ecx = MEM32(esi + 0x50); /* 0x14162E50: mov ecx, dword ptr [esi + 0x50] */
    if (1) _cf = (((edx) >> 7) & 1u); /* 0x14162E53: shrd edx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (edx));
    eax = MEM32(esi + 0x54); /* 0x14162E57: mov eax, dword ptr [esi + 0x54] */
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x14162E5A: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x14162E5E: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14162E61: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14162E64: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x14162E66: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162E6E; /* 0x14162E68: jne 0x14162e6e */
L_14162E6A:
    /* test edi, edi */ /* 0x14162E6A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162E8A; /* 0x14162E6C: je 0x14162e8a */
L_14162E6E:
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x14162E6E: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162E7D; /* 0x14162E70: je 0x14162e7d */
L_14162E72:
    eax = 1; /* 0x14162E72: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x14162E77: pop edi */
    esi = POP32_VAL(esp); /* 0x14162E78: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162E79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162E7A: ret 0xc */
L_14162E7D:
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x14162E7D: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162E8A; /* 0x14162E7F: je 0x14162e8a */
L_14162E81:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162E81: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14162E84: pop edi */
    esi = POP32_VAL(esp); /* 0x14162E85: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162E86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162E87: ret 0xc */
L_14162E8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162E8A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14162E8C:
    edi = POP32_VAL(esp); /* 0x14162E8C: pop edi */
    esi = POP32_VAL(esp); /* 0x14162E8D: pop esi */
    ebp = POP32_VAL(esp); /* 0x14162E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162E8F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162EA0u);

L_14162EA0:
    edi = edi; /* 0x14162EA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162EA2: push ebp */
    ebp = esp; /* 0x14162EA3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x14162EA5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x94); /* 0x14162EA8: mov ecx, dword ptr [eax + 0x94] */
    eax = MEM32(ebp + 0xC); /* 0x14162EAE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x94); /* 0x14162EB1: mov eax, dword ptr [eax + 0x94] */
    /* cmp eax, ecx */ /* 0x14162EB7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14162EC2; /* 0x14162EB9: jbe 0x14162ec2 */
L_14162EBB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162EBB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x14162EBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162EBF: ret 0xc */
L_14162EC2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14162EC2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14162EC4: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x14162EC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162EC7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14162ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14162ED0u);

L_14162ED0:
    edi = edi; /* 0x14162ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14162ED2: push ebp */
    ebp = esp; /* 0x14162ED3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x14162ED5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x14162ED8: push ecx */
    PUSH32(esp, ebx); /* 0x14162ED9: push ebx */
    PUSH32(esp, esi); /* 0x14162EDA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x14162EDB: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(esi + 0x60); /* 0x14162EDE: mov edx, dword ptr [esi + 0x60] */
    PUSH32(esp, edi); /* 0x14162EE1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14162EE2: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x60); /* 0x14162EE5: mov eax, dword ptr [edi + 0x60] */
    ebx = MEM32(eax + 0xC); /* 0x14162EE8: mov ebx, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + 0x8); /* 0x14162EEB: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(edx + 0x8); /* 0x14162EEE: mov eax, dword ptr [edx + 8] */
    edx = MEM32(edx + 0xC); /* 0x14162EF1: mov edx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1800u);
    ebx = ebx & 0x1800u; /* 0x14162EF4: and ebx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1800u);
    edx = edx & 0x1800u; /* 0x14162EFA: and edx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = 0; /* 0x14162F00: mov dword ptr [esp + 0xc], 0 */
    /* cmp ebx, edx */ /* 0x14162F08: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F0A: ja 0x14162f15 */
L_14162F0C:
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F0C: jb 0x14162f15 */
L_14162F0E:
    /* cmp MEM32(esp + 0xC), 0 */ /* 0x14162F0E: cmp dword ptr [esp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14162F21; /* 0x14162F13: jae 0x14162f21 */
L_14162F15:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14162F15: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14162F18: pop edi */
    esi = POP32_VAL(esp); /* 0x14162F19: pop esi */
    ebx = POP32_VAL(esp); /* 0x14162F1A: pop ebx */
    esp = ebp; /* 0x14162F1B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162F1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162F1E: ret 0xc */
L_14162F21:
    /* cmp ebx, edx */ /* 0x14162F21: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F2B; /* 0x14162F23: jb 0x14162f2b */
L_14162F25:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F25: ja 0x14162f15 */
L_14162F27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14162F27: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F29: ja 0x14162f15 */
L_14162F2B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00100000u);
    ecx = ecx & 0x00100000u; /* 0x14162F2B: and ecx, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14162F31: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162F70; /* 0x14162F34: je 0x14162f70 */
L_14162F36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x14162F36: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14162F3B: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162F70; /* 0x14162F3E: je 0x14162f70 */
L_14162F40:
    ecx = MEM32(edi + 0x60); /* 0x14162F40: mov ecx, dword ptr [edi + 0x60] */
    ecx = MEM32(ecx + 0x6C); /* 0x14162F43: mov ecx, dword ptr [ecx + 0x6c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14162F46: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162F70; /* 0x14162F49: je 0x14162f70 */
L_14162F4B:
    eax = MEM32(esi + 0x60); /* 0x14162F4B: mov eax, dword ptr [esi + 0x60] */
    eax = MEM32(eax + 0x6C); /* 0x14162F4E: mov eax, dword ptr [eax + 0x6c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14162F51: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14162F70; /* 0x14162F54: je 0x14162f70 */
L_14162F56:
    ecx = MEM32(ecx + 0x70); /* 0x14162F56: mov ecx, dword ptr [ecx + 0x70] */
    eax = MEM32(eax + 0x70); /* 0x14162F59: mov eax, dword ptr [eax + 0x70] */
    /* cmp ecx, eax */ /* 0x14162F5C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F5E: jb 0x14162f15 */
L_14162F60:
    if (CMP_BE(_flag_a, _flag_b)) goto L_14162F70; /* 0x14162F60: jbe 0x14162f70 */
L_14162F62:
    eax = 1; /* 0x14162F62: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x14162F67: pop edi */
    esi = POP32_VAL(esp); /* 0x14162F68: pop esi */
    ebx = POP32_VAL(esp); /* 0x14162F69: pop ebx */
    esp = ebp; /* 0x14162F6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162F6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162F6D: ret 0xc */
L_14162F70:
    eax = MEM32(edi + 0x70); /* 0x14162F70: mov eax, dword ptr [edi + 0x70] */
    ecx = MEM32(esi + 0x70); /* 0x14162F73: mov ecx, dword ptr [esi + 0x70] */
    /* cmp eax, ecx */ /* 0x14162F76: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F78: jb 0x14162f15 */
L_14162F7A:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F62; /* 0x14162F7A: ja 0x14162f62 */
L_14162F7C:
    eax = MEM32(edi + 0x74); /* 0x14162F7C: mov eax, dword ptr [edi + 0x74] */
    ecx = MEM32(esi + 0x74); /* 0x14162F7F: mov ecx, dword ptr [esi + 0x74] */
    /* cmp eax, ecx */ /* 0x14162F82: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162F84: jb 0x14162f15 */
L_14162F86:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F62; /* 0x14162F86: ja 0x14162f62 */
L_14162F88:
    eax = MEM32(edi + 0xAC); /* 0x14162F88: mov eax, dword ptr [edi + 0xac] */
    /* test eax, eax */ /* 0x14162F8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162FD4; /* 0x14162F90: je 0x14162fd4 */
L_14162F92:
    ecx = MEM32(esi + 0xAC); /* 0x14162F92: mov ecx, dword ptr [esi + 0xac] */
    /* test ecx, ecx */ /* 0x14162F98: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162FD4; /* 0x14162F9A: je 0x14162fd4 */
L_14162F9C:
    ecx = MEM32(ecx + 0x24); /* 0x14162F9C: mov ecx, dword ptr [ecx + 0x24] */
    eax = MEM32(eax + 0x24); /* 0x14162F9F: mov eax, dword ptr [eax + 0x24] */
L_14162FA2:
    SET_LO8(edx, MEM8(eax)); /* 0x14162FA2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x14162FA4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162FC2; /* 0x14162FA6: jne 0x14162fc2 */
L_14162FA8:
    /* test LO8(edx), LO8(edx) */ /* 0x14162FA8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162FBE; /* 0x14162FAA: je 0x14162fbe */
L_14162FAC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x14162FAC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x14162FAF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14162FC2; /* 0x14162FB2: jne 0x14162fc2 */
L_14162FB4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x14162FB4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x14162FB7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x14162FBA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14162FA2; /* 0x14162FBC: jne 0x14162fa2 */
L_14162FBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14162FBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14162FC7; /* 0x14162FC0: jmp 0x14162fc7 */
L_14162FC2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14162FC2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14162FC4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_14162FC7:
    /* test eax, eax */ /* 0x14162FC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14162FE8; /* 0x14162FC9: je 0x14162fe8 */
L_14162FCB:
    edi = POP32_VAL(esp); /* 0x14162FCB: pop edi */
    esi = POP32_VAL(esp); /* 0x14162FCC: pop esi */
    ebx = POP32_VAL(esp); /* 0x14162FCD: pop ebx */
    esp = ebp; /* 0x14162FCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162FD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14162FD1: ret 0xc */
L_14162FD4:
    ecx = MEM32(esi + 0xAC); /* 0x14162FD4: mov ecx, dword ptr [esi + 0xac] */
    /* cmp eax, ecx */ /* 0x14162FDA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162FDC: jb 0x14162f15 */
L_14162FE2:
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F62; /* 0x14162FE2: ja 0x14162f62 */
L_14162FE8:
    eax = MEM32(edi + 0x64); /* 0x14162FE8: mov eax, dword ptr [edi + 0x64] */
    ecx = MEM32(esi + 0x64); /* 0x14162FEB: mov ecx, dword ptr [esi + 0x64] */
    /* cmp ecx, eax */ /* 0x14162FEE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14162F15; /* 0x14162FF0: ja 0x14162f15 */
L_14162FF6:
    edi = POP32_VAL(esp); /* 0x14162FF6: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14162FF7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x14162FF9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14162FFA: neg eax */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x14162FFC: pop ebx */
    esp = ebp; /* 0x14162FFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14162FFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14163000: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14163010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163010u);

L_14163010:
    edi = edi; /* 0x14163010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163012: push ebp */
    ebp = esp; /* 0x14163013: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x14163015: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14163018: push ebx */
    PUSH32(esp, esi); /* 0x14163019: push esi */
    PUSH32(esp, edi); /* 0x1416301A: push edi */
    edi = eax; /* 0x1416301B: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1416301D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1416301F: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163151; /* 0x14163022: je 0x14163151 */
L_14163028:
    eax = edi; /* 0x14163028: mov eax, edi */
    RECOMP_CALL(sub_141624C0); /* 0x1416302A: call 0x141624c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1416302F: mov edi, eax */
    eax = MEM32(edi + 0x50); /* 0x14163031: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14163034: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14163039: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163164; /* 0x1416303C: jne 0x14163164 */
L_14163042:
    esi = MEM32(edi + 0x98); /* 0x14163042: mov esi, dword ptr [edi + 0x98] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x14163048: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163151; /* 0x1416304B: je 0x14163151 */
L_14163051:
    eax = MEM32(esi + 0x48); /* 0x14163051: mov eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x14163054: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20100000u */ /* 0x14163059: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141630CD; /* 0x1416305E: jne 0x141630cd */
L_14163060:
    RECOMP_CALL(sub_1414DCC0); /* 0x14163060: call 0x1414dcc0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x14163065: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14163067: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163151; /* 0x1416306A: je 0x14163151 */
L_14163070:
    ecx = MEM32(esi + 0x48); /* 0x14163070: mov ecx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x14163073: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x14163079: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14163151; /* 0x1416307B: jae 0x14163151 */
L_14163081:
    ecx = MEM32(esi + 0xC); /* 0x14163081: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx + edx * 4); /* 0x14163084: mov eax, dword ptr [ecx + edx*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14163087: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x48); /* 0x1416308A: mov eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x1416308D: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x14163092: add eax, edx */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + eax * 4); /* 0x14163094: mov ecx, dword ptr [ecx + eax*4] */
    edx = MEM32(ebp + (-0x4)); /* 0x14163097: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(edx + 0x50); /* 0x1416309A: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1416309D: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141630A2: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141630B2; /* 0x141630A5: je 0x141630b2 */
L_141630A7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edx + 0xC8); /* 0x141630A7: add ebx, dword ptr [edx + 0xc8] */
    _flag_k = FK_ADD;
    goto L_14163146; /* 0x141630AD: jmp 0x14163146 */
L_141630B2:
    eax = MEM32(ecx + 0x50); /* 0x141630B2: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141630B5: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141630BA: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163151; /* 0x141630BD: je 0x14163151 */
L_141630C3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0xC8); /* 0x141630C3: add ebx, dword ptr [ecx + 0xc8] */
    _flag_k = FK_ADD;
    edi = edx; /* 0x141630C9: mov edi, edx */
    goto L_14163148; /* 0x141630CB: jmp 0x14163148 */
L_141630CD:
    /* cmp eax, 0x22E00000u */ /* 0x141630CD: cmp eax, 0x22e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163151; /* 0x141630D2: jne 0x14163151 */
L_141630D4:
    RECOMP_CALL(sub_1414DCC0); /* 0x141630D4: call 0x1414dcc0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x141630D9: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x141630DB: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163151; /* 0x141630DE: je 0x14163151 */
L_141630E0:
    ecx = MEM32(esi + 0x48); /* 0x141630E0: mov ecx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x141630E3: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x141630E9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14163151; /* 0x141630EB: jae 0x14163151 */
L_141630ED:
    ecx = MEM32(esi + 0xC); /* 0x141630ED: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx + edx * 4); /* 0x141630F0: mov eax, dword ptr [ecx + edx*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141630F3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x48); /* 0x141630F6: mov eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x141630F9: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x141630FE: add eax, edx */
    _flag_k = FK_ADD;
    esi = MEM32(ecx + eax * 4); /* 0x14163100: mov esi, dword ptr [ecx + eax*4] */
    PUSH32(esp, 1); /* 0x14163103: push 1 */
    eax = ebp + (-0x8); /* 0x14163105: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14163108: push eax */
    eax = ebp + (-0x4); /* 0x14163109: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1416310C: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1416310D: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_14195800); /* 0x14163110: call 0x14195800 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163115: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163151; /* 0x14163117: jne 0x14163151 */
L_14163119:
    ecx = MEM32(ebp + (-0x4)); /* 0x14163119: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x50); /* 0x1416311C: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1416311F: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14163124: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163133; /* 0x14163127: je 0x14163133 */
L_14163129:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0xC8); /* 0x14163129: add ebx, dword ptr [ecx + 0xc8] */
    _flag_k = FK_ADD;
    edi = esi; /* 0x1416312F: mov edi, esi */
    goto L_14163148; /* 0x14163131: jmp 0x14163148 */
L_14163133:
    eax = MEM32(esi + 0x50); /* 0x14163133: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14163136: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416313B: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163151; /* 0x1416313E: je 0x14163151 */
L_14163140:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + 0xC8); /* 0x14163140: add ebx, dword ptr [esi + 0xc8] */
    _flag_k = FK_ADD;
L_14163146:
    edi = ecx; /* 0x14163146: mov edi, ecx */
L_14163148:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x14163148: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163028; /* 0x1416314B: jne 0x14163028 */
L_14163151:
    eax = MEM32(ebp + 0x8); /* 0x14163151: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x14163154: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0xC); /* 0x14163156: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x14163159: mov dword ptr [eax], ebx */
    edi = POP32_VAL(esp); /* 0x1416315B: pop edi */
    esi = POP32_VAL(esp); /* 0x1416315C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416315D: pop ebx */
    esp = ebp; /* 0x1416315E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163160: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14163161: ret 8 */
L_14163164:
    eax = MEM32(ebp + 0x8); /* 0x14163164: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x14163167: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0xFFFFFFFFu; /* 0x1416316A: mov dword ptr [eax], 0xffffffff */
    eax = MEM32(edi + 0xC8); /* 0x14163170: mov eax, dword ptr [edi + 0xc8] */
    edi = POP32_VAL(esp); /* 0x14163176: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x14163177: add eax, ebx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x14163179: pop esi */
    MEM32(ecx) = eax; /* 0x1416317A: mov dword ptr [ecx], eax */
    ebx = POP32_VAL(esp); /* 0x1416317C: pop ebx */
    esp = ebp; /* 0x1416317D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416317F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14163180: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14163190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163190u);

L_14163190:
    edi = edi; /* 0x14163190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163192: push ebp */
    ebp = esp; /* 0x14163193: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14163195: push ecx */
    PUSH32(esp, esi); /* 0x14163196: push esi */
    esi = edi + 0x14; /* 0x14163197: lea esi, [edi + 0x14] */
    MEM32(edi) = 0xFFFFFFFFu; /* 0x1416319A: mov dword ptr [edi], 0xffffffff */
    MEM32(esi) = 0xFFFFFFFFu; /* 0x141631A0: mov dword ptr [esi], 0xffffffff */
    MEM32(edi + 0x4) = 0xFFFFFFFFu; /* 0x141631A6: mov dword ptr [edi + 4], 0xffffffff */
    MEM32(edi + 0x18) = 0xFFFFFFFFu; /* 0x141631AD: mov dword ptr [edi + 0x18], 0xffffffff */
    MEM32(edi + 0x8) = 0xFFFFFFFFu; /* 0x141631B4: mov dword ptr [edi + 8], 0xffffffff */
    MEM32(edi + 0x1C) = 0xFFFFFFFFu; /* 0x141631BB: mov dword ptr [edi + 0x1c], 0xffffffff */
    MEM32(edi + 0xC) = 0xFFFFFFFFu; /* 0x141631C2: mov dword ptr [edi + 0xc], 0xffffffff */
    MEM32(edi + 0x20) = 0xFFFFFFFFu; /* 0x141631C9: mov dword ptr [edi + 0x20], 0xffffffff */
    MEM32(edi + 0x10) = 0xFFFFFFFFu; /* 0x141631D0: mov dword ptr [edi + 0x10], 0xffffffff */
    MEM32(edi + 0x24) = 0xFFFFFFFFu; /* 0x141631D7: mov dword ptr [edi + 0x24], 0xffffffff */
    eax = MEM32(ebx + 0x60); /* 0x141631DE: mov eax, dword ptr [ebx + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x141631E1: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141631E4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    ecx = ecx & 0x00010000u; /* 0x141631E6: and ecx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141631EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141631EE: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x141631F0: mov dword ptr [ebp - 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416320C; /* 0x141631F3: jne 0x1416320c */
L_141631F5:
    eax = MEM32(ebx + 0x68); /* 0x141631F5: mov eax, dword ptr [ebx + 0x68] */
    PUSH32(esp, esi); /* 0x141631F8: push esi */
    PUSH32(esp, edi); /* 0x141631F9: push edi */
    RECOMP_CALL(sub_14163010); /* 0x141631FA: call 0x14163010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x64); /* 0x141631FF: mov eax, dword ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x14163202: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edx = 1; /* 0x14163204: mov edx, 1 */
    MEM32(ebp + (-0x4)) = edx; /* 0x14163209: mov dword ptr [ebp - 4], edx */
L_1416320C:
    esi = edi + edx * 4 + 0x14; /* 0x1416320C: lea esi, [edi + edx*4 + 0x14] */
    eax = edi + edx * 4; /* 0x14163210: lea eax, [edi + edx*4] */
    PUSH32(esp, esi); /* 0x14163213: push esi */
    PUSH32(esp, eax); /* 0x14163214: push eax */
    eax = MEM32(ebx + 0x6C); /* 0x14163215: mov eax, dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_14163010); /* 0x14163218: call 0x14163010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x70); /* 0x1416321D: mov eax, dword ptr [ebx + 0x70] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x14163220: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x74); /* 0x14163222: mov eax, dword ptr [ebx + 0x74] */
    ecx = MEM32(ebp + (-0x4)); /* 0x14163225: mov ecx, dword ptr [ebp - 4] */
    MEM32(edi + ecx * 4 + 0x18) = eax; /* 0x14163228: mov dword ptr [edi + ecx*4 + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x1416322C: pop esi */
    esp = ebp; /* 0x1416322D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416322F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163230: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163240u);

L_14163240:
    edi = edi; /* 0x14163240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163242: push ebp */
    ebp = esp; /* 0x14163243: mov ebp, esp */
    edx = MEM32(edi + 0x60); /* 0x14163245: mov edx, dword ptr [edi + 0x60] */
    ecx = MEM32(edx + 0xC); /* 0x14163248: mov ecx, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1416324B: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00010000u);
    ecx = ecx & 0x00010000u; /* 0x1416324C: and ecx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163252: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14163254: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14163256: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163289; /* 0x14163258: jne 0x14163289 */
L_1416325A:
    eax = MEM32(ebx); /* 0x1416325A: mov eax, dword ptr [ebx] */
    ecx = MEM32(edi + 0x60); /* 0x1416325C: mov ecx, dword ptr [edi + 0x60] */
    MEM32(edi + 0x68) = eax; /* 0x1416325F: mov dword ptr [edi + 0x68], eax */
    edx = MEM32(ebx + 0x14); /* 0x14163262: mov edx, dword ptr [ebx + 0x14] */
    MEM32(edi + 0x64) = edx; /* 0x14163265: mov dword ptr [edi + 0x64], edx */
    ecx = MEM32(ecx + 0xC); /* 0x14163268: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    ecx = ecx & 0x4000u; /* 0x1416326B: and ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163271: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14163273: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163281; /* 0x14163275: je 0x14163281 */
L_14163277:
    /* test edx, edx */ /* 0x14163277: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163281; /* 0x14163279: je 0x14163281 */
L_1416327B:
    /* cmp MEM32(edi + 0x68), 0xFFFFFFFFu */ /* 0x1416327B: cmp dword ptr [edi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141632D5; /* 0x1416327F: jne 0x141632d5 */
L_14163281:
    edx = MEM32(edi + 0x60); /* 0x14163281: mov edx, dword ptr [edi + 0x60] */
    esi = 1; /* 0x14163284: mov esi, 1 */
L_14163289:
    eax = MEM32(ebx + esi * 4); /* 0x14163289: mov eax, dword ptr [ebx + esi*4] */
    MEM32(edi + 0x6C) = eax; /* 0x1416328C: mov dword ptr [edi + 0x6c], eax */
    ecx = MEM32(edx + 0xC); /* 0x1416328F: mov ecx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163292: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    ecx = ecx & 0x4000u; /* 0x14163294: and ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1416329A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + esi * 4 + 0x14); /* 0x1416329C: mov eax, dword ptr [ebx + esi*4 + 0x14] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141632C5; /* 0x141632A0: jne 0x141632c5 */
L_141632A2:
    MEM32(edi + 0x70) = eax; /* 0x141632A2: mov dword ptr [edi + 0x70], eax */
L_141632A5:
    edx = MEM32(edx + 0xC); /* 0x141632A5: mov edx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4000u);
    edx = edx & 0x4000u; /* 0x141632A8: and edx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141632AE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x141632B0: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141632DF; /* 0x141632B2: jne 0x141632df */
L_141632B4:
    ecx = MEM32(ebx + esi * 4 + 0x18); /* 0x141632B4: mov ecx, dword ptr [ebx + esi*4 + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x141632B8: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141632BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x74) = ecx; /* 0x141632BD: mov dword ptr [edi + 0x74], ecx */
    esi = POP32_VAL(esp); /* 0x141632C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x141632C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141632C2: ret 4 */
L_141632C5:
    ecx = MEM32(ebp + 0x8); /* 0x141632C5: mov ecx, dword ptr [ebp + 8] */
    eax = eax + ecx * 4; /* 0x141632C8: lea eax, [eax + ecx*4] */
    MEM32(edi + 0x70) = eax; /* 0x141632CB: mov dword ptr [edi + 0x70], eax */
    /* cmp MEM32(ebx + esi * 4 + 0x14), 0 */ /* 0x141632CE: cmp dword ptr [ebx + esi*4 + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + esi * 4 + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141632A5; /* 0x141632D3: je 0x141632a5 */
L_141632D5:
    eax = 0x80004005u; /* 0x141632D5: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x141632DA: pop esi */
    ebp = POP32_VAL(esp); /* 0x141632DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141632DC: ret 4 */
L_141632DF:
    eax = MEM32(ebx + esi * 4 + 0x18); /* 0x141632DF: mov eax, dword ptr [ebx + esi*4 + 0x18] */
    MEM32(edi + 0x74) = eax; /* 0x141632E3: mov dword ptr [edi + 0x74], eax */
    /* test eax, eax */ /* 0x141632E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141632D5; /* 0x141632E8: jne 0x141632d5 */
L_141632EA:
    esi = POP32_VAL(esp); /* 0x141632EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x141632EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141632EC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14163300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163300u);

L_14163300:
    edi = edi; /* 0x14163300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163302: push ebp */
    ebp = esp; /* 0x14163303: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14163305: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x14163308: push 0 */
    eax = ebp + (-0x4); /* 0x1416330A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1416330D: push eax */
    PUSH32(esp, 0); /* 0x1416330E: push 0 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163310: push dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x14163313: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x98); /* 0x14163315: mov ecx, dword ptr [ecx + 0x98] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1416331B: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_141508E0); /* 0x14163322: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x14163327: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1416332A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416332C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416332D: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163340u);

L_14163340:
    edi = edi; /* 0x14163340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163342: push ebp */
    ebp = esp; /* 0x14163343: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14163345: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x14163348: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1416334B: push eax */
    PUSH32(esp, 0); /* 0x1416334C: push 0 */
    PUSH32(esp, 0); /* 0x1416334E: push 0 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163350: push dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x14163353: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x98); /* 0x14163355: mov ecx, dword ptr [ecx + 0x98] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1416335B: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_141508E0); /* 0x14163362: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x14163367: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1416336A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416336C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416336D: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163380u);

L_14163380:
    edi = edi; /* 0x14163380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163382: push ebp */
    ebp = esp; /* 0x14163383: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x14163385: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163388: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416338D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1416338F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx); /* 0x14163392: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x14163394: push ebx */
    PUSH32(esp, esi); /* 0x14163395: push esi */
    PUSH32(esp, edi); /* 0x14163396: push edi */
    PUSH32(esp, 0); /* 0x14163397: push 0 */
    esi = edx; /* 0x14163399: mov esi, edx */
    PUSH32(esp, 0); /* 0x1416339B: push 0 */
    edx = ebp + (-0x58); /* 0x1416339D: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x141633A0: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141633A1: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x141633A4: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x141633AA: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141633AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141633F0; /* 0x141633B1: js 0x141633f0 */
L_141633B3:
    PUSH32(esp, 0); /* 0x141633B3: push 0 */
    PUSH32(esp, 0); /* 0x141633B5: push 0 */
    eax = ebp + (-0x30); /* 0x141633B7: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x141633BA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141633BB: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x141633BE: mov ecx, esi */
    RECOMP_CALL(sub_141508E0); /* 0x141633C0: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141633C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141633F0; /* 0x141633C7: js 0x141633f0 */
L_141633C9:
    ecx = 0x14u; /* 0x141633C9: mov ecx, 0x14 */
    edi = edi; /* 0x141633CE: mov edi, edi */
L_141633D0:
    edi = MEM32(ebp + ecx + (-0x34)); /* 0x141633D0: mov edi, dword ptr [ebp + ecx - 0x34] */
    ebx = MEM32(ebp + ecx + (-0x5C)); /* 0x141633D4: mov ebx, dword ptr [ebp + ecx - 0x5c] */
    edx = MEM32(ebp + ecx + (-0x20)); /* 0x141633D8: mov edx, dword ptr [ebp + ecx - 0x20] */
    esi = MEM32(ebp + ecx + (-0x48)); /* 0x141633DC: mov esi, dword ptr [ebp + ecx - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x141633E0: sub ecx, 4 */
    _flag_k = FK_CMP;
    /* cmp ebx, edi */ /* 0x141633E3: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163405; /* 0x141633E5: jne 0x14163405 */
L_141633E7:
    /* cmp esi, edx */ /* 0x141633E7: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141633E9: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x141633EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163439; /* 0x141633EE: jne 0x14163439 */
L_141633F0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141633F0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x141633F2: pop edi */
    esi = POP32_VAL(esp); /* 0x141633F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x141633F4: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x141633F5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141633F8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141633FA: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141633FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14163402: ret 4 */
L_14163405:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x14163405: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416341D; /* 0x14163408: je 0x1416341d */
L_1416340A:
    eax = MEM32(ebx + 0x50); /* 0x1416340A: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x1416340D: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14163412: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141633F0; /* 0x14163415: je 0x141633f0 */
L_14163417:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC8); /* 0x14163417: add esi, dword ptr [ebx + 0xc8] */
    _flag_k = FK_ADD;
L_1416341D:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1416341D: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163435; /* 0x14163420: je 0x14163435 */
L_14163422:
    eax = MEM32(edi + 0x50); /* 0x14163422: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x14163425: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1416342A: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141633F0; /* 0x1416342D: je 0x141633f0 */
L_1416342F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0xC8); /* 0x1416342F: add edx, dword ptr [edi + 0xc8] */
    _flag_k = FK_ADD;
L_14163435:
    /* cmp esi, edx */ /* 0x14163435: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141633F0; /* 0x14163437: jne 0x141633f0 */
L_14163439:
    /* test ecx, ecx */ /* 0x14163439: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141633D0; /* 0x1416343B: jne 0x141633d0 */
L_1416343D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1416343D: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x14163440: pop edi */
    esi = POP32_VAL(esp); /* 0x14163441: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163442: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x14163444: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x14163446: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14163447: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416344C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416344E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1416344F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14163460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163460u);

L_14163460:
    edi = edi; /* 0x14163460: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163462: push ebp */
    ebp = esp; /* 0x14163463: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x14163465: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163468: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416346D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1416346F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x14163472: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x14163474: push ebx */
    PUSH32(esp, esi); /* 0x14163475: push esi */
    PUSH32(esp, edi); /* 0x14163476: push edi */
    PUSH32(esp, 0); /* 0x14163477: push 0 */
    ebx = edx; /* 0x14163479: mov ebx, edx */
    PUSH32(esp, 0); /* 0x1416347B: push 0 */
    edx = ebp + (-0x54); /* 0x1416347D: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x14163480: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163481: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163484: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x1416348A: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416348F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141634C0; /* 0x14163491: js 0x141634c0 */
L_14163493:
    edi = ebp + (-0x2C); /* 0x14163493: lea edi, [ebp - 0x2c] */
    RECOMP_CALL(sub_14163190); /* 0x14163496: call 0x14163190 */
    RECOMP_FLAGS_IN();
    ecx = 0x14u; /* 0x1416349B: mov ecx, 0x14 */
L_141634A0:
    edi = MEM32(ebp + ecx + (-0x30)); /* 0x141634A0: mov edi, dword ptr [ebp + ecx - 0x30] */
    ebx = MEM32(ebp + ecx + (-0x58)); /* 0x141634A4: mov ebx, dword ptr [ebp + ecx - 0x58] */
    edx = MEM32(ebp + ecx + (-0x1C)); /* 0x141634A8: mov edx, dword ptr [ebp + ecx - 0x1c] */
    esi = MEM32(ebp + ecx + (-0x44)); /* 0x141634AC: mov esi, dword ptr [ebp + ecx - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x141634B0: sub ecx, 4 */
    _flag_k = FK_CMP;
    /* cmp ebx, edi */ /* 0x141634B3: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141634D3; /* 0x141634B5: jne 0x141634d3 */
L_141634B7:
    /* cmp esi, edx */ /* 0x141634B7: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141634B9: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x141634BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163507; /* 0x141634BE: jne 0x14163507 */
L_141634C0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141634C0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x141634C2: pop edi */
    esi = POP32_VAL(esp); /* 0x141634C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x141634C4: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x141634C5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141634C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141634CA: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141634CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141634D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141634D2: ret  */
L_141634D3:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x141634D3: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141634EB; /* 0x141634D6: je 0x141634eb */
L_141634D8:
    eax = MEM32(ebx + 0x50); /* 0x141634D8: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141634DB: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141634E0: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141634C0; /* 0x141634E3: je 0x141634c0 */
L_141634E5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC8); /* 0x141634E5: add esi, dword ptr [ebx + 0xc8] */
    _flag_k = FK_ADD;
L_141634EB:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141634EB: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163503; /* 0x141634EE: je 0x14163503 */
L_141634F0:
    eax = MEM32(edi + 0x50); /* 0x141634F0: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141634F3: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141634F8: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141634C0; /* 0x141634FB: je 0x141634c0 */
L_141634FD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0xC8); /* 0x141634FD: add edx, dword ptr [edi + 0xc8] */
    _flag_k = FK_ADD;
L_14163503:
    /* cmp esi, edx */ /* 0x14163503: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141634C0; /* 0x14163505: jne 0x141634c0 */
L_14163507:
    /* test ecx, ecx */ /* 0x14163507: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141634A0; /* 0x14163509: jne 0x141634a0 */
L_1416350B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1416350B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1416350E: pop edi */
    esi = POP32_VAL(esp); /* 0x1416350F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163510: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x14163512: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x14163514: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14163515: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416351A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416351C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416351D: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163530u);

L_14163530:
    edi = edi; /* 0x14163530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163532: push ebp */
    ebp = esp; /* 0x14163533: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x14163535: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163538: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416353D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1416353F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x14163542: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x14163544: push ebx */
    PUSH32(esp, esi); /* 0x14163545: push esi */
    PUSH32(esp, edi); /* 0x14163546: push edi */
    PUSH32(esp, 0); /* 0x14163547: push 0 */
    esi = edx; /* 0x14163549: mov esi, edx */
    PUSH32(esp, 0); /* 0x1416354B: push 0 */
    edx = ebp + (-0x54); /* 0x1416354D: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x14163550: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163551: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163554: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x1416355A: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416355F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141635A4; /* 0x14163561: js 0x141635a4 */
L_14163563:
    eax = MEM32(esi); /* 0x14163563: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x14163565: push 0 */
    PUSH32(esp, 0); /* 0x14163567: push 0 */
    ecx = ebp + (-0x2C); /* 0x14163569: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1416356C: push ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1416356D: push dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163570: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x14163576: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416357B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141635A4; /* 0x1416357D: js 0x141635a4 */
L_1416357F:
    ecx = 0x14u; /* 0x1416357F: mov ecx, 0x14 */
L_14163584:
    edi = MEM32(ebp + ecx + (-0x30)); /* 0x14163584: mov edi, dword ptr [ebp + ecx - 0x30] */
    ebx = MEM32(ebp + ecx + (-0x58)); /* 0x14163588: mov ebx, dword ptr [ebp + ecx - 0x58] */
    edx = MEM32(ebp + ecx + (-0x1C)); /* 0x1416358C: mov edx, dword ptr [ebp + ecx - 0x1c] */
    esi = MEM32(ebp + ecx + (-0x44)); /* 0x14163590: mov esi, dword ptr [ebp + ecx - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x14163594: sub ecx, 4 */
    _flag_k = FK_CMP;
    /* cmp ebx, edi */ /* 0x14163597: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141635B7; /* 0x14163599: jne 0x141635b7 */
L_1416359B:
    /* cmp esi, edx */ /* 0x1416359B: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1416359D: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x141635A0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141635EB; /* 0x141635A2: jne 0x141635eb */
L_141635A4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141635A4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x141635A6: pop edi */
    esi = POP32_VAL(esp); /* 0x141635A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x141635A8: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x141635A9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141635AC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141635AE: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141635B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141635B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141635B6: ret  */
L_141635B7:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x141635B7: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141635CF; /* 0x141635BA: je 0x141635cf */
L_141635BC:
    eax = MEM32(ebx + 0x50); /* 0x141635BC: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141635BF: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141635C4: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141635A4; /* 0x141635C7: je 0x141635a4 */
L_141635C9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC8); /* 0x141635C9: add esi, dword ptr [ebx + 0xc8] */
    _flag_k = FK_ADD;
L_141635CF:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141635CF: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141635E7; /* 0x141635D2: je 0x141635e7 */
L_141635D4:
    eax = MEM32(edi + 0x50); /* 0x141635D4: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x141635D7: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141635DC: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141635A4; /* 0x141635DF: je 0x141635a4 */
L_141635E1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xC8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0xC8); /* 0x141635E1: add edx, dword ptr [edi + 0xc8] */
    _flag_k = FK_ADD;
L_141635E7:
    /* cmp esi, edx */ /* 0x141635E7: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141635A4; /* 0x141635E9: jne 0x141635a4 */
L_141635EB:
    /* test ecx, ecx */ /* 0x141635EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163584; /* 0x141635ED: jne 0x14163584 */
L_141635EF:
    ecx = MEM32(ebp + (-0x4)); /* 0x141635EF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141635F2: pop edi */
    esi = POP32_VAL(esp); /* 0x141635F3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141635F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x141635F6: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x141635F8: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141635F9: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141635FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163600: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163601: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163610u);

L_14163610:
    edi = edi; /* 0x14163610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163612: push ebp */
    ebp = esp; /* 0x14163613: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x14163615: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163618: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416361D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1416361F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x14163622: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x14163624: push esi */
    PUSH32(esp, 0); /* 0x14163625: push 0 */
    esi = edx; /* 0x14163627: mov esi, edx */
    PUSH32(esp, 0); /* 0x14163629: push 0 */
    edx = ebp + (-0x54); /* 0x1416362B: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x1416362E: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1416362F: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163632: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x14163638: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416363D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14163697; /* 0x1416363F: js 0x14163697 */
L_14163641:
    eax = MEM32(esi); /* 0x14163641: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x14163643: push 0 */
    PUSH32(esp, 0); /* 0x14163645: push 0 */
    ecx = ebp + (-0x2C); /* 0x14163647: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1416364A: push ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1416364B: push dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x98); /* 0x1416364E: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x14163654: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14163697; /* 0x1416365B: js 0x14163697 */
L_1416365D:
    esi = 0x14u; /* 0x1416365D: mov esi, 0x14 */
L_14163662:
    PUSH32(esp, 1); /* 0x14163662: push 1 */
    PUSH32(esp, 1); /* 0x14163664: push 1 */
    PUSH32(esp, MEM32(ebp + esi + (-0x30))); /* 0x14163666: push dword ptr [ebp + esi - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x1416366A: sub esi, 4 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + esi + (-0x54))); /* 0x1416366D: push dword ptr [ebp + esi - 0x54] */
    PUSH32(esp, MEM32(ebp + esi + (-0x18))); /* 0x14163671: push dword ptr [ebp + esi - 0x18] */
    PUSH32(esp, MEM32(ebp + esi + (-0x40))); /* 0x14163675: push dword ptr [ebp + esi - 0x40] */
    RECOMP_CALL(sub_141617B0); /* 0x14163679: call 0x141617b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1416367E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163697; /* 0x14163680: je 0x14163697 */
L_14163682:
    /* test esi, esi */ /* 0x14163682: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163662; /* 0x14163684: jne 0x14163662 */
L_14163686:
    SET_LO8(eax, 1); /* 0x14163686: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x14163688: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x14163689: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1416368C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x1416368E: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14163693: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163695: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163696: ret  */
L_14163697:
    ecx = MEM32(ebp + (-0x4)); /* 0x14163697: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1416369A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1416369C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x1416369E: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x1416369F: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141636A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141636A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141636A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_141636B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141636B0u);

L_141636B0:
    edi = edi; /* 0x141636B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141636B2: push ebp */
    ebp = esp; /* 0x141636B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x141636B5: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141636B8: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141636BD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x141636BF: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx); /* 0x141636C2: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x141636C4: push esi */
    PUSH32(esp, edi); /* 0x141636C5: push edi */
    PUSH32(esp, 0); /* 0x141636C6: push 0 */
    esi = edx; /* 0x141636C8: mov esi, edx */
    PUSH32(esp, 0); /* 0x141636CA: push 0 */
    edx = ebp + (-0x58); /* 0x141636CC: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x141636CF: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141636D0: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x141636D3: mov ecx, dword ptr [eax + 0x98] */
    MEM32(ebp + (-0x5C)) = 0xFFFFFFFFu; /* 0x141636D9: mov dword ptr [ebp - 0x5c], 0xffffffff */
    RECOMP_CALL(sub_141508E0); /* 0x141636E0: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141636E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416374B; /* 0x141636E7: js 0x1416374b */
L_141636E9:
    eax = ebp + (-0x5C); /* 0x141636E9: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x141636EC: push eax */
    PUSH32(esp, 0); /* 0x141636ED: push 0 */
    eax = ebp + (-0x30); /* 0x141636EF: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x141636F2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141636F3: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x141636F6: mov ecx, esi */
    RECOMP_CALL(sub_141508E0); /* 0x141636F8: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141636FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416374B; /* 0x141636FF: js 0x1416374b */
L_14163701:
    edi = MEM32(ebp + (-0x5C)); /* 0x14163701: mov edi, dword ptr [ebp - 0x5c] */
    esi = 0x14u; /* 0x14163704: mov esi, 0x14 */
    esp = esp; /* 0x14163709: lea esp, [esp] */
L_14163710:
    eax = MEM32(edi + 0x60); /* 0x14163710: mov eax, dword ptr [edi + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x14163713: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6000u);
    ecx = ecx & 0x6000u; /* 0x14163716: and ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416371C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x1416371E: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x14163721: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163729; /* 0x14163723: je 0x14163729 */
L_14163725:
    SET_LO8(eax, 1); /* 0x14163725: mov al, 1 */
    goto L_1416372B; /* 0x14163727: jmp 0x1416372b */
L_14163729:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14163729: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1416372B:
    PUSH32(esp, eax); /* 0x1416372B: push eax */
    PUSH32(esp, 1); /* 0x1416372C: push 1 */
    PUSH32(esp, MEM32(ebp + esi + (-0x30))); /* 0x1416372E: push dword ptr [ebp + esi - 0x30] */
    PUSH32(esp, MEM32(ebp + esi + (-0x58))); /* 0x14163732: push dword ptr [ebp + esi - 0x58] */
    PUSH32(esp, MEM32(ebp + esi + (-0x1C))); /* 0x14163736: push dword ptr [ebp + esi - 0x1c] */
    PUSH32(esp, MEM32(ebp + esi + (-0x44))); /* 0x1416373A: push dword ptr [ebp + esi - 0x44] */
    RECOMP_CALL(sub_14161A80); /* 0x1416373E: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14163743: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416375F; /* 0x14163745: jne 0x1416375f */
L_14163747:
    /* test esi, esi */ /* 0x14163747: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163710; /* 0x14163749: jne 0x14163710 */
L_1416374B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1416374B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x1416374D: pop edi */
    esi = POP32_VAL(esp); /* 0x1416374E: pop esi */
    ecx = MEM32(ebp + (-0x8)); /* 0x1416374F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163752: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x14163754: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14163759: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416375B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1416375C: ret 4 */
L_1416375F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1416375F: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x14163762: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163763: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x14163765: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x14163767: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x14163768: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416376D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416376F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14163770: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14163780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163780u);

L_14163780:
    edi = edi; /* 0x14163780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163782: push ebp */
    ebp = esp; /* 0x14163783: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x14163785: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163788: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416378D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1416378F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x14163792: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x14163794: push ebx */
    PUSH32(esp, esi); /* 0x14163795: push esi */
    PUSH32(esp, edi); /* 0x14163796: push edi */
    PUSH32(esp, 0); /* 0x14163797: push 0 */
    ebx = edx; /* 0x14163799: mov ebx, edx */
    PUSH32(esp, 0); /* 0x1416379B: push 0 */
    edx = ebp + (-0x54); /* 0x1416379D: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x141637A0: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141637A1: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x141637A4: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x141637AA: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141637AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141637FB; /* 0x141637B1: js 0x141637fb */
L_141637B3:
    edi = ebp + (-0x2C); /* 0x141637B3: lea edi, [ebp - 0x2c] */
    RECOMP_CALL(sub_14163190); /* 0x141637B6: call 0x14163190 */
    RECOMP_FLAGS_IN();
    esi = 0x14u; /* 0x141637BB: mov esi, 0x14 */
L_141637C0:
    eax = MEM32(ebx + 0x60); /* 0x141637C0: mov eax, dword ptr [ebx + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x141637C3: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6000u);
    ecx = ecx & 0x6000u; /* 0x141637C6: and ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141637CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x141637CE: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141637D1: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141637D9; /* 0x141637D3: je 0x141637d9 */
L_141637D5:
    SET_LO8(eax, 1); /* 0x141637D5: mov al, 1 */
    goto L_141637DB; /* 0x141637D7: jmp 0x141637db */
L_141637D9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141637D9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_141637DB:
    PUSH32(esp, eax); /* 0x141637DB: push eax */
    PUSH32(esp, 1); /* 0x141637DC: push 1 */
    PUSH32(esp, MEM32(ebp + esi + (-0x2C))); /* 0x141637DE: push dword ptr [ebp + esi - 0x2c] */
    PUSH32(esp, MEM32(ebp + esi + (-0x54))); /* 0x141637E2: push dword ptr [ebp + esi - 0x54] */
    PUSH32(esp, MEM32(ebp + esi + (-0x18))); /* 0x141637E6: push dword ptr [ebp + esi - 0x18] */
    PUSH32(esp, MEM32(ebp + esi + (-0x40))); /* 0x141637EA: push dword ptr [ebp + esi - 0x40] */
    RECOMP_CALL(sub_14161A80); /* 0x141637EE: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141637F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416380E; /* 0x141637F5: jne 0x1416380e */
L_141637F7:
    /* test esi, esi */ /* 0x141637F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141637C0; /* 0x141637F9: jne 0x141637c0 */
L_141637FB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141637FB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x141637FD: pop edi */
    esi = POP32_VAL(esp); /* 0x141637FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x141637FF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x14163800: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163803: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x14163805: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416380A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416380C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416380D: ret  */
L_1416380E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1416380E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x14163811: pop edi */
    esi = POP32_VAL(esp); /* 0x14163812: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14163813: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x14163815: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x14163817: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14163818: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416381D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416381F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163820: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163830u);

L_14163830:
    edi = edi; /* 0x14163830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163832: push ebp */
    ebp = esp; /* 0x14163833: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x14163835: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14163838: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1416383D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1416383F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x14163842: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x14163844: push esi */
    PUSH32(esp, edi); /* 0x14163845: push edi */
    esi = edx; /* 0x14163846: mov esi, edx */
    edx = ebp + (-0x58); /* 0x14163848: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1416384B: push edx */
    PUSH32(esp, 0); /* 0x1416384C: push 0 */
    edx = ebp + (-0x54); /* 0x1416384E: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x14163851: push edx */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163852: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163855: mov ecx, dword ptr [eax + 0x98] */
    MEM32(ebp + (-0x58)) = 0xFFFFFFFFu; /* 0x1416385B: mov dword ptr [ebp - 0x58], 0xffffffff */
    RECOMP_CALL(sub_141508E0); /* 0x14163862: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163867: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141638CB; /* 0x14163869: js 0x141638cb */
L_1416386B:
    eax = MEM32(esi); /* 0x1416386B: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1416386D: push 0 */
    PUSH32(esp, 0); /* 0x1416386F: push 0 */
    ecx = ebp + (-0x2C); /* 0x14163871: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x14163874: push ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x14163875: push dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163878: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x1416387E: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163883: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141638CB; /* 0x14163885: js 0x141638cb */
L_14163887:
    edi = MEM32(ebp + (-0x58)); /* 0x14163887: mov edi, dword ptr [ebp - 0x58] */
    esi = 0x14u; /* 0x1416388A: mov esi, 0x14 */
    /* nop */ /* 0x1416388F: nop  */
L_14163890:
    eax = MEM32(edi + 0x60); /* 0x14163890: mov eax, dword ptr [edi + 0x60] */
    ecx = MEM32(eax + 0xC); /* 0x14163893: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6000u);
    ecx = ecx & 0x6000u; /* 0x14163896: and ecx, 0x6000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416389C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x1416389E: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141638A1: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141638A9; /* 0x141638A3: je 0x141638a9 */
L_141638A5:
    SET_LO8(eax, 1); /* 0x141638A5: mov al, 1 */
    goto L_141638AB; /* 0x141638A7: jmp 0x141638ab */
L_141638A9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141638A9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_141638AB:
    PUSH32(esp, eax); /* 0x141638AB: push eax */
    PUSH32(esp, 1); /* 0x141638AC: push 1 */
    PUSH32(esp, MEM32(ebp + esi + (-0x2C))); /* 0x141638AE: push dword ptr [ebp + esi - 0x2c] */
    PUSH32(esp, MEM32(ebp + esi + (-0x54))); /* 0x141638B2: push dword ptr [ebp + esi - 0x54] */
    PUSH32(esp, MEM32(ebp + esi + (-0x18))); /* 0x141638B6: push dword ptr [ebp + esi - 0x18] */
    PUSH32(esp, MEM32(ebp + esi + (-0x40))); /* 0x141638BA: push dword ptr [ebp + esi - 0x40] */
    RECOMP_CALL(sub_14161A80); /* 0x141638BE: call 0x14161a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141638C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141638DD; /* 0x141638C5: jne 0x141638dd */
L_141638C7:
    /* test esi, esi */ /* 0x141638C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163890; /* 0x141638C9: jne 0x14163890 */
L_141638CB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141638CB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x141638CD: pop edi */
    esi = POP32_VAL(esp); /* 0x141638CE: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x141638CF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141638D2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141638D4: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141638D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141638DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141638DC: ret  */
L_141638DD:
    ecx = MEM32(ebp + (-0x4)); /* 0x141638DD: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141638E0: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141638E1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x141638E3: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x141638E5: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x141638E6: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141638EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141638ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141638EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163900u);

L_14163900:
    edi = edi; /* 0x14163900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163902: push ebp */
    ebp = esp; /* 0x14163903: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x14163905: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x14163908: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x1416390B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x14163910: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x54) = eax; /* 0x14163912: mov dword ptr [esp + 0x54], eax */
    eax = MEM32(ebp + 0x8); /* 0x14163916: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x14163919: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, 4 */ /* 0x1416391C: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141639A8; /* 0x1416391F: ja 0x141639a8 */
L_14163925:
    /* cmp MEM32(esi + 0x4), 4 */ /* 0x14163925: cmp dword ptr [esi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141639A8; /* 0x14163929: ja 0x141639a8 */
L_1416392B:
    eax = MEM32(eax); /* 0x1416392B: mov eax, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1416392D: push 0 */
    PUSH32(esp, 0); /* 0x1416392F: push 0 */
    edx = esp + 0xC; /* 0x14163931: lea edx, [esp + 0xc] */
    PUSH32(esp, edx); /* 0x14163935: push edx */
    PUSH32(esp, ecx); /* 0x14163936: push ecx */
    ecx = MEM32(eax + 0x98); /* 0x14163937: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x1416393D: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163942: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141639A8; /* 0x14163944: js 0x141639a8 */
L_14163946:
    eax = MEM32(esi); /* 0x14163946: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x14163948: push 0 */
    PUSH32(esp, 0); /* 0x1416394A: push 0 */
    ecx = esp + 0x34; /* 0x1416394C: lea ecx, [esp + 0x34] */
    PUSH32(esp, ecx); /* 0x14163950: push ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x14163951: push dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163954: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x1416395A: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416395F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141639A8; /* 0x14163961: js 0x141639a8 */
L_14163963:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14163963: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_14163965:
    eax = MEM32(esp + ecx * 4 + 0x18); /* 0x14163965: mov eax, dword ptr [esp + ecx*4 + 0x18] */
    /* cmp eax, MEM32(esp + ecx * 4 + 0x40) */ /* 0x14163969: cmp eax, dword ptr [esp + ecx*4 + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + ecx * 4 + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141639D3; /* 0x1416396D: jne 0x141639d3 */
L_1416396F:
    edx = MEM32(esp + ecx * 4 + 0x4); /* 0x1416396F: mov edx, dword ptr [esp + ecx*4 + 4] */
    eax = MEM32(esp + ecx * 4 + 0x2C); /* 0x14163973: mov eax, dword ptr [esp + ecx*4 + 0x2c] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14163977: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163995; /* 0x1416397A: jne 0x14163995 */
L_1416397C:
    /* cmp eax, edx */ /* 0x1416397C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141639A2; /* 0x1416397E: je 0x141639a2 */
L_14163980:
    _flag_a = (uint32_t)((edx | edx)); _flag_b = (uint32_t)((edx | edx));
    edx = edx | edx; /* 0x14163980: or edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x14163982: mov eax, edx */
    ecx = MEM32(esp + 0x54); /* 0x14163984: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x14163988: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x1416398A: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1416398F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163991: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14163992: ret 4 */
L_14163995:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14163995: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141639BB; /* 0x14163998: je 0x141639bb */
L_1416399A:
    edx = MEM32(edx + 0x58); /* 0x1416399A: mov edx, dword ptr [edx + 0x58] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x58); /* 0x1416399D: sub edx, dword ptr [eax + 0x58] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_141639C0; /* 0x141639A0: jne 0x141639c0 */
L_141639A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141639A2: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 5 */ /* 0x141639A3: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14163965; /* 0x141639A6: jb 0x14163965 */
L_141639A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141639A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x54); /* 0x141639AA: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x141639AE: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141639B0: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141639B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141639B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141639B8: ret 4 */
L_141639BB:
    edx = 1; /* 0x141639BB: mov edx, 1 */
L_141639C0:
    eax = edx; /* 0x141639C0: mov eax, edx */
    ecx = MEM32(esp + 0x54); /* 0x141639C2: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x141639C6: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141639C8: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141639CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141639CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141639D0: ret 4 */
L_141639D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141639D3: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x141639D5: add ecx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(esp + ecx + 0x18); /* 0x141639D7: mov eax, dword ptr [esp + ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + ecx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + ecx + 0x40); /* 0x141639DB: sub eax, dword ptr [esp + ecx + 0x40] */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0x54); /* 0x141639DF: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x141639E3: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141639E5: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x141639EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141639EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141639ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14163A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163A00u);

L_14163A00:
    edi = edi; /* 0x14163A00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163A02: push ebp */
    ebp = esp; /* 0x14163A03: mov ebp, esp */
    eax = MEM32(ecx); /* 0x14163A05: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14163A07: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x14163A0A: push 0 */
    edx = ebp + (-0x8); /* 0x14163A0C: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x14163A0F: push edx */
    PUSH32(esp, 0); /* 0x14163A10: push 0 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14163A12: push dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x98); /* 0x14163A15: mov ecx, dword ptr [eax + 0x98] */
    RECOMP_CALL(sub_141508E0); /* 0x14163A1B: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163A20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14163A6F; /* 0x14163A22: js 0x14163a6f */
L_14163A24:
    eax = MEM32(esi); /* 0x14163A24: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x14163A26: push 0 */
    ecx = ebp + (-0x4); /* 0x14163A28: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x14163A2B: push ecx */
    ecx = MEM32(eax + 0x98); /* 0x14163A2C: mov ecx, dword ptr [eax + 0x98] */
    PUSH32(esp, 0); /* 0x14163A32: push 0 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x14163A34: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_141508E0); /* 0x14163A37: call 0x141508e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163A3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14163A6F; /* 0x14163A3E: js 0x14163a6f */
L_14163A40:
    eax = MEM32(ebp + (-0x8)); /* 0x14163A40: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14163A43: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163A54; /* 0x14163A46: jne 0x14163a54 */
L_14163A48:
    eax = MEM32(ebp + (-0x4)); /* 0x14163A48: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14163A4B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14163A4C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14163A4E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = ebp; /* 0x14163A50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163A52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163A53: ret  */
L_14163A54:
    ecx = MEM32(ebp + (-0x4)); /* 0x14163A54: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14163A57: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163A65; /* 0x14163A5A: jne 0x14163a65 */
L_14163A5C:
    eax = 1; /* 0x14163A5C: mov eax, 1 */
    esp = ebp; /* 0x14163A61: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163A63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163A64: ret  */
L_14163A65:
    eax = MEM32(eax + 0x58); /* 0x14163A65: mov eax, dword ptr [eax + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x58); /* 0x14163A68: sub eax, dword ptr [ecx + 0x58] */
    _flag_k = FK_CMP;
    esp = ebp; /* 0x14163A6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163A6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163A6E: ret  */
L_14163A6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163A6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x14163A71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163A73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163A74: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163A80u);

L_14163A80:
    edi = edi; /* 0x14163A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163A82: push ebp */
    ebp = esp; /* 0x14163A83: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x14163A85: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14163A88: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163A8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu */ /* 0x14163A8D: cmp dword ptr [ebp + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14163A91: push ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14163A92: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14163A95: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14163A97: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x14163A9A: sete cl */
    PUSH32(esp, esi); /* 0x14163A9D: push esi */
    PUSH32(esp, edi); /* 0x14163A9E: push edi */
    /* cmp ecx, eax */ /* 0x14163A9F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163AAE; /* 0x14163AA1: je 0x14163aae */
L_14163AA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x14163AA3: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x14163AA5: pop edi */
    esi = POP32_VAL(esp); /* 0x14163AA6: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163AA7: pop ebx */
    esp = ebp; /* 0x14163AA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163AAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163AAB: ret 0x1c */
L_14163AAE:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14163AAE: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163B39; /* 0x14163AB1: jne 0x14163b39 */
L_14163AB7:
    edx = MEM32(ebp + 0x14); /* 0x14163AB7: mov edx, dword ptr [ebp + 0x14] */
    edi = MEM32(edx + 0x50); /* 0x14163ABA: mov edi, dword ptr [edx + 0x50] */
    eax = MEM32(edx + 0x54); /* 0x14163ABD: mov eax, dword ptr [edx + 0x54] */
    ebx = MEM32(ebp + 0x8); /* 0x14163AC0: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebx + 0x50); /* 0x14163AC3: mov esi, dword ptr [ebx + 0x50] */
    if (1) _cf = (((edi) >> 17) & 1u); /* 0x14163AC6: shrd edi, eax, 0x12 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (18u)) | ((uint32_t)(eax) << (32 - (18u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (18u)) | ((uint32_t)(eax) << (32 - (18u)))) : (edi));
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x14163ACA: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x14163ACA: shr eax, 0x12 */
    MEM32(ebp + (-0x4)) = eax; /* 0x14163ACD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x54); /* 0x14163AD0: mov eax, dword ptr [ebx + 0x54] */
    if (1) _cf = (((esi) >> 17) & 1u); /* 0x14163AD3: shrd esi, eax, 0x12 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((esi) >> (18u)) | ((uint32_t)(eax) << (32 - (18u)))) : (esi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = ((1) ? (((esi) >> (18u)) | ((uint32_t)(eax) << (32 - (18u)))) : (esi));
    ecx = esi; /* 0x14163AD7: mov ecx, esi */
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x14163AD9: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x14163ADB: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x14163ADB: shr eax, 0x12 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14163ADE: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14163AE1: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14163AE4: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163AFC; /* 0x14163AE7: je 0x14163afc */
L_14163AE9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x14163AE9: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi & 1; /* 0x14163AEC: and edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x14163AEF: sub esi, edi */
    _flag_k = FK_CMP;
    eax = esi; /* 0x14163AF1: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x14163AF3: pop edi */
    esi = POP32_VAL(esp); /* 0x14163AF4: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163AF5: pop ebx */
    esp = ebp; /* 0x14163AF6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163AF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163AF9: ret 0x1c */
L_14163AFC:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x14163AFC: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163B11; /* 0x14163AFF: jne 0x14163b11 */
L_14163B01:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x14163B01: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x14163B02: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14163B04: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edx; /* 0x14163B06: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x14163B08: pop edi */
    esi = POP32_VAL(esp); /* 0x14163B09: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163B0A: pop ebx */
    esp = ebp; /* 0x14163B0B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163B0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163B0E: ret 0x1c */
L_14163B11:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14163B11: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163B26; /* 0x14163B14: jne 0x14163b26 */
L_14163B16:
    edx = 1; /* 0x14163B16: mov edx, 1 */
    eax = edx; /* 0x14163B1B: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x14163B1D: pop edi */
    esi = POP32_VAL(esp); /* 0x14163B1E: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163B1F: pop ebx */
    esp = ebp; /* 0x14163B20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163B22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163B23: ret 0x1c */
L_14163B26:
    ecx = MEM32(ebx + 0x58); /* 0x14163B26: mov ecx, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x58); /* 0x14163B29: sub ecx, dword ptr [edx + 0x58] */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x14163B2C: mov edx, ecx */
    eax = edx; /* 0x14163B2E: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x14163B30: pop edi */
    esi = POP32_VAL(esp); /* 0x14163B31: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163B32: pop ebx */
    esp = ebp; /* 0x14163B33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163B35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163B36: ret 0x1c */
L_14163B39:
    eax = ebp + 0x8; /* 0x14163B39: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x14163B3C: push eax */
    esi = ebp + 0x14; /* 0x14163B3D: lea esi, [ebp + 0x14] */
    RECOMP_CALL(sub_14163900); /* 0x14163B40: call 0x14163900 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163B45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163B5B; /* 0x14163B47: jne 0x14163b5b */
L_14163B49:
    ecx = ebp + 0x8; /* 0x14163B49: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_14163A00); /* 0x14163B4C: call 0x14163a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14163B51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163B5B; /* 0x14163B53: jne 0x14163b5b */
L_14163B55:
    eax = MEM32(ebp + 0xC); /* 0x14163B55: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x18); /* 0x14163B58: sub eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_CMP;
L_14163B5B:
    edi = POP32_VAL(esp); /* 0x14163B5B: pop edi */
    esi = POP32_VAL(esp); /* 0x14163B5C: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163B5D: pop ebx */
    esp = ebp; /* 0x14163B5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163B60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14163B61: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_14163BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163BB0u);

L_14163BB0:
    /* test esi, esi */ /* 0x14163BB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163BF9; /* 0x14163BB2: je 0x14163bf9 */
L_14163BB4:
    eax = MEM32(0x141F3DEC); /* 0x14163BB4: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, edi); /* 0x14163BB9: push edi */
    /* test eax, eax */ /* 0x14163BBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163BC2; /* 0x14163BBC: jns 0x14163bc2 */
L_14163BBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14163BBE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163BCB; /* 0x14163BC0: jmp 0x14163bcb */
L_14163BC2:
    PUSH32(esp, eax); /* 0x14163BC2: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163BC3: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14163BC9: mov edi, eax */
L_14163BCB:
    PUSH32(esp, 0x108u); /* 0x14163BCB: push 0x108 */
    PUSH32(esp, 0xFEu); /* 0x14163BD0: push 0xfe */
    PUSH32(esp, esi); /* 0x14163BD5: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x14163BD6: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x14163BDB: mov dword ptr [esi], 0 */
    eax = MEM32(edi + 0x10); /* 0x14163BE1: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14163BE4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14163BE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163BF2; /* 0x14163BE9: je 0x14163bf2 */
L_14163BEB:
    MEM32(eax) = esi; /* 0x14163BEB: mov dword ptr [eax], esi */
    MEM32(edi + 0x10) = esi; /* 0x14163BED: mov dword ptr [edi + 0x10], esi */
    edi = POP32_VAL(esp); /* 0x14163BF0: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163BF1: ret  */
L_14163BF2:
    MEM32(edi + 0xC) = esi; /* 0x14163BF2: mov dword ptr [edi + 0xc], esi */
    MEM32(edi + 0x10) = esi; /* 0x14163BF5: mov dword ptr [edi + 0x10], esi */
    edi = POP32_VAL(esp); /* 0x14163BF8: pop edi */
L_14163BF9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163BF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163C00u);

L_14163C00:
    edi = edi; /* 0x14163C00: mov edi, edi */
    PUSH32(esp, esi); /* 0x14163C02: push esi */
    esi = ecx; /* 0x14163C03: mov esi, ecx */
    eax = MEM32(esi + 0x60); /* 0x14163C05: mov eax, dword ptr [esi + 0x60] */
    eax = MEM32(eax + 0x8); /* 0x14163C08: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x14163C0B: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14163C0E: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163C2B; /* 0x14163C11: je 0x14163c2b */
L_14163C13:
    /* cmp MEM32(esi + 0x6C), 0xFFFFFFFFu */ /* 0x14163C13: cmp dword ptr [esi + 0x6c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163C2B; /* 0x14163C17: jne 0x14163c2b */
L_14163C19:
    /* cmp MEM32(esi + 0x68), 0xFFFFFFFFu */ /* 0x14163C19: cmp dword ptr [esi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163C2B; /* 0x14163C1D: jne 0x14163c2b */
L_14163C1F:
    eax = (uint32_t)MEM16(esi + 0xB0); /* 0x14163C1F: movzx eax, word ptr [esi + 0xb0] */
    /* cmp eax, 0x2Cu */ /* 0x14163C26: cmp eax, 0x2c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163C5B; /* 0x14163C29: je 0x14163c5b */
L_14163C2B:
    ecx = MEM32(esi + 0x6C); /* 0x14163C2B: mov ecx, dword ptr [esi + 0x6c] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14163C2E: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163C41; /* 0x14163C31: jne 0x14163c41 */
L_14163C33:
    /* cmp MEM32(esi + 0x68), ecx */ /* 0x14163C33: cmp dword ptr [esi + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14163C3C; /* 0x14163C36: jne 0x14163c3c */
L_14163C38:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x14163C38: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x14163C3A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163C3B: ret  */
L_14163C3C:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14163C3C: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163C4A; /* 0x14163C3F: je 0x14163c4a */
L_14163C41:
    RECOMP_CALL(sub_14163C00); /* 0x14163C41: call 0x14163c00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14163C46: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163C38; /* 0x14163C48: je 0x14163c38 */
L_14163C4A:
    ecx = MEM32(esi + 0x68); /* 0x14163C4A: mov ecx, dword ptr [esi + 0x68] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14163C4D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163C5B; /* 0x14163C50: je 0x14163c5b */
L_14163C52:
    RECOMP_CALL(sub_14163C00); /* 0x14163C52: call 0x14163c00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14163C57: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163C38; /* 0x14163C59: je 0x14163c38 */
L_14163C5B:
    SET_LO8(eax, 1); /* 0x14163C5B: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x14163C5D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163C5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163C70u);

L_14163C70:
    /* test ecx, ecx */ /* 0x14163C70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163C77; /* 0x14163C72: jne 0x14163c77 */
L_14163C74:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163C74: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163C76: ret  */
L_14163C77:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_14163C86; /* 0x14163C77: jns 0x14163c86 */
L_14163C79:
    /* test eax, eax */ /* 0x14163C79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163C86; /* 0x14163C7B: je 0x14163c86 */
L_14163C7D:
    PUSH32(esp, eax); /* 0x14163C7D: push eax */
    RECOMP_CALL(sub_140A4360); /* 0x14163C7E: call 0x140a4360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14163C83: add esp, 4 */
    _flag_k = FK_ADD;
L_14163C86:
    eax = ecx; /* 0x14163C86: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163C88: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163C90u);

L_14163C90:
    edi = edi; /* 0x14163C90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163C92: push ebp */
    ebp = esp; /* 0x14163C93: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x14163C95: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebp + 0x10; /* 0x14163C98: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x14163C9B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14163C9C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0xB264)); /* 0x14163C9F: push dword ptr [esi + 0xb264] */
    RECOMP_CALL(sub_141C5BE0); /* 0x14163CA5: call 0x141c5be0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0xB28C) | 1)); _flag_b = (uint32_t)((MEM32(esi + 0xB28C) | 1));
    MEM32(esi + 0xB28C) = MEM32(esi + 0xB28C) | 1; /* 0x14163CAA: or dword ptr [esi + 0xb28c], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163CB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x14163CB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163CB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163CC0u);

L_14163CC0:
    edi = edi; /* 0x14163CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163CC2: push ebp */
    ebp = esp; /* 0x14163CC3: mov ebp, esp */
    ecx = MEM32(ecx + 0xB264); /* 0x14163CC5: mov ecx, dword ptr [ecx + 0xb264] */
    eax = ebp + 0x10; /* 0x14163CCB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x14163CCE: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x14163CCF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14163CD2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141C5D70); /* 0x14163CD5: call 0x141c5d70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163CDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x14163CDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163CDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163CF0u);

L_14163CF0:
    MEM32(eax) = 0x140578B8u; /* 0x14163CF0: mov dword ptr [eax], 0x140578b8 */
    MEM32(eax + 0x4) = 0; /* 0x14163CF6: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x14163CFD: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x14163D04: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x14163D0B: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x14163D12: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x14163D19: mov dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)((MEM32(eax + 0x1C) | 7)); _flag_b = (uint32_t)((MEM32(eax + 0x1C) | 7));
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) | 7; /* 0x14163D20: or dword ptr [eax + 0x1c], 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xAFF8) = 0; /* 0x14163D24: mov dword ptr [eax + 0xaff8], 0 */
    MEM32(eax + 0xAFFC) = 0; /* 0x14163D2E: mov dword ptr [eax + 0xaffc], 0 */
    MEM32(eax + 0xB008) = 0; /* 0x14163D38: mov dword ptr [eax + 0xb008], 0 */
    MEM32(eax + 0xB000) = 0; /* 0x14163D42: mov dword ptr [eax + 0xb000], 0 */
    MEM32(eax + 0xB004) = 0; /* 0x14163D4C: mov dword ptr [eax + 0xb004], 0 */
    MEM32(eax + 0xB00C) = 0; /* 0x14163D56: mov dword ptr [eax + 0xb00c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163D60: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163D70u);

L_14163D70:
    edi = edi; /* 0x14163D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163D72: push ebp */
    ebp = esp; /* 0x14163D73: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14163D75: push esi */
    esi = ecx; /* 0x14163D76: mov esi, ecx */
    RECOMP_CALL(sub_14163DD0); /* 0x14163D78: call 0x14163dd0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x14163D7D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163DB5; /* 0x14163D81: je 0x14163db5 */
L_14163D83:
    /* test esi, esi */ /* 0x14163D83: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163DB5; /* 0x14163D85: je 0x14163db5 */
L_14163D87:
    eax = MEM32(0x141F3DEC); /* 0x14163D87: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163DA3; /* 0x14163D8E: jns 0x14163da3 */
L_14163D90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163D90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x14163D92: push esi */
    PUSH32(esp, eax); /* 0x14163D93: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x14163D94: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14163D96: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x14163D9C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x14163D9E: pop esi */
    ebp = POP32_VAL(esp); /* 0x14163D9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14163DA0: ret 4 */
L_14163DA3:
    PUSH32(esp, eax); /* 0x14163DA3: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163DA4: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14163DAA: push esi */
    PUSH32(esp, 0); /* 0x14163DAB: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163DAD: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14163DAF: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
L_14163DB5:
    eax = esi; /* 0x14163DB5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x14163DB7: pop esi */
    ebp = POP32_VAL(esp); /* 0x14163DB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14163DB9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14163DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163DD0u);

L_14163DD0:
    edi = edi; /* 0x14163DD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14163DD2: push ebp */
    ebp = esp; /* 0x14163DD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x14163DD5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14163DD8: push ebx */
    ebx = MEM32(0x14001098); /* 0x14163DD9: mov ebx, dword ptr [0x14001098] */
    PUSH32(esp, esi); /* 0x14163DDF: push esi */
    esi = MEM32(0x14001068); /* 0x14163DE0: mov esi, dword ptr [0x14001068] */
    PUSH32(esp, edi); /* 0x14163DE6: push edi */
    edi = ecx; /* 0x14163DE7: mov edi, ecx */
    /* cmp MEM32(edi + 0xB004), 0 */ /* 0x14163DE9: cmp dword ptr [edi + 0xb004], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB004)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x14163DF0: mov dword ptr [ebp - 8], edi */
    MEM32(edi) = 0x140578B8u; /* 0x14163DF3: mov dword ptr [edi], 0x140578b8 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163F04; /* 0x14163DF9: je 0x14163f04 */
L_14163DFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14163DFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x14163E01: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(edi + 0x8), ecx */ /* 0x14163E04: cmp dword ptr [edi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14163EDF; /* 0x14163E07: jbe 0x14163edf */
L_14163E0D:
    ecx = ecx; /* 0x14163E0D: lea ecx, [ecx] */
L_14163E10:
    eax = MEM32(edi + 0xB004); /* 0x14163E10: mov eax, dword ptr [edi + 0xb004] */
    eax = MEM32(eax + ecx * 4); /* 0x14163E16: mov eax, dword ptr [eax + ecx*4] */
    edi = MEM32(eax + 0x28); /* 0x14163E19: mov edi, dword ptr [eax + 0x28] */
    ebx = eax + 0x28; /* 0x14163E1C: lea ebx, [eax + 0x28] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14163E1F: mov dword ptr [ebp - 0xc], eax */
    /* test edi, edi */ /* 0x14163E22: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163E93; /* 0x14163E24: je 0x14163e93 */
L_14163E26:
    ecx = MEM32(edi + 0x4); /* 0x14163E26: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(edi); /* 0x14163E29: mov eax, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x14163E2B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163E33; /* 0x14163E2D: je 0x14163e33 */
L_14163E2F:
    MEM32(ecx) = eax; /* 0x14163E2F: mov dword ptr [ecx], eax */
    goto L_14163E35; /* 0x14163E31: jmp 0x14163e35 */
L_14163E33:
    MEM32(ebx) = eax; /* 0x14163E33: mov dword ptr [ebx], eax */
L_14163E35:
    ecx = MEM32(edi); /* 0x14163E35: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + 0x4); /* 0x14163E37: mov eax, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x14163E3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163E43; /* 0x14163E3C: je 0x14163e43 */
L_14163E3E:
    MEM32(ecx + 0x4) = eax; /* 0x14163E3E: mov dword ptr [ecx + 4], eax */
    goto L_14163E46; /* 0x14163E41: jmp 0x14163e46 */
L_14163E43:
    MEM32(ebx + 0x4) = eax; /* 0x14163E43: mov dword ptr [ebx + 4], eax */
L_14163E46:
    RECOMP_CALL(sub_1415EA70); /* 0x14163E46: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x14163E4B: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163E50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163E58; /* 0x14163E52: jns 0x14163e58 */
L_14163E54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14163E54: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163E5D; /* 0x14163E56: jmp 0x14163e5d */
L_14163E58:
    PUSH32(esp, eax); /* 0x14163E58: push eax */
    RECOMP_ICALL(esi); /* 0x14163E59: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14163E5B: mov esi, eax */
L_14163E5D:
    PUSH32(esp, 0x108u); /* 0x14163E5D: push 0x108 */
    PUSH32(esp, 0xFEu); /* 0x14163E62: push 0xfe */
    PUSH32(esp, edi); /* 0x14163E67: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x14163E68: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0; /* 0x14163E6D: mov dword ptr [edi], 0 */
    eax = MEM32(esi + 0x10); /* 0x14163E73: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14163E76: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14163E79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163E81; /* 0x14163E7B: je 0x14163e81 */
L_14163E7D:
    MEM32(eax) = edi; /* 0x14163E7D: mov dword ptr [eax], edi */
    goto L_14163E84; /* 0x14163E7F: jmp 0x14163e84 */
L_14163E81:
    MEM32(esi + 0xC) = edi; /* 0x14163E81: mov dword ptr [esi + 0xc], edi */
L_14163E84:
    MEM32(esi + 0x10) = edi; /* 0x14163E84: mov dword ptr [esi + 0x10], edi */
    edi = MEM32(ebx); /* 0x14163E87: mov edi, dword ptr [ebx] */
    esi = MEM32(0x14001068); /* 0x14163E89: mov esi, dword ptr [0x14001068] */
    /* test edi, edi */ /* 0x14163E8F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14163E26; /* 0x14163E91: jne 0x14163e26 */
L_14163E93:
    esi = ebx; /* 0x14163E93: mov esi, ebx */
    MEM32(ebx) = 0; /* 0x14163E95: mov dword ptr [ebx], 0 */
    MEM32(ebx + 0x4) = 0; /* 0x14163E9B: mov dword ptr [ebx + 4], 0 */
    RECOMP_CALL(sub_141909D0); /* 0x14163EA2: call 0x141909d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x14163EA7: mov eax, dword ptr [0x141f3dec] */
    esi = MEM32(0x14001068); /* 0x14163EAC: mov esi, dword ptr [0x14001068] */
    /* test eax, eax */ /* 0x14163EB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163EBA; /* 0x14163EB4: jns 0x14163eba */
L_14163EB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163EB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163EBD; /* 0x14163EB8: jmp 0x14163ebd */
L_14163EBA:
    PUSH32(esp, eax); /* 0x14163EBA: push eax */
    RECOMP_ICALL(esi); /* 0x14163EBB: call esi */
    RECOMP_FLAGS_IN();
L_14163EBD:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x14163EBD: push dword ptr [ebp - 0xc] */
    ebx = MEM32(0x14001098); /* 0x14163EC0: mov ebx, dword ptr [0x14001098] */
    PUSH32(esp, 0); /* 0x14163EC6: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163EC8: push dword ptr [eax] */
    RECOMP_ICALL(ebx); /* 0x14163ECA: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x14163ECC: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x14163ECF: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14163ED2: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x14163ED3: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, MEM32(edi + 0x8) */ /* 0x14163ED6: cmp ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14163E10; /* 0x14163ED9: jb 0x14163e10 */
L_14163EDF:
    esi = MEM32(edi + 0xB004); /* 0x14163EDF: mov esi, dword ptr [edi + 0xb004] */
    /* test esi, esi */ /* 0x14163EE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163F04; /* 0x14163EE7: je 0x14163f04 */
L_14163EE9:
    eax = MEM32(0x141F3DEC); /* 0x14163EE9: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163EEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163EF6; /* 0x14163EF0: jns 0x14163ef6 */
L_14163EF2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163EF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163EFD; /* 0x14163EF4: jmp 0x14163efd */
L_14163EF6:
    PUSH32(esp, eax); /* 0x14163EF6: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163EF7: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14163EFD:
    PUSH32(esp, esi); /* 0x14163EFD: push esi */
    PUSH32(esp, 0); /* 0x14163EFE: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163F00: push dword ptr [eax] */
    RECOMP_ICALL(ebx); /* 0x14163F02: call ebx */
    RECOMP_FLAGS_IN();
L_14163F04:
    /* cmp MEM32(edi + 0xAFFC), 0 */ /* 0x14163F04: cmp dword ptr [edi + 0xaffc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xAFFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14163FBB; /* 0x14163F0B: je 0x14163fbb */
L_14163F11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14163F11: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), esi */ /* 0x14163F13: cmp dword ptr [edi + 4], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14163F92; /* 0x14163F16: jbe 0x14163f92 */
L_14163F18:
    goto L_14163F20; /* 0x14163F18: jmp 0x14163f20 */
L_14163F20:
    eax = MEM32(edi + 0xAFFC); /* 0x14163F20: mov eax, dword ptr [edi + 0xaffc] */
    ebx = MEM32(eax + esi * 4); /* 0x14163F26: mov ebx, dword ptr [eax + esi*4] */
    /* test ebx, ebx */ /* 0x14163F29: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163F8C; /* 0x14163F2B: je 0x14163f8c */
L_14163F2D:
    edi = MEM32(ebx + 0x44); /* 0x14163F2D: mov edi, dword ptr [ebx + 0x44] */
    /* test edi, edi */ /* 0x14163F30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163F68; /* 0x14163F32: je 0x14163f68 */
L_14163F34:
    RECOMP_CALL(sub_140F5A90); /* 0x14163F34: call 0x140f5a90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x14163F39: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163F3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163F52; /* 0x14163F40: jns 0x14163f52 */
L_14163F42:
    PUSH32(esp, edi); /* 0x14163F42: push edi */
    edi = MEM32(0x14001098); /* 0x14163F43: mov edi, dword ptr [0x14001098] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163F49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x14163F4B: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x14163F4C: push dword ptr [eax] */
    RECOMP_ICALL(edi); /* 0x14163F4E: call edi */
    RECOMP_FLAGS_IN();
    goto L_14163F6E; /* 0x14163F50: jmp 0x14163f6e */
L_14163F52:
    PUSH32(esp, eax); /* 0x14163F52: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163F53: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x14163F59: push edi */
    edi = MEM32(0x14001098); /* 0x14163F5A: mov edi, dword ptr [0x14001098] */
    PUSH32(esp, 0); /* 0x14163F60: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163F62: push dword ptr [eax] */
    RECOMP_ICALL(edi); /* 0x14163F64: call edi */
    RECOMP_FLAGS_IN();
    goto L_14163F6E; /* 0x14163F66: jmp 0x14163f6e */
L_14163F68:
    edi = MEM32(0x14001098); /* 0x14163F68: mov edi, dword ptr [0x14001098] */
L_14163F6E:
    eax = MEM32(0x141F3DEC); /* 0x14163F6E: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163F73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163F7B; /* 0x14163F75: jns 0x14163f7b */
L_14163F77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163F77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163F82; /* 0x14163F79: jmp 0x14163f82 */
L_14163F7B:
    PUSH32(esp, eax); /* 0x14163F7B: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163F7C: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14163F82:
    PUSH32(esp, ebx); /* 0x14163F82: push ebx */
    PUSH32(esp, 0); /* 0x14163F83: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163F85: push dword ptr [eax] */
    RECOMP_ICALL(edi); /* 0x14163F87: call edi */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x14163F89: mov edi, dword ptr [ebp - 8] */
L_14163F8C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14163F8C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x4) */ /* 0x14163F8D: cmp esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14163F20; /* 0x14163F90: jb 0x14163f20 */
L_14163F92:
    esi = MEM32(edi + 0xAFFC); /* 0x14163F92: mov esi, dword ptr [edi + 0xaffc] */
    /* test esi, esi */ /* 0x14163F98: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14163FBB; /* 0x14163F9A: je 0x14163fbb */
L_14163F9C:
    eax = MEM32(0x141F3DEC); /* 0x14163F9C: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163FA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163FA9; /* 0x14163FA3: jns 0x14163fa9 */
L_14163FA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163FA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14163FB0; /* 0x14163FA7: jmp 0x14163fb0 */
L_14163FA9:
    PUSH32(esp, eax); /* 0x14163FA9: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163FAA: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14163FB0:
    PUSH32(esp, esi); /* 0x14163FB0: push esi */
    PUSH32(esp, 0); /* 0x14163FB1: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14163FB3: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14163FB5: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
L_14163FBB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x14163FBB: add edi, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_140ACD50); /* 0x14163FBE: call 0x140acd50 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x14163FC3: pop edi */
    esi = POP32_VAL(esp); /* 0x14163FC4: pop esi */
    ebx = POP32_VAL(esp); /* 0x14163FC5: pop ebx */
    esp = ebp; /* 0x14163FC6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14163FC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163FC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163FF0u);

L_14163FF0:
    edi = edi; /* 0x14163FF0: mov edi, edi */
    PUSH32(esp, edi); /* 0x14163FF2: push edi */
    edi = MEM32(esi + 0x44); /* 0x14163FF3: mov edi, dword ptr [esi + 0x44] */
    /* test edi, edi */ /* 0x14163FF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416401E; /* 0x14163FF8: je 0x1416401e */
L_14163FFA:
    RECOMP_CALL(sub_140F5A90); /* 0x14163FFA: call 0x140f5a90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x14163FFF: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164004: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1416400C; /* 0x14164006: jns 0x1416400c */
L_14164008:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164008: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164013; /* 0x1416400A: jmp 0x14164013 */
L_1416400C:
    PUSH32(esp, eax); /* 0x1416400C: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x1416400D: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14164013:
    PUSH32(esp, edi); /* 0x14164013: push edi */
    PUSH32(esp, 0); /* 0x14164014: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164016: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14164018: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
L_1416401E:
    eax = MEM32(0x141F3DEC); /* 0x1416401E: mov eax, dword ptr [0x141f3dec] */
    edi = POP32_VAL(esp); /* 0x14164023: pop edi */
    /* test eax, eax */ /* 0x14164024: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164037; /* 0x14164026: jns 0x14164037 */
L_14164028:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164028: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1416402A: push esi */
    PUSH32(esp, eax); /* 0x1416402B: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x1416402C: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x1416402E: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x14164034: mov eax, esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14164036: ret  */
L_14164037:
    PUSH32(esp, eax); /* 0x14164037: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164038: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1416403E: push esi */
    PUSH32(esp, 0); /* 0x1416403F: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164041: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14164043: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x14164049: mov eax, esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416404B: ret  */
    RECOMP_REGS_OUT();
}

void sub_14164060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164060u);

L_14164060:
    edi = edi; /* 0x14164060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164062: push ebp */
    ebp = esp; /* 0x14164063: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x14164065: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x14164068: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1416406B: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1416406E: push ebx */
    ebx = MEM32(0x1400109C); /* 0x1416406F: mov ebx, dword ptr [0x1400109c] */
    PUSH32(esp, esi); /* 0x14164075: push esi */
    MEM32(ecx + 0x4) = 0; /* 0x14164076: mov dword ptr [ecx + 4], 0 */
    esi = MEM32(edx + 0x4); /* 0x1416407D: mov esi, dword ptr [edx + 4] */
    PUSH32(esp, edi); /* 0x14164080: push edi */
    edi = MEM32(0x14001068); /* 0x14164081: mov edi, dword ptr [0x14001068] */
    MEM32(ecx + 0xAFF8) = esi; /* 0x14164087: mov dword ptr [ecx + 0xaff8], esi */
    /* cmp esi, 0x3FFFFFFFu */ /* 0x1416408D: cmp esi, 0x3fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14164099; /* 0x14164093: jbe 0x14164099 */
L_14164095:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164095: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141640BF; /* 0x14164097: jmp 0x141640bf */
L_14164099:
    eax = MEM32(0x141F3DEC); /* 0x14164099: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x1416409E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141640A6; /* 0x141640A0: jns 0x141640a6 */
L_141640A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141640A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141640AB; /* 0x141640A4: jmp 0x141640ab */
L_141640A6:
    PUSH32(esp, eax); /* 0x141640A6: push eax */
    RECOMP_ICALL(edi); /* 0x141640A7: call edi */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141640A9: mov ecx, eax */
L_141640AB:
    eax = esi * 4; /* 0x141640AB: lea eax, [esi*4] */
    PUSH32(esp, eax); /* 0x141640B2: push eax */
    PUSH32(esp, 0); /* 0x141640B3: push 0 */
    PUSH32(esp, MEM32(ecx)); /* 0x141640B5: push dword ptr [ecx] */
    RECOMP_ICALL(ebx); /* 0x141640B7: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x141640B9: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x141640BC: mov edx, dword ptr [ebp + 0xc] */
L_141640BF:
    MEM32(ecx + 0xAFFC) = eax; /* 0x141640BF: mov dword ptr [ecx + 0xaffc], eax */
    /* test eax, eax */ /* 0x141640C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164161; /* 0x141640C7: je 0x14164161 */
L_141640CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141640CD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x4), esi */ /* 0x141640CF: cmp dword ptr [edx + 4], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14164117; /* 0x141640D2: jbe 0x14164117 */
L_141640D4:
    eax = ebp + (-0x4); /* 0x141640D4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141640D7: push eax */
    eax = MEM32(edx + 0xAFFC); /* 0x141640D8: mov eax, dword ptr [edx + 0xaffc] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x141640DE: push dword ptr [eax + esi*4] */
    eax = ecx; /* 0x141640E1: mov eax, ecx */
    RECOMP_CALL(sub_14164D60); /* 0x141640E3: call 0x14164d60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141640E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141643DF; /* 0x141640EA: js 0x141643df */
L_141640F0:
    edx = MEM32(ebp + 0xC); /* 0x141640F0: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0xAFFC); /* 0x141640F3: mov eax, dword ptr [edx + 0xaffc] */
    eax = MEM32(eax + esi * 4); /* 0x141640F9: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x141640FC: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x38) = ecx; /* 0x141640FF: mov dword ptr [eax + 0x38], ecx */
    eax = MEM32(edx + 0xAFFC); /* 0x14164102: mov eax, dword ptr [edx + 0xaffc] */
    eax = MEM32(eax + esi * 4); /* 0x14164108: mov eax, dword ptr [eax + esi*4] */
    MEM32(ecx + 0x38) = eax; /* 0x1416410B: mov dword ptr [ecx + 0x38], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1416410E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14164111: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edx + 0x4) */ /* 0x14164112: cmp esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141640D4; /* 0x14164115: jb 0x141640d4 */
L_14164117:
    MEM32(ecx + 0x8) = 0; /* 0x14164117: mov dword ptr [ecx + 8], 0 */
    esi = MEM32(edx + 0x8); /* 0x1416411E: mov esi, dword ptr [edx + 8] */
    MEM32(ecx + 0xB000) = esi; /* 0x14164121: mov dword ptr [ecx + 0xb000], esi */
    /* cmp esi, 0x3FFFFFFFu */ /* 0x14164127: cmp esi, 0x3fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14164133; /* 0x1416412D: jbe 0x14164133 */
L_1416412F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416412F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164154; /* 0x14164131: jmp 0x14164154 */
L_14164133:
    eax = MEM32(0x141F3DEC); /* 0x14164133: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164138: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164140; /* 0x1416413A: jns 0x14164140 */
L_1416413C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416413C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164143; /* 0x1416413E: jmp 0x14164143 */
L_14164140:
    PUSH32(esp, eax); /* 0x14164140: push eax */
    RECOMP_ICALL(edi); /* 0x14164141: call edi */
    RECOMP_FLAGS_IN();
L_14164143:
    ecx = esi * 4; /* 0x14164143: lea ecx, [esi*4] */
    PUSH32(esp, ecx); /* 0x1416414A: push ecx */
    PUSH32(esp, 0); /* 0x1416414B: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x1416414D: push dword ptr [eax] */
    RECOMP_ICALL(ebx); /* 0x1416414F: call ebx */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x14164151: mov edx, dword ptr [ebp + 0xc] */
L_14164154:
    ebx = MEM32(ebp + 0x8); /* 0x14164154: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + 0xB004) = eax; /* 0x14164157: mov dword ptr [ebx + 0xb004], eax */
    /* test eax, eax */ /* 0x1416415D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416416F; /* 0x1416415F: jne 0x1416416f */
L_14164161:
    edi = POP32_VAL(esp); /* 0x14164161: pop edi */
    esi = POP32_VAL(esp); /* 0x14164162: pop esi */
    eax = 0x8007000Eu; /* 0x14164163: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164168: pop ebx */
    esp = ebp; /* 0x14164169: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416416B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1416416C: ret 8 */
L_1416416F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1416416F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), esi */ /* 0x14164171: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141641C4; /* 0x14164174: jbe 0x141641c4 */
L_14164176:
    eax = ebp + (-0x4); /* 0x14164176: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x14164179: push eax */
    eax = MEM32(edx + 0xB004); /* 0x1416417A: mov eax, dword ptr [edx + 0xb004] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x14164180: push dword ptr [eax + esi*4] */
    PUSH32(esp, ebx); /* 0x14164183: push ebx */
    RECOMP_CALL(sub_14164DF0); /* 0x14164184: call 0x14164df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14164189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141643DF; /* 0x1416418B: js 0x141643df */
L_14164191:
    edx = MEM32(ebp + 0xC); /* 0x14164191: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0xB004); /* 0x14164194: mov eax, dword ptr [edx + 0xb004] */
    eax = MEM32(eax + esi * 4); /* 0x1416419A: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1416419D: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x30) = ecx; /* 0x141641A0: mov dword ptr [eax + 0x30], ecx */
    eax = MEM32(edx + 0xB004); /* 0x141641A3: mov eax, dword ptr [edx + 0xb004] */
    eax = MEM32(eax + esi * 4); /* 0x141641A9: mov eax, dword ptr [eax + esi*4] */
    MEM32(ecx + 0x30) = eax; /* 0x141641AC: mov dword ptr [ecx + 0x30], eax */
    /* cmp MEM32(ecx + 0x1C), 0xFFFFFFFFu */ /* 0x141641AF: cmp dword ptr [ecx + 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141641BE; /* 0x141641B3: je 0x141641be */
L_141641B5:
    eax = MEM32(ecx + 0x1C); /* 0x141641B5: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x38); /* 0x141641B8: mov eax, dword ptr [eax + 0x38] */
    MEM32(ecx + 0x1C) = eax; /* 0x141641BB: mov dword ptr [ecx + 0x1c], eax */
L_141641BE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141641BE: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edx + 0x8) */ /* 0x141641BF: cmp esi, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14164176; /* 0x141641C2: jb 0x14164176 */
L_141641C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141641C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xC) = 0; /* 0x141641C6: mov dword ptr [ebx + 0xc], 0 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x141641CD: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(edx + 0x8), ecx */ /* 0x141641D0: cmp dword ptr [edx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1416429E; /* 0x141641D3: jbe 0x1416429e */
L_141641D9:
    esp = esp; /* 0x141641D9: lea esp, [esp] */
L_141641E0:
    eax = MEM32(edx + 0xB004); /* 0x141641E0: mov eax, dword ptr [edx + 0xb004] */
    eax = MEM32(eax + ecx * 4); /* 0x141641E6: mov eax, dword ptr [eax + ecx*4] */
    edi = MEM32(eax + 0x28); /* 0x141641E9: mov edi, dword ptr [eax + 0x28] */
    /* test edi, edi */ /* 0x141641EC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141641F4; /* 0x141641EE: jne 0x141641f4 */
L_141641F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141641F0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141641F6; /* 0x141641F2: jmp 0x141641f6 */
L_141641F4:
    esi = MEM32(edi); /* 0x141641F4: mov esi, dword ptr [edi] */
L_141641F6:
    /* test edi, edi */ /* 0x141641F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164291; /* 0x141641F8: je 0x14164291 */
L_141641FE:
    edi = edi; /* 0x141641FE: mov edi, edi */
L_14164200:
    eax = ebp + (-0x8); /* 0x14164200: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14164203: push eax */
    PUSH32(esp, edi); /* 0x14164204: push edi */
    PUSH32(esp, ebx); /* 0x14164205: push ebx */
    RECOMP_CALL(sub_14164EE0); /* 0x14164206: call 0x14164ee0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1416420B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141643DF; /* 0x1416420D: js 0x141643df */
L_14164213:
    ecx = MEM32(ebp + (-0x8)); /* 0x14164213: mov ecx, dword ptr [ebp - 8] */
    MEM32(edi + 0x28) = ecx; /* 0x14164216: mov dword ptr [edi + 0x28], ecx */
    MEM32(ecx + 0x28) = edi; /* 0x14164219: mov dword ptr [ecx + 0x28], edi */
    eax = MEM32(ecx + 0x60); /* 0x1416421C: mov eax, dword ptr [ecx + 0x60] */
    edx = MEM32(eax + 0x30); /* 0x1416421F: mov edx, dword ptr [eax + 0x30] */
    edi = eax; /* 0x14164222: mov edi, eax */
    /* cmp edi, edx */ /* 0x14164224: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416427E; /* 0x14164226: je 0x1416427e */
L_14164228:
    /* test edi, edi */ /* 0x14164228: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164255; /* 0x1416422A: je 0x14164255 */
L_1416422C:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1416422C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164255; /* 0x1416422F: je 0x14164255 */
L_14164231:
    ebx = MEM32(ecx + 0x4); /* 0x14164231: mov ebx, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x14164234: mov eax, dword ptr [ecx] */
    /* test ebx, ebx */ /* 0x14164236: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416423E; /* 0x14164238: je 0x1416423e */
L_1416423A:
    MEM32(ebx) = eax; /* 0x1416423A: mov dword ptr [ebx], eax */
    goto L_14164241; /* 0x1416423C: jmp 0x14164241 */
L_1416423E:
    MEM32(edi + 0x28) = eax; /* 0x1416423E: mov dword ptr [edi + 0x28], eax */
L_14164241:
    ebx = MEM32(ecx); /* 0x14164241: mov ebx, dword ptr [ecx] */
    eax = MEM32(ecx + 0x4); /* 0x14164243: mov eax, dword ptr [ecx + 4] */
    /* test ebx, ebx */ /* 0x14164246: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416424F; /* 0x14164248: je 0x1416424f */
L_1416424A:
    MEM32(ebx + 0x4) = eax; /* 0x1416424A: mov dword ptr [ebx + 4], eax */
    goto L_14164252; /* 0x1416424D: jmp 0x14164252 */
L_1416424F:
    MEM32(edi + 0x2C) = eax; /* 0x1416424F: mov dword ptr [edi + 0x2c], eax */
L_14164252:
    ebx = MEM32(ebp + 0x8); /* 0x14164252: mov ebx, dword ptr [ebp + 8] */
L_14164255:
    /* test edx, edx */ /* 0x14164255: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416427B; /* 0x14164257: je 0x1416427b */
L_14164259:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x14164259: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416427B; /* 0x1416425C: je 0x1416427b */
L_1416425E:
    eax = MEM32(edx + 0x2C); /* 0x1416425E: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ecx + 0x4) = eax; /* 0x14164261: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x2C); /* 0x14164264: mov eax, dword ptr [edx + 0x2c] */
    /* test eax, eax */ /* 0x14164267: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416426F; /* 0x14164269: je 0x1416426f */
L_1416426B:
    MEM32(eax) = ecx; /* 0x1416426B: mov dword ptr [eax], ecx */
    goto L_14164272; /* 0x1416426D: jmp 0x14164272 */
L_1416426F:
    MEM32(edx + 0x28) = ecx; /* 0x1416426F: mov dword ptr [edx + 0x28], ecx */
L_14164272:
    MEM32(ecx) = 0; /* 0x14164272: mov dword ptr [ecx], 0 */
    MEM32(edx + 0x2C) = ecx; /* 0x14164278: mov dword ptr [edx + 0x2c], ecx */
L_1416427B:
    MEM32(ecx + 0x60) = edx; /* 0x1416427B: mov dword ptr [ecx + 0x60], edx */
L_1416427E:
    edi = esi; /* 0x1416427E: mov edi, esi */
    /* test esi, esi */ /* 0x14164280: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416428B; /* 0x14164282: je 0x1416428b */
L_14164284:
    esi = MEM32(esi); /* 0x14164284: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_14164200; /* 0x14164286: jmp 0x14164200 */
L_1416428B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1416428B: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0xC); /* 0x1416428E: mov edx, dword ptr [ebp + 0xc] */
L_14164291:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14164291: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x14164292: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x14164295: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141641E0; /* 0x14164298: jb 0x141641e0 */
L_1416429E:
    esi = MEM32(ebx + 0x8); /* 0x1416429E: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x141642A1: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_141642A4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141642A4: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x141642A5: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14164355; /* 0x141642A7: jae 0x14164355 */
L_141642AD:
    eax = MEM32(ebx + 0xB004); /* 0x141642AD: mov eax, dword ptr [ebx + 0xb004] */
    edx = MEM32(eax + ecx * 4); /* 0x141642B3: mov edx, dword ptr [eax + ecx*4] */
    /* cmp MEM32(edx + 0x28), 0 */ /* 0x141642B6: cmp dword ptr [edx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141642A4; /* 0x141642BA: je 0x141642a4 */
L_141642BC:
    edx = MEM32(edx + 0x28); /* 0x141642BC: mov edx, dword ptr [edx + 0x28] */
    esi = MEM32(edx); /* 0x141642BF: mov esi, dword ptr [edx] */
L_141642C1:
    eax = MEM32(edx + 0x68); /* 0x141642C1: mov eax, dword ptr [edx + 0x68] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141642C4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141642CF; /* 0x141642C7: je 0x141642cf */
L_141642C9:
    eax = MEM32(eax + 0x28); /* 0x141642C9: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x68) = eax; /* 0x141642CC: mov dword ptr [edx + 0x68], eax */
L_141642CF:
    eax = MEM32(edx + 0x6C); /* 0x141642CF: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141642D2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141642DD; /* 0x141642D5: je 0x141642dd */
L_141642D7:
    eax = MEM32(eax + 0x28); /* 0x141642D7: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x6C) = eax; /* 0x141642DA: mov dword ptr [edx + 0x6c], eax */
L_141642DD:
    eax = MEM32(edx + 0x78); /* 0x141642DD: mov eax, dword ptr [edx + 0x78] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141642E0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141642EB; /* 0x141642E3: je 0x141642eb */
L_141642E5:
    eax = MEM32(eax + 0x28); /* 0x141642E5: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x78) = eax; /* 0x141642E8: mov dword ptr [edx + 0x78], eax */
L_141642EB:
    eax = MEM32(edx + 0x84); /* 0x141642EB: mov eax, dword ptr [edx + 0x84] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141642F1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141642FF; /* 0x141642F4: je 0x141642ff */
L_141642F6:
    eax = MEM32(eax + 0x28); /* 0x141642F6: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x84) = eax; /* 0x141642F9: mov dword ptr [edx + 0x84], eax */
L_141642FF:
    eax = MEM32(edx + 0x88); /* 0x141642FF: mov eax, dword ptr [edx + 0x88] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14164305: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164313; /* 0x14164308: je 0x14164313 */
L_1416430A:
    eax = MEM32(eax + 0x28); /* 0x1416430A: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x88) = eax; /* 0x1416430D: mov dword ptr [edx + 0x88], eax */
L_14164313:
    eax = MEM32(edx + 0x8C); /* 0x14164313: mov eax, dword ptr [edx + 0x8c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x14164319: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164327; /* 0x1416431C: je 0x14164327 */
L_1416431E:
    eax = MEM32(eax + 0x28); /* 0x1416431E: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x8C) = eax; /* 0x14164321: mov dword ptr [edx + 0x8c], eax */
L_14164327:
    /* test esi, esi */ /* 0x14164327: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164331; /* 0x14164329: je 0x14164331 */
L_1416432B:
    edx = esi; /* 0x1416432B: mov edx, esi */
    esi = MEM32(esi); /* 0x1416432D: mov esi, dword ptr [esi] */
    goto L_1416434D; /* 0x1416432F: jmp 0x1416434d */
L_14164331:
    esi = MEM32(ebx + 0x8); /* 0x14164331: mov esi, dword ptr [ebx + 8] */
L_14164334:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14164334: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x14164335: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14164355; /* 0x14164337: jae 0x14164355 */
L_14164339:
    eax = MEM32(ebx + 0xB004); /* 0x14164339: mov eax, dword ptr [ebx + 0xb004] */
    edx = MEM32(eax + ecx * 4); /* 0x1416433F: mov edx, dword ptr [eax + ecx*4] */
    /* cmp MEM32(edx + 0x28), 0 */ /* 0x14164342: cmp dword ptr [edx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164334; /* 0x14164346: je 0x14164334 */
L_14164348:
    edx = MEM32(edx + 0x28); /* 0x14164348: mov edx, dword ptr [edx + 0x28] */
    esi = MEM32(edx); /* 0x1416434B: mov esi, dword ptr [edx] */
L_1416434D:
    /* test edx, edx */ /* 0x1416434D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141642C1; /* 0x1416434F: jne 0x141642c1 */
L_14164355:
    edi = MEM32(ebp + 0xC); /* 0x14164355: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x10) = 0; /* 0x14164358: mov dword ptr [ebx + 0x10], 0 */
    edi = MEM32(edi + 0x14); /* 0x1416435F: mov edi, dword ptr [edi + 0x14] */
    /* test edi, edi */ /* 0x14164362: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141643B8; /* 0x14164364: je 0x141643b8 */
L_14164366:
    eax = ebp + 0x8; /* 0x14164366: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x14164369: push eax */
    PUSH32(esp, edi); /* 0x1416436A: push edi */
    RECOMP_CALL(sub_14164FD0); /* 0x1416436B: call 0x14164fd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14164370: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141643DF; /* 0x14164372: js 0x141643df */
L_14164378:
    esi = MEM32(ebp + 0x8); /* 0x14164378: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1416437B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edx */ /* 0x1416437D: cmp dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14164394; /* 0x14164380: jbe 0x14164394 */
L_14164382:
    ecx = MEM32(esi + 0xC); /* 0x14164382: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx + edx * 4); /* 0x14164385: mov eax, dword ptr [ecx + edx*4] */
    eax = MEM32(eax + 0x28); /* 0x14164388: mov eax, dword ptr [eax + 0x28] */
    MEM32(ecx + edx * 4) = eax; /* 0x1416438B: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1416438E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x1416438F: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14164382; /* 0x14164392: jb 0x14164382 */
L_14164394:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14164394: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), edx */ /* 0x14164396: cmp dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141643B2; /* 0x14164399: jbe 0x141643b2 */
L_1416439B:
    goto L_141643A0; /* 0x1416439B: jmp 0x141643a0 */
L_141643A0:
    ecx = MEM32(esi + 0x14); /* 0x141643A0: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx + edx * 4); /* 0x141643A3: mov eax, dword ptr [ecx + edx*4] */
    eax = MEM32(eax + 0x28); /* 0x141643A6: mov eax, dword ptr [eax + 0x28] */
    MEM32(ecx + edx * 4) = eax; /* 0x141643A9: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141643AC: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0x10) */ /* 0x141643AD: cmp edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141643A0; /* 0x141643B0: jb 0x141643a0 */
L_141643B2:
    edi = MEM32(edi); /* 0x141643B2: mov edi, dword ptr [edi] */
    /* test edi, edi */ /* 0x141643B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164366; /* 0x141643B6: jne 0x14164366 */
L_141643B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141643B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), ecx */ /* 0x141643BA: cmp dword ptr [ebx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141643DD; /* 0x141643BD: jbe 0x141643dd */
L_141643BF:
    /* nop */ /* 0x141643BF: nop  */
L_141643C0:
    eax = MEM32(ebx + 0xB004); /* 0x141643C0: mov eax, dword ptr [ebx + 0xb004] */
    edx = MEM32(eax + ecx * 4); /* 0x141643C6: mov edx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx + 0x6C); /* 0x141643C9: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141643CC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141643D7; /* 0x141643CF: je 0x141643d7 */
L_141643D1:
    eax = MEM32(eax + 0x28); /* 0x141643D1: mov eax, dword ptr [eax + 0x28] */
    MEM32(edx + 0x6C) = eax; /* 0x141643D4: mov dword ptr [edx + 0x6c], eax */
L_141643D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141643D7: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0x8) */ /* 0x141643D8: cmp ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141643C0; /* 0x141643DB: jb 0x141643c0 */
L_141643DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141643DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141643DF:
    edi = POP32_VAL(esp); /* 0x141643DF: pop edi */
    esi = POP32_VAL(esp); /* 0x141643E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x141643E1: pop ebx */
    esp = ebp; /* 0x141643E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141643E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141643E5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141643F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141643F0u);

L_141643F0:
    edi = edi; /* 0x141643F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141643F2: push ebp */
    ebp = esp; /* 0x141643F3: mov ebp, esp */
    eax = MEM32(ebx + 0x4); /* 0x141643F5: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141643F8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x141643FB: push esi */
    esi = MEM32(ebx + 0xAFF8); /* 0x141643FC: mov esi, dword ptr [ebx + 0xaff8] */
    PUSH32(esp, edi); /* 0x14164402: push edi */
    /* cmp eax, esi */ /* 0x14164403: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416449C; /* 0x14164405: jne 0x1416449c */
L_1416440B:
    /* test esi, esi */ /* 0x1416440B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164413; /* 0x1416440D: je 0x14164413 */
L_1416440F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1416440F: add esi, esi */
    _flag_k = FK_ADD;
    goto L_14164418; /* 0x14164411: jmp 0x14164418 */
L_14164413:
    esi = 0x10u; /* 0x14164413: mov esi, 0x10 */
L_14164418:
    /* cmp esi, eax */ /* 0x14164418: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14164427; /* 0x1416441A: jb 0x14164427 */
L_1416441C:
    ecx = esi; /* 0x1416441C: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1416441E: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x14164420: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164423: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164433; /* 0x14164425: jmp 0x14164433 */
L_14164427:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x14164427: mov dword ptr [ebp - 4], 0xffffffff */
    eax = 0x80070216u; /* 0x1416442E: mov eax, 0x80070216 */
L_14164433:
    /* test eax, eax */ /* 0x14164433: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141644B5; /* 0x14164435: js 0x141644b5 */
L_14164437:
    RECOMP_CALL(sub_140E3080); /* 0x14164437: call 0x140e3080 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1416443C: mov ecx, eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1416443E: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x14164441: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164452; /* 0x14164443: jne 0x14164452 */
L_14164445:
    edi = POP32_VAL(esp); /* 0x14164445: pop edi */
    eax = 0x8007000Eu; /* 0x14164446: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x1416444B: pop esi */
    esp = ebp; /* 0x1416444C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416444E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1416444F: ret 4 */
L_14164452:
    eax = MEM32(ebx + 0x4); /* 0x14164452: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14164455: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14164457: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14164459: push eax */
    PUSH32(esp, MEM32(ebx + 0xAFFC)); /* 0x1416445A: push dword ptr [ebx + 0xaffc] */
    PUSH32(esp, ecx); /* 0x14164460: push ecx */
    RECOMP_CALL(sub_141EC9A4); /* 0x14164461: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x14164466: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x14164469: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1416446C: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1416446E: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14164470: push eax */
    eax = MEM32(ebx + 0x4); /* 0x14164471: mov eax, dword ptr [ebx + 4] */
    eax = ecx + eax * 4; /* 0x14164474: lea eax, [ecx + eax*4] */
    PUSH32(esp, 0); /* 0x14164477: push 0 */
    PUSH32(esp, eax); /* 0x14164479: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x1416447A: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1416447F: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0xAFFC)); /* 0x14164482: push dword ptr [ebx + 0xaffc] */
    RECOMP_CALL(sub_14068D50); /* 0x14164488: call 0x14068d50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1416448D: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0xAFFC) = eax; /* 0x14164490: mov dword ptr [ebx + 0xaffc], eax */
    MEM32(ebx + 0xAFF8) = esi; /* 0x14164496: mov dword ptr [ebx + 0xaff8], esi */
L_1416449C:
    ecx = MEM32(ebx + 0x4); /* 0x1416449C: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0xAFFC); /* 0x1416449F: mov eax, dword ptr [ebx + 0xaffc] */
    edx = MEM32(ebp + 0x8); /* 0x141644A5: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = edx; /* 0x141644A8: mov dword ptr [eax + ecx*4], edx */
    eax = MEM32(ebx + 0x4); /* 0x141644AB: mov eax, dword ptr [ebx + 4] */
    MEM32(edx) = eax; /* 0x141644AE: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x141644B0: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141644B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141644B5:
    edi = POP32_VAL(esp); /* 0x141644B5: pop edi */
    esi = POP32_VAL(esp); /* 0x141644B6: pop esi */
    esp = ebp; /* 0x141644B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141644B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141644BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141644D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141644D0u);

L_141644D0:
    edi = edi; /* 0x141644D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141644D2: push ebp */
    ebp = esp; /* 0x141644D3: mov ebp, esp */
    eax = MEM32(edi + 0xB000); /* 0x141644D5: mov eax, dword ptr [edi + 0xb000] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141644DB: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141644DE: push ebx */
    PUSH32(esp, esi); /* 0x141644DF: push esi */
    /* cmp MEM32(edi + 0x8), eax */ /* 0x141644E0: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416458F; /* 0x141644E3: jne 0x1416458f */
L_141644E9:
    esi = eax + eax; /* 0x141644E9: lea esi, [eax + eax] */
    /* test eax, eax */ /* 0x141644EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141644F5; /* 0x141644EE: jne 0x141644f5 */
L_141644F0:
    esi = 0x10u; /* 0x141644F0: mov esi, 0x10 */
L_141644F5:
    /* cmp esi, eax */ /* 0x141644F5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14164506; /* 0x141644F7: jae 0x14164506 */
L_141644F9:
    esi = POP32_VAL(esp); /* 0x141644F9: pop esi */
    eax = 0x80070216u; /* 0x141644FA: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x141644FF: pop ebx */
    esp = ebp; /* 0x14164500: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14164502: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14164503: ret 4 */
L_14164506:
    RECOMP_CALL(sub_140E3080); /* 0x14164506: call 0x140e3080 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1416450B: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1416450D: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x14164510: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164521; /* 0x14164512: jne 0x14164521 */
L_14164514:
    esi = POP32_VAL(esp); /* 0x14164514: pop esi */
    eax = 0x8007000Eu; /* 0x14164515: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x1416451A: pop ebx */
    esp = ebp; /* 0x1416451B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416451D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1416451E: ret 4 */
L_14164521:
    eax = MEM32(edi + 0x8); /* 0x14164521: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14164524: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14164526: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14164528: push eax */
    PUSH32(esp, MEM32(edi + 0xB004)); /* 0x14164529: push dword ptr [edi + 0xb004] */
    PUSH32(esp, ecx); /* 0x1416452F: push ecx */
    RECOMP_CALL(sub_141EC9A4); /* 0x14164530: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x14164535: mov ecx, dword ptr [edi + 8] */
    eax = esi; /* 0x14164538: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1416453A: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1416453C: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1416453E: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14164540: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x14164541: mov eax, dword ptr [ebp - 4] */
    eax = eax + ecx * 4; /* 0x14164544: lea eax, [eax + ecx*4] */
    PUSH32(esp, 0); /* 0x14164547: push 0 */
    PUSH32(esp, eax); /* 0x14164549: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x1416454A: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xB004); /* 0x1416454F: mov eax, dword ptr [edi + 0xb004] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x14164555: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x14164558: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1416455B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164580; /* 0x1416455D: je 0x14164580 */
L_1416455F:
    eax = MEM32(0x141F3DEC); /* 0x1416455F: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164564: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1416456C; /* 0x14164566: jns 0x1416456c */
L_14164568:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164568: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164573; /* 0x1416456A: jmp 0x14164573 */
L_1416456C:
    PUSH32(esp, eax); /* 0x1416456C: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x1416456D: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14164573:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x14164573: push dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x14164576: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164578: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x1416457A: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
L_14164580:
    eax = MEM32(ebp + (-0x4)); /* 0x14164580: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0xB004) = eax; /* 0x14164583: mov dword ptr [edi + 0xb004], eax */
    MEM32(edi + 0xB000) = esi; /* 0x14164589: mov dword ptr [edi + 0xb000], esi */
L_1416458F:
    ecx = MEM32(edi + 0x8); /* 0x1416458F: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xB004); /* 0x14164592: mov eax, dword ptr [edi + 0xb004] */
    edx = MEM32(ebp + 0x8); /* 0x14164598: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = edx; /* 0x1416459B: mov dword ptr [eax + ecx*4], edx */
    eax = MEM32(edi + 0x8); /* 0x1416459E: mov eax, dword ptr [edi + 8] */
    MEM32(edx) = eax; /* 0x141645A1: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x141645A3: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(edi + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(edi + 0x1C) | 4));
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) | 4; /* 0x141645A6: or dword ptr [edi + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141645AA: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141645AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141645AD: pop ebx */
    esp = ebp; /* 0x141645AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141645B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141645B1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141645C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141645C0u);

L_141645C0:
    edi = edi; /* 0x141645C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141645C2: push ebp */
    ebp = esp; /* 0x141645C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x141645C5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x141645C8: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x141645CB: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x141645CF: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416462E; /* 0x141645D0: je 0x1416462e */
L_141645D2:
    eax = MEM32(esi + 0x60); /* 0x141645D2: mov eax, dword ptr [esi + 0x60] */
    eax = MEM32(eax + 0x8); /* 0x141645D5: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x141645D8: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x141645DD: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416462E; /* 0x141645E0: je 0x1416462e */
L_141645E2:
    /* cmp MEM32(esi + 0x6C), 0xFFFFFFFFu */ /* 0x141645E2: cmp dword ptr [esi + 0x6c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416462E; /* 0x141645E6: jne 0x1416462e */
L_141645E8:
    /* cmp MEM32(esi + 0x68), 0xFFFFFFFFu */ /* 0x141645E8: cmp dword ptr [esi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1416462E; /* 0x141645EC: jne 0x1416462e */
L_141645EE:
    eax = MEM32(esi + 0x54); /* 0x141645EE: mov eax, dword ptr [esi + 0x54] */
    fp_push(*(double*)ADDR(esi + 0xC0)); /* 0x141645F1: fld qword ptr [esi + 0xc0] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x01000010u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x01000010u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x01000010u; /* 0x141645F7: or dword ptr [esi + 0x50], 0x1000010 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x141645FE: fld st(0) */
    MEM32(esi + 0x54) = eax; /* 0x14164600: mov dword ptr [esi + 0x54], eax */
    RECOMP_CALL(sub_141EC551); /* 0x14164603: call 0x141ec551 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x8) = eax; /* 0x14164608: mov dword ptr [esp + 8], eax */
    fp_push((double)(int32_t)MEM32(esp + 0x8)); /* 0x1416460C: fild dword ptr [esp + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x14164610: fsubp st(1) */
    _st[0] = fabs(_st[0]); /* 0x14164612: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x14066818)); /* 0x14164614: fcomp qword ptr [0x14066818] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1416461A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1416461C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1416462E; /* 0x1416461F: jp 0x1416462e */
L_14164621:
    eax = MEM32(esi + 0x54); /* 0x14164621: mov eax, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x00200000u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x00200000u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x00200000u; /* 0x14164624: or dword ptr [esi + 0x50], 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = eax; /* 0x1416462B: mov dword ptr [esi + 0x54], eax */
L_1416462E:
    ecx = esi; /* 0x1416462E: mov ecx, esi */
    RECOMP_CALL(sub_14162430); /* 0x14164630: call 0x14162430 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x14164635: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164646; /* 0x14164637: je 0x14164646 */
L_14164639:
    eax = MEM32(esi + 0x54); /* 0x14164639: mov eax, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x00020000u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x00020000u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x00020000u; /* 0x1416463C: or dword ptr [esi + 0x50], 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = eax; /* 0x14164643: mov dword ptr [esi + 0x54], eax */
L_14164646:
    eax = MEM32(esi + 0x60); /* 0x14164646: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax + 0x8); /* 0x14164649: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1416464C: mov eax, dword ptr [eax + 0xc] */
    MEM32(esp + 0xC) = eax; /* 0x1416464F: mov dword ptr [esp + 0xc], eax */
    eax = ecx; /* 0x14164653: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x14164655: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14164658: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164672; /* 0x1416465B: je 0x14164672 */
L_1416465D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00200000u);
    ecx = ecx & 0x00200000u; /* 0x1416465D: and ecx, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14164663: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164672; /* 0x14164666: je 0x14164672 */
L_14164668:
    eax = MEM32(esi + 0x54); /* 0x14164668: mov eax, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)((MEM32(esi + 0x50) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x50) | 0x10u));
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0x10u; /* 0x1416466B: or dword ptr [esi + 0x50], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = eax; /* 0x1416466F: mov dword ptr [esi + 0x54], eax */
L_14164672:
    eax = MEM32(ebx + 0xC); /* 0x14164672: mov eax, dword ptr [ebx + 0xc] */
    MEM32(esi + 0x58) = eax; /* 0x14164675: mov dword ptr [esi + 0x58], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1; /* 0x14164678: inc dword ptr [ebx + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 4));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 4; /* 0x1416467B: or dword ptr [ebx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416467F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164681: pop edi */
    esp = ebp; /* 0x14164682: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14164684: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14164685: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14164690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164690u);

L_14164690:
    edi = edi; /* 0x14164690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164692: push ebp */
    ebp = esp; /* 0x14164693: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14164695: push ebx */
    ebx = eax; /* 0x14164696: mov ebx, eax */
    eax = MEM32(0x141F3DEC); /* 0x14164698: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, esi); /* 0x1416469D: push esi */
    PUSH32(esp, edi); /* 0x1416469E: push edi */
    /* test eax, eax */ /* 0x1416469F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141646A7; /* 0x141646A1: jns 0x141646a7 */
L_141646A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141646A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141646AE; /* 0x141646A5: jmp 0x141646ae */
L_141646A7:
    PUSH32(esp, eax); /* 0x141646A7: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x141646A8: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_141646AE:
    PUSH32(esp, 0x50u); /* 0x141646AE: push 0x50 */
    PUSH32(esp, 0); /* 0x141646B0: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x141646B2: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x1400109C)); /* 0x141646B4: call dword ptr [0x1400109c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141646BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164708; /* 0x141646BC: je 0x14164708 */
L_141646BE:
    RECOMP_CALL(sub_141A4190); /* 0x141646BE: call 0x141a4190 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141646C3: mov esi, eax */
    /* test esi, esi */ /* 0x141646C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416470A; /* 0x141646C7: je 0x1416470a */
L_141646C9:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x141646C9: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x141646CC: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141646CF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141646D2: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141A4210); /* 0x141646D5: call 0x141a4210 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141646DA: mov edi, eax */
    /* test edi, edi */ /* 0x141646DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416470F; /* 0x141646DE: js 0x1416470f */
L_141646E0:
    PUSH32(esp, esi); /* 0x141646E0: push esi */
    RECOMP_CALL(sub_141643F0); /* 0x141646E1: call 0x141643f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141646E6: mov edi, eax */
    /* test edi, edi */ /* 0x141646E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416470F; /* 0x141646EA: js 0x1416470f */
L_141646EC:
    eax = MEM32(ebx + 0xB008); /* 0x141646EC: mov eax, dword ptr [ebx + 0xb008] */
    MEM32(esi) = eax; /* 0x141646F2: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0x8); /* 0x141646F4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xB008)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xB008) = MEM32(ebx + 0xB008) + 1; /* 0x141646F7: inc dword ptr [ebx + 0xb008] */
    _flag_k = FK_INC;
    MEM32(eax) = esi; /* 0x141646FD: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141646FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164701: pop edi */
    esi = POP32_VAL(esp); /* 0x14164702: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164703: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164704: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14164705: ret 0x14 */
L_14164708:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14164708: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1416470A:
    edi = 0x8007000Eu; /* 0x1416470A: mov edi, 0x8007000e */
L_1416470F:
    /* test esi, esi */ /* 0x1416470F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164718; /* 0x14164711: je 0x14164718 */
L_14164713:
    RECOMP_CALL(sub_14163FF0); /* 0x14164713: call 0x14163ff0 */
    RECOMP_FLAGS_IN();
L_14164718:
    eax = edi; /* 0x14164718: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1416471A: pop edi */
    esi = POP32_VAL(esp); /* 0x1416471B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416471C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1416471D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1416471E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_14164730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164730u);

L_14164730:
    edi = edi; /* 0x14164730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164732: push ebp */
    ebp = esp; /* 0x14164733: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164735: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, ebx); /* 0x1416473A: push ebx */
    PUSH32(esp, esi); /* 0x1416473B: push esi */
    PUSH32(esp, edi); /* 0x1416473C: push edi */
    /* test eax, eax */ /* 0x1416473D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164745; /* 0x1416473F: jns 0x14164745 */
L_14164741:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164741: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1416474C; /* 0x14164743: jmp 0x1416474c */
L_14164745:
    PUSH32(esp, eax); /* 0x14164745: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164746: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_1416474C:
    PUSH32(esp, 0x90u); /* 0x1416474C: push 0x90 */
    PUSH32(esp, 0); /* 0x14164751: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164753: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x1400109C)); /* 0x14164755: call dword ptr [0x1400109c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1416475B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1416475D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164812; /* 0x1416475F: je 0x14164812 */
L_14164765:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x14164765: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x24); /* 0x14164768: mov ecx, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1416476B: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x20); /* 0x1416476E: mov esi, dword ptr [ebp + 0x20] */
    edi = MEM32(ebp + 0x1C); /* 0x14164771: mov edi, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x14164774: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x28) = 0; /* 0x14164777: mov dword ptr [ebx + 0x28], 0 */
    MEM32(ebx + 0x2C) = 0; /* 0x1416477E: mov dword ptr [ebx + 0x2c], 0 */
    PUSH32(esp, ebx); /* 0x14164785: push ebx */
    MEM32(ebx) = 0xFFFFFFFFu; /* 0x14164786: mov dword ptr [ebx], 0xffffffff */
    RECOMP_CALL(sub_14190780); /* 0x1416478C: call 0x14190780 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164791: mov edi, eax */
    /* test edi, edi */ /* 0x14164793: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141647C4; /* 0x14164795: js 0x141647c4 */
L_14164797:
    esi = MEM32(ebp + 0x8); /* 0x14164797: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1416479A: push ebx */
    edi = esi; /* 0x1416479B: mov edi, esi */
    RECOMP_CALL(sub_141644D0); /* 0x1416479D: call 0x141644d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141647A2: mov edi, eax */
    /* test edi, edi */ /* 0x141647A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141647C4; /* 0x141647A6: js 0x141647c4 */
L_141647A8:
    eax = MEM32(esi + 0xB00C); /* 0x141647A8: mov eax, dword ptr [esi + 0xb00c] */
    MEM32(ebx) = eax; /* 0x141647AE: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0xC); /* 0x141647B0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0xB00C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xB00C) = MEM32(esi + 0xB00C) + 1; /* 0x141647B3: inc dword ptr [esi + 0xb00c] */
    _flag_k = FK_INC;
    MEM32(eax) = ebx; /* 0x141647B9: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141647BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141647BD: pop edi */
    esi = POP32_VAL(esp); /* 0x141647BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x141647BF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141647C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x141647C1: ret 0x20 */
L_141647C4:
    esi = ebx + 0x28; /* 0x141647C4: lea esi, [ebx + 0x28] */
    MEM32(esi) = 0; /* 0x141647C7: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x141647CD: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_141909D0); /* 0x141647D4: call 0x141909d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x141647D9: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x141647DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141647F7; /* 0x141647E0: jns 0x141647f7 */
L_141647E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141647E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141647E4: push ebx */
    PUSH32(esp, eax); /* 0x141647E5: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x141647E6: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x141647E8: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x141647EE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x141647F0: pop edi */
    esi = POP32_VAL(esp); /* 0x141647F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x141647F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141647F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x141647F4: ret 0x20 */
L_141647F7:
    PUSH32(esp, eax); /* 0x141647F7: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x141647F8: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141647FE: push ebx */
    PUSH32(esp, 0); /* 0x141647FF: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164801: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14164803: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x14164809: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1416480B: pop edi */
    esi = POP32_VAL(esp); /* 0x1416480C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1416480D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1416480E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1416480F: ret 0x20 */
L_14164812:
    edi = POP32_VAL(esp); /* 0x14164812: pop edi */
    esi = POP32_VAL(esp); /* 0x14164813: pop esi */
    eax = 0x8007000Eu; /* 0x14164814: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164819: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1416481A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1416481B: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_14164830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164830u);

L_14164830:
    edi = edi; /* 0x14164830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164832: push ebp */
    ebp = esp; /* 0x14164833: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x14164835: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x14164838: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1416483B: push ebx */
    PUSH32(esp, esi); /* 0x1416483C: push esi */
    esi = eax; /* 0x1416483D: mov esi, eax */
    eax = MEM32(0x141F3DEC); /* 0x1416483F: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, edi); /* 0x14164844: push edi */
    /* test eax, eax */ /* 0x14164845: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1416484D; /* 0x14164847: jns 0x1416484d */
L_14164849:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14164849: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164856; /* 0x1416484B: jmp 0x14164856 */
L_1416484D:
    PUSH32(esp, eax); /* 0x1416484D: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x1416484E: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14164854: mov ecx, eax */
L_14164856:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x14164856: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164877; /* 0x1416485A: je 0x14164877 */
L_1416485C:
    edi = MEM32(ecx + 0xC); /* 0x1416485C: mov edi, dword ptr [ecx + 0xc] */
    /* test edi, edi */ /* 0x1416485F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164888; /* 0x14164861: je 0x14164888 */
L_14164863:
    eax = MEM32(edi); /* 0x14164863: mov eax, dword ptr [edi] */
    MEM32(ecx + 0xC) = eax; /* 0x14164865: mov dword ptr [ecx + 0xc], eax */
    /* test eax, eax */ /* 0x14164868: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1416486F; /* 0x1416486A: jne 0x1416486f */
L_1416486C:
    MEM32(ecx + 0x10) = eax; /* 0x1416486C: mov dword ptr [ecx + 0x10], eax */
L_1416486F:
    MEM32(edi) = 0xFEFEFEFEu; /* 0x1416486F: mov dword ptr [edi], 0xfefefefe */
    goto L_14164888; /* 0x14164875: jmp 0x14164888 */
L_14164877:
    ecx = MEM32(ecx + 0x8); /* 0x14164877: mov ecx, dword ptr [ecx + 8] */
    PUSH32(esp, 0x10u); /* 0x1416487A: push 0x10 */
    PUSH32(esp, 0x108u); /* 0x1416487C: push 0x108 */
    RECOMP_CALL(sub_141E6491); /* 0x14164881: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164886: mov edi, eax */
L_14164888:
    /* test edi, edi */ /* 0x14164888: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164967; /* 0x1416488A: je 0x14164967 */
L_14164890:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x14164890: push dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x18); /* 0x14164893: mov ebx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x14164896: mov edx, dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x14164899: mov ecx, edi */
    MEM32(edi) = 0; /* 0x1416489B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x141648A1: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x40) = 0; /* 0x141648A8: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x44) = 0; /* 0x141648AF: mov dword ptr [edi + 0x44], 0 */
    MEM32(edi + 0x48) = 0; /* 0x141648B6: mov dword ptr [edi + 0x48], 0 */
    MEM32(edi + 0x4C) = 0; /* 0x141648BD: mov dword ptr [edi + 0x4c], 0 */
    MEM32(edi + 0x58) = 0xFFFFFFFFu; /* 0x141648C4: mov dword ptr [edi + 0x58], 0xffffffff */
    MEM32(edi + 0x60) = 0xFFFFFFFFu; /* 0x141648CB: mov dword ptr [edi + 0x60], 0xffffffff */
    MEM32(edi + 0x24) = 0; /* 0x141648D2: mov dword ptr [edi + 0x24], 0 */
    RECOMP_CALL(sub_1415EB60); /* 0x141648D9: call 0x1415eb60 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x141648DE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x141648E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164950; /* 0x141648E2: js 0x14164950 */
L_141648E4:
    /* cmp esi, 0x11u */ /* 0x141648E4: cmp esi, 0x11 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141648EC; /* 0x141648E7: je 0x141648ec */
L_141648E9:
    MEM32(edi + 0x5C) = esi; /* 0x141648E9: mov dword ptr [edi + 0x5c], esi */
L_141648EC:
    ecx = edi; /* 0x141648EC: mov ecx, edi */
    RECOMP_CALL(sub_14162430); /* 0x141648EE: call 0x14162430 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x141648F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164904; /* 0x141648F5: je 0x14164904 */
L_141648F7:
    eax = MEM32(edi + 0x54); /* 0x141648F7: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x00020000u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x00020000u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x00020000u; /* 0x141648FA: or dword ptr [edi + 0x50], 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x14164901: mov dword ptr [edi + 0x54], eax */
L_14164904:
    eax = MEM32(edi + 0x60); /* 0x14164904: mov eax, dword ptr [edi + 0x60] */
    ecx = MEM32(eax + 0x8); /* 0x14164907: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x1416490A: mov eax, dword ptr [eax + 0xc] */
    MEM32(esp + 0x14) = eax; /* 0x1416490D: mov dword ptr [esp + 0x14], eax */
    eax = ecx; /* 0x14164911: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x14164913: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x14164916: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164930; /* 0x14164919: je 0x14164930 */
L_1416491B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00200000u);
    ecx = ecx & 0x00200000u; /* 0x1416491B: and ecx, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0)); _flag_b = (uint32_t)((ecx | 0));
    ecx = ecx | 0; /* 0x14164921: or ecx, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164930; /* 0x14164924: je 0x14164930 */
L_14164926:
    eax = MEM32(edi + 0x54); /* 0x14164926: mov eax, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)((MEM32(edi + 0x50) | 0x10u)); _flag_b = (uint32_t)((MEM32(edi + 0x50) | 0x10u));
    MEM32(edi + 0x50) = MEM32(edi + 0x50) | 0x10u; /* 0x14164929: or dword ptr [edi + 0x50], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x54) = eax; /* 0x1416492D: mov dword ptr [edi + 0x54], eax */
L_14164930:
    edx = MEM32(ebp + 0x8); /* 0x14164930: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0xC); /* 0x14164933: mov eax, dword ptr [edx + 0xc] */
    MEM32(edi + 0x58) = eax; /* 0x14164936: mov dword ptr [edi + 0x58], eax */
    eax = MEM32(ebp + 0xC); /* 0x14164939: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1; /* 0x1416493C: inc dword ptr [edx + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(edx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0x1C) | 4));
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) | 4; /* 0x1416493F: or dword ptr [edx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edi; /* 0x14164943: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164945: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164947: pop edi */
    esi = POP32_VAL(esp); /* 0x14164948: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164949: pop ebx */
    esp = ebp; /* 0x1416494A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1416494C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1416494D: ret 0x14 */
L_14164950:
    RECOMP_CALL(sub_1415EA70); /* 0x14164950: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x14164955: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x14164957: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1416495C: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1416495E: pop edi */
    esi = POP32_VAL(esp); /* 0x1416495F: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164960: pop ebx */
    esp = ebp; /* 0x14164961: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14164963: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14164964: ret 0x14 */
L_14164967:
    edi = POP32_VAL(esp); /* 0x14164967: pop edi */
    esi = POP32_VAL(esp); /* 0x14164968: pop esi */
    eax = 0x8007000Eu; /* 0x14164969: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x1416496E: pop ebx */
    esp = ebp; /* 0x1416496F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14164971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14164972: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_14164980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164980u);

L_14164980:
    edi = edi; /* 0x14164980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164982: push ebp */
    ebp = esp; /* 0x14164983: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14164985: push ebx */
    PUSH32(esp, esi); /* 0x14164986: push esi */
    esi = eax; /* 0x14164987: mov esi, eax */
    eax = MEM32(0x141F3DEC); /* 0x14164989: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, edi); /* 0x1416498E: push edi */
    /* test eax, eax */ /* 0x1416498F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164997; /* 0x14164991: jns 0x14164997 */
L_14164993:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14164993: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141649A0; /* 0x14164995: jmp 0x141649a0 */
L_14164997:
    PUSH32(esp, eax); /* 0x14164997: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164998: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1416499E: mov ecx, eax */
L_141649A0:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x141649A0: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141649C1; /* 0x141649A4: je 0x141649c1 */
L_141649A6:
    edi = MEM32(ecx + 0xC); /* 0x141649A6: mov edi, dword ptr [ecx + 0xc] */
    /* test edi, edi */ /* 0x141649A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141649D2; /* 0x141649AB: je 0x141649d2 */
L_141649AD:
    eax = MEM32(edi); /* 0x141649AD: mov eax, dword ptr [edi] */
    MEM32(ecx + 0xC) = eax; /* 0x141649AF: mov dword ptr [ecx + 0xc], eax */
    /* test eax, eax */ /* 0x141649B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141649B9; /* 0x141649B4: jne 0x141649b9 */
L_141649B6:
    MEM32(ecx + 0x10) = eax; /* 0x141649B6: mov dword ptr [ecx + 0x10], eax */
L_141649B9:
    MEM32(edi) = 0xFEFEFEFEu; /* 0x141649B9: mov dword ptr [edi], 0xfefefefe */
    goto L_141649D2; /* 0x141649BF: jmp 0x141649d2 */
L_141649C1:
    ecx = MEM32(ecx + 0x8); /* 0x141649C1: mov ecx, dword ptr [ecx + 8] */
    PUSH32(esp, 0x10u); /* 0x141649C4: push 0x10 */
    PUSH32(esp, 0x108u); /* 0x141649C6: push 0x108 */
    RECOMP_CALL(sub_141E6491); /* 0x141649CB: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141649D0: mov edi, eax */
L_141649D2:
    /* test edi, edi */ /* 0x141649D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164A80; /* 0x141649D4: je 0x14164a80 */
L_141649DA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141649DA: push dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x18); /* 0x141649DD: mov ebx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x141649E0: mov edx, dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x141649E3: mov ecx, edi */
    MEM32(edi) = 0; /* 0x141649E5: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x141649EB: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x40) = 0; /* 0x141649F2: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x44) = 0; /* 0x141649F9: mov dword ptr [edi + 0x44], 0 */
    MEM32(edi + 0x48) = 0; /* 0x14164A00: mov dword ptr [edi + 0x48], 0 */
    MEM32(edi + 0x4C) = 0; /* 0x14164A07: mov dword ptr [edi + 0x4c], 0 */
    MEM32(edi + 0x58) = 0xFFFFFFFFu; /* 0x14164A0E: mov dword ptr [edi + 0x58], 0xffffffff */
    MEM32(edi + 0x60) = 0xFFFFFFFFu; /* 0x14164A15: mov dword ptr [edi + 0x60], 0xffffffff */
    MEM32(edi + 0x24) = 0; /* 0x14164A1C: mov dword ptr [edi + 0x24], 0 */
    RECOMP_CALL(sub_1415EB60); /* 0x14164A23: call 0x1415eb60 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164A28: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164A2A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164A6B; /* 0x14164A2C: js 0x14164a6b */
L_14164A2E:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x14164A2E: fld qword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14164A31: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x14164A34: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x14164A37: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14164A38: push dword ptr [ebp + 8] */
    eax = edi; /* 0x14164A3B: mov eax, edi */
    MEM32(edi + 0x5C) = esi; /* 0x14164A3D: mov dword ptr [edi + 0x5c], esi */
    RECOMP_CALL(sub_1415F9F0); /* 0x14164A40: call 0x1415f9f0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164A45: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164A47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164A6B; /* 0x14164A49: js 0x14164a6b */
L_14164A4B:
    ebx = MEM32(ebp + 0x8); /* 0x14164A4B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x14164A4E: push 1 */
    esi = edi; /* 0x14164A50: mov esi, edi */
    RECOMP_CALL(sub_141645C0); /* 0x14164A52: call 0x141645c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164A57: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164A59: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164A6B; /* 0x14164A5B: js 0x14164a6b */
L_14164A5D:
    eax = MEM32(ebp + 0xC); /* 0x14164A5D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x14164A60: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164A62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164A64: pop edi */
    esi = POP32_VAL(esp); /* 0x14164A65: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164A66: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164A67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164A68: ret 0x1c */
L_14164A6B:
    RECOMP_CALL(sub_1415EA70); /* 0x14164A6B: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x14164A70: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x14164A72: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x14164A77: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x14164A79: pop edi */
    esi = POP32_VAL(esp); /* 0x14164A7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164A7B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164A7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164A7D: ret 0x1c */
L_14164A80:
    edi = POP32_VAL(esp); /* 0x14164A80: pop edi */
    esi = POP32_VAL(esp); /* 0x14164A81: pop esi */
    eax = 0x8007000Eu; /* 0x14164A82: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164A87: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164A88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164A89: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_14164AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164AA0u);

L_14164AA0:
    edi = edi; /* 0x14164AA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164AA2: push ebp */
    ebp = esp; /* 0x14164AA3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14164AA5: push ebx */
    PUSH32(esp, esi); /* 0x14164AA6: push esi */
    esi = eax; /* 0x14164AA7: mov esi, eax */
    eax = MEM32(0x141F3DEC); /* 0x14164AA9: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, edi); /* 0x14164AAE: push edi */
    /* test eax, eax */ /* 0x14164AAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164AB7; /* 0x14164AB1: jns 0x14164ab7 */
L_14164AB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14164AB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164AC0; /* 0x14164AB5: jmp 0x14164ac0 */
L_14164AB7:
    PUSH32(esp, eax); /* 0x14164AB7: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164AB8: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14164ABE: mov ecx, eax */
L_14164AC0:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x14164AC0: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164AE1; /* 0x14164AC4: je 0x14164ae1 */
L_14164AC6:
    edi = MEM32(ecx + 0xC); /* 0x14164AC6: mov edi, dword ptr [ecx + 0xc] */
    /* test edi, edi */ /* 0x14164AC9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164AF2; /* 0x14164ACB: je 0x14164af2 */
L_14164ACD:
    eax = MEM32(edi); /* 0x14164ACD: mov eax, dword ptr [edi] */
    MEM32(ecx + 0xC) = eax; /* 0x14164ACF: mov dword ptr [ecx + 0xc], eax */
    /* test eax, eax */ /* 0x14164AD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164AD9; /* 0x14164AD4: jne 0x14164ad9 */
L_14164AD6:
    MEM32(ecx + 0x10) = eax; /* 0x14164AD6: mov dword ptr [ecx + 0x10], eax */
L_14164AD9:
    MEM32(edi) = 0xFEFEFEFEu; /* 0x14164AD9: mov dword ptr [edi], 0xfefefefe */
    goto L_14164AF2; /* 0x14164ADF: jmp 0x14164af2 */
L_14164AE1:
    ecx = MEM32(ecx + 0x8); /* 0x14164AE1: mov ecx, dword ptr [ecx + 8] */
    PUSH32(esp, 0x10u); /* 0x14164AE4: push 0x10 */
    PUSH32(esp, 0x108u); /* 0x14164AE6: push 0x108 */
    RECOMP_CALL(sub_141E6491); /* 0x14164AEB: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164AF0: mov edi, eax */
L_14164AF2:
    /* test edi, edi */ /* 0x14164AF2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164B9D; /* 0x14164AF4: je 0x14164b9d */
L_14164AFA:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x14164AFA: push dword ptr [ebp + 0x1c] */
    ebx = MEM32(ebp + 0x20); /* 0x14164AFD: mov ebx, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x10); /* 0x14164B00: mov edx, dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x14164B03: mov ecx, edi */
    MEM32(edi) = 0; /* 0x14164B05: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x14164B0B: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x40) = 0; /* 0x14164B12: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x44) = 0; /* 0x14164B19: mov dword ptr [edi + 0x44], 0 */
    MEM32(edi + 0x48) = 0; /* 0x14164B20: mov dword ptr [edi + 0x48], 0 */
    MEM32(edi + 0x4C) = 0; /* 0x14164B27: mov dword ptr [edi + 0x4c], 0 */
    MEM32(edi + 0x58) = 0xFFFFFFFFu; /* 0x14164B2E: mov dword ptr [edi + 0x58], 0xffffffff */
    MEM32(edi + 0x60) = 0xFFFFFFFFu; /* 0x14164B35: mov dword ptr [edi + 0x60], 0xffffffff */
    MEM32(edi + 0x24) = 0; /* 0x14164B3C: mov dword ptr [edi + 0x24], 0 */
    RECOMP_CALL(sub_1415EB60); /* 0x14164B43: call 0x1415eb60 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164B48: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164B4A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164B88; /* 0x14164B4C: js 0x14164b88 */
L_14164B4E:
    PUSH32(esp, esi); /* 0x14164B4E: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x14164B4F: push dword ptr [ebp + 0x18] */
    eax = edi; /* 0x14164B52: mov eax, edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x14164B54: push dword ptr [ebp + 0x14] */
    MEM32(edi + 0x5C) = esi; /* 0x14164B57: mov dword ptr [edi + 0x5c], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14164B5A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1415FAD0); /* 0x14164B5D: call 0x1415fad0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164B62: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164B64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164B88; /* 0x14164B66: js 0x14164b88 */
L_14164B68:
    ebx = MEM32(ebp + 0x8); /* 0x14164B68: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x14164B6B: push 1 */
    esi = edi; /* 0x14164B6D: mov esi, edi */
    RECOMP_CALL(sub_141645C0); /* 0x14164B6F: call 0x141645c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164B74: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164B76: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164B88; /* 0x14164B78: js 0x14164b88 */
L_14164B7A:
    eax = MEM32(ebp + 0xC); /* 0x14164B7A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x14164B7D: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164B7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164B81: pop edi */
    esi = POP32_VAL(esp); /* 0x14164B82: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164B83: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164B84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164B85: ret 0x1c */
L_14164B88:
    RECOMP_CALL(sub_1415EA70); /* 0x14164B88: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x14164B8D: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x14164B8F: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x14164B94: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x14164B96: pop edi */
    esi = POP32_VAL(esp); /* 0x14164B97: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164B98: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164B99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164B9A: ret 0x1c */
L_14164B9D:
    edi = POP32_VAL(esp); /* 0x14164B9D: pop edi */
    esi = POP32_VAL(esp); /* 0x14164B9E: pop esi */
    eax = 0x8007000Eu; /* 0x14164B9F: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164BA4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164BA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x14164BA6: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_14164BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164BB0u);

L_14164BB0:
    edi = edi; /* 0x14164BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164BB2: push ebp */
    ebp = esp; /* 0x14164BB3: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164BB5: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164BBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164BC2; /* 0x14164BBC: jns 0x14164bc2 */
L_14164BBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14164BBE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164BCB; /* 0x14164BC0: jmp 0x14164bcb */
L_14164BC2:
    PUSH32(esp, eax); /* 0x14164BC2: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164BC3: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x14164BC9: mov edx, eax */
L_14164BCB:
    /* cmp MEM32(edx + 0x18), 0 */ /* 0x14164BCB: cmp dword ptr [edx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164BEC; /* 0x14164BCF: je 0x14164bec */
L_14164BD1:
    ecx = MEM32(edx + 0x18); /* 0x14164BD1: mov ecx, dword ptr [edx + 0x18] */
    /* test ecx, ecx */ /* 0x14164BD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164BFA; /* 0x14164BD6: je 0x14164bfa */
L_14164BD8:
    eax = MEM32(ecx); /* 0x14164BD8: mov eax, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x14164BDA: mov dword ptr [edx + 0x18], eax */
    /* test eax, eax */ /* 0x14164BDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164BE4; /* 0x14164BDF: jne 0x14164be4 */
L_14164BE1:
    MEM32(edx + 0x1C) = eax; /* 0x14164BE1: mov dword ptr [edx + 0x1c], eax */
L_14164BE4:
    MEM32(ecx) = 0xFEFEFEFEu; /* 0x14164BE4: mov dword ptr [ecx], 0xfefefefe */
    goto L_14164BFA; /* 0x14164BEA: jmp 0x14164bfa */
L_14164BEC:
    ecx = MEM32(edx + 0x14); /* 0x14164BEC: mov ecx, dword ptr [edx + 0x14] */
    PUSH32(esp, 0x10u); /* 0x14164BEF: push 0x10 */
    PUSH32(esp, 0x50u); /* 0x14164BF1: push 0x50 */
    RECOMP_CALL(sub_141E6491); /* 0x14164BF3: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14164BF8: mov ecx, eax */
L_14164BFA:
    PUSH32(esp, ebx); /* 0x14164BFA: push ebx */
    PUSH32(esp, esi); /* 0x14164BFB: push esi */
    /* test ecx, ecx */ /* 0x14164BFC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C62; /* 0x14164BFE: je 0x14164c62 */
L_14164C00:
    eax = ecx; /* 0x14164C00: mov eax, ecx */
    RECOMP_CALL(sub_1414CBC0); /* 0x14164C02: call 0x1414cbc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14164C07: mov esi, eax */
    /* test esi, esi */ /* 0x14164C09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C64; /* 0x14164C0B: je 0x14164c64 */
L_14164C0D:
    edx = MEM32(ebp + 0x18); /* 0x14164C0D: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x14164C10: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x14164C13: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x14164C16: push esi */
    RECOMP_CALL(sub_1414CE40); /* 0x14164C17: call 0x1414ce40 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164C1C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164C1E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164C69; /* 0x14164C20: js 0x14164c69 */
L_14164C22:
    ecx = MEM32(ebp + 0x10); /* 0x14164C22: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x14164C25: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C35; /* 0x14164C27: je 0x14164c35 */
L_14164C29:
    eax = MEM32(ecx + 0x40); /* 0x14164C29: mov eax, dword ptr [ecx + 0x40] */
    MEM32(esi + 0x40) = eax; /* 0x14164C2C: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ecx + 0x44); /* 0x14164C2F: mov eax, dword ptr [ecx + 0x44] */
    MEM32(esi + 0x44) = eax; /* 0x14164C32: mov dword ptr [esi + 0x44], eax */
L_14164C35:
    /* test edi, edi */ /* 0x14164C35: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C55; /* 0x14164C37: je 0x14164c55 */
L_14164C39:
    eax = MEM32(edi + 0x4); /* 0x14164C39: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x14164C3C: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x4); /* 0x14164C3F: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x14164C42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C4A; /* 0x14164C44: je 0x14164c4a */
L_14164C46:
    MEM32(eax) = esi; /* 0x14164C46: mov dword ptr [eax], esi */
    goto L_14164C4C; /* 0x14164C48: jmp 0x14164c4c */
L_14164C4A:
    MEM32(edi) = esi; /* 0x14164C4A: mov dword ptr [edi], esi */
L_14164C4C:
    MEM32(esi) = 0; /* 0x14164C4C: mov dword ptr [esi], 0 */
    MEM32(edi + 0x4) = esi; /* 0x14164C52: mov dword ptr [edi + 4], esi */
L_14164C55:
    eax = MEM32(ebp + 0x8); /* 0x14164C55: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x14164C58: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x14164C5A: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164C5B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14164C5D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164C5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14164C5F: ret 0x14 */
L_14164C62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14164C62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14164C64:
    ebx = 0x8007000Eu; /* 0x14164C64: mov ebx, 0x8007000e */
L_14164C69:
    /* test esi, esi */ /* 0x14164C69: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164C77; /* 0x14164C6B: je 0x14164c77 */
L_14164C6D:
    RECOMP_CALL(sub_1414CD40); /* 0x14164C6D: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x14164C72: call 0x14150660 */
    RECOMP_FLAGS_IN();
L_14164C77:
    esi = POP32_VAL(esp); /* 0x14164C77: pop esi */
    eax = ebx; /* 0x14164C78: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x14164C7A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164C7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x14164C7C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_14164C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164C90u);

L_14164C90:
    edi = edi; /* 0x14164C90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164C92: push ebp */
    ebp = esp; /* 0x14164C93: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164C95: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164C9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164CA2; /* 0x14164C9C: jns 0x14164ca2 */
L_14164C9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14164C9E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164CAB; /* 0x14164CA0: jmp 0x14164cab */
L_14164CA2:
    PUSH32(esp, eax); /* 0x14164CA2: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164CA3: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x14164CA9: mov edx, eax */
L_14164CAB:
    /* cmp MEM32(edx + 0x18), 0 */ /* 0x14164CAB: cmp dword ptr [edx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164CCC; /* 0x14164CAF: je 0x14164ccc */
L_14164CB1:
    ecx = MEM32(edx + 0x18); /* 0x14164CB1: mov ecx, dword ptr [edx + 0x18] */
    /* test ecx, ecx */ /* 0x14164CB4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164CDA; /* 0x14164CB6: je 0x14164cda */
L_14164CB8:
    eax = MEM32(ecx); /* 0x14164CB8: mov eax, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x14164CBA: mov dword ptr [edx + 0x18], eax */
    /* test eax, eax */ /* 0x14164CBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164CC4; /* 0x14164CBF: jne 0x14164cc4 */
L_14164CC1:
    MEM32(edx + 0x1C) = eax; /* 0x14164CC1: mov dword ptr [edx + 0x1c], eax */
L_14164CC4:
    MEM32(ecx) = 0xFEFEFEFEu; /* 0x14164CC4: mov dword ptr [ecx], 0xfefefefe */
    goto L_14164CDA; /* 0x14164CCA: jmp 0x14164cda */
L_14164CCC:
    ecx = MEM32(edx + 0x14); /* 0x14164CCC: mov ecx, dword ptr [edx + 0x14] */
    PUSH32(esp, 0x10u); /* 0x14164CCF: push 0x10 */
    PUSH32(esp, 0x50u); /* 0x14164CD1: push 0x50 */
    RECOMP_CALL(sub_141E6491); /* 0x14164CD3: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14164CD8: mov ecx, eax */
L_14164CDA:
    PUSH32(esp, esi); /* 0x14164CDA: push esi */
    PUSH32(esp, edi); /* 0x14164CDB: push edi */
    /* test ecx, ecx */ /* 0x14164CDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164D39; /* 0x14164CDE: je 0x14164d39 */
L_14164CE0:
    eax = ecx; /* 0x14164CE0: mov eax, ecx */
    RECOMP_CALL(sub_1414CBC0); /* 0x14164CE2: call 0x1414cbc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14164CE7: mov esi, eax */
    /* test esi, esi */ /* 0x14164CE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164D3B; /* 0x14164CEB: je 0x14164d3b */
L_14164CED:
    edx = MEM32(ebp + 0x14); /* 0x14164CED: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x14164CF0: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x14164CF3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x14164CF6: push esi */
    RECOMP_CALL(sub_1414CE40); /* 0x14164CF7: call 0x1414ce40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164CFC: mov edi, eax */
    /* test edi, edi */ /* 0x14164CFE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164D40; /* 0x14164D00: js 0x14164d40 */
L_14164D02:
    eax = MEM32(ebx + 0x10); /* 0x14164D02: mov eax, dword ptr [ebx + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x14164D05: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebx + 0x18); /* 0x14164D08: mov eax, dword ptr [ebx + 0x18] */
    MEM32(esi + 0x4) = eax; /* 0x14164D0B: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebx + 0x18); /* 0x14164D0E: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x14164D11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164D19; /* 0x14164D13: je 0x14164d19 */
L_14164D15:
    MEM32(eax) = esi; /* 0x14164D15: mov dword ptr [eax], esi */
    goto L_14164D1C; /* 0x14164D17: jmp 0x14164d1c */
L_14164D19:
    MEM32(ebx + 0x14) = esi; /* 0x14164D19: mov dword ptr [ebx + 0x14], esi */
L_14164D1C:
    eax = MEM32(ebp + 0x8); /* 0x14164D1C: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0; /* 0x14164D1F: mov dword ptr [esi], 0 */
    MEM32(ebx + 0x18) = esi; /* 0x14164D25: mov dword ptr [ebx + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x14164D28: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 4));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 4; /* 0x14164D2B: or dword ptr [ebx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x14164D2F: mov dword ptr [eax], esi */
    edi = POP32_VAL(esp); /* 0x14164D31: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164D32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14164D34: pop esi */
    ebp = POP32_VAL(esp); /* 0x14164D35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x14164D36: ret 0x10 */
L_14164D39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14164D39: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14164D3B:
    edi = 0x8007000Eu; /* 0x14164D3B: mov edi, 0x8007000e */
L_14164D40:
    /* test esi, esi */ /* 0x14164D40: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164D4E; /* 0x14164D42: je 0x14164d4e */
L_14164D44:
    RECOMP_CALL(sub_1414CD40); /* 0x14164D44: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x14164D49: call 0x14150660 */
    RECOMP_FLAGS_IN();
L_14164D4E:
    eax = edi; /* 0x14164D4E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14164D50: pop edi */
    esi = POP32_VAL(esp); /* 0x14164D51: pop esi */
    ebp = POP32_VAL(esp); /* 0x14164D52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x14164D53: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_14164D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164D60u);

L_14164D60:
    edi = edi; /* 0x14164D60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164D62: push ebp */
    ebp = esp; /* 0x14164D63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14164D65: push ebx */
    ebx = eax; /* 0x14164D66: mov ebx, eax */
    eax = MEM32(0x141F3DEC); /* 0x14164D68: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, esi); /* 0x14164D6D: push esi */
    PUSH32(esp, edi); /* 0x14164D6E: push edi */
    /* test eax, eax */ /* 0x14164D6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164D77; /* 0x14164D71: jns 0x14164d77 */
L_14164D73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164D73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164D7E; /* 0x14164D75: jmp 0x14164d7e */
L_14164D77:
    PUSH32(esp, eax); /* 0x14164D77: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164D78: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14164D7E:
    PUSH32(esp, 0x50u); /* 0x14164D7E: push 0x50 */
    PUSH32(esp, 0); /* 0x14164D80: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164D82: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x1400109C)); /* 0x14164D84: call dword ptr [0x1400109c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14164D8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164DCF; /* 0x14164D8C: je 0x14164dcf */
L_14164D8E:
    RECOMP_CALL(sub_141A4190); /* 0x14164D8E: call 0x141a4190 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14164D93: mov esi, eax */
    /* test esi, esi */ /* 0x14164D95: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164DD1; /* 0x14164D97: je 0x14164dd1 */
L_14164D99:
    edx = MEM32(ebp + 0x8); /* 0x14164D99: mov edx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141A4290); /* 0x14164D9C: call 0x141a4290 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164DA1: mov edi, eax */
    /* test edi, edi */ /* 0x14164DA3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164DD6; /* 0x14164DA5: js 0x14164dd6 */
L_14164DA7:
    PUSH32(esp, esi); /* 0x14164DA7: push esi */
    RECOMP_CALL(sub_141643F0); /* 0x14164DA8: call 0x141643f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164DAD: mov edi, eax */
    /* test edi, edi */ /* 0x14164DAF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164DD6; /* 0x14164DB1: js 0x14164dd6 */
L_14164DB3:
    eax = MEM32(ebx + 0xB008); /* 0x14164DB3: mov eax, dword ptr [ebx + 0xb008] */
    MEM32(esi) = eax; /* 0x14164DB9: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x14164DBB: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xB008)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xB008) = MEM32(ebx + 0xB008) + 1; /* 0x14164DBE: inc dword ptr [ebx + 0xb008] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x14164DC4: pop edi */
    MEM32(eax) = esi; /* 0x14164DC5: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x14164DC7: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164DC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14164DCA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164DCB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14164DCC: ret 8 */
L_14164DCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14164DCF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14164DD1:
    edi = 0x8007000Eu; /* 0x14164DD1: mov edi, 0x8007000e */
L_14164DD6:
    /* test esi, esi */ /* 0x14164DD6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164DDF; /* 0x14164DD8: je 0x14164ddf */
L_14164DDA:
    RECOMP_CALL(sub_14163FF0); /* 0x14164DDA: call 0x14163ff0 */
    RECOMP_FLAGS_IN();
L_14164DDF:
    eax = edi; /* 0x14164DDF: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14164DE1: pop edi */
    esi = POP32_VAL(esp); /* 0x14164DE2: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164DE3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164DE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14164DE5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14164DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164DF0u);

L_14164DF0:
    edi = edi; /* 0x14164DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164DF2: push ebp */
    ebp = esp; /* 0x14164DF3: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164DF5: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164DFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164E02; /* 0x14164DFC: jns 0x14164e02 */
L_14164DFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164DFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164E09; /* 0x14164E00: jmp 0x14164e09 */
L_14164E02:
    PUSH32(esp, eax); /* 0x14164E02: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164E03: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14164E09:
    PUSH32(esp, ebx); /* 0x14164E09: push ebx */
    PUSH32(esp, 0x90u); /* 0x14164E0A: push 0x90 */
    PUSH32(esp, 0); /* 0x14164E0F: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164E11: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x1400109C)); /* 0x14164E13: call dword ptr [0x1400109c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164E19: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164E1B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164EC2; /* 0x14164E1D: je 0x14164ec2 */
L_14164E23:
    edx = MEM32(ebp + 0xC); /* 0x14164E23: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x14164E26: push esi */
    esi = ebx + 0x28; /* 0x14164E27: lea esi, [ebx + 0x28] */
    MEM32(esi) = 0; /* 0x14164E2A: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14164E30: mov dword ptr [esi + 4], 0 */
    PUSH32(esp, edi); /* 0x14164E37: push edi */
    MEM32(ebx) = 0xFFFFFFFFu; /* 0x14164E38: mov dword ptr [ebx], 0xffffffff */
    RECOMP_CALL(sub_14190830); /* 0x14164E3E: call 0x14190830 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164E43: mov edi, eax */
    /* test edi, edi */ /* 0x14164E45: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164E77; /* 0x14164E47: js 0x14164e77 */
L_14164E49:
    edi = MEM32(ebp + 0x8); /* 0x14164E49: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14164E4C: push ebx */
    RECOMP_CALL(sub_141644D0); /* 0x14164E4D: call 0x141644d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164E52: mov edi, eax */
    /* test edi, edi */ /* 0x14164E54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164E77; /* 0x14164E56: js 0x14164e77 */
L_14164E58:
    ecx = MEM32(ebp + 0x8); /* 0x14164E58: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xB00C); /* 0x14164E5B: mov eax, dword ptr [ecx + 0xb00c] */
    MEM32(ebx) = eax; /* 0x14164E61: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0x10); /* 0x14164E63: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xB00C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xB00C) = MEM32(ecx + 0xB00C) + 1; /* 0x14164E66: inc dword ptr [ecx + 0xb00c] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x14164E6C: pop edi */
    MEM32(eax) = ebx; /* 0x14164E6D: mov dword ptr [eax], ebx */
    esi = POP32_VAL(esp); /* 0x14164E6F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164E70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14164E72: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164E73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164E74: ret 0xc */
L_14164E77:
    MEM32(esi) = 0; /* 0x14164E77: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14164E7D: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_141909D0); /* 0x14164E84: call 0x141909d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x14164E89: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164E8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164EA7; /* 0x14164E90: jns 0x14164ea7 */
L_14164E92:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164E92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x14164E94: push ebx */
    PUSH32(esp, eax); /* 0x14164E95: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x14164E96: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14164E98: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x14164E9E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14164EA0: pop edi */
    esi = POP32_VAL(esp); /* 0x14164EA1: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164EA2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164EA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164EA4: ret 0xc */
L_14164EA7:
    PUSH32(esp, eax); /* 0x14164EA7: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164EA8: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14164EAE: push ebx */
    PUSH32(esp, 0); /* 0x14164EAF: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x14164EB1: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x14001098)); /* 0x14164EB3: call dword ptr [0x14001098] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x14164EB9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14164EBB: pop edi */
    esi = POP32_VAL(esp); /* 0x14164EBC: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164EBD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164EBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164EBF: ret 0xc */
L_14164EC2:
    eax = 0x8007000Eu; /* 0x14164EC2: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164EC7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164EC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164EC9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14164EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164EE0u);

L_14164EE0:
    edi = edi; /* 0x14164EE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164EE2: push ebp */
    ebp = esp; /* 0x14164EE3: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164EE5: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, ebx); /* 0x14164EEA: push ebx */
    PUSH32(esp, esi); /* 0x14164EEB: push esi */
    PUSH32(esp, edi); /* 0x14164EEC: push edi */
    /* test eax, eax */ /* 0x14164EED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164EF5; /* 0x14164EEF: jns 0x14164ef5 */
L_14164EF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14164EF1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164EFE; /* 0x14164EF3: jmp 0x14164efe */
L_14164EF5:
    PUSH32(esp, eax); /* 0x14164EF5: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164EF6: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14164EFC: mov ecx, eax */
L_14164EFE:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x14164EFE: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14164F1F; /* 0x14164F02: je 0x14164f1f */
L_14164F04:
    edi = MEM32(ecx + 0xC); /* 0x14164F04: mov edi, dword ptr [ecx + 0xc] */
    /* test edi, edi */ /* 0x14164F07: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164F30; /* 0x14164F09: je 0x14164f30 */
L_14164F0B:
    eax = MEM32(edi); /* 0x14164F0B: mov eax, dword ptr [edi] */
    MEM32(ecx + 0xC) = eax; /* 0x14164F0D: mov dword ptr [ecx + 0xc], eax */
    /* test eax, eax */ /* 0x14164F10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14164F17; /* 0x14164F12: jne 0x14164f17 */
L_14164F14:
    MEM32(ecx + 0x10) = eax; /* 0x14164F14: mov dword ptr [ecx + 0x10], eax */
L_14164F17:
    MEM32(edi) = 0xFEFEFEFEu; /* 0x14164F17: mov dword ptr [edi], 0xfefefefe */
    goto L_14164F30; /* 0x14164F1D: jmp 0x14164f30 */
L_14164F1F:
    ecx = MEM32(ecx + 0x8); /* 0x14164F1F: mov ecx, dword ptr [ecx + 8] */
    PUSH32(esp, 0x10u); /* 0x14164F22: push 0x10 */
    PUSH32(esp, 0x108u); /* 0x14164F24: push 0x108 */
    RECOMP_CALL(sub_141E6491); /* 0x14164F29: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14164F2E: mov edi, eax */
L_14164F30:
    /* test edi, edi */ /* 0x14164F30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14164FBB; /* 0x14164F32: je 0x14164fbb */
L_14164F38:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x14164F38: push dword ptr [ebp + 0xc] */
    ebx = edi; /* 0x14164F3B: mov ebx, edi */
    MEM32(edi) = 0; /* 0x14164F3D: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x14164F43: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x40) = 0; /* 0x14164F4A: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x44) = 0; /* 0x14164F51: mov dword ptr [edi + 0x44], 0 */
    MEM32(edi + 0x48) = 0; /* 0x14164F58: mov dword ptr [edi + 0x48], 0 */
    MEM32(edi + 0x4C) = 0; /* 0x14164F5F: mov dword ptr [edi + 0x4c], 0 */
    MEM32(edi + 0x58) = 0xFFFFFFFFu; /* 0x14164F66: mov dword ptr [edi + 0x58], 0xffffffff */
    MEM32(edi + 0x60) = 0xFFFFFFFFu; /* 0x14164F6D: mov dword ptr [edi + 0x60], 0xffffffff */
    MEM32(edi + 0x24) = 0; /* 0x14164F74: mov dword ptr [edi + 0x24], 0 */
    RECOMP_CALL(sub_1415ED00); /* 0x14164F7B: call 0x1415ed00 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164F80: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164F82: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164FA6; /* 0x14164F84: js 0x14164fa6 */
L_14164F86:
    ebx = MEM32(ebp + 0x8); /* 0x14164F86: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x14164F89: push 1 */
    esi = edi; /* 0x14164F8B: mov esi, edi */
    RECOMP_CALL(sub_141645C0); /* 0x14164F8D: call 0x141645c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14164F92: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14164F94: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14164FA6; /* 0x14164F96: js 0x14164fa6 */
L_14164F98:
    eax = MEM32(ebp + 0x10); /* 0x14164F98: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edi; /* 0x14164F9B: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14164F9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14164F9F: pop edi */
    esi = POP32_VAL(esp); /* 0x14164FA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164FA1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164FA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164FA3: ret 0xc */
L_14164FA6:
    RECOMP_CALL(sub_1415EA70); /* 0x14164FA6: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x14164FAB: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x14164FAD: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x14164FB2: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x14164FB4: pop edi */
    esi = POP32_VAL(esp); /* 0x14164FB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x14164FB6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164FB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164FB8: ret 0xc */
L_14164FBB:
    edi = POP32_VAL(esp); /* 0x14164FBB: pop edi */
    esi = POP32_VAL(esp); /* 0x14164FBC: pop esi */
    eax = 0x8007000Eu; /* 0x14164FBD: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14164FC2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14164FC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14164FC4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14164FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14164FD0u);

L_14164FD0:
    edi = edi; /* 0x14164FD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14164FD2: push ebp */
    ebp = esp; /* 0x14164FD3: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x14164FD5: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14164FDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14164FE2; /* 0x14164FDC: jns 0x14164fe2 */
L_14164FDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14164FDE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14164FEB; /* 0x14164FE0: jmp 0x14164feb */
L_14164FE2:
    PUSH32(esp, eax); /* 0x14164FE2: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14164FE3: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x14164FE9: mov edx, eax */
L_14164FEB:
    /* cmp MEM32(edx + 0x18), 0 */ /* 0x14164FEB: cmp dword ptr [edx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1416500C; /* 0x14164FEF: je 0x1416500c */
L_14164FF1:
    ecx = MEM32(edx + 0x18); /* 0x14164FF1: mov ecx, dword ptr [edx + 0x18] */
    /* test ecx, ecx */ /* 0x14164FF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416501A; /* 0x14164FF6: je 0x1416501a */
L_14164FF8:
    eax = MEM32(ecx); /* 0x14164FF8: mov eax, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x14164FFA: mov dword ptr [edx + 0x18], eax */
    /* test eax, eax */ /* 0x14164FFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14165004; /* 0x14164FFF: jne 0x14165004 */
L_14165001:
    MEM32(edx + 0x1C) = eax; /* 0x14165001: mov dword ptr [edx + 0x1c], eax */
L_14165004:
    MEM32(ecx) = 0xFEFEFEFEu; /* 0x14165004: mov dword ptr [ecx], 0xfefefefe */
    goto L_1416501A; /* 0x1416500A: jmp 0x1416501a */
L_1416500C:
    ecx = MEM32(edx + 0x14); /* 0x1416500C: mov ecx, dword ptr [edx + 0x14] */
    PUSH32(esp, 0x10u); /* 0x1416500F: push 0x10 */
    PUSH32(esp, 0x50u); /* 0x14165011: push 0x50 */
    RECOMP_CALL(sub_141E6491); /* 0x14165013: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14165018: mov ecx, eax */
L_1416501A:
    PUSH32(esp, esi); /* 0x1416501A: push esi */
    PUSH32(esp, edi); /* 0x1416501B: push edi */
    /* test ecx, ecx */ /* 0x1416501C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165077; /* 0x1416501E: je 0x14165077 */
L_14165020:
    eax = ecx; /* 0x14165020: mov eax, ecx */
    RECOMP_CALL(sub_1414CBC0); /* 0x14165022: call 0x1414cbc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14165027: mov esi, eax */
    /* test esi, esi */ /* 0x14165029: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165079; /* 0x1416502B: je 0x14165079 */
L_1416502D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1416502D: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x14165030: push esi */
    RECOMP_CALL(sub_1414DBB0); /* 0x14165031: call 0x1414dbb0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14165036: mov edi, eax */
    /* test edi, edi */ /* 0x14165038: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416507E; /* 0x1416503A: js 0x1416507e */
L_1416503C:
    eax = MEM32(ebx + 0x10); /* 0x1416503C: mov eax, dword ptr [ebx + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x1416503F: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebx + 0x18); /* 0x14165042: mov eax, dword ptr [ebx + 0x18] */
    MEM32(esi + 0x4) = eax; /* 0x14165045: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebx + 0x18); /* 0x14165048: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x1416504B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165053; /* 0x1416504D: je 0x14165053 */
L_1416504F:
    MEM32(eax) = esi; /* 0x1416504F: mov dword ptr [eax], esi */
    goto L_14165056; /* 0x14165051: jmp 0x14165056 */
L_14165053:
    MEM32(ebx + 0x14) = esi; /* 0x14165053: mov dword ptr [ebx + 0x14], esi */
L_14165056:
    eax = MEM32(ebp + 0xC); /* 0x14165056: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi) = 0; /* 0x14165059: mov dword ptr [esi], 0 */
    MEM32(ebx + 0x18) = esi; /* 0x1416505F: mov dword ptr [ebx + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x14165062: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 4));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 4; /* 0x14165065: or dword ptr [ebx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x14165069: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416506F; /* 0x1416506B: je 0x1416506f */
L_1416506D:
    MEM32(eax) = esi; /* 0x1416506D: mov dword ptr [eax], esi */
L_1416506F:
    edi = POP32_VAL(esp); /* 0x1416506F: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14165070: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14165072: pop esi */
    ebp = POP32_VAL(esp); /* 0x14165073: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14165074: ret 8 */
L_14165077:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14165077: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14165079:
    edi = 0x8007000Eu; /* 0x14165079: mov edi, 0x8007000e */
L_1416507E:
    /* test esi, esi */ /* 0x1416507E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416508C; /* 0x14165080: je 0x1416508c */
L_14165082:
    RECOMP_CALL(sub_1414CD40); /* 0x14165082: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x14165087: call 0x14150660 */
    RECOMP_FLAGS_IN();
L_1416508C:
    eax = edi; /* 0x1416508C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1416508E: pop edi */
    esi = POP32_VAL(esp); /* 0x1416508F: pop esi */
    ebp = POP32_VAL(esp); /* 0x14165090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14165091: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141650A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141650A0u);

L_141650A0:
    edi = edi; /* 0x141650A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141650A2: push ebp */
    ebp = esp; /* 0x141650A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141650A5: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x141650A6: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x141650A9: push esi */
    esi = eax; /* 0x141650AA: mov esi, eax */
    eax = MEM32(esi + 0x18); /* 0x141650AC: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141650AF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x141650B2: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x141650B4: mov dword ptr [edi], eax */
    eax = MEM32(esi); /* 0x141650B6: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x141650B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141650C1; /* 0x141650BA: je 0x141650c1 */
L_141650BC:
    MEM32(eax + 0x4) = edi; /* 0x141650BC: mov dword ptr [eax + 4], edi */
    goto L_141650C4; /* 0x141650BF: jmp 0x141650c4 */
L_141650C1:
    MEM32(ebx + 0x18) = edi; /* 0x141650C1: mov dword ptr [ebx + 0x18], edi */
L_141650C4:
    MEM32(edi + 0x4) = esi; /* 0x141650C4: mov dword ptr [edi + 4], esi */
    eax = MEM32(esi + 0x4); /* 0x141650C7: mov eax, dword ptr [esi + 4] */
    MEM32(esi) = edi; /* 0x141650CA: mov dword ptr [esi], edi */
    /* test eax, eax */ /* 0x141650CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141650D4; /* 0x141650CE: je 0x141650d4 */
L_141650D0:
    MEM32(eax) = edi; /* 0x141650D0: mov dword ptr [eax], edi */
    goto L_141650D7; /* 0x141650D2: jmp 0x141650d7 */
L_141650D4:
    MEM32(ebx + 0x14) = edi; /* 0x141650D4: mov dword ptr [ebx + 0x14], edi */
L_141650D7:
    ecx = MEM32(esi); /* 0x141650D7: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x141650D9: mov eax, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x141650DC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141650E5; /* 0x141650DE: je 0x141650e5 */
L_141650E0:
    MEM32(ecx + 0x4) = eax; /* 0x141650E0: mov dword ptr [ecx + 4], eax */
    goto L_141650E8; /* 0x141650E3: jmp 0x141650e8 */
L_141650E5:
    MEM32(ebx + 0x18) = eax; /* 0x141650E5: mov dword ptr [ebx + 0x18], eax */
L_141650E8:
    MEM32(esi) = 0xFFFFFFFFu; /* 0x141650E8: mov dword ptr [esi], 0xffffffff */
    MEM32(esi + 0x4) = 0xFFFFFFFFu; /* 0x141650EE: mov dword ptr [esi + 4], 0xffffffff */
    /* test LO8(edx), 2 */ /* 0x141650F5: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165107; /* 0x141650F8: je 0x14165107 */
L_141650FA:
    RECOMP_CALL(sub_1414CD40); /* 0x141650FA: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x141650FF: call 0x14150660 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x14165104: mov edx, dword ptr [ebp + 8] */
L_14165107:
    /* cmp MEM32(edi + 0x18), 0xFFFFFFFFu */ /* 0x14165107: cmp dword ptr [edi + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1416510B: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14165119; /* 0x1416510C: je 0x14165119 */
L_1416510E:
    eax = 0x80004005u; /* 0x1416510E: mov eax, 0x80004005 */
    esp = ebp; /* 0x14165113: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165115: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14165116: ret 4 */
L_14165119:
    eax = MEM32(ebp + (-0x4)); /* 0x14165119: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x18) = eax; /* 0x1416511C: mov dword ptr [edi + 0x18], eax */
    /* test LO8(edx), 1 */ /* 0x1416511F: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165137; /* 0x14165122: je 0x14165137 */
L_14165124:
    ecx = edi; /* 0x14165124: mov ecx, edi */
    RECOMP_CALL(sub_140CAE30); /* 0x14165126: call 0x140cae30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 4));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 4; /* 0x1416512B: or dword ptr [ebx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416512F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x14165131: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165133: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14165134: ret 4 */
L_14165137:
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 2)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 2));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 2; /* 0x14165137: or dword ptr [ebx + 0x1c], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 4));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 4; /* 0x1416513B: or dword ptr [ebx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416513F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x14165141: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165143: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14165144: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14165150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14165150u);

L_14165150:
    edi = edi; /* 0x14165150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14165152: push ebp */
    ebp = esp; /* 0x14165153: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14165155: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x14165158: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1416515B: push esi */
    esi = eax; /* 0x1416515C: mov esi, eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x1416515E: mov dword ptr [ebp - 4], 0 */
    /* test edx, edx */ /* 0x14165165: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141651C4; /* 0x14165167: je 0x141651c4 */
L_14165169:
    esp = esp; /* 0x14165169: lea esp, [esp] */
L_14165170:
    /* test esi, esi */ /* 0x14165170: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165210; /* 0x14165172: je 0x14165210 */
L_14165178:
    eax = MEM32(esi + 0x4); /* 0x14165178: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x1416517B: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1416517D: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x14165180: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165188; /* 0x14165182: je 0x14165188 */
L_14165184:
    MEM32(eax) = ecx; /* 0x14165184: mov dword ptr [eax], ecx */
    goto L_1416518B; /* 0x14165186: jmp 0x1416518b */
L_14165188:
    MEM32(ebx + 0x14) = ecx; /* 0x14165188: mov dword ptr [ebx + 0x14], ecx */
L_1416518B:
    ecx = MEM32(esi); /* 0x1416518B: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x1416518D: mov eax, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x14165190: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165199; /* 0x14165192: je 0x14165199 */
L_14165194:
    MEM32(ecx + 0x4) = eax; /* 0x14165194: mov dword ptr [ecx + 4], eax */
    goto L_1416519C; /* 0x14165197: jmp 0x1416519c */
L_14165199:
    MEM32(ebx + 0x18) = eax; /* 0x14165199: mov dword ptr [ebx + 0x18], eax */
L_1416519C:
    MEM32(esi) = 0xFFFFFFFFu; /* 0x1416519C: mov dword ptr [esi], 0xffffffff */
    MEM32(esi + 0x4) = 0xFFFFFFFFu; /* 0x141651A2: mov dword ptr [esi + 4], 0xffffffff */
    RECOMP_CALL(sub_1414CD40); /* 0x141651A9: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x141651AE: call 0x14150660 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x141651B3: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0xC); /* 0x141651B6: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x8)); /* 0x141651B9: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141651BC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x141651BD: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edx */ /* 0x141651C0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14165170; /* 0x141651C2: jb 0x14165170 */
L_141651C4:
    eax = MEM32(edi); /* 0x141651C4: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141651C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x141651C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141651D7; /* 0x141651CA: je 0x141651d7 */
L_141651CC:
    esp = esp; /* 0x141651CC: lea esp, [esp] */
L_141651D0:
    eax = MEM32(eax); /* 0x141651D0: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141651D2: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x141651D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141651D0; /* 0x141651D5: jne 0x141651d0 */
L_141651D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x141651D7: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + ecx; /* 0x141651D9: add dword ptr [ebx + 0x10], ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x141651DC: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141651E8; /* 0x141651E0: jne 0x141651e8 */
L_141651E2:
    /* test esi, esi */ /* 0x141651E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416522C; /* 0x141651E4: je 0x1416522c */
L_141651E6:
    esi = MEM32(esi); /* 0x141651E6: mov esi, dword ptr [esi] */
L_141651E8:
    /* test esi, esi */ /* 0x141651E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416522C; /* 0x141651EA: je 0x1416522c */
L_141651EC:
    ecx = MEM32(edi); /* 0x141651EC: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x141651EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416525B; /* 0x141651F0: je 0x1416525b */
L_141651F2:
    eax = MEM32(esi + 0x4); /* 0x141651F2: mov eax, dword ptr [esi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x141651F5: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(esi + 0x4); /* 0x141651F8: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(edi); /* 0x141651FB: mov eax, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x141651FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416521C; /* 0x141651FF: je 0x1416521c */
L_14165201:
    MEM32(ecx) = eax; /* 0x14165201: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x4); /* 0x14165203: mov eax, dword ptr [edi + 4] */
    MEM32(eax) = esi; /* 0x14165206: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x4); /* 0x14165208: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1416520B: mov dword ptr [esi + 4], eax */
    goto L_1416524E; /* 0x1416520E: jmp 0x1416524e */
L_14165210:
    eax = 0x80004005u; /* 0x14165210: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x14165215: pop esi */
    esp = ebp; /* 0x14165216: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165218: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14165219: ret 8 */
L_1416521C:
    MEM32(ebx + 0x14) = eax; /* 0x1416521C: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(edi + 0x4); /* 0x1416521F: mov eax, dword ptr [edi + 4] */
    MEM32(eax) = esi; /* 0x14165222: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x4); /* 0x14165224: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x14165227: mov dword ptr [esi + 4], eax */
    goto L_1416524E; /* 0x1416522A: jmp 0x1416524e */
L_1416522C:
    ecx = MEM32(ebx + 0x18); /* 0x1416522C: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(edi); /* 0x1416522F: mov eax, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x14165231: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165239; /* 0x14165233: je 0x14165239 */
L_14165235:
    MEM32(ecx) = eax; /* 0x14165235: mov dword ptr [ecx], eax */
    goto L_1416523C; /* 0x14165237: jmp 0x1416523c */
L_14165239:
    MEM32(ebx + 0x14) = eax; /* 0x14165239: mov dword ptr [ebx + 0x14], eax */
L_1416523C:
    ecx = MEM32(edi); /* 0x1416523C: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x1416523E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165248; /* 0x14165240: je 0x14165248 */
L_14165242:
    eax = MEM32(ebx + 0x18); /* 0x14165242: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ecx + 0x4) = eax; /* 0x14165245: mov dword ptr [ecx + 4], eax */
L_14165248:
    eax = MEM32(edi + 0x4); /* 0x14165248: mov eax, dword ptr [edi + 4] */
    MEM32(ebx + 0x18) = eax; /* 0x1416524B: mov dword ptr [ebx + 0x18], eax */
L_1416524E:
    MEM32(edi + 0x4) = 0; /* 0x1416524E: mov dword ptr [edi + 4], 0 */
    MEM32(edi) = 0; /* 0x14165255: mov dword ptr [edi], 0 */
L_1416525B:
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 7)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 7));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 7; /* 0x1416525B: or dword ptr [ebx + 0x1c], 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416525F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14165261: pop esi */
    esp = ebp; /* 0x14165262: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165264: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14165265: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14165270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14165270u);

L_14165270:
    edi = edi; /* 0x14165270: mov edi, edi */
    PUSH32(esp, esi); /* 0x14165272: push esi */
    esi = eax; /* 0x14165273: mov esi, eax */
    /* test ecx, ecx */ /* 0x14165275: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165292; /* 0x14165277: je 0x14165292 */
L_14165279:
    esp = esp; /* 0x14165279: lea esp, [esp] */
L_14165280:
    eax = esi; /* 0x14165280: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x14165282: dec esi */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x14165283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165292; /* 0x14165285: je 0x14165292 */
L_14165287:
    MEM32(edx) = ecx; /* 0x14165287: mov dword ptr [edx], ecx */
    ecx = MEM32(ecx); /* 0x14165289: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1416528B: add edx, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1416528E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14165280; /* 0x14165290: jne 0x14165280 */
L_14165292:
    esi = POP32_VAL(esp); /* 0x14165292: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14165293: ret  */
    RECOMP_REGS_OUT();
}

void sub_141652A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141652A0u);

L_141652A0:
    edi = edi; /* 0x141652A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141652A2: push ebp */
    ebp = esp; /* 0x141652A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141652A5: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x141652A6: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x8); /* 0x141652A9: mov ecx, dword ptr [edx + 8] */
    PUSH32(esp, ebx); /* 0x141652AC: push ebx */
    PUSH32(esp, esi); /* 0x141652AD: push esi */
    PUSH32(esp, edi); /* 0x141652AE: push edi */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x141652AF: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_141652B2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141652B2: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x141652B3: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14165317; /* 0x141652B5: jae 0x14165317 */
L_141652B7:
    eax = MEM32(edx + 0xB004); /* 0x141652B7: mov eax, dword ptr [edx + 0xb004] */
    edi = MEM32(eax + ebx * 4); /* 0x141652BD: mov edi, dword ptr [eax + ebx*4] */
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x141652C0: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141652B2; /* 0x141652C4: je 0x141652b2 */
L_141652C6:
    edi = MEM32(edi + 0x28); /* 0x141652C6: mov edi, dword ptr [edi + 0x28] */
    eax = MEM32(edi); /* 0x141652C9: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141652CB: mov dword ptr [ebp - 4], eax */
    edi = edi; /* 0x141652CE: mov edi, edi */
L_141652D0:
    ecx = MEM32(ebp + 0xC); /* 0x141652D0: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi + 0x58), ecx */ /* 0x141652D3: cmp dword ptr [edi + 0x58], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141652EA; /* 0x141652D6: jb 0x141652ea */
L_141652D8:
    RECOMP_CALL(sub_1415EA70); /* 0x141652D8: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x141652DD: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x141652DF: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x141652E4: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x141652E7: mov edx, dword ptr [ebp + 8] */
L_141652EA:
    /* test eax, eax */ /* 0x141652EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141652F4; /* 0x141652EC: je 0x141652f4 */
L_141652EE:
    edi = eax; /* 0x141652EE: mov edi, eax */
    eax = MEM32(eax); /* 0x141652F0: mov eax, dword ptr [eax] */
    goto L_14165310; /* 0x141652F2: jmp 0x14165310 */
L_141652F4:
    ecx = MEM32(edx + 0x8); /* 0x141652F4: mov ecx, dword ptr [edx + 8] */
L_141652F7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141652F7: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x141652F8: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14165317; /* 0x141652FA: jae 0x14165317 */
L_141652FC:
    eax = MEM32(edx + 0xB004); /* 0x141652FC: mov eax, dword ptr [edx + 0xb004] */
    eax = MEM32(eax + ebx * 4); /* 0x14165302: mov eax, dword ptr [eax + ebx*4] */
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x14165305: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141652F7; /* 0x14165309: je 0x141652f7 */
L_1416530B:
    edi = MEM32(eax + 0x28); /* 0x1416530B: mov edi, dword ptr [eax + 0x28] */
    eax = MEM32(edi); /* 0x1416530E: mov eax, dword ptr [edi] */
L_14165310:
    MEM32(ebp + (-0x4)) = eax; /* 0x14165310: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x14165313: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141652D0; /* 0x14165315: jne 0x141652d0 */
L_14165317:
    eax = MEM32(ebp + 0xC); /* 0x14165317: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(edx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0x1C) | 4));
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) | 4; /* 0x1416531A: or dword ptr [edx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1416531E: pop edi */
    esi = POP32_VAL(esp); /* 0x1416531F: pop esi */
    MEM32(edx + 0xC) = eax; /* 0x14165320: mov dword ptr [edx + 0xc], eax */
    ebx = POP32_VAL(esp); /* 0x14165323: pop ebx */
    esp = ebp; /* 0x14165324: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14165326: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14165327: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14165330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14165330u);

L_14165330:
    edi = edi; /* 0x14165330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14165332: push ebp */
    ebp = esp; /* 0x14165333: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14165335: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x14165338: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x8); /* 0x1416533B: mov ecx, dword ptr [edx + 8] */
    PUSH32(esp, ebx); /* 0x1416533E: push ebx */
    PUSH32(esp, esi); /* 0x1416533F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14165340: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x14165342: push edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x14165343: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x14165346: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x14165349: lea esp, [esp] */
L_14165350:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x14165350: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x14165351: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141653C4; /* 0x14165353: jae 0x141653c4 */
L_14165355:
    eax = MEM32(edx + 0xB004); /* 0x14165355: mov eax, dword ptr [edx + 0xb004] */
    edi = MEM32(eax + ebx * 4); /* 0x1416535B: mov edi, dword ptr [eax + ebx*4] */
    /* cmp MEM32(edi + 0x28), esi */ /* 0x1416535E: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14165350; /* 0x14165361: je 0x14165350 */
L_14165363:
    edi = MEM32(edi + 0x28); /* 0x14165363: mov edi, dword ptr [edi + 0x28] */
    eax = MEM32(edi); /* 0x14165366: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14165368: mov dword ptr [ebp - 4], eax */
    goto L_14165370; /* 0x1416536B: jmp 0x14165370 */
L_14165370:
    /* cmp MEM32(edi + 0x84), 0xFFFFFFFFu */ /* 0x14165370: cmp dword ptr [edi + 0x84], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x84)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14165390; /* 0x14165377: jne 0x14165390 */
L_14165379:
    RECOMP_CALL(sub_1415EA70); /* 0x14165379: call 0x1415ea70 */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x1416537E: mov esi, edi */
    RECOMP_CALL(sub_14163BB0); /* 0x14165380: call 0x14163bb0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x14165385: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x14165388: mov edx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x1416538B: mov esi, dword ptr [ebp - 8] */
    goto L_14165397; /* 0x1416538E: jmp 0x14165397 */
L_14165390:
    MEM32(edi + 0x58) = esi; /* 0x14165390: mov dword ptr [edi + 0x58], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14165393: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = esi; /* 0x14165394: mov dword ptr [ebp - 8], esi */
L_14165397:
    /* test eax, eax */ /* 0x14165397: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141653A1; /* 0x14165399: je 0x141653a1 */
L_1416539B:
    edi = eax; /* 0x1416539B: mov edi, eax */
    eax = MEM32(eax); /* 0x1416539D: mov eax, dword ptr [eax] */
    goto L_141653BD; /* 0x1416539F: jmp 0x141653bd */
L_141653A1:
    ecx = MEM32(edx + 0x8); /* 0x141653A1: mov ecx, dword ptr [edx + 8] */
L_141653A4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141653A4: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x141653A5: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141653C4; /* 0x141653A7: jae 0x141653c4 */
L_141653A9:
    eax = MEM32(edx + 0xB004); /* 0x141653A9: mov eax, dword ptr [edx + 0xb004] */
    edi = MEM32(eax + ebx * 4); /* 0x141653AF: mov edi, dword ptr [eax + ebx*4] */
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x141653B2: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141653A4; /* 0x141653B6: je 0x141653a4 */
L_141653B8:
    edi = MEM32(edi + 0x28); /* 0x141653B8: mov edi, dword ptr [edi + 0x28] */
    eax = MEM32(edi); /* 0x141653BB: mov eax, dword ptr [edi] */
L_141653BD:
    MEM32(ebp + (-0x4)) = eax; /* 0x141653BD: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x141653C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14165370; /* 0x141653C2: jne 0x14165370 */
L_141653C4:
    /* cmp esi, MEM32(edx + 0xC) */ /* 0x141653C4: cmp esi, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141653D7; /* 0x141653C7: jne 0x141653d7 */
L_141653C9:
    eax = 1; /* 0x141653C9: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x141653CE: pop edi */
    esi = POP32_VAL(esp); /* 0x141653CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x141653D0: pop ebx */
    esp = ebp; /* 0x141653D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141653D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141653D4: ret 4 */
L_141653D7:
    _flag_a = (uint32_t)((MEM32(edx + 0x1C) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0x1C) | 4));
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) | 4; /* 0x141653D7: or dword ptr [edx + 0x1c], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141653DB: pop edi */
    MEM32(edx + 0xC) = esi; /* 0x141653DC: mov dword ptr [edx + 0xc], esi */
    esi = POP32_VAL(esp); /* 0x141653DF: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141653E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141653E2: pop ebx */
    esp = ebp; /* 0x141653E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141653E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141653E6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141653F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141653F0u);

L_141653F0:
    edi = edi; /* 0x141653F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141653F2: push ebp */
    ebp = esp; /* 0x141653F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141653F5: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0x10), eax */ /* 0x141653F8: cmp dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebx + 0x10; /* 0x141653FB: lea edx, [ebx + 0x10] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1416549B; /* 0x141653FE: jbe 0x1416549b */
L_14165404:
    PUSH32(esp, esi); /* 0x14165404: push esi */
    PUSH32(esp, edi); /* 0x14165405: push edi */
    edi = ebx + 0x1C; /* 0x14165406: lea edi, [ebx + 0x1c] */
    esp = esp; /* 0x14165409: lea esp, [esp] */
L_14165410:
    esi = MEM32(ebx + 0x18); /* 0x14165410: mov esi, dword ptr [ebx + 0x18] */
    ecx = MEM32(esi + 0x4); /* 0x14165413: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x14165416: mov eax, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x14165418: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165420; /* 0x1416541A: je 0x14165420 */
L_1416541C:
    MEM32(ecx) = eax; /* 0x1416541C: mov dword ptr [ecx], eax */
    goto L_14165423; /* 0x1416541E: jmp 0x14165423 */
L_14165420:
    MEM32(ebx + 0x14) = eax; /* 0x14165420: mov dword ptr [ebx + 0x14], eax */
L_14165423:
    ecx = MEM32(esi); /* 0x14165423: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x14165425: mov eax, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x14165428: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165431; /* 0x1416542A: je 0x14165431 */
L_1416542C:
    MEM32(ecx + 0x4) = eax; /* 0x1416542C: mov dword ptr [ecx + 4], eax */
    goto L_14165434; /* 0x1416542F: jmp 0x14165434 */
L_14165431:
    MEM32(ebx + 0x18) = eax; /* 0x14165431: mov dword ptr [ebx + 0x18], eax */
L_14165434:
    MEM32(esi) = 0xFFFFFFFFu; /* 0x14165434: mov dword ptr [esi], 0xffffffff */
    MEM32(esi + 0x4) = 0xFFFFFFFFu; /* 0x1416543A: mov dword ptr [esi + 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x14165441: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(edi) | 7)); _flag_b = (uint32_t)((MEM32(edi) | 7));
    MEM32(edi) = MEM32(edi) | 7; /* 0x14165443: or dword ptr [edi], 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1414CD40); /* 0x14165446: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x141F3DEC); /* 0x1416544B: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14165450: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1416548B; /* 0x14165452: js 0x1416548b */
L_14165454:
    PUSH32(esp, eax); /* 0x14165454: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14165455: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1416545B: mov edi, eax */
    /* test edi, edi */ /* 0x1416545D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165488; /* 0x1416545F: je 0x14165488 */
L_14165461:
    PUSH32(esp, 0x50u); /* 0x14165461: push 0x50 */
    PUSH32(esp, 0xFEu); /* 0x14165463: push 0xfe */
    PUSH32(esp, esi); /* 0x14165468: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x14165469: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x1416546E: mov dword ptr [esi], 0 */
    eax = MEM32(edi + 0x1C); /* 0x14165474: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14165477: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1416547A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14165482; /* 0x1416547C: je 0x14165482 */
L_1416547E:
    MEM32(eax) = esi; /* 0x1416547E: mov dword ptr [eax], esi */
    goto L_14165485; /* 0x14165480: jmp 0x14165485 */
L_14165482:
    MEM32(edi + 0x18) = esi; /* 0x14165482: mov dword ptr [edi + 0x18], esi */
L_14165485:
    MEM32(edi + 0x1C) = esi; /* 0x14165485: mov dword ptr [edi + 0x1c], esi */
L_14165488:
    edi = ebx + 0x1C; /* 0x14165488: lea edi, [ebx + 0x1c] */
L_1416548B:
    eax = MEM32(ebp + 0x8); /* 0x1416548B: mov eax, dword ptr [ebp + 8] */
    edx = ebx + 0x10; /* 0x1416548E: lea edx, [ebx + 0x10] */
    /* cmp MEM32(edx), eax */ /* 0x14165491: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14165410; /* 0x14165493: ja 0x14165410 */
L_14165499:
    edi = POP32_VAL(esp); /* 0x14165499: pop edi */
    esi = POP32_VAL(esp); /* 0x1416549A: pop esi */
L_1416549B:
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 7)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 7));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 7; /* 0x1416549B: or dword ptr [ebx + 0x1c], 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1416549F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141654A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141654A2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141654B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141654B0u);

L_141654B0:
    edi = edi; /* 0x141654B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x141654B2: push esi */
    esi = MEM32(ebx + 0x14); /* 0x141654B3: mov esi, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141654B6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x141654B8: push edi */
    /* test esi, esi */ /* 0x141654B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141654C1; /* 0x141654BB: je 0x141654c1 */
L_141654BD:
    edi = MEM32(esi); /* 0x141654BD: mov edi, dword ptr [esi] */
    goto L_141654C3; /* 0x141654BF: jmp 0x141654c3 */
L_141654C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141654C1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141654C3:
    /* test esi, esi */ /* 0x141654C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416552B; /* 0x141654C5: je 0x1416552b */
L_141654C7:
    /* test MEM32(esi + 0x48), 0xFFF00000u */ /* 0x141654C7: test dword ptr [esi + 0x48], 0xfff00000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0xFFF00000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14165514; /* 0x141654CE: jne 0x14165514 */
L_141654D0:
    ecx = MEM32(esi + 0x4); /* 0x141654D0: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x141654D3: mov eax, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x141654D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141654DD; /* 0x141654D7: je 0x141654dd */
L_141654D9:
    MEM32(ecx) = eax; /* 0x141654D9: mov dword ptr [ecx], eax */
    goto L_141654E0; /* 0x141654DB: jmp 0x141654e0 */
L_141654DD:
    MEM32(ebx + 0x14) = eax; /* 0x141654DD: mov dword ptr [ebx + 0x14], eax */
L_141654E0:
    ecx = MEM32(esi); /* 0x141654E0: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x141654E2: mov eax, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x141654E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141654EE; /* 0x141654E7: je 0x141654ee */
L_141654E9:
    MEM32(ecx + 0x4) = eax; /* 0x141654E9: mov dword ptr [ecx + 4], eax */
    goto L_141654F1; /* 0x141654EC: jmp 0x141654f1 */
L_141654EE:
    MEM32(ebx + 0x18) = eax; /* 0x141654EE: mov dword ptr [ebx + 0x18], eax */
L_141654F1:
    MEM32(esi) = 0xFFFFFFFFu; /* 0x141654F1: mov dword ptr [esi], 0xffffffff */
    MEM32(esi + 0x4) = 0xFFFFFFFFu; /* 0x141654F7: mov dword ptr [esi + 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) - 1; /* 0x141654FE: dec dword ptr [ebx + 0x10] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 7)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 7));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 7; /* 0x14165501: or dword ptr [ebx + 0x1c], 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x1C; /* 0x14165505: lea eax, [ebx + 0x1c] */
    RECOMP_CALL(sub_1414CD40); /* 0x14165508: call 0x1414cd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_14150660); /* 0x1416550D: call 0x14150660 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x14165512: mov al, 1 */
L_14165514:
    esi = edi; /* 0x14165514: mov esi, edi */
    /* test edi, edi */ /* 0x14165516: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416551E; /* 0x14165518: je 0x1416551e */
L_1416551A:
    edi = MEM32(edi); /* 0x1416551A: mov edi, dword ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_141654C7; /* 0x1416551C: jmp 0x141654c7 */
L_1416551E:
    /* test LO8(eax), LO8(eax) */ /* 0x1416551E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1416552B; /* 0x14165520: je 0x1416552b */
L_14165522:
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) | 5)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) | 5));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 5; /* 0x14165522: or dword ptr [ebx + 0x1c], 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14165526: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14165527: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14165529: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1416552A: ret  */
L_1416552B:
    edi = POP32_VAL(esp); /* 0x1416552B: pop edi */
    eax = 1; /* 0x1416552C: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x14165531: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14165532: ret  */
    RECOMP_REGS_OUT();
}

void sub_14163B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14163B70u);

L_14163B70:
    eax = MEM32(0x141F3DEC); /* 0x14163B70: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x14163B75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14163B85; /* 0x14163B77: jns 0x14163b85 */
L_14163B79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14163B79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = esi; /* 0x14163B7B: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = eax; /* 0x14163B7E: mov dword ptr [eax + 0xc], eax */
    MEM32(eax + 0x10) = eax; /* 0x14163B81: mov dword ptr [eax + 0x10], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163B84: ret  */
L_14163B85:
    PUSH32(esp, eax); /* 0x14163B85: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14163B86: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x8) = esi; /* 0x14163B8C: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = 0; /* 0x14163B8F: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x14163B96: mov dword ptr [eax + 0x10], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14163B9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1415F4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1415F4B0u);

L_1415F4B0:
    fp_push(*(double*)ADDR(edx + 0xC0)); /* 0x1415F4B0: fld qword ptr [edx + 0xc0] */
    fp_push(*(double*)ADDR(ecx + 0xC0)); /* 0x1415F4B6: fld qword ptr [ecx + 0xc0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415F4BC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415F4BE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415F4C0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415F5C6; /* 0x1415F4C3: jp 0x1415f5c6 */
L_1415F4C9:
    eax = MEM32(edx + 0xC8); /* 0x1415F4C9: mov eax, dword ptr [edx + 0xc8] */
    /* cmp eax, MEM32(ecx + 0xC8) */ /* 0x1415F4CF: cmp eax, dword ptr [ecx + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F4D5: jne 0x1415f5c6 */
L_1415F4DB:
    eax = MEM32(edx + 0xCC); /* 0x1415F4DB: mov eax, dword ptr [edx + 0xcc] */
    /* cmp eax, MEM32(ecx + 0xCC) */ /* 0x1415F4E1: cmp eax, dword ptr [ecx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F4E7: jne 0x1415f5c6 */
L_1415F4ED:
    eax = MEM32(edx + 0xD0); /* 0x1415F4ED: mov eax, dword ptr [edx + 0xd0] */
    /* cmp eax, MEM32(ecx + 0xD0) */ /* 0x1415F4F3: cmp eax, dword ptr [ecx + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F4F9: jne 0x1415f5c6 */
L_1415F4FF:
    eax = MEM32(edx + 0xD4); /* 0x1415F4FF: mov eax, dword ptr [edx + 0xd4] */
    /* cmp eax, MEM32(ecx + 0xD4) */ /* 0x1415F505: cmp eax, dword ptr [ecx + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xD4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F50B: jne 0x1415f5c6 */
L_1415F511:
    fp_push(*(double*)ADDR(edx + 0xD8)); /* 0x1415F511: fld qword ptr [edx + 0xd8] */
    fp_push(*(double*)ADDR(ecx + 0xD8)); /* 0x1415F517: fld qword ptr [ecx + 0xd8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415F51D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415F51F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415F521: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415F5C6; /* 0x1415F524: jp 0x1415f5c6 */
L_1415F52A:
    fp_push(*(double*)ADDR(edx + 0xE0)); /* 0x1415F52A: fld qword ptr [edx + 0xe0] */
    fp_push(*(double*)ADDR(ecx + 0xE0)); /* 0x1415F530: fld qword ptr [ecx + 0xe0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1415F536: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1415F538: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1415F53A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1415F5C6; /* 0x1415F53D: jp 0x1415f5c6 */
L_1415F543:
    eax = MEM32(edx + 0xE8); /* 0x1415F543: mov eax, dword ptr [edx + 0xe8] */
    /* cmp eax, MEM32(ecx + 0xE8) */ /* 0x1415F549: cmp eax, dword ptr [ecx + 0xe8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xE8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F54F: jne 0x1415f5c6 */
L_1415F551:
    eax = MEM32(edx + 0xEC); /* 0x1415F551: mov eax, dword ptr [edx + 0xec] */
    /* cmp eax, MEM32(ecx + 0xEC) */ /* 0x1415F557: cmp eax, dword ptr [ecx + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F55D: jne 0x1415f5c6 */
L_1415F55F:
    eax = MEM32(edx + 0xF0); /* 0x1415F55F: mov eax, dword ptr [edx + 0xf0] */
    /* cmp eax, MEM32(ecx + 0xF0) */ /* 0x1415F565: cmp eax, dword ptr [ecx + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F56B: jne 0x1415f5c6 */
L_1415F56D:
    eax = MEM32(edx + 0xF4); /* 0x1415F56D: mov eax, dword ptr [edx + 0xf4] */
    /* cmp eax, MEM32(ecx + 0xF4) */ /* 0x1415F573: cmp eax, dword ptr [ecx + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F579: jne 0x1415f5c6 */
L_1415F57B:
    eax = MEM32(edx + 0xF8); /* 0x1415F57B: mov eax, dword ptr [edx + 0xf8] */
    /* cmp eax, MEM32(ecx + 0xF8) */ /* 0x1415F581: cmp eax, dword ptr [ecx + 0xf8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xF8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F587: jne 0x1415f5c6 */
L_1415F589:
    eax = MEM32(edx + 0xFC); /* 0x1415F589: mov eax, dword ptr [edx + 0xfc] */
    /* cmp eax, MEM32(ecx + 0xFC) */ /* 0x1415F58F: cmp eax, dword ptr [ecx + 0xfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F595: jne 0x1415f5c6 */
L_1415F597:
    eax = MEM32(edx + 0x100); /* 0x1415F597: mov eax, dword ptr [edx + 0x100] */
    /* cmp eax, MEM32(ecx + 0x100) */ /* 0x1415F59D: cmp eax, dword ptr [ecx + 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F5A3: jne 0x1415f5c6 */
L_1415F5A5:
    eax = MEM32(edx + 0x104); /* 0x1415F5A5: mov eax, dword ptr [edx + 0x104] */
    /* cmp eax, MEM32(ecx + 0x104) */ /* 0x1415F5AB: cmp eax, dword ptr [ecx + 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x104));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F5B1: jne 0x1415f5c6 */
L_1415F5B3:
    eax = MEM32(ecx + 0x50); /* 0x1415F5B3: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)((eax ^ MEM32(edx + 0x50))); _flag_b = (uint32_t)((eax ^ MEM32(edx + 0x50)));
    eax = eax ^ MEM32(edx + 0x50); /* 0x1415F5B6: xor eax, dword ptr [edx + 0x50] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01F00000u);
    eax = eax & 0x01F00000u; /* 0x1415F5B9: and eax, 0x1f00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x1415F5BE: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1415F5C6; /* 0x1415F5C1: jne 0x1415f5c6 */
L_1415F5C3:
    SET_LO8(eax, 1); /* 0x1415F5C3: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F5C5: ret  */
L_1415F5C6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1415F5C6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1415F5C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1414FCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1414FCB0u);

L_1414FCB0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x1414FCB0: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x21200000u */ /* 0x1414FCB5: cmp eax, 0x21200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FD07; /* 0x1414FCBA: ja 0x1414fd07 */
L_1414FCBC:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCBC: je 0x1414fd48 */
L_1414FCC2:
    /* cmp eax, 0x11300000u */ /* 0x1414FCC2: cmp eax, 0x11300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FCE9; /* 0x1414FCC7: ja 0x1414fce9 */
L_1414FCC9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCC9: je 0x1414fd48 */
L_1414FCCB:
    /* cmp eax, 0x10500000u */ /* 0x1414FCCB: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FCE2; /* 0x1414FCD0: ja 0x1414fce2 */
L_1414FCD2:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCD2: je 0x1414fd48 */
L_1414FCD4:
    /* cmp eax, 0x10100000u */ /* 0x1414FCD4: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCD9: je 0x1414fd48 */
L_1414FCDB:
    /* cmp eax, 0x10300000u */ /* 0x1414FCDB: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FCE0: jmp 0x1414fd41 */
L_1414FCE2:
    /* cmp eax, 0x10800000u */ /* 0x1414FCE2: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FCE7: jmp 0x1414fd41 */
L_1414FCE9:
    /* cmp eax, 0x20200000u */ /* 0x1414FCE9: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FD00; /* 0x1414FCEE: ja 0x1414fd00 */
L_1414FCF0:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCF0: je 0x1414fd48 */
L_1414FCF2:
    /* cmp eax, 0x11700000u */ /* 0x1414FCF2: cmp eax, 0x11700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FCF7: je 0x1414fd48 */
L_1414FCF9:
    /* cmp eax, 0x14800000u */ /* 0x1414FCF9: cmp eax, 0x14800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FCFE: jmp 0x1414fd41 */
L_1414FD00:
    /* cmp eax, 0x20600000u */ /* 0x1414FD00: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FD05: jmp 0x1414fd41 */
L_1414FD07:
    /* cmp eax, 0x22800000u */ /* 0x1414FD07: cmp eax, 0x22800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FD2E; /* 0x1414FD0C: ja 0x1414fd2e */
L_1414FD0E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FD0E: je 0x1414fd48 */
L_1414FD10:
    /* cmp eax, 0x22000000u */ /* 0x1414FD10: cmp eax, 0x22000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414FD27; /* 0x1414FD15: ja 0x1414fd27 */
L_1414FD17:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FD17: je 0x1414fd48 */
L_1414FD19:
    /* cmp eax, 0x21600000u */ /* 0x1414FD19: cmp eax, 0x21600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FD1E: je 0x1414fd48 */
L_1414FD20:
    /* cmp eax, 0x21C00000u */ /* 0x1414FD20: cmp eax, 0x21c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FD25: jmp 0x1414fd41 */
L_1414FD27:
    /* cmp eax, 0x22400000u */ /* 0x1414FD27: cmp eax, 0x22400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414FD41; /* 0x1414FD2C: jmp 0x1414fd41 */
L_1414FD2E:
    /* cmp eax, 0x30200000u */ /* 0x1414FD2E: cmp eax, 0x30200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FD33: je 0x1414fd48 */
L_1414FD35:
    /* cmp eax, 0x30800000u */ /* 0x1414FD35: cmp eax, 0x30800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414FD48; /* 0x1414FD3A: je 0x1414fd48 */
L_1414FD3C:
    /* cmp eax, 0x52500000u */ /* 0x1414FD3C: cmp eax, 0x52500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1414FD41:
    eax = 4; /* 0x1414FD41: mov eax, 4 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1414FD4D; /* 0x1414FD46: jne 0x1414fd4d */
L_1414FD48:
    eax = 2; /* 0x1414FD48: mov eax, 2 */
L_1414FD4D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1414FD4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1414DFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1414DFC0u);

L_1414DFC0:
    edi = edi; /* 0x1414DFC0: mov edi, edi */
    PUSH32(esp, edi); /* 0x1414DFC2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1414DFC3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1414DFC5:
    ecx = MEM32(esi + 0x48); /* 0x1414DFC5: mov ecx, dword ptr [esi + 0x48] */
    eax = ecx; /* 0x1414DFC8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x1414DFCA: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x68900000u */ /* 0x1414DFCF: cmp eax, 0x68900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E140; /* 0x1414DFD4: ja 0x1414e140 */
L_1414DFDA:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E136; /* 0x1414DFDA: je 0x1414e136 */
L_1414DFE0:
    /* cmp eax, 0x51C00000u */ /* 0x1414DFE0: cmp eax, 0x51c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E0A5; /* 0x1414DFE5: ja 0x1414e0a5 */
L_1414DFEB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414DFEB: je 0x1414e015 */
L_1414DFED:
    /* cmp eax, 0x50700000u */ /* 0x1414DFED: cmp eax, 0x50700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E06F; /* 0x1414DFF2: ja 0x1414e06f */
L_1414DFF4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414DFF4: je 0x1414e06a */
L_1414DFF6:
    /* cmp eax, 0x50400000u */ /* 0x1414DFF6: cmp eax, 0x50400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E058; /* 0x1414DFFB: ja 0x1414e058 */
L_1414DFFD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414DFFD: je 0x1414e06a */
L_1414DFFF:
    /* test eax, eax */ /* 0x1414DFFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1414E054; /* 0x1414E001: je 0x1414e054 */
L_1414E003:
    /* cmp eax, 0x50000000u */ /* 0x1414E003: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E008: je 0x1414e06a */
L_1414E00A:
    /* cmp eax, 0x50200000u */ /* 0x1414E00A: cmp eax, 0x50200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1414E00F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1414E26F; /* 0x1414E00F: jne 0x1414e26f */
L_1414E015:
    ecx = 1; /* 0x1414E015: mov ecx, 1 */
L_1414E01A:
    edx = ecx; /* 0x1414E01A: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x1414E01C: imul edx, edi */
    eax = edx + ecx; /* 0x1414E01F: lea eax, [edx + ecx] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x1414E022: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E2B0; /* 0x1414E025: ja 0x1414e2b0 */
L_1414E02B:
    eax = MEM32(esi + 0x14); /* 0x1414E02B: mov eax, dword ptr [esi + 0x14] */
    edx = eax + edx * 4; /* 0x1414E02E: lea edx, [eax + edx*4] */
    /* test ecx, ecx */ /* 0x1414E031: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1414E2B0; /* 0x1414E033: je 0x1414e2b0 */
L_1414E039:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1414E039: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1414E03B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1414E04E; /* 0x1414E03D: je 0x1414e04e */
L_1414E03F:
    /* nop */ /* 0x1414E03F: nop  */
L_1414E040:
    /* cmp MEM32(edx + eax * 4), ebx */ /* 0x1414E040: cmp dword ptr [edx + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E2AC; /* 0x1414E043: je 0x1414e2ac */
L_1414E049:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1414E049: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1414E04A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1414E040; /* 0x1414E04C: jb 0x1414e040 */
L_1414E04E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1414E04E: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1414DFC5; /* 0x1414E04F: jmp 0x1414dfc5 */
L_1414E054:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1414E054: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1414E01A; /* 0x1414E056: jmp 0x1414e01a */
L_1414E058:
    /* cmp eax, 0x50500000u */ /* 0x1414E058: cmp eax, 0x50500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E05D: je 0x1414e06a */
L_1414E05F:
    /* cmp eax, 0x50600000u */ /* 0x1414E05F: cmp eax, 0x50600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1414E26F; /* 0x1414E064: jne 0x1414e26f */
L_1414E06A:
    ecx = MEM32(esi + 0x10); /* 0x1414E06A: mov ecx, dword ptr [esi + 0x10] */
    RECOMP_BACKEDGE();
    goto L_1414E01A; /* 0x1414E06D: jmp 0x1414e01a */
L_1414E06F:
    /* cmp eax, 0x51600000u */ /* 0x1414E06F: cmp eax, 0x51600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E090; /* 0x1414E074: ja 0x1414e090 */
L_1414E076:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E076: je 0x1414e015 */
L_1414E078:
    /* cmp eax, 0x50800000u */ /* 0x1414E078: cmp eax, 0x50800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E07D: je 0x1414e06a */
L_1414E07F:
    /* cmp eax, 0x50900000u */ /* 0x1414E07F: cmp eax, 0x50900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E084: je 0x1414e06a */
L_1414E086:
    /* cmp eax, 0x51500000u */ /* 0x1414E086: cmp eax, 0x51500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E08B: jmp 0x1414e269 */
L_1414E090:
    /* cmp eax, 0x51A00000u */ /* 0x1414E090: cmp eax, 0x51a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E095: je 0x1414e015 */
L_1414E09B:
    /* cmp eax, 0x51B00000u */ /* 0x1414E09B: cmp eax, 0x51b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E0A0: jmp 0x1414e269 */
L_1414E0A5:
    /* cmp eax, 0x52C00000u */ /* 0x1414E0A5: cmp eax, 0x52c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E0F6; /* 0x1414E0AA: ja 0x1414e0f6 */
L_1414E0AC:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E0AC: je 0x1414e015 */
L_1414E0B2:
    /* cmp eax, 0x52600000u */ /* 0x1414E0B2: cmp eax, 0x52600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E0E1; /* 0x1414E0B7: ja 0x1414e0e1 */
L_1414E0B9:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E2A2; /* 0x1414E0B9: je 0x1414e2a2 */
L_1414E0BF:
    /* cmp eax, 0x51F00000u */ /* 0x1414E0BF: cmp eax, 0x51f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E0C4: je 0x1414e015 */
L_1414E0CA:
    /* cmp eax, 0x52000000u */ /* 0x1414E0CA: cmp eax, 0x52000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E0CF: je 0x1414e015 */
L_1414E0D5:
    /* cmp eax, 0x52400000u */ /* 0x1414E0D5: cmp eax, 0x52400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E0DA: je 0x1414e06a */
L_1414E0DC:
    goto L_1414E26F; /* 0x1414E0DC: jmp 0x1414e26f */
L_1414E0E1:
    /* cmp eax, 0x52900000u */ /* 0x1414E0E1: cmp eax, 0x52900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E0E6: je 0x1414e015 */
L_1414E0EC:
    /* cmp eax, 0x52B00000u */ /* 0x1414E0EC: cmp eax, 0x52b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E0F1: jmp 0x1414e269 */
L_1414E0F6:
    /* cmp eax, 0x68600000u */ /* 0x1414E0F6: cmp eax, 0x68600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E119; /* 0x1414E0FB: ja 0x1414e119 */
L_1414E0FD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E136; /* 0x1414E0FD: je 0x1414e136 */
L_1414E0FF:
    /* cmp eax, 0x67C00000u */ /* 0x1414E0FF: cmp eax, 0x67c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E12B; /* 0x1414E104: je 0x1414e12b */
L_1414E106:
    /* cmp eax, 0x68400000u */ /* 0x1414E106: cmp eax, 0x68400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E12B; /* 0x1414E10B: je 0x1414e12b */
L_1414E10D:
    /* cmp eax, 0x68500000u */ /* 0x1414E10D: cmp eax, 0x68500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E12B; /* 0x1414E112: je 0x1414e12b */
L_1414E114:
    goto L_1414E26F; /* 0x1414E114: jmp 0x1414e26f */
L_1414E119:
    /* cmp eax, 0x68700000u */ /* 0x1414E119: cmp eax, 0x68700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E12B; /* 0x1414E11E: je 0x1414e12b */
L_1414E120:
    /* cmp eax, 0x68800000u */ /* 0x1414E120: cmp eax, 0x68800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1414E26F; /* 0x1414E125: jne 0x1414e26f */
L_1414E12B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    ecx = ecx & 0x000FFFFFu; /* 0x1414E12B: and ecx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1414E01A; /* 0x1414E131: jmp 0x1414e01a */
L_1414E136:
    ecx = 2; /* 0x1414E136: mov ecx, 2 */
    RECOMP_BACKEDGE();
    goto L_1414E01A; /* 0x1414E13B: jmp 0x1414e01a */
L_1414E140:
    /* cmp eax, 0x70100000u */ /* 0x1414E140: cmp eax, 0x70100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E15D; /* 0x1414E145: ja 0x1414e15d */
L_1414E147:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E147: je 0x1414e015 */
L_1414E14D:
    /* cmp eax, 0x70000000u */ /* 0x1414E14D: cmp eax, 0x70000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E152: je 0x1414e06a */
L_1414E158:
    goto L_1414E26F; /* 0x1414E158: jmp 0x1414e26f */
L_1414E15D:
    /* cmp eax, 0xA0800000u */ /* 0x1414E15D: cmp eax, 0xa0800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E1F1; /* 0x1414E162: ja 0x1414e1f1 */
L_1414E168:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E168: je 0x1414e015 */
L_1414E16E:
    /* cmp eax, 0xA0200000u */ /* 0x1414E16E: cmp eax, 0xa0200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E1BD; /* 0x1414E173: ja 0x1414e1bd */
L_1414E175:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E175: je 0x1414e015 */
L_1414E17B:
    /* cmp eax, 0x90700000u */ /* 0x1414E17B: cmp eax, 0x90700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E1A8; /* 0x1414E180: ja 0x1414e1a8 */
L_1414E182:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E06A; /* 0x1414E182: je 0x1414e06a */
L_1414E188:
    /* cmp eax, 0x70300000u */ /* 0x1414E188: cmp eax, 0x70300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E18D: je 0x1414e015 */
L_1414E193:
    /* cmp eax, 0x80000000u */ /* 0x1414E193: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E198: je 0x1414e015 */
L_1414E19E:
    /* cmp eax, 0x80200000u */ /* 0x1414E19E: cmp eax, 0x80200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1414E00F; /* 0x1414E1A3: jmp 0x1414e00f */
L_1414E1A8:
    /* cmp eax, 0xA0000000u */ /* 0x1414E1A8: cmp eax, 0xa0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E1AD: je 0x1414e015 */
L_1414E1B3:
    /* cmp eax, 0xA0100000u */ /* 0x1414E1B3: cmp eax, 0xa0100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E1B8: jmp 0x1414e269 */
L_1414E1BD:
    /* cmp eax, 0xA0500000u */ /* 0x1414E1BD: cmp eax, 0xa0500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E1DF; /* 0x1414E1C2: ja 0x1414e1df */
L_1414E1C4:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E1C4: je 0x1414e015 */
L_1414E1CA:
    /* cmp eax, 0xA0300000u */ /* 0x1414E1CA: cmp eax, 0xa0300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E1CF: je 0x1414e015 */
L_1414E1D5:
    /* cmp eax, 0xA0400000u */ /* 0x1414E1D5: cmp eax, 0xa0400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E1DA: jmp 0x1414e269 */
L_1414E1DF:
    /* cmp eax, 0xA0600000u */ /* 0x1414E1DF: cmp eax, 0xa0600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E1E4: je 0x1414e015 */
L_1414E1EA:
    /* cmp eax, 0xA0700000u */ /* 0x1414E1EA: cmp eax, 0xa0700000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0700000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E1EF: jmp 0x1414e269 */
L_1414E1F1:
    /* cmp eax, 0xA0F00000u */ /* 0x1414E1F1: cmp eax, 0xa0f00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E23A; /* 0x1414E1F6: ja 0x1414e23a */
L_1414E1F8:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E1F8: je 0x1414e015 */
L_1414E1FE:
    /* cmp eax, 0xA0C00000u */ /* 0x1414E1FE: cmp eax, 0xa0c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E228; /* 0x1414E203: ja 0x1414e228 */
L_1414E205:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E205: je 0x1414e015 */
L_1414E20B:
    /* cmp eax, 0xA0900000u */ /* 0x1414E20B: cmp eax, 0xa0900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E210: je 0x1414e015 */
L_1414E216:
    /* cmp eax, 0xA0A00000u */ /* 0x1414E216: cmp eax, 0xa0a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E21B: je 0x1414e015 */
L_1414E221:
    /* cmp eax, 0xA0B00000u */ /* 0x1414E221: cmp eax, 0xa0b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E226: jmp 0x1414e269 */
L_1414E228:
    /* cmp eax, 0xA0D00000u */ /* 0x1414E228: cmp eax, 0xa0d00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0D00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E22D: je 0x1414e015 */
L_1414E233:
    /* cmp eax, 0xA0E00000u */ /* 0x1414E233: cmp eax, 0xa0e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E238: jmp 0x1414e269 */
L_1414E23A:
    /* cmp eax, 0xA1200000u */ /* 0x1414E23A: cmp eax, 0xa1200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1414E259; /* 0x1414E23F: ja 0x1414e259 */
L_1414E241:
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E241: je 0x1414e015 */
L_1414E247:
    /* cmp eax, 0xA1000000u */ /* 0x1414E247: cmp eax, 0xa1000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E24C: je 0x1414e015 */
L_1414E252:
    /* cmp eax, 0xA1100000u */ /* 0x1414E252: cmp eax, 0xa1100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1414E269; /* 0x1414E257: jmp 0x1414e269 */
L_1414E259:
    /* cmp eax, 0xA1300000u */ /* 0x1414E259: cmp eax, 0xa1300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E25E: je 0x1414e015 */
L_1414E264:
    /* cmp eax, 0xA1400000u */ /* 0x1414E264: cmp eax, 0xa1400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA1400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1414E269:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1414E015; /* 0x1414E269: je 0x1414e015 */
L_1414E26F:
    PUSH32(esp, ecx); /* 0x1414E26F: push ecx */
    RECOMP_CALL(sub_141E3F98); /* 0x1414E270: call 0x141e3f98 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1414E275: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E277: jne 0x1414e015 */
L_1414E27D:
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x1414E27D: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_141E4155); /* 0x1414E280: call 0x141e4155 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1414E285: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1414E015; /* 0x1414E287: jne 0x1414e015 */
L_1414E28D:
    ecx = MEM32(esi + 0x48); /* 0x1414E28D: mov ecx, dword ptr [esi + 0x48] */
    eax = ecx; /* 0x1414E290: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x1414E292: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x60000000u */ /* 0x1414E297: cmp eax, 0x60000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1414E12B; /* 0x1414E29C: jne 0x1414e12b */
L_1414E2A2:
    ecx = 4; /* 0x1414E2A2: mov ecx, 4 */
    RECOMP_BACKEDGE();
    goto L_1414E01A; /* 0x1414E2A7: jmp 0x1414e01a */
L_1414E2AC:
    eax = edi; /* 0x1414E2AC: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1414E2AE: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1414E2AF: ret  */
L_1414E2B0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1414E2B0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1414E2B3: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1414E2B4: ret  */
    RECOMP_REGS_OUT();
}
