#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_006F9180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9180u);

L_006F9180:
    PUSH32(esp, ebp); /* 0x006F9180: push ebp */
    ebp = esp; /* 0x006F9181: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006F9183: push ecx */
    PUSH32(esp, esi); /* 0x006F9184: push esi */
    esi = ecx; /* 0x006F9185: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F9187: push edi */
    edi = edx; /* 0x006F9188: mov edi, edx */
    /* test esi, esi */ /* 0x006F918A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9379; /* 0x006F918C: je 0x6f9379 */
L_006F9192:
    edx = MEM32(esi + 0x2C); /* 0x006F9192: mov edx, dword ptr [esi + 0x2c] */
    /* test edx, edx */ /* 0x006F9195: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9379; /* 0x006F9197: je 0x6f9379 */
L_006F919D:
    eax = MEM32(esi + 0x6C); /* 0x006F919D: mov eax, dword ptr [esi + 0x6c] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006F91A0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x006F91A0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x006F91A3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9379; /* 0x006F91A6: je 0x6f9379 */
L_006F91AC:
    ecx = MEM32(esi + 0x134); /* 0x006F91AC: mov ecx, dword ptr [esi + 0x134] */
    /* cmp edi, ecx */ /* 0x006F91B2: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F91BE; /* 0x006F91B4: jne 0x6f91be */
L_006F91B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F91B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F91B8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F91B9: pop esi */
    esp = ebp; /* 0x006F91BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F91BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F91BD: ret  */
L_006F91BE:
    /* test edi, edi */ /* 0x006F91BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F926F; /* 0x006F91C0: je 0x6f926f */
L_006F91C6:
    /* cmp MEM32(edi), 0x0092501Au */ /* 0x006F91C6: cmp dword ptr [edi], 0x92501a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F92E1; /* 0x006F91CC: jne 0x6f92e1 */
L_006F91D2:
    /* cmp esi, MEM32(edi + 0x20) */ /* 0x006F91D2: cmp esi, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F91EA; /* 0x006F91D5: je 0x6f91ea */
L_006F91D7:
    PUSH32(esp, 0x008064F8u); /* 0x006F91D7: push 0x8064f8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F91DC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F91E1: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F91E4: pop edi */
    esi = POP32_VAL(esp); /* 0x006F91E5: pop esi */
    esp = ebp; /* 0x006F91E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F91E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F91E9: ret  */
L_006F91EA:
    /* cmp MEM32(edi + 0x8), 2 */ /* 0x006F91EA: cmp dword ptr [edi + 8], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9203; /* 0x006F91EE: je 0x6f9203 */
L_006F91F0:
    PUSH32(esp, 0x008064C4u); /* 0x006F91F0: push 0x8064c4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F91F5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F91FA: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F91FD: pop edi */
    esi = POP32_VAL(esp); /* 0x006F91FE: pop esi */
    esp = ebp; /* 0x006F91FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9201: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9202: ret  */
L_006F9203:
    eax = MEM32(edi + 0x24); /* 0x006F9203: mov eax, dword ptr [edi + 0x24] */
    /* test eax, eax */ /* 0x006F9206: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = eax; } /* 0x006F9208: cmovne edi, eax */
    /* test edi, edi */ /* 0x006F920B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F926F; /* 0x006F920D: je 0x6f926f */
L_006F920F:
    /* test ecx, ecx */ /* 0x006F920F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F926F; /* 0x006F9211: jne 0x6f926f */
L_006F9213:
    _xmm[0] = xmm_ld(esi + 0xD8); /* 0x006F9213: movdqu xmm0, xmmword ptr [esi + 0xd8] */
    eax = MEM32(esi + 0x118); /* 0x006F921B: mov eax, dword ptr [esi + 0x118] */
    MEM32(esi + 0x11C) = eax; /* 0x006F9221: mov dword ptr [esi + 0x11c], eax */
    eax = MEM32(esi + 0x120); /* 0x006F9227: mov eax, dword ptr [esi + 0x120] */
    MEM32(esi + 0x128) = eax; /* 0x006F922D: mov dword ptr [esi + 0x128], eax */
    eax = MEM32(esi + 0x124); /* 0x006F9233: mov eax, dword ptr [esi + 0x124] */
    xmm_st(esi + 0xE8, _xmm[0]); /* 0x006F9239: movdqu xmmword ptr [esi + 0xe8], xmm0 */
    MEM32(esi + 0x12C) = eax; /* 0x006F9241: mov dword ptr [esi + 0x12c], eax */
    _xmm[0] = xmm_ld(esi + 0xF8); /* 0x006F9247: movdqu xmm0, xmmword ptr [esi + 0xf8] */
    eax = MEM32(esi + 0xC4); /* 0x006F924F: mov eax, dword ptr [esi + 0xc4] */
    MEM32(esi + 0xCC) = eax; /* 0x006F9255: mov dword ptr [esi + 0xcc], eax */
    eax = MEM32(esi + 0xC8); /* 0x006F925B: mov eax, dword ptr [esi + 0xc8] */
    xmm_st(esi + 0x108, _xmm[0]); /* 0x006F9261: movdqu xmmword ptr [esi + 0x108], xmm0 */
    MEM32(esi + 0xD0) = eax; /* 0x006F9269: mov dword ptr [esi + 0xd0], eax */
L_006F926F:
    PUSH32(esp, edi); /* 0x006F926F: push edi */
    PUSH32(esp, esi); /* 0x006F9270: push esi */
    MEM32(esi + 0x134) = edi; /* 0x006F9271: mov dword ptr [esi + 0x134], edi */
    RECOMP_ICALL(edx); /* 0x006F9277: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9279: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F927C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F92EE; /* 0x006F927E: js 0x6f92ee */
L_006F9280:
    /* test edi, edi */ /* 0x006F9280: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F92F7; /* 0x006F9282: je 0x6f92f7 */
L_006F9284:
    MEM32(esi + 0xD8) = 0; /* 0x006F9284: mov dword ptr [esi + 0xd8], 0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F928E: xorps xmm0, xmm0 */
    MEM32(esi + 0xDC) = 0; /* 0x006F9291: mov dword ptr [esi + 0xdc], 0 */
    eax = MEM32(edi + 0xC); /* 0x006F929B: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xE0) = eax; /* 0x006F929E: mov dword ptr [esi + 0xe0], eax */
    eax = MEM32(edi + 0x10); /* 0x006F92A4: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0xE4) = eax; /* 0x006F92A7: mov dword ptr [esi + 0xe4], eax */
    xmm_st(esi + 0xF8, _xmm[0]); /* 0x006F92AD: movdqu xmmword ptr [esi + 0xf8], xmm0 */
    MEM32(esi + 0x118) = 0; /* 0x006F92B5: mov dword ptr [esi + 0x118], 0 */
    MEM32(esi + 0x120) = 0x3F800000u; /* 0x006F92BF: mov dword ptr [esi + 0x120], 0x3f800000 */
    MEM32(esi + 0x124) = 0x3F800000u; /* 0x006F92C9: mov dword ptr [esi + 0x124], 0x3f800000 */
    eax = MEM32(edi + 0xC); /* 0x006F92D3: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC4) = eax; /* 0x006F92D6: mov dword ptr [esi + 0xc4], eax */
    eax = MEM32(edi + 0x10); /* 0x006F92DC: mov eax, dword ptr [edi + 0x10] */
    goto L_006F934D; /* 0x006F92DF: jmp 0x6f934d */
L_006F92E1:
    PUSH32(esp, 0x0080646Cu); /* 0x006F92E1: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F92E6: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F92EB: add esp, 4 */
    _flag_k = FK_ADD;
L_006F92EE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F92EE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F92F1: pop edi */
    esi = POP32_VAL(esp); /* 0x006F92F2: pop esi */
    esp = ebp; /* 0x006F92F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F92F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F92F6: ret  */
L_006F92F7:
    _xmm[0] = xmm_ld(esi + 0xE8); /* 0x006F92F7: movdqu xmm0, xmmword ptr [esi + 0xe8] */
    eax = MEM32(esi + 0x11C); /* 0x006F92FF: mov eax, dword ptr [esi + 0x11c] */
    MEM32(esi + 0x118) = eax; /* 0x006F9305: mov dword ptr [esi + 0x118], eax */
    eax = MEM32(esi + 0x128); /* 0x006F930B: mov eax, dword ptr [esi + 0x128] */
    MEM32(esi + 0x120) = eax; /* 0x006F9311: mov dword ptr [esi + 0x120], eax */
    eax = MEM32(esi + 0x12C); /* 0x006F9317: mov eax, dword ptr [esi + 0x12c] */
    xmm_st(esi + 0xD8, _xmm[0]); /* 0x006F931D: movdqu xmmword ptr [esi + 0xd8], xmm0 */
    MEM32(esi + 0x124) = eax; /* 0x006F9325: mov dword ptr [esi + 0x124], eax */
    _xmm[0] = xmm_ld(esi + 0x108); /* 0x006F932B: movdqu xmm0, xmmword ptr [esi + 0x108] */
    eax = MEM32(esi + 0xCC); /* 0x006F9333: mov eax, dword ptr [esi + 0xcc] */
    MEM32(esi + 0xC4) = eax; /* 0x006F9339: mov dword ptr [esi + 0xc4], eax */
    eax = MEM32(esi + 0xD0); /* 0x006F933F: mov eax, dword ptr [esi + 0xd0] */
    xmm_st(esi + 0xF8, _xmm[0]); /* 0x006F9345: movdqu xmmword ptr [esi + 0xf8], xmm0 */
L_006F934D:
    MEM32(esi + 0xC8) = eax; /* 0x006F934D: mov dword ptr [esi + 0xc8], eax */
    eax = MEM32(esi + 0x30); /* 0x006F9353: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x006F9356: push esi */
    RECOMP_ICALL(eax); /* 0x006F9357: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9359: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F935C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F92EE; /* 0x006F935E: js 0x6f92ee */
L_006F9360:
    eax = MEM32(esi + 0x34); /* 0x006F9360: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, esi); /* 0x006F9363: push esi */
    RECOMP_ICALL(eax); /* 0x006F9364: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F9366: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9368: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F936B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006F936D: setns cl */
    eax = ecx + (-0x1); /* 0x006F9370: lea eax, [ecx - 1] */
    edi = POP32_VAL(esp); /* 0x006F9373: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9374: pop esi */
    esp = ebp; /* 0x006F9375: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9378: ret  */
L_006F9379:
    PUSH32(esp, 0x00804310u); /* 0x006F9379: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F937E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9383: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9386: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9387: pop esi */
    esp = ebp; /* 0x006F9388: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F938A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F938B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9390u);

L_006F9390:
    PUSH32(esp, ebp); /* 0x006F9390: push ebp */
    ebp = esp; /* 0x006F9391: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x006F9393: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006F9396: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F9399: push esi */
    esi = ecx; /* 0x006F939A: mov esi, ecx */
    MEM32(esp + 0x14) = 1; /* 0x006F939C: mov dword ptr [esp + 0x14], 1 */
    MEM32(esp + 0x18) = 1; /* 0x006F93A4: mov dword ptr [esp + 0x18], 1 */
    /* cmp MEM32(esi + 0xC4), 0 */ /* 0x006F93AC: cmp dword ptr [esi + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F966F; /* 0x006F93B3: je 0x6f966f */
L_006F93B9:
    /* cmp MEM32(esi + 0xC8), 0 */ /* 0x006F93B9: cmp dword ptr [esi + 0xc8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F966F; /* 0x006F93C0: je 0x6f966f */
L_006F93C6:
    eax = esp + 0x18; /* 0x006F93C6: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x006F93CA: push eax */
    edx = esp + 0x18; /* 0x006F93CB: lea edx, [esp + 0x18] */
    RECOMP_CALL(sub_006F8560); /* 0x006F93CF: call 0x6f8560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F93D4: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F93D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F93E3; /* 0x006F93D9: jns 0x6f93e3 */
L_006F93DB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F93DB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F93DE: pop esi */
    esp = ebp; /* 0x006F93DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F93E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F93E2: ret  */
L_006F93E3:
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006F93E3: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = (uint32_t)(MEM32(esi + 0xC4)); _xmm[1].u64[1] = 0; /* 0x006F93E9: movd xmm1, dword ptr [esi + 0xc4] */
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC8)); _xmm[0].u64[1] = 0; /* 0x006F93F1: movd xmm0, dword ptr [esi + 0xc8] */
    eax = MEM32(esp + 0x14); /* 0x006F93F9: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x006F93FD: mov ecx, dword ptr [esp + 0x18] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9401: cvtdq2ps xmm0, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9404: cvtdq2ps xmm1, xmm1 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006F9407: movd xmm2, eax */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006F940B: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x006F940F: movd xmm0, ecx */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9413: cvtdq2ps xmm2, xmm2 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9416: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x1C) = _xmm[1].u32[0]; /* 0x006F9419: movss dword ptr [esp + 0x1c], xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x006F941F: divss xmm2, xmm0 */
    MEM32(esp + 0x20) = _xmm[2].u32[0]; /* 0x006F9423: movss dword ptr [esp + 0x20], xmm2 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9441; /* 0x006F9429: jne 0x6f9441 */
L_006F942B:
    MEM32(esi + 0x120) = 0x3F800000u; /* 0x006F942B: mov dword ptr [esi + 0x120], 0x3f800000 */
    MEM32(esi + 0x124) = 0x3F800000u; /* 0x006F9435: mov dword ptr [esi + 0x124], 0x3f800000 */
    goto L_006F9462; /* 0x006F943F: jmp 0x6f9462 */
L_006F9441:
    PUSH32(esp, 0x00806458u); /* 0x006F9441: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9446: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006F944B: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F944F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x18); /* 0x006F9452: mov ecx, dword ptr [esp + 0x18] */
    _xmm[1].u64[0] = MEM32(esp + 0x1C); _xmm[1].u64[1] = 0; /* 0x006F9456: movss xmm1, dword ptr [esp + 0x1c] */
    _xmm[2].u64[0] = MEM32(esp + 0x20); _xmm[2].u64[1] = 0; /* 0x006F945C: movss xmm2, dword ptr [esp + 0x20] */
L_006F9462:
    /* cmp MEM32(esi + 0xD4), 0 */ /* 0x006F9462: cmp dword ptr [esi + 0xd4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F950F; /* 0x006F9469: je 0x6f950f */
L_006F946F:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F946F: comiss xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F947D; /* 0x006F9472: jbe 0x6f947d */
L_006F9474:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F9474: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0xC4); /* 0x006F9475: idiv dword ptr [esi + 0xc4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    goto L_006F9486; /* 0x006F947B: jmp 0x6f9486 */
L_006F947D:
    eax = ecx; /* 0x006F947D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F947F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0xC8); /* 0x006F9480: idiv dword ptr [esi + 0xc8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
L_006F9486:
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC4)); _xmm[0].u64[1] = 0; /* 0x006F9486: movd xmm0, dword ptr [esi + 0xc4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F948E: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F9491: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9495: cvtdq2ps xmm1, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9498: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x24) = _xmm[1].u32[0]; /* 0x006F949B: movss dword ptr [esp + 0x24], xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F94A1: mulss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F94A5: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F94A8: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F94AD: call 0x77f320 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC8)); _xmm[0].u64[1] = 0; /* 0x006F94B2: movd xmm0, dword ptr [esi + 0xc8] */
    eax = MEM32(esp + 0x1C); /* 0x006F94BA: mov eax, dword ptr [esp + 0x1c] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F94BE: cvtdq2ps xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x006F94C1: fstp qword ptr [esp + 0x28] */
    ecx = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp + 0x28)), 1); /* 0x006F94C5: cvttsd2si ecx, qword ptr [esp + 0x28] */
    { float _s = sse_f32(MEM32(esp + 0x24)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F94CB: mulss xmm0, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006F94D1: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(esp + 0x40) = ecx; /* 0x006F94D3: mov dword ptr [esp + 0x40], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F94D7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F94D8: sub eax, edx */
    _flag_k = FK_CMP;
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F94DA: cvtps2pd xmm0, xmm0 */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F94DD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esp + 0x38) = eax; /* 0x006F94DF: mov dword ptr [esp + 0x38], eax */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F94E3: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F94E8: call 0x77f320 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x006F94ED: fstp qword ptr [esp + 0x28] */
    ecx = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp + 0x28)), 1); /* 0x006F94F1: cvttsd2si ecx, qword ptr [esp + 0x28] */
L_006F94F7:
    eax = MEM32(esp + 0x20); /* 0x006F94F7: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006F94FB: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(esp + 0x44) = ecx; /* 0x006F94FD: mov dword ptr [esp + 0x44], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F9501: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F9502: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F9504: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esp + 0x3C) = eax; /* 0x006F9506: mov dword ptr [esp + 0x3c], eax */
    goto L_006F962F; /* 0x006F950A: jmp 0x6f962f */
L_006F950F:
    _xmm[0] = _xmm[1]; /* 0x006F950F: movaps xmm0, xmm1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F9512: sub esp, 8 */
    _flag_k = FK_CMP;
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006F9515: subss xmm0, xmm2 */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x006F9519: cvtss2sd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F951D: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F360); /* 0x006F9522: call 0x77f360 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(0x808C28); _xmm[0].u64[1] = 0; /* 0x006F9527: movsd xmm0, qword ptr [0x808c28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F952F: add esp, 8 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x006F9532: fstp qword ptr [esp + 0x28] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(esp + 0x28))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F9536: comisd xmm0, xmmword ptr [esp + 0x28] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F9563; /* 0x006F953C: jbe 0x6f9563 */
L_006F953E:
    _xmm[1].u64[0] = (uint32_t)(MEM32(esp + 0x14)); _xmm[1].u64[1] = 0; /* 0x006F953E: movd xmm1, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F9544: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC4)); _xmm[0].u64[1] = 0; /* 0x006F9546: movd xmm0, dword ptr [esi + 0xc4] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006F954E: cvtdq2ps xmm1, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9551: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006F9554: divss xmm1, xmm0 */
    MEM32(esp + 0x1C) = _xmm[1].u32[0]; /* 0x006F9558: movss dword ptr [esp + 0x1c], xmm1 */
    goto L_006F9636; /* 0x006F955E: jmp 0x6f9636 */
L_006F9563:
    _xmm[0].u64[0] = MEM32(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x006F9563: movss xmm0, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F9569: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(esp + 0x28))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006F956C: comiss xmm0, dword ptr [esp + 0x28] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006F95CA; /* 0x006F9571: jbe 0x6f95ca */
L_006F9573:
    eax = MEM32(esp + 0x1C); /* 0x006F9573: mov eax, dword ptr [esp + 0x1c] */
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC4)); _xmm[0].u64[1] = 0; /* 0x006F9577: movd xmm0, dword ptr [esi + 0xc4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F957F: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x38) = 0; /* 0x006F9582: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x40) = eax; /* 0x006F958A: mov dword ptr [esp + 0x40], eax */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F958E: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9592: cvtdq2ps xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006F9595: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC8)); _xmm[0].u64[1] = 0; /* 0x006F9599: movd xmm0, dword ptr [esi + 0xc8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F95A1: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x24) = _xmm[1].u32[0]; /* 0x006F95A4: movss dword ptr [esp + 0x24], xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F95AA: mulss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F95AE: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F95B1: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F95B6: call 0x77f320 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x006F95BB: fstp qword ptr [esp + 0x30] */
    ecx = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp + 0x30)), 1); /* 0x006F95BF: cvttsd2si ecx, qword ptr [esp + 0x30] */
    RECOMP_BACKEDGE();
    goto L_006F94F7; /* 0x006F95C5: jmp 0x6f94f7 */
L_006F95CA:
    eax = MEM32(esp + 0x20); /* 0x006F95CA: mov eax, dword ptr [esp + 0x20] */
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC8)); _xmm[0].u64[1] = 0; /* 0x006F95CE: movd xmm0, dword ptr [esi + 0xc8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F95D6: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x3C) = 0; /* 0x006F95D9: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x44) = eax; /* 0x006F95E1: mov dword ptr [esp + 0x44], eax */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006F95E5: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006F95E9: cvtdq2ps xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006F95EC: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(esi + 0xC4)); _xmm[0].u64[1] = 0; /* 0x006F95F0: movd xmm0, dword ptr [esi + 0xc4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F95F8: cvtdq2ps xmm0, xmm0 */
    MEM32(esp + 0x24) = _xmm[1].u32[0]; /* 0x006F95FB: movss dword ptr [esp + 0x24], xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9601: mulss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F9605: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F9608: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F960D: call 0x77f320 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x006F9612: mov eax, dword ptr [esp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x006F9616: fstp qword ptr [esp + 0x30] */
    ecx = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp + 0x30)), 1); /* 0x006F961A: cvttsd2si ecx, qword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006F9620: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(esp + 0x40) = ecx; /* 0x006F9622: mov dword ptr [esp + 0x40], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006F9626: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006F9627: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006F9629: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esp + 0x38) = eax; /* 0x006F962B: mov dword ptr [esp + 0x38], eax */
L_006F962F:
    edx = esp + 0x38; /* 0x006F962F: lea edx, [esp + 0x38] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9633: add esp, 8 */
    _flag_k = FK_ADD;
L_006F9636:
    ecx = esi; /* 0x006F9636: mov ecx, esi */
    RECOMP_CALL(sub_006F9680); /* 0x006F9638: call 0x6f9680 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006F963D: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9662; /* 0x006F9643: jne 0x6f9662 */
L_006F9645:
    _xmm[0].u64[0] = MEM32(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x006F9645: movss xmm0, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F964B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x120) = _xmm[0].u32[0]; /* 0x006F964D: movss dword ptr [esi + 0x120], xmm0 */
    MEM32(esi + 0x124) = _xmm[0].u32[0]; /* 0x006F9655: movss dword ptr [esi + 0x124], xmm0 */
    esi = POP32_VAL(esp); /* 0x006F965D: pop esi */
    esp = ebp; /* 0x006F965E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9660: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9661: ret  */
L_006F9662:
    PUSH32(esp, 0x00806458u); /* 0x006F9662: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9667: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F966C: add esp, 4 */
    _flag_k = FK_ADD;
L_006F966F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F966F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F9671: pop esi */
    esp = ebp; /* 0x006F9672: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9675: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9680u);

L_006F9680:
    PUSH32(esp, ebp); /* 0x006F9680: push ebp */
    ebp = esp; /* 0x006F9681: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x006F9683: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x006F9686: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006F9689: push esi */
    esi = ecx; /* 0x006F968A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F968C: push edi */
    edi = edx; /* 0x006F968D: mov edi, edx */
    /* test esi, esi */ /* 0x006F968F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F979B; /* 0x006F9691: je 0x6f979b */
L_006F9697:
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006F9697: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F979B; /* 0x006F969D: jne 0x6f979b */
L_006F96A3:
    /* test edi, edi */ /* 0x006F96A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F975F; /* 0x006F96A5: je 0x6f975f */
L_006F96AB:
    _xmm[0].u64[0] = (uint32_t)(MEM32(edi)); _xmm[0].u64[1] = 0; /* 0x006F96AB: movd xmm0, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006F96AF: sub esp, 8 */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F96B2: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F96B5: mulss xmm0, dword ptr [esi + 0x120] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F96BD: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F96C0: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F96C5: call 0x77f380 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_00780780); /* 0x006F96CA: call 0x780780 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xD8) = eax; /* 0x006F96CF: mov dword ptr [esi + 0xd8], eax */
    _xmm[0].u64[0] = (uint32_t)(MEM32(edi + 0x4)); _xmm[0].u64[1] = 0; /* 0x006F96D5: movd xmm0, dword ptr [edi + 4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F96DA: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F96DD: mulss xmm0, dword ptr [esi + 0x124] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F96E5: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F96E8: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F380); /* 0x006F96ED: call 0x77f380 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_00780780); /* 0x006F96F2: call 0x780780 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xDC) = eax; /* 0x006F96F7: mov dword ptr [esi + 0xdc], eax */
    _xmm[0].u64[0] = (uint32_t)(MEM32(edi + 0x8)); _xmm[0].u64[1] = 0; /* 0x006F96FD: movd xmm0, dword ptr [edi + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9702: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x120)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9705: mulss xmm0, dword ptr [esi + 0x120] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F970D: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F9710: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F9715: call 0x77f320 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_00780780); /* 0x006F971A: call 0x780780 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xE0) = eax; /* 0x006F971F: mov dword ptr [esi + 0xe0], eax */
    _xmm[0].u64[0] = (uint32_t)(MEM32(edi + 0xC)); _xmm[0].u64[1] = 0; /* 0x006F9725: movd xmm0, dword ptr [edi + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F972A: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x124)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F972D: mulss xmm0, dword ptr [esi + 0x124] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006F9735: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006F9738: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F320); /* 0x006F973D: call 0x77f320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9742: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00780780); /* 0x006F9745: call 0x780780 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xE4) = eax; /* 0x006F974A: mov dword ptr [esi + 0xe4], eax */
    eax = MEM32(esi + 0x30); /* 0x006F9750: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x006F9753: push esi */
    RECOMP_ICALL(eax); /* 0x006F9754: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9756: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9759: pop edi */
    esi = POP32_VAL(esp); /* 0x006F975A: pop esi */
    esp = ebp; /* 0x006F975B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F975D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F975E: ret  */
L_006F975F:
    eax = esi + 0xE4; /* 0x006F975F: lea eax, [esi + 0xe4] */
    MEM32(esi + 0xD8) = 0; /* 0x006F9765: mov dword ptr [esi + 0xd8], 0 */
    PUSH32(esp, eax); /* 0x006F976F: push eax */
    edx = esi + 0xE0; /* 0x006F9770: lea edx, [esi + 0xe0] */
    MEM32(esi + 0xDC) = 0; /* 0x006F9776: mov dword ptr [esi + 0xdc], 0 */
    RECOMP_CALL(sub_006F8560); /* 0x006F9780: call 0x6f8560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9785: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006F9788: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006F97A8; /* 0x006F978A: js 0x6f97a8 */
L_006F978C:
    eax = MEM32(esi + 0x30); /* 0x006F978C: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x006F978F: push esi */
    RECOMP_ICALL(eax); /* 0x006F9790: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9792: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9795: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9796: pop esi */
    esp = ebp; /* 0x006F9797: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9799: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F979A: ret  */
L_006F979B:
    PUSH32(esp, 0x00806458u); /* 0x006F979B: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F97A0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F97A5: add esp, 4 */
    _flag_k = FK_ADD;
L_006F97A8:
    edi = POP32_VAL(esp); /* 0x006F97A8: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F97A9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006F97AC: pop esi */
    esp = ebp; /* 0x006F97AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F97AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F97B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F97C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F97C0u);

L_006F97C0:
    /* test ecx, ecx */ /* 0x006F97C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9838; /* 0x006F97C2: je 0x6f9838 */
L_006F97C4:
    /* cmp MEM32(ecx), 0x0092501Bu */ /* 0x006F97C4: cmp dword ptr [ecx], 0x92501b */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9838; /* 0x006F97CA: jne 0x6f9838 */
L_006F97CC:
    /* test edx, edx */ /* 0x006F97CC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9843; /* 0x006F97CE: je 0x6f9843 */
L_006F97D0:
    _xmm[0].u64[0] = (uint32_t)(MEM32(ecx + 0xD8)); _xmm[0].u64[1] = 0; /* 0x006F97D0: movd xmm0, dword ptr [ecx + 0xd8] */
    _xmm[2].u64[0] = MEM32(ecx + 0x120); _xmm[2].u64[1] = 0; /* 0x006F97D8: movss xmm2, dword ptr [ecx + 0x120] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F97E0: cvtdq2ps xmm0, xmm0 */
    _xmm[1].u64[0] = MEM32(ecx + 0x124); _xmm[1].u64[1] = 0; /* 0x006F97E3: movss xmm1, dword ptr [ecx + 0x124] */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F97EB: divss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F97EF: cvttss2si eax, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ecx + 0xDC)); _xmm[0].u64[1] = 0; /* 0x006F97F3: movd xmm0, dword ptr [ecx + 0xdc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F97FB: cvtdq2ps xmm0, xmm0 */
    MEM32(edx) = eax; /* 0x006F97FE: mov dword ptr [edx], eax */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F9800: divss xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F9804: cvttss2si eax, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ecx + 0xE0)); _xmm[0].u64[1] = 0; /* 0x006F9808: movd xmm0, dword ptr [ecx + 0xe0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9810: cvtdq2ps xmm0, xmm0 */
    MEM32(edx + 0x4) = eax; /* 0x006F9813: mov dword ptr [edx + 4], eax */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F9816: divss xmm0, xmm2 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F981A: cvttss2si eax, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ecx + 0xE4)); _xmm[0].u64[1] = 0; /* 0x006F981E: movd xmm0, dword ptr [ecx + 0xe4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9826: cvtdq2ps xmm0, xmm0 */
    MEM32(edx + 0x8) = eax; /* 0x006F9829: mov dword ptr [edx + 8], eax */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006F982C: divss xmm0, xmm1 */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006F9830: cvttss2si eax, xmm0 */
    MEM32(edx + 0xC) = eax; /* 0x006F9834: mov dword ptr [edx + 0xc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9837: ret  */
L_006F9838:
    PUSH32(esp, 0x00806458u); /* 0x006F9838: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F983D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006F9842: pop ecx */
L_006F9843:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9843: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9850u);

L_006F9850:
    PUSH32(esp, ebp); /* 0x006F9850: push ebp */
    ebp = esp; /* 0x006F9851: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x006F9853: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006F9856: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006F985B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006F985D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006F9860: push esi */
    esi = ecx; /* 0x006F9861: mov esi, ecx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006F9863: xorps xmm0, xmm0 */
    PUSH32(esp, edi); /* 0x006F9866: push edi */
    edi = edx; /* 0x006F9867: mov edi, edx */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006F9869: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    xmm_st(ebp + (-0x34), _xmm[0]); /* 0x006F986E: movdqu xmmword ptr [ebp - 0x34], xmm0 */
    /* test esi, esi */ /* 0x006F9873: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9978; /* 0x006F9875: je 0x6f9978 */
L_006F987B:
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006F987B: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9978; /* 0x006F9881: jne 0x6f9978 */
L_006F9887:
    /* test edi, edi */ /* 0x006F9887: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9971; /* 0x006F9889: je 0x6f9971 */
L_006F988F:
    /* cmp MEM32(edi), 0x0092501Au */ /* 0x006F988F: cmp dword ptr [edi], 0x92501a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9971; /* 0x006F9895: jne 0x6f9971 */
L_006F989B:
    /* cmp esi, MEM32(edi + 0x20) */ /* 0x006F989B: cmp esi, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F98BD; /* 0x006F989E: je 0x6f98bd */
L_006F98A0:
    PUSH32(esp, 0x008064F8u); /* 0x006F98A0: push 0x8064f8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F98A5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F98AA: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F98AD: pop edi */
    esi = POP32_VAL(esp); /* 0x006F98AE: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F98AF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F98B2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F98B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F98B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F98BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F98BC: ret  */
L_006F98BD:
    /* cmp MEM32(esi + 0xC0), 0 */ /* 0x006F98BD: cmp dword ptr [esi + 0xc0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F98D8; /* 0x006F98C4: je 0x6f98d8 */
L_006F98C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F98C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F98C8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F98C9: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F98CA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F98CD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F98CF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F98D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F98D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F98D7: ret  */
L_006F98D8:
    eax = MEM32(edi + 0xC); /* 0x006F98D8: mov eax, dword ptr [edi + 0xc] */
    edx = ebp + (-0x34); /* 0x006F98DB: lea edx, [ebp - 0x34] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006F98DE: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x006F98E1: mov eax, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x14)) = 0; /* 0x006F98E4: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x006F98EB: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006F98F2: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_006F97C0); /* 0x006F98F5: call 0x6f97c0 */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM32(esi + 0x120); _xmm[3].u64[1] = 0; /* 0x006F98FA: movss xmm3, dword ptr [esi + 0x120] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006F9902: xorps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(esi + 0x124); _xmm[2].u64[1] = 0; /* 0x006F9905: movss xmm2, dword ptr [esi + 0x124] */
    _xmm[0] = _xmm[3]; /* 0x006F990D: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9910: mulss xmm0, xmm1 */
    eax = MEM32(edi + 0x24); /* 0x006F9914: mov eax, dword ptr [edi + 0x24] */
    /* test eax, eax */ /* 0x006F9917: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = eax; } /* 0x006F9919: cmovne edi, eax */
    eax = ebp + (-0x24); /* 0x006F991C: lea eax, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = _xmm[0].u32[0]; /* 0x006F991F: movss dword ptr [ebp - 0x24], xmm0 */
    _xmm[0] = _xmm[2]; /* 0x006F9924: movaps xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9927: mulss xmm0, xmm1 */
    PUSH32(esp, eax); /* 0x006F992B: push eax */
    eax = ebp + (-0x14); /* 0x006F992C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006F992F: push eax */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x006F9930: movss dword ptr [ebp - 0x20], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebp + (-0x2C))); _xmm[0].u64[1] = 0; /* 0x006F9935: movd xmm0, dword ptr [ebp - 0x2c] */
    eax = MEM32(esi + 0x48); /* 0x006F993A: mov eax, dword ptr [esi + 0x48] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F993D: cvtdq2ps xmm0, xmm0 */
    PUSH32(esp, edi); /* 0x006F9940: push edi */
    PUSH32(esp, esi); /* 0x006F9941: push esi */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9942: mulss xmm0, xmm3 */
    MEM32(ebp + (-0x1C)) = _xmm[0].u32[0]; /* 0x006F9946: movss dword ptr [ebp - 0x1c], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebp + (-0x28))); _xmm[0].u64[1] = 0; /* 0x006F994B: movd xmm0, dword ptr [ebp - 0x28] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006F9950: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006F9953: mulss xmm0, xmm2 */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x006F9957: movss dword ptr [ebp - 0x18], xmm0 */
    RECOMP_ICALL(eax); /* 0x006F995C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006F995E: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9961: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9962: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006F9963: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F9966: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006F9968: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F996D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F996F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9970: ret  */
L_006F9971:
    PUSH32(esp, 0x0080646Cu); /* 0x006F9971: push 0x80646c */
    goto L_006F997D; /* 0x006F9976: jmp 0x6f997d */
L_006F9978:
    PUSH32(esp, 0x00806458u); /* 0x006F9978: push 0x806458 */
L_006F997D:
    RECOMP_CALL(sub_006EDB70); /* 0x006F997D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006F9982: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9985: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006F9988: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F998A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F998D: pop edi */
    esi = POP32_VAL(esp); /* 0x006F998E: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006F998F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006F9994: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9996: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9997: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F99A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F99A0u);

L_006F99A0:
    PUSH32(esp, ebp); /* 0x006F99A0: push ebp */
    ebp = esp; /* 0x006F99A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F99A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006F99A6: push ebx */
    PUSH32(esp, edi); /* 0x006F99A7: push edi */
    edi = ecx; /* 0x006F99A8: mov edi, ecx */
    /* test edi, edi */ /* 0x006F99AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9A2D; /* 0x006F99AC: je 0x6f9a2d */
L_006F99AE:
    /* cmp MEM32(edi), 0x0092501Au */ /* 0x006F99AE: cmp dword ptr [edi], 0x92501a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0092501Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9A2D; /* 0x006F99B4: jne 0x6f9a2d */
L_006F99B6:
    ebx = MEM32(edi + 0x20); /* 0x006F99B6: mov ebx, dword ptr [edi + 0x20] */
    /* cmp edi, MEM32(ebx + 0x134) */ /* 0x006F99B9: cmp edi, dword ptr [ebx + 0x134] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x134));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F99CA; /* 0x006F99BF: jne 0x6f99ca */
L_006F99C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F99C1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x006F99C3: mov ecx, ebx */
    RECOMP_CALL(sub_006F9180); /* 0x006F99C5: call 0x6f9180 */
    RECOMP_FLAGS_IN();
L_006F99CA:
    ecx = MEM32(edi + 0x4C); /* 0x006F99CA: mov ecx, dword ptr [edi + 0x4c] */
    MEM32(edi) = 0; /* 0x006F99CD: mov dword ptr [edi], 0 */
    /* test ecx, ecx */ /* 0x006F99D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F99DD; /* 0x006F99D5: je 0x6f99dd */
L_006F99D7:
    eax = MEM32(edi + 0x48); /* 0x006F99D7: mov eax, dword ptr [edi + 0x48] */
    MEM32(ecx + 0x48) = eax; /* 0x006F99DA: mov dword ptr [ecx + 0x48], eax */
L_006F99DD:
    ecx = MEM32(edi + 0x48); /* 0x006F99DD: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(edi + 0x4C); /* 0x006F99E0: mov eax, dword ptr [edi + 0x4c] */
    /* test ecx, ecx */ /* 0x006F99E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F99EC; /* 0x006F99E5: je 0x6f99ec */
L_006F99E7:
    MEM32(ecx + 0x4C) = eax; /* 0x006F99E7: mov dword ptr [ecx + 0x4c], eax */
    goto L_006F99F2; /* 0x006F99EA: jmp 0x6f99f2 */
L_006F99EC:
    MEM32(ebx + 0x130) = eax; /* 0x006F99EC: mov dword ptr [ebx + 0x130], eax */
L_006F99F2:
    ecx = MEM32(edi + 0x24); /* 0x006F99F2: mov ecx, dword ptr [edi + 0x24] */
    /* test ecx, ecx */ /* 0x006F99F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F99FE; /* 0x006F99F7: je 0x6f99fe */
L_006F99F9:
    RECOMP_CALL(sub_006F99A0); /* 0x006F99F9: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
L_006F99FE:
    ecx = MEM32(edi + 0x28); /* 0x006F99FE: mov ecx, dword ptr [edi + 0x28] */
    /* test ecx, ecx */ /* 0x006F9A01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9A0A; /* 0x006F9A03: je 0x6f9a0a */
L_006F9A05:
    RECOMP_CALL(sub_0070B8F0); /* 0x006F9A05: call 0x70b8f0 */
    RECOMP_FLAGS_IN();
L_006F9A0A:
    PUSH32(esp, MEM32(edi + 0x2C)); /* 0x006F9A0A: push dword ptr [edi + 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F9A0D: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x58); /* 0x006F9A13: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9A16: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006F9A19: push edi */
    PUSH32(esp, ebx); /* 0x006F9A1A: push ebx */
    RECOMP_ICALL(eax); /* 0x006F9A1B: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006F9A1D: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F9A1E: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F9A24: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9A27: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F9A28: pop ebx */
    esp = ebp; /* 0x006F9A29: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9A2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9A2C: ret  */
L_006F9A2D:
    PUSH32(esp, 0x0080646Cu); /* 0x006F9A2D: push 0x80646c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9A32: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9A37: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9A3A: pop edi */
    ebx = POP32_VAL(esp); /* 0x006F9A3B: pop ebx */
    esp = ebp; /* 0x006F9A3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F9A3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9A3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9A40u);

L_006F9A40:
    PUSH32(esp, esi); /* 0x006F9A40: push esi */
    esi = ecx; /* 0x006F9A41: mov esi, ecx */
    /* test esi, esi */ /* 0x006F9A43: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9AA2; /* 0x006F9A45: je 0x6f9aa2 */
L_006F9A47:
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006F9A47: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9AA2; /* 0x006F9A4D: jne 0x6f9aa2 */
L_006F9A4F:
    edx = esi; /* 0x006F9A4F: mov edx, esi */
    ecx = 0x006F7F80u; /* 0x006F9A51: mov ecx, 0x6f7f80 */
    RECOMP_CALL(sub_006ED3D0); /* 0x006F9A56: call 0x6ed3d0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x130), 0 */ /* 0x006F9A5B: cmp dword ptr [esi + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9A78; /* 0x006F9A62: je 0x6f9a78 */
L_006F9A64:
    ecx = MEM32(esi + 0x130); /* 0x006F9A64: mov ecx, dword ptr [esi + 0x130] */
    RECOMP_CALL(sub_006F99A0); /* 0x006F9A6A: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x130), 0 */ /* 0x006F9A6F: cmp dword ptr [esi + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9A64; /* 0x006F9A76: jne 0x6f9a64 */
L_006F9A78:
    ecx = MEM32(esi + 0xBC); /* 0x006F9A78: mov ecx, dword ptr [esi + 0xbc] */
    /* test ecx, ecx */ /* 0x006F9A7E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9A91; /* 0x006F9A80: je 0x6f9a91 */
L_006F9A82:
    PUSH32(esp, 0); /* 0x006F9A82: push 0 */
    edx = 0x0080636Cu; /* 0x006F9A84: mov edx, 0x80636c */
    RECOMP_CALL(sub_006EB850); /* 0x006F9A89: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9A8E: add esp, 4 */
    _flag_k = FK_ADD;
L_006F9A91:
    eax = MEM32(esi + 0x5C); /* 0x006F9A91: mov eax, dword ptr [esi + 0x5c] */
    PUSH32(esp, esi); /* 0x006F9A94: push esi */
    MEM32(esi) = 0; /* 0x006F9A95: mov dword ptr [esi], 0 */
    RECOMP_ICALL(eax); /* 0x006F9A9B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9A9D: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F9AA0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9AA1: ret  */
L_006F9AA2:
    PUSH32(esp, 0x00806458u); /* 0x006F9AA2: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9AA7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9AAC: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F9AAF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9AB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9AC0u);

L_006F9AC0:
    PUSH32(esp, ebp); /* 0x006F9AC0: push ebp */
    ebp = esp; /* 0x006F9AC1: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x006F9AC3: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x006F9AC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9AD9; /* 0x006F9AC8: je 0x6f9ad9 */
L_006F9ACA:
    /* cmp MEM8(eax), 0x30u */ /* 0x006F9ACA: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x863148) = 0; /* 0x006F9ACD: mov dword ptr [0x863148], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9AE3; /* 0x006F9AD7: je 0x6f9ae3 */
L_006F9AD9:
    MEM32(0x863148) = 1; /* 0x006F9AD9: mov dword ptr [0x863148], 1 */
L_006F9AE3:
    ebp = POP32_VAL(esp); /* 0x006F9AE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9AE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9AF0u);

L_006F9AF0:
    PUSH32(esp, ebp); /* 0x006F9AF0: push ebp */
    ebp = esp; /* 0x006F9AF1: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x006F9AF3: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x006F9AF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9B09; /* 0x006F9AF8: je 0x6f9b09 */
L_006F9AFA:
    /* cmp MEM8(eax), 0x30u */ /* 0x006F9AFA: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x863144) = 0; /* 0x006F9AFD: mov dword ptr [0x863144], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9B13; /* 0x006F9B07: je 0x6f9b13 */
L_006F9B09:
    MEM32(0x863144) = 1; /* 0x006F9B09: mov dword ptr [0x863144], 1 */
L_006F9B13:
    ebp = POP32_VAL(esp); /* 0x006F9B13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9B14: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9B20u);

L_006F9B20:
    PUSH32(esp, ebp); /* 0x006F9B20: push ebp */
    ebp = esp; /* 0x006F9B21: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006F9B23: push esi */
    PUSH32(esp, edi); /* 0x006F9B24: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006F9B25: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x29C); /* 0x006F9B28: mov esi, dword ptr [edi + 0x29c] */
    RECOMP_CALL(sub_00712810); /* 0x006F9B2E: call 0x712810 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006F9B33: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006F9B36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9B41; /* 0x006F9B38: je 0x6f9b41 */
L_006F9B3A:
    PUSH32(esp, eax); /* 0x006F9B3A: push eax */
    RECOMP_ICALL(MEM32(0x7CC1BC)); /* 0x006F9B3B: call dword ptr [0x7cc1bc] */
    RECOMP_FLAGS_IN();
L_006F9B41:
    eax = MEM32(esi + 0x18); /* 0x006F9B41: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x006F9B44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9B4F; /* 0x006F9B46: je 0x6f9b4f */
L_006F9B48:
    PUSH32(esp, eax); /* 0x006F9B48: push eax */
    RECOMP_ICALL(MEM32(0x7CC1BC)); /* 0x006F9B49: call dword ptr [0x7cc1bc] */
    RECOMP_FLAGS_IN();
L_006F9B4F:
    PUSH32(esp, MEM32(edi + 0x29C)); /* 0x006F9B4F: push dword ptr [edi + 0x29c] */
    esi = MEM32(0x7CC44C); /* 0x006F9B55: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006F9B5B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006F9B5D: push edi */
    RECOMP_ICALL(esi); /* 0x006F9B5E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9B60: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006F9B63: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9B64: pop esi */
    ebp = POP32_VAL(esp); /* 0x006F9B65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9B66: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9B70u);

L_006F9B70:
    PUSH32(esp, esi); /* 0x006F9B70: push esi */
    PUSH32(esp, edi); /* 0x006F9B71: push edi */
    PUSH32(esp, ecx); /* 0x006F9B72: push ecx */
    RECOMP_CALL(sub_007126A0); /* 0x006F9B73: call 0x7126a0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC5E0); /* 0x006F9B78: mov edi, dword ptr [0x7cc5e0] */
    PUSH32(esp, 0x2A8u); /* 0x006F9B7E: push 0x2a8 */
    PUSH32(esp, 1); /* 0x006F9B83: push 1 */
    RECOMP_ICALL(edi); /* 0x006F9B85: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006F9B87: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006F9B89: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006F9B8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9D7F; /* 0x006F9B8E: je 0x6f9d7f */
L_006F9B94:
    PUSH32(esp, 0x152Cu); /* 0x006F9B94: push 0x152c */
    PUSH32(esp, 1); /* 0x006F9B99: push 1 */
    RECOMP_ICALL(edi); /* 0x006F9B9B: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006F9B9D: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9B9F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006F9BA2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9D7F; /* 0x006F9BA4: je 0x6f9d7f */
L_006F9BAA:
    ecx = 0x0080656Cu; /* 0x006F9BAA: mov ecx, 0x80656c */
    MEM32(esi + 0x29C) = edi; /* 0x006F9BAF: mov dword ptr [esi + 0x29c], edi */
    RECOMP_CALL(sub_00710120); /* 0x006F9BB5: call 0x710120 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x006F9BBA: mov dword ptr [edi + 8], eax */
    /* test eax, eax */ /* 0x006F9BBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9BF0; /* 0x006F9BBF: je 0x6f9bf0 */
L_006F9BC1:
    edx = 0x00806554u; /* 0x006F9BC1: mov edx, 0x806554 */
    ecx = eax; /* 0x006F9BC6: mov ecx, eax */
    RECOMP_CALL(sub_007101F0); /* 0x006F9BC8: call 0x7101f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x006F9BCD: mov ecx, dword ptr [edi + 8] */
    edx = 0x008065ACu; /* 0x006F9BD0: mov edx, 0x8065ac */
    MEM32(edi + 0xC) = eax; /* 0x006F9BD5: mov dword ptr [edi + 0xc], eax */
    RECOMP_CALL(sub_007101F0); /* 0x006F9BD8: call 0x7101f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x006F9BDD: mov ecx, dword ptr [edi + 8] */
    edx = 0x00806598u; /* 0x006F9BE0: mov edx, 0x806598 */
    MEM32(edi + 0x10) = eax; /* 0x006F9BE5: mov dword ptr [edi + 0x10], eax */
    RECOMP_CALL(sub_007101F0); /* 0x006F9BE8: call 0x7101f0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = eax; /* 0x006F9BED: mov dword ptr [edi + 0x14], eax */
L_006F9BF0:
    ecx = 0x0080658Cu; /* 0x006F9BF0: mov ecx, 0x80658c */
    RECOMP_CALL(sub_00710120); /* 0x006F9BF5: call 0x710120 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x006F9BFA: mov dword ptr [edi + 0x18], eax */
    /* test eax, eax */ /* 0x006F9BFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9C10; /* 0x006F9BFF: je 0x6f9c10 */
L_006F9C01:
    edx = 0x00806578u; /* 0x006F9C01: mov edx, 0x806578 */
    ecx = eax; /* 0x006F9C06: mov ecx, eax */
    RECOMP_CALL(sub_007101F0); /* 0x006F9C08: call 0x7101f0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1C) = eax; /* 0x006F9C0D: mov dword ptr [edi + 0x1c], eax */
L_006F9C10:
    edi = POP32_VAL(esp); /* 0x006F9C10: pop edi */
    MEM32(esi + 0x4) = 0x006F9DA0u; /* 0x006F9C11: mov dword ptr [esi + 4], 0x6f9da0 */
    eax = esi; /* 0x006F9C18: mov eax, esi */
    MEM32(esi + 0x8) = 0x006F9DF0u; /* 0x006F9C1A: mov dword ptr [esi + 8], 0x6f9df0 */
    MEM32(esi + 0xC) = 0x0070DDE0u; /* 0x006F9C21: mov dword ptr [esi + 0xc], 0x70dde0 */
    MEM32(esi + 0x14) = 0x0070DF30u; /* 0x006F9C28: mov dword ptr [esi + 0x14], 0x70df30 */
    MEM32(esi + 0x10) = 0x0070DED0u; /* 0x006F9C2F: mov dword ptr [esi + 0x10], 0x70ded0 */
    MEM32(esi + 0x18) = 0x0070E090u; /* 0x006F9C36: mov dword ptr [esi + 0x18], 0x70e090 */
    MEM32(esi + 0x1C) = 0x0070E130u; /* 0x006F9C3D: mov dword ptr [esi + 0x1c], 0x70e130 */
    MEM32(esi + 0xCC) = 0x007125B0u; /* 0x006F9C44: mov dword ptr [esi + 0xcc], 0x7125b0 */
    MEM32(esi + 0x20) = 0x006FDF00u; /* 0x006F9C4E: mov dword ptr [esi + 0x20], 0x6fdf00 */
    MEM32(esi + 0x24) = 0x006FE030u; /* 0x006F9C55: mov dword ptr [esi + 0x24], 0x6fe030 */
    MEM32(esi + 0x28) = 0x006FE0D0u; /* 0x006F9C5C: mov dword ptr [esi + 0x28], 0x6fe0d0 */
    MEM32(esi + 0x2C) = 0x006FE130u; /* 0x006F9C63: mov dword ptr [esi + 0x2c], 0x6fe130 */
    MEM32(esi + 0x30) = 0x006FE2F0u; /* 0x006F9C6A: mov dword ptr [esi + 0x30], 0x6fe2f0 */
    MEM32(esi + 0x34) = 0x006FE310u; /* 0x006F9C71: mov dword ptr [esi + 0x34], 0x6fe310 */
    MEM32(esi + 0x44) = 0x006FEB80u; /* 0x006F9C78: mov dword ptr [esi + 0x44], 0x6feb80 */
    MEM32(esi + 0x50) = 0x006FE330u; /* 0x006F9C7F: mov dword ptr [esi + 0x50], 0x6fe330 */
    MEM32(esi + 0x54) = 0x006FE350u; /* 0x006F9C86: mov dword ptr [esi + 0x54], 0x6fe350 */
    MEM32(esi + 0x58) = 0x006FE370u; /* 0x006F9C8D: mov dword ptr [esi + 0x58], 0x6fe370 */
    MEM32(esi + 0x5C) = 0x006FE390u; /* 0x006F9C94: mov dword ptr [esi + 0x5c], 0x6fe390 */
    MEM32(esi + 0x60) = 0x006FE3C0u; /* 0x006F9C9B: mov dword ptr [esi + 0x60], 0x6fe3c0 */
    MEM32(esi + 0x64) = 0x006FE4A0u; /* 0x006F9CA2: mov dword ptr [esi + 0x64], 0x6fe4a0 */
    MEM32(esi + 0x68) = 0x006FE3E0u; /* 0x006F9CA9: mov dword ptr [esi + 0x68], 0x6fe3e0 */
    MEM32(esi + 0x6C) = 0x006FE450u; /* 0x006F9CB0: mov dword ptr [esi + 0x6c], 0x6fe450 */
    MEM32(esi + 0x70) = 0x006FE4D0u; /* 0x006F9CB7: mov dword ptr [esi + 0x70], 0x6fe4d0 */
    MEM32(esi + 0x74) = 0x006FE6C0u; /* 0x006F9CBE: mov dword ptr [esi + 0x74], 0x6fe6c0 */
    MEM32(esi + 0x78) = 0x006FE740u; /* 0x006F9CC5: mov dword ptr [esi + 0x78], 0x6fe740 */
    MEM32(esi + 0x7C) = 0x006FE7C0u; /* 0x006F9CCC: mov dword ptr [esi + 0x7c], 0x6fe7c0 */
    MEM32(esi + 0x80) = 0x006FE800u; /* 0x006F9CD3: mov dword ptr [esi + 0x80], 0x6fe800 */
    MEM32(esi + 0xA0) = 0x006FE870u; /* 0x006F9CDD: mov dword ptr [esi + 0xa0], 0x6fe870 */
    MEM32(esi + 0x84) = 0x0070D0C0u; /* 0x006F9CE7: mov dword ptr [esi + 0x84], 0x70d0c0 */
    MEM32(esi + 0x88) = 0x0070D2C0u; /* 0x006F9CF1: mov dword ptr [esi + 0x88], 0x70d2c0 */
    MEM32(esi + 0x8C) = 0x0070D2F0u; /* 0x006F9CFB: mov dword ptr [esi + 0x8c], 0x70d2f0 */
    MEM32(esi + 0x90) = 0x006FEA40u; /* 0x006F9D05: mov dword ptr [esi + 0x90], 0x6fea40 */
    MEM32(esi + 0x100) = 0x006658D0u; /* 0x006F9D0F: mov dword ptr [esi + 0x100], 0x6658d0 */
    MEM32(esi + 0x94) = 0x00712890u; /* 0x006F9D19: mov dword ptr [esi + 0x94], 0x712890 */
    MEM32(esi + 0x98) = 0x00712950u; /* 0x006F9D23: mov dword ptr [esi + 0x98], 0x712950 */
    MEM32(esi + 0x9C) = 0x00712A00u; /* 0x006F9D2D: mov dword ptr [esi + 0x9c], 0x712a00 */
    MEM32(esi + 0xD4) = 0x0070E530u; /* 0x006F9D37: mov dword ptr [esi + 0xd4], 0x70e530 */
    MEM32(esi + 0xD8) = 0x0070E5C0u; /* 0x006F9D41: mov dword ptr [esi + 0xd8], 0x70e5c0 */
    MEM32(esi + 0xDC) = 0x0070E630u; /* 0x006F9D4B: mov dword ptr [esi + 0xdc], 0x70e630 */
    MEM32(esi + 0xF0) = 0x0070D330u; /* 0x006F9D55: mov dword ptr [esi + 0xf0], 0x70d330 */
    MEM32(esi + 0xF4) = 0x0070D4B0u; /* 0x006F9D5F: mov dword ptr [esi + 0xf4], 0x70d4b0 */
    MEM32(esi + 0xF8) = 0x0070D570u; /* 0x006F9D69: mov dword ptr [esi + 0xf8], 0x70d570 */
    MEM32(esi + 0x2A4) = 0x006F9B20u; /* 0x006F9D73: mov dword ptr [esi + 0x2a4], 0x6f9b20 */
    esi = POP32_VAL(esp); /* 0x006F9D7D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9D7E: ret  */
L_006F9D7F:
    PUSH32(esp, esi); /* 0x006F9D7F: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006F9D80: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00803E4Cu); /* 0x006F9D86: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9D8B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006F9D90: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F9D93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F9D95: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9D96: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9D97: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9DA0u);

L_006F9DA0:
    PUSH32(esp, ebp); /* 0x006F9DA0: push ebp */
    ebp = esp; /* 0x006F9DA1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x006F9DA3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0070DC60); /* 0x006F9DA6: call 0x70dc60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006F9DAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F9DB4; /* 0x006F9DAD: jns 0x6f9db4 */
L_006F9DAF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006F9DAF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F9DB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9DB3: ret  */
L_006F9DB4:
    ecx = MEM32(ebp + 0x8); /* 0x006F9DB4: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0070E210); /* 0x006F9DB7: call 0x70e210 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_00710740); /* 0x006F9DBC: call 0x710740 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006F9DC1: push ecx */
    edx = 0x006F9AC0u; /* 0x006F9DC2: mov edx, 0x6f9ac0 */
    ecx = 0x008065ECu; /* 0x006F9DC7: mov ecx, 0x8065ec */
    RECOMP_CALL(sub_006F5AB0); /* 0x006F9DCC: call 0x6f5ab0 */
    RECOMP_FLAGS_IN();
    edx = 0x006F9AF0u; /* 0x006F9DD1: mov edx, 0x6f9af0 */
    ecx = 0x008065C0u; /* 0x006F9DD6: mov ecx, 0x8065c0 */
    RECOMP_CALL(sub_006F5AB0); /* 0x006F9DDB: call 0x6f5ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9DE0: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F9DE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006F9DE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9DE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9DF0u);

L_006F9DF0:
    PUSH32(esp, ebp); /* 0x006F9DF0: push ebp */
    ebp = esp; /* 0x006F9DF1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x006F9DF3: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x29C); /* 0x006F9DF6: mov ecx, dword ptr [ecx + 0x29c] */
    RECOMP_CALL(sub_0070E870); /* 0x006F9DFC: call 0x70e870 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006F9E01: pop ebp */
    goto L_007107F0; /* 0x006F9E02: jmp 0x7107f0 */
L_007107F0:
    PUSH32(esp, ebp); /* 0x007107F0: push ebp */
    ebp = esp; /* 0x007107F1: mov ebp, esp */
    eax = MEM32(0x926A40); /* 0x007107F3: mov eax, dword ptr [0x926a40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x007107F8: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x007107FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071081D; /* 0x007107FD: je 0x71081d */
L_007107FF:
    PUSH32(esp, eax); /* 0x007107FF: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00710800: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00710806: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x926A40) = 0; /* 0x00710809: mov dword ptr [0x926a40], 0 */
    MEM32(0x926A44) = 0; /* 0x00710813: mov dword ptr [0x926a44], 0 */
L_0071081D:
    /* cmp MEM32(0x87CC90), 0 */ /* 0x0071081D: cmp dword ptr [0x87cc90], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00710853; /* 0x00710824: je 0x710853 */
L_00710826:
    PUSH32(esp, 0xCu); /* 0x00710826: push 0xc */
    PUSH32(esp, 1); /* 0x00710828: push 1 */
    eax = ebp + (-0xC); /* 0x0071082A: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x00020001u; /* 0x0071082D: mov dword ptr [ebp - 0xc], 0x20001 */
    PUSH32(esp, eax); /* 0x00710834: push eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00710835: mov dword ptr [ebp - 4], 0 */
    MEM32(0x87CC90) = 0; /* 0x0071083C: mov dword ptr [0x87cc90], 0 */
    MEM32(ebp + (-0x8)) = 1; /* 0x00710846: mov dword ptr [ebp - 8], 1 */
    RECOMP_ICALL(MEM32(0x7CC754)); /* 0x0071084D: call dword ptr [0x7cc754] */
    RECOMP_FLAGS_IN();
L_00710853:
    esp = ebp; /* 0x00710853: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710855: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710856: ret  */
    RECOMP_REGS_OUT();
}

void sub_006F9E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006F9E10u);

L_006F9E10:
    PUSH32(esp, ebp); /* 0x006F9E10: push ebp */
    ebp = esp; /* 0x006F9E11: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006F9E13: push ebx */
    PUSH32(esp, esi); /* 0x006F9E14: push esi */
    esi = edx; /* 0x006F9E15: mov esi, edx */
    PUSH32(esp, edi); /* 0x006F9E17: push edi */
    /* test ecx, ecx */ /* 0x006F9E18: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9E3E; /* 0x006F9E1A: je 0x6f9e3e */
L_006F9E1C:
    eax = ecx; /* 0x006F9E1C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F9E1E: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F9E23: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9E3E; /* 0x006F9E28: je 0x6f9e3e */
L_006F9E2A:
    PUSH32(esp, 0x00806630u); /* 0x006F9E2A: push 0x806630 */
    RECOMP_CALL(sub_006EDB70); /* 0x006F9E2F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F9E34: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006F9E37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006F9E39: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9E3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F9E3B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F9E3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9E3D: ret  */
L_006F9E3E:
    edx = ecx; /* 0x006F9E3E: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x006F9E40: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 2 */ /* 0x006F9E46: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006F9E57; /* 0x006F9E49: ja 0x6f9e57 */
L_006F9E4B:
    eax = ecx; /* 0x006F9E4B: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006F9E4D: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006F9E4D: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x006F9E50: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006F9E92; /* 0x006F9E55: jmp 0x6f9e92 */
L_006F9E57:
    /* test ecx, ecx */ /* 0x006F9E57: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F9E8B; /* 0x006F9E59: je 0x6f9e8b */
L_006F9E5B:
    eax = ecx; /* 0x006F9E5B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006F9E5D: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006F9E62: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9E8B; /* 0x006F9E67: je 0x6f9e8b */
L_006F9E69:
    /* cmp ecx, 0x32595559u */ /* 0x006F9E69: cmp ecx, 0x32595559 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9E86; /* 0x006F9E6F: je 0x6f9e86 */
L_006F9E71:
    /* cmp ecx, 0x59565955u */ /* 0x006F9E71: cmp ecx, 0x59565955 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9E86; /* 0x006F9E77: je 0x6f9e86 */
L_006F9E79:
    edx = 1; /* 0x006F9E79: mov edx, 1 */
    /* cmp ecx, 0x55595659u */ /* 0x006F9E7E: cmp ecx, 0x55595659 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9E8B; /* 0x006F9E84: jne 0x6f9e8b */
L_006F9E86:
    edx = 2; /* 0x006F9E86: mov edx, 2 */
L_006F9E8B:
    eax = edx * 8; /* 0x006F9E8B: lea eax, [edx*8] */
L_006F9E92:
    ebx = MEM32(ebp + 0x10); /* 0x006F9E92: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x006F9E95: mov edx, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x006F9E98: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0x14); /* 0x006F9E9A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebx) = 0; /* 0x006F9E9D: mov dword ptr [ebx], 0 */
    MEM32(edx) = 0; /* 0x006F9EA3: mov dword ptr [edx], 0 */
    MEM32(eax) = 0; /* 0x006F9EA9: mov dword ptr [eax], 0 */
    eax = MEM32(ebp + 0xC); /* 0x006F9EAF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0; /* 0x006F9EB2: mov dword ptr [eax], 0 */
    /* cmp ecx, 0x17101803u */ /* 0x006F9EB8: cmp ecx, 0x17101803 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x17101803u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9EDC; /* 0x006F9EBE: jne 0x6f9edc */
L_006F9EC0:
    MEM32(edx) = 0xFFu; /* 0x006F9EC0: mov dword ptr [edx], 0xff */
    MEM32(eax) = 0xFF00u; /* 0x006F9EC6: mov dword ptr [eax], 0xff00 */
    MEM32(ebx) = 0x00FF0000u; /* 0x006F9ECC: mov dword ptr [ebx], 0xff0000 */
L_006F9ED2:
    eax = 1; /* 0x006F9ED2: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006F9ED7: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9ED8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F9ED9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F9EDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9EDB: ret  */
L_006F9EDC:
    /* cmp ecx, 0x17401803u */ /* 0x006F9EDC: cmp ecx, 0x17401803 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x17401803u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9F00; /* 0x006F9EE2: jne 0x6f9f00 */
L_006F9EE4:
    MEM32(eax) = 0xFF00u; /* 0x006F9EE4: mov dword ptr [eax], 0xff00 */
    eax = 1; /* 0x006F9EEA: mov eax, 1 */
    MEM32(edx) = 0x00FF0000u; /* 0x006F9EEF: mov dword ptr [edx], 0xff0000 */
    MEM32(ebx) = 0xFFu; /* 0x006F9EF5: mov dword ptr [ebx], 0xff */
    edi = POP32_VAL(esp); /* 0x006F9EFB: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9EFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F9EFD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F9EFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9EFF: ret  */
L_006F9F00:
    eax = ecx; /* 0x006F9F00: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006F9F02: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006F9F02: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F9F05: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x006F9F08: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9F17; /* 0x006F9F0B: je 0x6f9f17 */
L_006F9F0D:
    /* cmp eax, 5 */ /* 0x006F9F0D: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F9F17; /* 0x006F9F10: je 0x6f9f17 */
L_006F9F12:
    /* cmp eax, 6 */ /* 0x006F9F12: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F9ED2; /* 0x006F9F15: jne 0x6f9ed2 */
L_006F9F17:
    eax = ecx; /* 0x006F9F17: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006F9F19: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006F9F19: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006F9F1C: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F9F1F: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 7 */ /* 0x006F9F20: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006FA095; /* 0x006F9F23: ja 0x6fa095 */
L_006F9F29:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6FA0AC)); goto _ljump; }
L_006F9F30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F9F30: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xE0u; /* 0x006F9F32: mov eax, 0xe0 */
    edx = esi + 0x1C; /* 0x006F9F37: lea edx, [esi + 0x1c] */
    goto L_006F9FCB; /* 0x006F9F3A: jmp 0x6f9fcb */
L_006F9F3F:
    esi = 0xF000u; /* 0x006F9F3F: mov esi, 0xf000 */
    eax = 0xF00u; /* 0x006F9F44: mov eax, 0xf00 */
    edx = 0xF0u; /* 0x006F9F49: mov edx, 0xf0 */
    edi = 0xFu; /* 0x006F9F4E: mov edi, 0xf */
    goto L_006F9FD0; /* 0x006F9F53: jmp 0x6f9fd0 */
L_006F9F55:
    esi = 0x8000u; /* 0x006F9F55: mov esi, 0x8000 */
    eax = 0x7C00u; /* 0x006F9F5A: mov eax, 0x7c00 */
    edx = 0x3E0u; /* 0x006F9F5F: mov edx, 0x3e0 */
    edi = 0x1Fu; /* 0x006F9F64: mov edi, 0x1f */
    goto L_006F9FD0; /* 0x006F9F69: jmp 0x6f9fd0 */
L_006F9F6B:
    edx = 0x3Eu; /* 0x006F9F6B: mov edx, 0x3e */
    esi = 0xF800u; /* 0x006F9F70: mov esi, 0xf800 */
    eax = 0x7C0u; /* 0x006F9F75: mov eax, 0x7c0 */
    edi = edx + (-0x3D); /* 0x006F9F7A: lea edi, [edx - 0x3d] */
    goto L_006F9FD0; /* 0x006F9F7D: jmp 0x6f9fd0 */
L_006F9F7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006F9F7F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xF800u; /* 0x006F9F81: mov eax, 0xf800 */
    edx = 0x7E0u; /* 0x006F9F86: mov edx, 0x7e0 */
    edi = esi + 0x1F; /* 0x006F9F8B: lea edi, [esi + 0x1f] */
    goto L_006F9FD0; /* 0x006F9F8E: jmp 0x6f9fd0 */
L_006F9F90:
    esi = 0xFF000000u; /* 0x006F9F90: mov esi, 0xff000000 */
    eax = 0x00FF0000u; /* 0x006F9F95: mov eax, 0xff0000 */
    edx = 0xFF00u; /* 0x006F9F9A: mov edx, 0xff00 */
    edi = 0xFFu; /* 0x006F9F9F: mov edi, 0xff */
    goto L_006F9FD0; /* 0x006F9FA4: jmp 0x6f9fd0 */
L_006F9FA6:
    esi = 0xC0000000u; /* 0x006F9FA6: mov esi, 0xc0000000 */
    eax = 0x3FF00000u; /* 0x006F9FAB: mov eax, 0x3ff00000 */
    edx = 0x000FFC00u; /* 0x006F9FB0: mov edx, 0xffc00 */
    edi = 0x3FFu; /* 0x006F9FB5: mov edi, 0x3ff */
    goto L_006F9FD0; /* 0x006F9FBA: jmp 0x6f9fd0 */
L_006F9FBC:
    esi = 0xFFC00000u; /* 0x006F9FBC: mov esi, 0xffc00000 */
    eax = 0x003FF000u; /* 0x006F9FC1: mov eax, 0x3ff000 */
    edx = 0xFFCu; /* 0x006F9FC6: mov edx, 0xffc */
L_006F9FCB:
    edi = 3; /* 0x006F9FCB: mov edi, 3 */
L_006F9FD0:
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x006F9FD0: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x006F9FD0: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006F9FD3: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006F9FD6: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 7 */ /* 0x006F9FD7: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006FA095; /* 0x006F9FDA: ja 0x6fa095 */
L_006F9FE0:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x6FA0CC)); goto _ljump; }
L_006F9FE7:
    ecx = MEM32(ebp + 0x8); /* 0x006F9FE7: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx) = edi; /* 0x006F9FEA: mov dword ptr [ebx], edi */
    MEM32(ecx) = eax; /* 0x006F9FEC: mov dword ptr [ecx], eax */
    eax = 1; /* 0x006F9FEE: mov eax, 1 */
    ecx = MEM32(ebp + 0xC); /* 0x006F9FF3: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = edx; /* 0x006F9FF6: mov dword ptr [ecx], edx */
    edi = POP32_VAL(esp); /* 0x006F9FF8: pop edi */
    esi = POP32_VAL(esp); /* 0x006F9FF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F9FFA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006F9FFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F9FFC: ret  */
L_006F9FFD:
    ecx = MEM32(ebp + 0x8); /* 0x006F9FFD: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx) = edx; /* 0x006FA000: mov dword ptr [ebx], edx */
    MEM32(ecx) = esi; /* 0x006FA002: mov dword ptr [ecx], esi */
    ecx = MEM32(ebp + 0xC); /* 0x006FA004: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x006FA007: mov dword ptr [ecx], eax */
    eax = 1; /* 0x006FA009: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006FA00E: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA00F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA010: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA011: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA012: ret  */
L_006FA013:
    ecx = MEM32(ebp + 0x14); /* 0x006FA013: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebx) = edi; /* 0x006FA016: mov dword ptr [ebx], edi */
    MEM32(ecx) = esi; /* 0x006FA018: mov dword ptr [ecx], esi */
    ecx = MEM32(ebp + 0x8); /* 0x006FA01A: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x006FA01D: mov dword ptr [ecx], eax */
    eax = 1; /* 0x006FA01F: mov eax, 1 */
    ecx = MEM32(ebp + 0xC); /* 0x006FA024: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = edx; /* 0x006FA027: mov dword ptr [ecx], edx */
    edi = POP32_VAL(esp); /* 0x006FA029: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA02A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA02B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA02C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA02D: ret  */
L_006FA02E:
    ecx = MEM32(ebp + 0x8); /* 0x006FA02E: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx) = edx; /* 0x006FA031: mov dword ptr [ebx], edx */
    MEM32(ecx) = esi; /* 0x006FA033: mov dword ptr [ecx], esi */
    ecx = MEM32(ebp + 0xC); /* 0x006FA035: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x006FA038: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x14); /* 0x006FA03A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x006FA03D: mov dword ptr [eax], edi */
    eax = 1; /* 0x006FA03F: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006FA044: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA045: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA046: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA047: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA048: ret  */
L_006FA049:
    ecx = MEM32(ebp + 0xC); /* 0x006FA049: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = esi; /* 0x006FA04C: mov dword ptr [ebx], esi */
    MEM32(ecx) = eax; /* 0x006FA04E: mov dword ptr [ecx], eax */
    eax = 1; /* 0x006FA050: mov eax, 1 */
    ecx = MEM32(ebp + 0x8); /* 0x006FA055: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = edx; /* 0x006FA058: mov dword ptr [ecx], edx */
    edi = POP32_VAL(esp); /* 0x006FA05A: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA05B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA05C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA05D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA05E: ret  */
L_006FA05F:
    ecx = MEM32(ebp + 0xC); /* 0x006FA05F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = esi; /* 0x006FA062: mov dword ptr [ebx], esi */
    MEM32(ecx) = eax; /* 0x006FA064: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x14); /* 0x006FA066: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x006FA069: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x006FA06C: mov dword ptr [eax], edi */
    eax = 1; /* 0x006FA06E: mov eax, 1 */
    MEM32(ecx) = edx; /* 0x006FA073: mov dword ptr [ecx], edx */
    edi = POP32_VAL(esp); /* 0x006FA075: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA076: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA077: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA078: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA079: ret  */
L_006FA07A:
    ecx = MEM32(ebp + 0x14); /* 0x006FA07A: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = esi; /* 0x006FA07D: mov dword ptr [ecx], esi */
L_006FA07F:
    ecx = MEM32(ebp + 0xC); /* 0x006FA07F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = eax; /* 0x006FA082: mov dword ptr [ebx], eax */
    eax = 1; /* 0x006FA084: mov eax, 1 */
    MEM32(ecx) = edx; /* 0x006FA089: mov dword ptr [ecx], edx */
    ecx = MEM32(ebp + 0x8); /* 0x006FA08B: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = edi; /* 0x006FA08E: mov dword ptr [ecx], edi */
    edi = POP32_VAL(esp); /* 0x006FA090: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA091: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA092: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA093: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA094: ret  */
L_006FA095:
    PUSH32(esp, 0x0080618Cu); /* 0x006FA095: push 0x80618c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA09A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA09F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA0A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA0A4: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA0A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA0A6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FA0A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA0A8: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006F9F30u: goto L_006F9F30;
      case 0x006F9F3Fu: goto L_006F9F3F;
      case 0x006F9F55u: goto L_006F9F55;
      case 0x006F9F6Bu: goto L_006F9F6B;
      case 0x006F9F7Fu: goto L_006F9F7F;
      case 0x006F9F90u: goto L_006F9F90;
      case 0x006F9FA6u: goto L_006F9FA6;
      case 0x006F9FBCu: goto L_006F9FBC;
      case 0x006F9FE7u: goto L_006F9FE7;
      case 0x006F9FFDu: goto L_006F9FFD;
      case 0x006FA013u: goto L_006FA013;
      case 0x006FA02Eu: goto L_006FA02E;
      case 0x006FA049u: goto L_006FA049;
      case 0x006FA05Fu: goto L_006FA05F;
      case 0x006FA07Au: goto L_006FA07A;
      case 0x006FA07Fu: goto L_006FA07F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006FA0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA0F0u);

L_006FA0F0:
    PUSH32(esp, ebp); /* 0x006FA0F0: push ebp */
    ebp = esp; /* 0x006FA0F1: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006FA0F3: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 0x1Fu */ /* 0x006FA0F4: cmp ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA0F7: ja 0x6fa4d4 */
L_006FA0FD:
    eax = (uint32_t)MEM8(ecx + 0x6FA4FC); /* 0x006FA0FD: movzx eax, byte ptr [ecx + 0x6fa4fc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6FA4D8)); goto _ljump; }
L_006FA10B:
    eax = 0x11200100u; /* 0x006FA10B: mov eax, 0x11200100 */
    ebp = POP32_VAL(esp); /* 0x006FA110: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA111: ret  */
L_006FA112:
    eax = 0x12200400u; /* 0x006FA112: mov eax, 0x12200400 */
    ebp = POP32_VAL(esp); /* 0x006FA117: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA118: ret  */
L_006FA119:
    /* test edx, edx */ /* 0x006FA119: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA124; /* 0x006FA11B: jne 0x6fa124 */
L_006FA11D:
    eax = 0x13000801u; /* 0x006FA11D: mov eax, 0x13000801 */
    ebp = POP32_VAL(esp); /* 0x006FA122: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA123: ret  */
L_006FA124:
    /* cmp edx, 0xE0u */ /* 0x006FA124: cmp edx, 0xe0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA12A: jne 0x6fa4d4 */
L_006FA130:
    /* cmp MEM32(ebp + 0x8), 0x1Cu */ /* 0x006FA130: cmp dword ptr [ebp + 8], 0x1c */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA134: jne 0x6fa4d4 */
L_006FA13A:
    /* cmp MEM32(ebp + 0xC), 3 */ /* 0x006FA13A: cmp dword ptr [ebp + 0xc], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA13E: jne 0x6fa4d4 */
L_006FA144:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FA144: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA148: jne 0x6fa4d4 */
L_006FA14E:
    eax = 0x14110801u; /* 0x006FA14E: mov eax, 0x14110801 */
    ebp = POP32_VAL(esp); /* 0x006FA153: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA154: ret  */
L_006FA155:
    /* test edx, edx */ /* 0x006FA155: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA186; /* 0x006FA157: je 0x6fa186 */
L_006FA159:
    /* cmp edx, 0xF00u */ /* 0x006FA159: cmp edx, 0xf00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA15F: jne 0x6fa4d4 */
L_006FA165:
    /* cmp MEM32(ebp + 0x8), 0xF0u */ /* 0x006FA165: cmp dword ptr [ebp + 8], 0xf0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA16C: jne 0x6fa4d4 */
L_006FA172:
    /* cmp MEM32(ebp + 0xC), 0xFu */ /* 0x006FA172: cmp dword ptr [ebp + 0xc], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA176: jne 0x6fa4d4 */
L_006FA17C:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FA17C: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA180: jne 0x6fa4d4 */
L_006FA186:
    eax = 0x15120C02u; /* 0x006FA186: mov eax, 0x15120c02 */
    ebp = POP32_VAL(esp); /* 0x006FA18B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA18C: ret  */
L_006FA18D:
    /* test edx, edx */ /* 0x006FA18D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA1A0; /* 0x006FA18F: jne 0x6fa1a0 */
L_006FA191:
    eax = 0x15130F02u; /* 0x006FA191: mov eax, 0x15130f02 */
    ebp = POP32_VAL(esp); /* 0x006FA196: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA197: ret  */
L_006FA198:
    /* test edx, edx */ /* 0x006FA198: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA355; /* 0x006FA19A: je 0x6fa355 */
L_006FA1A0:
    /* cmp edx, 0x7C00u */ /* 0x006FA1A0: cmp edx, 0x7c00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7C00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA1D8; /* 0x006FA1A6: jne 0x6fa1d8 */
L_006FA1A8:
    /* cmp MEM32(ebp + 0x8), 0x3E0u */ /* 0x006FA1A8: cmp dword ptr [ebp + 8], 0x3e0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x3E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA1AF: jne 0x6fa4d4 */
L_006FA1B5:
    /* cmp MEM32(ebp + 0xC), 0x1Fu */ /* 0x006FA1B5: cmp dword ptr [ebp + 0xc], 0x1f */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA1B9: jne 0x6fa4d4 */
L_006FA1BF:
    eax = MEM32(ebp + 0x10); /* 0x006FA1BF: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA1C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA191; /* 0x006FA1C4: je 0x6fa191 */
L_006FA1C6:
    /* cmp eax, 0x8000u */ /* 0x006FA1C6: cmp eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA1CB: jne 0x6fa4d4 */
L_006FA1D1:
    eax = 0x15331002u; /* 0x006FA1D1: mov eax, 0x15331002 */
    ebp = POP32_VAL(esp); /* 0x006FA1D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA1D7: ret  */
L_006FA1D8:
    /* cmp edx, 0x1Fu */ /* 0x006FA1D8: cmp edx, 0x1f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA23D; /* 0x006FA1DB: jne 0x6fa23d */
L_006FA1DD:
    eax = MEM32(ebp + 0x8); /* 0x006FA1DD: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x3E0u */ /* 0x006FA1E0: cmp eax, 0x3e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA214; /* 0x006FA1E5: jne 0x6fa214 */
L_006FA1E7:
    /* cmp MEM32(ebp + 0xC), 0x7C00u */ /* 0x006FA1E7: cmp dword ptr [ebp + 0xc], 0x7c00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x7C00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA1EE: jne 0x6fa4d4 */
L_006FA1F4:
    eax = MEM32(ebp + 0x10); /* 0x006FA1F4: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA1F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA202; /* 0x006FA1F9: jne 0x6fa202 */
L_006FA1FB:
    eax = 0x15530F02u; /* 0x006FA1FB: mov eax, 0x15530f02 */
    ebp = POP32_VAL(esp); /* 0x006FA200: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA201: ret  */
L_006FA202:
    /* cmp eax, 0x8000u */ /* 0x006FA202: cmp eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA207: jne 0x6fa4d4 */
L_006FA20D:
    eax = 0x15731002u; /* 0x006FA20D: mov eax, 0x15731002 */
    ebp = POP32_VAL(esp); /* 0x006FA212: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA213: ret  */
L_006FA214:
    /* cmp eax, 0x7E0u */ /* 0x006FA214: cmp eax, 0x7e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA219: jne 0x6fa4d4 */
L_006FA21F:
    /* cmp MEM32(ebp + 0xC), 0xF800u */ /* 0x006FA21F: cmp dword ptr [ebp + 0xc], 0xf800 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xF800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA226: jne 0x6fa4d4 */
L_006FA22C:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FA22C: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA230: jne 0x6fa4d4 */
L_006FA236:
    eax = 0x15551002u; /* 0x006FA236: mov eax, 0x15551002 */
    ebp = POP32_VAL(esp); /* 0x006FA23B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA23C: ret  */
L_006FA23D:
    /* cmp edx, 0xF00u */ /* 0x006FA23D: cmp edx, 0xf00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA270; /* 0x006FA243: jne 0x6fa270 */
L_006FA245:
    /* cmp MEM32(ebp + 0x8), 0xF0u */ /* 0x006FA245: cmp dword ptr [ebp + 8], 0xf0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA24C: jne 0x6fa4d4 */
L_006FA252:
    /* cmp MEM32(ebp + 0xC), 0xFu */ /* 0x006FA252: cmp dword ptr [ebp + 0xc], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA256: jne 0x6fa4d4 */
L_006FA25C:
    /* cmp MEM32(ebp + 0x10), 0xF000u */ /* 0x006FA25C: cmp dword ptr [ebp + 0x10], 0xf000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA263: jne 0x6fa4d4 */
L_006FA269:
    eax = 0x15321002u; /* 0x006FA269: mov eax, 0x15321002 */
    ebp = POP32_VAL(esp); /* 0x006FA26E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA26F: ret  */
L_006FA270:
    /* cmp edx, 0xF000u */ /* 0x006FA270: cmp edx, 0xf000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA2A3; /* 0x006FA276: jne 0x6fa2a3 */
L_006FA278:
    /* cmp MEM32(ebp + 0x8), 0xF00u */ /* 0x006FA278: cmp dword ptr [ebp + 8], 0xf00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA27F: jne 0x6fa4d4 */
L_006FA285:
    /* cmp MEM32(ebp + 0xC), 0xF0u */ /* 0x006FA285: cmp dword ptr [ebp + 0xc], 0xf0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA28C: jne 0x6fa4d4 */
L_006FA292:
    /* cmp MEM32(ebp + 0x10), 0xFu */ /* 0x006FA292: cmp dword ptr [ebp + 0x10], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA296: jne 0x6fa4d4 */
L_006FA29C:
    eax = 0x15421002u; /* 0x006FA29C: mov eax, 0x15421002 */
    ebp = POP32_VAL(esp); /* 0x006FA2A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA2A2: ret  */
L_006FA2A3:
    /* cmp edx, 0xFu */ /* 0x006FA2A3: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA2D6; /* 0x006FA2A6: jne 0x6fa2d6 */
L_006FA2A8:
    /* cmp MEM32(ebp + 0x8), 0xF0u */ /* 0x006FA2A8: cmp dword ptr [ebp + 8], 0xf0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2AF: jne 0x6fa4d4 */
L_006FA2B5:
    /* cmp MEM32(ebp + 0xC), 0xF00u */ /* 0x006FA2B5: cmp dword ptr [ebp + 0xc], 0xf00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2BC: jne 0x6fa4d4 */
L_006FA2C2:
    /* cmp MEM32(ebp + 0x10), 0xF000u */ /* 0x006FA2C2: cmp dword ptr [ebp + 0x10], 0xf000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2C9: jne 0x6fa4d4 */
L_006FA2CF:
    eax = 0x15721002u; /* 0x006FA2CF: mov eax, 0x15721002 */
    ebp = POP32_VAL(esp); /* 0x006FA2D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA2D5: ret  */
L_006FA2D6:
    /* cmp edx, 0xF0u */ /* 0x006FA2D6: cmp edx, 0xf0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA309; /* 0x006FA2DC: jne 0x6fa309 */
L_006FA2DE:
    /* cmp MEM32(ebp + 0x8), 0xF00u */ /* 0x006FA2DE: cmp dword ptr [ebp + 8], 0xf00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2E5: jne 0x6fa4d4 */
L_006FA2EB:
    /* cmp MEM32(ebp + 0xC), 0xF000u */ /* 0x006FA2EB: cmp dword ptr [ebp + 0xc], 0xf000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2F2: jne 0x6fa4d4 */
L_006FA2F8:
    /* cmp MEM32(ebp + 0x10), 0xFu */ /* 0x006FA2F8: cmp dword ptr [ebp + 0x10], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA2FC: jne 0x6fa4d4 */
L_006FA302:
    eax = 0x15821002u; /* 0x006FA302: mov eax, 0x15821002 */
    ebp = POP32_VAL(esp); /* 0x006FA307: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA308: ret  */
L_006FA309:
    /* cmp edx, 0xF800u */ /* 0x006FA309: cmp edx, 0xf800 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA35C; /* 0x006FA30F: jne 0x6fa35c */
L_006FA311:
    eax = MEM32(ebp + 0x8); /* 0x006FA311: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x7C0u */ /* 0x006FA314: cmp eax, 0x7c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA336; /* 0x006FA319: jne 0x6fa336 */
L_006FA31B:
    /* cmp MEM32(ebp + 0xC), 0x3Eu */ /* 0x006FA31B: cmp dword ptr [ebp + 0xc], 0x3e */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA31F: jne 0x6fa4d4 */
L_006FA325:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x006FA325: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA329: jne 0x6fa4d4 */
L_006FA32F:
    eax = 0x15441002u; /* 0x006FA32F: mov eax, 0x15441002 */
    ebp = POP32_VAL(esp); /* 0x006FA334: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA335: ret  */
L_006FA336:
    /* cmp eax, 0x7E0u */ /* 0x006FA336: cmp eax, 0x7e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA33B: jne 0x6fa4d4 */
L_006FA341:
    /* cmp MEM32(ebp + 0xC), 0x1Fu */ /* 0x006FA341: cmp dword ptr [ebp + 0xc], 0x1f */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA345: jne 0x6fa4d4 */
L_006FA34B:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FA34B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA34F: jne 0x6fa4d4 */
L_006FA355:
    eax = 0x15151002u; /* 0x006FA355: mov eax, 0x15151002 */
    ebp = POP32_VAL(esp); /* 0x006FA35A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA35B: ret  */
L_006FA35C:
    /* cmp edx, 0x3Eu */ /* 0x006FA35C: cmp edx, 0x3e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA35F: jne 0x6fa4d4 */
L_006FA365:
    /* cmp MEM32(ebp + 0x8), 0x7C0u */ /* 0x006FA365: cmp dword ptr [ebp + 8], 0x7c0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x7C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA36C: jne 0x6fa4d4 */
L_006FA372:
    /* cmp MEM32(ebp + 0xC), 0xF800u */ /* 0x006FA372: cmp dword ptr [ebp + 0xc], 0xf800 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xF800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA379: jne 0x6fa4d4 */
L_006FA37F:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x006FA37F: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA383: jne 0x6fa4d4 */
L_006FA389:
    eax = 0x15841002u; /* 0x006FA389: mov eax, 0x15841002 */
    ebp = POP32_VAL(esp); /* 0x006FA38E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA38F: ret  */
L_006FA390:
    /* test edx, edx */ /* 0x006FA390: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA3B6; /* 0x006FA392: je 0x6fa3b6 */
L_006FA394:
    /* cmp edx, 0xFFu */ /* 0x006FA394: cmp edx, 0xff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA3AF; /* 0x006FA39A: je 0x6fa3af */
L_006FA39C:
    /* cmp edx, 0x00FF0000u */ /* 0x006FA39C: cmp edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA3B6; /* 0x006FA3A2: je 0x6fa3b6 */
L_006FA3A4:
    /* test edx, edx */ /* 0x006FA3A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA3BD; /* 0x006FA3A6: jne 0x6fa3bd */
L_006FA3A8:
    eax = 0x16161804u; /* 0x006FA3A8: mov eax, 0x16161804 */
    ebp = POP32_VAL(esp); /* 0x006FA3AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA3AE: ret  */
L_006FA3AF:
    eax = 0x17101803u; /* 0x006FA3AF: mov eax, 0x17101803 */
    ebp = POP32_VAL(esp); /* 0x006FA3B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA3B5: ret  */
L_006FA3B6:
    eax = 0x17401803u; /* 0x006FA3B6: mov eax, 0x17401803 */
    ebp = POP32_VAL(esp); /* 0x006FA3BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA3BC: ret  */
L_006FA3BD:
    /* cmp edx, 0x00FF0000u */ /* 0x006FA3BD: cmp edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA3F8; /* 0x006FA3C3: jne 0x6fa3f8 */
L_006FA3C5:
    /* cmp MEM32(ebp + 0x8), 0xFF00u */ /* 0x006FA3C5: cmp dword ptr [ebp + 8], 0xff00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA3CC: jne 0x6fa4d4 */
L_006FA3D2:
    /* cmp MEM32(ebp + 0xC), 0xFFu */ /* 0x006FA3D2: cmp dword ptr [ebp + 0xc], 0xff */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA3D9: jne 0x6fa4d4 */
L_006FA3DF:
    eax = MEM32(ebp + 0x10); /* 0x006FA3DF: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA3E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA3A8; /* 0x006FA3E4: je 0x6fa3a8 */
L_006FA3E6:
    /* cmp eax, 0xFF000000u */ /* 0x006FA3E6: cmp eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA3EB: jne 0x6fa4d4 */
L_006FA3F1:
    eax = 0x16362004u; /* 0x006FA3F1: mov eax, 0x16362004 */
    ebp = POP32_VAL(esp); /* 0x006FA3F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA3F7: ret  */
L_006FA3F8:
    /* cmp edx, 0xFF000000u */ /* 0x006FA3F8: cmp edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA43A; /* 0x006FA3FE: jne 0x6fa43a */
L_006FA400:
    /* cmp MEM32(ebp + 0x8), 0x00FF0000u */ /* 0x006FA400: cmp dword ptr [ebp + 8], 0xff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA407: jne 0x6fa4d4 */
L_006FA40D:
    /* cmp MEM32(ebp + 0xC), 0xFF00u */ /* 0x006FA40D: cmp dword ptr [ebp + 0xc], 0xff00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA414: jne 0x6fa4d4 */
L_006FA41A:
    eax = MEM32(ebp + 0x10); /* 0x006FA41A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA41D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA428; /* 0x006FA41F: jne 0x6fa428 */
L_006FA421:
    eax = 0x16261804u; /* 0x006FA421: mov eax, 0x16261804 */
    ebp = POP32_VAL(esp); /* 0x006FA426: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA427: ret  */
L_006FA428:
    /* cmp eax, 0xFFu */ /* 0x006FA428: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA42D: jne 0x6fa4d4 */
L_006FA433:
    eax = 0x16462004u; /* 0x006FA433: mov eax, 0x16462004 */
    ebp = POP32_VAL(esp); /* 0x006FA438: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA439: ret  */
L_006FA43A:
    /* cmp edx, 0xFFu */ /* 0x006FA43A: cmp edx, 0xff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA474; /* 0x006FA440: jne 0x6fa474 */
L_006FA442:
    /* cmp MEM32(ebp + 0x8), 0xFF00u */ /* 0x006FA442: cmp dword ptr [ebp + 8], 0xff00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA449: jne 0x6fa4d4 */
L_006FA44F:
    /* cmp MEM32(ebp + 0xC), 0x00FF0000u */ /* 0x006FA44F: cmp dword ptr [ebp + 0xc], 0xff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA456: jne 0x6fa4d4 */
L_006FA458:
    eax = MEM32(ebp + 0x10); /* 0x006FA458: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA45B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA466; /* 0x006FA45D: jne 0x6fa466 */
L_006FA45F:
    eax = 0x16561804u; /* 0x006FA45F: mov eax, 0x16561804 */
    ebp = POP32_VAL(esp); /* 0x006FA464: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA465: ret  */
L_006FA466:
    /* cmp eax, 0xFF000000u */ /* 0x006FA466: cmp eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA46B: jne 0x6fa4d4 */
L_006FA46D:
    eax = 0x16762004u; /* 0x006FA46D: mov eax, 0x16762004 */
    ebp = POP32_VAL(esp); /* 0x006FA472: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA473: ret  */
L_006FA474:
    /* cmp edx, 0xFF00u */ /* 0x006FA474: cmp edx, 0xff00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4AA; /* 0x006FA47A: jne 0x6fa4aa */
L_006FA47C:
    /* cmp MEM32(ebp + 0x8), 0x00FF0000u */ /* 0x006FA47C: cmp dword ptr [ebp + 8], 0xff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA483: jne 0x6fa4d4 */
L_006FA485:
    /* cmp MEM32(ebp + 0xC), 0xFF000000u */ /* 0x006FA485: cmp dword ptr [ebp + 0xc], 0xff000000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFF000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA48C: jne 0x6fa4d4 */
L_006FA48E:
    eax = MEM32(ebp + 0x10); /* 0x006FA48E: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x006FA491: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA49C; /* 0x006FA493: jne 0x6fa49c */
L_006FA495:
    eax = 0x16661804u; /* 0x006FA495: mov eax, 0x16661804 */
    ebp = POP32_VAL(esp); /* 0x006FA49A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA49B: ret  */
L_006FA49C:
    /* cmp eax, 0xFFu */ /* 0x006FA49C: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA4A1: jne 0x6fa4d4 */
L_006FA4A3:
    eax = 0x16862004u; /* 0x006FA4A3: mov eax, 0x16862004 */
    ebp = POP32_VAL(esp); /* 0x006FA4A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA4A9: ret  */
L_006FA4AA:
    /* cmp edx, 0x3FF00000u */ /* 0x006FA4AA: cmp edx, 0x3ff00000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA4B0: jne 0x6fa4d4 */
L_006FA4B2:
    /* cmp MEM32(ebp + 0x8), 0x000FFC00u */ /* 0x006FA4B2: cmp dword ptr [ebp + 8], 0xffc00 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x000FFC00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA4B9: jne 0x6fa4d4 */
L_006FA4BB:
    /* cmp MEM32(ebp + 0xC), 0x3FFu */ /* 0x006FA4BB: cmp dword ptr [ebp + 0xc], 0x3ff */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x3FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA4C2: jne 0x6fa4d4 */
L_006FA4C4:
    /* cmp MEM32(ebp + 0x10), 0xC0000000u */ /* 0x006FA4C4: cmp dword ptr [ebp + 0x10], 0xc0000000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xC0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA4D4; /* 0x006FA4CB: jne 0x6fa4d4 */
L_006FA4CD:
    eax = 0x16372004u; /* 0x006FA4CD: mov eax, 0x16372004 */
    ebp = POP32_VAL(esp); /* 0x006FA4D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA4D3: ret  */
L_006FA4D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA4D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006FA4D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA4D7: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006FA10Bu: goto L_006FA10B;
      case 0x006FA112u: goto L_006FA112;
      case 0x006FA119u: goto L_006FA119;
      case 0x006FA155u: goto L_006FA155;
      case 0x006FA18Du: goto L_006FA18D;
      case 0x006FA198u: goto L_006FA198;
      case 0x006FA390u: goto L_006FA390;
      case 0x006FA3A4u: goto L_006FA3A4;
      case 0x006FA4D4u: goto L_006FA4D4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006FA520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA520u);

L_006FA520:
    PUSH32(esp, ecx); /* 0x006FA520: push ecx */
    eax = MEM32(0x926ACC); /* 0x006FA521: mov eax, dword ptr [0x926acc] */
    PUSH32(esp, esi); /* 0x006FA526: push esi */
    esi = ecx; /* 0x006FA527: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006FA529: push edi */
    /* test eax, eax */ /* 0x006FA52A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA53B; /* 0x006FA52C: je 0x6fa53b */
L_006FA52E:
    edi = edi; /* 0x006FA52E: mov edi, edi */
L_006FA530:
    /* cmp esi, MEM32(eax) */ /* 0x006FA530: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA55F; /* 0x006FA532: je 0x6fa55f */
L_006FA534:
    eax = MEM32(eax + 0x28); /* 0x006FA534: mov eax, dword ptr [eax + 0x28] */
    /* test eax, eax */ /* 0x006FA537: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA530; /* 0x006FA539: jne 0x6fa530 */
L_006FA53B:
    PUSH32(esp, 0x2Cu); /* 0x006FA53B: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006FA53D: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FA543: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA545: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006FA548: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA566; /* 0x006FA54A: jne 0x6fa566 */
L_006FA54C:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FA54C: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA551: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA556: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA559: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA55B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA55C: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA55D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA55E: ret  */
L_006FA55F:
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1; /* 0x006FA55F: inc dword ptr [eax + 0x24] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x006FA562: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA563: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA564: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA565: ret  */
L_006FA566:
    edx = esi; /* 0x006FA566: mov edx, esi */
    ecx = edi; /* 0x006FA568: mov ecx, edi */
    RECOMP_CALL(sub_006FA5D0); /* 0x006FA56A: call 0x6fa5d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FA56F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006FA595; /* 0x006FA571: jns 0x6fa595 */
L_006FA573:
    PUSH32(esp, edi); /* 0x006FA573: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FA574: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA57A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x008066DCu); /* 0x006FA57D: push 0x8066dc */
    PUSH32(esp, 0x00803FE8u); /* 0x006FA582: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA587: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FA58C: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA58F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA591: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA592: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA593: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA594: ret  */
L_006FA595:
    /* test esi, esi */ /* 0x006FA595: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA5A7; /* 0x006FA597: je 0x6fa5a7 */
L_006FA599:
    eax = esi; /* 0x006FA599: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006FA59B: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006FA5A0: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA5BC; /* 0x006FA5A5: jne 0x6fa5bc */
L_006FA5A7:
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x006FA5A7: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x006FA5A7: shr esi, 0x18 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x006FA5AA: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 1 */ /* 0x006FA5AD: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA5CA; /* 0x006FA5B0: je 0x6fa5ca */
L_006FA5B2:
    /* cmp esi, 2 */ /* 0x006FA5B2: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA5CA; /* 0x006FA5B5: je 0x6fa5ca */
L_006FA5B7:
    /* cmp esi, 3 */ /* 0x006FA5B7: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA5CA; /* 0x006FA5BA: je 0x6fa5ca */
L_006FA5BC:
    eax = MEM32(0x926ACC); /* 0x006FA5BC: mov eax, dword ptr [0x926acc] */
    MEM32(edi + 0x28) = eax; /* 0x006FA5C1: mov dword ptr [edi + 0x28], eax */
    MEM32(0x926ACC) = edi; /* 0x006FA5C4: mov dword ptr [0x926acc], edi */
L_006FA5CA:
    eax = edi; /* 0x006FA5CA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006FA5CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA5CD: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA5CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA5CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA5D0u);

L_006FA5D0:
    PUSH32(esp, ebp); /* 0x006FA5D0: push ebp */
    ebp = esp; /* 0x006FA5D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006FA5D3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x006FA5D6: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x006FA5D9: push esi */
    PUSH32(esp, edi); /* 0x006FA5DA: push edi */
    PUSH32(esp, eax); /* 0x006FA5DB: push eax */
    eax = ebp + (-0x10); /* 0x006FA5DC: lea eax, [ebp - 0x10] */
    edi = edx; /* 0x006FA5DF: mov edi, edx */
    PUSH32(esp, eax); /* 0x006FA5E1: push eax */
    eax = ebp + (-0xC); /* 0x006FA5E2: lea eax, [ebp - 0xc] */
    esi = ecx; /* 0x006FA5E5: mov esi, ecx */
    PUSH32(esp, eax); /* 0x006FA5E7: push eax */
    eax = ebp + (-0x8); /* 0x006FA5E8: lea eax, [ebp - 8] */
    ecx = edi; /* 0x006FA5EB: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006FA5ED: push eax */
    edx = ebp + (-0x4); /* 0x006FA5EE: lea edx, [ebp - 4] */
    RECOMP_CALL(sub_006F9E10); /* 0x006FA5F1: call 0x6f9e10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FA5F6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FA5F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA606; /* 0x006FA5FB: jne 0x6fa606 */
L_006FA5FD:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FA5FD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA600: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA601: pop esi */
    esp = ebp; /* 0x006FA602: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FA604: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA605: ret  */
L_006FA606:
    PUSH32(esp, 0x2Cu); /* 0x006FA606: push 0x2c */
    PUSH32(esp, 0); /* 0x006FA608: push 0 */
    PUSH32(esp, esi); /* 0x006FA60A: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006FA60B: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006FA610: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FA613: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + 0x8) = (uint8_t)(LO8(eax)); /* 0x006FA616: mov byte ptr [esi + 8], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x006FA619: add eax, 7 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FA61C: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x006FA61D: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x006FA620: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FA622: add eax, edx */
    _flag_k = FK_ADD;
    MEM8(esi + 0x20) = (uint8_t)(0); /* 0x006FA624: mov byte ptr [esi + 0x20], 0 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006FA628: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM8(esi + 0x9) = (uint8_t)(LO8(eax)); /* 0x006FA62B: mov byte ptr [esi + 9], al */
    eax = MEM32(ebp + (-0x8)); /* 0x006FA62E: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0xC) = eax; /* 0x006FA631: mov dword ptr [esi + 0xc], eax */
    MEM8(esi + 0x1C) = (uint8_t)(8); /* 0x006FA634: mov byte ptr [esi + 0x1c], 8 */
    /* test eax, eax */ /* 0x006FA638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA65B; /* 0x006FA63A: je 0x6fa65b */
L_006FA63C:
    /* test LO8(eax), 1 */ /* 0x006FA63C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA64D; /* 0x006FA63E: jne 0x6fa64d */
L_006FA640:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006FA640: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006FA642:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA642: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA642: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006FA644: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA646: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA642; /* 0x006FA648: je 0x6fa642 */
L_006FA64A:
    MEM8(esi + 0x20) = (uint8_t)(LO8(ecx)); /* 0x006FA64A: mov byte ptr [esi + 0x20], cl */
L_006FA64D:
    SET_LO8(ecx, 8); /* 0x006FA64D: mov cl, 8 */
    /* nop */ /* 0x006FA64F: nop  */
L_006FA650:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA650: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA650: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006FA652: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA654: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA650; /* 0x006FA656: jne 0x6fa650 */
L_006FA658:
    MEM8(esi + 0x1C) = (uint8_t)(LO8(ecx)); /* 0x006FA658: mov byte ptr [esi + 0x1c], cl */
L_006FA65B:
    eax = MEM32(ebp + (-0xC)); /* 0x006FA65B: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x10) = eax; /* 0x006FA65E: mov dword ptr [esi + 0x10], eax */
    MEM8(esi + 0x21) = (uint8_t)(0); /* 0x006FA661: mov byte ptr [esi + 0x21], 0 */
    MEM8(esi + 0x1D) = (uint8_t)(8); /* 0x006FA665: mov byte ptr [esi + 0x1d], 8 */
    /* test eax, eax */ /* 0x006FA669: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA68B; /* 0x006FA66B: je 0x6fa68b */
L_006FA66D:
    /* test LO8(eax), 1 */ /* 0x006FA66D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA67E; /* 0x006FA66F: jne 0x6fa67e */
L_006FA671:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006FA671: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006FA673:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA673: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA673: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006FA675: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA677: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA673; /* 0x006FA679: je 0x6fa673 */
L_006FA67B:
    MEM8(esi + 0x21) = (uint8_t)(LO8(ecx)); /* 0x006FA67B: mov byte ptr [esi + 0x21], cl */
L_006FA67E:
    SET_LO8(ecx, 8); /* 0x006FA67E: mov cl, 8 */
L_006FA680:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA680: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA680: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006FA682: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA684: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA680; /* 0x006FA686: jne 0x6fa680 */
L_006FA688:
    MEM8(esi + 0x1D) = (uint8_t)(LO8(ecx)); /* 0x006FA688: mov byte ptr [esi + 0x1d], cl */
L_006FA68B:
    eax = MEM32(ebp + (-0x10)); /* 0x006FA68B: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x14) = eax; /* 0x006FA68E: mov dword ptr [esi + 0x14], eax */
    MEM8(esi + 0x22) = (uint8_t)(0); /* 0x006FA691: mov byte ptr [esi + 0x22], 0 */
    MEM8(esi + 0x1E) = (uint8_t)(8); /* 0x006FA695: mov byte ptr [esi + 0x1e], 8 */
    /* test eax, eax */ /* 0x006FA699: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA6BB; /* 0x006FA69B: je 0x6fa6bb */
L_006FA69D:
    /* test LO8(eax), 1 */ /* 0x006FA69D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA6AE; /* 0x006FA69F: jne 0x6fa6ae */
L_006FA6A1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006FA6A1: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006FA6A3:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA6A3: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA6A3: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006FA6A5: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA6A7: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA6A3; /* 0x006FA6A9: je 0x6fa6a3 */
L_006FA6AB:
    MEM8(esi + 0x22) = (uint8_t)(LO8(ecx)); /* 0x006FA6AB: mov byte ptr [esi + 0x22], cl */
L_006FA6AE:
    SET_LO8(ecx, 8); /* 0x006FA6AE: mov cl, 8 */
L_006FA6B0:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA6B0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA6B0: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006FA6B2: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA6B4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA6B0; /* 0x006FA6B6: jne 0x6fa6b0 */
L_006FA6B8:
    MEM8(esi + 0x1E) = (uint8_t)(LO8(ecx)); /* 0x006FA6B8: mov byte ptr [esi + 0x1e], cl */
L_006FA6BB:
    eax = MEM32(ebp + (-0x14)); /* 0x006FA6BB: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x18) = eax; /* 0x006FA6BE: mov dword ptr [esi + 0x18], eax */
    MEM8(esi + 0x23) = (uint8_t)(0); /* 0x006FA6C1: mov byte ptr [esi + 0x23], 0 */
    MEM8(esi + 0x1F) = (uint8_t)(8); /* 0x006FA6C5: mov byte ptr [esi + 0x1f], 8 */
    /* test eax, eax */ /* 0x006FA6C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA6EB; /* 0x006FA6CB: je 0x6fa6eb */
L_006FA6CD:
    /* test LO8(eax), 1 */ /* 0x006FA6CD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA6DE; /* 0x006FA6CF: jne 0x6fa6de */
L_006FA6D1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006FA6D1: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_006FA6D3:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA6D3: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA6D3: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006FA6D5: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA6D7: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA6D3; /* 0x006FA6D9: je 0x6fa6d3 */
L_006FA6DB:
    MEM8(esi + 0x23) = (uint8_t)(LO8(ecx)); /* 0x006FA6DB: mov byte ptr [esi + 0x23], cl */
L_006FA6DE:
    SET_LO8(ecx, 8); /* 0x006FA6DE: mov cl, 8 */
L_006FA6E0:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FA6E0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006FA6E0: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006FA6E2: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* test LO8(eax), 1 */ /* 0x006FA6E4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA6E0; /* 0x006FA6E6: jne 0x6fa6e0 */
L_006FA6E8:
    MEM8(esi + 0x1F) = (uint8_t)(LO8(ecx)); /* 0x006FA6E8: mov byte ptr [esi + 0x1f], cl */
L_006FA6EB:
    edi = POP32_VAL(esp); /* 0x006FA6EB: pop edi */
    MEM32(esi + 0x4) = 0; /* 0x006FA6EC: mov dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA6F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x24) = 1; /* 0x006FA6F5: mov dword ptr [esi + 0x24], 1 */
    MEM32(esi + 0x28) = 0; /* 0x006FA6FC: mov dword ptr [esi + 0x28], 0 */
    esi = POP32_VAL(esp); /* 0x006FA703: pop esi */
    esp = ebp; /* 0x006FA704: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FA706: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA707: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA710u);

L_006FA710:
    PUSH32(esp, ebx); /* 0x006FA710: push ebx */
    PUSH32(esp, esi); /* 0x006FA711: push esi */
    esi = ecx; /* 0x006FA712: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006FA714: push edi */
    /* test esi, esi */ /* 0x006FA715: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA72F; /* 0x006FA717: jne 0x6fa72f */
L_006FA719:
    PUSH32(esp, 0x008066DCu); /* 0x006FA719: push 0x8066dc */
    PUSH32(esp, 0x00803FE8u); /* 0x006FA71E: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA723: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FA728: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FA72B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA72C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA72D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA72E: ret  */
L_006FA72F:
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - 1; /* 0x006FA72F: dec dword ptr [esi + 0x24] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x006FA732: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FA797; /* 0x006FA736: jg 0x6fa797 */
L_006FA738:
    ecx = MEM32(0x926ACC); /* 0x006FA738: mov ecx, dword ptr [0x926acc] */
    /* cmp esi, ecx */ /* 0x006FA73E: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA74C; /* 0x006FA740: jne 0x6fa74c */
L_006FA742:
    eax = MEM32(esi + 0x28); /* 0x006FA742: mov eax, dword ptr [esi + 0x28] */
    MEM32(0x926ACC) = eax; /* 0x006FA745: mov dword ptr [0x926acc], eax */
    goto L_006FA76D; /* 0x006FA74A: jmp 0x6fa76d */
L_006FA74C:
    /* test ecx, ecx */ /* 0x006FA74C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA76D; /* 0x006FA74E: je 0x6fa76d */
L_006FA750:
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x006FA750: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA76D; /* 0x006FA754: je 0x6fa76d */
L_006FA756:
    eax = MEM32(ecx + 0x28); /* 0x006FA756: mov eax, dword ptr [ecx + 0x28] */
    /* cmp eax, esi */ /* 0x006FA759: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA767; /* 0x006FA75B: je 0x6fa767 */
L_006FA75D:
    ecx = eax; /* 0x006FA75D: mov ecx, eax */
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x006FA75F: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FA756; /* 0x006FA763: jne 0x6fa756 */
L_006FA765:
    goto L_006FA76D; /* 0x006FA765: jmp 0x6fa76d */
L_006FA767:
    eax = MEM32(esi + 0x28); /* 0x006FA767: mov eax, dword ptr [esi + 0x28] */
    MEM32(ecx + 0x28) = eax; /* 0x006FA76A: mov dword ptr [ecx + 0x28], eax */
L_006FA76D:
    edi = MEM32(esi + 0x4); /* 0x006FA76D: mov edi, dword ptr [esi + 4] */
    ebx = MEM32(0x7CC44C); /* 0x006FA770: mov ebx, dword ptr [0x7cc44c] */
    /* test edi, edi */ /* 0x006FA776: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA791; /* 0x006FA778: je 0x6fa791 */
L_006FA77A:
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1; /* 0x006FA77A: dec dword ptr [edi + 0xc] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x006FA77D: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FA791; /* 0x006FA781: jg 0x6fa791 */
L_006FA783:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FA783: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x006FA786: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA788: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006FA78B: push edi */
    RECOMP_ICALL(ebx); /* 0x006FA78C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA78E: add esp, 4 */
    _flag_k = FK_ADD;
L_006FA791:
    PUSH32(esp, esi); /* 0x006FA791: push esi */
    RECOMP_ICALL(ebx); /* 0x006FA792: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA794: add esp, 4 */
    _flag_k = FK_ADD;
L_006FA797:
    edi = POP32_VAL(esp); /* 0x006FA797: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA798: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA799: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA79A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA7A0u);

L_006FA7A0:
    PUSH32(esp, ebx); /* 0x006FA7A0: push ebx */
    PUSH32(esp, esi); /* 0x006FA7A1: push esi */
    PUSH32(esp, edi); /* 0x006FA7A2: push edi */
    edi = ecx; /* 0x006FA7A3: mov edi, ecx */
    /* cmp edi, 1 */ /* 0x006FA7A5: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006FA7C2; /* 0x006FA7A8: jge 0x6fa7c2 */
L_006FA7AA:
    PUSH32(esp, 0x008066D4u); /* 0x006FA7AA: push 0x8066d4 */
    PUSH32(esp, 0x00803FE8u); /* 0x006FA7AF: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA7B4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FA7B9: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA7BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA7BE: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA7BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA7C0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA7C1: ret  */
L_006FA7C2:
    ebx = MEM32(0x7CC454); /* 0x006FA7C2: mov ebx, dword ptr [0x7cc454] */
    PUSH32(esp, 0x10u); /* 0x006FA7C8: push 0x10 */
    RECOMP_ICALL(ebx); /* 0x006FA7CA: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FA7CC: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA7CE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FA7D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA7E8; /* 0x006FA7D3: jne 0x6fa7e8 */
L_006FA7D5:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FA7D5: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA7DA: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA7DF: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA7E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA7E4: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA7E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA7E6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA7E7: ret  */
L_006FA7E8:
    eax = edi * 4; /* 0x006FA7E8: lea eax, [edi*4] */
    PUSH32(esp, eax); /* 0x006FA7EF: push eax */
    RECOMP_ICALL(ebx); /* 0x006FA7F0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA7F2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x006FA7F5: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x006FA7F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA80C; /* 0x006FA7FA: jne 0x6fa80c */
L_006FA7FC:
    PUSH32(esp, esi); /* 0x006FA7FC: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FA7FD: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA803: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA806: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FA808: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA809: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA80A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA80B: ret  */
L_006FA80C:
    ecx = edi * 4; /* 0x006FA80C: lea ecx, [edi*4] */
    MEM32(esi) = edi; /* 0x006FA813: mov dword ptr [esi], edi */
    PUSH32(esp, ecx); /* 0x006FA815: push ecx */
    PUSH32(esp, 0xFFu); /* 0x006FA816: push 0xff */
    PUSH32(esp, eax); /* 0x006FA81B: push eax */
    MEM32(esi + 0x8) = 1; /* 0x006FA81C: mov dword ptr [esi + 8], 1 */
    MEM32(esi + 0xC) = 1; /* 0x006FA823: mov dword ptr [esi + 0xc], 1 */
    RECOMP_CALL(sub_0078083E); /* 0x006FA82A: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FA82F: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006FA832: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006FA834: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA835: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA836: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA837: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA840u);

L_006FA840:
    PUSH32(esp, ecx); /* 0x006FA840: push ecx */
    PUSH32(esp, esi); /* 0x006FA841: push esi */
    PUSH32(esp, edi); /* 0x006FA842: push edi */
    edi = ecx; /* 0x006FA843: mov edi, ecx */
    esi = edx; /* 0x006FA845: mov esi, edx */
    /* test edi, edi */ /* 0x006FA847: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA85C; /* 0x006FA849: jne 0x6fa85c */
L_006FA84B:
    PUSH32(esp, 0x008066A4u); /* 0x006FA84B: push 0x8066a4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA850: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA855: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FA858: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA859: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA85A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA85B: ret  */
L_006FA85C:
    /* test esi, esi */ /* 0x006FA85C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA87F; /* 0x006FA85E: je 0x6fa87f */
L_006FA860:
    SET_LO8(ecx, MEM8(edi + 0x8)); /* 0x006FA860: mov cl, byte ptr [edi + 8] */
    eax = 1; /* 0x006FA863: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FA868: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FA868: shl eax, cl */
    /* cmp MEM32(esi), eax */ /* 0x006FA86A: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA87F; /* 0x006FA86C: je 0x6fa87f */
L_006FA86E:
    PUSH32(esp, 0x00806658u); /* 0x006FA86E: push 0x806658 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA873: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FA878: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FA87B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FA87C: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA87D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA87E: ret  */
L_006FA87F:
    ecx = MEM32(edi + 0x4); /* 0x006FA87F: mov ecx, dword ptr [edi + 4] */
    /* cmp ecx, esi */ /* 0x006FA882: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FA899; /* 0x006FA884: je 0x6fa899 */
L_006FA886:
    /* test ecx, ecx */ /* 0x006FA886: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA88F; /* 0x006FA888: je 0x6fa88f */
L_006FA88A:
    RECOMP_CALL(sub_006FA8A0); /* 0x006FA88A: call 0x6fa8a0 */
    RECOMP_FLAGS_IN();
L_006FA88F:
    MEM32(edi + 0x4) = esi; /* 0x006FA88F: mov dword ptr [edi + 4], esi */
    /* test esi, esi */ /* 0x006FA892: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FA899; /* 0x006FA894: je 0x6fa899 */
L_006FA896:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006FA896: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
L_006FA899:
    edi = POP32_VAL(esp); /* 0x006FA899: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FA89A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FA89C: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FA89D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA89E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA8A0u);

L_006FA8A0:
    PUSH32(esp, edi); /* 0x006FA8A0: push edi */
    edi = ecx; /* 0x006FA8A1: mov edi, ecx */
    /* test edi, edi */ /* 0x006FA8A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FA8BB; /* 0x006FA8A5: jne 0x6fa8bb */
L_006FA8A7:
    PUSH32(esp, 0x008066E4u); /* 0x006FA8A7: push 0x8066e4 */
    PUSH32(esp, 0x00803FE8u); /* 0x006FA8AC: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FA8B1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FA8B6: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FA8B9: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA8BA: ret  */
L_006FA8BB:
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1; /* 0x006FA8BB: dec dword ptr [edi + 0xc] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x006FA8BE: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FA8D7; /* 0x006FA8C2: jg 0x6fa8d7 */
L_006FA8C4:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FA8C4: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FA8C7: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006FA8CD: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FA8CE: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FA8D4: add esp, 8 */
    _flag_k = FK_ADD;
L_006FA8D7:
    edi = POP32_VAL(esp); /* 0x006FA8D7: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA8D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA8E0u);

L_006FA8E0:
    PUSH32(esp, ebx); /* 0x006FA8E0: push ebx */
    PUSH32(esp, esi); /* 0x006FA8E1: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FA8E2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x2; /* 0x006FA8E4: lea eax, [ecx + 2] */
    goto L_006FA8F0; /* 0x006FA8E7: jmp 0x6fa8f0 */
L_006FA8F0:
    ebx = esi; /* 0x006FA8F0: mov ebx, esi */
    MEM8(eax + 0x1) = (uint8_t)(0xFFu); /* 0x006FA8F2: mov byte ptr [eax + 1], 0xff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xE0u);
    ebx = ebx & 0xE0u; /* 0x006FA8F6: and ebx, 0xe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + 0x4; /* 0x006FA8FC: lea eax, [eax + 4] */
    edx = ebx; /* 0x006FA8FF: mov edx, ebx */
    ecx = ebx; /* 0x006FA901: mov ecx, ebx */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x006FA903: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x006FA906: sar ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 3u);
    _flag_a = (uint32_t)((LO8(edx) | LO8(ecx))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(ecx))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(ecx)); /* 0x006FA909: or dl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(edx) | LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(ebx))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(ebx)); /* 0x006FA90B: or dl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = esi; /* 0x006FA90D: mov ebx, esi */
    MEM8(eax + (-0x6)) = (uint8_t)(LO8(edx)); /* 0x006FA90F: mov byte ptr [eax - 6], dl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Cu);
    ebx = ebx & 0x1Cu; /* 0x006FA912: and ebx, 0x1c */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x006FA915: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x006FA915: shl ebx, 3 */
    edx = ebx; /* 0x006FA918: mov edx, ebx */
    ecx = ebx; /* 0x006FA91A: mov ecx, ebx */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x006FA91C: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x006FA91F: sar ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 3u);
    _flag_a = (uint32_t)((LO8(edx) | LO8(ecx))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(ecx))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(ecx)); /* 0x006FA922: or dl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(edx) | LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(ebx))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(ebx)); /* 0x006FA924: or dl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + (-0x5)) = (uint8_t)(LO8(edx)); /* 0x006FA926: mov byte ptr [eax - 5], dl */
    edx = esi; /* 0x006FA929: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x006FA92B: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FA92E: inc esi */
    _flag_k = FK_INC;
    ecx = edx * 4; /* 0x006FA92F: lea ecx, [edx*4] */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x006FA936: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, LO8(edx)); /* 0x006FA938: mov cl, dl */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x006FA93A: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x006FA93A: shl cl, 4 */
    _flag_a = (uint32_t)((LO8(ecx) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(edx)); /* 0x006FA93D: or cl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x006FA93F: mov byte ptr [eax - 4], cl */
    /* cmp esi, 0x100u */ /* 0x006FA942: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FA8F0; /* 0x006FA948: jl 0x6fa8f0 */
L_006FA94A:
    esi = POP32_VAL(esp); /* 0x006FA94A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FA94B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA94C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA950u);

L_006FA950:
    eax = MEM32(ecx + 0x4); /* 0x006FA950: mov eax, dword ptr [ecx + 4] */
    edx = (uint32_t)MEM8(eax + 0x9); /* 0x006FA953: movzx edx, byte ptr [eax + 9] */
    eax = (uint32_t)MEM8(eax + 0x8); /* 0x006FA957: movzx eax, byte ptr [eax + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x8)); /* 0x006FA95B: imul edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006FA95F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006FA978; /* 0x006FA960: je 0x6fa978 */
L_006FA962:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x006FA962: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_006FA984; /* 0x006FA965: jne 0x6fa984 */
L_006FA967:
    eax = edx + 0x1; /* 0x006FA967: lea eax, [edx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FA96A: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FA96B: sub eax, edx */
    _flag_k = FK_CMP;
    edx = eax; /* 0x006FA96D: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006FA96F: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = edx + 0x3; /* 0x006FA971: lea eax, [edx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x006FA974: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA977: ret  */
L_006FA978:
    eax = edx + 0x7; /* 0x006FA978: lea eax, [edx + 7] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FA97B: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x006FA97C: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006FA97F: add edx, eax */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006FA981: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
L_006FA984:
    eax = edx + 0x3; /* 0x006FA984: lea eax, [edx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x006FA987: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FA98A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FA990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FA990u);

L_006FA990:
    PUSH32(esp, ebp); /* 0x006FA990: push ebp */
    ebp = esp; /* 0x006FA991: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006FA993: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FA996: push ebx */
    PUSH32(esp, edi); /* 0x006FA997: push edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006FA998: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x18)) = ecx; /* 0x006FA99A: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006FA99D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x006FA99F: mov byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x006FA9A2: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), ebx */ /* 0x006FA9A5: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006FAA2F; /* 0x006FA9A7: jle 0x6faa2f */
L_006FA9AD:
    eax = MEM32(ebp + 0x8); /* 0x006FA9AD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x006FA9B0: mov ecx, dword ptr [ecx + 4] */
    eax = (uint32_t)LO8(eax); /* 0x006FA9B3: movzx eax, al */
    MEM32(ebp + (-0xC)) = eax; /* 0x006FA9B6: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FA9B9: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO8(eax); /* 0x006FA9BC: movzx eax, al */
    MEM32(ebp + (-0x10)) = eax; /* 0x006FA9BF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x006FA9C2: mov eax, dword ptr [ebp + 0x10] */
    edx = (uint32_t)LO8(edx); /* 0x006FA9C5: movzx edx, dl */
    eax = (uint32_t)LO8(eax); /* 0x006FA9C8: movzx eax, al */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006FA9CB: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x006FA9CE: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x006FA9D1: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x006FA9D4: push esi */
L_006FA9D5:
    esi = (uint32_t)MEM8(ecx + ebx * 4); /* 0x006FA9D5: movzx esi, byte ptr [ecx + ebx*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x006FA9D9: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x006FA9DC: sub esi, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM8(ecx + ebx * 4 + 0x1); /* 0x006FA9DE: movzx edx, byte ptr [ecx + ebx*4 + 1] */
    ecx = (uint32_t)MEM8(ecx + ebx * 4 + 0x2); /* 0x006FA9E3: movzx ecx, byte ptr [ecx + ebx*4 + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x006FA9E8: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(eax + ebx * 4 + 0x3); /* 0x006FA9EB: movzx eax, byte ptr [eax + ebx*4 + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x006FA9F0: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0xC)); /* 0x006FA9F3: sub edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x006FA9F6: imul eax, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ecx); /* 0x006FA9F9: imul ecx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)edx); /* 0x006FA9FC: imul edx, edx */
    esi = (uint32_t)((int32_t)esi * (int32_t)esi); /* 0x006FA9FF: imul esi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006FAA02: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FAA04: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006FAA06: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x006FAA08: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006FAA19; /* 0x006FAA0A: jae 0x6faa19 */
L_006FAA0C:
    SET_LO8(ecx, LO8(ebx)); /* 0x006FAA0C: mov cl, bl */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x006FAA0E: mov byte ptr [ebp - 1], cl */
    /* test eax, eax */ /* 0x006FAA11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FAA2C; /* 0x006FAA13: je 0x6faa2c */
L_006FAA15:
    edi = eax; /* 0x006FAA15: mov edi, eax */
    goto L_006FAA1C; /* 0x006FAA17: jmp 0x6faa1c */
L_006FAA19:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x006FAA19: mov cl, byte ptr [ebp - 1] */
L_006FAA1C:
    eax = MEM32(ebp + (-0x18)); /* 0x006FAA1C: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006FAA1F: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(eax) */ /* 0x006FAA20: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006FAA2C; /* 0x006FAA22: jge 0x6faa2c */
L_006FAA24:
    ecx = MEM32(ebp + (-0x8)); /* 0x006FAA24: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x006FAA27: mov edx, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_006FA9D5; /* 0x006FAA2A: jmp 0x6fa9d5 */
L_006FAA2C:
    SET_LO8(eax, LO8(ecx)); /* 0x006FAA2C: mov al, cl */
    esi = POP32_VAL(esp); /* 0x006FAA2E: pop esi */
L_006FAA2F:
    edi = POP32_VAL(esp); /* 0x006FAA2F: pop edi */
    ebx = POP32_VAL(esp); /* 0x006FAA30: pop ebx */
    esp = ebp; /* 0x006FAA31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FAA33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAA34: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FAA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FAA40u);

L_006FAA40:
    PUSH32(esp, ebp); /* 0x006FAA40: push ebp */
    ebp = esp; /* 0x006FAA41: mov ebp, esp */
    PUSH32(esp, edi); /* 0x006FAA43: push edi */
    edi = ecx; /* 0x006FAA44: mov edi, ecx */
    ecx = MEM32(edi + 0x4); /* 0x006FAA46: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x006FAA49: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FAA8C; /* 0x006FAA4B: jne 0x6faa8c */
L_006FAA4D:
    ecx = (uint32_t)MEM8(edi + 0x1C); /* 0x006FAA4D: movzx ecx, byte ptr [edi + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x006FAA51: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006FAA54: push esi */
    esi = (uint32_t)LO8(edx); /* 0x006FAA55: movzx esi, dl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAA58: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x006FAA58: shr esi, cl */
    ecx = (uint32_t)MEM8(edi + 0x20); /* 0x006FAA5A: movzx ecx, byte ptr [edi + 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAA5E: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x006FAA5E: shl esi, cl */
    ecx = (uint32_t)MEM8(edi + 0x1D); /* 0x006FAA60: movzx ecx, byte ptr [edi + 0x1d] */
    eax = (uint32_t)LO8(eax); /* 0x006FAA64: movzx eax, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAA67: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAA67: shr eax, cl */
    ecx = (uint32_t)MEM8(edi + 0x21); /* 0x006FAA69: movzx ecx, byte ptr [edi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAA6D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAA6D: shl eax, cl */
    ecx = MEM32(ebp + 0xC); /* 0x006FAA6F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x006FAA72: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO8(ecx); /* 0x006FAA74: movzx edx, cl */
    ecx = (uint32_t)MEM8(edi + 0x1E); /* 0x006FAA77: movzx ecx, byte ptr [edi + 0x1e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAA7B: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAA7B: shr edx, cl */
    ecx = (uint32_t)MEM8(edi + 0x22); /* 0x006FAA7D: movzx ecx, byte ptr [edi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAA81: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x006FAA81: shl edx, cl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x006FAA83: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(edi + 0x18))); _flag_b = (uint32_t)((eax | MEM32(edi + 0x18)));
    eax = eax | MEM32(edi + 0x18); /* 0x006FAA85: or eax, dword ptr [edi + 0x18] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FAA88: pop esi */
    edi = POP32_VAL(esp); /* 0x006FAA89: pop edi */
    ebp = POP32_VAL(esp); /* 0x006FAA8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAA8B: ret  */
L_006FAA8C:
    PUSH32(esp, 0xFFu); /* 0x006FAA8C: push 0xff */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006FAA91: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FAA94: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006FA990); /* 0x006FAA97: call 0x6fa990 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FAA9C: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO8(eax); /* 0x006FAA9F: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x006FAAA2: pop edi */
    ebp = POP32_VAL(esp); /* 0x006FAAA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAAA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FAAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FAAB0u);

L_006FAAB0:
    PUSH32(esp, ebp); /* 0x006FAAB0: push ebp */
    ebp = esp; /* 0x006FAAB1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x006FAAB3: push edi */
    edi = ecx; /* 0x006FAAB4: mov edi, ecx */
    ecx = MEM32(edi + 0x4); /* 0x006FAAB6: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x006FAAB9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FAB10; /* 0x006FAABB: jne 0x6fab10 */
L_006FAABD:
    eax = MEM32(ebp + 0x10); /* 0x006FAABD: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)MEM8(edi + 0x1F); /* 0x006FAAC0: movzx ecx, byte ptr [edi + 0x1f] */
    PUSH32(esp, esi); /* 0x006FAAC4: push esi */
    esi = (uint32_t)LO8(eax); /* 0x006FAAC5: movzx esi, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAAC8: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x006FAAC8: shr esi, cl */
    ecx = (uint32_t)MEM8(edi + 0x23); /* 0x006FAACA: movzx ecx, byte ptr [edi + 0x23] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAACE: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x006FAACE: shl esi, cl */
    ecx = (uint32_t)MEM8(edi + 0x1C); /* 0x006FAAD0: movzx ecx, byte ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    esi = esi & MEM32(edi + 0x18); /* 0x006FAAD4: and esi, dword ptr [edi + 0x18] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(edx); /* 0x006FAAD7: movzx eax, dl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAADA: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAADA: shr eax, cl */
    ecx = (uint32_t)MEM8(edi + 0x20); /* 0x006FAADC: movzx ecx, byte ptr [edi + 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAAE0: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAAE0: shl eax, cl */
    ecx = (uint32_t)MEM8(edi + 0x1D); /* 0x006FAAE2: movzx ecx, byte ptr [edi + 0x1d] */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006FAAE6: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x006FAAE8: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x006FAAEB: movzx eax, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAAEE: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAAEE: shr eax, cl */
    ecx = (uint32_t)MEM8(edi + 0x21); /* 0x006FAAF0: movzx ecx, byte ptr [edi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAAF4: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAAF4: shl eax, cl */
    ecx = MEM32(ebp + 0xC); /* 0x006FAAF6: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x006FAAF9: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO8(ecx); /* 0x006FAAFB: movzx edx, cl */
    ecx = (uint32_t)MEM8(edi + 0x1E); /* 0x006FAAFE: movzx ecx, byte ptr [edi + 0x1e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAB02: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAB02: shr edx, cl */
    ecx = (uint32_t)MEM8(edi + 0x22); /* 0x006FAB04: movzx ecx, byte ptr [edi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAB08: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x006FAB08: shl edx, cl */
    esi = POP32_VAL(esp); /* 0x006FAB0A: pop esi */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x006FAB0B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FAB0D: pop edi */
    ebp = POP32_VAL(esp); /* 0x006FAB0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAB0F: ret  */
L_006FAB10:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006FAB10: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006FAB13: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FAB16: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006FA990); /* 0x006FAB19: call 0x6fa990 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FAB1E: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO8(eax); /* 0x006FAB21: movzx eax, al */
    edi = POP32_VAL(esp); /* 0x006FAB24: pop edi */
    ebp = POP32_VAL(esp); /* 0x006FAB25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAB26: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FAB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FAB30u);

L_006FAB30:
    PUSH32(esp, ebp); /* 0x006FAB30: push ebp */
    ebp = esp; /* 0x006FAB31: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006FAB33: push ebx */
    PUSH32(esp, edi); /* 0x006FAB34: push edi */
    edi = edx; /* 0x006FAB35: mov edi, edx */
    ebx = ecx; /* 0x006FAB37: mov ebx, ecx */
    eax = MEM32(edi + 0x4); /* 0x006FAB39: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x006FAB3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FABA3; /* 0x006FAB3E: jne 0x6faba3 */
L_006FAB40:
    eax = (uint32_t)MEM8(edi + 0x1C); /* 0x006FAB40: movzx eax, byte ptr [edi + 0x1c] */
    ecx = (uint32_t)MEM8(edi + 0x20); /* 0x006FAB44: movzx ecx, byte ptr [edi + 0x20] */
    edx = MEM32(edi + 0x10); /* 0x006FAB48: mov edx, dword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x006FAB4B: push esi */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAB4C: mov eax, dword ptr [eax*4 + 0x7d6000] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x006FAB53: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi + 0xC); /* 0x006FAB55: mov esi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x006FAB58: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAB5A: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x006FAB5A: shr esi, cl */
    ecx = (uint32_t)MEM8(esi + eax); /* 0x006FAB5C: movzx ecx, byte ptr [esi + eax] */
    eax = MEM32(ebp + 0x8); /* 0x006FAB60: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x006FAB63: pop esi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAB64: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(edi + 0x1D); /* 0x006FAB66: movzx eax, byte ptr [edi + 0x1d] */
    ecx = (uint32_t)MEM8(edi + 0x21); /* 0x006FAB6A: movzx ecx, byte ptr [edi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAB6E: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAB6E: shr edx, cl */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAB70: mov eax, dword ptr [eax*4 + 0x7d6000] */
    ecx = (uint32_t)MEM8(edx + eax); /* 0x006FAB77: movzx ecx, byte ptr [edx + eax] */
    eax = MEM32(ebp + 0xC); /* 0x006FAB7B: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(edi + 0x14); /* 0x006FAB7E: mov edx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x006FAB81: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAB83: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(edi + 0x1E); /* 0x006FAB85: movzx eax, byte ptr [edi + 0x1e] */
    ecx = (uint32_t)MEM8(edi + 0x22); /* 0x006FAB89: movzx ecx, byte ptr [edi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAB8D: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAB8D: shr edx, cl */
    edi = POP32_VAL(esp); /* 0x006FAB8F: pop edi */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAB90: mov eax, dword ptr [eax*4 + 0x7d6000] */
    ebx = POP32_VAL(esp); /* 0x006FAB97: pop ebx */
    ecx = (uint32_t)MEM8(edx + eax); /* 0x006FAB98: movzx ecx, byte ptr [edx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x006FAB9C: mov eax, dword ptr [ebp + 0x10] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAB9F: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x006FABA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FABA2: ret  */
L_006FABA3:
    /* cmp ebx, MEM32(eax) */ /* 0x006FABA3: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006FABCC; /* 0x006FABA5: jae 0x6fabcc */
L_006FABA7:
    eax = MEM32(eax + 0x4); /* 0x006FABA7: mov eax, dword ptr [eax + 4] */
    ecx = (uint32_t)MEM8(eax + ebx * 4); /* 0x006FABAA: movzx ecx, byte ptr [eax + ebx*4] */
    edx = eax + ebx * 4; /* 0x006FABAE: lea edx, [eax + ebx*4] */
    eax = MEM32(ebp + 0x8); /* 0x006FABB1: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x006FABB4: pop edi */
    ebx = POP32_VAL(esp); /* 0x006FABB5: pop ebx */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FABB6: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0xC); /* 0x006FABB8: mov eax, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM8(edx + 0x1); /* 0x006FABBB: movzx ecx, byte ptr [edx + 1] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FABBF: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0x10); /* 0x006FABC1: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)MEM8(edx + 0x2); /* 0x006FABC4: movzx ecx, byte ptr [edx + 2] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FABC8: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x006FABCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FABCB: ret  */
L_006FABCC:
    eax = MEM32(ebp + 0x10); /* 0x006FABCC: mov eax, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x006FABCF: pop edi */
    ebx = POP32_VAL(esp); /* 0x006FABD0: pop ebx */
    MEM8(eax) = (uint8_t)(0); /* 0x006FABD1: mov byte ptr [eax], 0 */
    eax = MEM32(ebp + 0xC); /* 0x006FABD4: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(0); /* 0x006FABD7: mov byte ptr [eax], 0 */
    eax = MEM32(ebp + 0x8); /* 0x006FABDA: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x006FABDD: mov byte ptr [eax], 0 */
    ebp = POP32_VAL(esp); /* 0x006FABE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FABE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FABF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FABF0u);

L_006FABF0:
    PUSH32(esp, ebp); /* 0x006FABF0: push ebp */
    ebp = esp; /* 0x006FABF1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006FABF3: push ebx */
    PUSH32(esp, edi); /* 0x006FABF4: push edi */
    edi = edx; /* 0x006FABF5: mov edi, edx */
    ebx = ecx; /* 0x006FABF7: mov ebx, ecx */
    eax = MEM32(edi + 0x4); /* 0x006FABF9: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x006FABFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FAC86; /* 0x006FABFE: jne 0x6fac86 */
L_006FAC04:
    eax = (uint32_t)MEM8(edi + 0x1C); /* 0x006FAC04: movzx eax, byte ptr [edi + 0x1c] */
    ecx = (uint32_t)MEM8(edi + 0x20); /* 0x006FAC08: movzx ecx, byte ptr [edi + 0x20] */
    edx = MEM32(edi + 0x10); /* 0x006FAC0C: mov edx, dword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x006FAC0F: push esi */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAC10: mov eax, dword ptr [eax*4 + 0x7d6000] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x006FAC17: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi + 0xC); /* 0x006FAC19: mov esi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x006FAC1C: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAC1E: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x006FAC1E: shr esi, cl */
    ecx = (uint32_t)MEM8(esi + eax); /* 0x006FAC20: movzx ecx, byte ptr [esi + eax] */
    eax = MEM32(ebp + 0x8); /* 0x006FAC24: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x006FAC27: pop esi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAC28: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(edi + 0x1D); /* 0x006FAC2A: movzx eax, byte ptr [edi + 0x1d] */
    ecx = (uint32_t)MEM8(edi + 0x21); /* 0x006FAC2E: movzx ecx, byte ptr [edi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAC32: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAC32: shr edx, cl */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAC34: mov eax, dword ptr [eax*4 + 0x7d6000] */
    ecx = (uint32_t)MEM8(edx + eax); /* 0x006FAC3B: movzx ecx, byte ptr [edx + eax] */
    eax = MEM32(ebp + 0xC); /* 0x006FAC3F: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(edi + 0x14); /* 0x006FAC42: mov edx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x006FAC45: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAC47: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(edi + 0x1E); /* 0x006FAC49: movzx eax, byte ptr [edi + 0x1e] */
    ecx = (uint32_t)MEM8(edi + 0x22); /* 0x006FAC4D: movzx ecx, byte ptr [edi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAC51: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAC51: shr edx, cl */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAC53: mov eax, dword ptr [eax*4 + 0x7d6000] */
    ecx = (uint32_t)MEM8(edx + eax); /* 0x006FAC5A: movzx ecx, byte ptr [edx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x006FAC5E: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(edi + 0x18); /* 0x006FAC61: mov edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x006FAC64: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAC66: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(edi + 0x1F); /* 0x006FAC68: movzx eax, byte ptr [edi + 0x1f] */
    ecx = (uint32_t)MEM8(edi + 0x23); /* 0x006FAC6C: movzx ecx, byte ptr [edi + 0x23] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAC70: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAC70: shr edx, cl */
    edi = POP32_VAL(esp); /* 0x006FAC72: pop edi */
    eax = MEM32(eax * 4 + 0x7D6000); /* 0x006FAC73: mov eax, dword ptr [eax*4 + 0x7d6000] */
    ebx = POP32_VAL(esp); /* 0x006FAC7A: pop ebx */
    ecx = (uint32_t)MEM8(edx + eax); /* 0x006FAC7B: movzx ecx, byte ptr [edx + eax] */
    eax = MEM32(ebp + 0x14); /* 0x006FAC7F: mov eax, dword ptr [ebp + 0x14] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAC82: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x006FAC84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAC85: ret  */
L_006FAC86:
    /* cmp ebx, MEM32(eax) */ /* 0x006FAC86: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006FACB8; /* 0x006FAC88: jae 0x6facb8 */
L_006FAC8A:
    eax = MEM32(eax + 0x4); /* 0x006FAC8A: mov eax, dword ptr [eax + 4] */
    ecx = (uint32_t)MEM8(eax + ebx * 4); /* 0x006FAC8D: movzx ecx, byte ptr [eax + ebx*4] */
    edx = eax + ebx * 4; /* 0x006FAC91: lea edx, [eax + ebx*4] */
    eax = MEM32(ebp + 0x8); /* 0x006FAC94: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x006FAC97: pop edi */
    ebx = POP32_VAL(esp); /* 0x006FAC98: pop ebx */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FAC99: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0xC); /* 0x006FAC9B: mov eax, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM8(edx + 0x1); /* 0x006FAC9E: movzx ecx, byte ptr [edx + 1] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FACA2: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0x10); /* 0x006FACA4: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)MEM8(edx + 0x2); /* 0x006FACA7: movzx ecx, byte ptr [edx + 2] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FACAB: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0x14); /* 0x006FACAD: mov eax, dword ptr [ebp + 0x14] */
    ecx = (uint32_t)MEM8(edx + 0x3); /* 0x006FACB0: movzx ecx, byte ptr [edx + 3] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x006FACB4: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x006FACB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FACB7: ret  */
L_006FACB8:
    eax = MEM32(ebp + 0x14); /* 0x006FACB8: mov eax, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x006FACBB: pop edi */
    ebx = POP32_VAL(esp); /* 0x006FACBC: pop ebx */
    MEM8(eax) = (uint8_t)(0); /* 0x006FACBD: mov byte ptr [eax], 0 */
    eax = MEM32(ebp + 0x10); /* 0x006FACC0: mov eax, dword ptr [ebp + 0x10] */
    MEM8(eax) = (uint8_t)(0); /* 0x006FACC3: mov byte ptr [eax], 0 */
    eax = MEM32(ebp + 0xC); /* 0x006FACC6: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(0); /* 0x006FACC9: mov byte ptr [eax], 0 */
    eax = MEM32(ebp + 0x8); /* 0x006FACCC: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x006FACCF: mov byte ptr [eax], 0 */
    ebp = POP32_VAL(esp); /* 0x006FACD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FACD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FACE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FACE0u);

L_006FACE0:
    PUSH32(esp, ebp); /* 0x006FACE0: push ebp */
    ebp = esp; /* 0x006FACE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FACE3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FACE6: push ebx */
    PUSH32(esp, esi); /* 0x006FACE7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006FACE8: mov esi, dword ptr [ebp + 8] */
    ebx = edx; /* 0x006FACEB: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006FACED: push edi */
    edi = ecx; /* 0x006FACEE: mov edi, ecx */
    /* test esi, esi */ /* 0x006FACF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FAD29; /* 0x006FACF2: je 0x6fad29 */
L_006FACF4:
    eax = MEM32(edi); /* 0x006FACF4: mov eax, dword ptr [edi] */
    /* cmp eax, MEM32(ebx) */ /* 0x006FACF6: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FAD23; /* 0x006FACF8: jg 0x6fad23 */
L_006FACFA:
    /* cmp edi, ebx */ /* 0x006FACFA: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FAD14; /* 0x006FACFC: je 0x6fad14 */
L_006FACFE:
    edx = MEM32(ebx + 0x4); /* 0x006FACFE: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(edi + 0x4); /* 0x006FAD01: mov ecx, dword ptr [edi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006FAD04: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006FAD04: shl eax, 2 */
    PUSH32(esp, eax); /* 0x006FAD07: push eax */
    RECOMP_CALL(sub_006F2A80); /* 0x006FAD08: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FAD0D: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FAD10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FAD23; /* 0x006FAD12: jne 0x6fad23 */
L_006FAD14:
    edi = POP32_VAL(esp); /* 0x006FAD14: pop edi */
    MEM32(esi) = 1; /* 0x006FAD15: mov dword ptr [esi], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FAD1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FAD1D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FAD1E: pop ebx */
    esp = ebp; /* 0x006FAD1F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FAD21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAD22: ret  */
L_006FAD23:
    MEM32(esi) = 0; /* 0x006FAD23: mov dword ptr [esi], 0 */
L_006FAD29:
    eax = MEM32(edi); /* 0x006FAD29: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x006FAD2B: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x006FAD2C: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006FAD2F: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FAD35: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x006FAD38: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x006FAD3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FAD55; /* 0x006FAD3D: jne 0x6fad55 */
L_006FAD3F:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FAD3F: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FAD44: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FAD49: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FAD4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FAD4E: pop edi */
    esi = POP32_VAL(esp); /* 0x006FAD4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FAD50: pop ebx */
    esp = ebp; /* 0x006FAD51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FAD53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAD54: ret  */
L_006FAD55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FAD55: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x006FAD57: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006FAD92; /* 0x006FAD59: jle 0x6fad92 */
L_006FAD5B:
    ecx = MEM32(edi + 0x4); /* 0x006FAD5B: mov ecx, dword ptr [edi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x006FAD5E: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006FAD61: mov dword ptr [ebp - 8], ecx */
L_006FAD64:
    eax = (uint32_t)MEM8(ecx + esi * 4 + 0x3); /* 0x006FAD64: movzx eax, byte ptr [ecx + esi*4 + 3] */
    SET_LO8(edx, MEM8(ecx + esi * 4)); /* 0x006FAD69: mov dl, byte ptr [ecx + esi*4] */
    PUSH32(esp, eax); /* 0x006FAD6C: push eax */
    eax = (uint32_t)MEM8(ecx + esi * 4 + 0x2); /* 0x006FAD6D: movzx eax, byte ptr [ecx + esi*4 + 2] */
    PUSH32(esp, eax); /* 0x006FAD72: push eax */
    eax = (uint32_t)MEM8(ecx + esi * 4 + 0x1); /* 0x006FAD73: movzx eax, byte ptr [ecx + esi*4 + 1] */
    ecx = ebx; /* 0x006FAD78: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x006FAD7A: push eax */
    RECOMP_CALL(sub_006FA990); /* 0x006FAD7B: call 0x6fa990 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x006FAD80: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FAD83: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + edi) = (uint8_t)(LO8(eax)); /* 0x006FAD86: mov byte ptr [esi + edi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FAD89: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x006FAD8A: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FAD64; /* 0x006FAD8D: jl 0x6fad64 */
L_006FAD8F:
    eax = MEM32(ebp + 0x8); /* 0x006FAD8F: mov eax, dword ptr [ebp + 8] */
L_006FAD92:
    edi = POP32_VAL(esp); /* 0x006FAD92: pop edi */
    esi = POP32_VAL(esp); /* 0x006FAD93: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FAD94: pop ebx */
    esp = ebp; /* 0x006FAD95: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FAD97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FAD98: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FADA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FADA0u);

L_006FADA0:
    PUSH32(esp, ebp); /* 0x006FADA0: push ebp */
    ebp = esp; /* 0x006FADA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006FADA3: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FADA6: push ebx */
    PUSH32(esp, esi); /* 0x006FADA7: push esi */
    esi = MEM32(ebp + 0x14); /* 0x006FADA8: mov esi, dword ptr [ebp + 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x006FADAB: mov byte ptr [ebp - 1], dl */
    edx = MEM32(ecx + 0x4); /* 0x006FADAE: mov edx, dword ptr [ecx + 4] */
    ecx = 4; /* 0x006FADB1: mov ecx, 4 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x006FADB6: mov dword ptr [ebp - 0x1c], edx */
    SET_LO8(eax, MEM8(esi + 0x9)); /* 0x006FADB9: mov al, byte ptr [esi + 9] */
    MEM8(ebp + 0x17) = (uint8_t)(LO8(eax)); /* 0x006FADBC: mov byte ptr [ebp + 0x17], al */
    /* cmp LO8(eax), 3 */ /* 0x006FADBF: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FADC6; /* 0x006FADC1: je 0x6fadc6 */
L_006FADC3:
    ecx = (uint32_t)LO8(eax); /* 0x006FADC3: movzx ecx, al */
L_006FADC6:
    ebx = MEM32(edx); /* 0x006FADC6: mov ebx, dword ptr [edx] */
    eax = ebx; /* 0x006FADC8: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006FADCA: imul eax, ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006FADCD: mov dword ptr [ebp - 0x18], ecx */
    PUSH32(esp, eax); /* 0x006FADD0: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006FADD1: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FADD7: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FADD9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x006FADDC: mov dword ptr [ebp - 8], edx */
    /* test edx, edx */ /* 0x006FADDF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FADF8; /* 0x006FADE1: jne 0x6fadf8 */
L_006FADE3:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FADE3: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FADE8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FADED: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FADF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FADF2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FADF3: pop ebx */
    esp = ebp; /* 0x006FADF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FADF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FADF7: ret  */
L_006FADF8:
    PUSH32(esp, edi); /* 0x006FADF8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FADF9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x006FADFB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FB016; /* 0x006FADFD: jle 0x6fb016 */
L_006FAE03:
    eax = MEM32(ebp + (-0x1C)); /* 0x006FAE03: mov eax, dword ptr [ebp - 0x1c] */
    edx = (uint32_t)MEM8(ebp + (-0x1)); /* 0x006FAE06: movzx edx, byte ptr [ebp - 1] */
    MEM32(ebp + (-0x20)) = edx; /* 0x006FAE0A: mov dword ptr [ebp - 0x20], edx */
    ecx = MEM32(eax + 0x4); /* 0x006FAE0D: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x006FAE10: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x006FAE13: movzx eax, al */
    MEM32(ebp + (-0x24)) = eax; /* 0x006FAE16: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FAE19: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO8(eax); /* 0x006FAE1C: movzx eax, al */
    MEM32(ebp + (-0x28)) = eax; /* 0x006FAE1F: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x10); /* 0x006FAE22: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO8(eax); /* 0x006FAE25: movzx eax, al */
    MEM32(ebp + (-0x2C)) = eax; /* 0x006FAE28: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)MEM8(ebp + 0x17); /* 0x006FAE2B: movzx eax, byte ptr [ebp + 0x17] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006FAE2F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x006FAE30: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x006FAE33: mov dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006FAE36: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FAE43; /* 0x006FAE38: jmp 0x6fae43 */
L_006FAE40:
    edx = MEM32(ebp + (-0x20)); /* 0x006FAE40: mov edx, dword ptr [ebp - 0x20] */
L_006FAE43:
    ecx = (uint32_t)MEM8(ecx + edi * 4); /* 0x006FAE43: movzx ecx, byte ptr [ecx + edi*4] */
    eax = 0x80808081u; /* 0x006FAE47: mov eax, 0x80808081 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x006FAE4C: imul ecx, edx */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006FAE4F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006FAE51: add edx, ecx */
    _flag_k = FK_ADD;
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x006FAE53: sar edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 7u);
    eax = edx; /* 0x006FAE56: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006FAE58: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006FAE58: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FAE5B: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x006FAE5D: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x006FAE60: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM8(eax + edi * 4 + 0x1); /* 0x006FAE63: movzx ecx, byte ptr [eax + edi*4 + 1] */
    eax = 0x80808081u; /* 0x006FAE68: mov eax, 0x80808081 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x24))); /* 0x006FAE6D: imul ecx, dword ptr [ebp - 0x24] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006FAE71: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006FAE73: add edx, ecx */
    _flag_k = FK_ADD;
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x006FAE75: sar edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 7u);
    eax = edx; /* 0x006FAE78: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006FAE7A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006FAE7A: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FAE7D: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x006FAE7F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x006FAE82: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM8(eax + edi * 4 + 0x2); /* 0x006FAE85: movzx ecx, byte ptr [eax + edi*4 + 2] */
    eax = 0x80808081u; /* 0x006FAE8A: mov eax, 0x80808081 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x28))); /* 0x006FAE8F: imul ecx, dword ptr [ebp - 0x28] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006FAE93: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006FAE95: add edx, ecx */
    _flag_k = FK_ADD;
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x006FAE97: sar edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 7u);
    eax = edx; /* 0x006FAE9A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006FAE9C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006FAE9C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FAE9F: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x006FAEA1: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x006FAEA4: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM8(eax + edi * 4 + 0x3); /* 0x006FAEA7: movzx ecx, byte ptr [eax + edi*4 + 3] */
    eax = 0x80808081u; /* 0x006FAEAC: mov eax, 0x80808081 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x2C))); /* 0x006FAEB1: imul ecx, dword ptr [ebp - 0x2c] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006FAEB5: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006FAEB7: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x30)); /* 0x006FAEB9: mov ecx, dword ptr [ebp - 0x30] */
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x006FAEBC: sar edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 7u);
    eax = edx; /* 0x006FAEBF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006FAEC1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006FAEC1: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FAEC4: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, 3 */ /* 0x006FAEC6: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006FB001; /* 0x006FAEC9: ja 0x6fb001 */
L_006FAECF:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x6FB020)); goto _ljump; }
L_006FAED6:
    ecx = (uint32_t)MEM8(esi + 0x1F); /* 0x006FAED6: movzx ecx, byte ptr [esi + 0x1f] */
    edx = MEM32(ebp + 0x14); /* 0x006FAEDA: mov edx, dword ptr [ebp + 0x14] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAEDD: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x006FAEDD: shr al, cl */
    ecx = (uint32_t)MEM8(esi + 0x23); /* 0x006FAEDF: movzx ecx, byte ptr [esi + 0x23] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAEE3: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x006FAEE3: shl al, cl */
    ecx = (uint32_t)MEM8(esi + 0x1E); /* 0x006FAEE5: movzx ecx, byte ptr [esi + 0x1e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAEE9: shr dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> ((LO8(ecx)) & 31)); /* 0x006FAEE9: shr dl, cl */
    ecx = (uint32_t)MEM8(esi + 0x22); /* 0x006FAEEB: movzx ecx, byte ptr [esi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAEEF: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x006FAEEF: shl dl, cl */
    ecx = (uint32_t)MEM8(esi + 0x1D); /* 0x006FAEF1: movzx ecx, byte ptr [esi + 0x1d] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(edx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(edx)); /* 0x006FAEF5: or al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebp + (-0xC)); /* 0x006FAEF7: mov edx, dword ptr [ebp - 0xc] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAEFA: shr dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> ((LO8(ecx)) & 31)); /* 0x006FAEFA: shr dl, cl */
    ecx = (uint32_t)MEM8(esi + 0x21); /* 0x006FAEFC: movzx ecx, byte ptr [esi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF00: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x006FAF00: shl dl, cl */
    ecx = (uint32_t)MEM8(esi + 0x1C); /* 0x006FAF02: movzx ecx, byte ptr [esi + 0x1c] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(edx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(edx)); /* 0x006FAF06: or al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebp + (-0x10)); /* 0x006FAF08: mov edx, dword ptr [ebp - 0x10] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAF0B: shr dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> ((LO8(ecx)) & 31)); /* 0x006FAF0B: shr dl, cl */
    ecx = (uint32_t)MEM8(esi + 0x20); /* 0x006FAF0D: movzx ecx, byte ptr [esi + 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF11: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x006FAF11: shl dl, cl */
    _flag_a = (uint32_t)((LO8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(edx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(edx)); /* 0x006FAF13: or al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebp + (-0x8)); /* 0x006FAF15: mov edx, dword ptr [ebp - 8] */
    MEM8(ebx + edx) = (uint8_t)(LO8(eax)); /* 0x006FAF18: mov byte ptr [ebx + edx], al */
    goto L_006FB004; /* 0x006FAF1B: jmp 0x6fb004 */
L_006FAF20:
    ecx = (uint32_t)MEM8(esi + 0x1F); /* 0x006FAF20: movzx ecx, byte ptr [esi + 0x1f] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAF24: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x006FAF24: shr al, cl */
    ecx = (uint32_t)MEM8(esi + 0x23); /* 0x006FAF26: movzx ecx, byte ptr [esi + 0x23] */
    edx = (uint32_t)LO8(eax); /* 0x006FAF2A: movzx edx, al */
    eax = MEM32(ebp + 0x14); /* 0x006FAF2D: mov eax, dword ptr [ebp + 0x14] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF30: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006FAF30: shl dx, cl */
    ecx = (uint32_t)MEM8(esi + 0x1E); /* 0x006FAF33: movzx ecx, byte ptr [esi + 0x1e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAF37: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x006FAF37: shr al, cl */
    ecx = (uint32_t)MEM8(esi + 0x22); /* 0x006FAF39: movzx ecx, byte ptr [esi + 0x22] */
    eax = (uint32_t)LO8(eax); /* 0x006FAF3D: movzx eax, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF40: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006FAF40: shl ax, cl */
    ecx = (uint32_t)MEM8(esi + 0x1D); /* 0x006FAF43: movzx ecx, byte ptr [esi + 0x1d] */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x006FAF47: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0xC)); /* 0x006FAF4A: mov eax, dword ptr [ebp - 0xc] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAF4D: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x006FAF4D: shr al, cl */
    ecx = (uint32_t)MEM8(esi + 0x21); /* 0x006FAF4F: movzx ecx, byte ptr [esi + 0x21] */
    eax = (uint32_t)LO8(eax); /* 0x006FAF53: movzx eax, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF56: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006FAF56: shl ax, cl */
    ecx = (uint32_t)MEM8(esi + 0x1C); /* 0x006FAF59: movzx ecx, byte ptr [esi + 0x1c] */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x006FAF5D: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0x10)); /* 0x006FAF60: mov eax, dword ptr [ebp - 0x10] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAF63: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x006FAF63: shr al, cl */
    ecx = (uint32_t)MEM8(esi + 0x20); /* 0x006FAF65: movzx ecx, byte ptr [esi + 0x20] */
    eax = (uint32_t)LO8(eax); /* 0x006FAF69: movzx eax, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAF6C: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006FAF6C: shl ax, cl */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x006FAF6F: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0x8)); /* 0x006FAF72: mov eax, dword ptr [ebp - 8] */
    MEM16(ebx + eax) = (uint16_t)(LO16(edx)); /* 0x006FAF75: mov word ptr [ebx + eax], dx */
    goto L_006FB001; /* 0x006FAF79: jmp 0x6fb001 */
L_006FAF7E:
    eax = (uint32_t)MEM8(esi + 0x20); /* 0x006FAF7E: movzx eax, byte ptr [esi + 0x20] */
    edx = MEM32(ebp + (-0x8)); /* 0x006FAF82: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x006FAF85: mov ecx, dword ptr [ebp - 0x10] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006FAF88: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x006FAF88: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006FAF8B: add eax, ebx */
    _flag_k = FK_ADD;
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x006FAF8D: mov byte ptr [eax + edx], cl */
    eax = (uint32_t)MEM8(esi + 0x21); /* 0x006FAF90: movzx eax, byte ptr [esi + 0x21] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006FAF94: mov ecx, dword ptr [ebp - 0xc] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006FAF97: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x006FAF97: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006FAF9A: add eax, ebx */
    _flag_k = FK_ADD;
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x006FAF9C: mov byte ptr [eax + edx], cl */
    eax = (uint32_t)MEM8(esi + 0x22); /* 0x006FAF9F: movzx eax, byte ptr [esi + 0x22] */
    ecx = MEM32(ebp + 0x14); /* 0x006FAFA3: mov ecx, dword ptr [ebp + 0x14] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006FAFA6: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x006FAFA6: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006FAFA9: add eax, ebx */
    _flag_k = FK_ADD;
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x006FAFAB: mov byte ptr [eax + edx], cl */
    goto L_006FB004; /* 0x006FAFAE: jmp 0x6fb004 */
L_006FAFB0:
    ecx = (uint32_t)MEM8(esi + 0x1F); /* 0x006FAFB0: movzx ecx, byte ptr [esi + 0x1f] */
    edx = (uint32_t)LO8(eax); /* 0x006FAFB4: movzx edx, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAFB7: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x006FAFB7: shr edx, cl */
    ecx = (uint32_t)MEM8(esi + 0x23); /* 0x006FAFB9: movzx ecx, byte ptr [esi + 0x23] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAFBD: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x006FAFBD: shl edx, cl */
    ecx = MEM32(ebp + 0x14); /* 0x006FAFBF: mov ecx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)LO8(ecx); /* 0x006FAFC2: movzx eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x1E); /* 0x006FAFC5: movzx ecx, byte ptr [esi + 0x1e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAFC9: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAFC9: shr eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x22); /* 0x006FAFCB: movzx ecx, byte ptr [esi + 0x22] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAFCF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAFCF: shl eax, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x006FAFD1: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x006FAFD4: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x006FAFD6: movzx eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x1D); /* 0x006FAFD9: movzx ecx, byte ptr [esi + 0x1d] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAFDD: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAFDD: shr eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x21); /* 0x006FAFDF: movzx ecx, byte ptr [esi + 0x21] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAFE3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAFE3: shl eax, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x006FAFE5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x006FAFE8: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ecx); /* 0x006FAFEA: movzx eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x1C); /* 0x006FAFED: movzx ecx, byte ptr [esi + 0x1c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006FAFF1: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x006FAFF1: shr eax, cl */
    ecx = (uint32_t)MEM8(esi + 0x20); /* 0x006FAFF3: movzx ecx, byte ptr [esi + 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006FAFF7: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006FAFF7: shl eax, cl */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x006FAFF9: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8)); /* 0x006FAFFB: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + eax) = edx; /* 0x006FAFFE: mov dword ptr [ebx + eax], edx */
L_006FB001:
    edx = MEM32(ebp + (-0x8)); /* 0x006FB001: mov edx, dword ptr [ebp - 8] */
L_006FB004:
    eax = MEM32(ebp + (-0x1C)); /* 0x006FB004: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006FB007: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x18)); /* 0x006FB008: add ebx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x006FB00B: mov ecx, dword ptr [eax + 4] */
    /* cmp edi, MEM32(eax) */ /* 0x006FB00E: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FAE40; /* 0x006FB010: jl 0x6fae40 */
L_006FB016:
    edi = POP32_VAL(esp); /* 0x006FB016: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB017: pop esi */
    eax = edx; /* 0x006FB018: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x006FB01A: pop ebx */
    esp = ebp; /* 0x006FB01B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB01D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB01E: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006FAED6u: goto L_006FAED6;
      case 0x006FAF20u: goto L_006FAF20;
      case 0x006FAF7Eu: goto L_006FAF7E;
      case 0x006FAFB0u: goto L_006FAFB0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006FB030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB030u);

L_006FB030:
    PUSH32(esp, esi); /* 0x006FB030: push esi */
    esi = ecx; /* 0x006FB031: mov esi, ecx */
    /* test esi, esi */ /* 0x006FB033: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB074; /* 0x006FB035: je 0x6fb074 */
L_006FB037:
    eax = MEM32(esi); /* 0x006FB037: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006FB039: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB04D; /* 0x006FB03B: je 0x6fb04d */
L_006FB03D:
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) - 1; /* 0x006FB03D: dec dword ptr [eax + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(eax + 0x38), 0 */ /* 0x006FB040: cmp dword ptr [eax + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FB04D; /* 0x006FB044: jg 0x6fb04d */
L_006FB046:
    ecx = MEM32(esi); /* 0x006FB046: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006F7460); /* 0x006FB048: call 0x6f7460 */
    RECOMP_FLAGS_IN();
L_006FB04D:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x006FB04D: push dword ptr [esi + 0x40] */
    MEM32(esi) = 0; /* 0x006FB050: mov dword ptr [esi], 0 */
    MEM32(esi + 0x54) = 0; /* 0x006FB056: mov dword ptr [esi + 0x54], 0 */
    MEM32(esi + 0x50) = 0; /* 0x006FB05D: mov dword ptr [esi + 0x50], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB064: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB06A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = 0; /* 0x006FB06D: mov dword ptr [esi + 0x40], 0 */
L_006FB074:
    esi = POP32_VAL(esp); /* 0x006FB074: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB075: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB080u);

L_006FB080:
    PUSH32(esp, ebp); /* 0x006FB080: push ebp */
    ebp = esp; /* 0x006FB081: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x424u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x424u; /* 0x006FB083: sub esp, 0x424 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FB089: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FB08E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FB090: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FB093: push ebx */
    PUSH32(esp, esi); /* 0x006FB094: push esi */
    PUSH32(esp, edi); /* 0x006FB095: push edi */
    edi = ecx; /* 0x006FB096: mov edi, ecx */
    MEM32(ebp + (-0x414)) = edx; /* 0x006FB098: mov dword ptr [ebp - 0x414], edx */
    MEM32(ebp + (-0x40C)) = edi; /* 0x006FB09E: mov dword ptr [ebp - 0x40c], edi */
    /* test MEM8(edi), 2 */ /* 0x006FB0A4: test byte ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi + 0x34); /* 0x006FB0A7: mov esi, dword ptr [edi + 0x34] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB0B6; /* 0x006FB0AA: je 0x6fb0b6 */
L_006FB0AC:
    edx = 1; /* 0x006FB0AC: mov edx, 1 */
    RECOMP_CALL(sub_007092B0); /* 0x006FB0B1: call 0x7092b0 */
    RECOMP_FLAGS_IN();
L_006FB0B6:
    /* test esi, esi */ /* 0x006FB0B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB0F7; /* 0x006FB0B8: je 0x6fb0f7 */
L_006FB0BA:
    eax = MEM32(esi); /* 0x006FB0BA: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006FB0BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB0D0; /* 0x006FB0BE: je 0x6fb0d0 */
L_006FB0C0:
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) - 1; /* 0x006FB0C0: dec dword ptr [eax + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(eax + 0x38), 0 */ /* 0x006FB0C3: cmp dword ptr [eax + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006FB0D0; /* 0x006FB0C7: jg 0x6fb0d0 */
L_006FB0C9:
    ecx = MEM32(esi); /* 0x006FB0C9: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006F7460); /* 0x006FB0CB: call 0x6f7460 */
    RECOMP_FLAGS_IN();
L_006FB0D0:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x006FB0D0: push dword ptr [esi + 0x40] */
    MEM32(esi) = 0; /* 0x006FB0D3: mov dword ptr [esi], 0 */
    MEM32(esi + 0x54) = 0; /* 0x006FB0D9: mov dword ptr [esi + 0x54], 0 */
    MEM32(esi + 0x50) = 0; /* 0x006FB0E0: mov dword ptr [esi + 0x50], 0 */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB0E7: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB0ED: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = 0; /* 0x006FB0F0: mov dword ptr [esi + 0x40], 0 */
L_006FB0F7:
    ebx = esi + 0x4; /* 0x006FB0F7: lea ebx, [esi + 4] */
    MEM32(ebx) = 0; /* 0x006FB0FA: mov dword ptr [ebx], 0 */
    edx = MEM32(edi + 0x4); /* 0x006FB100: mov edx, dword ptr [edi + 4] */
    edi = MEM32(ebp + (-0x414)); /* 0x006FB103: mov edi, dword ptr [ebp - 0x414] */
    MEM32(ebp + (-0x410)) = edx; /* 0x006FB109: mov dword ptr [ebp - 0x410], edx */
    ecx = MEM32(edx); /* 0x006FB10F: mov ecx, dword ptr [edx] */
    edi = MEM32(edi + 0x4); /* 0x006FB111: mov edi, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x006FB114: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB126; /* 0x006FB116: je 0x6fb126 */
L_006FB118:
    eax = ecx; /* 0x006FB118: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006FB11A: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006FB11F: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB147; /* 0x006FB124: jne 0x6fb147 */
L_006FB126:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006FB126: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006FB126: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006FB129: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x006FB12C: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1EE; /* 0x006FB12F: je 0x6fb1ee */
L_006FB135:
    /* cmp ecx, 2 */ /* 0x006FB135: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1EE; /* 0x006FB138: je 0x6fb1ee */
L_006FB13E:
    /* cmp ecx, 3 */ /* 0x006FB13E: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1EE; /* 0x006FB141: je 0x6fb1ee */
L_006FB147:
    ecx = MEM32(edi); /* 0x006FB147: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006FB149: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB15B; /* 0x006FB14B: je 0x6fb15b */
L_006FB14D:
    eax = ecx; /* 0x006FB14D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006FB14F: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006FB154: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB170; /* 0x006FB159: jne 0x6fb170 */
L_006FB15B:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006FB15B: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006FB15B: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006FB15E: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x006FB161: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1A1; /* 0x006FB164: je 0x6fb1a1 */
L_006FB166:
    /* cmp ecx, 2 */ /* 0x006FB166: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1A1; /* 0x006FB169: je 0x6fb1a1 */
L_006FB16B:
    /* cmp ecx, 3 */ /* 0x006FB16B: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB1A1; /* 0x006FB16E: je 0x6fb1a1 */
L_006FB170:
    /* cmp edx, edi */ /* 0x006FB170: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB17A; /* 0x006FB172: jne 0x6fb17a */
L_006FB174:
    MEM32(ebx) = 1; /* 0x006FB174: mov dword ptr [ebx], 1 */
L_006FB17A:
    ebx = MEM32(ebp + (-0x40C)); /* 0x006FB17A: mov ebx, dword ptr [ebp - 0x40c] */
L_006FB180:
    eax = MEM32(ebp + (-0x414)); /* 0x006FB180: mov eax, dword ptr [ebp - 0x414] */
    MEM32(esi) = eax; /* 0x006FB186: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) + 1; /* 0x006FB188: inc dword ptr [eax + 0x38] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x4); /* 0x006FB18B: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x006FB18E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB2A5; /* 0x006FB190: je 0x6fb2a5 */
L_006FB196:
    eax = MEM32(eax + 0x8); /* 0x006FB196: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x50) = eax; /* 0x006FB199: mov dword ptr [esi + 0x50], eax */
    goto L_006FB2AC; /* 0x006FB19C: jmp 0x6fb2ac */
L_006FB1A1:
    ecx = ebp + (-0x408); /* 0x006FB1A1: lea ecx, [ebp - 0x408] */
    MEM32(ebp + (-0x424)) = 0x100u; /* 0x006FB1A7: mov dword ptr [ebp - 0x424], 0x100 */
    RECOMP_CALL(sub_006FA8E0); /* 0x006FB1B1: call 0x6fa8e0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x4); /* 0x006FB1B6: mov edx, dword ptr [edi + 4] */
    eax = ebp + (-0x408); /* 0x006FB1B9: lea eax, [ebp - 0x408] */
    PUSH32(esp, ebx); /* 0x006FB1BF: push ebx */
    ecx = ebp + (-0x424); /* 0x006FB1C0: lea ecx, [ebp - 0x424] */
    MEM32(ebp + (-0x420)) = eax; /* 0x006FB1C6: mov dword ptr [ebp - 0x420], eax */
    RECOMP_CALL(sub_006FACE0); /* 0x006FB1CC: call 0x6face0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB1D1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = eax; /* 0x006FB1D4: mov dword ptr [esi + 0x40], eax */
    /* cmp MEM32(ebx), 0 */ /* 0x006FB1D7: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB1E0; /* 0x006FB1DA: jne 0x6fb1e0 */
L_006FB1DC:
    /* test eax, eax */ /* 0x006FB1DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB248; /* 0x006FB1DE: je 0x6fb248 */
L_006FB1E0:
    edx = MEM32(ebp + (-0x410)); /* 0x006FB1E0: mov edx, dword ptr [ebp - 0x410] */
    MEM32(ebx) = 0; /* 0x006FB1E6: mov dword ptr [ebx], 0 */
    RECOMP_BACKEDGE();
    goto L_006FB17A; /* 0x006FB1EC: jmp 0x6fb17a */
L_006FB1EE:
    ecx = MEM32(edi); /* 0x006FB1EE: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006FB1F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB202; /* 0x006FB1F2: je 0x6fb202 */
L_006FB1F4:
    eax = ecx; /* 0x006FB1F4: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006FB1F6: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006FB1FB: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB217; /* 0x006FB200: jne 0x6fb217 */
L_006FB202:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006FB202: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006FB202: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006FB205: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x006FB208: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB25C; /* 0x006FB20B: je 0x6fb25c */
L_006FB20D:
    /* cmp ecx, 2 */ /* 0x006FB20D: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB25C; /* 0x006FB210: je 0x6fb25c */
L_006FB212:
    /* cmp ecx, 3 */ /* 0x006FB212: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB25C; /* 0x006FB215: je 0x6fb25c */
L_006FB217:
    ebx = MEM32(ebp + (-0x40C)); /* 0x006FB217: mov ebx, dword ptr [ebp - 0x40c] */
    PUSH32(esp, edi); /* 0x006FB21D: push edi */
    ecx = MEM32(ebx + 0x34); /* 0x006FB21E: mov ecx, dword ptr [ebx + 0x34] */
    eax = (uint32_t)MEM8(ecx + 0x4F); /* 0x006FB221: movzx eax, byte ptr [ecx + 0x4f] */
    SET_LO8(edx, MEM8(ecx + 0x4C)); /* 0x006FB225: mov dl, byte ptr [ecx + 0x4c] */
    PUSH32(esp, eax); /* 0x006FB228: push eax */
    eax = (uint32_t)MEM8(ecx + 0x4E); /* 0x006FB229: movzx eax, byte ptr [ecx + 0x4e] */
    PUSH32(esp, eax); /* 0x006FB22D: push eax */
    eax = (uint32_t)MEM8(ecx + 0x4D); /* 0x006FB22E: movzx eax, byte ptr [ecx + 0x4d] */
    ecx = MEM32(ebp + (-0x410)); /* 0x006FB232: mov ecx, dword ptr [ebp - 0x410] */
    PUSH32(esp, eax); /* 0x006FB238: push eax */
    RECOMP_CALL(sub_006FADA0); /* 0x006FB239: call 0x6fada0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FB23E: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = eax; /* 0x006FB241: mov dword ptr [esi + 0x40], eax */
    /* test eax, eax */ /* 0x006FB244: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB29A; /* 0x006FB246: jne 0x6fb29a */
L_006FB248:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FB248: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FB24B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB24C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FB24D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FB24E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FB251: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FB253: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FB258: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB25A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB25B: ret  */
L_006FB25C:
    ecx = MEM32(ebp + (-0x410)); /* 0x006FB25C: mov ecx, dword ptr [ebp - 0x410] */
    edx = MEM32(edi + 0x4); /* 0x006FB262: mov edx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x006FB265: push ebx */
    ecx = MEM32(ecx + 0x4); /* 0x006FB266: mov ecx, dword ptr [ecx + 4] */
    RECOMP_CALL(sub_006FACE0); /* 0x006FB269: call 0x6face0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB26E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = eax; /* 0x006FB271: mov dword ptr [esi + 0x40], eax */
    /* cmp MEM32(ebx), 0 */ /* 0x006FB274: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB27D; /* 0x006FB277: jne 0x6fb27d */
L_006FB279:
    /* test eax, eax */ /* 0x006FB279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB248; /* 0x006FB27B: je 0x6fb248 */
L_006FB27D:
    edx = MEM32(ebp + (-0x410)); /* 0x006FB27D: mov edx, dword ptr [ebp - 0x410] */
    SET_LO8(eax, MEM8(edx + 0x8)); /* 0x006FB283: mov al, byte ptr [edx + 8] */
    /* cmp LO8(eax), MEM8(edi + 0x8) */ /* 0x006FB286: cmp al, byte ptr [edi + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB17A; /* 0x006FB289: je 0x6fb17a */
L_006FB28F:
    MEM32(ebx) = 0; /* 0x006FB28F: mov dword ptr [ebx], 0 */
    RECOMP_BACKEDGE();
    goto L_006FB17A; /* 0x006FB295: jmp 0x6fb17a */
L_006FB29A:
    edx = MEM32(ebp + (-0x410)); /* 0x006FB29A: mov edx, dword ptr [ebp - 0x410] */
    RECOMP_BACKEDGE();
    goto L_006FB180; /* 0x006FB2A0: jmp 0x6fb180 */
L_006FB2A5:
    MEM32(esi + 0x50) = 0; /* 0x006FB2A5: mov dword ptr [esi + 0x50], 0 */
L_006FB2AC:
    eax = MEM32(edx + 0x4); /* 0x006FB2AC: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x006FB2AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB2BB; /* 0x006FB2B1: je 0x6fb2bb */
L_006FB2B3:
    eax = MEM32(eax + 0x8); /* 0x006FB2B3: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x54) = eax; /* 0x006FB2B6: mov dword ptr [esi + 0x54], eax */
    goto L_006FB2C2; /* 0x006FB2B9: jmp 0x6fb2c2 */
L_006FB2BB:
    MEM32(esi + 0x54) = 0; /* 0x006FB2BB: mov dword ptr [esi + 0x54], 0 */
L_006FB2C2:
    ecx = ebx; /* 0x006FB2C2: mov ecx, ebx */
    RECOMP_CALL(sub_00712D30); /* 0x006FB2C4: call 0x712d30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006FB2C9: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006FB2CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB2CD: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FB2CE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FB2D0: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FB2D1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FB2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB2E0u);

L_006FB2E0:
    ecx = 0x00803F5Cu; /* 0x006FB2E0: mov ecx, 0x803f5c */
    RECOMP_CALL(sub_006FBC10); /* 0x006FB2E5: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB2EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB322; /* 0x006FB2EC: je 0x6fb322 */
L_006FB2EE:
    ecx = 0x00806704u; /* 0x006FB2EE: mov ecx, 0x806704 */
L_006FB2F3:
    SET_LO8(edx, MEM8(eax)); /* 0x006FB2F3: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FB2F5: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB313; /* 0x006FB2F7: jne 0x6fb313 */
L_006FB2F9:
    /* test LO8(edx), LO8(edx) */ /* 0x006FB2F9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB30F; /* 0x006FB2FB: je 0x6fb30f */
L_006FB2FD:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FB2FD: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FB300: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB313; /* 0x006FB303: jne 0x6fb313 */
L_006FB305:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FB305: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006FB308: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FB30B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB2F3; /* 0x006FB30D: jne 0x6fb2f3 */
L_006FB30F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB30F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FB318; /* 0x006FB311: jmp 0x6fb318 */
L_006FB313:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FB313: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FB315: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FB318:
    /* test eax, eax */ /* 0x006FB318: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB322; /* 0x006FB31A: jne 0x6fb322 */
L_006FB31C:
    eax = 1; /* 0x006FB31C: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB321: ret  */
L_006FB322:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB322: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB324: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB330u);

L_006FB330:
    PUSH32(esp, 0x2A8u); /* 0x006FB330: push 0x2a8 */
    PUSH32(esp, 1); /* 0x006FB335: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006FB337: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB33D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FB340: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB354; /* 0x006FB342: jne 0x6fb354 */
L_006FB344:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FB344: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FB349: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB34E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB351: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB353: ret  */
L_006FB354:
    MEM32(eax + 0x4) = 0x006FB3A0u; /* 0x006FB354: mov dword ptr [eax + 4], 0x6fb3a0 */
    MEM32(eax + 0x8) = 0x00409980u; /* 0x006FB35B: mov dword ptr [eax + 8], 0x409980 */
    MEM32(eax + 0x1C) = 0x006658D0u; /* 0x006FB362: mov dword ptr [eax + 0x1c], 0x6658d0 */
    MEM32(eax + 0xCC) = 0x00409980u; /* 0x006FB369: mov dword ptr [eax + 0xcc], 0x409980 */
    MEM32(eax + 0x84) = 0x00712F00u; /* 0x006FB373: mov dword ptr [eax + 0x84], 0x712f00 */
    MEM32(eax + 0x88) = 0x00713000u; /* 0x006FB37D: mov dword ptr [eax + 0x88], 0x713000 */
    MEM32(eax + 0x8C) = 0x007130B0u; /* 0x006FB387: mov dword ptr [eax + 0x8c], 0x7130b0 */
    MEM32(eax + 0x2A4) = 0x006F7B70u; /* 0x006FB391: mov dword ptr [eax + 0x2a4], 0x6f7b70 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB39B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB3A0u);

L_006FB3A0:
    PUSH32(esp, ebp); /* 0x006FB3A0: push ebp */
    ebp = esp; /* 0x006FB3A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x006FB3A3: sub esp, 0x58 */
    _flag_k = FK_CMP;
    _xmm[0] = xmm_ld(0x8099D0); /* 0x006FB3A6: movdqa xmm0, xmmword ptr [0x8099d0] */
    eax = ebp + (-0x58); /* 0x006FB3AE: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0x44u); /* 0x006FB3B1: push 0x44 */
    PUSH32(esp, 0); /* 0x006FB3B3: push 0 */
    PUSH32(esp, eax); /* 0x006FB3B5: push eax */
    MEM32(ebp + (-0x14)) = 0x16161804u; /* 0x006FB3B6: mov dword ptr [ebp - 0x14], 0x16161804 */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x006FB3BD: movdqu xmmword ptr [ebp - 0x10], xmm0 */
    RECOMP_CALL(sub_0078083E); /* 0x006FB3C2: call 0x78083e */
    RECOMP_FLAGS_IN();
    _xmm[1] = xmm_ld(0x8099D0); /* 0x006FB3C7: movdqa xmm1, xmmword ptr [0x8099d0] */
    ecx = ebp + (-0x58); /* 0x006FB3CF: lea ecx, [ebp - 0x58] */
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006FB3D2: movdqu xmm0, xmmword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FB3D7: add esp, 0xc */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006FB3DA: psrldq xmm1, 0xc */
    eax = _xmm[1].u32[0]; /* 0x006FB3DF: movd eax, xmm1 */
    xmm_st(ebp + (-0x48), _xmm[0]); /* 0x006FB3E3: movdqu xmmword ptr [ebp - 0x48], xmm0 */
    MEM32(ebp + (-0x38)) = eax; /* 0x006FB3E8: mov dword ptr [ebp - 0x38], eax */
    xmm_st(ebp + (-0x34), _xmm[0]); /* 0x006FB3EB: movdqu xmmword ptr [ebp - 0x34], xmm0 */
    MEM32(ebp + (-0x24)) = eax; /* 0x006FB3F0: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_006EAA40); /* 0x006FB3F3: call 0x6eaa40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB3F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006FB403; /* 0x006FB3FA: jns 0x6fb403 */
L_006FB3FC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FB3FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x006FB3FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB402: ret  */
L_006FB403:
    ecx = MEM32(ebp + 0x8); /* 0x006FB403: mov ecx, dword ptr [ebp + 8] */
    edx = ebp + (-0x14); /* 0x006FB406: lea edx, [ebp - 0x14] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FB409: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006FB40C: mov dword ptr [ebp - 4], 0 */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006FB413: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    ecx = MEM32(ecx + 0x10C); /* 0x006FB418: mov ecx, dword ptr [ecx + 0x10c] */
    RECOMP_CALL(sub_006EABE0); /* 0x006FB41E: call 0x6eabe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB423: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x006FB425: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB427: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB428: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB430u);

L_006FB430:
    PUSH32(esp, ebp); /* 0x006FB430: push ebp */
    ebp = esp; /* 0x006FB431: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0x111u */ /* 0x006FB433: cmp dword ptr [ebp + 0xc], 0x111 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x111u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB440; /* 0x006FB43A: je 0x6fb440 */
L_006FB43C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB43C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006FB43E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB43F: ret  */
L_006FB440:
    eax = MEM32(ebp + 0x10); /* 0x006FB440: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(eax); /* 0x006FB443: movzx eax, ax */
    PUSH32(esp, eax); /* 0x006FB446: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FB447: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC8B8)); /* 0x006FB44A: call dword ptr [0x7cc8b8] */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x006FB450: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006FB455: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB456: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB460u);

L_006FB460:
    PUSH32(esp, esi); /* 0x006FB460: push esi */
    PUSH32(esp, edi); /* 0x006FB461: push edi */
    edi = ecx; /* 0x006FB462: mov edi, ecx */
    ecx = MEM32(edi + 0x8); /* 0x006FB464: mov ecx, dword ptr [edi + 8] */
    esi = ecx; /* 0x006FB467: mov esi, ecx */
    /* test esi, esi */ /* 0x006FB469: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB471; /* 0x006FB46B: jne 0x6fb471 */
L_006FB46D:
    esi = edx; /* 0x006FB46D: mov esi, edx */
    goto L_006FB486; /* 0x006FB46F: jmp 0x6fb486 */
L_006FB471:
    eax = MEM32(edi + 0xC); /* 0x006FB471: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FB474: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006FB476: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006FB486; /* 0x006FB478: jbe 0x6fb486 */
L_006FB47A:
    ebx = ebx; /* 0x006FB47A: lea ebx, [ebx] */
L_006FB480:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x006FB480: add esi, esi */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x006FB482: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006FB480; /* 0x006FB484: ja 0x6fb480 */
L_006FB486:
    /* cmp esi, ecx */ /* 0x006FB486: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006FB4B5; /* 0x006FB488: jbe 0x6fb4b5 */
L_006FB48A:
    PUSH32(esp, esi); /* 0x006FB48A: push esi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FB48B: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006FB48E: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB494: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FB497: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB4AD; /* 0x006FB499: jne 0x6fb4ad */
L_006FB49B:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FB49B: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FB4A0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB4A5: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB4A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FB4AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB4AB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB4AC: ret  */
L_006FB4AD:
    MEM32(edi + 0x4) = eax; /* 0x006FB4AD: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = esi; /* 0x006FB4B0: mov dword ptr [edi + 8], esi */
    MEM32(edi) = eax; /* 0x006FB4B3: mov dword ptr [edi], eax */
L_006FB4B5:
    edi = POP32_VAL(esp); /* 0x006FB4B5: pop edi */
    eax = 1; /* 0x006FB4B6: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006FB4BB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB4BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB4C0u);

L_006FB4C0:
    PUSH32(esp, ebp); /* 0x006FB4C0: push ebp */
    ebp = esp; /* 0x006FB4C1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006FB4C3: push ebx */
    PUSH32(esp, esi); /* 0x006FB4C4: push esi */
    PUSH32(esp, edi); /* 0x006FB4C5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006FB4C6: mov edi, dword ptr [ebp + 8] */
    ebx = edx; /* 0x006FB4C9: mov ebx, edx */
    edx = edi; /* 0x006FB4CB: mov edx, edi */
    esi = ecx; /* 0x006FB4CD: mov esi, ecx */
    RECOMP_CALL(sub_006FB460); /* 0x006FB4CF: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB4D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB4DD; /* 0x006FB4D6: jne 0x6fb4dd */
L_006FB4D8:
    edi = POP32_VAL(esp); /* 0x006FB4D8: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB4D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FB4DA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FB4DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB4DC: ret  */
L_006FB4DD:
    eax = MEM32(esi + 0x4); /* 0x006FB4DD: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x006FB4E0: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006FB4E3: push edi */
    PUSH32(esp, ebx); /* 0x006FB4E4: push ebx */
    PUSH32(esp, eax); /* 0x006FB4E5: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006FB4E6: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FB4EB: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006FB4EE: mov eax, 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + edi; /* 0x006FB4F3: add dword ptr [esi + 0xc], edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FB4F6: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB4F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FB4F8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FB4F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB4FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB500u);

L_006FB500:
    PUSH32(esp, esi); /* 0x006FB500: push esi */
    PUSH32(esp, edi); /* 0x006FB501: push edi */
    edi = ecx; /* 0x006FB502: mov edi, ecx */
    /* test edx, edx */ /* 0x006FB504: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x007CD0C4u; /* 0x006FB506: mov ecx, 0x7cd0c4 */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edx; } /* 0x006FB50B: cmovne ecx, edx */
    edx = ecx; /* 0x006FB50E: mov edx, ecx */
    esi = edx + 0x1; /* 0x006FB510: lea esi, [edx + 1] */
L_006FB513:
    SET_LO8(eax, MEM8(edx)); /* 0x006FB513: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006FB515: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006FB516: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB513; /* 0x006FB518: jne 0x6fb513 */
L_006FB51A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006FB51A: sub edx, esi */
    _flag_k = FK_CMP;
    eax = edx + 0x1; /* 0x006FB51C: lea eax, [edx + 1] */
    edx = 0x00804E28u; /* 0x006FB51F: mov edx, 0x804e28 */
    PUSH32(esp, eax); /* 0x006FB524: push eax */
    PUSH32(esp, ecx); /* 0x006FB525: push ecx */
    ecx = 0x00804E1Cu; /* 0x006FB526: mov ecx, 0x804e1c */
    RECOMP_CALL(sub_00700DA0); /* 0x006FB52B: call 0x700da0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FB530: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB532: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FB535: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB53C; /* 0x006FB537: jne 0x6fb53c */
L_006FB539:
    edi = POP32_VAL(esp); /* 0x006FB539: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB53A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB53B: ret  */
L_006FB53C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FB53C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x006FB53E: mov eax, esi */
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x006FB540: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FB54F; /* 0x006FB543: je 0x6fb54f */
L_006FB545:
    eax = eax + 0x2; /* 0x006FB545: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FB548: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006FB549: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FB545; /* 0x006FB54D: jne 0x6fb545 */
L_006FB54F:
    PUSH32(esp, ebx); /* 0x006FB54F: push ebx */
    ebx = ecx * 2 + 0x2; /* 0x006FB550: lea ebx, [ecx*2 + 2] */
    ecx = edi; /* 0x006FB557: mov ecx, edi */
    edx = ebx; /* 0x006FB559: mov edx, ebx */
    RECOMP_CALL(sub_006FB460); /* 0x006FB55B: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB560: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB576; /* 0x006FB562: jne 0x6fb576 */
L_006FB564:
    PUSH32(esp, esi); /* 0x006FB564: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FB565: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB567: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB56D: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006FB570: mov eax, edi */
    ebx = POP32_VAL(esp); /* 0x006FB572: pop ebx */
    edi = POP32_VAL(esp); /* 0x006FB573: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB574: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB575: ret  */
L_006FB576:
    eax = MEM32(edi + 0x4); /* 0x006FB576: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0xC); /* 0x006FB579: add eax, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x006FB57C: push ebx */
    PUSH32(esp, esi); /* 0x006FB57D: push esi */
    PUSH32(esp, eax); /* 0x006FB57E: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006FB57F: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + ebx; /* 0x006FB584: add dword ptr [edi + 0xc], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FB587: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = 1; /* 0x006FB58A: mov edi, 1 */
    PUSH32(esp, esi); /* 0x006FB58F: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB590: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB596: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006FB599: mov eax, edi */
    ebx = POP32_VAL(esp); /* 0x006FB59B: pop ebx */
    edi = POP32_VAL(esp); /* 0x006FB59C: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB59D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB59E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB5A0u);

L_006FB5A0:
    PUSH32(esp, ebp); /* 0x006FB5A0: push ebp */
    ebp = esp; /* 0x006FB5A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006FB5A3: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x006FB5A6: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FB5A9: xorps xmm0, xmm0 */
    PUSH32(esp, ebx); /* 0x006FB5AC: push ebx */
    PUSH32(esp, esi); /* 0x006FB5AD: push esi */
    esi = MEM32(0x7CC144); /* 0x006FB5AE: mov esi, dword ptr [0x7cc144] */
    SET_LO16(ebx, LO16(edx)); /* 0x006FB5B4: mov bx, dx */
    PUSH32(esp, edi); /* 0x006FB5B7: push edi */
    PUSH32(esp, MEM32(0x926B10)); /* 0x006FB5B8: push dword ptr [0x926b10] */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x006FB5BE: movdqu xmmword ptr [ebp - 0x20], xmm0 */
    MEM32(ebp + (-0x18)) = eax; /* 0x006FB5C3: mov dword ptr [ebp - 0x18], eax */
    edi = ecx; /* 0x006FB5C6: mov edi, ecx */
    eax = MEM32(ebp + 0x20); /* 0x006FB5C8: mov eax, dword ptr [ebp + 0x20] */
    MEM64(ebp + (-0x10)) = _xmm[0].u64[0]; /* 0x006FB5CB: movq qword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0xC)) = eax; /* 0x006FB5D0: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x006FB5D3: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x006FB5D6: push 4 */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x006FB5D8: cwde  */
    PUSH32(esp, eax); /* 0x006FB5D9: push eax */
    MEM32(ebp + (-0x4)) = 0xFFFFu; /* 0x006FB5DA: mov dword ptr [ebp - 4], 0xffff */
    MEM32(ebp + (-0x8)) = 0; /* 0x006FB5E1: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006FB5E8: mov dword ptr [ebp - 0x1c], 0 */
    RECOMP_ICALL(esi); /* 0x006FB5EF: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x926B14)); /* 0x006FB5F1: push dword ptr [0x926b14] */
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x006FB5F7: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + 0x14); /* 0x006FB5FB: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 8); /* 0x006FB5FE: push 8 */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x006FB600: cwde  */
    PUSH32(esp, eax); /* 0x006FB601: push eax */
    RECOMP_ICALL(esi); /* 0x006FB602: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x926B10)); /* 0x006FB604: push dword ptr [0x926b10] */
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x006FB60A: mov word ptr [ebp - 0x12], ax */
    eax = MEM32(ebp + 0x18); /* 0x006FB60E: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, 4); /* 0x006FB611: push 4 */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x006FB613: cwde  */
    PUSH32(esp, eax); /* 0x006FB614: push eax */
    RECOMP_ICALL(esi); /* 0x006FB615: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x926B14)); /* 0x006FB617: push dword ptr [0x926b14] */
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(eax)); /* 0x006FB61D: mov word ptr [ebp - 0x10], ax */
    eax = MEM32(ebp + 0x1C); /* 0x006FB621: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, 8); /* 0x006FB624: push 8 */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x006FB626: cwde  */
    PUSH32(esp, eax); /* 0x006FB627: push eax */
    RECOMP_ICALL(esi); /* 0x006FB628: call esi */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0xC); /* 0x006FB62A: mov esi, dword ptr [edi + 0xc] */
    ecx = edi; /* 0x006FB62D: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    esi = esi & 3; /* 0x006FB62F: and esi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x006FB632: mov word ptr [ebp - 0xe], ax */
    edx = esi; /* 0x006FB636: mov edx, esi */
    RECOMP_CALL(sub_006FB460); /* 0x006FB638: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB63D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB63F: je 0x6fb6ea */
L_006FB645:
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + esi; /* 0x006FB645: add dword ptr [edi + 0xc], esi */
    _flag_k = FK_ADD;
    edx = 0x18u; /* 0x006FB648: mov edx, 0x18 */
    ecx = edi; /* 0x006FB64D: mov ecx, edi */
    RECOMP_CALL(sub_006FB460); /* 0x006FB64F: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB656: je 0x6fb6ea */
L_006FB65C:
    eax = MEM32(edi + 0xC); /* 0x006FB65C: mov eax, dword ptr [edi + 0xc] */
    edx = 2; /* 0x006FB65F: mov edx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x006FB664: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FB667: mov ecx, edi */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x006FB669: movdqu xmm0, xmmword ptr [ebp - 0x20] */
    xmm_st(eax, _xmm[0]); /* 0x006FB66E: movdqu xmmword ptr [eax], xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FB672: movq xmm0, qword ptr [ebp - 0x10] */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006FB677: movq qword ptr [eax + 0x10], xmm0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 0x18u; /* 0x006FB67C: add dword ptr [edi + 0xc], 0x18 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FB460); /* 0x006FB680: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB685: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB687: je 0x6fb6ea */
L_006FB689:
    ecx = MEM32(edi + 0xC); /* 0x006FB689: mov ecx, dword ptr [edi + 0xc] */
    edx = 2; /* 0x006FB68C: mov edx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x4); /* 0x006FB691: add ecx, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x006FB694: mov ax, word ptr [ebp - 4] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x006FB698: mov word ptr [ecx], ax */
    ecx = edi; /* 0x006FB69B: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 2; /* 0x006FB69D: add dword ptr [edi + 0xc], 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FB460); /* 0x006FB6A1: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB6A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB6A8: je 0x6fb6ea */
L_006FB6AA:
    eax = MEM32(edi + 0xC); /* 0x006FB6AA: mov eax, dword ptr [edi + 0xc] */
    ecx = edi; /* 0x006FB6AD: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x006FB6AF: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x24); /* 0x006FB6B2: mov edx, dword ptr [ebp + 0x24] */
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x006FB6B5: mov word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 2; /* 0x006FB6B8: add dword ptr [edi + 0xc], 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FB500); /* 0x006FB6BC: call 0x6fb500 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB6C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB6C3: je 0x6fb6ea */
L_006FB6C5:
    PUSH32(esp, 2); /* 0x006FB6C5: push 2 */
    edx = ebp + (-0x8); /* 0x006FB6C7: lea edx, [ebp - 8] */
    ecx = edi; /* 0x006FB6CA: mov ecx, edi */
    RECOMP_CALL(sub_006FB4C0); /* 0x006FB6CC: call 0x6fb4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB6D1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FB6D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB6EA; /* 0x006FB6D6: je 0x6fb6ea */
L_006FB6D8:
    eax = MEM32(edi); /* 0x006FB6D8: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0x10) = (uint16_t)(MEM16(eax + 0x10) + 1); /* 0x006FB6DA: inc word ptr [eax + 0x10] */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = 1; /* 0x006FB6DE: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006FB6E3: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB6E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FB6E5: pop ebx */
    esp = ebp; /* 0x006FB6E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB6E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB6E9: ret  */
L_006FB6EA:
    edi = POP32_VAL(esp); /* 0x006FB6EA: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB6EB: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB6EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FB6EE: pop ebx */
    esp = ebp; /* 0x006FB6EF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB6F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB6F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB700u);

L_006FB700:
    PUSH32(esp, edi); /* 0x006FB700: push edi */
    edi = ecx; /* 0x006FB701: mov edi, ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FB703: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB706: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006FB70C: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FB70D: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB713: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FB716: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB717: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB720u);

L_006FB720:
    PUSH32(esp, ebp); /* 0x006FB720: push ebp */
    ebp = esp; /* 0x006FB721: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x17Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x17Cu; /* 0x006FB723: sub esp, 0x17c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FB729: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FB72E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FB730: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FB733: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006FB734: mov ebx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FB737: xorps xmm0, xmm0 */
    PUSH32(esp, esi); /* 0x006FB73A: push esi */
    esi = MEM32(0x7CC144); /* 0x006FB73B: mov esi, dword ptr [0x7cc144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB741: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006FB743: push edi */
    PUSH32(esp, MEM32(0x926B10)); /* 0x006FB744: push dword ptr [0x926b10] */
    MEM64(ebp + (-0x16C)) = _xmm[0].u64[0]; /* 0x006FB74A: movq qword ptr [ebp - 0x16c], xmm0 */
    edi = edx; /* 0x006FB752: mov edi, edx */
    MEM32(ebp + (-0x16A)) = eax; /* 0x006FB754: mov dword ptr [ebp - 0x16a], eax */
    PUSH32(esp, 4); /* 0x006FB75A: push 4 */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x006FB75C: movsx eax, cx */
    xmm_st(ebp + (-0x17C), _xmm[0]); /* 0x006FB75F: movdqu xmmword ptr [ebp - 0x17c], xmm0 */
    PUSH32(esp, eax); /* 0x006FB767: push eax */
    MEM16(ebp + (-0x164)) = (uint16_t)(0); /* 0x006FB768: mov word ptr [ebp - 0x164], 0 */
    MEM32(ebp + (-0x17C)) = 0xFFFF0001u; /* 0x006FB771: mov dword ptr [ebp - 0x17c], 0xffff0001 */
    MEM32(ebp + (-0x170)) = 0x00C00848u; /* 0x006FB77B: mov dword ptr [ebp - 0x170], 0xc00848 */
    RECOMP_ICALL(esi); /* 0x006FB785: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x926B14)); /* 0x006FB787: push dword ptr [0x926b14] */
    MEM16(ebp + (-0x166)) = (uint16_t)(LO16(eax)); /* 0x006FB78D: mov word ptr [ebp - 0x166], ax */
    PUSH32(esp, 8); /* 0x006FB794: push 8 */
    eax = (int32_t)(int16_t)LO16(edi); /* 0x006FB796: movsx eax, di */
    PUSH32(esp, eax); /* 0x006FB799: push eax */
    RECOMP_ICALL(esi); /* 0x006FB79A: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x006FB79C: push 0x10 */
    PUSH32(esp, 1); /* 0x006FB79E: push 1 */
    MEM16(ebp + (-0x164)) = (uint16_t)(LO16(eax)); /* 0x006FB7A0: mov word ptr [ebp - 0x164], ax */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006FB7A7: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FB7AD: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB7AF: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006FB7B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB97A; /* 0x006FB7B4: je 0x6fb97a */
L_006FB7BA:
    edx = 0x1Au; /* 0x006FB7BA: mov edx, 0x1a */
    ecx = edi; /* 0x006FB7BF: mov ecx, edi */
    RECOMP_CALL(sub_006FB460); /* 0x006FB7C1: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB7C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB969; /* 0x006FB7C8: je 0x6fb969 */
L_006FB7CE:
    PUSH32(esp, 0x1Au); /* 0x006FB7CE: push 0x1a */
    eax = ebp + (-0x17C); /* 0x006FB7D0: lea eax, [ebp - 0x17c] */
    PUSH32(esp, eax); /* 0x006FB7D6: push eax */
    eax = MEM32(edi + 0x4); /* 0x006FB7D7: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0xC); /* 0x006FB7DA: add eax, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FB7DD: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006FB7DE: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 0x1Au; /* 0x006FB7E3: add dword ptr [edi + 0xc], 0x1a */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FB7E7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = 2; /* 0x006FB7EA: mov edx, 2 */
    MEM32(ebp + (-0x160)) = 0; /* 0x006FB7EF: mov dword ptr [ebp - 0x160], 0 */
    ecx = edi; /* 0x006FB7F9: mov ecx, edi */
    RECOMP_CALL(sub_006FB460); /* 0x006FB7FB: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB800: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB969; /* 0x006FB802: je 0x6fb969 */
L_006FB808:
    ecx = MEM32(edi + 0x4); /* 0x006FB808: mov ecx, dword ptr [edi + 4] */
    edx = 2; /* 0x006FB80B: mov edx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x006FB810: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x160))); /* 0x006FB813: mov ax, word ptr [ebp - 0x160] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x006FB81A: mov word ptr [ecx], ax */
    ecx = edi; /* 0x006FB81D: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 2; /* 0x006FB81F: add dword ptr [edi + 0xc], 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FB460); /* 0x006FB823: call 0x6fb460 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB828: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB969; /* 0x006FB82A: je 0x6fb969 */
L_006FB830:
    ecx = MEM32(edi + 0x4); /* 0x006FB830: mov ecx, dword ptr [edi + 4] */
    edx = ebx; /* 0x006FB833: mov edx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x006FB835: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x160))); /* 0x006FB838: mov ax, word ptr [ebp - 0x160] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x006FB83F: mov word ptr [ecx], ax */
    ecx = edi; /* 0x006FB842: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 2; /* 0x006FB844: add dword ptr [edi + 0xc], 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FB500); /* 0x006FB848: call 0x6fb500 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB84D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FB86B; /* 0x006FB84F: jne 0x6fb86b */
L_006FB851:
    ecx = edi; /* 0x006FB851: mov ecx, edi */
L_006FB853:
    RECOMP_CALL(sub_006FB700); /* 0x006FB853: call 0x6fb700 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FB858: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB859: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB85A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FB85C: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FB85D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FB860: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FB862: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FB867: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB869: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB86A: ret  */
L_006FB86B:
    PUSH32(esp, 0); /* 0x006FB86B: push 0 */
    eax = ebp + (-0x158); /* 0x006FB86D: lea eax, [ebp - 0x158] */
    MEM32(ebp + (-0x158)) = 0x154u; /* 0x006FB873: mov dword ptr [ebp - 0x158], 0x154 */
    PUSH32(esp, eax); /* 0x006FB87D: push eax */
    PUSH32(esp, 0); /* 0x006FB87E: push 0 */
    PUSH32(esp, 0x29u); /* 0x006FB880: push 0x29 */
    RECOMP_ICALL(MEM32(0x7CC7F4)); /* 0x006FB882: call dword ptr [0x7cc7f4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006FB888: push 0 */
    RECOMP_ICALL(MEM32(0x7CC810)); /* 0x006FB88A: call dword ptr [0x7cc810] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FB890: mov esi, eax */
    PUSH32(esp, 0x5Au); /* 0x006FB892: push 0x5a */
    PUSH32(esp, esi); /* 0x006FB894: push esi */
    RECOMP_ICALL(MEM32(0x7CC04C)); /* 0x006FB895: call dword ptr [0x7cc04c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006FB89B: mov ecx, eax */
    eax = 0x48u; /* 0x006FB89D: mov eax, 0x48 */
    /* test ecx, ecx */ /* 0x006FB8A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006FB8A4: push esi */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x006FB8A5: cmove ecx, eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x40)) * (int32_t)0xFFFFFFB8u); /* 0x006FB8A8: imul eax, dword ptr [ebp - 0x40], -0x48 */
    PUSH32(esp, 0); /* 0x006FB8AC: push 0 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FB8AE: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x006FB8AF: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)LO16(eax); /* 0x006FB8B1: movzx eax, ax */
    MEM32(ebp + (-0x160)) = eax; /* 0x006FB8B4: mov dword ptr [ebp - 0x160], eax */
    RECOMP_ICALL(MEM32(0x7CC814)); /* 0x006FB8BA: call dword ptr [0x7cc814] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x006FB8C0: push 2 */
    edx = ebp + (-0x160); /* 0x006FB8C2: lea edx, [ebp - 0x160] */
    ecx = edi; /* 0x006FB8C8: mov ecx, edi */
    RECOMP_CALL(sub_006FB4C0); /* 0x006FB8CA: call 0x6fb4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB8CF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FB8D2: mov ecx, edi */
    /* test eax, eax */ /* 0x006FB8D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB853; /* 0x006FB8D6: je 0x6fb853 */
L_006FB8DC:
    eax = (uint32_t)MEM16(ebp + (-0x30)); /* 0x006FB8DC: movzx eax, word ptr [ebp - 0x30] */
    edx = ebp + (-0x160); /* 0x006FB8E0: lea edx, [ebp - 0x160] */
    PUSH32(esp, 2); /* 0x006FB8E6: push 2 */
    MEM32(ebp + (-0x160)) = eax; /* 0x006FB8E8: mov dword ptr [ebp - 0x160], eax */
    RECOMP_CALL(sub_006FB4C0); /* 0x006FB8EE: call 0x6fb4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB8F3: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FB8F6: mov ecx, edi */
    /* test eax, eax */ /* 0x006FB8F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB853; /* 0x006FB8FA: je 0x6fb853 */
L_006FB900:
    SET_LO8(eax, MEM8(ebp + (-0x2C))); /* 0x006FB900: mov al, byte ptr [ebp - 0x2c] */
    edx = ebp + (-0x159); /* 0x006FB903: lea edx, [ebp - 0x159] */
    PUSH32(esp, 1); /* 0x006FB909: push 1 */
    MEM8(ebp + (-0x159)) = (uint8_t)(LO8(eax)); /* 0x006FB90B: mov byte ptr [ebp - 0x159], al */
    RECOMP_CALL(sub_006FB4C0); /* 0x006FB911: call 0x6fb4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB916: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FB919: mov ecx, edi */
    /* test eax, eax */ /* 0x006FB91B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB853; /* 0x006FB91D: je 0x6fb853 */
L_006FB923:
    SET_LO8(eax, MEM8(ebp + (-0x29))); /* 0x006FB923: mov al, byte ptr [ebp - 0x29] */
    edx = ebp + (-0x159); /* 0x006FB926: lea edx, [ebp - 0x159] */
    PUSH32(esp, 1); /* 0x006FB92C: push 1 */
    MEM8(ebp + (-0x159)) = (uint8_t)(LO8(eax)); /* 0x006FB92E: mov byte ptr [ebp - 0x159], al */
    RECOMP_CALL(sub_006FB4C0); /* 0x006FB934: call 0x6fb4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FB939: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FB93C: mov ecx, edi */
    /* test eax, eax */ /* 0x006FB93E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB853; /* 0x006FB940: je 0x6fb853 */
L_006FB946:
    edx = ebp + (-0x24); /* 0x006FB946: lea edx, [ebp - 0x24] */
    RECOMP_CALL(sub_006FB500); /* 0x006FB949: call 0x6fb500 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FB94E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FB851; /* 0x006FB950: je 0x6fb851 */
L_006FB956:
    eax = edi; /* 0x006FB956: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006FB958: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB959: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FB95A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FB95B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FB95E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FB960: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FB965: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB967: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB968: ret  */
L_006FB969:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FB969: push dword ptr [edi + 4] */
    esi = MEM32(0x7CC44C); /* 0x006FB96C: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006FB972: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006FB974: push edi */
    RECOMP_ICALL(esi); /* 0x006FB975: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FB977: add esp, 8 */
    _flag_k = FK_ADD;
L_006FB97A:
    ecx = MEM32(ebp + (-0x4)); /* 0x006FB97A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FB97D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FB97F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FB980: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FB981: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FB983: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FB984: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FB989: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FB98B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FB98C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FB990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FB990u);

L_006FB990:
    PUSH32(esp, ebp); /* 0x006FB990: push ebp */
    ebp = esp; /* 0x006FB991: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006FB993: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2C8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2C8u; /* 0x006FB996: sub esp, 0x2c8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FB99C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006FB9A1: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C4) = eax; /* 0x006FB9A3: mov dword ptr [esp + 0x2c4], eax */
    eax = ecx; /* 0x006FB9AA: mov eax, ecx */
    MEM32(esp + 0x10) = edx; /* 0x006FB9AC: mov dword ptr [esp + 0x10], edx */
    PUSH32(esp, esi); /* 0x006FB9B0: push esi */
    PUSH32(esp, edi); /* 0x006FB9B1: push edi */
    MEM32(esp + 0x8) = eax; /* 0x006FB9B2: mov dword ptr [esp + 8], eax */
    eax = MEM32(eax + 0x14); /* 0x006FB9B6: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, 0); /* 0x006FB9B9: push 0 */
    MEM32(esp + 0x18) = eax; /* 0x006FB9BB: mov dword ptr [esp + 0x18], eax */
    RECOMP_ICALL(MEM32(0x7CC084)); /* 0x006FB9BF: call dword ptr [0x7cc084] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006FB9C5: push 0 */
    MEM32(esp + 0x10) = eax; /* 0x006FB9C7: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0xD4; /* 0x006FB9CB: lea eax, [esp + 0xd4] */
    PUSH32(esp, eax); /* 0x006FB9D2: push eax */
    PUSH32(esp, 0); /* 0x006FB9D3: push 0 */
    PUSH32(esp, 0x29u); /* 0x006FB9D5: push 0x29 */
    MEM32(esp + 0xE0) = 0x1F4u; /* 0x006FB9D7: mov dword ptr [esp + 0xe0], 0x1f4 */
    RECOMP_ICALL(MEM32(0x7CC7F0)); /* 0x006FB9E2: call dword ptr [0x7cc7f0] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x70; /* 0x006FB9E8: lea eax, [esp + 0x70] */
    ecx = 0x17u; /* 0x006FB9EC: mov ecx, 0x17 */
    esi = esp + 0x268; /* 0x006FB9F1: lea esi, [esp + 0x268] */
    edi = esp + 0x70; /* 0x006FB9F8: lea edi, [esp + 0x70] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006FB9FC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006FB9FE: push eax */
    RECOMP_ICALL(MEM32(0x7CC03C)); /* 0x006FB9FF: call dword ptr [0x7cc03c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0xC); /* 0x006FBA05: mov edi, dword ptr [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FBA09: push eax */
    PUSH32(esp, edi); /* 0x006FBA0A: push edi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006FBA0B: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x34; /* 0x006FBA11: lea eax, [esp + 0x34] */
    PUSH32(esp, eax); /* 0x006FBA15: push eax */
    PUSH32(esp, edi); /* 0x006FBA16: push edi */
    RECOMP_ICALL(MEM32(0x7CC038)); /* 0x006FBA17: call dword ptr [0x7cc038] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x8); /* 0x006FBA1D: mov edx, dword ptr [esp + 8] */
    eax = MEM32(esp + 0x48); /* 0x006FBA21: mov eax, dword ptr [esp + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FBA25: inc eax */
    _flag_k = FK_INC;
    MEM32(0x926B10) = eax; /* 0x006FBA26: mov dword ptr [0x926b10], eax */
    edx = MEM32(edx + 0xC); /* 0x006FBA2B: mov edx, dword ptr [edx + 0xc] */
    ecx = edx; /* 0x006FBA2E: mov ecx, edx */
    eax = MEM32(esp + 0x34); /* 0x006FBA30: mov eax, dword ptr [esp + 0x34] */
    MEM32(0x926B14) = eax; /* 0x006FBA34: mov dword ptr [0x926b14], eax */
    esi = ecx + 0x1; /* 0x006FBA39: lea esi, [ecx + 1] */
    esp = esp; /* 0x006FBA3C: lea esp, [esp] */
L_006FBA40:
    SET_LO8(eax, MEM8(ecx)); /* 0x006FBA40: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FBA42: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006FBA43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBA40; /* 0x006FBA45: jne 0x6fba40 */
L_006FBA47:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006FBA47: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x006FBA49: lea eax, [ecx + 1] */
    ecx = 0x00804E1Cu; /* 0x006FBA4C: mov ecx, 0x804e1c */
    PUSH32(esp, eax); /* 0x006FBA51: push eax */
    PUSH32(esp, edx); /* 0x006FBA52: push edx */
    edx = 0x00804E28u; /* 0x006FBA53: mov edx, 0x804e28 */
    RECOMP_CALL(sub_00700DA0); /* 0x006FBA58: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FBA5D: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006FBA60: mov esi, eax */
    eax = esp + 0x20; /* 0x006FBA62: lea eax, [esp + 0x20] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FBA66: xorps xmm0, xmm0 */
    xmm_st(esp + 0x20, _xmm[0]); /* 0x006FBA69: movdqa xmmword ptr [esp + 0x20], xmm0 */
    PUSH32(esp, 0x400u); /* 0x006FBA6F: push 0x400 */
    PUSH32(esp, eax); /* 0x006FBA74: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006FBA75: push -1 */
    PUSH32(esp, esi); /* 0x006FBA77: push esi */
    PUSH32(esp, edi); /* 0x006FBA78: push edi */
    RECOMP_ICALL(MEM32(0x7CC898)); /* 0x006FBA79: call dword ptr [0x7cc898] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 2; /* 0x006FBA7F: add dword ptr [esp + 0x28], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esp + 0x2C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 2; /* 0x006FBA84: add dword ptr [esp + 0x2c], 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006FBA89: push edi */
    RECOMP_ICALL(MEM32(0x7CC070)); /* 0x006FBA8A: call dword ptr [0x7cc070] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006FBA90: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FBA91: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0xC); /* 0x006FBA97: mov ecx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBA9B: add esp, 4 */
    _flag_k = FK_ADD;
    edi = MEM32(esp + 0x28); /* 0x006FBA9E: mov edi, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esp + 0x20); /* 0x006FBAA2: sub edi, dword ptr [esp + 0x20] */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x2C); /* 0x006FBAA6: mov edx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x006FBAAA: add edi, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)MEM32(ecx + 0x10) * (int32_t)0x64u); /* 0x006FBAAD: imul eax, dword ptr [ecx + 0x10], 0x64 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esp + 0x24); /* 0x006FBAB1: sub edx, dword ptr [esp + 0x24] */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x006FBAB5: push dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x006FBAB8: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x006FBABB: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { edi = eax; } /* 0x006FBABD: cmovl edi, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x4Au; /* 0x006FBAC0: add edx, 0x4a */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x006FBAC3: mov ecx, edi */
    MEM32(esp + 0x14) = edx; /* 0x006FBAC5: mov dword ptr [esp + 0x14], edx */
    RECOMP_CALL(sub_006FB720); /* 0x006FBAC9: call 0x6fb720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FBACE: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBAD0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = esi; /* 0x006FBAD3: mov dword ptr [esp + 0xc], esi */
    /* test esi, esi */ /* 0x006FBAD7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FBBF8; /* 0x006FBAD9: je 0x6fbbf8 */
L_006FBADF:
    edx = MEM32(esp + 0x8); /* 0x006FBADF: mov edx, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x006FBAE3: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esp + 0x24); /* 0x006FBAE7: sub ecx, dword ptr [esp + 0x24] */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x28); /* 0x006FBAEB: mov eax, dword ptr [esp + 0x28] */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x006FBAEF: push dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x24); /* 0x006FBAF2: sub eax, dword ptr [esp + 0x24] */
    _flag_k = FK_CMP;
    edx = 0x82u; /* 0x006FBAF6: mov edx, 0x82 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006FBAFB: push -1 */
    PUSH32(esp, ecx); /* 0x006FBAFD: push ecx */
    PUSH32(esp, eax); /* 0x006FBAFE: push eax */
    PUSH32(esp, 0x10u); /* 0x006FBAFF: push 0x10 */
    PUSH32(esp, 0x10u); /* 0x006FBB01: push 0x10 */
    PUSH32(esp, ecx); /* 0x006FBB03: push ecx */
    PUSH32(esp, 0x50002080u); /* 0x006FBB04: push 0x50002080 */
    ecx = esi; /* 0x006FBB09: mov ecx, esi */
    RECOMP_CALL(sub_006FB5A0); /* 0x006FBB0B: call 0x6fb5a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x006FBB10: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FBB13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FBBE4; /* 0x006FBB15: je 0x6fbbe4 */
L_006FBB1B:
    eax = MEM32(esp + 0x8); /* 0x006FBB1B: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x006FBB1F: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFDAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFDAu; /* 0x006FBB23: add ecx, -0x26 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = ecx; /* 0x006FBB26: mov dword ptr [esp + 0x10], ecx */
    esi = MEM32(eax + 0x10); /* 0x006FBB2A: mov esi, dword ptr [eax + 0x10] */
    eax = (uint32_t)((int32_t)esi * (int32_t)0x64u); /* 0x006FBB2D: imul eax, esi, 0x64 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006FBB30: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006FBB32: dec esi */
    _flag_k = FK_DEC;
    MEM32(esp + 0x8) = edi; /* 0x006FBB33: mov dword ptr [esp + 8], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_006FBB8E; /* 0x006FBB37: js 0x6fbb8e */
L_006FBB39:
    edx = MEM32(esp + 0x14); /* 0x006FBB39: mov edx, dword ptr [esp + 0x14] */
    eax = esi + esi * 2; /* 0x006FBB3D: lea eax, [esi + esi*2] */
    edi = edx + eax * 4; /* 0x006FBB40: lea edi, [edx + eax*4] */
    edx = 0x50000001u; /* 0x006FBB43: mov edx, 0x50000001 */
L_006FBB48:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006FBB48: push dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi); /* 0x006FBB4B: movzx eax, byte ptr [edi] */
    PUSH32(esp, esi); /* 0x006FBB4E: push esi */
    PUSH32(esp, 0x1Au); /* 0x006FBB4F: push 0x1a */
    PUSH32(esp, 0x58u); /* 0x006FBB51: push 0x58 */
    PUSH32(esp, ecx); /* 0x006FBB53: push ecx */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006FBB54: push dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x006FBB58: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x50000000u; /* 0x006FBB5B: mov eax, 0x50000000 */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = edx; } /* 0x006FBB60: cmovne eax, edx */
    edx = 0x80u; /* 0x006FBB63: mov edx, 0x80 */
    PUSH32(esp, ecx); /* 0x006FBB68: push ecx */
    ecx = MEM32(esp + 0x28); /* 0x006FBB69: mov ecx, dword ptr [esp + 0x28] */
    PUSH32(esp, eax); /* 0x006FBB6D: push eax */
    RECOMP_CALL(sub_006FB5A0); /* 0x006FBB6E: call 0x6fb5a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x006FBB73: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FBB76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FBBE0; /* 0x006FBB78: je 0x6fbbe0 */
L_006FBB7A:
    _flag_a = (uint32_t)(MEM32(esp + 0x8)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x8) = MEM32(esp + 0x8) + 0x64u; /* 0x006FBB7A: add dword ptr [esp + 8], 0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0xCu; /* 0x006FBB7F: sub edi, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006FBB82: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(esp + 0x10); /* 0x006FBB83: mov ecx, dword ptr [esp + 0x10] */
    edx = 0x50000001u; /* 0x006FBB87: mov edx, 0x50000001 */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_006FBB48; /* 0x006FBB8C: jns 0x6fbb48 */
L_006FBB8E:
    esi = MEM32(esp + 0xC); /* 0x006FBB8E: mov esi, dword ptr [esp + 0xc] */
    PUSH32(esp, 0); /* 0x006FBB92: push 0 */
    PUSH32(esp, 0x006FB430u); /* 0x006FBB94: push 0x6fb430 */
    PUSH32(esp, 0); /* 0x006FBB99: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x006FBB9B: push dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006FBB9D: push 0 */
    RECOMP_ICALL(MEM32(0x7CC7EC)); /* 0x006FBB9F: call dword ptr [0x7cc7ec] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x14); /* 0x006FBBA5: mov ecx, dword ptr [esp + 0x14] */
    edi = MEM32(0x7CC44C); /* 0x006FBBA9: mov edi, dword ptr [0x7cc44c] */
    eax = eax + eax * 2; /* 0x006FBBAF: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 4 + 0x4); /* 0x006FBBB2: mov eax, dword ptr [ecx + eax*4 + 4] */
    ecx = MEM32(esp + 0x18); /* 0x006FBBB6: mov ecx, dword ptr [esp + 0x18] */
    MEM32(ecx) = eax; /* 0x006FBBBA: mov dword ptr [ecx], eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FBBBC: push dword ptr [esi + 4] */
    RECOMP_ICALL(edi); /* 0x006FBBBF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBBC1: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006FBBC4: push esi */
    RECOMP_ICALL(edi); /* 0x006FBBC5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBBC7: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FBBCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FBBCC: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBBCD: pop esi */
    ecx = MEM32(esp + 0x2C4); /* 0x006FBBCE: mov ecx, dword ptr [esp + 0x2c4] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FBBD5: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FBBD7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FBBDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBBDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBBDF: ret  */
L_006FBBE0:
    esi = MEM32(esp + 0xC); /* 0x006FBBE0: mov esi, dword ptr [esp + 0xc] */
L_006FBBE4:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FBBE4: push dword ptr [esi + 4] */
    edi = MEM32(0x7CC44C); /* 0x006FBBE7: mov edi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(edi); /* 0x006FBBED: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBBEF: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006FBBF2: push esi */
    RECOMP_ICALL(edi); /* 0x006FBBF3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBBF5: add esp, 4 */
    _flag_k = FK_ADD;
L_006FBBF8:
    ecx = MEM32(esp + 0x2CC); /* 0x006FBBF8: mov ecx, dword ptr [esp + 0x2cc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FBBFF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FBC02: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBC03: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FBC04: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FBC06: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FBC0B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBC0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBC0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBC10u);

L_006FBC10:
    PUSH32(esp, ebp); /* 0x006FBC10: push ebp */
    ebp = esp; /* 0x006FBC11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FBC13: push ecx */
    PUSH32(esp, edi); /* 0x006FBC14: push edi */
    edi = ecx; /* 0x006FBC15: mov edi, ecx */
    /* test edi, edi */ /* 0x006FBC17: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FBC88; /* 0x006FBC19: je 0x6fbc88 */
L_006FBC1B:
    edx = edi; /* 0x006FBC1B: mov edx, edi */
    ecx = edx + 0x1; /* 0x006FBC1D: lea ecx, [edx + 1] */
L_006FBC20:
    SET_LO8(eax, MEM8(edx)); /* 0x006FBC20: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006FBC22: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006FBC23: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBC20; /* 0x006FBC25: jne 0x6fbc20 */
L_006FBC27:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x006FBC27: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006FBC88; /* 0x006FBC29: je 0x6fbc88 */
L_006FBC2B:
    PUSH32(esp, esi); /* 0x006FBC2B: push esi */
    PUSH32(esp, MEM32(0x87CC14)); /* 0x006FBC2C: push dword ptr [0x87cc14] */
    PUSH32(esp, MEM32(0x87CC10)); /* 0x006FBC32: push dword ptr [0x87cc10] */
    PUSH32(esp, edi); /* 0x006FBC38: push edi */
    RECOMP_ICALL(MEM32(0x7CC178)); /* 0x006FBC39: call dword ptr [0x7cc178] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FBC3F: mov esi, eax */
    /* test esi, esi */ /* 0x006FBC41: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FBC61; /* 0x006FBC43: je 0x6fbc61 */
L_006FBC45:
    /* cmp esi, MEM32(0x87CC14) */ /* 0x006FBC45: cmp esi, dword ptr [0x87cc14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x87CC14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006FBC7D; /* 0x006FBC4B: jbe 0x6fbc7d */
L_006FBC4D:
    PUSH32(esp, esi); /* 0x006FBC4D: push esi */
    PUSH32(esp, MEM32(0x87CC10)); /* 0x006FBC4E: push dword ptr [0x87cc10] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006FBC54: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FBC5A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FBC5D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBC69; /* 0x006FBC5F: jne 0x6fbc69 */
L_006FBC61:
    esi = POP32_VAL(esp); /* 0x006FBC61: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FBC62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FBC64: pop edi */
    esp = ebp; /* 0x006FBC65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBC67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBC68: ret  */
L_006FBC69:
    PUSH32(esp, esi); /* 0x006FBC69: push esi */
    PUSH32(esp, eax); /* 0x006FBC6A: push eax */
    PUSH32(esp, edi); /* 0x006FBC6B: push edi */
    MEM32(0x87CC10) = eax; /* 0x006FBC6C: mov dword ptr [0x87cc10], eax */
    MEM32(0x87CC14) = esi; /* 0x006FBC71: mov dword ptr [0x87cc14], esi */
    RECOMP_ICALL(MEM32(0x7CC178)); /* 0x006FBC77: call dword ptr [0x7cc178] */
    RECOMP_FLAGS_IN();
L_006FBC7D:
    eax = MEM32(0x87CC10); /* 0x006FBC7D: mov eax, dword ptr [0x87cc10] */
    esi = POP32_VAL(esp); /* 0x006FBC82: pop esi */
    edi = POP32_VAL(esp); /* 0x006FBC83: pop edi */
    esp = ebp; /* 0x006FBC84: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBC86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBC87: ret  */
L_006FBC88:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FBC88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FBC8A: pop edi */
    esp = ebp; /* 0x006FBC8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBC8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBC8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBC90u);

L_006FBC90:
    PUSH32(esp, ebx); /* 0x006FBC90: push ebx */
    PUSH32(esp, esi); /* 0x006FBC91: push esi */
    PUSH32(esp, edi); /* 0x006FBC92: push edi */
    ebx = ecx; /* 0x006FBC93: mov ebx, ecx */
    esi = 0x1505u; /* 0x006FBC95: mov esi, 0x1505 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FBC9A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x006FBC9C: lea esp, [esp] */
L_006FBCA0:
    _xmm[0].u64[0] = MEM32(ebx + edi * 8); _xmm[0].u64[1] = 0; /* 0x006FBCA0: movss xmm0, dword ptr [ebx + edi*8] */
    RECOMP_CALL(sub_007803B0); /* 0x006FBCA5: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebx + edi * 8 + 0x4); _xmm[0].u64[1] = 0; /* 0x006FBCAA: movss xmm0, dword ptr [ebx + edi*8 + 4] */
    ecx = eax; /* 0x006FBCB0: mov ecx, eax */
    eax = esi; /* 0x006FBCB2: mov eax, esi */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x006FBCB4: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x006FBCB4: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006FBCB7: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006FBCB9: add ecx, eax */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x006FBCBB: mov esi, ecx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x006FBCBD: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x006FBCBD: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x006FBCC0: add esi, ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_007803B0); /* 0x006FBCC2: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006FBCC7: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006FBCC8: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, 0x40u */ /* 0x006FBCCA: cmp edi, 0x40 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FBCA0; /* 0x006FBCCD: jl 0x6fbca0 */
L_006FBCCF:
    edi = POP32_VAL(esp); /* 0x006FBCCF: pop edi */
    eax = esi; /* 0x006FBCD0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006FBCD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBCD3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBCD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBCE0u);

L_006FBCE0:
    PUSH32(esp, ebp); /* 0x006FBCE0: push ebp */
    ebp = esp; /* 0x006FBCE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FBCE3: push ecx */
    PUSH32(esp, ebx); /* 0x006FBCE4: push ebx */
    PUSH32(esp, esi); /* 0x006FBCE5: push esi */
    PUSH32(esp, edi); /* 0x006FBCE6: push edi */
    edi = ecx; /* 0x006FBCE7: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x006FBCE9: mov dword ptr [ebp - 4], edx */
    ebx = MEM32(edi + 0x201C); /* 0x006FBCEC: mov ebx, dword ptr [edi + 0x201c] */
    esi = (uint32_t)((int32_t)ebx * (int32_t)0x204u); /* 0x006FBCF2: imul esi, ebx, 0x204 */
    eax = esi + 0x204; /* 0x006FBCF8: lea eax, [esi + 0x204] */
    PUSH32(esp, eax); /* 0x006FBCFE: push eax */
    PUSH32(esp, MEM32(edi + 0x2020)); /* 0x006FBCFF: push dword ptr [edi + 0x2020] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006FBD05: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FBD0B: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FBD0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBD26; /* 0x006FBD10: jne 0x6fbd26 */
L_006FBD12:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FBD12: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FBD17: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBD1C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FBD1F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBD20: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBD21: pop ebx */
    esp = ebp; /* 0x006FBD22: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBD24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBD25: ret  */
L_006FBD26:
    PUSH32(esp, 0x200u); /* 0x006FBD26: push 0x200 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006FBD2B: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006FBD2E: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x2020) = eax; /* 0x006FBD30: mov dword ptr [edi + 0x2020], eax */
    PUSH32(esp, esi); /* 0x006FBD36: push esi */
    RECOMP_CALL(sub_00780838); /* 0x006FBD37: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FBD3C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006FBD3F: mov ecx, esi */
    RECOMP_CALL(sub_006FBC90); /* 0x006FBD41: call 0x6fbc90 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x200) = eax; /* 0x006FBD46: mov dword ptr [esi + 0x200], eax */
    eax = ebx; /* 0x006FBD4C: mov eax, ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x201C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x201C) = MEM32(edi + 0x201C) + 1; /* 0x006FBD4E: inc dword ptr [edi + 0x201c] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x006FBD54: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBD55: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBD56: pop ebx */
    esp = ebp; /* 0x006FBD57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBD59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBD5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBD60u);

L_006FBD60:
    PUSH32(esp, ebp); /* 0x006FBD60: push ebp */
    ebp = esp; /* 0x006FBD61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006FBD63: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FBD66: push ebx */
    PUSH32(esp, esi); /* 0x006FBD67: push esi */
    PUSH32(esp, edi); /* 0x006FBD68: push edi */
    eax = edx; /* 0x006FBD69: mov eax, edx */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x006FBD6B: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006FBD6E: mov dword ptr [ebp - 0x10], eax */
    /* test ecx, ecx */ /* 0x006FBD71: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBE50; /* 0x006FBD73: jne 0x6fbe50 */
L_006FBD79:
    eax = MEM32(0x87CC18); /* 0x006FBD79: mov eax, dword ptr [0x87cc18] */
    /* test eax, eax */ /* 0x006FBD7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBD96; /* 0x006FBD80: jne 0x6fbd96 */
L_006FBD82:
    PUSH32(esp, 0x0080670Cu); /* 0x006FBD82: push 0x80670c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FBD87: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBD8C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FBD8F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBD90: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBD91: pop ebx */
    esp = ebp; /* 0x006FBD92: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBD94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBD95: ret  */
L_006FBD96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006FBD96: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006FBD98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FBE3D; /* 0x006FBD9A: jle 0x6fbe3d */
L_006FBDA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FBDA0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x006FBDA2: mov dword ptr [ebp - 8], esi */
L_006FBDA5:
    ecx = MEM32(0x92C61C); /* 0x006FBDA5: mov ecx, dword ptr [0x92c61c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006FBDAB: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x006FBDAD: mov dword ptr [ebp - 4], ecx */
    edi = MEM32(ecx + 0x201C); /* 0x006FBDB0: mov edi, dword ptr [ecx + 0x201c] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x204u); /* 0x006FBDB6: imul eax, edi, 0x204 */
    MEM32(ebp + (-0xC)) = eax; /* 0x006FBDBC: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x204u; /* 0x006FBDBF: add eax, 0x204 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FBDC4: push eax */
    PUSH32(esp, MEM32(ecx + 0x2020)); /* 0x006FBDC5: push dword ptr [ecx + 0x2020] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006FBDCB: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006FBDD1: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FBDD3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006FBDD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FBDEB; /* 0x006FBDD8: jne 0x6fbdeb */
L_006FBDDA:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FBDDA: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FBDDF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FBDE4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006FBDE7: mov edi, eax */
    goto L_006FBE23; /* 0x006FBDE9: jmp 0x6fbe23 */
L_006FBDEB:
    eax = MEM32(ebp + (-0x4)); /* 0x006FBDEB: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0xC)); /* 0x006FBDEE: mov esi, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x200u); /* 0x006FBDF1: push 0x200 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006FBDF6: push dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x006FBDF9: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(eax + 0x2020) = ecx; /* 0x006FBDFB: mov dword ptr [eax + 0x2020], ecx */
    PUSH32(esp, esi); /* 0x006FBE01: push esi */
    RECOMP_CALL(sub_00780838); /* 0x006FBE02: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FBE07: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006FBE0A: mov ecx, esi */
    RECOMP_CALL(sub_006FBC90); /* 0x006FBE0C: call 0x6fbc90 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x200) = eax; /* 0x006FBE11: mov dword ptr [esi + 0x200], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006FBE17: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x8)); /* 0x006FBE1A: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x201C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x201C) = MEM32(eax + 0x201C) + 1; /* 0x006FBE1D: inc dword ptr [eax + 0x201c] */
    _flag_k = FK_INC;
L_006FBE23:
    /* test edi, edi */ /* 0x006FBE23: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FBE46; /* 0x006FBE25: js 0x6fbe46 */
L_006FBE27:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006FBE27: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2028u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2028u; /* 0x006FBE28: add esi, 0x2028 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x006FBE2E: mov dword ptr [ebp - 8], esi */
    /* cmp ebx, MEM32(0x87CC18) */ /* 0x006FBE31: cmp ebx, dword ptr [0x87cc18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x87CC18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FBDA5; /* 0x006FBE37: jl 0x6fbda5 */
L_006FBE3D:
    eax = edi; /* 0x006FBE3D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006FBE3F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBE40: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBE41: pop ebx */
    esp = ebp; /* 0x006FBE42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBE44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBE45: ret  */
L_006FBE46:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FBE46: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FBE49: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBE4A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBE4B: pop ebx */
    esp = ebp; /* 0x006FBE4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBE4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBE4F: ret  */
L_006FBE50:
    RECOMP_CALL(sub_006FBCE0); /* 0x006FBE50: call 0x6fbce0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FBE55: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBE56: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBE57: pop ebx */
    esp = ebp; /* 0x006FBE58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBE5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBE5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBE60u);

L_006FBE60:
    PUSH32(esp, ebp); /* 0x006FBE60: push ebp */
    ebp = esp; /* 0x006FBE61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006FBE63: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FBE66: push ebx */
    PUSH32(esp, esi); /* 0x006FBE67: push esi */
    ebx = edx; /* 0x006FBE68: mov ebx, edx */
    MEM32(ebp + (-0xC)) = 0; /* 0x006FBE6A: mov dword ptr [ebp - 0xc], 0 */
    _xmm[0] = _xmm[2]; /* 0x006FBE71: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x8)) = 0; /* 0x006FBE74: mov dword ptr [ebp - 8], 0 */
    esi = ebx; /* 0x006FBE7B: mov esi, ebx */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x006FBE7D: movss dword ptr [ebp - 4], xmm0 */
    PUSH32(esp, edi); /* 0x006FBE82: push edi */
    edi = ecx + 0x4; /* 0x006FBE83: lea edi, [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x006FBE86: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_006FBE90; /* 0x006FBE88: jmp 0x6fbe90 */
L_006FBE90:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x006FBE90: cvtss2sd xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FBE94: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FBE97: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FBE9C: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBEA1: movss xmm0, dword ptr [edi - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBEA6: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x006FBEA9: movsd qword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBEAE: movss xmm0, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x006FBEB3: fmul qword ptr [ebp - 0x18] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBEB6: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x006FBEB9: fstp qword ptr [ebp - 0x20] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FBEBC: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FBEC1: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x006FBEC6: movss xmm0, dword ptr [edi] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBECA: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x006FBECD: fstp qword ptr [ebp - 0x18] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x006FBED0: movsd xmm1, qword ptr [ebp - 0x18] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FBED5: mulsd xmm1, xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0x20)); _xmm[0].u64[1] = 0; /* 0x006FBED9: movsd xmm0, qword ptr [ebp - 0x20] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006FBEDE: subsd xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FBEE2: cvtpd2ps xmm0, xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006FBEE6: movss dword ptr [ebp - 0x14], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBEEB: movss xmm0, dword ptr [ebp - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBEF0: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FBEF3: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FBEF8: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x006FBEFD: movss xmm0, dword ptr [edi] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBF01: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x20)) = _xmm[0].u64[0]; /* 0x006FBF04: movsd qword ptr [ebp - 0x20], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBF09: movss xmm0, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x006FBF0E: fmul qword ptr [ebp - 0x20] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBF11: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x006FBF14: fstp qword ptr [ebp - 0x28] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FBF17: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FBF1C: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBF21: movss xmm0, dword ptr [edi - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x006FBF26: mov eax, dword ptr [ebp - 8] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBF29: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x006FBF2C: fstp qword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x20)); _xmm[1].u64[1] = 0; /* 0x006FBF2F: movsd xmm1, qword ptr [ebp - 0x20] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FBF34: mulsd xmm1, xmm0 */
    { double _s = sse_f64(MEM64(ebp + (-0x28))); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FBF38: addsd xmm1, qword ptr [ebp - 0x28] */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FBF3D: cvtpd2ps xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x14)); _xmm[1].u64[1] = 0; /* 0x006FBF41: movss xmm1, dword ptr [ebp - 0x14] */
    { float _s = sse_f32(MEM32(esi + edi)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FBF46: subss xmm0, dword ptr [esi + edi] */
    { float _s = sse_f32(MEM32(ebx + eax * 8)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FBF4B: subss xmm1, dword ptr [ebx + eax*8] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FBF50: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FBF54: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FBF58: addss xmm1, xmm0 */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FBF5C: cvtps2pd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FBF5F: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FBF64: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x006FBF69: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FBF6C: add esp, 8 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FBF6F: movss xmm0, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FBF74: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x006FBF75: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x006FBF78: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x006FBF7B: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x006FBF7E: mov dword ptr [ebp - 8], eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x006FBF81: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x006FBF84: fstp dword ptr [ebp - 0xc] */
    /* cmp eax, 0x40u */ /* 0x006FBF87: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FBE90; /* 0x006FBF8A: jl 0x6fbe90 */
L_006FBF90:
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FBF90: movss xmm0, dword ptr [ebp - 0xc] */
    { float _s = sse_f32(MEM32(0x808B7C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FBF95: mulss xmm0, dword ptr [0x808b7c] */
    edi = POP32_VAL(esp); /* 0x006FBF9D: pop edi */
    esi = POP32_VAL(esp); /* 0x006FBF9E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FBF9F: pop ebx */
    esp = ebp; /* 0x006FBFA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FBFA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FBFA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FBFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FBFB0u);

L_006FBFB0:
    PUSH32(esp, ebp); /* 0x006FBFB0: push ebp */
    ebp = esp; /* 0x006FBFB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006FBFB3: sub esp, 0x44 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = MEM64(0x8098A0); _xmm[0].u64[1] = 0; /* 0x006FBFB6: movsd xmm0, qword ptr [0x8098a0] */
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x006FBFBE: movsd qword ptr [ebp - 0x28], xmm0 */
    _xmm[0].u64[0] = MEM64(0x808F30); _xmm[0].u64[1] = 0; /* 0x006FBFC3: movsd xmm0, qword ptr [0x808f30] */
    PUSH32(esp, ebx); /* 0x006FBFCB: push ebx */
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x006FBFCC: movsd qword ptr [ebp - 0x30], xmm0 */
    ebx = edx; /* 0x006FBFD1: mov ebx, edx */
    _xmm[0].u64[0] = MEM32(0x809800); _xmm[0].u64[1] = 0; /* 0x006FBFD3: movss xmm0, dword ptr [0x809800] */
    PUSH32(esp, esi); /* 0x006FBFDB: push esi */
    esi = ecx; /* 0x006FBFDC: mov esi, ecx */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x006FBFDE: movss dword ptr [ebp - 4], xmm0 */
    PUSH32(esp, edi); /* 0x006FBFE3: push edi */
    _xmm[2] = _xmm[0]; /* 0x006FBFE4: movaps xmm2, xmm0 */
    MEM32(ebp + (-0x18)) = esi; /* 0x006FBFE7: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_006FBE60); /* 0x006FBFEA: call 0x6fbe60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x006FBFEF: movss dword ptr [ebp - 0xc], xmm0 */
    edx = ebx; /* 0x006FBFF4: mov edx, ebx */
    _xmm[0].u64[0] = MEM32(0x808BD0); _xmm[0].u64[1] = 0; /* 0x006FBFF6: movss xmm0, dword ptr [0x808bd0] */
    ecx = esi; /* 0x006FBFFE: mov ecx, esi */
    _xmm[2] = _xmm[0]; /* 0x006FC000: movaps xmm2, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[0].u32[0]; /* 0x006FC003: movss dword ptr [ebp - 8], xmm0 */
    RECOMP_CALL(sub_006FBE60); /* 0x006FC008: call 0x6fbe60 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(0x8098D8); _xmm[1].u64[1] = 0; /* 0x006FC00D: movsd xmm1, qword ptr [0x8098d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC015: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC018: movss dword ptr [ebp - 0x10], xmm0 */
    MEM64(esp) = _xmm[1].u64[0]; /* 0x006FC01D: movsd qword ptr [esp], xmm1 */
    RECOMP_CALL(sub_0077F360); /* 0x006FC022: call 0x77f360 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x006FC027: fstp qword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x20)); _xmm[0].u64[1] = 0; /* 0x006FC02A: movsd xmm0, qword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC02F: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808D28))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC032: comisd xmm0, xmmword ptr [0x808d28] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC24C; /* 0x006FC03A: jbe 0x6fc24c */
L_006FC040:
    _xmm[3].u64[0] = MEM64(0x808EB8); _xmm[3].u64[1] = 0; /* 0x006FC040: movsd xmm3, qword ptr [0x808eb8] */
    _xmm[4].u64[0] = MEM64(0x808E60); _xmm[4].u64[1] = 0; /* 0x006FC048: movsd xmm4, qword ptr [0x808e60] */
L_006FC050:
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC050: movss xmm0, dword ptr [ebp - 0xc] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x10)); _xmm[2].u64[1] = 0; /* 0x006FC055: movss xmm2, dword ptr [ebp - 0x10] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC05A: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    _xmm[1].u64[0] = MEM32(ebp + (-0x8)); _xmm[1].u64[1] = 0; /* 0x006FC05D: movss xmm1, dword ptr [ebp - 8] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC1CA; /* 0x006FC062: jbe 0x6fc1ca */
L_006FC068:
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[2].f64[0] = _a; _xmm[2].f64[1] = _b; } /* 0x006FC068: cvtps2pd xmm2, xmm1 */
    edi = esi + 0x4; /* 0x006FC06B: lea edi, [esi + 4] */
    esi = ebx; /* 0x006FC06E: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x18)); /* 0x006FC070: sub esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = 0; /* 0x006FC073: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x006FC07A: mov dword ptr [ebp - 0xc], 0 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x006FC081: movss xmm1, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006FC086: movss dword ptr [ebp - 8], xmm1 */
    _xmm[1].u64[0] = MEM64(ebp + (-0x28)); _xmm[1].u64[1] = 0; /* 0x006FC08B: movsd xmm1, qword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC090: movss dword ptr [ebp - 0x10], xmm0 */
    _xmm[0] = _xmm[2]; /* 0x006FC095: movaps xmm0, xmm2 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006FC098: mulsd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC09C: mulsd xmm1, xmm3 */
    MEM64(ebp + (-0x30)) = _xmm[2].u64[0]; /* 0x006FC0A0: movsd qword ptr [ebp - 0x30], xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FC0A5: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC0A9: cvtpd2ps xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x006FC0AD: movss dword ptr [ebp - 4], xmm0 */
    goto L_006FC0B9; /* 0x006FC0B2: jmp 0x6fc0b9 */
L_006FC0B4:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC0B4: movss xmm0, dword ptr [ebp - 4] */
L_006FC0B9:
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC0B9: cvtps2pd xmm0, xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC0BC: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC0BF: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FC0C4: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC0C9: movss xmm0, dword ptr [edi - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC0CE: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x20)) = _xmm[0].u64[0]; /* 0x006FC0D1: movsd qword ptr [ebp - 0x20], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC0D6: movss xmm0, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x006FC0DB: fmul qword ptr [ebp - 0x20] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC0DE: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x006FC0E1: fstp qword ptr [ebp - 0x38] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC0E4: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FC0E9: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x006FC0EE: movss xmm0, dword ptr [edi] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC0F2: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x006FC0F5: fstp qword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x20)); _xmm[1].u64[1] = 0; /* 0x006FC0F8: movsd xmm1, qword ptr [ebp - 0x20] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC0FD: mulsd xmm1, xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0x38)); _xmm[0].u64[1] = 0; /* 0x006FC101: movsd xmm0, qword ptr [ebp - 0x38] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006FC106: subsd xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC10A: cvtpd2ps xmm0, xmm0 */
    MEM32(ebp + (-0x1C)) = _xmm[0].u32[0]; /* 0x006FC10E: movss dword ptr [ebp - 0x1c], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC113: movss xmm0, dword ptr [ebp - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC118: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC11B: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FC120: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x006FC125: movss xmm0, dword ptr [edi] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC129: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x38)) = _xmm[0].u64[0]; /* 0x006FC12C: movsd qword ptr [ebp - 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC131: movss xmm0, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(ebp + (-0x38)); /* 0x006FC136: fmul qword ptr [ebp - 0x38] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC139: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x006FC13C: fstp qword ptr [ebp - 0x40] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC13F: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FC144: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC149: movss xmm0, dword ptr [edi - 4] */
    eax = MEM32(ebp + (-0xC)); /* 0x006FC14E: mov eax, dword ptr [ebp - 0xc] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC151: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x006FC154: fstp qword ptr [ebp - 0x38] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x38)); _xmm[1].u64[1] = 0; /* 0x006FC157: movsd xmm1, qword ptr [ebp - 0x38] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC15C: mulsd xmm1, xmm0 */
    { double _s = sse_f64(MEM64(ebp + (-0x40))); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FC160: addsd xmm1, qword ptr [ebp - 0x40] */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC165: cvtpd2ps xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x1C)); _xmm[1].u64[1] = 0; /* 0x006FC169: movss xmm1, dword ptr [ebp - 0x1c] */
    { float _s = sse_f32(MEM32(esi + edi)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC16E: subss xmm0, dword ptr [esi + edi] */
    { float _s = sse_f32(MEM32(ebx + eax * 8)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC173: subss xmm1, dword ptr [ebx + eax*8] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC178: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FC17C: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FC180: addss xmm1, xmm0 */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC184: cvtps2pd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC187: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FC18C: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x006FC191: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC194: add esp, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x006FC197: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x006FC19A: fld dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FC19D: inc eax */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x006FC19E: fadd dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x006FC1A1: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x006FC1A4: mov dword ptr [ebp - 0xc], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x006FC1A7: fstp dword ptr [ebp - 0x14] */
    /* cmp eax, 0x40u */ /* 0x006FC1AA: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC0B4; /* 0x006FC1AD: jl 0x6fc0b4 */
L_006FC1B3:
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x006FC1B3: movss xmm0, dword ptr [ebp - 0x14] */
    { float _s = sse_f32(MEM32(0x808B7C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC1B8: mulss xmm0, dword ptr [0x808b7c] */
    esi = MEM32(ebp + (-0x18)); /* 0x006FC1C0: mov esi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x006FC1C3: movss dword ptr [ebp - 0xc], xmm0 */
    goto L_006FC20C; /* 0x006FC1C8: jmp 0x6fc20c */
L_006FC1CA:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC1CA: movss xmm0, dword ptr [ebp - 4] */
    edx = ebx; /* 0x006FC1CF: mov edx, ebx */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC1D1: cvtps2pd xmm0, xmm0 */
    ecx = esi; /* 0x006FC1D4: mov ecx, esi */
    MEM32(ebp + (-0x4)) = _xmm[1].u32[0]; /* 0x006FC1D6: movss dword ptr [ebp - 4], xmm1 */
    _xmm[1].u64[0] = MEM64(ebp + (-0x30)); _xmm[1].u64[1] = 0; /* 0x006FC1DB: movsd xmm1, qword ptr [ebp - 0x30] */
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x006FC1E0: movsd qword ptr [ebp - 0x28], xmm0 */
    { double _s = _xmm[4].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006FC1E5: mulsd xmm0, xmm4 */
    { double _s = _xmm[3].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC1E9: mulsd xmm1, xmm3 */
    MEM32(ebp + (-0xC)) = _xmm[2].u32[0]; /* 0x006FC1ED: movss dword ptr [ebp - 0xc], xmm2 */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FC1F2: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC1F6: cvtpd2ps xmm0, xmm1 */
    _xmm[2] = _xmm[0]; /* 0x006FC1FA: movaps xmm2, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[0].u32[0]; /* 0x006FC1FD: movss dword ptr [ebp - 8], xmm0 */
    RECOMP_CALL(sub_006FBE60); /* 0x006FC202: call 0x6fbe60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC207: movss dword ptr [ebp - 0x10], xmm0 */
L_006FC20C:
    _xmm[0].u64[0] = MEM64(ebp + (-0x28)); _xmm[0].u64[1] = 0; /* 0x006FC20C: movsd xmm0, qword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC211: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(ebp + (-0x30))); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006FC214: subsd xmm0, qword ptr [ebp - 0x30] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC219: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F360); /* 0x006FC21E: call 0x77f360 */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM64(0x808EB8); _xmm[3].u64[1] = 0; /* 0x006FC223: movsd xmm3, qword ptr [0x808eb8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC22B: add esp, 8 */
    _flag_k = FK_ADD;
    _xmm[4].u64[0] = MEM64(0x808E60); _xmm[4].u64[1] = 0; /* 0x006FC22E: movsd xmm4, qword ptr [0x808e60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x006FC236: fstp qword ptr [ebp - 0x40] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x40)); _xmm[0].u64[1] = 0; /* 0x006FC239: movsd xmm0, qword ptr [ebp - 0x40] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808D28))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC23E: comisd xmm0, xmmword ptr [0x808d28] */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006FC050; /* 0x006FC246: ja 0x6fc050 */
L_006FC24C:
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC24C: movss xmm0, dword ptr [ebp - 0xc] */
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x006FC251: movss xmm1, dword ptr [ebp - 0x10] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC256: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006FC25E; /* 0x006FC259: ja 0x6fc25e */
L_006FC25B:
    _xmm[0] = _xmm[1]; /* 0x006FC25B: movaps xmm0, xmm1 */
L_006FC25E:
    edi = POP32_VAL(esp); /* 0x006FC25E: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC25F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FC260: pop ebx */
    esp = ebp; /* 0x006FC261: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC263: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC264: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC270u);

L_006FC270:
    PUSH32(esp, ebp); /* 0x006FC270: push ebp */
    ebp = esp; /* 0x006FC271: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006FC273: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FC276: push ebx */
    ebx = ecx; /* 0x006FC277: mov ebx, ecx */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006FC279: xorps xmm1, xmm1 */
    PUSH32(esp, esi); /* 0x006FC27C: push esi */
    PUSH32(esp, edi); /* 0x006FC27D: push edi */
    edi = edx; /* 0x006FC27E: mov edi, edx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006FC280: mov dword ptr [ebp - 0xc], ebx */
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x006FC283: movss xmm0, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FC287: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC289: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    MEM32(ebp + (-0x20)) = edi; /* 0x006FC28C: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC28F: movss dword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0x4)) = _xmm[1].u32[0]; /* 0x006FC294: movss dword ptr [ebp - 4], xmm1 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006FC304; /* 0x006FC299: jb 0x6fc304 */
L_006FC29B:
    /* cmp MEM32(ebx + 0x4), 1 */ /* 0x006FC29B: cmp dword ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006FC304; /* 0x006FC29F: jle 0x6fc304 */
L_006FC2A1:
    edi = ebx + 0x14; /* 0x006FC2A1: lea edi, [ebx + 0x14] */
    esi = 1; /* 0x006FC2A4: mov esi, 1 */
    esp = esp; /* 0x006FC2A9: lea esp, [esp] */
L_006FC2B0:
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x006FC2B0: movss xmm0, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC2B4: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = MEM32(edi + (-0x4)); _xmm[1].u64[1] = 0; /* 0x006FC2B7: movss xmm1, dword ptr [edi - 4] */
    { float _s = sse_f32(MEM32(edi + (-0x8))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC2BC: subss xmm0, dword ptr [edi - 8] */
    { float _s = sse_f32(MEM32(edi + (-0xC))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC2C1: subss xmm1, dword ptr [edi - 0xc] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC2C6: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FC2CA: mulss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FC2CE: addss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC2D2: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC2D5: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FC2DA: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x006FC2DF: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x006FC2E2: fld dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FC2E5: inc esi */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x006FC2E6: fadd dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC2E9: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x006FC2EC: add edi, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x006FC2EF: fstp dword ptr [ebp - 0x10] */
    /* cmp esi, MEM32(ebx + 0x4) */ /* 0x006FC2F2: cmp esi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC2B0; /* 0x006FC2F5: jl 0x6fc2b0 */
L_006FC2F7:
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FC2F7: movss xmm0, dword ptr [ebp - 0x10] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006FC2FC: xorps xmm1, xmm1 */
    edi = MEM32(ebp + (-0x20)); /* 0x006FC2FF: mov edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FC302: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FC304:
    /* cmp MEM32(ebx + 0x4), 1 */ /* 0x006FC304: cmp dword ptr [ebx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _s = sse_f32(MEM32(0x8094B0)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006FC308: divss xmm0, dword ptr [0x8094b0] */
    MEM32(ebp + (-0x14)) = 1; /* 0x006FC310: mov dword ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006FC317: movss dword ptr [ebp - 8], xmm1 */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x006FC31C: movss dword ptr [ebp - 0x20], xmm0 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC321: movss dword ptr [ebp - 0x10], xmm0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_006FC680; /* 0x006FC326: jle 0x6fc680 */
L_006FC32C:
    ecx = 0xFFFFFFECu; /* 0x006FC32C: mov ecx, 0xffffffec */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x006FC331: add ebx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006FC334: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x006FC337: mov dword ptr [ebp - 0x18], ecx */
    ecx = 0xFFFFFFF4u; /* 0x006FC33A: mov ecx, 0xfffffff4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x006FC33F: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x006FC342: mov dword ptr [ebp - 0x1c], ecx */
    goto L_006FC350; /* 0x006FC345: jmp 0x6fc350 */
L_006FC350:
    _xmm[0].u64[0] = MEM32(ebx + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC350: movss xmm0, dword ptr [ebx - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC355: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = MEM32(ebx + (-0x8)); _xmm[1].u64[1] = 0; /* 0x006FC358: movss xmm1, dword ptr [ebx - 8] */
    { float _s = sse_f32(MEM32(ebx + (-0x4))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC35D: subss xmm0, dword ptr [ebx - 4] */
    { float _s = sse_f32(MEM32(ebx)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC362: subss xmm1, dword ptr [ebx] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC366: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FC36A: mulss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FC36E: addss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC372: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC375: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FC37A: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(ebp + (-0x10)); _xmm[2].u64[1] = 0; /* 0x006FC37F: movss xmm2, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC384: add esp, 8 */
    _flag_k = FK_ADD;
    _xmm[3].u64[0] = MEM32(ebp + (-0x20)); _xmm[3].u64[1] = 0; /* 0x006FC387: movss xmm3, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0xC)); /* 0x006FC38C: mov edx, dword ptr [ebp - 0xc] */
    _xmm[5].u64[0] = MEM32(ebp + (-0x4)); _xmm[5].u64[1] = 0; /* 0x006FC38F: movss xmm5, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x006FC394: fstp dword ptr [ebp - 0x24] */
    _xmm[4].u64[0] = MEM32(ebp + (-0x24)); _xmm[4].u64[1] = 0; /* 0x006FC397: movss xmm4, dword ptr [ebp - 0x24] */
    _xmm[0] = _xmm[4]; /* 0x006FC39C: movaps xmm0, xmm4 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FC39F: addss xmm0, xmm2 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC3A3: comiss xmm0, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC423; /* 0x006FC3A6: jbe 0x6fc423 */
L_006FC3A8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x006FC3A8: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x18)); /* 0x006FC3AB: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006FC3AE: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FC3B0: add eax, edx */
    _flag_k = FK_ADD;
    _xmm[6].u64[0] = MEM32(ecx + ebx + 0x8); _xmm[6].u64[1] = 0; /* 0x006FC3B2: movss xmm6, dword ptr [ecx + ebx + 8] */
    _xmm[7].u64[0] = MEM32(ecx + ebx + 0xC); _xmm[7].u64[1] = 0; /* 0x006FC3B8: movss xmm7, dword ptr [ecx + ebx + 0xc] */
    { float _s = sse_f32(MEM32(eax + ebx + 0x8)); _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x006FC3BE: subss xmm6, dword ptr [eax + ebx + 8] */
    { float _s = sse_f32(MEM32(eax + ebx + 0xC)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] - _s); } /* 0x006FC3C4: subss xmm7, dword ptr [eax + ebx + 0xc] */
    ebx = ebx; /* 0x006FC3CA: lea ebx, [ebx] */
L_006FC3D0:
    _xmm[1] = _xmm[3]; /* 0x006FC3D0: movaps xmm1, xmm3 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC3D3: subss xmm1, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006FC3D7: subss xmm2, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006FC3DB: divss xmm1, xmm4 */
    _xmm[0] = _xmm[1]; /* 0x006FC3DF: movaps xmm0, xmm1 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FC3E2: mulss xmm1, xmm7 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC3E6: mulss xmm0, xmm6 */
    { float _s = sse_f32(MEM32(eax + ebx + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FC3EA: addss xmm1, dword ptr [eax + ebx + 0xc] */
    { float _s = sse_f32(MEM32(eax + ebx + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FC3F0: addss xmm0, dword ptr [eax + ebx + 8] */
    MEM32(edi + esi * 8 + 0x4) = _xmm[1].u32[0]; /* 0x006FC3F6: movss dword ptr [edi + esi*8 + 4], xmm1 */
    { float _s = sse_f32(MEM32(ebp + (-0x8))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FC3FC: addss xmm1, dword ptr [ebp - 8] */
    MEM32(edi + esi * 8) = _xmm[0].u32[0]; /* 0x006FC401: movss dword ptr [edi + esi*8], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x006FC406: addss xmm5, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x006FC40A: movaps xmm0, xmm4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FC40D: inc esi */
    _flag_k = FK_INC;
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FC40E: addss xmm0, xmm2 */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006FC412: movss dword ptr [ebp - 8], xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC417: comiss xmm0, xmm3 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_006FC3D0; /* 0x006FC41A: ja 0x6fc3d0 */
L_006FC41C:
    MEM32(ebp + (-0x4)) = _xmm[5].u32[0]; /* 0x006FC41C: movss dword ptr [ebp - 4], xmm5 */
    goto L_006FC428; /* 0x006FC421: jmp 0x6fc428 */
L_006FC423:
    _xmm[1].u64[0] = MEM32(ebp + (-0x8)); _xmm[1].u64[1] = 0; /* 0x006FC423: movss xmm1, dword ptr [ebp - 8] */
L_006FC428:
    eax = MEM32(ebp + (-0x14)); /* 0x006FC428: mov eax, dword ptr [ebp - 0x14] */
    { float _s = _xmm[2].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x006FC42B: addss xmm4, xmm2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FC42F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x006FC430: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x006FC433: mov dword ptr [ebp - 0x14], eax */
    _xmm[0] = _xmm[4]; /* 0x006FC436: movaps xmm0, xmm4 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006FC439: movss dword ptr [ebp - 0x10], xmm0 */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x006FC43E: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC350; /* 0x006FC441: jl 0x6fc350 */
L_006FC447:
    /* cmp esi, 0x3Fu */ /* 0x006FC447: cmp esi, 0x3f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC680; /* 0x006FC44A: jl 0x6fc680 */
L_006FC450:
    { float _s = sse_f32(MEM32(0x808B7C)); _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x006FC450: mulss xmm5, dword ptr [0x808b7c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006FC458: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(edx + 0x4); /* 0x006FC45B: mov ecx, dword ptr [edx + 4] */
    { float _s = sse_f32(MEM32(0x808B7C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FC45E: mulss xmm1, dword ptr [0x808b7c] */
    _xmm[0] = _xmm[5]; /* 0x006FC466: movaps xmm0, xmm5 */
    MEM32(ebp + (-0x4)) = _xmm[5].u32[0]; /* 0x006FC469: movss dword ptr [ebp - 4], xmm5 */
    { float _s = sse_f32(MEM32(edi)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC46E: subss xmm0, dword ptr [edi] */
    eax = MEM32(edx + ecx * 8); /* 0x006FC472: mov eax, dword ptr [edx + ecx*8] */
    MEM32(edi + 0x1F8) = eax; /* 0x006FC475: mov dword ptr [edi + 0x1f8], eax */
    eax = MEM32(edx + ecx * 8 + 0x4); /* 0x006FC47B: mov eax, dword ptr [edx + ecx*8 + 4] */
    MEM32(edi + 0x1FC) = eax; /* 0x006FC47F: mov dword ptr [edi + 0x1fc], eax */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC485: cvtps2pd xmm0, xmm0 */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006FC488: movss dword ptr [ebp - 8], xmm1 */
    MEM64(esp + 0x8) = _xmm[0].u64[0]; /* 0x006FC48D: movsd qword ptr [esp + 8], xmm0 */
    _xmm[0] = _xmm[1]; /* 0x006FC493: movaps xmm0, xmm1 */
    { float _s = sse_f32(MEM32(edi + 0x4)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC496: subss xmm0, dword ptr [edi + 4] */
    MEM32(ebp + (-0x18)) = _xmm[5].u32[0]; /* 0x006FC49B: movss dword ptr [ebp - 0x18], xmm5 */
    MEM32(ebp + (-0x1C)) = _xmm[5].u32[0]; /* 0x006FC4A0: movss dword ptr [ebp - 0x1c], xmm5 */
    MEM32(ebp + (-0x20)) = _xmm[1].u32[0]; /* 0x006FC4A5: movss dword ptr [ebp - 0x20], xmm1 */
    MEM32(ebp + (-0x24)) = _xmm[1].u32[0]; /* 0x006FC4AA: movss dword ptr [ebp - 0x24], xmm1 */
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x006FC4AF: cvtss2sd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC4B3: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F310); /* 0x006FC4B8: call 0x77f310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FC4BD: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FC4C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x006FC4C2: fstp dword ptr [ebp - 0x10] */
    goto L_006FC4D0; /* 0x006FC4C5: jmp 0x6fc4d0 */
L_006FC4D0:
    _xmm[0].u64[0] = MEM32(edi + esi * 8 + 0x4); _xmm[0].u64[1] = 0; /* 0x006FC4D0: movss xmm0, dword ptr [edi + esi*8 + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FC4D6: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[1].u64[0] = MEM32(edi + esi * 8); _xmm[1].u64[1] = 0; /* 0x006FC4D9: movss xmm1, dword ptr [edi + esi*8] */
    { float _s = sse_f32(MEM32(ebp + (-0x4))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC4DE: subss xmm1, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x006FC4E3: movss dword ptr [ebp - 0xc], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FC4E8: movss xmm0, dword ptr [ebp - 0x10] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC4ED: cvtps2pd xmm0, xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[1].u32[0]; /* 0x006FC4F0: movss dword ptr [ebp - 0x14], xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC4F5: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FC4FA: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x006FC4FF: movss xmm0, dword ptr [ebp - 0x14] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC504: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x006FC507: movsd qword ptr [ebp - 0x30], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC50C: movss xmm0, dword ptr [ebp - 0xc] */
    { float _s = sse_f32(MEM32(ebp + (-0x8))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC511: subss xmm0, dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x006FC516: fmul qword ptr [ebp - 0x30] */
    MEM32(ebp + (-0xC)) = _xmm[0].u32[0]; /* 0x006FC519: movss dword ptr [ebp - 0xc], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FC51E: movss xmm0, dword ptr [ebp - 0x10] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC523: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x006FC526: fstp qword ptr [ebp - 0x38] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC529: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FC52E: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC533: movss xmm0, dword ptr [ebp - 0xc] */
    _xmm[2].u64[0] = MEM64(ebp + (-0x38)); _xmm[2].u64[1] = 0; /* 0x006FC538: movsd xmm2, qword ptr [ebp - 0x38] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC53D: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006FC540: fstp qword ptr [ebp - 0x30] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x30)); _xmm[1].u64[1] = 0; /* 0x006FC543: movsd xmm1, qword ptr [ebp - 0x30] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC548: mulsd xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x006FC54C: movss xmm0, dword ptr [ebp - 4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC551: cvtps2pd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] - _s); } /* 0x006FC554: subsd xmm2, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x006FC558: addsd xmm2, xmm0 */
    { xmm_t _s = _xmm[2]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC55C: cvtpd2ps xmm0, xmm2 */
    MEM32(edi + esi * 8) = _xmm[0].u32[0]; /* 0x006FC560: movss dword ptr [edi + esi*8], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FC565: movss xmm0, dword ptr [ebp - 0x10] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC56A: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC56D: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F340); /* 0x006FC572: call 0x77f340 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006FC577: movss xmm0, dword ptr [ebp - 0xc] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC57C: cvtps2pd xmm0, xmm0 */
    MEM64(ebp + (-0x38)) = _xmm[0].u64[0]; /* 0x006FC57F: movsd qword ptr [ebp - 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006FC584: movss xmm0, dword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x38)); /* 0x006FC589: fmul qword ptr [ebp - 0x38] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC58C: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x006FC58F: fstp qword ptr [ebp - 0x30] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FC592: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3A0); /* 0x006FC597: call 0x77f3a0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x006FC59C: movss xmm0, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC5A1: add esp, 8 */
    _flag_k = FK_ADD;
    _xmm[3].u64[0] = MEM32(ebp + (-0x8)); _xmm[3].u64[1] = 0; /* 0x006FC5A4: movss xmm3, dword ptr [ebp - 8] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC5A9: cvtps2pd xmm0, xmm0 */
    _xmm[5].u64[0] = MEM32(ebp + (-0x18)); _xmm[5].u64[1] = 0; /* 0x006FC5AC: movss xmm5, dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x006FC5B1: fstp qword ptr [ebp - 0x38] */
    _xmm[1].u64[0] = MEM64(ebp + (-0x38)); _xmm[1].u64[1] = 0; /* 0x006FC5B4: movsd xmm1, qword ptr [ebp - 0x38] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006FC5B9: mulsd xmm1, xmm0 */
    { float _a = _xmm[3].f32[0], _b = _xmm[3].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FC5BD: cvtps2pd xmm0, xmm3 */
    { double _s = sse_f64(MEM64(ebp + (-0x30))); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FC5C0: addsd xmm1, qword ptr [ebp - 0x30] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006FC5C5: addsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006FC5C9: cvtpd2ps xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(edi + esi * 8); _xmm[1].u64[1] = 0; /* 0x006FC5CD: movss xmm1, dword ptr [edi + esi*8] */
    _flag_a = SSE_COMI(_xmm[5].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC5D2: comiss xmm5, xmm1 */
    _flag_k = FK_EFLAGS;
    MEM32(edi + esi * 8 + 0x4) = _xmm[0].u32[0]; /* 0x006FC5D5: movss dword ptr [edi + esi*8 + 4], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC5E5; /* 0x006FC5DB: jbe 0x6fc5e5 */
L_006FC5DD:
    _xmm[5] = _xmm[1]; /* 0x006FC5DD: movaps xmm5, xmm1 */
    MEM32(ebp + (-0x18)) = _xmm[5].u32[0]; /* 0x006FC5E0: movss dword ptr [ebp - 0x18], xmm5 */
L_006FC5E5:
    _xmm[4].u64[0] = MEM32(ebp + (-0x1C)); _xmm[4].u64[1] = 0; /* 0x006FC5E5: movss xmm4, dword ptr [ebp - 0x1c] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[4].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC5EA: comiss xmm1, xmm4 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC5F7; /* 0x006FC5ED: jbe 0x6fc5f7 */
L_006FC5EF:
    _xmm[4] = _xmm[1]; /* 0x006FC5EF: movaps xmm4, xmm1 */
    MEM32(ebp + (-0x1C)) = _xmm[4].u32[0]; /* 0x006FC5F2: movss dword ptr [ebp - 0x1c], xmm4 */
L_006FC5F7:
    _xmm[2].u64[0] = MEM32(ebp + (-0x20)); _xmm[2].u64[1] = 0; /* 0x006FC5F7: movss xmm2, dword ptr [ebp - 0x20] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC5FC: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC609; /* 0x006FC5FF: jbe 0x6fc609 */
L_006FC601:
    _xmm[2] = _xmm[0]; /* 0x006FC601: movaps xmm2, xmm0 */
    MEM32(ebp + (-0x20)) = _xmm[2].u32[0]; /* 0x006FC604: movss dword ptr [ebp - 0x20], xmm2 */
L_006FC609:
    _xmm[1].u64[0] = MEM32(ebp + (-0x24)); _xmm[1].u64[1] = 0; /* 0x006FC609: movss xmm1, dword ptr [ebp - 0x24] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC60E: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC61B; /* 0x006FC611: jbe 0x6fc61b */
L_006FC613:
    _xmm[1] = _xmm[0]; /* 0x006FC613: movaps xmm1, xmm0 */
    MEM32(ebp + (-0x24)) = _xmm[1].u32[0]; /* 0x006FC616: movss dword ptr [ebp - 0x24], xmm1 */
L_006FC61B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FC61B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x40u */ /* 0x006FC61C: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC4D0; /* 0x006FC61F: jl 0x6fc4d0 */
L_006FC625:
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x006FC625: subss xmm4, xmm5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FC629: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[5].u64[0] = MEM32(0x8095E0); _xmm[5].u64[1] = 0; /* 0x006FC62B: movss xmm5, dword ptr [0x8095e0] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FC633: subss xmm1, xmm2 */
    _xmm[2].u64[0] = MEM32(ebp + (-0x4)); _xmm[2].u64[1] = 0; /* 0x006FC637: movss xmm2, dword ptr [ebp - 4] */
    esp = esp; /* 0x006FC63C: lea esp, [esp] */
L_006FC640:
    _xmm[0].u64[0] = MEM32(edi + eax * 8); _xmm[0].u64[1] = 0; /* 0x006FC640: movss xmm0, dword ptr [edi + eax*8] */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC645: subss xmm0, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC649: mulss xmm0, xmm5 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006FC64D: divss xmm0, xmm4 */
    MEM32(edi + eax * 8) = _xmm[0].u32[0]; /* 0x006FC651: movss dword ptr [edi + eax*8], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + eax * 8 + 0x4); _xmm[0].u64[1] = 0; /* 0x006FC656: movss xmm0, dword ptr [edi + eax*8 + 4] */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FC65C: subss xmm0, xmm3 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FC660: mulss xmm0, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006FC664: divss xmm0, xmm1 */
    MEM32(edi + eax * 8 + 0x4) = _xmm[0].u32[0]; /* 0x006FC668: movss dword ptr [edi + eax*8 + 4], xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FC66E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x40u */ /* 0x006FC66F: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC640; /* 0x006FC672: jl 0x6fc640 */
L_006FC674:
    eax = 0x40u; /* 0x006FC674: mov eax, 0x40 */
    edi = POP32_VAL(esp); /* 0x006FC679: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC67A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FC67B: pop ebx */
    esp = ebp; /* 0x006FC67C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC67E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC67F: ret  */
L_006FC680:
    PUSH32(esp, esi); /* 0x006FC680: push esi */
    PUSH32(esp, 0x00806730u); /* 0x006FC681: push 0x806730 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FC686: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC68B: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FC68E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FC690: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC691: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FC692: pop ebx */
    esp = ebp; /* 0x006FC693: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC695: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC696: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC6A0u);

L_006FC6A0:
    PUSH32(esp, ebp); /* 0x006FC6A0: push ebp */
    ebp = esp; /* 0x006FC6A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x218u; /* 0x006FC6A3: sub esp, 0x218 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FC6A9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FC6AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006FC6B0: mov dword ptr [ebp - 8], eax */
    _xmm[0].u64[0] = MEM32(0x809754); _xmm[0].u64[1] = 0; /* 0x006FC6B3: movss xmm0, dword ptr [0x809754] */
    eax = ebp + (-0x20C); /* 0x006FC6BB: lea eax, [ebp - 0x20c] */
    PUSH32(esp, ebx); /* 0x006FC6C1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006FC6C2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006FC6C5: push esi */
    PUSH32(esp, edi); /* 0x006FC6C6: push edi */
    PUSH32(esp, 0x200u); /* 0x006FC6C7: push 0x200 */
    edi = edx; /* 0x006FC6CC: mov edi, edx */
    MEM32(ebp + (-0x210)) = _xmm[0].u32[0]; /* 0x006FC6CE: movss dword ptr [ebp - 0x210], xmm0 */
    PUSH32(esp, 0); /* 0x006FC6D6: push 0 */
    PUSH32(esp, eax); /* 0x006FC6D8: push eax */
    MEM32(ebp + (-0x214)) = edi; /* 0x006FC6D9: mov dword ptr [ebp - 0x214], edi */
    esi = ecx; /* 0x006FC6DF: mov esi, ecx */
    RECOMP_CALL(sub_0078083E); /* 0x006FC6E1: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FC6E6: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ebp + (-0x20C); /* 0x006FC6E9: lea edx, [ebp - 0x20c] */
    ecx = esi; /* 0x006FC6EF: mov ecx, esi */
    RECOMP_CALL(sub_006FC270); /* 0x006FC6F1: call 0x6fc270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FC6F6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0xFFFFFFFFu; /* 0x006FC6F8: mov dword ptr [edi], 0xffffffff */
    /* cmp MEM32(ebx + 0x201C), esi */ /* 0x006FC6FE: cmp dword ptr [ebx + 0x201c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x201C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006FC766; /* 0x006FC704: jle 0x6fc766 */
L_006FC706:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FC706: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FC710; /* 0x006FC708: jmp 0x6fc710 */
L_006FC710:
    edx = MEM32(ebx + 0x2020); /* 0x006FC710: mov edx, dword ptr [ebx + 0x2020] */
    ecx = ebp + (-0x20C); /* 0x006FC716: lea ecx, [ebp - 0x20c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x006FC71C: add edx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006FBFB0); /* 0x006FC71E: call 0x6fbfb0 */
    RECOMP_FLAGS_IN();
    _xmm[1] = _xmm[0]; /* 0x006FC723: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x210)); _xmm[0].u64[1] = 0; /* 0x006FC726: movss xmm0, dword ptr [ebp - 0x210] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FC72E: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006FC746; /* 0x006FC731: jbe 0x6fc746 */
L_006FC733:
    eax = MEM32(ebp + (-0x214)); /* 0x006FC733: mov eax, dword ptr [ebp - 0x214] */
    _xmm[0] = _xmm[1]; /* 0x006FC739: movaps xmm0, xmm1 */
    MEM32(ebp + (-0x210)) = _xmm[0].u32[0]; /* 0x006FC73C: movss dword ptr [ebp - 0x210], xmm0 */
    MEM32(eax) = esi; /* 0x006FC744: mov dword ptr [eax], esi */
L_006FC746:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006FC746: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x204u; /* 0x006FC747: add edi, 0x204 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebx + 0x201C) */ /* 0x006FC74D: cmp esi, dword ptr [ebx + 0x201c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x201C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC710; /* 0x006FC753: jl 0x6fc710 */
L_006FC755:
    edi = POP32_VAL(esp); /* 0x006FC755: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC756: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FC757: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x006FC758: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FC75B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FC75D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FC762: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC764: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC765: ret  */
L_006FC766:
    ecx = MEM32(ebp + (-0x8)); /* 0x006FC766: mov ecx, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM32(0x809754); _xmm[0].u64[1] = 0; /* 0x006FC769: movss xmm0, dword ptr [0x809754] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FC771: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FC773: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC774: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FC775: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FC776: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FC77B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC77D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC77E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC780u);

L_006FC780:
    PUSH32(esp, ebp); /* 0x006FC780: push ebp */
    ebp = esp; /* 0x006FC781: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006FC783: push esi */
    PUSH32(esp, edi); /* 0x006FC784: push edi */
    edi = MEM32(0x87CC18); /* 0x006FC785: mov edi, dword ptr [0x87cc18] */
    esi = (uint32_t)((int32_t)edi * (int32_t)0x2028u); /* 0x006FC78B: imul esi, edi, 0x2028 */
    eax = esi + 0x2028; /* 0x006FC791: lea eax, [esi + 0x2028] */
    PUSH32(esp, eax); /* 0x006FC797: push eax */
    PUSH32(esp, MEM32(0x92C61C)); /* 0x006FC798: push dword ptr [0x92c61c] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006FC79E: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC7A4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FC7A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FC7BC; /* 0x006FC7A9: jne 0x6fc7bc */
L_006FC7AB:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FC7AB: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FC7B0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FC7B5: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FC7B8: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC7B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FC7BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC7BB: ret  */
L_006FC7BC:
    PUSH32(esp, 0x2028u); /* 0x006FC7BC: push 0x2028 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006FC7C1: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(0x92C61C) = eax; /* 0x006FC7C3: mov dword ptr [0x92c61c], eax */
    PUSH32(esp, 0); /* 0x006FC7C8: push 0 */
    PUSH32(esp, esi); /* 0x006FC7CA: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x006FC7CB: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006FC7D0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FC7D3: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006FC7D6: inc edi */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x006FC7D7: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FC7D9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(0x87CC18) = edi; /* 0x006FC7DC: mov dword ptr [0x87cc18], edi */
    MEM32(esi + 0x4) = eax; /* 0x006FC7E2: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FC7E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FC7E7: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC7E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FC7E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC7EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC7F0u);

L_006FC7F0:
    PUSH32(esp, ebp); /* 0x006FC7F0: push ebp */
    ebp = esp; /* 0x006FC7F1: mov ebp, esp */
    edx = MEM32(0x87CC18); /* 0x006FC7F3: mov edx, dword ptr [0x87cc18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FC7F9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006FC7FB: push esi */
    PUSH32(esp, edi); /* 0x006FC7FC: push edi */
    /* test edx, edx */ /* 0x006FC7FD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FC823; /* 0x006FC7FF: jle 0x6fc823 */
L_006FC801:
    eax = MEM32(0x92C61C); /* 0x006FC801: mov eax, dword ptr [0x92c61c] */
    esi = MEM32(ebp + 0xC); /* 0x006FC806: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x006FC809: mov edi, dword ptr [ebp + 8] */
    esp = esp; /* 0x006FC80C: lea esp, [esp] */
L_006FC810:
    /* cmp MEM32(eax), edi */ /* 0x006FC810: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FC819; /* 0x006FC812: jne 0x6fc819 */
L_006FC814:
    /* cmp MEM32(eax + 0x4), esi */ /* 0x006FC814: cmp dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FC829; /* 0x006FC817: je 0x6fc829 */
L_006FC819:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FC819: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2028u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2028u; /* 0x006FC81A: add eax, 0x2028 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x006FC81F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006FC810; /* 0x006FC821: jl 0x6fc810 */
L_006FC823:
    edi = POP32_VAL(esp); /* 0x006FC823: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FC824: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FC826: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FC827: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC828: ret  */
L_006FC829:
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x2028u); /* 0x006FC829: imul eax, ecx, 0x2028 */
    edi = POP32_VAL(esp); /* 0x006FC82F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FC830: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x92C61C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x92C61C); /* 0x006FC831: add eax, dword ptr [0x92c61c] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006FC837: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC838: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC840u);

L_006FC840:
    PUSH32(esp, ebp); /* 0x006FC840: push ebp */
    ebp = esp; /* 0x006FC841: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006FC843: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FC846: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FC84B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FC84D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x006FC850: mov eax, dword ptr [ecx] */
    _xmm[0].u64[0] = MEM32(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x006FC852: movss xmm0, dword ptr [ecx + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006FC857: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ecx + 0x4); /* 0x006FC85A: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x30)) = eax; /* 0x006FC85D: mov dword ptr [ebp - 0x30], eax */
    SET_LO16(eax, MEM16(ecx + 0x2018)); /* 0x006FC860: mov ax, word ptr [ecx + 0x2018] */
    MEM32(ebp + (-0x24)) = _xmm[0].u32[0]; /* 0x006FC867: movss dword ptr [ebp - 0x24], xmm0 */
    _xmm[0].u64[0] = MEM32(ecx + 0xC); _xmm[0].u64[1] = 0; /* 0x006FC86C: movss xmm0, dword ptr [ecx + 0xc] */
    ecx = ebp + (-0x3C); /* 0x006FC871: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x802u; /* 0x006FC874: mov dword ptr [ebp - 0x3c], 0x802 */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x006FC87B: movss dword ptr [ebp - 0x20], xmm0 */
    MEM32(ebp + (-0x2C)) = _xmm[1].u32[0]; /* 0x006FC880: movss dword ptr [ebp - 0x2c], xmm1 */
    MEM32(ebp + (-0x28)) = _xmm[2].u32[0]; /* 0x006FC885: movss dword ptr [ebp - 0x28], xmm2 */
    MEM16(ebp + (-0x1C)) = (uint16_t)(LO16(eax)); /* 0x006FC88A: mov word ptr [ebp - 0x1c], ax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006FC88E: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FC893: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006FC895: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006FC897: setg cl */
    eax = ecx; /* 0x006FC89A: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FC89C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FC89F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FC8A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FC8A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC8A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC8A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC8B0u);

L_006FC8B0:
    PUSH32(esp, ebp); /* 0x006FC8B0: push ebp */
    ebp = esp; /* 0x006FC8B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006FC8B3: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FC8B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FC8BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FC8BD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x006FC8C0: mov eax, dword ptr [ecx] */
    _xmm[0].u64[0] = MEM32(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x006FC8C2: movss xmm0, dword ptr [ecx + 8] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006FC8C7: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ecx + 0x4); /* 0x006FC8CA: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x30)) = eax; /* 0x006FC8CD: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x8); /* 0x006FC8D0: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x006FC8D3: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FC8D6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x006FC8D9: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)MEM16(ecx + 0x2018); /* 0x006FC8DC: movzx eax, word ptr [ecx + 0x2018] */
    MEM32(ebp + (-0x1C)) = _xmm[0].u32[0]; /* 0x006FC8E3: movss dword ptr [ebp - 0x1c], xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FC8E8: inc eax */
    _flag_k = FK_INC;
    _xmm[0].u64[0] = MEM32(ecx + 0xC); _xmm[0].u64[1] = 0; /* 0x006FC8E9: movss xmm0, dword ptr [ecx + 0xc] */
    ecx = ebp + (-0x3C); /* 0x006FC8EE: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x3C)) = 0x800u; /* 0x006FC8F1: mov dword ptr [ebp - 0x3c], 0x800 */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x006FC8F8: movss dword ptr [ebp - 0x18], xmm0 */
    MEM32(ebp + (-0x20)) = _xmm[2].u32[0]; /* 0x006FC8FD: movss dword ptr [ebp - 0x20], xmm2 */
    MEM32(ebp + (-0x24)) = eax; /* 0x006FC902: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006FC905: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FC90A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006FC90C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006FC90E: setg cl */
    eax = ecx; /* 0x006FC911: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FC913: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FC916: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FC918: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FC91D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC91F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC920: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC930u);

L_006FC930:
    PUSH32(esp, ebp); /* 0x006FC930: push ebp */
    ebp = esp; /* 0x006FC931: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006FC933: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FC936: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FC93B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FC93D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x006FC940: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x34)) = eax; /* 0x006FC942: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ecx + 0x4); /* 0x006FC945: mov eax, dword ptr [ecx + 4] */
    ecx = ebp + (-0x3C); /* 0x006FC948: lea ecx, [ebp - 0x3c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x006FC94B: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x8); /* 0x006FC94E: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x006FC951: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FC954: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x3C)) = 0x801u; /* 0x006FC957: mov dword ptr [ebp - 0x3c], 0x801 */
    MEM32(ebp + (-0x28)) = eax; /* 0x006FC95E: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_006ED2F0); /* 0x006FC961: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FC966: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006FC968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006FC96A: setg cl */
    eax = ecx; /* 0x006FC96D: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FC96F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FC972: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FC974: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FC979: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FC97B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FC97C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FC980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FC980u);

L_006FC980:
    PUSH32(esp, ebp); /* 0x006FC980: push ebp */
    ebp = esp; /* 0x006FC981: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x25Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x25Cu; /* 0x006FC983: sub esp, 0x25c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FC989: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FC98E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FC990: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FC993: push ebx */
    PUSH32(esp, esi); /* 0x006FC994: push esi */
    PUSH32(esp, edi); /* 0x006FC995: push edi */
    edi = ecx; /* 0x006FC996: mov edi, ecx */
    ebx = MEM32(edi); /* 0x006FC998: mov ebx, dword ptr [edi] */
    /* cmp ebx, 0x702u */ /* 0x006FC99A: cmp ebx, 0x702 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x702u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FC9B6; /* 0x006FC9A0: je 0x6fc9b6 */
L_006FC9A2:
    /* cmp ebx, 0x700u */ /* 0x006FC9A2: cmp ebx, 0x700 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FC9B6; /* 0x006FC9A8: je 0x6fc9b6 */
L_006FC9AA:
    /* cmp ebx, 0x701u */ /* 0x006FC9AA: cmp ebx, 0x701 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x701u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCE48; /* 0x006FC9B0: jne 0x6fce48 */
L_006FC9B6:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006FC9B6: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006FC9B9: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_006FC7F0); /* 0x006FC9BC: call 0x6fc7f0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FC9C1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FC9C3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FC9C6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCE48; /* 0x006FC9C8: je 0x6fce48 */
L_006FC9CE:
    _xmm[4].u64[0] = MEM32(edi + 0x18); _xmm[4].u64[1] = 0; /* 0x006FC9CE: movss xmm4, dword ptr [edi + 0x18] */
    _xmm[3].u64[0] = MEM32(edi + 0x1C); _xmm[3].u64[1] = 0; /* 0x006FC9D3: movss xmm3, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x248)) = _xmm[4].u32[0]; /* 0x006FC9D8: movss dword ptr [ebp - 0x248], xmm4 */
    MEM32(ebp + (-0x24C)) = _xmm[3].u32[0]; /* 0x006FC9E0: movss dword ptr [ebp - 0x24c], xmm3 */
    /* cmp ebx, 0x701u */ /* 0x006FC9E8: cmp ebx, 0x701 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x701u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCB65; /* 0x006FC9EE: jne 0x6fcb65 */
L_006FC9F4:
    eax = 0xFFFFu; /* 0x006FC9F4: mov eax, 0xffff */
    ecx = esi + 0x10; /* 0x006FC9F9: lea ecx, [esi + 0x10] */
    _flag_a = (uint32_t)(MEM16(esi + 0x2018)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(esi + 0x2018) = (uint16_t)(MEM16(esi + 0x2018) + LO16(eax)); /* 0x006FC9FC: add word ptr [esi + 0x2018], ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    /* cmp MEM32(esi + 0x2024), 0 */ /* 0x006FCA03: cmp dword ptr [esi + 0x2024], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2024)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCAC7; /* 0x006FCA0A: je 0x6fcac7 */
L_006FCA10:
    edx = ebp + (-0x208); /* 0x006FCA10: lea edx, [ebp - 0x208] */
    MEM32(esi + 0x2024) = 0; /* 0x006FCA16: mov dword ptr [esi + 0x2024], 0 */
    RECOMP_CALL(sub_006FC270); /* 0x006FCA20: call 0x6fc270 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x92C618), 0 */ /* 0x006FCA25: cmp dword ptr [0x92c618], 0 */
    _flag_a = (uint32_t)(MEM32(0x92C618)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ebp + (-0x208); /* 0x006FCA2C: lea edx, [ebp - 0x208] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCA62; /* 0x006FCA32: je 0x6fca62 */
L_006FCA34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FCA34: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006FBD60); /* 0x006FCA36: call 0x6fbd60 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CC18); /* 0x006FCA3B: mov edx, dword ptr [0x87cc18] */
    /* test edx, edx */ /* 0x006FCA41: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FCA69; /* 0x006FCA43: jle 0x6fca69 */
L_006FCA45:
    ecx = MEM32(0x92C61C); /* 0x006FCA45: mov ecx, dword ptr [0x92c61c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2024u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2024u; /* 0x006FCA4B: add ecx, 0x2024 */
    _flag_k = FK_ADD;
L_006FCA51:
    MEM32(ecx) = 0; /* 0x006FCA51: mov dword ptr [ecx], 0 */
    ecx = ecx + 0x2028; /* 0x006FCA57: lea ecx, [ecx + 0x2028] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006FCA5D: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006FCA51; /* 0x006FCA5E: jne 0x6fca51 */
L_006FCA60:
    goto L_006FCA69; /* 0x006FCA60: jmp 0x6fca69 */
L_006FCA62:
    ecx = esi; /* 0x006FCA62: mov ecx, esi */
    RECOMP_CALL(sub_006FBD60); /* 0x006FCA64: call 0x6fbd60 */
    RECOMP_FLAGS_IN();
L_006FCA69:
    /* test eax, eax */ /* 0x006FCA69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FCA8B; /* 0x006FCA6B: js 0x6fca8b */
L_006FCA6D:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x204u); /* 0x006FCA6D: imul ecx, eax, 0x204 */
    eax = MEM32(esi + 0x2020); /* 0x006FCA73: mov eax, dword ptr [esi + 0x2020] */
    PUSH32(esp, 0); /* 0x006FCA79: push 0 */
    PUSH32(esp, MEM32(eax + ecx + 0x200)); /* 0x006FCA7B: push dword ptr [eax + ecx + 0x200] */
    ecx = esi; /* 0x006FCA82: mov ecx, esi */
    RECOMP_CALL(sub_006FC930); /* 0x006FCA84: call 0x6fc930 */
    RECOMP_FLAGS_IN();
    goto L_006FCAFF; /* 0x006FCA89: jmp 0x6fcaff */
L_006FCA8B:
    eax = MEM32(esi); /* 0x006FCA8B: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x240); /* 0x006FCA8D: lea ecx, [ebp - 0x240] */
    MEM32(ebp + (-0x238)) = eax; /* 0x006FCA93: mov dword ptr [ebp - 0x238], eax */
    eax = MEM32(esi + 0x4); /* 0x006FCA99: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x240)) = 0x801u; /* 0x006FCA9C: mov dword ptr [ebp - 0x240], 0x801 */
    MEM32(ebp + (-0x234)) = eax; /* 0x006FCAA6: mov dword ptr [ebp - 0x234], eax */
    MEM32(ebp + (-0x230)) = 0xFFFFFFFFu; /* 0x006FCAAC: mov dword ptr [ebp - 0x230], 0xffffffff */
    MEM32(ebp + (-0x22C)) = 0xFFFFFFFFu; /* 0x006FCAB6: mov dword ptr [ebp - 0x22c], 0xffffffff */
    RECOMP_CALL(sub_006ED2F0); /* 0x006FCAC0: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    goto L_006FCB02; /* 0x006FCAC5: jmp 0x6fcb02 */
L_006FCAC7:
    PUSH32(esp, esi); /* 0x006FCAC7: push esi */
    edx = ebp + (-0x244); /* 0x006FCAC8: lea edx, [ebp - 0x244] */
    RECOMP_CALL(sub_006FC6A0); /* 0x006FCACE: call 0x6fc6a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x244)); /* 0x006FCAD3: mov eax, dword ptr [ebp - 0x244] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FCAD9: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FCADC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FCB02; /* 0x006FCADE: js 0x6fcb02 */
L_006FCAE0:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x204u); /* 0x006FCAE0: imul ecx, eax, 0x204 */
    _xmm[2] = _xmm[0]; /* 0x006FCAE6: movaps xmm2, xmm0 */
    eax = MEM32(esi + 0x2020); /* 0x006FCAE9: mov eax, dword ptr [esi + 0x2020] */
    PUSH32(esp, 0); /* 0x006FCAEF: push 0 */
    PUSH32(esp, MEM32(eax + ecx + 0x200)); /* 0x006FCAF1: push dword ptr [eax + ecx + 0x200] */
    ecx = esi; /* 0x006FCAF8: mov ecx, esi */
    RECOMP_CALL(sub_006FC8B0); /* 0x006FCAFA: call 0x6fc8b0 */
    RECOMP_FLAGS_IN();
L_006FCAFF:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCAFF: add esp, 8 */
    _flag_k = FK_ADD;
L_006FCB02:
    eax = (uint32_t)MEM16(esi + 0x2018); /* 0x006FCB02: movzx eax, word ptr [esi + 0x2018] */
    /* test LO16(eax), LO16(eax) */ /* 0x006FCB09: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCE48; /* 0x006FCB0C: je 0x6fce48 */
L_006FCB12:
    ecx = eax; /* 0x006FCB12: mov ecx, eax */
    eax = ecx + 0x1; /* 0x006FCB14: lea eax, [ecx + 1] */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x006FCB17: movd xmm1, ecx */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006FCB1B: movd xmm2, eax */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x006FCB1F: cvtdq2ps xmm2, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006FCB22: cvtdq2ps xmm1, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x006FCB25: movaps xmm0, xmm2 */
    { float _s = sse_f32(MEM32(esi + 0xC)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x006FCB28: mulss xmm2, dword ptr [esi + 0xc] */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCB2D: mulss xmm0, dword ptr [esi + 8] */
    { float _s = sse_f32(MEM32(ebp + (-0x24C))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006FCB32: subss xmm2, dword ptr [ebp - 0x24c] */
    { float _s = sse_f32(MEM32(ebp + (-0x248))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FCB3A: subss xmm0, dword ptr [ebp - 0x248] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x006FCB42: divss xmm2, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006FCB46: divss xmm0, xmm1 */
    MEM32(esi + 0xC) = _xmm[2].u32[0]; /* 0x006FCB4A: movss dword ptr [esi + 0xc], xmm2 */
    MEM32(esi + 0x8) = _xmm[0].u32[0]; /* 0x006FCB4F: movss dword ptr [esi + 8], xmm0 */
    edi = POP32_VAL(esp); /* 0x006FCB54: pop edi */
    esi = POP32_VAL(esp); /* 0x006FCB55: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FCB56: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FCB57: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FCB5A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FCB5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FCB61: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FCB63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCB64: ret  */
L_006FCB65:
    /* cmp ebx, 0x702u */ /* 0x006FCB65: cmp ebx, 0x702 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x702u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCDE2; /* 0x006FCB6B: jne 0x6fcde2 */
L_006FCB71:
    _xmm[1].u64[0] = MEM32(edi + 0x20); _xmm[1].u64[1] = 0; /* 0x006FCB71: movss xmm1, dword ptr [edi + 0x20] */
    _xmm[2].u64[0] = MEM32(edi + 0x24); _xmm[2].u64[1] = 0; /* 0x006FCB76: movss xmm2, dword ptr [edi + 0x24] */
    ecx = MEM32(esi + 0x14); /* 0x006FCB7B: mov ecx, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x250)) = _xmm[1].u32[0]; /* 0x006FCB7E: movss dword ptr [ebp - 0x250], xmm1 */
    MEM32(ebp + (-0x25C)) = _xmm[2].u32[0]; /* 0x006FCB86: movss dword ptr [ebp - 0x25c], xmm2 */
    /* cmp ecx, 0x400u */ /* 0x006FCB8E: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006FCC1A; /* 0x006FCB94: jge 0x6fcc1a */
L_006FCB9A:
    eax = MEM32(esi + 0x8); /* 0x006FCB9A: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FCB9D: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(esi + ecx * 8 + 0x18) = eax; /* 0x006FCBA0: mov dword ptr [esi + ecx*8 + 0x18], eax */
    ecx = MEM32(esi + 0x14); /* 0x006FCBA4: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0xC); /* 0x006FCBA7: mov eax, dword ptr [esi + 0xc] */
    MEM32(esi + ecx * 8 + 0x1C) = eax; /* 0x006FCBAA: mov dword ptr [esi + ecx*8 + 0x1c], eax */
    eax = MEM32(esi + 0x14); /* 0x006FCBAE: mov eax, dword ptr [esi + 0x14] */
    _xmm[0].u64[0] = MEM32(esi + eax * 8 + 0x1C); _xmm[0].u64[1] = 0; /* 0x006FCBB1: movss xmm0, dword ptr [esi + eax*8 + 0x1c] */
    _xmm[1].u64[0] = MEM32(esi + eax * 8 + 0x18); _xmm[1].u64[1] = 0; /* 0x006FCBB7: movss xmm1, dword ptr [esi + eax*8 + 0x18] */
    { float _s = sse_f32(MEM32(esi + eax * 8 + 0x14)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FCBBD: subss xmm0, dword ptr [esi + eax*8 + 0x14] */
    { float _s = sse_f32(MEM32(esi + eax * 8 + 0x10)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006FCBC3: subss xmm1, dword ptr [esi + eax*8 + 0x10] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCBC9: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FCBCD: mulss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FCBD1: addss xmm0, xmm1 */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FCBD5: cvtps2pd xmm0, xmm0 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FCBD8: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FCBDD: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x250)); _xmm[1].u64[1] = 0; /* 0x006FCBE2: movss xmm1, dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCBEA: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006FCBED: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    _xmm[2].u64[0] = MEM32(ebp + (-0x25C)); _xmm[2].u64[1] = 0; /* 0x006FCBF0: movss xmm2, dword ptr [ebp - 0x25c] */
    _xmm[3].u64[0] = MEM32(ebp + (-0x24C)); _xmm[3].u64[1] = 0; /* 0x006FCBF8: movss xmm3, dword ptr [ebp - 0x24c] */
    _xmm[4].u64[0] = MEM32(ebp + (-0x248)); _xmm[4].u64[1] = 0; /* 0x006FCC00: movss xmm4, dword ptr [ebp - 0x248] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x244)) = _v; } /* 0x006FCC08: fstp dword ptr [ebp - 0x244] */
    fp_push(*(float*)&MEM32(ebp + (-0x244))); /* 0x006FCC0E: fld dword ptr [ebp - 0x244] */
    _st[0] += (double)*(float*)ADDR(esi + 0x10); /* 0x006FCC14: fadd dword ptr [esi + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x006FCC17: fstp dword ptr [esi + 0x10] */
L_006FCC1A:
    eax = MEM32(esi + 0x8); /* 0x006FCC1A: mov eax, dword ptr [esi + 8] */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x006FCC1D: subss xmm4, xmm1 */
    ecx = (uint32_t)MEM16(esi + 0x2018); /* 0x006FCC21: movzx ecx, word ptr [esi + 0x2018] */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x006FCC28: subss xmm3, xmm2 */
    MEM32(ebp + (-0x258)) = eax; /* 0x006FCC2C: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(esi + 0xC); /* 0x006FCC32: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x254)) = eax; /* 0x006FCC35: mov dword ptr [ebp - 0x254], eax */
    eax = ecx; /* 0x006FCC3B: mov eax, ecx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006FCC3D: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006FCC41: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006FCC44: divss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x006FCC48: divss xmm2, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FCC4C: addss xmm1, dword ptr [esi + 8] */
    { float _s = sse_f32(MEM32(esi + 0xC)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006FCC51: addss xmm2, dword ptr [esi + 0xc] */
    MEM32(esi + 0x8) = _xmm[1].u32[0]; /* 0x006FCC56: movss dword ptr [esi + 8], xmm1 */
    MEM32(esi + 0xC) = _xmm[2].u32[0]; /* 0x006FCC5B: movss dword ptr [esi + 0xc], xmm2 */
    /* cmp ecx, 1 */ /* 0x006FCC60: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006FCE48; /* 0x006FCC63: jbe 0x6fce48 */
L_006FCC69:
    { float _s = sse_f32(MEM32(ebp + (-0x258))); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x006FCC69: subss xmm4, dword ptr [ebp - 0x258] */
    { float _s = sse_f32(MEM32(ebp + (-0x254))); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x006FCC71: subss xmm3, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FCC79: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[0] = _xmm[4]; /* 0x006FCC7C: movaps xmm0, xmm4 */
    MEM32(ebp + (-0x25C)) = _xmm[4].u32[0]; /* 0x006FCC7F: movss dword ptr [ebp - 0x25c], xmm4 */
    _xmm[1] = _xmm[3]; /* 0x006FCC87: movaps xmm1, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCC8A: mulss xmm0, xmm4 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FCC8E: mulss xmm1, xmm3 */
    MEM32(ebp + (-0x254)) = _xmm[3].u32[0]; /* 0x006FCC92: movss dword ptr [ebp - 0x254], xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FCC9A: addss xmm1, xmm0 */
    { float _a = _xmm[1].f32[0], _b = _xmm[1].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FCC9E: cvtps2pd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FCCA1: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FCCA6: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x24C)); _xmm[0].u64[1] = 0; /* 0x006FCCAB: movss xmm0, dword ptr [ebp - 0x24c] */
    { float _s = sse_f32(MEM32(esi + 0xC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006FCCB3: subss xmm0, dword ptr [esi + 0xc] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x248)); _xmm[2].u64[1] = 0; /* 0x006FCCB8: movss xmm2, dword ptr [ebp - 0x248] */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006FCCC0: subss xmm2, dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x250)) = _v; } /* 0x006FCCC5: fstp dword ptr [ebp - 0x250] */
    _xmm[1] = _xmm[0]; /* 0x006FCCCB: movaps xmm1, xmm0 */
    MEM32(ebp + (-0x24C)) = _xmm[0].u32[0]; /* 0x006FCCCE: movss dword ptr [ebp - 0x24c], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FCCD6: mulss xmm1, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x006FCCDA: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x248)) = _xmm[2].u32[0]; /* 0x006FCCDD: movss dword ptr [ebp - 0x248], xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCCE5: mulss xmm0, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FCCE9: addss xmm1, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FCCED: xorps xmm0, xmm0 */
    _xmm[0].f64[0] = (double)_xmm[1].f32[0]; /* 0x006FCCF0: cvtss2sd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FCCF4: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006FCCF9: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM32(ebp + (-0x248)); _xmm[3].u64[1] = 0; /* 0x006FCCFE: movss xmm3, dword ptr [ebp - 0x248] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x24C)); _xmm[2].u64[1] = 0; /* 0x006FCD06: movss xmm2, dword ptr [ebp - 0x24c] */
    _xmm[4].u64[0] = MEM32(ebp + (-0x25C)); _xmm[4].u64[1] = 0; /* 0x006FCD0E: movss xmm4, dword ptr [ebp - 0x25c] */
    _xmm[5].u64[0] = MEM32(ebp + (-0x254)); _xmm[5].u64[1] = 0; /* 0x006FCD16: movss xmm5, dword ptr [ebp - 0x254] */
    { float _s = sse_f32(MEM32(ebp + (-0x250))); _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x006FCD1E: divss xmm4, dword ptr [ebp - 0x250] */
    { float _s = sse_f32(MEM32(ebp + (-0x250))); _xmm[5].f32[0] = (float)(_xmm[5].f32[0] / _s); } /* 0x006FCD26: divss xmm5, dword ptr [ebp - 0x250] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x244)) = _v; } /* 0x006FCD2E: fstp dword ptr [ebp - 0x244] */
    { float _s = sse_f32(MEM32(ebp + (-0x244))); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x006FCD34: divss xmm2, dword ptr [ebp - 0x244] */
    { float _s = sse_f32(MEM32(ebp + (-0x244))); _xmm[3].f32[0] = (float)(_xmm[3].f32[0] / _s); } /* 0x006FCD3C: divss xmm3, dword ptr [ebp - 0x244] */
    _xmm[1] = _xmm[2]; /* 0x006FCD44: movaps xmm1, xmm2 */
    { float _s = _xmm[4].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x006FCD47: mulss xmm2, xmm4 */
    _xmm[0] = _xmm[3]; /* 0x006FCD4B: movaps xmm0, xmm3 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006FCD4E: mulss xmm1, xmm5 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCD52: mulss xmm0, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x006FCD56: mulss xmm3, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006FCD5A: addss xmm1, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FCD5E: xorps xmm0, xmm0 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006FCD61: subss xmm2, xmm3 */
    _xmm[0].f64[0] = (double)_xmm[1].f32[0]; /* 0x006FCD65: cvtss2sd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FCD69: movsd qword ptr [esp], xmm0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FCD6E: sub esp, 8 */
    _flag_k = FK_CMP;
    { float _a = _xmm[2].f32[0], _b = _xmm[2].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006FCD71: cvtps2pd xmm0, xmm2 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006FCD74: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F310); /* 0x006FCD79: call 0x77f310 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x250)); _xmm[0].u64[1] = 0; /* 0x006FCD7E: movss xmm0, dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FCD86: add esp, 0x10 */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM32(ebp + (-0x244)); _xmm[2].u64[1] = 0; /* 0x006FCD89: movss xmm2, dword ptr [ebp - 0x244] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006FCD91: xorps xmm1, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006FCD94: ucomiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x254)) = _v; } /* 0x006FCD97: fstp dword ptr [ebp - 0x254] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006FCD9D: subss xmm2, xmm0 */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006FCDA1: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006FCDA2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006FCDC2; /* 0x006FCDA5: jp 0x6fcdc2 */
L_006FCDA7:
    _xmm[2] = _xmm[1]; /* 0x006FCDA7: movaps xmm2, xmm1 */
    ecx = esi; /* 0x006FCDAA: mov ecx, esi */
    RECOMP_CALL(sub_006FC840); /* 0x006FCDAC: call 0x6fc840 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FCDB1: pop edi */
    esi = POP32_VAL(esp); /* 0x006FCDB2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FCDB3: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FCDB4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FCDB7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FCDB9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FCDBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FCDC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCDC1: ret  */
L_006FCDC2:
    _xmm[1].u64[0] = MEM32(ebp + (-0x254)); _xmm[1].u64[1] = 0; /* 0x006FCDC2: movss xmm1, dword ptr [ebp - 0x254] */
    ecx = esi; /* 0x006FCDCA: mov ecx, esi */
    RECOMP_CALL(sub_006FC840); /* 0x006FCDCC: call 0x6fc840 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FCDD1: pop edi */
    esi = POP32_VAL(esp); /* 0x006FCDD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FCDD3: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FCDD4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FCDD7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FCDD9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FCDDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FCDE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCDE1: ret  */
L_006FCDE2:
    /* cmp ebx, 0x700u */ /* 0x006FCDE2: cmp ebx, 0x700 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCE48; /* 0x006FCDE8: jne 0x6fce48 */
L_006FCDEA:
    _flag_a = (uint32_t)(MEM16(esi + 0x2018)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x2018) = (uint16_t)(MEM16(esi + 0x2018) + 1); /* 0x006FCDEA: inc word ptr [esi + 0x2018] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(esi + 0x2018); /* 0x006FCDF1: movzx ecx, word ptr [esi + 0x2018] */
    MEM32(esi + 0x10) = 0; /* 0x006FCDF8: mov dword ptr [esi + 0x10], 0 */
    eax = ecx + (-0x1); /* 0x006FCDFF: lea eax, [ecx - 1] */
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x006FCE02: movd xmm1, ecx */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x006FCE06: movd xmm2, eax */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x006FCE0A: cvtdq2ps xmm2, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x006FCE0D: cvtdq2ps xmm1, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x006FCE10: movaps xmm0, xmm2 */
    { float _s = sse_f32(MEM32(esi + 0xC)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x006FCE13: mulss xmm2, dword ptr [esi + 0xc] */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006FCE18: mulss xmm0, dword ptr [esi + 8] */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006FCE1D: addss xmm2, xmm3 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006FCE21: addss xmm0, xmm4 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x006FCE25: divss xmm2, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006FCE29: divss xmm0, xmm1 */
    MEM32(esi + 0xC) = _xmm[2].u32[0]; /* 0x006FCE2D: movss dword ptr [esi + 0xc], xmm2 */
    MEM32(esi + 0x8) = _xmm[0].u32[0]; /* 0x006FCE32: movss dword ptr [esi + 8], xmm0 */
    MEM32(esi + 0x18) = _xmm[4].u32[0]; /* 0x006FCE37: movss dword ptr [esi + 0x18], xmm4 */
    MEM32(esi + 0x1C) = _xmm[3].u32[0]; /* 0x006FCE3C: movss dword ptr [esi + 0x1c], xmm3 */
    MEM32(esi + 0x14) = 1; /* 0x006FCE41: mov dword ptr [esi + 0x14], 1 */
L_006FCE48:
    ecx = MEM32(ebp + (-0x4)); /* 0x006FCE48: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006FCE4B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FCE4C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FCE4D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FCE4F: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FCE50: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FCE55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FCE57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCE58: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FCE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCE60u);

L_006FCE60:
    PUSH32(esp, ebp); /* 0x006FCE60: push ebp */
    ebp = esp; /* 0x006FCE61: mov ebp, esp */
    PUSH32(esp, 0x006FCE60u); /* 0x006FCE63: push 0x6fce60 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FCE68: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC5E4)); /* 0x006FCE6B: call dword ptr [0x7cc5e4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCE71: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(0x87CC1C) = 1; /* 0x006FCE74: mov dword ptr [0x87cc1c], 1 */
    ebp = POP32_VAL(esp); /* 0x006FCE7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCE7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FCE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCE80u);

L_006FCE80:
    ecx = 0x0080675Cu; /* 0x006FCE80: mov ecx, 0x80675c */
    RECOMP_CALL(sub_006F5A00); /* 0x006FCE85: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FCE8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCEA6; /* 0x006FCE8C: je 0x6fcea6 */
L_006FCE8E:
    /* cmp MEM8(eax), 0x30u */ /* 0x006FCE8E: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCEA6; /* 0x006FCE91: je 0x6fcea6 */
L_006FCE93:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006FCE93: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006FCE98: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006FCE99: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCE9F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FCEA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FCEDE; /* 0x006FCEA4: jne 0x6fcede */
L_006FCEA6:
    PUSH32(esp, esi); /* 0x006FCEA6: push esi */
    esi = MEM32(0x7CC5E4); /* 0x006FCEA7: mov esi, dword ptr [0x7cc5e4] */
    PUSH32(esp, 0x006FCE60u); /* 0x006FCEAD: push 0x6fce60 */
    PUSH32(esp, 2); /* 0x006FCEB2: push 2 */
    RECOMP_ICALL(esi); /* 0x006FCEB4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCEB6: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FCEB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCEC5; /* 0x006FCEBB: je 0x6fcec5 */
L_006FCEBD:
    PUSH32(esp, eax); /* 0x006FCEBD: push eax */
    PUSH32(esp, 2); /* 0x006FCEBE: push 2 */
    RECOMP_ICALL(esi); /* 0x006FCEC0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCEC2: add esp, 8 */
    _flag_k = FK_ADD;
L_006FCEC5:
    PUSH32(esp, 0x006FCE60u); /* 0x006FCEC5: push 0x6fce60 */
    PUSH32(esp, 0xFu); /* 0x006FCECA: push 0xf */
    RECOMP_ICALL(esi); /* 0x006FCECC: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCECE: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FCED1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCEDD; /* 0x006FCED3: je 0x6fcedd */
L_006FCED5:
    PUSH32(esp, eax); /* 0x006FCED5: push eax */
    PUSH32(esp, 0xFu); /* 0x006FCED6: push 0xf */
    RECOMP_ICALL(esi); /* 0x006FCED8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCEDA: add esp, 8 */
    _flag_k = FK_ADD;
L_006FCEDD:
    esi = POP32_VAL(esp); /* 0x006FCEDD: pop esi */
L_006FCEDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FCEDE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCEE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FCEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCEF0u);

L_006FCEF0:
    /* cmp MEM32(0x87CC20), 0 */ /* 0x006FCEF0: cmp dword ptr [0x87cc20], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCF31; /* 0x006FCEF7: jne 0x6fcf31 */
L_006FCEF9:
    PUSH32(esp, esi); /* 0x006FCEF9: push esi */
    esi = MEM32(0x7CC5E4); /* 0x006FCEFA: mov esi, dword ptr [0x7cc5e4] */
    PUSH32(esp, 0); /* 0x006FCF00: push 0 */
    PUSH32(esp, 2); /* 0x006FCF02: push 2 */
    RECOMP_ICALL(esi); /* 0x006FCF04: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCF06: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x006FCE60u */ /* 0x006FCF09: cmp eax, 0x6fce60 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x006FCE60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCF18; /* 0x006FCF0E: je 0x6fcf18 */
L_006FCF10:
    PUSH32(esp, eax); /* 0x006FCF10: push eax */
    PUSH32(esp, 2); /* 0x006FCF11: push 2 */
    RECOMP_ICALL(esi); /* 0x006FCF13: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCF15: add esp, 8 */
    _flag_k = FK_ADD;
L_006FCF18:
    PUSH32(esp, 0); /* 0x006FCF18: push 0 */
    PUSH32(esp, 0xFu); /* 0x006FCF1A: push 0xf */
    RECOMP_ICALL(esi); /* 0x006FCF1C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCF1E: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x006FCE60u */ /* 0x006FCF21: cmp eax, 0x6fce60 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x006FCE60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCF30; /* 0x006FCF26: je 0x6fcf30 */
L_006FCF28:
    PUSH32(esp, eax); /* 0x006FCF28: push eax */
    PUSH32(esp, 0xFu); /* 0x006FCF29: push 0xf */
    RECOMP_ICALL(esi); /* 0x006FCF2B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FCF2D: add esp, 8 */
    _flag_k = FK_ADD;
L_006FCF30:
    esi = POP32_VAL(esp); /* 0x006FCF30: pop esi */
L_006FCF31:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCF31: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FCF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCF40u);

    goto L_006FCF40;
L_006ED570:
    PUSH32(esp, ebp); /* 0x006ED570: push ebp */
    ebp = esp; /* 0x006ED571: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED573: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006ED576: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006ED579: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006ED57E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006ED580: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, ebx); /* 0x006ED584: push ebx */
    ebx = ecx; /* 0x006ED585: mov ebx, ecx */
    eax = ebx; /* 0x006ED587: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006ED589: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006ED589: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006ED58C: movzx eax, al */
    PUSH32(esp, esi); /* 0x006ED58F: push esi */
    PUSH32(esp, edi); /* 0x006ED590: push edi */
    edi = MEM32(eax * 4 + 0x925470); /* 0x006ED591: mov edi, dword ptr [eax*4 + 0x925470] */
    /* test edi, edi */ /* 0x006ED598: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED5C7; /* 0x006ED59A: je 0x6ed5c7 */
L_006ED59C:
    esi = (uint32_t)LO8(ebx); /* 0x006ED59C: movzx esi, bl */
    edx = 1; /* 0x006ED59F: mov edx, 1 */
    ecx = esi; /* 0x006ED5A4: mov ecx, esi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x006ED5A6: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x006ED5A6: shr esi, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED5A9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED5AC: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x006ED5AC: shl edx, cl */
    /* test MEM32(edi + esi * 4), edx */ /* 0x006ED5AE: test dword ptr [edi + esi*4], edx */
    _flag_a = (uint32_t)(MEM32(edi + esi * 4)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED5C7; /* 0x006ED5B1: je 0x6ed5c7 */
L_006ED5B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ED5B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED5B5: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED5B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED5B7: pop ebx */
    ecx = MEM32(esp + 0x38); /* 0x006ED5B8: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED5BC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED5BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED5C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED5C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED5C6: ret  */
L_006ED5C7:
    ecx = esp + 0xC; /* 0x006ED5C7: lea ecx, [esp + 0xc] */
    MEM32(esp + 0xC) = ebx; /* 0x006ED5CB: mov dword ptr [esp + 0xc], ebx */
    RECOMP_CALL(sub_006ED2F0); /* 0x006ED5CF: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ED5D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED5D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED5D8: pop edi */
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006ED5D9: setg cl */
    eax = ecx; /* 0x006ED5DC: mov eax, ecx */
    ecx = MEM32(esp + 0x40); /* 0x006ED5DE: mov ecx, dword ptr [esp + 0x40] */
    esi = POP32_VAL(esp); /* 0x006ED5E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED5E3: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED5E4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED5E6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED5EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED5ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED5EE: ret  */
L_006FCF40:
    MEM32(0x87CC1C) = 0; /* 0x006FCF40: mov dword ptr [0x87cc1c], 0 */
    ecx = 0x100u; /* 0x006FCF4A: mov ecx, 0x100 */
    RECOMP_BACKEDGE();
    goto L_006ED570; /* 0x006FCF4F: jmp 0x6ed570 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006FCF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCF60u);

L_006FCF60:
    eax = MEM32(0x926B18); /* 0x006FCF60: mov eax, dword ptr [0x926b18] */
    /* test eax, eax */ /* 0x006FCF65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCF7B; /* 0x006FCF67: je 0x6fcf7b */
L_006FCF69:
    esp = esp; /* 0x006FCF69: lea esp, [esp] */
L_006FCF70:
    /* cmp MEM32(eax), ecx */ /* 0x006FCF70: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FCF86; /* 0x006FCF72: je 0x6fcf86 */
L_006FCF74:
    eax = MEM32(eax + 0x8); /* 0x006FCF74: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x006FCF77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FCF70; /* 0x006FCF79: jne 0x6fcf70 */
L_006FCF7B:
    /* cmp ecx, 8 */ /* 0x006FCF7B: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FCF8A; /* 0x006FCF7E: jne 0x6fcf8a */
L_006FCF80:
    eax = MEM32(0x863364); /* 0x006FCF80: mov eax, dword ptr [0x863364] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCF85: ret  */
L_006FCF86:
    eax = MEM32(eax + 0x4); /* 0x006FCF86: mov eax, dword ptr [eax + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCF89: ret  */
L_006FCF8A:
    /* test ecx, ecx */ /* 0x006FCF8A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FCF94; /* 0x006FCF8C: jne 0x6fcf94 */
L_006FCF8E:
    eax = MEM32(0x863368); /* 0x006FCF8E: mov eax, dword ptr [0x863368] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCF93: ret  */
L_006FCF94:
    eax = MEM32(0x86317C); /* 0x006FCF94: mov eax, dword ptr [0x86317c] */
    /* cmp ecx, 2 */ /* 0x006FCF99: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = MEM32(0x863360); } /* 0x006FCF9C: cmove eax, dword ptr [0x863360] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCFA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FCFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FCFB0u);

L_006FCFB0:
    PUSH32(esp, esi); /* 0x006FCFB0: push esi */
    esi = MEM32(0x926B18); /* 0x006FCFB1: mov esi, dword ptr [0x926b18] */
    /* test esi, esi */ /* 0x006FCFB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FCFD6; /* 0x006FCFB9: je 0x6fcfd6 */
L_006FCFBB:
    PUSH32(esp, edi); /* 0x006FCFBB: push edi */
    edi = MEM32(0x7CC44C); /* 0x006FCFBC: mov edi, dword ptr [0x7cc44c] */
L_006FCFC2:
    PUSH32(esp, esi); /* 0x006FCFC2: push esi */
    esi = MEM32(esi + 0x8); /* 0x006FCFC3: mov esi, dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x006FCFC6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FCFC8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FCFCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FCFC2; /* 0x006FCFCD: jne 0x6fcfc2 */
L_006FCFCF:
    MEM32(0x926B18) = esi; /* 0x006FCFCF: mov dword ptr [0x926b18], esi */
    edi = POP32_VAL(esp); /* 0x006FCFD5: pop edi */
L_006FCFD6:
    MEM32(0x86317C) = 6; /* 0x006FCFD6: mov dword ptr [0x86317c], 6 */
    MEM32(0x863360) = 4; /* 0x006FCFE0: mov dword ptr [0x863360], 4 */
    MEM32(0x863368) = 3; /* 0x006FCFEA: mov dword ptr [0x863368], 3 */
    MEM32(0x863364) = 1; /* 0x006FCFF4: mov dword ptr [0x863364], 1 */
    esi = POP32_VAL(esp); /* 0x006FCFFE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FCFFF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD000u);

L_006FD000:
    PUSH32(esp, ebp); /* 0x006FD000: push ebp */
    ebp = esp; /* 0x006FD001: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FD003: push ecx */
    eax = ebp + 0xC; /* 0x006FD004: lea eax, [ebp + 0xc] */
    edx = 3; /* 0x006FD007: mov edx, 3 */
    PUSH32(esp, eax); /* 0x006FD00C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FD00D: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FD010: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006FD060); /* 0x006FD012: call 0x6fd060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD017: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006FD01A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006FD01B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD01C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD020u);

L_006FD020:
    PUSH32(esp, ebp); /* 0x006FD020: push ebp */
    ebp = esp; /* 0x006FD021: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x006FD023: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x006FD026: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x006FD029: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006FD02A: push dword ptr [ebp + 0xc] */
    edx = 2; /* 0x006FD02D: mov edx, 2 */
    RECOMP_CALL(sub_006FD060); /* 0x006FD032: call 0x6fd060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD037: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006FD03A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD03B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD040u);

L_006FD040:
    PUSH32(esp, ebp); /* 0x006FD040: push ebp */
    ebp = esp; /* 0x006FD041: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x006FD043: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x006FD046: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x006FD049: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006FD04A: push dword ptr [ebp + 0xc] */
    edx = 3; /* 0x006FD04D: mov edx, 3 */
    RECOMP_CALL(sub_006FD060); /* 0x006FD052: call 0x6fd060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD057: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006FD05A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD05B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD060u);

L_006FD060:
    PUSH32(esp, ebp); /* 0x006FD060: push ebp */
    ebp = esp; /* 0x006FD061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FD063: push ecx */
    eax = MEM32(0x855000); /* 0x006FD064: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FD069: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FD06B: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(0x7D5E28), 0 */ /* 0x006FD06E: cmp dword ptr [0x7d5e28], 0 */
    _flag_a = (uint32_t)(MEM32(0x7D5E28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FD075: push ebx */
    PUSH32(esp, esi); /* 0x006FD076: push esi */
    PUSH32(esp, edi); /* 0x006FD077: push edi */
    edi = edx; /* 0x006FD078: mov edi, edx */
    ebx = ecx; /* 0x006FD07A: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FD0EB; /* 0x006FD07C: je 0x6fd0eb */
L_006FD07E:
    /* cmp edi, 6 */ /* 0x006FD07E: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006FD0EB; /* 0x006FD081: ja 0x6fd0eb */
L_006FD083:
    RECOMP_CALL(sub_006FCF60); /* 0x006FD083: call 0x6fcf60 */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x006FD088: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006FD0EB; /* 0x006FD08A: jl 0x6fd0eb */
L_006FD08C:
    eax = 0x1000u; /* 0x006FD08C: mov eax, 0x1000 */
    RECOMP_CALL(sub_00780140); /* 0x006FD091: call 0x780140 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x006FD096: mov esi, esp */
    /* test esi, esi */ /* 0x006FD098: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD0EB; /* 0x006FD09A: je 0x6fd0eb */
L_006FD09C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006FD09C: push dword ptr [ebp + 0xc] */
    edx = 0x1000u; /* 0x006FD09F: mov edx, 0x1000 */
    ecx = esi; /* 0x006FD0A4: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FD0A6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006F3340); /* 0x006FD0A9: call 0x6f3340 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006FD0AE: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD0B0: add esp, 8 */
    _flag_k = FK_ADD;
    edx = eax + 0x1; /* 0x006FD0B3: lea edx, [eax + 1] */
L_006FD0B6:
    SET_LO8(ecx, MEM8(eax)); /* 0x006FD0B6: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FD0B8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006FD0B9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD0B6; /* 0x006FD0BB: jne 0x6fd0b6 */
L_006FD0BD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FD0BD: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006FD0D9; /* 0x006FD0BF: je 0x6fd0d9 */
L_006FD0C1:
    /* cmp MEM8(eax + esi + (-0x1)), 0xAu */ /* 0x006FD0C1: cmp byte ptr [eax + esi - 1], 0xa */
    _flag_a = (uint32_t)(MEM8(eax + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD0D9; /* 0x006FD0C6: jne 0x6fd0d9 */
L_006FD0C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006FD0C8: dec eax */
    _flag_k = FK_DEC;
    MEM8(eax + esi) = (uint8_t)(LO8(ecx)); /* 0x006FD0C9: mov byte ptr [eax + esi], cl */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006FD0D9; /* 0x006FD0CC: je 0x6fd0d9 */
L_006FD0CE:
    /* cmp MEM8(eax + esi + (-0x1)), 0xDu */ /* 0x006FD0CE: cmp byte ptr [eax + esi - 1], 0xd */
    _flag_a = (uint32_t)(MEM8(eax + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD0D9; /* 0x006FD0D3: jne 0x6fd0d9 */
L_006FD0D5:
    MEM8(eax + esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x006FD0D5: mov byte ptr [eax + esi - 1], cl */
L_006FD0D9:
    PUSH32(esp, esi); /* 0x006FD0D9: push esi */
    PUSH32(esp, edi); /* 0x006FD0DA: push edi */
    PUSH32(esp, ebx); /* 0x006FD0DB: push ebx */
    PUSH32(esp, MEM32(0x87CC24)); /* 0x006FD0DC: push dword ptr [0x87cc24] */
    RECOMP_ICALL(MEM32(0x7D5E28)); /* 0x006FD0E2: call dword ptr [0x7d5e28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FD0E8: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006FD0EB:
    esp = ebp + (-0x10); /* 0x006FD0EB: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006FD0EE: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD0EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FD0F0: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FD0F1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FD0F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FD0F6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FD0FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FD0FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD0FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD100u);

L_006FD100:
    PUSH32(esp, ebp); /* 0x006FD100: push ebp */
    ebp = esp; /* 0x006FD101: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FD103: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FD106: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FD10B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FD10D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FD110: push ebx */
    PUSH32(esp, esi); /* 0x006FD111: push esi */
    PUSH32(esp, edi); /* 0x006FD112: push edi */
    edi = MEM32(ebp + 0x10); /* 0x006FD113: mov edi, dword ptr [ebp + 0x10] */
    edi = MEM32(edi * 4 + 0x7D5EF4); /* 0x006FD116: mov edi, dword ptr [edi*4 + 0x7d5ef4] */
    eax = edi; /* 0x006FD11D: mov eax, edi */
    edx = eax + 0x1; /* 0x006FD11F: lea edx, [eax + 1] */
L_006FD122:
    SET_LO8(ecx, MEM8(eax)); /* 0x006FD122: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FD124: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006FD125: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD122; /* 0x006FD127: jne 0x6fd122 */
L_006FD129:
    ebx = MEM32(ebp + 0x14); /* 0x006FD129: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FD12C: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x006FD12E: mov edx, ebx */
    esi = edx + 0x1; /* 0x006FD130: lea esi, [edx + 1] */
L_006FD133:
    SET_LO8(ecx, MEM8(edx)); /* 0x006FD133: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006FD135: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006FD136: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD133; /* 0x006FD138: jne 0x6fd133 */
L_006FD13A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006FD13A: sub edx, esi */
    _flag_k = FK_CMP;
    esi = eax + 0x5; /* 0x006FD13C: lea esi, [eax + 5] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x006FD13F: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006FD141: mov eax, esi */
    RECOMP_CALL(sub_00780140); /* 0x006FD143: call 0x780140 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x006FD148: mov eax, esp */
    PUSH32(esp, ebx); /* 0x006FD14A: push ebx */
    PUSH32(esp, edi); /* 0x006FD14B: push edi */
    PUSH32(esp, 0x00806794u); /* 0x006FD14C: push 0x806794 */
    PUSH32(esp, esi); /* 0x006FD151: push esi */
    PUSH32(esp, eax); /* 0x006FD152: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x006FD153: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_006F2E40); /* 0x006FD156: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x006FD15B: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006FD15E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x006FD161: mov ecx, edx */
    esi = ecx + 0x1; /* 0x006FD163: lea esi, [ecx + 1] */
L_006FD166:
    SET_LO8(eax, MEM8(ecx)); /* 0x006FD166: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FD168: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006FD169: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD166; /* 0x006FD16B: jne 0x6fd166 */
L_006FD16D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006FD16D: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x006FD16F: lea eax, [ecx + 1] */
    ecx = 0x00804E1Cu; /* 0x006FD172: mov ecx, 0x804e1c */
    PUSH32(esp, eax); /* 0x006FD177: push eax */
    PUSH32(esp, edx); /* 0x006FD178: push edx */
    edx = 0x00804E28u; /* 0x006FD179: mov edx, 0x804e28 */
    RECOMP_CALL(sub_00700DA0); /* 0x006FD17E: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD183: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006FD186: mov esi, eax */
    PUSH32(esp, esi); /* 0x006FD188: push esi */
    RECOMP_ICALL(MEM32(0x7CC17C)); /* 0x006FD189: call dword ptr [0x7cc17c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006FD18F: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FD190: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x006FD196: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD199: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x006FD19C: push ebx */
    PUSH32(esp, MEM32(eax * 4 + 0x7D5EF4)); /* 0x006FD19D: push dword ptr [eax*4 + 0x7d5ef4] */
    PUSH32(esp, 0x0080678Cu); /* 0x006FD1A4: push 0x80678c */
    RECOMP_ICALL(MEM32(0x7CC5E8)); /* 0x006FD1A9: call dword ptr [0x7cc5e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x006FD1AF: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FD1B2: push eax */
    RECOMP_ICALL(MEM32(0x7CC560)); /* 0x006FD1B3: call dword ptr [0x7cc560] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FD1B9: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp + (-0x14); /* 0x006FD1BC: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x006FD1BF: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD1C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FD1C1: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FD1C2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FD1C5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FD1C7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FD1CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FD1CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD1CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD1D0u);

L_006FD1D0:
    PUSH32(esp, ebp); /* 0x006FD1D0: push ebp */
    ebp = esp; /* 0x006FD1D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FD1D3: push ecx */
    eax = ebp + 0xC; /* 0x006FD1D4: lea eax, [ebp + 0xc] */
    edx = 4; /* 0x006FD1D7: mov edx, 4 */
    PUSH32(esp, eax); /* 0x006FD1DC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FD1DD: push dword ptr [ebp + 8] */
    ecx = edx + (-0x2); /* 0x006FD1E0: lea ecx, [edx - 2] */
    RECOMP_CALL(sub_006FD060); /* 0x006FD1E3: call 0x6fd060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD1E8: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006FD1EB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006FD1EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD1ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD1F0u);

L_006FD1F0:
    PUSH32(esp, ebx); /* 0x006FD1F0: push ebx */
    PUSH32(esp, esi); /* 0x006FD1F1: push esi */
    esi = MEM32(0x87CC2C); /* 0x006FD1F2: mov esi, dword ptr [0x87cc2c] */
    PUSH32(esp, edi); /* 0x006FD1F8: push edi */
    /* test esi, esi */ /* 0x006FD1F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD282; /* 0x006FD1FB: je 0x6fd282 */
L_006FD201:
    /* cmp MEM32(0x7D5E68), 0x006FD290u */ /* 0x006FD201: cmp dword ptr [0x7d5e68], 0x6fd290 */
    _flag_a = (uint32_t)(MEM32(0x7D5E68)); _flag_b = (uint32_t)(0x006FD290u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FD282; /* 0x006FD20B: je 0x6fd282 */
L_006FD20D:
    PUSH32(esp, 0x0080685Cu); /* 0x006FD20D: push 0x80685c */
    RECOMP_CALL(sub_006FD1D0); /* 0x006FD212: call 0x6fd1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD217: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x0080680Cu); /* 0x006FD21A: push 0x80680c */
    RECOMP_CALL(sub_006FD1D0); /* 0x006FD21F: call 0x6fd1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD224: add esp, 4 */
    _flag_k = FK_ADD;
    edi = 0x00806804u; /* 0x006FD227: mov edi, 0x806804 */
    ebx = 0x007CE150u; /* 0x006FD22C: mov ebx, 0x7ce150 */
L_006FD231:
    /* cmp MEM32(esi), 0 */ /* 0x006FD231: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x00806808u; /* 0x006FD234: mov eax, 0x806808 */
    ecx = MEM32(esi + 0x4); /* 0x006FD239: mov ecx, dword ptr [esi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edi; } /* 0x006FD23C: cmove eax, edi */
    /* cmp ecx, 1 */ /* 0x006FD23F: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006FD242: push eax */
    eax = 0x007CD0C4u; /* 0x006FD243: mov eax, 0x7cd0c4 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ebx; } /* 0x006FD248: cmovne eax, ebx */
    PUSH32(esp, eax); /* 0x006FD24B: push eax */
    PUSH32(esp, ecx); /* 0x006FD24C: push ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006FD24D: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006FD250: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x006FD253: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006FD256: push dword ptr [esi + 8] */
    PUSH32(esp, 0x008067B8u); /* 0x006FD259: push 0x8067b8 */
    RECOMP_CALL(sub_006FD1D0); /* 0x006FD25E: call 0x6fd1d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x18); /* 0x006FD263: mov esi, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x006FD266: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FD269: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD231; /* 0x006FD26B: jne 0x6fd231 */
L_006FD26D:
    PUSH32(esp, 0x007F86C4u); /* 0x006FD26D: push 0x7f86c4 */
    RECOMP_CALL(sub_006FD1D0); /* 0x006FD272: call 0x6fd1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD277: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FD27A: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD27B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FD27C: pop ebx */
    goto L_006FD690; /* 0x006FD27D: jmp 0x6fd690 */
L_006FD282:
    edi = POP32_VAL(esp); /* 0x006FD282: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD283: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FD284: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD285: ret  */
L_006FD690:
    eax = MEM32(0x87CC2C); /* 0x006FD690: mov eax, dword ptr [0x87cc2c] */
    /* test eax, eax */ /* 0x006FD695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD6BD; /* 0x006FD697: je 0x6fd6bd */
L_006FD699:
    esp = esp; /* 0x006FD699: lea esp, [esp] */
L_006FD6A0:
    ecx = MEM32(eax + 0x18); /* 0x006FD6A0: mov ecx, dword ptr [eax + 0x18] */
    MEM32(eax) = 0; /* 0x006FD6A3: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006FD6A9: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x18) = 0; /* 0x006FD6B0: mov dword ptr [eax + 0x18], 0 */
    eax = ecx; /* 0x006FD6B7: mov eax, ecx */
    /* test ecx, ecx */ /* 0x006FD6B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD6A0; /* 0x006FD6BB: jne 0x6fd6a0 */
L_006FD6BD:
    MEM32(0x87CC2C) = 0; /* 0x006FD6BD: mov dword ptr [0x87cc2c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD6C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD290u);

L_006FD290:
    PUSH32(esp, ebp); /* 0x006FD290: push ebp */
    ebp = esp; /* 0x006FD291: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x006FD293: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FD299: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FD29E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FD2A0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FD2A3: push ebx */
    PUSH32(esp, esi); /* 0x006FD2A4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006FD2A5: mov esi, dword ptr [ebp + 8] */
    ebx = 2; /* 0x006FD2A8: mov ebx, 2 */
    PUSH32(esp, edi); /* 0x006FD2AD: push edi */
    eax = 0x1000u; /* 0x006FD2AE: mov eax, 0x1000 */
    MEM32(ebp + (-0x60)) = 0; /* 0x006FD2B3: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x006FD2BA: mov dword ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x58)) = 0x00806854u; /* 0x006FD2C1: mov dword ptr [ebp - 0x58], 0x806854 */
    MEM32(ebp + (-0x54)) = 0; /* 0x006FD2C8: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x50)) = 1; /* 0x006FD2CF: mov dword ptr [ebp - 0x50], 1 */
    MEM32(ebp + (-0x4C)) = 0x0080684Cu; /* 0x006FD2D6: mov dword ptr [ebp - 0x4c], 0x80684c */
    MEM32(ebp + (-0x48)) = 0; /* 0x006FD2DD: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = ebx; /* 0x006FD2E4: mov dword ptr [ebp - 0x44], ebx */
    MEM32(ebp + (-0x40)) = 0x00806844u; /* 0x006FD2E7: mov dword ptr [ebp - 0x40], 0x806844 */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x006FD2EE: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = 3; /* 0x006FD2F1: mov dword ptr [ebp - 0x38], 3 */
    MEM32(ebp + (-0x34)) = 0x0080683Cu; /* 0x006FD2F8: mov dword ptr [ebp - 0x34], 0x80683c */
    MEM32(ebp + (-0x30)) = 1; /* 0x006FD2FF: mov dword ptr [ebp - 0x30], 1 */
    MEM32(ebp + (-0x2C)) = 4; /* 0x006FD306: mov dword ptr [ebp - 0x2c], 4 */
    MEM32(ebp + (-0x28)) = 0x0080692Cu; /* 0x006FD30D: mov dword ptr [ebp - 0x28], 0x80692c */
    RECOMP_CALL(sub_00780140); /* 0x006FD314: call 0x780140 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x006FD319: mov edi, esp */
    /* test edi, edi */ /* 0x006FD31B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD66E; /* 0x006FD31D: je 0x6fd66e */
L_006FD323:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006FD323: push dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x4); /* 0x006FD326: mov ecx, dword ptr [esi + 4] */
    edx = 0x0080691Cu; /* 0x006FD329: mov edx, 0x80691c */
    /* cmp ecx, 1 */ /* 0x006FD32E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x00806924u; /* 0x006FD331: mov eax, 0x806924 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = edx; } /* 0x006FD336: cmovne eax, edx */
    PUSH32(esp, eax); /* 0x006FD339: push eax */
    PUSH32(esp, ecx); /* 0x006FD33A: push ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006FD33B: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006FD33E: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x006FD341: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x008068E0u); /* 0x006FD344: push 0x8068e0 */
    PUSH32(esp, 0x1000u); /* 0x006FD349: push 0x1000 */
    PUSH32(esp, edi); /* 0x006FD34E: push edi */
    RECOMP_CALL(sub_006F2E40); /* 0x006FD34F: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x006FD354: add esp, 0x24 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006FD357: push edi */
    PUSH32(esp, 0x00806958u); /* 0x006FD358: push 0x806958 */
    RECOMP_CALL(sub_006FD1D0); /* 0x006FD35D: call 0x6fd1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD362: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = 0x0080694Cu; /* 0x006FD365: mov ecx, 0x80694c */
    RECOMP_CALL(sub_006FBC10); /* 0x006FD36A: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FD36F: mov esi, eax */
    /* test esi, esi */ /* 0x006FD371: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD451; /* 0x006FD373: je 0x6fd451 */
L_006FD379:
    ecx = 0x00806944u; /* 0x006FD379: mov ecx, 0x806944 */
    edi = edi; /* 0x006FD37E: mov edi, edi */
L_006FD380:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD380: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD382: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD39F; /* 0x006FD384: jne 0x6fd39f */
L_006FD386:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD386: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD39B; /* 0x006FD388: je 0x6fd39b */
L_006FD38A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD38A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD38D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD39F; /* 0x006FD390: jne 0x6fd39f */
L_006FD392:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD392: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD395: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD397: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD380; /* 0x006FD399: jne 0x6fd380 */
L_006FD39B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD39B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD3A4; /* 0x006FD39D: jmp 0x6fd3a4 */
L_006FD39F:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD39F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD3A1: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD3A4:
    /* test eax, eax */ /* 0x006FD3A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD66E; /* 0x006FD3A6: je 0x6fd66e */
L_006FD3AC:
    ecx = 0x0080693Cu; /* 0x006FD3AC: mov ecx, 0x80693c */
    eax = esi; /* 0x006FD3B1: mov eax, esi */
L_006FD3B3:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD3B3: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD3B5: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD3D2; /* 0x006FD3B7: jne 0x6fd3d2 */
L_006FD3B9:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD3B9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD3CE; /* 0x006FD3BB: je 0x6fd3ce */
L_006FD3BD:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD3BD: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD3C0: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD3D2; /* 0x006FD3C3: jne 0x6fd3d2 */
L_006FD3C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD3C5: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD3C8: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD3CA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD3B3; /* 0x006FD3CC: jne 0x6fd3b3 */
L_006FD3CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD3CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD3D7; /* 0x006FD3D0: jmp 0x6fd3d7 */
L_006FD3D2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD3D2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD3D4: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD3D7:
    /* test eax, eax */ /* 0x006FD3D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD3E5; /* 0x006FD3D9: jne 0x6fd3e5 */
L_006FD3DB:
    eax = 1; /* 0x006FD3DB: mov eax, 1 */
    goto L_006FD670; /* 0x006FD3E0: jmp 0x6fd670 */
L_006FD3E5:
    ecx = 0x008068A4u; /* 0x006FD3E5: mov ecx, 0x8068a4 */
    eax = esi; /* 0x006FD3EA: mov eax, esi */
    esp = esp; /* 0x006FD3EC: lea esp, [esp] */
L_006FD3F0:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD3F0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD3F2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD40F; /* 0x006FD3F4: jne 0x6fd40f */
L_006FD3F6:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD3F6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD40B; /* 0x006FD3F8: je 0x6fd40b */
L_006FD3FA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD3FA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD3FD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD40F; /* 0x006FD400: jne 0x6fd40f */
L_006FD402:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD402: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD405: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD407: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD3F0; /* 0x006FD409: jne 0x6fd3f0 */
L_006FD40B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD40B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD414; /* 0x006FD40D: jmp 0x6fd414 */
L_006FD40F:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD40F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD411: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD414:
    /* test eax, eax */ /* 0x006FD414: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD670; /* 0x006FD416: je 0x6fd670 */
L_006FD41C:
    edx = 0x0080689Cu; /* 0x006FD41C: mov edx, 0x80689c */
    ecx = esi; /* 0x006FD421: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006FD423: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FD428: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD436; /* 0x006FD42A: jne 0x6fd436 */
L_006FD42C:
    eax = 3; /* 0x006FD42C: mov eax, 3 */
    goto L_006FD670; /* 0x006FD431: jmp 0x6fd670 */
L_006FD436:
    edx = 0x0080688Cu; /* 0x006FD436: mov edx, 0x80688c */
    ecx = esi; /* 0x006FD43B: mov ecx, esi */
    RECOMP_CALL(sub_006F2DF0); /* 0x006FD43D: call 0x6f2df0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FD442: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FD444: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x006FD446: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006FD449: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_006FD670; /* 0x006FD44C: jmp 0x6fd670 */
L_006FD451:
    RECOMP_CALL(sub_006EC240); /* 0x006FD451: call 0x6ec240 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FD456: mov esi, eax */
    /* test esi, esi */ /* 0x006FD458: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD472; /* 0x006FD45A: je 0x6fd472 */
L_006FD45C:
    ecx = esi; /* 0x006FD45C: mov ecx, esi */
    RECOMP_CALL(sub_006EB810); /* 0x006FD45E: call 0x6eb810 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x006FD463: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD470; /* 0x006FD465: je 0x6fd470 */
L_006FD467:
    ecx = esi; /* 0x006FD467: mov ecx, esi */
    RECOMP_CALL(sub_006EBDF0); /* 0x006FD469: call 0x6ebdf0 */
    RECOMP_FLAGS_IN();
    goto L_006FD472; /* 0x006FD46E: jmp 0x6fd472 */
L_006FD470:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FD470: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD472:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FD472: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x68)) = 0; /* 0x006FD475: mov dword ptr [ebp - 0x68], 0 */
    xmm_st(ebp + (-0x80), _xmm[0]); /* 0x006FD47C: movdqu xmmword ptr [ebp - 0x80], xmm0 */
    eax = ebp + (-0x60); /* 0x006FD481: lea eax, [ebp - 0x60] */
    MEM32(ebp + (-0x80)) = 0x20u; /* 0x006FD484: mov dword ptr [ebp - 0x80], 0x20 */
    MEM64(ebp + (-0x70)) = _xmm[0].u64[0]; /* 0x006FD48B: movq qword ptr [ebp - 0x70], xmm0 */
    edx = ebp + (-0x64); /* 0x006FD490: lea edx, [ebp - 0x64] */
    ecx = ebp + (-0x80); /* 0x006FD493: lea ecx, [ebp - 0x80] */
    MEM32(ebp + (-0x7C)) = esi; /* 0x006FD496: mov dword ptr [ebp - 0x7c], esi */
    MEM32(ebp + (-0x78)) = 0x00806878u; /* 0x006FD499: mov dword ptr [ebp - 0x78], 0x806878 */
    MEM32(ebp + (-0x74)) = edi; /* 0x006FD4A0: mov dword ptr [ebp - 0x74], edi */
    MEM32(ebp + (-0x70)) = 5; /* 0x006FD4A3: mov dword ptr [ebp - 0x70], 5 */
    MEM32(ebp + (-0x6C)) = eax; /* 0x006FD4AA: mov dword ptr [ebp - 0x6c], eax */
    RECOMP_CALL(sub_006EC9F0); /* 0x006FD4AD: call 0x6ec9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FD4B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD4C9; /* 0x006FD4B4: jne 0x6fd4c9 */
L_006FD4B6:
    ebx = MEM32(ebp + (-0x64)); /* 0x006FD4B6: mov ebx, dword ptr [ebp - 0x64] */
    eax = 3; /* 0x006FD4B9: mov eax, 3 */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x006FD4BE: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x006FD4C1: cmove ebx, eax */
    goto L_006FD663; /* 0x006FD4C4: jmp 0x6fd663 */
L_006FD4C9:
    edi = MEM32(0x7CC5E8); /* 0x006FD4C9: mov edi, dword ptr [0x7cc5e8] */
    PUSH32(esp, 0x008068ACu); /* 0x006FD4CF: push 0x8068ac */
    RECOMP_ICALL(edi); /* 0x006FD4D4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x006FD4D6: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FD4D9: push eax */
    RECOMP_ICALL(MEM32(0x7CC560)); /* 0x006FD4DA: call dword ptr [0x7cc560] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x006FD4E0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x006FD4E2: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FD4E5: push eax */
    RECOMP_ICALL(MEM32(0x7CC474)); /* 0x006FD4E6: call dword ptr [0x7cc474] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FD4EC: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ICALL(edi); /* 0x006FD4EF: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006FD4F1: push eax */
    eax = ebp + (-0x24); /* 0x006FD4F2: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x20u); /* 0x006FD4F5: push 0x20 */
    PUSH32(esp, eax); /* 0x006FD4F7: push eax */
    RECOMP_ICALL(MEM32(0x7CC5EC)); /* 0x006FD4F8: call dword ptr [0x7cc5ec] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FD4FE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FD501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD663; /* 0x006FD503: je 0x6fd663 */
L_006FD509:
    esp = esp; /* 0x006FD509: lea esp, [esp] */
L_006FD510:
    ecx = 0x007E1EB8u; /* 0x006FD510: mov ecx, 0x7e1eb8 */
    eax = ebp + (-0x24); /* 0x006FD515: lea eax, [ebp - 0x24] */
L_006FD518:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD518: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD51A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD537; /* 0x006FD51C: jne 0x6fd537 */
L_006FD51E:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD51E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD533; /* 0x006FD520: je 0x6fd533 */
L_006FD522:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD522: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD525: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD537; /* 0x006FD528: jne 0x6fd537 */
L_006FD52A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD52A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD52D: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD52F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD518; /* 0x006FD531: jne 0x6fd518 */
L_006FD533:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD533: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD53C; /* 0x006FD535: jmp 0x6fd53c */
L_006FD537:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD537: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD539: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD53C:
    /* test eax, eax */ /* 0x006FD53C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD663; /* 0x006FD53E: je 0x6fd663 */
L_006FD544:
    ecx = 0x007E1EC8u; /* 0x006FD544: mov ecx, 0x7e1ec8 */
    eax = ebp + (-0x24); /* 0x006FD549: lea eax, [ebp - 0x24] */
    esp = esp; /* 0x006FD54C: lea esp, [esp] */
L_006FD550:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD550: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD552: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD56F; /* 0x006FD554: jne 0x6fd56f */
L_006FD556:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD556: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD56B; /* 0x006FD558: je 0x6fd56b */
L_006FD55A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD55A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD55D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD56F; /* 0x006FD560: jne 0x6fd56f */
L_006FD562:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD562: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD565: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD567: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD550; /* 0x006FD569: jne 0x6fd550 */
L_006FD56B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD56B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD574; /* 0x006FD56D: jmp 0x6fd574 */
L_006FD56F:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD56F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD571: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD574:
    /* test eax, eax */ /* 0x006FD574: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD65E; /* 0x006FD576: je 0x6fd65e */
L_006FD57C:
    ecx = 0x007FFB90u; /* 0x006FD57C: mov ecx, 0x7ffb90 */
    eax = ebp + (-0x24); /* 0x006FD581: lea eax, [ebp - 0x24] */
L_006FD584:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD584: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD586: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD5A3; /* 0x006FD588: jne 0x6fd5a3 */
L_006FD58A:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD58A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD59F; /* 0x006FD58C: je 0x6fd59f */
L_006FD58E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD58E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD591: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD5A3; /* 0x006FD594: jne 0x6fd5a3 */
L_006FD596:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD596: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD599: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD59B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD584; /* 0x006FD59D: jne 0x6fd584 */
L_006FD59F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD59F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD5A8; /* 0x006FD5A1: jmp 0x6fd5a8 */
L_006FD5A3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD5A3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD5A5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD5A8:
    /* test eax, eax */ /* 0x006FD5A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD65A; /* 0x006FD5AA: je 0x6fd65a */
L_006FD5B0:
    ecx = 0x007CE20Cu; /* 0x006FD5B0: mov ecx, 0x7ce20c */
    eax = ebp + (-0x24); /* 0x006FD5B5: lea eax, [ebp - 0x24] */
L_006FD5B8:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD5B8: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD5BA: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD5D7; /* 0x006FD5BC: jne 0x6fd5d7 */
L_006FD5BE:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD5BE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD5D3; /* 0x006FD5C0: je 0x6fd5d3 */
L_006FD5C2:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD5C2: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD5C5: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD5D7; /* 0x006FD5C8: jne 0x6fd5d7 */
L_006FD5CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD5CA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD5CD: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD5CF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD5B8; /* 0x006FD5D1: jne 0x6fd5b8 */
L_006FD5D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD5D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD5DC; /* 0x006FD5D5: jmp 0x6fd5dc */
L_006FD5D7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD5D7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD5D9: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD5DC:
    /* test eax, eax */ /* 0x006FD5DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD653; /* 0x006FD5DE: je 0x6fd653 */
L_006FD5E0:
    ecx = 0x007E1ECCu; /* 0x006FD5E0: mov ecx, 0x7e1ecc */
    eax = ebp + (-0x24); /* 0x006FD5E5: lea eax, [ebp - 0x24] */
L_006FD5E8:
    SET_LO8(edx, MEM8(eax)); /* 0x006FD5E8: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006FD5EA: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD607; /* 0x006FD5EC: jne 0x6fd607 */
L_006FD5EE:
    /* test LO8(edx), LO8(edx) */ /* 0x006FD5EE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD603; /* 0x006FD5F0: je 0x6fd603 */
L_006FD5F2:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006FD5F2: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006FD5F5: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD607; /* 0x006FD5F8: jne 0x6fd607 */
L_006FD5FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006FD5FA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006FD5FD: add ecx, ebx */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006FD5FF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD5E8; /* 0x006FD601: jne 0x6fd5e8 */
L_006FD603:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD603: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD60C; /* 0x006FD605: jmp 0x6fd60c */
L_006FD607:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006FD607: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006FD609: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FD60C:
    /* test eax, eax */ /* 0x006FD60C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD64C; /* 0x006FD60E: je 0x6fd64c */
L_006FD610:
    PUSH32(esp, 0x008068ACu); /* 0x006FD610: push 0x8068ac */
    RECOMP_ICALL(edi); /* 0x006FD615: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x006FD617: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FD61A: push eax */
    RECOMP_ICALL(MEM32(0x7CC560)); /* 0x006FD61B: call dword ptr [0x7cc560] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x006FD621: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x006FD623: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FD626: push eax */
    RECOMP_ICALL(MEM32(0x7CC474)); /* 0x006FD627: call dword ptr [0x7cc474] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FD62D: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ICALL(edi); /* 0x006FD630: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006FD632: push eax */
    eax = ebp + (-0x24); /* 0x006FD633: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x20u); /* 0x006FD636: push 0x20 */
    PUSH32(esp, eax); /* 0x006FD638: push eax */
    RECOMP_ICALL(MEM32(0x7CC5EC)); /* 0x006FD639: call dword ptr [0x7cc5ec] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FD63F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FD642: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD510; /* 0x006FD644: jne 0x6fd510 */
L_006FD64A:
    goto L_006FD663; /* 0x006FD64A: jmp 0x6fd663 */
L_006FD64C:
    ebx = 4; /* 0x006FD64C: mov ebx, 4 */
    goto L_006FD663; /* 0x006FD651: jmp 0x6fd663 */
L_006FD653:
    ebx = 3; /* 0x006FD653: mov ebx, 3 */
    goto L_006FD663; /* 0x006FD658: jmp 0x6fd663 */
L_006FD65A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006FD65A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD663; /* 0x006FD65C: jmp 0x6fd663 */
L_006FD65E:
    ebx = 1; /* 0x006FD65E: mov ebx, 1 */
L_006FD663:
    /* test esi, esi */ /* 0x006FD663: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD66E; /* 0x006FD665: je 0x6fd66e */
L_006FD667:
    ecx = esi; /* 0x006FD667: mov ecx, esi */
    RECOMP_CALL(sub_006EBE50); /* 0x006FD669: call 0x6ebe50 */
    RECOMP_FLAGS_IN();
L_006FD66E:
    eax = ebx; /* 0x006FD66E: mov eax, ebx */
L_006FD670:
    esp = ebp + (-0x90); /* 0x006FD670: lea esp, [ebp - 0x90] */
    edi = POP32_VAL(esp); /* 0x006FD676: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD677: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FD678: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FD679: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FD67C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FD67E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FD683: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FD685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD686: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD6D0u);

L_006FD6D0:
    PUSH32(esp, ebp); /* 0x006FD6D0: push ebp */
    ebp = esp; /* 0x006FD6D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FD6D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006FD6D6: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006FD6D9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006FD6DA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006FD6DD: push esi */
    PUSH32(esp, edi); /* 0x006FD6DE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FD6DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FD6E1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0xA0; /* 0x006FD6E3: lea eax, [ebx + 0xa0] */
    MEM32(esp + 0x1C) = eax; /* 0x006FD6E9: mov dword ptr [esp + 0x1c], eax */
L_006FD6ED:
    ecx = ebx + 0x90; /* 0x006FD6ED: lea ecx, [ebx + 0x90] */
L_006FD6F3:
    RECOMP_CALL(sub_006FEDE0); /* 0x006FD6F3: call 0x6fede0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x006FD6F8: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(ebx + 0x98); /* 0x006FD6FB: mov ebx, dword ptr [ebx + 0x98] */
    MEM32(ecx + 0x98) = 0; /* 0x006FD701: mov dword ptr [ecx + 0x98], 0 */
    /* test edi, edi */ /* 0x006FD70B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD71E; /* 0x006FD70D: je 0x6fd71e */
L_006FD70F:
    eax = MEM32(ecx + 0x9C); /* 0x006FD70F: mov eax, dword ptr [ecx + 0x9c] */
    MEM32(esi + 0x18) = eax; /* 0x006FD715: mov dword ptr [esi + 0x18], eax */
    MEM32(ecx + 0x9C) = edi; /* 0x006FD718: mov dword ptr [ecx + 0x9c], edi */
L_006FD71E:
    MEM32(ecx + 0x90) = 0; /* 0x006FD71E: mov dword ptr [ecx + 0x90], 0 */
    /* test ebx, ebx */ /* 0x006FD728: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD77C; /* 0x006FD72A: je 0x6fd77c */
L_006FD72C:
    esp = esp; /* 0x006FD72C: lea esp, [esp] */
L_006FD730:
    eax = ebx + 0x18; /* 0x006FD730: lea eax, [ebx + 0x18] */
    edi = ebx; /* 0x006FD733: mov edi, ebx */
    ebx = MEM32(eax); /* 0x006FD735: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006FD737: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x006FD739: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(ecx + 0xA4); /* 0x006FD73D: mov eax, dword ptr [ecx + 0xa4] */
    /* test eax, eax */ /* 0x006FD743: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD76C; /* 0x006FD745: je 0x6fd76c */
L_006FD747:
    esi = MEM32(edi + 0x10); /* 0x006FD747: mov esi, dword ptr [edi + 0x10] */
    ebx = ebx; /* 0x006FD74A: lea ebx, [ebx] */
L_006FD750:
    ecx = esi; /* 0x006FD750: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x10); /* 0x006FD752: sub ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_006FD760; /* 0x006FD755: js 0x6fd760 */
L_006FD757:
    edx = eax; /* 0x006FD757: mov edx, eax */
    eax = MEM32(eax + 0x18); /* 0x006FD759: mov eax, dword ptr [eax + 0x18] */
    /* test eax, eax */ /* 0x006FD75C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD750; /* 0x006FD75E: jne 0x6fd750 */
L_006FD760:
    ecx = MEM32(ebp + 0x8); /* 0x006FD760: mov ecx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006FD763: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD76C; /* 0x006FD765: je 0x6fd76c */
L_006FD767:
    MEM32(edx + 0x18) = edi; /* 0x006FD767: mov dword ptr [edx + 0x18], edi */
    goto L_006FD772; /* 0x006FD76A: jmp 0x6fd772 */
L_006FD76C:
    MEM32(ecx + 0xA4) = edi; /* 0x006FD76C: mov dword ptr [ecx + 0xa4], edi */
L_006FD772:
    edx = MEM32(esp + 0x18); /* 0x006FD772: mov edx, dword ptr [esp + 0x18] */
    MEM32(edx) = eax; /* 0x006FD776: mov dword ptr [edx], eax */
    /* test ebx, ebx */ /* 0x006FD778: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD730; /* 0x006FD77A: jne 0x6fd730 */
L_006FD77C:
    ebx = MEM32(esp + 0x1C); /* 0x006FD77C: mov ebx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006FD780: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edi; /* 0x006FD782: mov dword ptr [esp + 0x10], edi */
    MEM32(esp + 0xC) = edi; /* 0x006FD786: mov dword ptr [esp + 0xc], edi */
    ebx = ebx; /* 0x006FD78A: lea ebx, [ebx] */
L_006FD790:
    edx = MEM32(ebx); /* 0x006FD790: mov edx, dword ptr [ebx] */
    ecx = edx; /* 0x006FD792: mov ecx, edx */
    eax = edx; /* 0x006FD794: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x006FD796: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006FD79A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD790; /* 0x006FD79C: jne 0x6fd790 */
L_006FD79E:
    /* test edx, edx */ /* 0x006FD79E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD91F; /* 0x006FD7A0: je 0x6fd91f */
L_006FD7A6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FD7A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x006FD7A9: mov dword ptr [esp + 0x18], eax */
    RECOMP_CALL(sub_006EE000); /* 0x006FD7AD: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x006FD7B2: mov ebx, dword ptr [ebp + 8] */
    edx = eax; /* 0x006FD7B5: mov edx, eax */
    MEM32(esp + 0x14) = edx; /* 0x006FD7B7: mov dword ptr [esp + 0x14], edx */
    /* cmp MEM32(ebx + 0xA4), edi */ /* 0x006FD7BB: cmp dword ptr [ebx + 0xa4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xA4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FD896; /* 0x006FD7C1: je 0x6fd896 */
L_006FD7C7:
    goto L_006FD7D4; /* 0x006FD7C7: jmp 0x6fd7d4 */
L_006FD7D0:
    edx = MEM32(esp + 0x14); /* 0x006FD7D0: mov edx, dword ptr [esp + 0x14] */
L_006FD7D4:
    esi = MEM32(ebx + 0xA4); /* 0x006FD7D4: mov esi, dword ptr [ebx + 0xa4] */
    ecx = edx; /* 0x006FD7DA: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x10); /* 0x006FD7DC: sub ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_006FD889; /* 0x006FD7DF: js 0x6fd889 */
L_006FD7E5:
    eax = MEM32(esi + 0x18); /* 0x006FD7E5: mov eax, dword ptr [esi + 0x18] */
    edi = esi + 0x14; /* 0x006FD7E8: lea edi, [esi + 0x14] */
    MEM32(ebx + 0xA4) = eax; /* 0x006FD7EB: mov dword ptr [ebx + 0xa4], eax */
L_006FD7F1:
    edx = MEM32(edi); /* 0x006FD7F1: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x006FD7F3: mov ecx, edx */
    eax = edx; /* 0x006FD7F5: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x006FD7F7: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006FD7FB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD7F1; /* 0x006FD7FD: jne 0x6fd7f1 */
L_006FD7FF:
    /* test edx, edx */ /* 0x006FD7FF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD857; /* 0x006FD801: jne 0x6fd857 */
L_006FD803:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006FD803: push dword ptr [esi + 8] */
    eax = MEM32(esi + 0x4); /* 0x006FD806: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006FD809: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x006FD80C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD80E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FD811: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD857; /* 0x006FD813: je 0x6fd857 */
L_006FD815:
    edi = MEM32(esp + 0x14); /* 0x006FD815: mov edi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006FD819: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006FD81B: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edi; /* 0x006FD81D: mov dword ptr [esi + 0x10], edi */
    ecx = MEM32(ebx + 0xA4); /* 0x006FD820: mov ecx, dword ptr [ebx + 0xa4] */
    /* test ecx, ecx */ /* 0x006FD826: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD84C; /* 0x006FD828: je 0x6fd84c */
L_006FD82A:
    ebx = ebx; /* 0x006FD82A: lea ebx, [ebx] */
L_006FD830:
    eax = edi; /* 0x006FD830: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x10); /* 0x006FD832: sub eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_006FD840; /* 0x006FD835: js 0x6fd840 */
L_006FD837:
    edx = ecx; /* 0x006FD837: mov edx, ecx */
    ecx = MEM32(ecx + 0x18); /* 0x006FD839: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x006FD83C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD830; /* 0x006FD83E: jne 0x6fd830 */
L_006FD840:
    /* test edx, edx */ /* 0x006FD840: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD84C; /* 0x006FD842: je 0x6fd84c */
L_006FD844:
    MEM32(edx + 0x18) = esi; /* 0x006FD844: mov dword ptr [edx + 0x18], esi */
    MEM32(esi + 0x18) = ecx; /* 0x006FD847: mov dword ptr [esi + 0x18], ecx */
    goto L_006FD87A; /* 0x006FD84A: jmp 0x6fd87a */
L_006FD84C:
    MEM32(ebx + 0xA4) = esi; /* 0x006FD84C: mov dword ptr [ebx + 0xa4], esi */
    MEM32(esi + 0x18) = ecx; /* 0x006FD852: mov dword ptr [esi + 0x18], ecx */
    goto L_006FD87A; /* 0x006FD855: jmp 0x6fd87a */
L_006FD857:
    eax = MEM32(esp + 0x10); /* 0x006FD857: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x006FD85B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = esi; } /* 0x006FD85D: cmove eax, esi */
    MEM32(esp + 0x10) = eax; /* 0x006FD860: mov dword ptr [esp + 0x10], eax */
    eax = MEM32(esp + 0xC); /* 0x006FD864: mov eax, dword ptr [esp + 0xc] */
    /* test eax, eax */ /* 0x006FD868: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD86F; /* 0x006FD86A: je 0x6fd86f */
L_006FD86C:
    MEM32(eax + 0x18) = esi; /* 0x006FD86C: mov dword ptr [eax + 0x18], esi */
L_006FD86F:
    MEM32(esp + 0xC) = esi; /* 0x006FD86F: mov dword ptr [esp + 0xc], esi */
    eax = 1; /* 0x006FD873: mov eax, 1 */
    { uint32_t _tmp = MEM32(edi); /* 0x006FD878: xchg dword ptr [edi], eax */
      MEM32(edi) = eax;
      eax = _tmp; }
L_006FD87A:
    /* cmp MEM32(ebx + 0xA4), 0 */ /* 0x006FD87A: cmp dword ptr [ebx + 0xa4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xA4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD7D0; /* 0x006FD881: jne 0x6fd7d0 */
L_006FD887:
    goto L_006FD892; /* 0x006FD887: jmp 0x6fd892 */
L_006FD889:
    eax = MEM32(esi + 0x10); /* 0x006FD889: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FD88C: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(esp + 0x18) = eax; /* 0x006FD88E: mov dword ptr [esp + 0x18], eax */
L_006FD892:
    edi = MEM32(esp + 0x10); /* 0x006FD892: mov edi, dword ptr [esp + 0x10] */
L_006FD896:
    RECOMP_CALL(sub_006EE000); /* 0x006FD896: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x14); /* 0x006FD89B: sub eax, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    ecx = MEM32(esp + 0x18); /* 0x006FD89F: mov ecx, dword ptr [esp + 0x18] */
    /* cmp eax, ecx */ /* 0x006FD8A3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006FD8AB; /* 0x006FD8A5: jbe 0x6fd8ab */
L_006FD8A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FD8A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FD8AD; /* 0x006FD8A9: jmp 0x6fd8ad */
L_006FD8AB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006FD8AB: sub ecx, eax */
    _flag_k = FK_CMP;
L_006FD8AD:
    esi = MEM32(ebx + 0x94); /* 0x006FD8AD: mov esi, dword ptr [ebx + 0x94] */
    /* test esi, esi */ /* 0x006FD8B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD8CD; /* 0x006FD8B5: jne 0x6fd8cd */
L_006FD8B7:
    PUSH32(esp, 0x00806B84u); /* 0x006FD8B7: push 0x806b84 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FD8BC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x10); /* 0x006FD8C1: mov esi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD8C5: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006FD6ED; /* 0x006FD8C8: jmp 0x6fd6ed */
L_006FD8CD:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x006FD8CD: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0xFFFFFFFFu; /* 0x006FD8D0: mov eax, 0xffffffff */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = eax; } /* 0x006FD8D5: cmove ecx, eax */
    PUSH32(esp, ecx); /* 0x006FD8D8: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x006FD8D9: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x006FD8DB: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FD8E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD90C; /* 0x006FD8E3: je 0x6fd90c */
L_006FD8E5:
    esi = MEM32(esp + 0xC); /* 0x006FD8E5: mov esi, dword ptr [esp + 0xc] */
    ecx = ebx + 0x90; /* 0x006FD8E9: lea ecx, [ebx + 0x90] */
    /* cmp eax, 0x102u */ /* 0x006FD8EF: cmp eax, 0x102 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FD6F3; /* 0x006FD8F4: je 0x6fd6f3 */
L_006FD8FA:
    PUSH32(esp, 0x00806B64u); /* 0x006FD8FA: push 0x806b64 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FD8FF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD904: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006FD6ED; /* 0x006FD907: jmp 0x6fd6ed */
L_006FD90C:
    eax = esi + 0x4; /* 0x006FD90C: lea eax, [esi + 4] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x006FD90F: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x006FD912: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    esi = MEM32(esp + 0xC); /* 0x006FD916: mov esi, dword ptr [esp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_006FD6ED; /* 0x006FD91A: jmp 0x6fd6ed */
L_006FD91F:
    edi = POP32_VAL(esp); /* 0x006FD91F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD920: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD921: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FD923: pop ebx */
    esp = ebp; /* 0x006FD924: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FD926: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD927: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FD930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FD930u);

L_006FD930:
    PUSH32(esp, ecx); /* 0x006FD930: push ecx */
    PUSH32(esp, esi); /* 0x006FD931: push esi */
    PUSH32(esp, edi); /* 0x006FD932: push edi */
    edi = 0x00926BC0u; /* 0x006FD933: mov edi, 0x926bc0 */
    goto L_006FD940; /* 0x006FD938: jmp 0x6fd940 */
L_006FD940:
    edx = MEM32(0x926BC0); /* 0x006FD940: mov edx, dword ptr [0x926bc0] */
    ecx = edx; /* 0x006FD946: mov ecx, edx */
    eax = edx; /* 0x006FD948: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x006FD94A: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x006FD94E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FD940; /* 0x006FD950: jne 0x6fd940 */
L_006FD952:
    /* test edx, edx */ /* 0x006FD952: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD9FE; /* 0x006FD954: jne 0x6fd9fe */
L_006FD95A:
    PUSH32(esp, 0x18u); /* 0x006FD95A: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006FD95C: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FD962: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD964: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FD967: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD979; /* 0x006FD969: je 0x6fd979 */
L_006FD96B:
    PUSH32(esp, 0x7D0u); /* 0x006FD96B: push 0x7d0 */
    PUSH32(esp, esi); /* 0x006FD970: push esi */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x006FD971: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_006FD986; /* 0x006FD977: jmp 0x6fd986 */
L_006FD979:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FD979: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FD97E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD983: add esp, 4 */
    _flag_k = FK_ADD;
L_006FD986:
    MEM32(0x926B2C) = esi; /* 0x006FD986: mov dword ptr [0x926b2c], esi */
    /* test esi, esi */ /* 0x006FD98C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD9B9; /* 0x006FD98E: je 0x6fd9b9 */
L_006FD990:
    RECOMP_CALL(sub_006FEC50); /* 0x006FD990: call 0x6fec50 */
    RECOMP_FLAGS_IN();
    MEM32(0x926BB4) = eax; /* 0x006FD995: mov dword ptr [0x926bb4], eax */
    /* test eax, eax */ /* 0x006FD99A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD9C0; /* 0x006FD99C: jne 0x6fd9c0 */
L_006FD99E:
    esi = MEM32(0x926B2C); /* 0x006FD99E: mov esi, dword ptr [0x926b2c] */
    /* test esi, esi */ /* 0x006FD9A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FD9B9; /* 0x006FD9A6: je 0x6fd9b9 */
L_006FD9A8:
    PUSH32(esp, esi); /* 0x006FD9A8: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006FD9A9: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006FD9AF: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FD9B0: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FD9B6: add esp, 4 */
    _flag_k = FK_ADD;
L_006FD9B9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FD9B9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FD9BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD9BD: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FD9BE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD9BF: ret  */
L_006FD9C0:
    esi = 1; /* 0x006FD9C0: mov esi, 1 */
    eax = esi; /* 0x006FD9C5: mov eax, esi */
    { uint32_t _tmp = MEM32(edi); /* 0x006FD9C7: xchg dword ptr [edi], eax */
      MEM32(edi) = eax;
      eax = _tmp; }
    PUSH32(esp, 0x00926B20u); /* 0x006FD9C9: push 0x926b20 */
    PUSH32(esp, 0); /* 0x006FD9CE: push 0 */
    edx = 0x00806960u; /* 0x006FD9D0: mov edx, 0x806960 */
    ecx = 0x006FD6D0u; /* 0x006FD9D5: mov ecx, 0x6fd6d0 */
    RECOMP_CALL(sub_006EE580); /* 0x006FD9DA: call 0x6ee580 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FD9DF: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(0x926B20) = eax; /* 0x006FD9E2: mov dword ptr [0x926b20], eax */
    /* test eax, eax */ /* 0x006FD9E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FD9F7; /* 0x006FD9E9: jne 0x6fd9f7 */
L_006FD9EB:
    RECOMP_CALL(sub_006FDA10); /* 0x006FD9EB: call 0x6fda10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FD9F0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FD9F3: pop edi */
    esi = POP32_VAL(esp); /* 0x006FD9F4: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FD9F5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FD9F6: ret  */
L_006FD9F7:
    eax = 0x00926B24u; /* 0x006FD9F7: mov eax, 0x926b24 */
    { uint32_t _tmp = MEM32(eax); /* 0x006FD9FC: xchg dword ptr [eax], esi */
      MEM32(eax) = esi;
      esi = _tmp; }
L_006FD9FE:
    edi = POP32_VAL(esp); /* 0x006FD9FE: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FD9FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FDA01: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FDA02: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDA03: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FDA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FDA10u);

L_006FDA10:
    PUSH32(esp, ecx); /* 0x006FDA10: push ecx */
    PUSH32(esp, esi); /* 0x006FDA11: push esi */
    PUSH32(esp, edi); /* 0x006FDA12: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FDA13: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x00926BC0u; /* 0x006FDA15: mov edx, 0x926bc0 */
    eax = 1; /* 0x006FDA1A: mov eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x006FDA1F: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x006FDA23: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FDB0F; /* 0x006FDA26: jne 0x6fdb0f */
L_006FDA2C:
    /* cmp MEM32(0x926B20), 0 */ /* 0x006FDA2C: cmp dword ptr [0x926b20], 0 */
    _flag_a = (uint32_t)(MEM32(0x926B20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FDA55; /* 0x006FDA33: je 0x6fda55 */
L_006FDA35:
    ecx = MEM32(0x926BB4); /* 0x006FDA35: mov ecx, dword ptr [0x926bb4] */
    RECOMP_CALL(sub_006FED90); /* 0x006FDA3B: call 0x6fed90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x926B20); /* 0x006FDA40: mov ecx, dword ptr [0x926b20] */
    RECOMP_CALL(sub_006EE760); /* 0x006FDA46: call 0x6ee760 */
    RECOMP_FLAGS_IN();
    MEM32(0x926B20) = 0; /* 0x006FDA4B: mov dword ptr [0x926b20], 0 */
L_006FDA55:
    edi = MEM32(0x926BB4); /* 0x006FDA55: mov edi, dword ptr [0x926bb4] */
    esi = MEM32(0x7CC44C); /* 0x006FDA5B: mov esi, dword ptr [0x7cc44c] */
    /* test edi, edi */ /* 0x006FDA61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDA7E; /* 0x006FDA63: je 0x6fda7e */
L_006FDA65:
    eax = MEM32(edi); /* 0x006FDA65: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x006FDA67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDA78; /* 0x006FDA69: je 0x6fda78 */
L_006FDA6B:
    PUSH32(esp, eax); /* 0x006FDA6B: push eax */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x006FDA6C: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0; /* 0x006FDA72: mov dword ptr [edi], 0 */
L_006FDA78:
    PUSH32(esp, edi); /* 0x006FDA78: push edi */
    RECOMP_ICALL(esi); /* 0x006FDA79: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDA7B: add esp, 4 */
    _flag_k = FK_ADD;
L_006FDA7E:
    ecx = MEM32(0x926BC4); /* 0x006FDA7E: mov ecx, dword ptr [0x926bc4] */
    MEM32(0x926BB4) = 0; /* 0x006FDA84: mov dword ptr [0x926bb4], 0 */
    /* test ecx, ecx */ /* 0x006FDA8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDAAA; /* 0x006FDA90: je 0x6fdaaa */
L_006FDA92:
    eax = MEM32(ecx + 0x18); /* 0x006FDA92: mov eax, dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx); /* 0x006FDA95: push ecx */
    MEM32(0x926BC4) = eax; /* 0x006FDA96: mov dword ptr [0x926bc4], eax */
    RECOMP_ICALL(esi); /* 0x006FDA9B: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x926BC4); /* 0x006FDA9D: mov ecx, dword ptr [0x926bc4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDAA3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006FDAA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDA92; /* 0x006FDAA8: jne 0x6fda92 */
L_006FDAAA:
    ecx = MEM32(0x926BBC); /* 0x006FDAAA: mov ecx, dword ptr [0x926bbc] */
    /* test ecx, ecx */ /* 0x006FDAB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDACC; /* 0x006FDAB2: je 0x6fdacc */
L_006FDAB4:
    eax = MEM32(ecx + 0x18); /* 0x006FDAB4: mov eax, dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx); /* 0x006FDAB7: push ecx */
    MEM32(0x926BBC) = eax; /* 0x006FDAB8: mov dword ptr [0x926bbc], eax */
    RECOMP_ICALL(esi); /* 0x006FDABD: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x926BBC); /* 0x006FDABF: mov ecx, dword ptr [0x926bbc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDAC5: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006FDAC8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDAB4; /* 0x006FDACA: jne 0x6fdab4 */
L_006FDACC:
    ecx = MEM32(0x926B28); /* 0x006FDACC: mov ecx, dword ptr [0x926b28] */
    /* test ecx, ecx */ /* 0x006FDAD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDAEE; /* 0x006FDAD4: je 0x6fdaee */
L_006FDAD6:
    eax = MEM32(ecx + 0x8); /* 0x006FDAD6: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x006FDAD9: push ecx */
    MEM32(0x926B28) = eax; /* 0x006FDADA: mov dword ptr [0x926b28], eax */
    RECOMP_ICALL(esi); /* 0x006FDADF: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x926B28); /* 0x006FDAE1: mov ecx, dword ptr [0x926b28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDAE7: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006FDAEA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDAD6; /* 0x006FDAEC: jne 0x6fdad6 */
L_006FDAEE:
    edi = MEM32(0x926B2C); /* 0x006FDAEE: mov edi, dword ptr [0x926b2c] */
    /* test edi, edi */ /* 0x006FDAF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDB05; /* 0x006FDAF6: je 0x6fdb05 */
L_006FDAF8:
    PUSH32(esp, edi); /* 0x006FDAF8: push edi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006FDAF9: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006FDAFF: push edi */
    RECOMP_ICALL(esi); /* 0x006FDB00: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDB02: add esp, 4 */
    _flag_k = FK_ADD;
L_006FDB05:
    MEM32(0x926B2C) = 0; /* 0x006FDB05: mov dword ptr [0x926b2c], 0 */
L_006FDB0F:
    edi = POP32_VAL(esp); /* 0x006FDB0F: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDB10: pop esi */
    ecx = POP32_VAL(esp); /* 0x006FDB11: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDB12: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FDB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FDB20u);

L_006FDB20:
    PUSH32(esp, ebp); /* 0x006FDB20: push ebp */
    ebp = esp; /* 0x006FDB21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006FDB23: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FDB26: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FDB2B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006FDB2D: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x006FDB30: push ebx */
    ebx = edx; /* 0x006FDB31: mov ebx, edx */
    ecx = 0x00804204u; /* 0x006FDB33: mov ecx, 0x804204 */
    PUSH32(esp, esi); /* 0x006FDB38: push esi */
    PUSH32(esp, edi); /* 0x006FDB39: push edi */
    eax = MEM32(ebx + 0x90); /* 0x006FDB3A: mov eax, dword ptr [ebx + 0x90] */
    MEM32(ebp + (-0x20)) = eax; /* 0x006FDB40: mov dword ptr [ebp - 0x20], eax */
    esi = MEM32(eax + 0x4); /* 0x006FDB43: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + (-0x24)) = esi; /* 0x006FDB46: mov dword ptr [ebp - 0x24], esi */
    RECOMP_CALL(sub_006F5A00); /* 0x006FDB49: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FDB4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDB6A; /* 0x006FDB50: je 0x6fdb6a */
L_006FDB52:
    /* cmp MEM8(eax), 0x30u */ /* 0x006FDB52: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FDB80; /* 0x006FDB55: je 0x6fdb80 */
L_006FDB57:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006FDB57: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006FDB5C: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006FDB5D: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FDB63: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FDB66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDB80; /* 0x006FDB68: je 0x6fdb80 */
L_006FDB6A:
    eax = MEM32(ebx + 0x30); /* 0x006FDB6A: mov eax, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x201u);
    eax = eax & 0x201u; /* 0x006FDB6D: and eax, 0x201 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0xFFFFFFFFu; /* 0x006FDB72: mov dword ptr [ebp - 0x1c], 0xffffffff */
    /* cmp eax, 0x201u */ /* 0x006FDB79: cmp eax, 0x201 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FDB87; /* 0x006FDB7E: je 0x6fdb87 */
L_006FDB80:
    MEM32(ebp + (-0x1C)) = 0xFFFFFFFEu; /* 0x006FDB80: mov dword ptr [ebp - 0x1c], 0xfffffffe */
L_006FDB87:
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FDB87: push -0x10 */
    PUSH32(esp, esi); /* 0x006FDB89: push esi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FDB8A: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x18); /* 0x006FDB90: mov ecx, dword ptr [ebx + 0x18] */
    edi = eax; /* 0x006FDB93: mov edi, eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x006FDB95: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebx + 0x1C); /* 0x006FDB98: mov ecx, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x006FDB9B: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x006FDBA2: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006FDBA9: mov dword ptr [ebp - 0xc], ecx */
    /* test edi, 0x40000000u */ /* 0x006FDBAC: test edi, 0x40000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDBB8; /* 0x006FDBB2: je 0x6fdbb8 */
L_006FDBB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FDBB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDBC5; /* 0x006FDBB6: jmp 0x6fdbc5 */
L_006FDBB8:
    PUSH32(esp, esi); /* 0x006FDBB8: push esi */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x006FDBB9: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FDBBF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FDBC1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FDBC3: neg eax */
    _flag_k = FK_CMP;
L_006FDBC5:
    PUSH32(esp, 0); /* 0x006FDBC5: push 0 */
    PUSH32(esp, eax); /* 0x006FDBC7: push eax */
    PUSH32(esp, edi); /* 0x006FDBC8: push edi */
    eax = ebp + (-0x18); /* 0x006FDBC9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x006FDBCC: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E4)); /* 0x006FDBCD: call dword ptr [0x7cc7e4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FDBD3: push dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x006FDBD6: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x10)); /* 0x006FDBD9: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x14)); /* 0x006FDBDC: sub esi, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x14); /* 0x006FDBDF: mov ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x18)); /* 0x006FDBE2: sub edi, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0x10); /* 0x006FDBE5: mov edx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x14)); /* 0x006FDBE8: add ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x18)); /* 0x006FDBEB: add edx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x20)); /* 0x006FDBEE: mov ebx, dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x006FDBF1: push esi */
    PUSH32(esp, edi); /* 0x006FDBF2: push edi */
    PUSH32(esp, ecx); /* 0x006FDBF3: push ecx */
    PUSH32(esp, edx); /* 0x006FDBF4: push edx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006FDBF5: push dword ptr [ebp - 0x1c] */
    MEM32(ebx + 0x24) = 1; /* 0x006FDBF8: mov dword ptr [ebx + 0x24], 1 */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x006FDBFF: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006FDC02: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x006FDC08: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x006FDC0B: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDC0C: pop esi */
    MEM32(ebx + 0x24) = 0; /* 0x006FDC0D: mov dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FDC14: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006FDC16: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FDC17: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FDC1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FDC1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDC1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FDC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FDC20u);

L_006FDC20:
    PUSH32(esp, ebp); /* 0x006FDC20: push ebp */
    ebp = esp; /* 0x006FDC21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FDC23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x006FDC26: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FDC29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006FDC2E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = eax; /* 0x006FDC30: mov dword ptr [esp + 0x30], eax */
    eax = MEM32(ecx + 0x29C); /* 0x006FDC34: mov eax, dword ptr [ecx + 0x29c] */
    PUSH32(esp, ebx); /* 0x006FDC3A: push ebx */
    PUSH32(esp, esi); /* 0x006FDC3B: push esi */
    PUSH32(esp, edi); /* 0x006FDC3C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006FDC3D: mov edi, dword ptr [ebp + 8] */
    esi = edx; /* 0x006FDC40: mov esi, edx */
    PUSH32(esp, 0x40u); /* 0x006FDC42: push 0x40 */
    PUSH32(esp, 1); /* 0x006FDC44: push 1 */
    MEM32(esp + 0x20) = eax; /* 0x006FDC46: mov dword ptr [esp + 0x20], eax */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006FDC4A: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006FDC50: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FDC52: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006FDC55: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDC78; /* 0x006FDC57: jne 0x6fdc78 */
L_006FDC59:
    PUSH32(esp, 0x00803E4Cu); /* 0x006FDC59: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006FDC5E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDC63: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FDC66: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDC67: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FDC68: pop ebx */
    ecx = MEM32(esp + 0x30); /* 0x006FDC69: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FDC6D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FDC6F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FDC74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FDC76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDC77: ret  */
L_006FDC78:
    PUSH32(esp, edi); /* 0x006FDC78: push edi */
    MEM32(ebx) = esi; /* 0x006FDC79: mov dword ptr [ebx], esi */
    MEM32(ebx + 0x4) = edi; /* 0x006FDC7B: mov dword ptr [ebx + 4], edi */
    RECOMP_ICALL(MEM32(0x7CC810)); /* 0x006FDC7E: call dword ptr [0x7cc810] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x8) = eax; /* 0x006FDC84: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FDC87: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006FDC8A: push ebx */
    MEM32(ebx + 0x18) = eax; /* 0x006FDC8B: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(esp + 0x1C); /* 0x006FDC8E: mov eax, dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x00806A5Cu); /* 0x006FDC92: push 0x806a5c */
    MEM32(ebx + 0x1C) = 0; /* 0x006FDC97: mov dword ptr [ebx + 0x1c], 0 */
    MEM32(ebx + 0x3C) = eax; /* 0x006FDC9E: mov dword ptr [ebx + 0x3c], eax */
    MEM32(ebx + 0x20) = 1; /* 0x006FDCA1: mov dword ptr [ebx + 0x20], 1 */
    PUSH32(esp, edi); /* 0x006FDCA8: push edi */
    MEM32(esi + 0x90) = ebx; /* 0x006FDCA9: mov dword ptr [esi + 0x90], ebx */
    RECOMP_ICALL(MEM32(0x7CC7D0)); /* 0x006FDCAF: call dword ptr [0x7cc7d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FDCB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDCF1; /* 0x006FDCB7: jne 0x6fdcf1 */
L_006FDCB9:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x006FDCB9: push dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x006FDCBC: push edi */
    RECOMP_ICALL(MEM32(0x7CC814)); /* 0x006FDCBD: call dword ptr [0x7cc814] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006FDCC3: push ebx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FDCC4: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDCCA: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FDCCD: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FDCD3: mov edx, eax */
    ecx = 0x008069B4u; /* 0x006FDCD5: mov ecx, 0x8069b4 */
    RECOMP_CALL(sub_006FFE20); /* 0x006FDCDA: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FDCDF: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDCE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FDCE1: pop ebx */
    ecx = MEM32(esp + 0x30); /* 0x006FDCE2: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FDCE6: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FDCE8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FDCED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FDCEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDCF0: ret  */
L_006FDCF1:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x006FDCF1: push -4 */
    PUSH32(esp, edi); /* 0x006FDCF3: push edi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FDCF4: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x14) = eax; /* 0x006FDCFA: mov dword ptr [ebx + 0x14], eax */
    /* cmp eax, 0x007112E0u */ /* 0x006FDCFD: cmp eax, 0x7112e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x007112E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FDD0D; /* 0x006FDD02: jne 0x6fdd0d */
L_006FDD04:
    MEM32(ebx + 0x14) = 0; /* 0x006FDD04: mov dword ptr [ebx + 0x14], 0 */
    goto L_006FDD1B; /* 0x006FDD0B: jmp 0x6fdd1b */
L_006FDD0D:
    PUSH32(esp, 0x007112E0u); /* 0x006FDD0D: push 0x7112e0 */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x006FDD12: push -4 */
    PUSH32(esp, edi); /* 0x006FDD14: push edi */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FDD15: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
L_006FDD1B:
    eax = esp + 0x2C; /* 0x006FDD1B: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x006FDD1F: push eax */
    PUSH32(esp, edi); /* 0x006FDD20: push edi */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006FDD21: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FDD27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDDE2; /* 0x006FDD29: je 0x6fdde2 */
L_006FDD2F:
    eax = MEM32(esi + 0x18); /* 0x006FDD2F: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(esp + 0x34); /* 0x006FDD32: mov ecx, dword ptr [esp + 0x34] */
    /* test eax, eax */ /* 0x006FDD36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDD3E; /* 0x006FDD38: je 0x6fdd3e */
L_006FDD3A:
    /* cmp eax, ecx */ /* 0x006FDD3A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FDD55; /* 0x006FDD3C: jne 0x6fdd55 */
L_006FDD3E:
    edx = MEM32(esi + 0x1C); /* 0x006FDD3E: mov edx, dword ptr [esi + 0x1c] */
    eax = MEM32(esp + 0x38); /* 0x006FDD41: mov eax, dword ptr [esp + 0x38] */
    /* test edx, edx */ /* 0x006FDD45: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDDDC; /* 0x006FDD47: je 0x6fdddc */
L_006FDD4D:
    /* cmp edx, eax */ /* 0x006FDD4D: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FDDDC; /* 0x006FDD4F: je 0x6fdddc */
L_006FDD55:
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FDD55: push -0x10 */
    PUSH32(esp, edi); /* 0x006FDD57: push edi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FDD58: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x006FDD5E: mov ecx, dword ptr [esi + 0x18] */
    MEM32(esp + 0x24) = ecx; /* 0x006FDD61: mov dword ptr [esp + 0x24], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x006FDD65: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(esp + 0x10) = eax; /* 0x006FDD68: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0x1C) = 0; /* 0x006FDD6C: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x20) = 0; /* 0x006FDD74: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x28) = ecx; /* 0x006FDD7C: mov dword ptr [esp + 0x28], ecx */
    /* test eax, 0x40000000u */ /* 0x006FDD80: test eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDD8B; /* 0x006FDD85: je 0x6fdd8b */
L_006FDD87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FDD87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDD98; /* 0x006FDD89: jmp 0x6fdd98 */
L_006FDD8B:
    PUSH32(esp, edi); /* 0x006FDD8B: push edi */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x006FDD8C: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FDD92: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FDD94: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FDD96: neg eax */
    _flag_k = FK_CMP;
L_006FDD98:
    PUSH32(esp, 0); /* 0x006FDD98: push 0 */
    PUSH32(esp, eax); /* 0x006FDD9A: push eax */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006FDD9B: push dword ptr [esp + 0x18] */
    eax = esp + 0x28; /* 0x006FDD9F: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x006FDDA3: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E4)); /* 0x006FDDA4: call dword ptr [0x7cc7e4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x28); /* 0x006FDDAA: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x20); /* 0x006FDDAE: sub eax, dword ptr [esp + 0x20] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x114u); /* 0x006FDDB2: push 0x114 */
    PUSH32(esp, eax); /* 0x006FDDB7: push eax */
    eax = MEM32(esp + 0x2C); /* 0x006FDDB8: mov eax, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x24); /* 0x006FDDBC: sub eax, dword ptr [esp + 0x24] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006FDDC0: push eax */
    eax = MEM32(esi + 0x14); /* 0x006FDDC1: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x2C); /* 0x006FDDC4: add eax, dword ptr [esp + 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FDDC8: push eax */
    eax = MEM32(esi + 0x10); /* 0x006FDDC9: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x2C); /* 0x006FDDCC: add eax, dword ptr [esp + 0x2c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FDDD0: push eax */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x006FDDD1: push -2 */
    PUSH32(esp, edi); /* 0x006FDDD3: push edi */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006FDDD4: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
    goto L_006FDDE2; /* 0x006FDDDA: jmp 0x6fdde2 */
L_006FDDDC:
    MEM32(esi + 0x18) = ecx; /* 0x006FDDDC: mov dword ptr [esi + 0x18], ecx */
    MEM32(esi + 0x1C) = eax; /* 0x006FDDDF: mov dword ptr [esi + 0x1c], eax */
L_006FDDE2:
    eax = esp + 0x10; /* 0x006FDDE2: lea eax, [esp + 0x10] */
    MEM32(esp + 0x10) = 0; /* 0x006FDDE6: mov dword ptr [esp + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006FDDEE: push eax */
    PUSH32(esp, edi); /* 0x006FDDEF: push edi */
    MEM32(esp + 0x1C) = 0; /* 0x006FDDF0: mov dword ptr [esp + 0x1c], 0 */
    RECOMP_ICALL(MEM32(0x7CC7B4)); /* 0x006FDDF8: call dword ptr [0x7cc7b4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FDDFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE10; /* 0x006FDE00: je 0x6fde10 */
L_006FDE02:
    eax = MEM32(esp + 0x10); /* 0x006FDE02: mov eax, dword ptr [esp + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x006FDE06: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(esp + 0x14); /* 0x006FDE09: mov eax, dword ptr [esp + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x006FDE0D: mov dword ptr [esi + 0x14], eax */
L_006FDE10:
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FDE10: push -0x10 */
    PUSH32(esp, edi); /* 0x006FDE12: push edi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FDE13: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    /* test eax, 0x10000000u */ /* 0x006FDE19: test eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE26; /* 0x006FDE1E: je 0x6fde26 */
L_006FDE20:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 4));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 4; /* 0x006FDE20: or dword ptr [esi + 0x30], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDE2A; /* 0x006FDE24: jmp 0x6fde2a */
L_006FDE26:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFFFFBu; /* 0x006FDE26: and dword ptr [esi + 0x30], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDE2A:
    /* test eax, 0x00840000u */ /* 0x006FDE2A: test eax, 0x840000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00840000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE37; /* 0x006FDE2F: je 0x6fde37 */
L_006FDE31:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFFFEFu; /* 0x006FDE31: and dword ptr [esi + 0x30], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDE3B; /* 0x006FDE35: jmp 0x6fde3b */
L_006FDE37:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x10u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x10u; /* 0x006FDE37: or dword ptr [esi + 0x30], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDE3B:
    /* test eax, 0x00040000u */ /* 0x006FDE3B: test eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE48; /* 0x006FDE40: je 0x6fde48 */
L_006FDE42:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x20u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x20u; /* 0x006FDE42: or dword ptr [esi + 0x30], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDE4C; /* 0x006FDE46: jmp 0x6fde4c */
L_006FDE48:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFFFDFu; /* 0x006FDE48: and dword ptr [esi + 0x30], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDE4C:
    /* test eax, 0x01000000u */ /* 0x006FDE4C: test eax, 0x1000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE5C; /* 0x006FDE51: je 0x6fde5c */
L_006FDE53:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x80u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x80u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x80u; /* 0x006FDE53: or dword ptr [esi + 0x30], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDE63; /* 0x006FDE5A: jmp 0x6fde63 */
L_006FDE5C:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFFF7Fu; /* 0x006FDE5C: and dword ptr [esi + 0x30], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDE63:
    /* test eax, 0x20000000u */ /* 0x006FDE63: test eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDE70; /* 0x006FDE68: je 0x6fde70 */
L_006FDE6A:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x40u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x40u; /* 0x006FDE6A: or dword ptr [esi + 0x30], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FDE74; /* 0x006FDE6E: jmp 0x6fde74 */
L_006FDE70:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFFFBFu; /* 0x006FDE70: and dword ptr [esi + 0x30], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDE74:
    RECOMP_ICALL(MEM32(0x7CC7C8)); /* 0x006FDE74: call dword ptr [0x7cc7c8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x006FDE7A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FDEC2; /* 0x006FDE7C: jne 0x6fdec2 */
L_006FDE7E:
    _flag_a = (uint32_t)((MEM32(esi + 0x30) | 0x200u)); _flag_b = (uint32_t)((MEM32(esi + 0x30) | 0x200u));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 0x200u; /* 0x006FDE7E: or dword ptr [esi + 0x30], 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx); /* 0x006FDE85: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_006EFCE0); /* 0x006FDE87: call 0x6efce0 */
    RECOMP_FLAGS_IN();
    /* test MEM32(esi + 0x30), 0x100u */ /* 0x006FDE8C: test dword ptr [esi + 0x30], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDEC2; /* 0x006FDE93: je 0x6fdec2 */
L_006FDE95:
    eax = esp + 0x1C; /* 0x006FDE95: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006FDE99: push eax */
    PUSH32(esp, edi); /* 0x006FDE9A: push edi */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006FDE9B: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC7B4); /* 0x006FDEA1: mov esi, dword ptr [0x7cc7b4] */
    eax = esp + 0x1C; /* 0x006FDEA7: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006FDEAB: push eax */
    PUSH32(esp, edi); /* 0x006FDEAC: push edi */
    RECOMP_ICALL(esi); /* 0x006FDEAD: call esi */
    RECOMP_FLAGS_IN();
    eax = esp + 0x24; /* 0x006FDEAF: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x006FDEB3: push eax */
    PUSH32(esp, edi); /* 0x006FDEB4: push edi */
    RECOMP_ICALL(esi); /* 0x006FDEB5: call esi */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1C; /* 0x006FDEB7: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006FDEBB: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E0)); /* 0x006FDEBC: call dword ptr [0x7cc7e0] */
    RECOMP_FLAGS_IN();
L_006FDEC2:
    eax = MEM32(esp + 0x18); /* 0x006FDEC2: mov eax, dword ptr [esp + 0x18] */
    eax = MEM32(eax + 0x14); /* 0x006FDEC6: mov eax, dword ptr [eax + 0x14] */
    /* test eax, eax */ /* 0x006FDEC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDED2; /* 0x006FDECB: je 0x6fded2 */
L_006FDECD:
    PUSH32(esp, 3); /* 0x006FDECD: push 3 */
    PUSH32(esp, edi); /* 0x006FDECF: push edi */
    RECOMP_ICALL(eax); /* 0x006FDED0: call eax */
    RECOMP_FLAGS_IN();
L_006FDED2:
    PUSH32(esp, 1); /* 0x006FDED2: push 1 */
    PUSH32(esp, edi); /* 0x006FDED4: push edi */
    RECOMP_ICALL(MEM32(0x7CC6E4)); /* 0x006FDED5: call dword ptr [0x7cc6e4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x3C); /* 0x006FDEDB: mov ecx, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FDEDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FDEE1: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDEE2: pop esi */
    MEM32(ebx + 0x20) = 0; /* 0x006FDEE3: mov dword ptr [ebx + 0x20], 0 */
    ebx = POP32_VAL(esp); /* 0x006FDEEA: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FDEEB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FDEED: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FDEF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FDEF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDEF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FDF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FDF00u);

L_006FDF00:
    PUSH32(esp, ebp); /* 0x006FDF00: push ebp */
    ebp = esp; /* 0x006FDF01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FDF03: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006FDF06: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FDF09: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006FDF0E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x006FDF10: mov dword ptr [esp + 0x18], eax */
    eax = MEM32(ebp + 0x8); /* 0x006FDF14: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006FDF17: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006FDF18: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x8) = eax; /* 0x006FDF1B: mov dword ptr [esp + 8], eax */
    PUSH32(esp, esi); /* 0x006FDF1F: push esi */
    PUSH32(esp, edi); /* 0x006FDF20: push edi */
    eax = MEM32(ebx + 0x30); /* 0x006FDF21: mov eax, dword ptr [ebx + 0x30] */
    /* test LO8(eax), 1 */ /* 0x006FDF24: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDF2F; /* 0x006FDF26: je 0x6fdf2f */
L_006FDF28:
    edi = 0x80000000u; /* 0x006FDF28: mov edi, 0x80000000 */
    goto L_006FDF48; /* 0x006FDF2D: jmp 0x6fdf48 */
L_006FDF2F:
    /* test LO8(eax), 0x10u */ /* 0x006FDF2F: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0x00CA0000u; /* 0x006FDF31: mov edi, 0xca0000 */
    ecx = 0x80000000u; /* 0x006FDF36: mov ecx, 0x80000000 */
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ecx; } /* 0x006FDF3B: cmovne edi, ecx */
    /* test LO8(eax), 0x20u */ /* 0x006FDF3E: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FDF48; /* 0x006FDF40: je 0x6fdf48 */
L_006FDF42:
    _flag_a = (uint32_t)((edi | 0x00050000u)); _flag_b = (uint32_t)((edi | 0x00050000u));
    edi = edi | 0x00050000u; /* 0x006FDF42: or edi, 0x50000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FDF48:
    ecx = MEM32(ebx + 0x10); /* 0x006FDF48: mov ecx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)((edi | 0x06000000u)); _flag_b = (uint32_t)((edi | 0x06000000u));
    edi = edi | 0x06000000u; /* 0x006FDF4B: or edi, 0x6000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x18); /* 0x006FDF51: mov eax, dword ptr [ebx + 0x18] */
    edx = MEM32(ebx + 0x14); /* 0x006FDF54: mov edx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006FDF57: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = eax; /* 0x006FDF59: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(ebx + 0x1C); /* 0x006FDF5D: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, 0); /* 0x006FDF60: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006FDF62: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(esp + 0x18) = ecx; /* 0x006FDF64: mov dword ptr [esp + 0x18], ecx */
    PUSH32(esp, 0); /* 0x006FDF68: push 0 */
    MEM32(esp + 0x28) = eax; /* 0x006FDF6A: mov dword ptr [esp + 0x28], eax */
    eax = esp + 0x1C; /* 0x006FDF6E: lea eax, [esp + 0x1c] */
    PUSH32(esp, edi); /* 0x006FDF72: push edi */
    PUSH32(esp, eax); /* 0x006FDF73: push eax */
    MEM32(esp + 0x28) = edx; /* 0x006FDF74: mov dword ptr [esp + 0x28], edx */
    RECOMP_ICALL(MEM32(0x7CC7E4)); /* 0x006FDF78: call dword ptr [0x7cc7e4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x006FDF7E: mov eax, dword ptr [esp + 0x20] */
    ecx = MEM32(esp + 0x18); /* 0x006FDF82: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006FDF86: sub eax, ecx */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x1C); /* 0x006FDF88: mov edx, dword ptr [esp + 0x1c] */
    esi = MEM32(esp + 0x14); /* 0x006FDF8C: mov esi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006FDF90: sub edx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x006FDF92: push 0 */
    PUSH32(esp, MEM32(0x87CC98)); /* 0x006FDF94: push dword ptr [0x87cc98] */
    PUSH32(esp, 0); /* 0x006FDF9A: push 0 */
    PUSH32(esp, 0); /* 0x006FDF9C: push 0 */
    PUSH32(esp, eax); /* 0x006FDF9E: push eax */
    PUSH32(esp, edx); /* 0x006FDF9F: push edx */
    PUSH32(esp, ecx); /* 0x006FDFA0: push ecx */
    PUSH32(esp, esi); /* 0x006FDFA1: push esi */
    PUSH32(esp, edi); /* 0x006FDFA2: push edi */
    PUSH32(esp, 0x007F533Cu); /* 0x006FDFA3: push 0x7f533c */
    PUSH32(esp, MEM32(0x87CC94)); /* 0x006FDFA8: push dword ptr [0x87cc94] */
    PUSH32(esp, 0); /* 0x006FDFAE: push 0 */
    RECOMP_ICALL(MEM32(0x7CC850)); /* 0x006FDFB0: call dword ptr [0x7cc850] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FDFB6: mov edi, eax */
    /* test edi, edi */ /* 0x006FDFB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FDFE0; /* 0x006FDFBA: jne 0x6fdfe0 */
L_006FDFBC:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FDFBC: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FDFC2: mov edx, eax */
    ecx = 0x0080699Cu; /* 0x006FDFC4: mov ecx, 0x80699c */
    RECOMP_CALL(sub_006FFE20); /* 0x006FDFC9: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FDFCE: pop edi */
    esi = POP32_VAL(esp); /* 0x006FDFCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FDFD0: pop ebx */
    ecx = MEM32(esp + 0x18); /* 0x006FDFD1: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FDFD5: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FDFD7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FDFDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FDFDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FDFDF: ret  */
L_006FDFE0:
    esi = MEM32(esp + 0x10); /* 0x006FDFE0: mov esi, dword ptr [esp + 0x10] */
    PUSH32(esp, esi); /* 0x006FDFE4: push esi */
    RECOMP_CALL(sub_007125B0); /* 0x006FDFE5: call 0x7125b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FDFEA: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x006FDFED: mov edx, ebx */
    ecx = esi; /* 0x006FDFEF: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006FDFF1: push 1 */
    PUSH32(esp, edi); /* 0x006FDFF3: push edi */
    RECOMP_CALL(sub_006FDC20); /* 0x006FDFF4: call 0x6fdc20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FDFF9: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FDFFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006FE01C; /* 0x006FDFFE: jns 0x6fe01c */
L_006FE000:
    PUSH32(esp, edi); /* 0x006FE000: push edi */
    RECOMP_ICALL(MEM32(0x7CC888)); /* 0x006FE001: call dword ptr [0x7cc888] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FE007: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FE00A: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE00B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE00C: pop ebx */
    ecx = MEM32(esp + 0x18); /* 0x006FE00D: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FE011: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FE013: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FE018: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE01A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE01B: ret  */
L_006FE01C:
    ecx = MEM32(esp + 0x24); /* 0x006FE01C: mov ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE020: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FE022: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE023: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE024: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FE025: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FE027: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FE02C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE02E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE02F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE030u);

L_006FE030:
    PUSH32(esp, ebp); /* 0x006FE030: push ebp */
    ebp = esp; /* 0x006FE031: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006FE033: push ecx */
    eax = MEM32(0x855000); /* 0x006FE034: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FE039: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FE03B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006FE03E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006FE03F: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x006FE042: push esi */
    PUSH32(esp, edi); /* 0x006FE043: push edi */
    PUSH32(esp, ebx); /* 0x006FE044: push ebx */
    RECOMP_ICALL(MEM32(0x7CC7B8)); /* 0x006FE045: call dword ptr [0x7cc7b8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FE04B: mov edi, eax */
    eax = edi * 2 + 0x2; /* 0x006FE04D: lea eax, [edi*2 + 2] */
    RECOMP_CALL(sub_00780140); /* 0x006FE054: call 0x780140 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x006FE059: mov esi, esp */
    /* test esi, esi */ /* 0x006FE05B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE0A0; /* 0x006FE05D: je 0x6fe0a0 */
L_006FE05F:
    PUSH32(esp, edi); /* 0x006FE05F: push edi */
    PUSH32(esp, esi); /* 0x006FE060: push esi */
    PUSH32(esp, ebx); /* 0x006FE061: push ebx */
    RECOMP_ICALL(MEM32(0x7CC7D4)); /* 0x006FE062: call dword ptr [0x7cc7d4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FE068: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FE0A0; /* 0x006FE06A: jle 0x6fe0a0 */
L_006FE06C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FE06C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x006FE06E: mov eax, esi */
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x006FE070: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE07F; /* 0x006FE073: je 0x6fe07f */
L_006FE075:
    eax = eax + 0x2; /* 0x006FE075: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FE078: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006FE079: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FE075; /* 0x006FE07D: jne 0x6fe075 */
L_006FE07F:
    eax = ecx * 2 + 0x2; /* 0x006FE07F: lea eax, [ecx*2 + 2] */
    edx = 0x00804E1Cu; /* 0x006FE086: mov edx, 0x804e1c */
    PUSH32(esp, eax); /* 0x006FE08B: push eax */
    PUSH32(esp, esi); /* 0x006FE08C: push esi */
    ecx = 0x00804E28u; /* 0x006FE08D: mov ecx, 0x804e28 */
    RECOMP_CALL(sub_00700DA0); /* 0x006FE092: call 0x700da0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x006FE097: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FE09A: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = eax; /* 0x006FE09D: mov dword ptr [ecx + 8], eax */
L_006FE0A0:
    edx = MEM32(ebp + 0xC); /* 0x006FE0A0: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x006FE0A3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x006FE0A6: push 0 */
    PUSH32(esp, ebx); /* 0x006FE0A8: push ebx */
    RECOMP_CALL(sub_006FDC20); /* 0x006FE0A9: call 0x6fdc20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FE0AE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FE0B0: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FE0B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006FE0B5: setns cl */
    eax = ecx + (-0x1); /* 0x006FE0B8: lea eax, [ecx - 1] */
    esp = ebp + (-0x10); /* 0x006FE0BB: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x006FE0BE: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE0BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE0C0: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FE0C1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FE0C4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FE0C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FE0CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE0CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE0CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE0D0u);

L_006FE0D0:
    PUSH32(esp, ebp); /* 0x006FE0D0: push ebp */
    ebp = esp; /* 0x006FE0D1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006FE0D3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006FE0D6: push esi */
    PUSH32(esp, edi); /* 0x006FE0D7: push edi */
    eax = MEM32(ecx + 0x90); /* 0x006FE0D8: mov eax, dword ptr [ecx + 0x90] */
    edx = MEM32(ecx + 0x8); /* 0x006FE0DE: mov edx, dword ptr [ecx + 8] */
    edi = MEM32(eax + 0x4); /* 0x006FE0E1: mov edi, dword ptr [eax + 4] */
    eax = edx; /* 0x006FE0E4: mov eax, edx */
    esi = eax + 0x1; /* 0x006FE0E6: lea esi, [eax + 1] */
    esp = esp; /* 0x006FE0E9: lea esp, [esp] */
L_006FE0F0:
    SET_LO8(ecx, MEM8(eax)); /* 0x006FE0F0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FE0F2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006FE0F3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE0F0; /* 0x006FE0F5: jne 0x6fe0f0 */
L_006FE0F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006FE0F7: sub eax, esi */
    _flag_k = FK_CMP;
    ecx = 0x00804E1Cu; /* 0x006FE0F9: mov ecx, 0x804e1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FE0FE: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006FE0FF: push eax */
    PUSH32(esp, edx); /* 0x006FE100: push edx */
    edx = 0x00804E28u; /* 0x006FE101: mov edx, 0x804e28 */
    RECOMP_CALL(sub_00700DA0); /* 0x006FE106: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FE10B: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006FE10E: mov esi, eax */
    PUSH32(esp, esi); /* 0x006FE110: push esi */
    PUSH32(esp, edi); /* 0x006FE111: push edi */
    RECOMP_ICALL(MEM32(0x7CC6FC)); /* 0x006FE112: call dword ptr [0x7cc6fc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006FE118: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FE119: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE11F: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006FE122: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE123: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE124: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE125: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE130u);

L_006FE130:
    PUSH32(esp, ebp); /* 0x006FE130: push ebp */
    ebp = esp; /* 0x006FE131: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006FE133: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FE136: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FE13B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FE13D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x006FE140: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE143: push ebx */
    PUSH32(esp, esi); /* 0x006FE144: push esi */
    PUSH32(esp, edi); /* 0x006FE145: push edi */
    eax = MEM32(eax + 0x90); /* 0x006FE146: mov eax, dword ptr [eax + 0x90] */
    edi = MEM32(ebp + 0x10); /* 0x006FE14C: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x006FE14F: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006FE152: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0x8); /* 0x006FE155: mov eax, dword ptr [edi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xC)); /* 0x006FE158: imul eax, dword ptr [edi + 0xc] */
    ebx = eax * 4 + 0x28; /* 0x006FE15C: lea ebx, [eax*4 + 0x28] */
    eax = ebx; /* 0x006FE163: mov eax, ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006FE165: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_00780140); /* 0x006FE168: call 0x780140 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x006FE16D: mov eax, esp */
    edx = ebx; /* 0x006FE16F: mov edx, ebx */
    ecx = eax; /* 0x006FE171: mov ecx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x006FE173: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_006F0950); /* 0x006FE176: call 0x6f0950 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006FE17B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x006FE17D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE2DA; /* 0x006FE17F: je 0x6fe2da */
L_006FE185:
    PUSH32(esp, 1); /* 0x006FE185: push 1 */
    PUSH32(esp, 4); /* 0x006FE187: push 4 */
    eax = ebp + (-0x8); /* 0x006FE189: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x28u; /* 0x006FE18C: mov dword ptr [ebp - 8], 0x28 */
    PUSH32(esp, eax); /* 0x006FE193: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE194: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE197: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE198: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x006FE19A: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 1); /* 0x006FE19D: push 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006FE19F: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x006FE1A2: lea eax, [ebp - 8] */
    PUSH32(esp, 4); /* 0x006FE1A5: push 4 */
    PUSH32(esp, eax); /* 0x006FE1A7: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE1A8: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE1AB: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE1AC: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC); /* 0x006FE1AE: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006FE1B1: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x006FE1B3: push 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006FE1B5: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x006FE1B8: lea eax, [ebp - 8] */
    PUSH32(esp, 4); /* 0x006FE1BB: push 4 */
    PUSH32(esp, eax); /* 0x006FE1BD: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE1BE: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE1C1: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE1C2: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006FE1C4: push 1 */
    PUSH32(esp, 2); /* 0x006FE1C6: push 2 */
    eax = ebp + (-0x8); /* 0x006FE1C8: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 1; /* 0x006FE1CB: mov dword ptr [ebp - 8], 1 */
    PUSH32(esp, eax); /* 0x006FE1D2: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE1D3: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE1D6: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE1D7: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x006FE1D9: add esp, 0x40 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = 0x20u; /* 0x006FE1DC: mov dword ptr [ebp - 8], 0x20 */
    eax = ebp + (-0x8); /* 0x006FE1E3: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x006FE1E6: push 1 */
    PUSH32(esp, 2); /* 0x006FE1E8: push 2 */
    PUSH32(esp, eax); /* 0x006FE1EA: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE1EB: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE1EE: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE1EF: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006FE1F1: push 1 */
    PUSH32(esp, 4); /* 0x006FE1F3: push 4 */
    eax = ebp + (-0x8); /* 0x006FE1F5: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x006FE1F8: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, eax); /* 0x006FE1FF: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE200: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE203: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE204: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x006FE206: mov eax, dword ptr [edi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xC)); /* 0x006FE209: imul eax, dword ptr [edi + 0xc] */
    PUSH32(esp, 1); /* 0x006FE20D: push 1 */
    PUSH32(esp, 4); /* 0x006FE20F: push 4 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006FE211: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006FE211: shl eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006FE214: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x006FE217: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006FE21A: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE21B: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE21E: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE21F: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006FE221: push 1 */
    PUSH32(esp, 4); /* 0x006FE223: push 4 */
    eax = ebp + (-0x8); /* 0x006FE225: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x006FE228: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, eax); /* 0x006FE22F: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE230: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE233: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE234: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x006FE236: add esp, 0x40 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = 0; /* 0x006FE239: mov dword ptr [ebp - 8], 0 */
    eax = ebp + (-0x8); /* 0x006FE240: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x006FE243: push 1 */
    PUSH32(esp, 4); /* 0x006FE245: push 4 */
    PUSH32(esp, eax); /* 0x006FE247: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE248: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE24B: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE24C: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = 0; /* 0x006FE24E: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, 1); /* 0x006FE255: push 1 */
    PUSH32(esp, 4); /* 0x006FE257: push 4 */
    eax = ebp + (-0x8); /* 0x006FE259: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006FE25C: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE25D: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE260: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE261: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006FE263: push 1 */
    PUSH32(esp, 4); /* 0x006FE265: push 4 */
    eax = ebp + (-0x8); /* 0x006FE267: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x006FE26A: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, eax); /* 0x006FE271: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE272: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE275: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE276: call eax */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0xC); /* 0x006FE278: mov esi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006FE27B: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FE27E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE29D; /* 0x006FE280: je 0x6fe29d */
L_006FE282:
    eax = MEM32(edi + 0x10); /* 0x006FE282: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006FE285: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, 1); /* 0x006FE286: push 1 */
    PUSH32(esp, eax); /* 0x006FE288: push eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x006FE289: imul eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x14); /* 0x006FE28C: add eax, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006FE28F: push eax */
    eax = MEM32(ebx + 0xC); /* 0x006FE290: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ebx); /* 0x006FE293: push ebx */
    RECOMP_ICALL(eax); /* 0x006FE294: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006FE296: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006FE299: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE282; /* 0x006FE29B: jne 0x6fe282 */
L_006FE29D:
    PUSH32(esp, 0x00030000u); /* 0x006FE29D: push 0x30000 */
    PUSH32(esp, 1); /* 0x006FE2A2: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006FE2A4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006FE2A7: push dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x7CC7D8)); /* 0x006FE2AA: call dword ptr [0x7cc7d8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x10); /* 0x006FE2B0: mov ecx, dword ptr [ebx + 0x10] */
    edi = eax; /* 0x006FE2B3: mov edi, eax */
    PUSH32(esp, ebx); /* 0x006FE2B5: push ebx */
    RECOMP_ICALL(ecx); /* 0x006FE2B6: call ecx */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x14)); /* 0x006FE2B8: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE2BB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = MEM32(0x7CC708); /* 0x006FE2BE: mov esi, dword ptr [0x7cc708] */
    PUSH32(esp, edi); /* 0x006FE2C4: push edi */
    PUSH32(esp, 0); /* 0x006FE2C5: push 0 */
    PUSH32(esp, 0x80u); /* 0x006FE2C7: push 0x80 */
    PUSH32(esp, ebx); /* 0x006FE2CC: push ebx */
    RECOMP_ICALL(esi); /* 0x006FE2CD: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006FE2CF: push edi */
    PUSH32(esp, 1); /* 0x006FE2D0: push 1 */
    PUSH32(esp, 0x80u); /* 0x006FE2D2: push 0x80 */
    PUSH32(esp, ebx); /* 0x006FE2D7: push ebx */
    RECOMP_ICALL(esi); /* 0x006FE2D8: call esi */
    RECOMP_FLAGS_IN();
L_006FE2DA:
    esp = ebp + (-0x20); /* 0x006FE2DA: lea esp, [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x006FE2DD: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE2DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE2DF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006FE2E0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FE2E3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FE2E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FE2EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE2EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE2ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE2F0u);

L_006FE2F0:
    PUSH32(esp, ebp); /* 0x006FE2F0: push ebp */
    ebp = esp; /* 0x006FE2F1: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x006FE2F3: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x111u); /* 0x006FE2F6: push 0x111 */
    RECOMP_CALL(sub_006FDB20); /* 0x006FE2FB: call 0x6fdb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE300: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006FE303: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE304: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE310u);

L_006FE310:
    PUSH32(esp, ebp); /* 0x006FE310: push ebp */
    ebp = esp; /* 0x006FE311: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x006FE313: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x112u); /* 0x006FE316: push 0x112 */
    RECOMP_CALL(sub_006FDB20); /* 0x006FE31B: call 0x6fdb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE320: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006FE323: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE324: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE330u);

L_006FE330:
    PUSH32(esp, ebp); /* 0x006FE330: push ebp */
    ebp = esp; /* 0x006FE331: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE333: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 5); /* 0x006FE336: push 5 */
    eax = MEM32(eax + 0x90); /* 0x006FE338: mov eax, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006FE33E: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x006FE341: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006FE347: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE348: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE350u);

L_006FE350:
    PUSH32(esp, ebp); /* 0x006FE350: push ebp */
    ebp = esp; /* 0x006FE351: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE353: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x006FE356: push 0 */
    eax = MEM32(eax + 0x90); /* 0x006FE358: mov eax, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006FE35E: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x006FE361: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006FE367: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE368: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE370u);

L_006FE370:
    PUSH32(esp, ebp); /* 0x006FE370: push ebp */
    ebp = esp; /* 0x006FE371: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE373: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x90); /* 0x006FE376: mov eax, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006FE37C: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC7C4)); /* 0x006FE37F: call dword ptr [0x7cc7c4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006FE385: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE386: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE390u);

L_006FE390:
    PUSH32(esp, ebp); /* 0x006FE390: push ebp */
    ebp = esp; /* 0x006FE391: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE393: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006FE396: push esi */
    PUSH32(esp, 3); /* 0x006FE397: push 3 */
    esi = MEM32(eax + 0x90); /* 0x006FE399: mov esi, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE39F: push dword ptr [esi + 4] */
    MEM32(esi + 0x24) = 1; /* 0x006FE3A2: mov dword ptr [esi + 0x24], 1 */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x006FE3A9: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = 0; /* 0x006FE3AF: mov dword ptr [esi + 0x24], 0 */
    esi = POP32_VAL(esp); /* 0x006FE3B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE3B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE3B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE3C0u);

L_006FE3C0:
    PUSH32(esp, ebp); /* 0x006FE3C0: push ebp */
    ebp = esp; /* 0x006FE3C1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE3C3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 6); /* 0x006FE3C6: push 6 */
    eax = MEM32(eax + 0x90); /* 0x006FE3C8: mov eax, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006FE3CE: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x006FE3D1: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006FE3D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE3D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE3E0u);

L_006FE3E0:
    PUSH32(esp, ebp); /* 0x006FE3E0: push ebp */
    ebp = esp; /* 0x006FE3E1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006FE3E3: push ebx */
    PUSH32(esp, esi); /* 0x006FE3E4: push esi */
    PUSH32(esp, edi); /* 0x006FE3E5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006FE3E6: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE3E9: push -0x10 */
    esi = MEM32(edi + 0x90); /* 0x006FE3EB: mov esi, dword ptr [edi + 0x90] */
    ebx = MEM32(esi + 0x4); /* 0x006FE3F1: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x006FE3F4: push ebx */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FE3F5: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FE3FB: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE40D; /* 0x006FE3FF: je 0x6fe40d */
L_006FE401:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F35FFFFu);
    eax = eax & 0x7F35FFFFu; /* 0x006FE401: and eax, 0x7f35ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x00CA0000u)); _flag_b = (uint32_t)((eax | 0x00CA0000u));
    eax = eax | 0x00CA0000u; /* 0x006FE406: or eax, 0xca0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FE417; /* 0x006FE40B: jmp 0x6fe417 */
L_006FE40D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF35FFFFu);
    eax = eax & 0xFF35FFFFu; /* 0x006FE40D: and eax, 0xff35ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80000000u)); _flag_b = (uint32_t)((eax | 0x80000000u));
    eax = eax | 0x80000000u; /* 0x006FE412: or eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FE417:
    PUSH32(esp, eax); /* 0x006FE417: push eax */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE418: push -0x10 */
    PUSH32(esp, ebx); /* 0x006FE41A: push ebx */
    MEM32(esi + 0x28) = 1; /* 0x006FE41B: mov dword ptr [esi + 0x28], 1 */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FE422: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x134u); /* 0x006FE428: push 0x134 */
    edx = edi; /* 0x006FE42D: mov edx, edi */
    RECOMP_CALL(sub_006FDB20); /* 0x006FE42F: call 0x6fdb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE434: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x28) = 0; /* 0x006FE437: mov dword ptr [esi + 0x28], 0 */
    edi = POP32_VAL(esp); /* 0x006FE43E: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE43F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE440: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006FE441: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE442: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE450u);

L_006FE450:
    PUSH32(esp, ebp); /* 0x006FE450: push ebp */
    ebp = esp; /* 0x006FE451: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE453: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006FE456: push esi */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE457: push -0x10 */
    eax = MEM32(eax + 0x90); /* 0x006FE459: mov eax, dword ptr [eax + 0x90] */
    esi = MEM32(eax + 0x4); /* 0x006FE45F: mov esi, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x006FE462: push esi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FE463: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x006FE469: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE481; /* 0x006FE46D: je 0x6fe481 */
L_006FE46F:
    _flag_a = (uint32_t)((eax | 0x00050000u)); _flag_b = (uint32_t)((eax | 0x00050000u));
    eax = eax | 0x00050000u; /* 0x006FE46F: or eax, 0x50000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006FE474: push eax */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE475: push -0x10 */
    PUSH32(esp, esi); /* 0x006FE477: push esi */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FE478: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006FE47E: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE47F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE480: ret  */
L_006FE481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFAFFFFu);
    eax = eax & 0xFFFAFFFFu; /* 0x006FE481: and eax, 0xfffaffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006FE486: push eax */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE487: push -0x10 */
    PUSH32(esp, esi); /* 0x006FE489: push esi */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FE48A: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006FE490: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE491: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE492: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE4A0u);

L_006FE4A0:
    PUSH32(esp, ebp); /* 0x006FE4A0: push ebp */
    ebp = esp; /* 0x006FE4A1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FE4A3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006FE4A6: push esi */
    PUSH32(esp, 9); /* 0x006FE4A7: push 9 */
    esi = MEM32(eax + 0x90); /* 0x006FE4A9: mov esi, dword ptr [eax + 0x90] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE4AF: push dword ptr [esi + 4] */
    MEM32(esi + 0x24) = 1; /* 0x006FE4B2: mov dword ptr [esi + 0x24], 1 */
    RECOMP_ICALL(MEM32(0x7CC8BC)); /* 0x006FE4B9: call dword ptr [0x7cc8bc] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = 0; /* 0x006FE4BF: mov dword ptr [esi + 0x24], 0 */
    esi = POP32_VAL(esp); /* 0x006FE4C6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE4C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE4C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE4D0u);

L_006FE4D0:
    PUSH32(esp, ebp); /* 0x006FE4D0: push ebp */
    ebp = esp; /* 0x006FE4D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FE4D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006FE4D6: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FE4D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006FE4DE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006FE4E0: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(ebp + 0x10); /* 0x006FE4E4: mov eax, dword ptr [ebp + 0x10] */
    ecx = 0x00804204u; /* 0x006FE4E7: mov ecx, 0x804204 */
    PUSH32(esp, ebx); /* 0x006FE4EC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006FE4ED: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006FE4F0: push esi */
    PUSH32(esp, edi); /* 0x006FE4F1: push edi */
    MEM32(esp + 0xC) = eax; /* 0x006FE4F2: mov dword ptr [esp + 0xc], eax */
    edi = MEM32(ebx + 0x90); /* 0x006FE4F6: mov edi, dword ptr [ebx + 0x90] */
    esi = MEM32(edi + 0x4); /* 0x006FE4FC: mov esi, dword ptr [edi + 4] */
    MEM32(esp + 0x1C) = esi; /* 0x006FE4FF: mov dword ptr [esp + 0x1c], esi */
    RECOMP_CALL(sub_006F5A00); /* 0x006FE503: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FE508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE524; /* 0x006FE50A: je 0x6fe524 */
L_006FE50C:
    /* cmp MEM8(eax), 0x30u */ /* 0x006FE50C: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE53B; /* 0x006FE50F: je 0x6fe53b */
L_006FE511:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006FE511: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006FE516: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006FE517: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006FE51D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006FE520: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE53B; /* 0x006FE522: je 0x6fe53b */
L_006FE524:
    eax = MEM32(ebx + 0x30); /* 0x006FE524: mov eax, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x201u);
    eax = eax & 0x201u; /* 0x006FE527: and eax, 0x201 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = 0xFFFFFFFFu; /* 0x006FE52C: mov dword ptr [esp + 0x18], 0xffffffff */
    /* cmp eax, 0x201u */ /* 0x006FE534: cmp eax, 0x201 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE543; /* 0x006FE539: je 0x6fe543 */
L_006FE53B:
    MEM32(esp + 0x18) = 0xFFFFFFFEu; /* 0x006FE53B: mov dword ptr [esp + 0x18], 0xfffffffe */
L_006FE543:
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE543: push -0x10 */
    PUSH32(esp, esi); /* 0x006FE545: push esi */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x006FE546: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x30); /* 0x006FE54C: mov ecx, dword ptr [ebx + 0x30] */
    esi = eax; /* 0x006FE54F: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7F30FFFFu);
    esi = esi & 0x7F30FFFFu; /* 0x006FE551: and esi, 0x7f30ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 1 */ /* 0x006FE557: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE563; /* 0x006FE55A: je 0x6fe563 */
L_006FE55C:
    eax = 0x80000000u; /* 0x006FE55C: mov eax, 0x80000000 */
    goto L_006FE57D; /* 0x006FE561: jmp 0x6fe57d */
L_006FE563:
    /* test LO8(ecx), 0x10u */ /* 0x006FE563: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x00CA0000u; /* 0x006FE566: mov eax, 0xca0000 */
    edx = 0x80000000u; /* 0x006FE56B: mov edx, 0x80000000 */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = edx; } /* 0x006FE570: cmovne eax, edx */
    /* test LO8(ecx), 0x20u */ /* 0x006FE573: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE57D; /* 0x006FE576: je 0x6fe57d */
L_006FE578:
    _flag_a = (uint32_t)((eax | 0x00050000u)); _flag_b = (uint32_t)((eax | 0x00050000u));
    eax = eax | 0x00050000u; /* 0x006FE578: or eax, 0x50000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FE57D:
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006FE57D: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x24; /* 0x006FE57F: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x006FE583: push eax */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x006FE584: push dword ptr [esp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006FE588: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0070DDE0); /* 0x006FE58B: call 0x70dde0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FE590: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x006FE593: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE5D7; /* 0x006FE597: je 0x6fe5d7 */
L_006FE599:
    eax = MEM32(esp + 0x24); /* 0x006FE599: mov eax, dword ptr [esp + 0x24] */
    MEM32(esp + 0xC) = eax; /* 0x006FE59D: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(esp + 0x28); /* 0x006FE5A1: mov eax, dword ptr [esp + 0x28] */
    MEM32(esp + 0x10) = eax; /* 0x006FE5A5: mov dword ptr [esp + 0x10], eax */
    eax = MEM32(esp + 0x2C); /* 0x006FE5A9: mov eax, dword ptr [esp + 0x2c] */
    MEM32(esp + 0x20) = eax; /* 0x006FE5AD: mov dword ptr [esp + 0x20], eax */
    eax = MEM32(esp + 0x30); /* 0x006FE5B1: mov eax, dword ptr [esp + 0x30] */
    MEM32(esp + 0x14) = eax; /* 0x006FE5B5: mov dword ptr [esp + 0x14], eax */
    /* test esi, 0x01000000u */ /* 0x006FE5B9: test esi, 0x1000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x01000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE667; /* 0x006FE5BF: je 0x6fe667 */
L_006FE5C5:
    MEM32(edi + 0x34) = 1; /* 0x006FE5C5: mov dword ptr [edi + 0x34], 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFEFFFFFFu);
    esi = esi & 0xFEFFFFFFu; /* 0x006FE5CC: and esi, 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FE667; /* 0x006FE5D2: jmp 0x6fe667 */
L_006FE5D7:
    /* cmp MEM32(edi + 0x34), 0 */ /* 0x006FE5D7: cmp dword ptr [edi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE5F0; /* 0x006FE5DB: je 0x6fe5f0 */
L_006FE5DD:
    /* cmp MEM32(edi + 0x38), 0 */ /* 0x006FE5DD: cmp dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FE5F0; /* 0x006FE5E1: jne 0x6fe5f0 */
L_006FE5E3:
    _flag_a = (uint32_t)((esi | 0x01000000u)); _flag_b = (uint32_t)((esi | 0x01000000u));
    esi = esi | 0x01000000u; /* 0x006FE5E3: or esi, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x34) = 0; /* 0x006FE5E9: mov dword ptr [edi + 0x34], 0 */
L_006FE5F0:
    eax = MEM32(ebx + 0x40); /* 0x006FE5F0: mov eax, dword ptr [ebx + 0x40] */
    MEM32(esp + 0x3C) = eax; /* 0x006FE5F3: mov dword ptr [esp + 0x3c], eax */
    eax = MEM32(ebx + 0x44); /* 0x006FE5F7: mov eax, dword ptr [ebx + 0x44] */
    MEM32(esp + 0x34) = 0; /* 0x006FE5FA: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x006FE602: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x40) = eax; /* 0x006FE60A: mov dword ptr [esp + 0x40], eax */
    /* test esi, 0x40000000u */ /* 0x006FE60E: test esi, 0x40000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE61A; /* 0x006FE614: je 0x6fe61a */
L_006FE616:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE616: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006FE62A; /* 0x006FE618: jmp 0x6fe62a */
L_006FE61A:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006FE61A: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x006FE61E: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FE624: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FE626: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006FE628: neg eax */
    _flag_k = FK_CMP;
L_006FE62A:
    PUSH32(esp, 0); /* 0x006FE62A: push 0 */
    PUSH32(esp, eax); /* 0x006FE62C: push eax */
    PUSH32(esp, esi); /* 0x006FE62D: push esi */
    eax = esp + 0x40; /* 0x006FE62E: lea eax, [esp + 0x40] */
    PUSH32(esp, eax); /* 0x006FE632: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E4)); /* 0x006FE633: call dword ptr [0x7cc7e4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x40); /* 0x006FE639: mov edx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esp + 0x38); /* 0x006FE63D: sub edx, dword ptr [esp + 0x38] */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x3C); /* 0x006FE641: mov eax, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x34); /* 0x006FE645: sub eax, dword ptr [esp + 0x34] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x3C); /* 0x006FE649: mov ecx, dword ptr [ebx + 0x3c] */
    MEM32(esp + 0x14) = edx; /* 0x006FE64C: mov dword ptr [esp + 0x14], edx */
    edx = MEM32(ebx + 0x38); /* 0x006FE650: mov edx, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esp + 0x34); /* 0x006FE653: add edx, dword ptr [esp + 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x38); /* 0x006FE657: add ecx, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = eax; /* 0x006FE65B: mov dword ptr [esp + 0x20], eax */
    MEM32(esp + 0xC) = edx; /* 0x006FE65F: mov dword ptr [esp + 0xc], edx */
    MEM32(esp + 0x10) = ecx; /* 0x006FE663: mov dword ptr [esp + 0x10], ecx */
L_006FE667:
    ebx = MEM32(esp + 0x1C); /* 0x006FE667: mov ebx, dword ptr [esp + 0x1c] */
    PUSH32(esp, esi); /* 0x006FE66B: push esi */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006FE66C: push -0x10 */
    PUSH32(esp, ebx); /* 0x006FE66E: push ebx */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FE66F: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110u); /* 0x006FE675: push 0x110 */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006FE67A: push dword ptr [esp + 0x18] */
    MEM32(edi + 0x24) = 1; /* 0x006FE67E: mov dword ptr [edi + 0x24], 1 */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006FE685: push dword ptr [esp + 0x28] */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006FE689: push dword ptr [esp + 0x1c] */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006FE68D: push dword ptr [esp + 0x1c] */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x006FE691: push dword ptr [esp + 0x2c] */
    PUSH32(esp, ebx); /* 0x006FE695: push ebx */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006FE696: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x44); /* 0x006FE69C: mov ecx, dword ptr [esp + 0x44] */
    MEM32(edi + 0x24) = 0; /* 0x006FE6A0: mov dword ptr [edi + 0x24], 0 */
    edi = POP32_VAL(esp); /* 0x006FE6A7: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE6A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006FE6A9: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FE6AA: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FE6AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FE6B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE6B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE6B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE6C0u);

L_006FE6C0:
    PUSH32(esp, ebp); /* 0x006FE6C0: push ebp */
    ebp = esp; /* 0x006FE6C1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006FE6C3: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_006EB100); /* 0x006FE6C6: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FE6CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FE6E6; /* 0x006FE6CD: js 0x6fe6e6 */
L_006FE6CF:
    ecx = eax; /* 0x006FE6CF: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006FE6D1: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006FE6D1: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006FE6D4: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x87CBCC); /* 0x006FE6D6: mov eax, dword ptr [0x87cbcc] */
    eax = MEM32(eax + 0x10C); /* 0x006FE6DB: mov eax, dword ptr [eax + 0x10c] */
    eax = eax + ecx * 4; /* 0x006FE6E1: lea eax, [eax + ecx*4] */
    goto L_006FE6E8; /* 0x006FE6E4: jmp 0x6fe6e8 */
L_006FE6E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE6E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FE6E8:
    PUSH32(esp, esi); /* 0x006FE6E8: push esi */
    PUSH32(esp, edi); /* 0x006FE6E9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FE6EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006FE6EC: push esi */
    PUSH32(esp, esi); /* 0x006FE6ED: push esi */
    PUSH32(esp, esi); /* 0x006FE6EE: push esi */
    PUSH32(esp, MEM32(eax + 0x40)); /* 0x006FE6EF: push dword ptr [eax + 0x40] */
    RECOMP_ICALL(MEM32(0x7CC034)); /* 0x006FE6F2: call dword ptr [0x7cc034] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FE6F8: mov edi, eax */
    /* test edi, edi */ /* 0x006FE6FA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE727; /* 0x006FE6FC: je 0x6fe727 */
L_006FE6FE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006FE6FE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006FE701: push edi */
    RECOMP_ICALL(MEM32(0x7CC030)); /* 0x006FE702: call dword ptr [0x7cc030] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FE708: mov esi, eax */
    /* test esi, esi */ /* 0x006FE70A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE720; /* 0x006FE70C: jne 0x6fe720 */
L_006FE70E:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FE70E: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FE714: mov edx, eax */
    ecx = 0x00806984u; /* 0x006FE716: mov ecx, 0x806984 */
    RECOMP_CALL(sub_006FFE20); /* 0x006FE71B: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
L_006FE720:
    PUSH32(esp, edi); /* 0x006FE720: push edi */
    RECOMP_ICALL(MEM32(0x7CC070)); /* 0x006FE721: call dword ptr [0x7cc070] */
    RECOMP_FLAGS_IN();
L_006FE727:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006FE727: neg esi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006FE729: pop edi */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FE72A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006FE72C: neg esi */
    _flag_k = FK_CMP;
    eax = esi + (-0x1); /* 0x006FE72E: lea eax, [esi - 1] */
    esi = POP32_VAL(esp); /* 0x006FE731: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE733: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE740u);

L_006FE740:
    PUSH32(esp, ebp); /* 0x006FE740: push ebp */
    ebp = esp; /* 0x006FE741: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x006FE743: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_006EB100); /* 0x006FE746: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FE74B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006FE766; /* 0x006FE74D: js 0x6fe766 */
L_006FE74F:
    ecx = eax; /* 0x006FE74F: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006FE751: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006FE751: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006FE754: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x87CBCC); /* 0x006FE756: mov eax, dword ptr [0x87cbcc] */
    eax = MEM32(eax + 0x10C); /* 0x006FE75B: mov eax, dword ptr [eax + 0x10c] */
    eax = eax + ecx * 4; /* 0x006FE761: lea eax, [eax + ecx*4] */
    goto L_006FE768; /* 0x006FE764: jmp 0x6fe768 */
L_006FE766:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE766: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006FE768:
    PUSH32(esp, esi); /* 0x006FE768: push esi */
    PUSH32(esp, edi); /* 0x006FE769: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006FE76A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006FE76C: push esi */
    PUSH32(esp, esi); /* 0x006FE76D: push esi */
    PUSH32(esp, esi); /* 0x006FE76E: push esi */
    PUSH32(esp, MEM32(eax + 0x40)); /* 0x006FE76F: push dword ptr [eax + 0x40] */
    RECOMP_ICALL(MEM32(0x7CC034)); /* 0x006FE772: call dword ptr [0x7cc034] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006FE778: mov edi, eax */
    /* test edi, edi */ /* 0x006FE77A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE7A7; /* 0x006FE77C: je 0x6fe7a7 */
L_006FE77E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006FE77E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006FE781: push edi */
    RECOMP_ICALL(MEM32(0x7CC02C)); /* 0x006FE782: call dword ptr [0x7cc02c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006FE788: mov esi, eax */
    /* test esi, esi */ /* 0x006FE78A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE7A0; /* 0x006FE78C: jne 0x6fe7a0 */
L_006FE78E:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FE78E: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FE794: mov edx, eax */
    ecx = 0x0080696Cu; /* 0x006FE796: mov ecx, 0x80696c */
    RECOMP_CALL(sub_006FFE20); /* 0x006FE79B: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
L_006FE7A0:
    PUSH32(esp, edi); /* 0x006FE7A0: push edi */
    RECOMP_ICALL(MEM32(0x7CC070)); /* 0x006FE7A1: call dword ptr [0x7cc070] */
    RECOMP_FLAGS_IN();
L_006FE7A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006FE7A7: neg esi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006FE7A9: pop edi */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006FE7AA: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x006FE7AC: neg esi */
    _flag_k = FK_CMP;
    eax = esi + (-0x1); /* 0x006FE7AE: lea eax, [esi - 1] */
    esi = POP32_VAL(esp); /* 0x006FE7B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE7B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE7B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE7C0u);

L_006FE7C0:
    PUSH32(esp, ebp); /* 0x006FE7C0: push ebp */
    ebp = esp; /* 0x006FE7C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FE7C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006FE7C6: push ecx */
    PUSH32(esp, esi); /* 0x006FE7C7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006FE7C8: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x006FE7CB: mov ecx, esi */
    RECOMP_CALL(sub_006FEA80); /* 0x006FE7CD: call 0x6fea80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x30); /* 0x006FE7D2: mov ecx, dword ptr [esi + 0x30] */
    /* test LO8(ecx), 1 */ /* 0x006FE7D5: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE7F5; /* 0x006FE7D8: je 0x6fe7f5 */
L_006FE7DA:
    /* test LO8(ecx), 4 */ /* 0x006FE7DA: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x103u; /* 0x006FE7DD: mov eax, 0x103 */
    ecx = 0x113u; /* 0x006FE7E2: mov ecx, 0x113 */
    edx = esi; /* 0x006FE7E7: mov edx, esi */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x006FE7E9: cmove eax, ecx */
    PUSH32(esp, eax); /* 0x006FE7EC: push eax */
    RECOMP_CALL(sub_006FDB20); /* 0x006FE7ED: call 0x6fdb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE7F2: add esp, 4 */
    _flag_k = FK_ADD;
L_006FE7F5:
    esi = POP32_VAL(esp); /* 0x006FE7F5: pop esi */
    esp = ebp; /* 0x006FE7F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE7F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE7F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE800u);

L_006FE800:
    PUSH32(esp, ebp); /* 0x006FE800: push ebp */
    ebp = esp; /* 0x006FE801: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006FE803: push esi */
    PUSH32(esp, edi); /* 0x006FE804: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006FE805: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(edi + 0x90); /* 0x006FE808: mov esi, dword ptr [edi + 0x90] */
    /* test esi, esi */ /* 0x006FE80E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE85A; /* 0x006FE810: je 0x6fe85a */
L_006FE812:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006FE812: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE815: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC814)); /* 0x006FE818: call dword ptr [0x7cc814] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00806A5Cu); /* 0x006FE81E: push 0x806a5c */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE823: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC7BC)); /* 0x006FE826: call dword ptr [0x7cc7bc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x006FE82C: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE83D; /* 0x006FE830: je 0x6fe83d */
L_006FE832:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE832: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC888)); /* 0x006FE835: call dword ptr [0x7cc888] */
    RECOMP_FLAGS_IN();
    goto L_006FE850; /* 0x006FE83B: jmp 0x6fe850 */
L_006FE83D:
    eax = MEM32(esi + 0x14); /* 0x006FE83D: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x006FE840: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE850; /* 0x006FE842: je 0x6fe850 */
L_006FE844:
    PUSH32(esp, eax); /* 0x006FE844: push eax */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x006FE845: push -4 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006FE847: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006FE84A: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
L_006FE850:
    PUSH32(esp, esi); /* 0x006FE850: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FE851: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE857: add esp, 4 */
    _flag_k = FK_ADD;
L_006FE85A:
    MEM32(edi + 0x90) = 0; /* 0x006FE85A: mov dword ptr [edi + 0x90], 0 */
    edi = POP32_VAL(esp); /* 0x006FE864: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE865: pop esi */
    ebp = POP32_VAL(esp); /* 0x006FE866: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE867: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE870u);

L_006FE870:
    PUSH32(esp, ebp); /* 0x006FE870: push ebp */
    ebp = esp; /* 0x006FE871: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x006FE873: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x006FE876: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM8(ecx), 2 */ /* 0x006FE879: cmp byte ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(eax + 0x90); /* 0x006FE87C: mov edx, dword ptr [eax + 0x90] */
    if (CMP_A(_flag_a, _flag_b)) goto L_006FE89E; /* 0x006FE882: ja 0x6fe89e */
L_006FE884:
    MEM32(ecx + 0x4) = 1; /* 0x006FE884: mov dword ptr [ecx + 4], 1 */
    eax = MEM32(edx + 0x4); /* 0x006FE88B: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x006FE88E: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x006FE891: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x006FE894: mov dword ptr [ecx + 0xc], eax */
    eax = 1; /* 0x006FE897: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x006FE89C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE89D: ret  */
L_006FE89E:
    PUSH32(esp, 0); /* 0x006FE89E: push 0 */
    PUSH32(esp, 2); /* 0x006FE8A0: push 2 */
    PUSH32(esp, 0x00806A30u); /* 0x006FE8A2: push 0x806a30 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FE8A7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006FE8AC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE8AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006FE8B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE8B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE8C0u);

L_006FE8C0:
    PUSH32(esp, ebx); /* 0x006FE8C0: push ebx */
    ebx = esp; /* 0x006FE8C1: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006FE8C3: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006FE8C6: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006FE8C9: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x006FE8CC: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x006FE8CD: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x006FE8D0: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x006FE8D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x006FE8D6: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006FE8D9: push esi */
    PUSH32(esp, edi); /* 0x006FE8DA: push edi */
    PUSH32(esp, 0); /* 0x006FE8DB: push 0 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x006FE8DD: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x87CC34), 0 */ /* 0x006FE8E3: cmp dword ptr [0x87cc34], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax; /* 0x006FE8EA: mov esi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FE9AC; /* 0x006FE8EC: jne 0x6fe9ac */
L_006FE8F2:
    eax = MEM32(0x7CC700); /* 0x006FE8F2: mov eax, dword ptr [0x7cc700] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006FE8F7: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x30), _xmm[0]); /* 0x006FE8FA: movdqa xmmword ptr [ebp - 0x30], xmm0 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x006FE8FF: mov dword ptr [ebp - 0x2c], eax */
    eax = ebp + (-0x30); /* 0x006FE902: lea eax, [ebp - 0x30] */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x006FE905: movdqa xmmword ptr [ebp - 0x20], xmm0 */
    MEM64(ebp + (-0x10)) = _xmm[0].u64[0]; /* 0x006FE90A: movq qword ptr [ebp - 0x10], xmm0 */
    PUSH32(esp, eax); /* 0x006FE90F: push eax */
    MEM32(ebp + (-0xC)) = 0x00806AB8u; /* 0x006FE910: mov dword ptr [ebp - 0xc], 0x806ab8 */
    MEM32(ebp + (-0x20)) = esi; /* 0x006FE917: mov dword ptr [ebp - 0x20], esi */
    RECOMP_ICALL(MEM32(0x7CC854)); /* 0x006FE91A: call dword ptr [0x7cc854] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC0F0); /* 0x006FE920: mov edi, dword ptr [0x7cc0f0] */
    MEM16(0x87CC38) = (uint16_t)(LO16(eax)); /* 0x006FE926: mov word ptr [0x87cc38], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006FE92C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE951; /* 0x006FE92F: jne 0x6fe951 */
L_006FE931:
    RECOMP_ICALL(edi); /* 0x006FE931: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x582u */ /* 0x006FE933: cmp eax, 0x582 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x582u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FE951; /* 0x006FE938: je 0x6fe951 */
L_006FE93A:
    RECOMP_ICALL(edi); /* 0x006FE93A: call edi */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FE93C: mov edx, eax */
    ecx = 0x00806A08u; /* 0x006FE93E: mov ecx, 0x806a08 */
    RECOMP_CALL(sub_006FFE20); /* 0x006FE943: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FE948: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE949: pop esi */
    esp = ebp; /* 0x006FE94A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE94C: pop ebp */
    esp = ebx; /* 0x006FE94D: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x006FE94F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE950: ret  */
L_006FE951:
    PUSH32(esp, 0); /* 0x006FE951: push 0 */
    PUSH32(esp, esi); /* 0x006FE953: push esi */
    PUSH32(esp, 0); /* 0x006FE954: push 0 */
    PUSH32(esp, 0xFFFFFFFDu); /* 0x006FE956: push -3 */
    PUSH32(esp, 0x80000000u); /* 0x006FE958: push 0x80000000 */
    PUSH32(esp, 0x80000000u); /* 0x006FE95D: push 0x80000000 */
    PUSH32(esp, 0x80000000u); /* 0x006FE962: push 0x80000000 */
    PUSH32(esp, 0x80000000u); /* 0x006FE967: push 0x80000000 */
    PUSH32(esp, 0); /* 0x006FE96C: push 0 */
    PUSH32(esp, 0x00806A7Cu); /* 0x006FE96E: push 0x806a7c */
    PUSH32(esp, 0x00806AB8u); /* 0x006FE973: push 0x806ab8 */
    PUSH32(esp, 0); /* 0x006FE978: push 0 */
    RECOMP_ICALL(MEM32(0x7CC850)); /* 0x006FE97A: call dword ptr [0x7cc850] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CC34) = eax; /* 0x006FE980: mov dword ptr [0x87cc34], eax */
    /* test eax, eax */ /* 0x006FE985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE9AC; /* 0x006FE987: jne 0x6fe9ac */
L_006FE989:
    PUSH32(esp, esi); /* 0x006FE989: push esi */
    PUSH32(esp, 0x00806AB8u); /* 0x006FE98A: push 0x806ab8 */
    RECOMP_ICALL(MEM32(0x7CC7C0)); /* 0x006FE98F: call dword ptr [0x7cc7c0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x006FE995: call edi */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FE997: mov edx, eax */
    ecx = 0x008069E8u; /* 0x006FE999: mov ecx, 0x8069e8 */
    RECOMP_CALL(sub_006FFE20); /* 0x006FE99E: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006FE9A3: pop edi */
    esi = POP32_VAL(esp); /* 0x006FE9A4: pop esi */
    esp = ebp; /* 0x006FE9A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE9A7: pop ebp */
    esp = ebx; /* 0x006FE9A8: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x006FE9AA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE9AB: ret  */
L_006FE9AC:
    edi = POP32_VAL(esp); /* 0x006FE9AC: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FE9AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006FE9AF: pop esi */
    esp = ebp; /* 0x006FE9B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FE9B2: pop ebp */
    esp = ebx; /* 0x006FE9B3: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x006FE9B5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FE9B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FE9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FE9C0u);

L_006FE9C0:
    PUSH32(esp, esi); /* 0x006FE9C0: push esi */
    PUSH32(esp, 0); /* 0x006FE9C1: push 0 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x006FE9C3: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CC34); /* 0x006FE9C9: mov ecx, dword ptr [0x87cc34] */
    esi = eax; /* 0x006FE9CF: mov esi, eax */
    /* test ecx, ecx */ /* 0x006FE9D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FE9FD; /* 0x006FE9D3: je 0x6fe9fd */
L_006FE9D5:
    PUSH32(esp, ecx); /* 0x006FE9D5: push ecx */
    RECOMP_ICALL(MEM32(0x7CC888)); /* 0x006FE9D6: call dword ptr [0x7cc888] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FE9DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FE9F3; /* 0x006FE9DE: jne 0x6fe9f3 */
L_006FE9E0:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FE9E0: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FE9E6: mov edx, eax */
    ecx = 0x008069C8u; /* 0x006FE9E8: mov ecx, 0x8069c8 */
    esi = POP32_VAL(esp); /* 0x006FE9ED: pop esi */
    goto L_006FFE20; /* 0x006FE9EE: jmp 0x6ffe20 */
L_006FE9F3:
    MEM32(0x87CC34) = 0; /* 0x006FE9F3: mov dword ptr [0x87cc34], 0 */
L_006FE9FD:
    /* cmp MEM16(0x87CC38), 0 */ /* 0x006FE9FD: cmp word ptr [0x87cc38], 0 */
    _flag_a = (uint32_t)(MEM16(0x87CC38)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FEA32; /* 0x006FEA05: je 0x6fea32 */
L_006FEA07:
    PUSH32(esp, esi); /* 0x006FEA07: push esi */
    PUSH32(esp, 0x00806AB8u); /* 0x006FEA08: push 0x806ab8 */
    RECOMP_ICALL(MEM32(0x7CC7C0)); /* 0x006FEA0D: call dword ptr [0x7cc7c0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FEA13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FEA2A; /* 0x006FEA15: jne 0x6fea2a */
L_006FEA17:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x006FEA17: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006FEA1D: mov edx, eax */
    ecx = 0x00806B20u; /* 0x006FEA1F: mov ecx, 0x806b20 */
    esi = POP32_VAL(esp); /* 0x006FEA24: pop esi */
    goto L_006FFE20; /* 0x006FEA25: jmp 0x6ffe20 */
L_006FEA2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006FEA2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(0x87CC38) = (uint16_t)(LO16(eax)); /* 0x006FEA2C: mov word ptr [0x87cc38], ax */
L_006FEA32:
    esi = POP32_VAL(esp); /* 0x006FEA32: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FEA33: ret  */
L_006FFE20:
    PUSH32(esp, ebp); /* 0x006FFE20: push ebp */
    ebp = esp; /* 0x006FFE21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x808u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x808u; /* 0x006FFE23: sub esp, 0x808 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FFE29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006FFE2E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006FFE30: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006FFE33: push esi */
    PUSH32(esp, edi); /* 0x006FFE34: push edi */
    PUSH32(esp, 0); /* 0x006FFE35: push 0 */
    PUSH32(esp, 0x400u); /* 0x006FFE37: push 0x400 */
    eax = ebp + (-0x808); /* 0x006FFE3C: lea eax, [ebp - 0x808] */
    edi = ecx; /* 0x006FFE42: mov edi, ecx */
    PUSH32(esp, eax); /* 0x006FFE44: push eax */
    PUSH32(esp, 0); /* 0x006FFE45: push 0 */
    PUSH32(esp, edx); /* 0x006FFE47: push edx */
    PUSH32(esp, 0); /* 0x006FFE48: push 0 */
    PUSH32(esp, 0x1000u); /* 0x006FFE4A: push 0x1000 */
    RECOMP_ICALL(MEM32(0x7CC1A0)); /* 0x006FFE4F: call dword ptr [0x7cc1a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006FFE55: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x808); /* 0x006FFE57: lea eax, [ebp - 0x808] */
    /* cmp MEM16(ebp + (-0x808)), LO16(ecx) */ /* 0x006FFE5D: cmp word ptr [ebp - 0x808], cx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x808))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FFE70; /* 0x006FFE64: je 0x6ffe70 */
L_006FFE66:
    eax = eax + 0x2; /* 0x006FFE66: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006FFE69: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x006FFE6A: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FFE66; /* 0x006FFE6E: jne 0x6ffe66 */
L_006FFE70:
    eax = ecx * 2 + 0x2; /* 0x006FFE70: lea eax, [ecx*2 + 2] */
    edx = 0x00804E1Cu; /* 0x006FFE77: mov edx, 0x804e1c */
    PUSH32(esp, eax); /* 0x006FFE7C: push eax */
    eax = ebp + (-0x808); /* 0x006FFE7D: lea eax, [ebp - 0x808] */
    ecx = 0x00804E28u; /* 0x006FFE83: mov ecx, 0x804e28 */
    PUSH32(esp, eax); /* 0x006FFE88: push eax */
    RECOMP_CALL(sub_00700DA0); /* 0x006FFE89: call 0x700da0 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x006FFE8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x006FFE90: mov esi, eax */
    edx = 0x007CD0C4u; /* 0x006FFE92: mov edx, 0x7cd0c4 */
    ecx = 0x007CDB7Cu; /* 0x006FFE97: mov ecx, 0x7cdb7c */
    PUSH32(esp, esi); /* 0x006FFE9C: push esi */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = edx; } /* 0x006FFE9D: cmove ecx, edx */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = edi; } /* 0x006FFEA0: cmovne edx, edi */
    PUSH32(esp, ecx); /* 0x006FFEA3: push ecx */
    PUSH32(esp, edx); /* 0x006FFEA4: push edx */
    PUSH32(esp, 0x00806ED8u); /* 0x006FFEA5: push 0x806ed8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006FFEAA: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006FFEAF: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006FFEB0: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006FFEB6: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x006FFEB9: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006FFEBC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006FFEBE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006FFEC1: pop edi */
    esi = POP32_VAL(esp); /* 0x006FFEC2: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006FFEC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FFEC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FFECA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FFECB: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FEA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FEA40u);

L_006FEA40:
    PUSH32(esp, ebp); /* 0x006FEA40: push ebp */
    ebp = esp; /* 0x006FEA41: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006FEA43: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006FEA46: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x90); /* 0x006FEA49: mov eax, dword ptr [eax + 0x90] */
    /* test eax, eax */ /* 0x006FEA4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FEA77; /* 0x006FEA51: je 0x6fea77 */
L_006FEA53:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x006FEA53: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006FEA77; /* 0x006FEA57: je 0x6fea77 */
L_006FEA59:
    MEM32(ebp + (-0x10)) = 0x10u; /* 0x006FEA59: mov dword ptr [ebp - 0x10], 0x10 */
    MEM32(ebp + (-0xC)) = 2; /* 0x006FEA60: mov dword ptr [ebp - 0xc], 2 */
    eax = MEM32(eax + 0x4); /* 0x006FEA67: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006FEA6A: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x006FEA6D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x006FEA70: push eax */
    RECOMP_ICALL(MEM32(0x7CC7CC)); /* 0x006FEA71: call dword ptr [0x7cc7cc] */
    RECOMP_FLAGS_IN();
L_006FEA77:
    esp = ebp; /* 0x006FEA77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FEA79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FEA7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006FEA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006FEA80u);

L_006FEA80:
    PUSH32(esp, ebp); /* 0x006FEA80: push ebp */
    ebp = esp; /* 0x006FEA81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006FEA83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006FEA86: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006FEA89: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006FEA8E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = eax; /* 0x006FEA90: mov dword ptr [esp + 0x14], eax */
    PUSH32(esp, esi); /* 0x006FEA94: push esi */
    PUSH32(esp, edi); /* 0x006FEA95: push edi */
    edi = MEM32(ecx + 0x90); /* 0x006FEA96: mov edi, dword ptr [ecx + 0x90] */
    /* cmp MEM8(edi + 0x30), 0 */ /* 0x006FEA9C: cmp byte ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FEB6E; /* 0x006FEAA0: jne 0x6feb6e */
L_006FEAA6:
    eax = MEM32(0x926A2C); /* 0x006FEAA6: mov eax, dword ptr [0x926a2c] */
    /* test eax, eax */ /* 0x006FEAAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FEABC; /* 0x006FEAAD: jne 0x6feabc */
L_006FEAAF:
    /* test MEM32(ecx + 0x30), 0x100u */ /* 0x006FEAAF: test dword ptr [ecx + 0x30], 0x100 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FEB66; /* 0x006FEAB6: je 0x6feb66 */
L_006FEABC:
    /* test MEM32(ecx + 0x30), 0x200u */ /* 0x006FEABC: test dword ptr [ecx + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FEB66; /* 0x006FEAC3: je 0x6feb66 */
L_006FEAC9:
    /* test eax, eax */ /* 0x006FEAC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FEB24; /* 0x006FEACB: je 0x6feb24 */
L_006FEACD:
    /* cmp MEM32(0x926A30), 0 */ /* 0x006FEACD: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006FEB24; /* 0x006FEAD4: jne 0x6feb24 */
L_006FEAD6:
    eax = esp + 0xC; /* 0x006FEAD6: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FEADA: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FEADB: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC828)); /* 0x006FEADE: call dword ptr [0x7cc828] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x006FEAE4: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0xC); /* 0x006FEAE8: add eax, dword ptr [esp + 0xc] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FEAEC: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FEAED: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x10); /* 0x006FEAEF: mov edx, dword ptr [esp + 0x10] */
    esi = eax; /* 0x006FEAF3: mov esi, eax */
    eax = MEM32(esp + 0x18); /* 0x006FEAF5: mov eax, dword ptr [esp + 0x18] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x006FEAF9: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    eax = eax + edx; /* 0x006FEAFB: lea eax, [eax + edx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006FEAFE: cdq  */
    ecx = esi + (-0x1); /* 0x006FEAFF: lea ecx, [esi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006FEB02: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(esp + 0xC) = ecx; /* 0x006FEB04: mov dword ptr [esp + 0xc], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006FEB08: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = esi + 0x1; /* 0x006FEB0A: lea ecx, [esi + 1] */
    MEM32(esp + 0x14) = ecx; /* 0x006FEB0D: mov dword ptr [esp + 0x14], ecx */
    ecx = eax + (-0x1); /* 0x006FEB11: lea ecx, [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006FEB14: inc eax */
    _flag_k = FK_INC;
    MEM32(esp + 0x18) = eax; /* 0x006FEB15: mov dword ptr [esp + 0x18], eax */
    eax = esp + 0xC; /* 0x006FEB19: lea eax, [esp + 0xc] */
    MEM32(esp + 0x10) = ecx; /* 0x006FEB1D: mov dword ptr [esp + 0x10], ecx */
    PUSH32(esp, eax); /* 0x006FEB21: push eax */
    goto L_006FEB68; /* 0x006FEB22: jmp 0x6feb68 */
L_006FEB24:
    eax = esp + 0xC; /* 0x006FEB24: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FEB28: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FEB29: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006FEB2C: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FEB32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006FEB6E; /* 0x006FEB34: je 0x6feb6e */
L_006FEB36:
    eax = esp + 0xC; /* 0x006FEB36: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FEB3A: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E8)); /* 0x006FEB3B: call dword ptr [0x7cc7e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006FEB41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006FEB6E; /* 0x006FEB43: jne 0x6feb6e */
L_006FEB45:
    esi = MEM32(0x7CC7B4); /* 0x006FEB45: mov esi, dword ptr [0x7cc7b4] */
    eax = esp + 0xC; /* 0x006FEB4B: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FEB4F: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FEB50: push dword ptr [edi + 4] */
    RECOMP_ICALL(esi); /* 0x006FEB53: call esi */
    RECOMP_FLAGS_IN();
    eax = esp + 0x14; /* 0x006FEB55: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x006FEB59: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006FEB5A: push dword ptr [edi + 4] */
    RECOMP_ICALL(esi); /* 0x006FEB5D: call esi */
    RECOMP_FLAGS_IN();
    eax = esp + 0xC; /* 0x006FEB5F: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006FEB63: push eax */
    goto L_006FEB68; /* 0x006FEB64: jmp 0x6feb68 */
L_006FEB66:
    PUSH32(esp, 0); /* 0x006FEB66: push 0 */
L_006FEB68:
    RECOMP_ICALL(MEM32(0x7CC7E0)); /* 0x006FEB68: call dword ptr [0x7cc7e0] */
    RECOMP_FLAGS_IN();
L_006FEB6E:
    ecx = MEM32(esp + 0x1C); /* 0x006FEB6E: mov ecx, dword ptr [esp + 0x1c] */
    edi = POP32_VAL(esp); /* 0x006FEB72: pop edi */
    esi = POP32_VAL(esp); /* 0x006FEB73: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006FEB74: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006FEB76: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006FEB7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006FEB7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006FEB7E: ret  */
    RECOMP_REGS_OUT();
}
