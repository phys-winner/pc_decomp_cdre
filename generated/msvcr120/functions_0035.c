#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100C5348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5348u);

L_100C5348:
    PUSH32(esp, ebp); /* 0x100C5348: push ebp */
    ebp = esp; /* 0x100C5349: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C534B: push ecx */
    eax = ebp + 0x8; /* 0x100C534C: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C534F: push esi */
    PUSH32(esp, eax); /* 0x100C5350: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C5351: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C5356: movzx esi, ax */
    eax = ebp + 0xC; /* 0x100C5359: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C535C: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C535D: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5362: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5363: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C5364: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C5366: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C5369: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C53D7; /* 0x100C536C: jle 0x100c53d7 */
L_100C536E:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C536E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C53D7; /* 0x100C5371: jle 0x100c53d7 */
L_100C5373:
    fp_push(0.0); /* 0x100C5373: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C5375: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5378: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C537A: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C537C: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C537E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C538B; /* 0x100C5381: jp 0x100c538b */
L_100C5383:
    _st[0] = -_st[0]; /* 0x100C5383: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C5385: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C5388: fld dword ptr [ebp + 8] */
L_100C538B:
    fp_push(*(float*)&MEM32(0x10065C1C)); /* 0x100C538B: fld dword ptr [0x10065c1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5391: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5393: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C5395: push -1 */
    PUSH32(esp, ecx); /* 0x100C5397: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x100C5398: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C539B: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C53C6; /* 0x100C539E: jne 0x100c53c6 */
L_100C53A0:
    fp_push(1.0); /* 0x100C53A0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C53A2: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C53A5: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C53A6: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C53AB: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C53AE: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C53B1: fld st(0) */
    _st[0] = *(double*)ADDR(0x10063C60) / _st[0]; /* 0x100C53B3: fdivr qword ptr [0x10063c60] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C53B9: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C53BB: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C53BE: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C53C1: fld dword ptr [ebp - 4] */
    goto L_100C5424; /* 0x100C53C4: jmp 0x100c5424 */
L_100C53C6:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C53C6: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C53C9: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C53CC: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C53CD: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C53D2: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100C53DF; /* 0x100C53D5: jmp 0x100c53df */
L_100C53D7:
    PUSH32(esp, 2); /* 0x100C53D7: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C53D9: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C53DA: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C53E4; /* 0x100C53DD: jne 0x100c53e4 */
L_100C53DF:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C53DF: fld dword ptr [ebp + 8] */
    goto L_100C5424; /* 0x100C53E2: jmp 0x100c5424 */
L_100C53E4:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C53E4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C5421; /* 0x100C53E7: je 0x100c5421 */
L_100C53E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C53E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C53EB: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C53EC: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5421; /* 0x100C53EF: jne 0x100c5421 */
L_100C53F1:
    /* test LO16(eax), LO16(eax) */ /* 0x100C53F1: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5412; /* 0x100C53F4: je 0x100c5412 */
L_100C53F6:
    fp_push(0.0); /* 0x100C53F6: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0xC)); /* 0x100C53F8: fcomp dword ptr [ebp + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C53FB: fnstsw ax */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C53FD: fld dword ptr [0x10065b68] */
    /* test HI8(eax), 0x41u */ /* 0x100C5403: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C540A; /* 0x100C5406: jne 0x100c540a */
L_100C5408:
    _st[0] = -_st[0]; /* 0x100C5408: fchs  */
L_100C540A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C540A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C540D: fld dword ptr [ebp - 4] */
    goto L_100C5424; /* 0x100C5410: jmp 0x100c5424 */
L_100C5412:
    PUSH32(esp, ecx); /* 0x100C5412: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5413: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C5418: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C541E: pop ecx */
    goto L_100C5424; /* 0x100C541F: jmp 0x100c5424 */
L_100C5421:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C5421: fld dword ptr [ebp + 0xc] */
L_100C5424:
    esi = POP32_VAL(esp); /* 0x100C5424: pop esi */
    esp = ebp; /* 0x100C5425: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5427: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5428: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5429(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5429u);

L_100C5429:
    PUSH32(esp, ebp); /* 0x100C5429: push ebp */
    ebp = esp; /* 0x100C542A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C542C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C542F: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C5430: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C5433: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C5436: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C543B: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C543E: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C5441: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C5444: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C5449: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C544C: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C544D: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C5450: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C5455: movzx esi, ax */
    eax = ebp + (-0x4); /* 0x100C5458: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C545B: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C545C: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C5461: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C5464: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C5467: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C5469: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C546A: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C549E; /* 0x100C546D: jne 0x100c549e */
L_100C546F:
    PUSH32(esp, ecx); /* 0x100C546F: push ecx */
    PUSH32(esp, ecx); /* 0x100C5470: push ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100C5471: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5492; /* 0x100C5474: jne 0x100c5492 */
L_100C5476:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C5476: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C5479: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C547D: fld dword ptr [0x10065b78] */
L_100C5483:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5483: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C5486: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C548B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C548C: pop ecx */
    goto L_100C55B5; /* 0x100C548D: jmp 0x100c55b5 */
L_100C5492:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C5492: fld dword ptr [0x10065b78] */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C5498: fst dword ptr [esp + 4] */
    RECOMP_BACKEDGE();
    goto L_100C5483; /* 0x100C549C: jmp 0x100c5483 */
L_100C549E:
    PUSH32(esp, edi); /* 0x100C549E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C549F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C54A1: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C54A2: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5505; /* 0x100C54A5: jne 0x100c5505 */
L_100C54A7:
    PUSH32(esp, edi); /* 0x100C54A7: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C54A8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C54AD: pop ecx */
    /* test LO16(esi), LO16(esi) */ /* 0x100C54AE: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C54E0; /* 0x100C54B1: jne 0x100c54e0 */
L_100C54B3:
    fp_push(0.0); /* 0x100C54B3: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4))); /* 0x100C54B5: fcom dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C54B8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C54BA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C54C9; /* 0x100C54BD: jne 0x100c54c9 */
L_100C54BF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C54BF: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C54C1: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C54C7: fchs  */
L_100C54C9:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C54C9: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C54CC: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C54CF: push ecx */
    PUSH32(esp, ecx); /* 0x100C54D0: push ecx */
L_100C54D1:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C54D1: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C54D5: fld dword ptr [0x10065b78] */
    goto L_100C55AA; /* 0x100C54DB: jmp 0x100c55aa */
L_100C54E0:
    PUSH32(esp, ecx); /* 0x100C54E0: push ecx */
    PUSH32(esp, ecx); /* 0x100C54E1: push ecx */
L_100C54E2:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C54E2: fld dword ptr [0x10065b78] */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C54E8: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C54FC; /* 0x100C54EB: jne 0x100c54fc */
L_100C54ED:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C54ED: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C54F1: fld dword ptr [0x10065b68] */
    goto L_100C55AA; /* 0x100C54F7: jmp 0x100c55aa */
L_100C54FC:
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C54FC: fst dword ptr [esp + 4] */
    goto L_100C55AA; /* 0x100C5500: jmp 0x100c55aa */
L_100C5505:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C5505: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5516; /* 0x100C5508: jne 0x100c5516 */
L_100C550A:
    PUSH32(esp, ecx); /* 0x100C550A: push ecx */
    PUSH32(esp, ecx); /* 0x100C550B: push ecx */
    /* test LO16(esi), LO16(esi) */ /* 0x100C550C: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C54E2; /* 0x100C550F: jne 0x100c54e2 */
L_100C5511:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C5511: fld dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_100C54D1; /* 0x100C5514: jmp 0x100c54d1 */
L_100C5516:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C5516: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5570; /* 0x100C5519: jne 0x100c5570 */
L_100C551B:
    /* test LO16(eax), LO16(eax) */ /* 0x100C551B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C553B; /* 0x100C551E: jne 0x100c553b */
L_100C5520:
    fp_push(0.0); /* 0x100C5520: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x100C5522: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5525: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C5527: fld dword ptr [ebp - 4] */
    /* test HI8(eax), 0x41u */ /* 0x100C552A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5531; /* 0x100C552D: jne 0x100c5531 */
L_100C552F:
    _st[0] = -_st[0]; /* 0x100C552F: fchs  */
L_100C5531:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C5531: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5534: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C5537: push ecx */
    PUSH32(esp, ecx); /* 0x100C5538: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C54ED; /* 0x100C5539: jmp 0x100c54ed */
L_100C553B:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C553B: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C553E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C553F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C5542: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x10065B68); /* 0x100C5547: fmul dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C554D: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5550: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5553: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C5556: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C5559: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C555A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C555D: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x10065B68); /* 0x100C5562: fmul dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C5568: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C556B: fld dword ptr [ebp - 0xc] */
    goto L_100C55AA; /* 0x100C556E: jmp 0x100c55aa */
L_100C5570:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C5570: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C5573: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5574: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C5577: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C557C: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C557F: fld dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C5582: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5583: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C6F0A); /* 0x100C5586: call 0x100c6f0a */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C558B: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C558F: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5592: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C5595: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C559A: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C559D: fld dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C55A0: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C55A1: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C5348); /* 0x100C55A4: call 0x100c5348 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C55A9: pop ecx */
L_100C55AA:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C55AA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C55AD: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C55B2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C55B3: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C55B4: pop edi */
L_100C55B5:
    esi = POP32_VAL(esp); /* 0x100C55B5: pop esi */
    esp = ebp; /* 0x100C55B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C55B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C55B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C55BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C55BAu);

L_100C55BA:
    PUSH32(esp, ebp); /* 0x100C55BA: push ebp */
    ebp = esp; /* 0x100C55BB: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C55BD: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C55C0: push ecx */
    PUSH32(esp, ecx); /* 0x100C55C1: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C55C2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C55C5: call 0x10036596 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C55CA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C55CD: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C55D0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C55D1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C55D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C55D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C55D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C55D4u);

L_100C55D4:
    PUSH32(esp, ebp); /* 0x100C55D4: push ebp */
    ebp = esp; /* 0x100C55D5: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C55D7: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C55DA: push ecx */
    PUSH32(esp, ecx); /* 0x100C55DB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C55DC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C55DF: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C55E4: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C55E7: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C55EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C55EB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C55EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C55ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C55EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C55EEu);

L_100C55EE:
    PUSH32(esp, ebp); /* 0x100C55EE: push ebp */
    ebp = esp; /* 0x100C55EF: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C55F1: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C55F4: push esi */
    PUSH32(esp, eax); /* 0x100C55F5: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C55F6: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C55FB: movzx esi, ax */
    eax = ebp + 0x10; /* 0x100C55FE: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C5601: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C5602: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5607: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5608: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C5609: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C560B: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C560E: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C5672; /* 0x100C5611: jle 0x100c5672 */
L_100C5613:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C5613: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C5672; /* 0x100C5616: jle 0x100c5672 */
L_100C5618:
    fp_push(0.0); /* 0x100C5618: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C561A: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C561D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C561F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5621: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C5623: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C562D; /* 0x100C5626: jp 0x100c562d */
L_100C5628:
    _st[0] = -_st[0]; /* 0x100C5628: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C562A: fst qword ptr [ebp + 8] */
L_100C562D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065C28)); /* 0x100C562D: fcomp qword ptr [0x10065c28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5633: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C5635: push -1 */
    PUSH32(esp, ecx); /* 0x100C5637: push ecx */
    PUSH32(esp, ecx); /* 0x100C5638: push ecx */
    /* test HI8(eax), 5 */ /* 0x100C5639: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C563C: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5661; /* 0x100C563F: jp 0x100c5661 */
L_100C5641:
    fp_push(1.0); /* 0x100C5641: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5643: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5646: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C5647: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100C564C: fld qword ptr [0x10063c60] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5652: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C5655: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100C5658: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C565A: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C565C: fmul qword ptr [ebp + 0x10] */
    goto L_100C56B9; /* 0x100C565F: jmp 0x100c56b9 */
L_100C5661:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C5661: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5664: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5667: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C5668: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C566D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C567A; /* 0x100C5670: jmp 0x100c567a */
L_100C5672:
    PUSH32(esp, 2); /* 0x100C5672: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C5674: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C5675: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C567F; /* 0x100C5678: jne 0x100c567f */
L_100C567A:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C567A: fld qword ptr [ebp + 8] */
    goto L_100C56B9; /* 0x100C567D: jmp 0x100c56b9 */
L_100C567F:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C567F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C56B6; /* 0x100C5682: je 0x100c56b6 */
L_100C5684:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C5684: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C5686: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C5687: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C56B6; /* 0x100C568A: jne 0x100c56b6 */
L_100C568C:
    /* test LO16(eax), LO16(eax) */ /* 0x100C568C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C56A7; /* 0x100C568F: je 0x100c56a7 */
L_100C5691:
    fp_push(0.0); /* 0x100C5691: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x10)); /* 0x100C5693: fcomp qword ptr [ebp + 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5696: fnstsw ax */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C5698: fld qword ptr [0x10065b88] */
    /* test HI8(eax), 0x41u */ /* 0x100C569E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C56B9; /* 0x100C56A1: jne 0x100c56b9 */
L_100C56A3:
    _st[0] = -_st[0]; /* 0x100C56A3: fchs  */
    goto L_100C56B9; /* 0x100C56A5: jmp 0x100c56b9 */
L_100C56A7:
    PUSH32(esp, ecx); /* 0x100C56A7: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C56A8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C56AD: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C56B3: pop ecx */
    goto L_100C56B9; /* 0x100C56B4: jmp 0x100c56b9 */
L_100C56B6:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C56B6: fld qword ptr [ebp + 0x10] */
L_100C56B9:
    esi = POP32_VAL(esp); /* 0x100C56B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C56BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C56BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C56BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C56BCu);

L_100C56BC:
    PUSH32(esp, ebp); /* 0x100C56BC: push ebp */
    ebp = esp; /* 0x100C56BD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x100C56BF: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C56C2: push esi */
    PUSH32(esp, edi); /* 0x100C56C3: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C56C4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C56C7: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C56CA: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56CC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56CE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56CF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C56D0: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C56D5: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C56D7: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C56DA: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56DD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C56E0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C56E1: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C56E6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C56E9: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C56EA: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C56ED: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C56F2: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C56F5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C56F8: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C56F9: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C56FE: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C5701: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C5704: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C5706: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C5707: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5738; /* 0x100C570A: jne 0x100c5738 */
L_100C570C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C570C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO16(eax), LO16(eax) */ /* 0x100C570F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x28); /* 0x100C5712: lea eax, [ebp - 0x28] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5729; /* 0x100C5715: jne 0x100c5729 */
L_100C5717:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5717: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C571A: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C571E: fld qword ptr [0x10065b98] */
    goto L_100C584F; /* 0x100C5724: jmp 0x100c584f */
L_100C5729:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C5729: fld qword ptr [0x10065b98] */
L_100C572F:
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C572F: fst qword ptr [esp + 8] */
    goto L_100C584F; /* 0x100C5733: jmp 0x100c584f */
L_100C5738:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C5738: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C573A: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C573B: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5797; /* 0x100C573E: jne 0x100c5797 */
L_100C5740:
    PUSH32(esp, edi); /* 0x100C5740: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5741: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5746: pop ecx */
    /* test LO16(esi), LO16(esi) */ /* 0x100C5747: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5777; /* 0x100C574A: jne 0x100c5777 */
L_100C574C:
    fp_push(0.0); /* 0x100C574C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C574E: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5751: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C5753: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5762; /* 0x100C5756: jne 0x100c5762 */
L_100C5758:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5758: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C575A: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C5760: fchs  */
L_100C5762:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5762: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5765: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C5769: fld qword ptr [0x10065b98] */
L_100C576F:
    eax = ebp + (-0x28); /* 0x100C576F: lea eax, [ebp - 0x28] */
    goto L_100C584F; /* 0x100C5772: jmp 0x100c584f */
L_100C5777:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C5777: fld qword ptr [0x10065b98] */
    eax = ebp + (-0x28); /* 0x100C577D: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5780: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C5783: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C572F; /* 0x100C5786: jne 0x100c572f */
L_100C5788:
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5788: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C578C: fld qword ptr [0x10065b88] */
    goto L_100C584F; /* 0x100C5792: jmp 0x100c584f */
L_100C5797:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C5797: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C57A6; /* 0x100C579A: jne 0x100c57a6 */
L_100C579C:
    /* test LO16(esi), LO16(esi) */ /* 0x100C579C: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5777; /* 0x100C579F: jne 0x100c5777 */
L_100C57A1:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C57A1: fld qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C5762; /* 0x100C57A4: jmp 0x100c5762 */
L_100C57A6:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C57A6: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5802; /* 0x100C57A9: jne 0x100c5802 */
L_100C57AB:
    /* test LO16(eax), LO16(eax) */ /* 0x100C57AB: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C57D0; /* 0x100C57AE: jne 0x100c57d0 */
L_100C57B0:
    fp_push(0.0); /* 0x100C57B0: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C57B2: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C57B5: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C57B7: fld qword ptr [ebp - 8] */
    /* test HI8(eax), 0x41u */ /* 0x100C57BA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C57C1; /* 0x100C57BD: jne 0x100c57c1 */
L_100C57BF:
    _st[0] = -_st[0]; /* 0x100C57BF: fchs  */
L_100C57C1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C57C1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C57C4: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C57C8: fld qword ptr [0x10065b88] */
    RECOMP_BACKEDGE();
    goto L_100C576F; /* 0x100C57CE: jmp 0x100c576f */
L_100C57D0:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C57D0: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C57D3: push ecx */
    PUSH32(esp, ecx); /* 0x100C57D4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C57D5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C57D8: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C57DD: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C57E0: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C57E3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C57E6: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C57EB: fld qword ptr [0x10065b88] */
    fp_push(_st[0]); /* 0x100C57F1: fld st(0) */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C57F3: fmul qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C57F6: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x100C57F9: push ecx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C57FA: fmulp st(1) */
    PUSH32(esp, ecx); /* 0x100C57FC: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C576F; /* 0x100C57FD: jmp 0x100c576f */
L_100C5802:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5802: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C5805: push ecx */
    PUSH32(esp, ecx); /* 0x100C5806: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5807: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C580A: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C580F: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5812: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5815: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5818: call 0x10036596 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C581D: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5820: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5823: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5826: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C5829: push ecx */
    PUSH32(esp, ecx); /* 0x100C582A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C582B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C71D0); /* 0x100C582E: call 0x100c71d0 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5833: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5837: fld qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C583A: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C583D: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C5840: push ecx */
    PUSH32(esp, ecx); /* 0x100C5841: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5842: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C55EE); /* 0x100C5845: call 0x100c55ee */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C584A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C584B: pop ecx */
    eax = ebp + (-0x38); /* 0x100C584C: lea eax, [ebp - 0x38] */
L_100C584F:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C584F: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5852: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C5853: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C5858: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C585A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C585D: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C5860: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5862: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5863: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5864: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5865: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C5866: pop edi */
    esi = POP32_VAL(esp); /* 0x100C5867: pop esi */
    esp = ebp; /* 0x100C5868: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C586A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C586B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C586C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C586Cu);

L_100C586C:
    PUSH32(esp, ebp); /* 0x100C586C: push ebp */
    ebp = esp; /* 0x100C586D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C586F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C5872: push esi */
    PUSH32(esp, edi); /* 0x100C5873: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5874: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C5877: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C587A: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C587C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C587D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C587E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C587F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C5880: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C5885: push ecx */
    PUSH32(esp, ecx); /* 0x100C5886: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C5887: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C588B: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C588D: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5890: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5891: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5892: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5893: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C5894: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C5899: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C589C: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C589F: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C58A1: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C58A4: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C58A5: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C58AA: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C58AD: mov esi, eax */
    edi = esp; /* 0x100C58AF: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C58B1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C58B4: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58B8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C56BC); /* 0x100C58B9: call 0x100c56bc */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C58BE: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C58C0: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C58C3: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C58C6: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58CB: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C58CC: pop edi */
    esi = POP32_VAL(esp); /* 0x100C58CD: pop esi */
    esp = ebp; /* 0x100C58CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C58D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C58D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C58D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C58D2u);

L_100C58D2:
    PUSH32(esp, ebp); /* 0x100C58D2: push ebp */
    ebp = esp; /* 0x100C58D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C58D5: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C58D8: push esi */
    PUSH32(esp, edi); /* 0x100C58D9: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C58DA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C58DD: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C58E0: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58E2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58E3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58E5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C58E6: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C58EB: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C58ED: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C58F0: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58F3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58F5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C58F6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C58F7: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x100C58FC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C58FF: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C5900: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C5903: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C5908: movzx esi, ax */
    eax = ebp + (-0x18); /* 0x100C590B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C590E: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C590F: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C5914: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x100C5917: movzx ecx, ax */
    PUSH32(esp, 2); /* 0x100C591A: push 2 */
    eax = POP32_VAL(esp); /* 0x100C591C: pop eax */
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C591D: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C592F; /* 0x100C5920: jne 0x100c592f */
L_100C5922:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5922: fld qword ptr [ebp - 0x20] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C5925: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5951; /* 0x100C5928: je 0x100c5951 */
L_100C592A:
    goto L_100C5A2E; /* 0x100C592A: jmp 0x100c5a2e */
L_100C592F:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C592F: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5964; /* 0x100C5932: jne 0x100c5964 */
L_100C5934:
    /* cmp LO16(esi), 1 */ /* 0x100C5934: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C595C; /* 0x100C5938: jne 0x100c595c */
L_100C593A:
    fp_push(0.0); /* 0x100C593A: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C593C: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C593F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5941: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5943: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C594F; /* 0x100C5946: jp 0x100c594f */
L_100C5948:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5948: fstp st(0) */
    goto L_100C5A2E; /* 0x100C594A: jmp 0x100c5a2e */
L_100C594F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C594F: fstp st(1) */
L_100C5951:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5951: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5954: fld qword ptr [ebp - 0x18] */
    goto L_100C5A31; /* 0x100C5957: jmp 0x100c5a31 */
L_100C595C:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C595C: fld qword ptr [ebp - 0x18] */
    goto L_100C5A2E; /* 0x100C595F: jmp 0x100c5a2e */
L_100C5964:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C5964: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C5966: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C5967: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5A1C; /* 0x100C596A: jne 0x100c5a1c */
L_100C5970:
    fp_push(0.0); /* 0x100C5970: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5972: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5975: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5977: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5979: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C59CE; /* 0x100C597C: jp 0x100c59ce */
L_100C597E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C597E: fstp st(0) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5980: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C59A5; /* 0x100C5983: jne 0x100c59a5 */
L_100C5985:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5985: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C5988: fcom qword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C598B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C598D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5A31; /* 0x100C5990: jne 0x100c5a31 */
L_100C5996:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5996: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C5998: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C599E: fchs  */
    goto L_100C5A31; /* 0x100C59A0: jmp 0x100c5a31 */
L_100C59A5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C59A5: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C59A7: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C59AA: push ecx */
    PUSH32(esp, ecx); /* 0x100C59AB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C59AC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C59AF: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C59B4: fldz  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C59B6: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C59B8: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C59BB: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C59BE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C59C1: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C59C6: fldz  */
    ecx = POP32_VAL(esp); /* 0x100C59C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C59C9: pop ecx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C59CA: fmulp st(1) */
    goto L_100C5A31; /* 0x100C59CC: jmp 0x100c5a31 */
L_100C59CE:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C59CE: fstp st(1) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C59D0: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C59EC; /* 0x100C59D3: jne 0x100c59ec */
L_100C59D5:
    PUSH32(esp, edx); /* 0x100C59D5: push edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C59D6: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C59D8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C59DD: fld qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C59E0: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C59E3: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C59E9: pop ecx */
    goto L_100C5A31; /* 0x100C59EA: jmp 0x100c5a31 */
L_100C59EC:
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C59EC: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5951; /* 0x100C59EF: je 0x100c5951 */
L_100C59F5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C59F5: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C59F7: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C59FA: push ecx */
    PUSH32(esp, ecx); /* 0x100C59FB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C59FC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C59FF: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C5A04: fmul qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5A07: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5A0A: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A0D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C5A10: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C5A15: fmul qword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x100C5A18: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5A19: pop ecx */
    goto L_100C5A31; /* 0x100C5A1A: jmp 0x100c5a31 */
L_100C5A1C:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5A1C: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5A36; /* 0x100C5A1F: jne 0x100c5a36 */
L_100C5A21:
    PUSH32(esp, edx); /* 0x100C5A21: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5A22: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C5A27: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C5A2D: pop ecx */
L_100C5A2E:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5A2E: fst qword ptr [ebp - 0x10] */
L_100C5A31:
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C5A31: fst qword ptr [ebp - 8] */
    goto L_100C5A7E; /* 0x100C5A34: jmp 0x100c5a7e */
L_100C5A36:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5A36: fld qword ptr [ebp - 0x20] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5A39: fst qword ptr [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x100C5A3C: push 0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5A3E: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5A41: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C5A44: push ecx */
    PUSH32(esp, ecx); /* 0x100C5A45: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A46: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5A49: call 0x10036596 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C5A4E: lea eax, [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A51: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5A54: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C5A55: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5A5A: fld qword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5A5D: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100C5A60: push 0 */
    PUSH32(esp, ecx); /* 0x100C5A62: push ecx */
    PUSH32(esp, ecx); /* 0x100C5A63: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A64: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C5A67: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C5A6C: lea eax, [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A6F: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5A72: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C5A73: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5A78: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5A7B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C5A7E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5A7E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x30); /* 0x100C5A81: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5A84: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5A88: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5A8B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5A8E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C5A8F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C5A94: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C5A96: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C5A99: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C5A9C: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5A9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5A9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5AA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5AA1: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C5AA2: pop edi */
    esi = POP32_VAL(esp); /* 0x100C5AA3: pop esi */
    esp = ebp; /* 0x100C5AA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5AA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5AA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5AA8u);

L_100C5AA8:
    PUSH32(esp, ebp); /* 0x100C5AA8: push ebp */
    ebp = esp; /* 0x100C5AA9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5AAB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C5AAE: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C5AAF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C5AB2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C5AB5: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C5ABA: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5ABD: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C5AC0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C5AC3: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C5AC8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C5ACB: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C5ACC: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C5ACF: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C5AD4: movzx esi, ax */
    eax = ebp + (-0xC); /* 0x100C5AD7: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C5ADA: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C5ADB: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C5AE0: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x100C5AE3: movzx ecx, ax */
    PUSH32(esp, 2); /* 0x100C5AE6: push 2 */
    eax = POP32_VAL(esp); /* 0x100C5AE8: pop eax */
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C5AE9: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5B05; /* 0x100C5AEC: jne 0x100c5b05 */
L_100C5AEE:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C5AEE: fld dword ptr [ebp - 0x10] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C5AF1: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5BF7; /* 0x100C5AF4: jne 0x100c5bf7 */
L_100C5AFA:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5AFA: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5AFD: fld dword ptr [ebp - 0xc] */
    goto L_100C5BFA; /* 0x100C5B00: jmp 0x100c5bfa */
L_100C5B05:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C5B05: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5B31; /* 0x100C5B08: jne 0x100c5b31 */
L_100C5B0A:
    /* cmp LO16(esi), 1 */ /* 0x100C5B0A: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5B29; /* 0x100C5B0E: jne 0x100c5b29 */
L_100C5B10:
    fp_push(0.0); /* 0x100C5B10: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C5B12: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5B15: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5B17: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5B19: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5B25; /* 0x100C5B1C: jp 0x100c5b25 */
L_100C5B1E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5B1E: fstp st(0) */
    goto L_100C5BF7; /* 0x100C5B20: jmp 0x100c5bf7 */
L_100C5B25:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5B25: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_100C5AFA; /* 0x100C5B27: jmp 0x100c5afa */
L_100C5B29:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5B29: fld dword ptr [ebp - 0xc] */
    goto L_100C5BF7; /* 0x100C5B2C: jmp 0x100c5bf7 */
L_100C5B31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C5B31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C5B33: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C5B34: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5BE5; /* 0x100C5B37: jne 0x100c5be5 */
L_100C5B3D:
    fp_push(0.0); /* 0x100C5B3D: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C5B3F: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5B42: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5B44: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5B46: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5B99; /* 0x100C5B49: jp 0x100c5b99 */
L_100C5B4B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5B4B: fstp st(0) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5B4D: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5B72; /* 0x100C5B50: jne 0x100c5b72 */
L_100C5B52:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5B52: fst dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x100C5B55: fcom dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5B58: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C5B5A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5BFA; /* 0x100C5B5D: jne 0x100c5bfa */
L_100C5B63:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5B63: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C5B65: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C5B6B: fchs  */
    goto L_100C5BFA; /* 0x100C5B6D: jmp 0x100c5bfa */
L_100C5B72:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5B72: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5B74: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C5B77: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5B78: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C5B7B: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C5B80: fldz  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C5B82: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5B84: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5B87: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5B8A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C5B8D: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C5B92: fldz  */
    ecx = POP32_VAL(esp); /* 0x100C5B94: pop ecx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C5B95: fmulp st(1) */
    goto L_100C5BFA; /* 0x100C5B97: jmp 0x100c5bfa */
L_100C5B99:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5B99: fstp st(1) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5B9B: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5BB7; /* 0x100C5B9E: jne 0x100c5bb7 */
L_100C5BA0:
    PUSH32(esp, edx); /* 0x100C5BA0: push edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5BA1: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5BA3: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C5BA8: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5BAB: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C5BAE: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C5BB4: pop ecx */
    goto L_100C5BFA; /* 0x100C5BB5: jmp 0x100c5bfa */
L_100C5BB7:
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C5BB7: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5AFA; /* 0x100C5BBA: je 0x100c5afa */
L_100C5BC0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5BC0: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5BC2: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C5BC5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5BC6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C5BC9: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x100C5BCE: fmul dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5BD1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5BD4: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5BD7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C5BDA: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x100C5BDF: fmul dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C5BE2: pop ecx */
    goto L_100C5BFA; /* 0x100C5BE3: jmp 0x100c5bfa */
L_100C5BE5:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5BE5: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5BFF; /* 0x100C5BE8: jne 0x100c5bff */
L_100C5BEA:
    PUSH32(esp, edx); /* 0x100C5BEA: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5BEB: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C5BF0: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C5BF6: pop ecx */
L_100C5BF7:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5BF7: fst dword ptr [ebp - 8] */
L_100C5BFA:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C5BFA: fstp dword ptr [ebp - 4] */
    goto L_100C5C42; /* 0x100C5BFD: jmp 0x100c5c42 */
L_100C5BFF:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C5BFF: fld dword ptr [ebp - 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5C02: fst dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C5C05: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5C08: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x100C5C0B: push 0 */
    PUSH32(esp, ecx); /* 0x100C5C0D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5C0E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C5C11: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C5C16: lea eax, [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5C19: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5C1C: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C5C1D: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C5C22: fld dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C5C25: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100C5C28: push 0 */
    PUSH32(esp, ecx); /* 0x100C5C2A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5C2B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C5C2E: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x100C5C33: lea eax, [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5C36: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5C39: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C5C3A: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C5C3F: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C5C42:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C5C42: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C5C45: push ecx */
    PUSH32(esp, ecx); /* 0x100C5C46: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C5C47: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C5C4B: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C5C4E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C5C51: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5C56: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5C57: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C5C58: pop esi */
    esp = ebp; /* 0x100C5C59: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5C5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5C5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5C5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5C5Du);

L_100C5C5D:
    PUSH32(esp, ebp); /* 0x100C5C5D: push ebp */
    ebp = esp; /* 0x100C5C5E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C5C60: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C5C63: push esi */
    PUSH32(esp, edi); /* 0x100C5C64: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5C65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C5C68: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C5C6B: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C6D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C6E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C6F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C70: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C5C71: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C5C76: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C5C78: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C5C7B: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C7E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C7F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C80: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5C81: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C5C82: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x100C5C87: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C5C8A: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C5C8B: fstp qword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_100C0034); /* 0x100C5C8E: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C5C93: movzx esi, ax */
    eax = ebp + (-0x18); /* 0x100C5C96: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C5C99: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C5C9A: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C5C9F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x100C5CA2: movzx ecx, ax */
    PUSH32(esp, 2); /* 0x100C5CA5: push 2 */
    eax = POP32_VAL(esp); /* 0x100C5CA7: pop eax */
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C5CA8: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5CBA; /* 0x100C5CAB: jne 0x100c5cba */
L_100C5CAD:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5CAD: fld qword ptr [ebp - 0x20] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C5CB0: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5CDC; /* 0x100C5CB3: je 0x100c5cdc */
L_100C5CB5:
    goto L_100C5DB9; /* 0x100C5CB5: jmp 0x100c5db9 */
L_100C5CBA:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C5CBA: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5CEF; /* 0x100C5CBD: jne 0x100c5cef */
L_100C5CBF:
    /* cmp LO16(esi), 1 */ /* 0x100C5CBF: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5CE7; /* 0x100C5CC3: jne 0x100c5ce7 */
L_100C5CC5:
    fp_push(0.0); /* 0x100C5CC5: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5CC7: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5CCA: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5CCC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5CCE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5CDA; /* 0x100C5CD1: jp 0x100c5cda */
L_100C5CD3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5CD3: fstp st(0) */
    goto L_100C5DB9; /* 0x100C5CD5: jmp 0x100c5db9 */
L_100C5CDA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5CDA: fstp st(1) */
L_100C5CDC:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5CDC: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5CDF: fld qword ptr [ebp - 0x18] */
    goto L_100C5DBC; /* 0x100C5CE2: jmp 0x100c5dbc */
L_100C5CE7:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5CE7: fld qword ptr [ebp - 0x18] */
    goto L_100C5DB9; /* 0x100C5CEA: jmp 0x100c5db9 */
L_100C5CEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C5CEF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C5CF1: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C5CF2: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5DA7; /* 0x100C5CF5: jne 0x100c5da7 */
L_100C5CFB:
    fp_push(0.0); /* 0x100C5CFB: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5CFD: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5D00: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5D02: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5D04: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5D59; /* 0x100C5D07: jp 0x100c5d59 */
L_100C5D09:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5D09: fstp st(0) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5D0B: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5D30; /* 0x100C5D0E: jne 0x100c5d30 */
L_100C5D10:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5D10: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C5D13: fcom qword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5D16: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C5D18: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5DBC; /* 0x100C5D1B: jne 0x100c5dbc */
L_100C5D21:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5D21: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C5D23: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C5D29: fchs  */
    goto L_100C5DBC; /* 0x100C5D2B: jmp 0x100c5dbc */
L_100C5D30:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5D30: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5D32: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C5D35: push ecx */
    PUSH32(esp, ecx); /* 0x100C5D36: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5D37: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5D3A: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C5D3F: fldz  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C5D41: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5D43: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5D46: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5D49: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C5D4C: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C5D51: fldz  */
    ecx = POP32_VAL(esp); /* 0x100C5D53: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5D54: pop ecx */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C5D55: fmulp st(1) */
    goto L_100C5DBC; /* 0x100C5D57: jmp 0x100c5dbc */
L_100C5D59:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5D59: fstp st(1) */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5D5B: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5D77; /* 0x100C5D5E: jne 0x100c5d77 */
L_100C5D60:
    PUSH32(esp, edx); /* 0x100C5D60: push edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5D61: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5D63: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5D68: fld qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5D6B: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C5D6E: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C5D74: pop ecx */
    goto L_100C5DBC; /* 0x100C5D75: jmp 0x100c5dbc */
L_100C5D77:
    /* test LO16(ecx), LO16(ecx) */ /* 0x100C5D77: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5CDC; /* 0x100C5D7A: je 0x100c5cdc */
L_100C5D80:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5D80: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5D82: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C5D85: push ecx */
    PUSH32(esp, ecx); /* 0x100C5D86: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5D87: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5D8A: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C5D8F: fmul qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5D92: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5D95: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5D98: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C5D9B: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C5DA0: fmul qword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x100C5DA3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5DA4: pop ecx */
    goto L_100C5DBC; /* 0x100C5DA5: jmp 0x100c5dbc */
L_100C5DA7:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C5DA7: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5DC1; /* 0x100C5DAA: jne 0x100c5dc1 */
L_100C5DAC:
    PUSH32(esp, edx); /* 0x100C5DAC: push edx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5DAD: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C5DB2: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C5DB8: pop ecx */
L_100C5DB9:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5DB9: fst qword ptr [ebp - 0x10] */
L_100C5DBC:
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C5DBC: fst qword ptr [ebp - 8] */
    goto L_100C5E09; /* 0x100C5DBF: jmp 0x100c5e09 */
L_100C5DC1:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C5DC1: fld qword ptr [ebp - 0x20] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5DC4: fst qword ptr [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x100C5DC7: push 0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5DC9: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5DCC: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C5DCF: push ecx */
    PUSH32(esp, ecx); /* 0x100C5DD0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5DD1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5DD4: call 0x10036596 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C5DD9: lea eax, [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5DDC: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5DDF: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C5DE0: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5DE5: fld qword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5DE8: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100C5DEB: push 0 */
    PUSH32(esp, ecx); /* 0x100C5DED: push ecx */
    PUSH32(esp, ecx); /* 0x100C5DEE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5DEF: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C5DF2: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C5DF7: lea eax, [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5DFA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5DFD: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C5DFE: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5E03: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5E06: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C5E09:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5E09: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x30); /* 0x100C5E0C: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5E0F: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5E13: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5E16: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5E19: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C5E1A: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C5E1F: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C5E21: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C5E24: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C5E27: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E29: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E2A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E2B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E2C: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C5E2D: pop edi */
    esi = POP32_VAL(esp); /* 0x100C5E2E: pop esi */
    esp = ebp; /* 0x100C5E2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5E31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5E32: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5E33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5E33u);

L_100C5E33:
    PUSH32(esp, ebp); /* 0x100C5E33: push ebp */
    ebp = esp; /* 0x100C5E34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C5E36: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C5E39: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C5E3E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C5E40: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100C5E43: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C5E46: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100C5E49: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C5E4C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x100C5E4E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C5E51: mov dword ptr [ebp - 8], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C5E54: fld dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C5E57: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C5E5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5E5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5E5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5E60u);

L_100C5E60:
    PUSH32(esp, ebp); /* 0x100C5E60: push ebp */
    ebp = esp; /* 0x100C5E61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100C5E63: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C5E66: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C5E6B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C5E6D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100C5E70: push esi */
    PUSH32(esp, edi); /* 0x100C5E71: push edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C5E72: mov ecx, dword ptr [ebp - 4] */
    esi = ebp + 0x8; /* 0x100C5E75: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C5E78: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x14); /* 0x100C5E7A: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E7D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E7E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E7F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E80: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C5E81: fld qword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x100C5E84: pop edi */
    esi = POP32_VAL(esp); /* 0x100C5E85: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C5E86: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C5E8B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5E8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5E8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5E8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5E8Fu);

L_100C5E8F:
    PUSH32(esp, ebp); /* 0x100C5E8F: push ebp */
    ebp = esp; /* 0x100C5E90: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x100C5E92: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C5E95: push esi */
    PUSH32(esp, edi); /* 0x100C5E96: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5E97: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C5E9A: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C5E9D: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5E9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EA1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EA2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C5EA3: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C5EA8: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C5EAA: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C5EAD: fstp qword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EB0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EB1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EB2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5EB3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C5EB4: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C5EB9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C5EBC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5EBD: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C5EC0: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C5EC5: movzx edi, ax */
    eax = ebp + (-0x10); /* 0x100C5EC8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C5ECB: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C5ECC: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C5ED1: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x100C5ED4: movzx esi, ax */
    PUSH32(esp, 2); /* 0x100C5ED7: push 2 */
    eax = POP32_VAL(esp); /* 0x100C5ED9: pop eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5EDA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C5EDD: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5EFB; /* 0x100C5EE0: jne 0x100c5efb */
L_100C5EE2:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5EE2: fld qword ptr [ebp - 8] */
    /* cmp LO16(esi), 1 */ /* 0x100C5EE5: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_100C5EE9:
    eax = ebp + (-0x40); /* 0x100C5EE9: lea eax, [ebp - 0x40] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C6069; /* 0x100C5EEC: je 0x100c6069 */
L_100C5EF2:
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C5EF2: fst qword ptr [esp + 8] */
    goto L_100C6073; /* 0x100C5EF6: jmp 0x100c6073 */
L_100C5EFB:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C5EFB: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5F09; /* 0x100C5EFE: jne 0x100c5f09 */
L_100C5F00:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5F00: fld qword ptr [ebp - 0x10] */
    /* cmp LO16(edi), 1 */ /* 0x100C5F03: cmp di, 1 */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    goto L_100C5EE9; /* 0x100C5F07: jmp 0x100c5ee9 */
L_100C5F09:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5F09: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5F0C: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5F10: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5F13: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C5F16: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C5F1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5F1D: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C5F20: inc eax */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C5F21: fst qword ptr [ebp - 0x18] */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C5F24: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6063; /* 0x100C5F27: je 0x100c6063 */
L_100C5F2D:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C5F2D: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6063; /* 0x100C5F30: je 0x100c6063 */
L_100C5F36:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5F36: fstp st(0) */
    fp_push(0.0); /* 0x100C5F38: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5F3A: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5F3D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5F3F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5F41: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5F4B; /* 0x100C5F44: jp 0x100c5f4b */
L_100C5F46:
    _st[0] = -_st[0]; /* 0x100C5F46: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C5F48: fst qword ptr [ebp - 8] */
L_100C5F4B:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5F4B: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C5F4E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5F50: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C5F52: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5F5C; /* 0x100C5F55: jp 0x100c5f5c */
L_100C5F57:
    _st[0] = -_st[0]; /* 0x100C5F57: fchs  */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5F59: fst qword ptr [ebp - 0x10] */
L_100C5F5C:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5F5C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5F5E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C5F60: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5F6D; /* 0x100C5F63: jne 0x100c5f6d */
L_100C5F65:
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C5F65: fst qword ptr [ebp - 8] */
    fp_xch(1); /* 0x100C5F68: fxch st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5F6A: fst qword ptr [ebp - 0x10] */
L_100C5F6D:
    fp_xch(2); /* 0x100C5F6D: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5F6F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5F71: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C5F73: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5F9D; /* 0x100C5F76: jp 0x100c5f9d */
L_100C5F78:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5F78: fstp st(1) */
    PUSH32(esp, 4); /* 0x100C5F7A: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5F7C: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5F7E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C5F83: fld qword ptr [ebp - 0x18] */
    eax = ebp + (-0x40); /* 0x100C5F86: lea eax, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C5F89: sub esp, 0xc */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5F8C: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C5F90: fld qword ptr [0x10065b48] */
    _st[0] = -_st[0]; /* 0x100C5F96: fchs  */
    goto L_100C6073; /* 0x100C5F98: jmp 0x100c6073 */
L_100C5F9D:
    fp_push(*(double*)ADDR(0x10063CA8)); /* 0x100C5F9D: fld qword ptr [0x10063ca8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C5FA3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5FA5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C5FA7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6031; /* 0x100C5FAA: jne 0x100c6031 */
L_100C5FB0:
    fp_xch(1); /* 0x100C5FB0: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10063CA0)); /* 0x100C5FB2: fcom qword ptr [0x10063ca0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5FB8: fnstsw ax */
    fp_xch(1); /* 0x100C5FBA: fxch st(1) */
    /* test HI8(eax), 1 */ /* 0x100C5FBC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6031; /* 0x100C5FBF: jne 0x100c6031 */
L_100C5FC1:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x100C5FC1: fstp qword ptr [ebp - 0x38] */
    eax = ebp + (-0x38); /* 0x100C5FC4: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x1Au); /* 0x100C5FC7: push 0x1a */
    PUSH32(esp, eax); /* 0x100C5FC9: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C5FCA: fstp qword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100C5FCD: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x100C5FD2: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x1Au); /* 0x100C5FD5: push 0x1a */
    PUSH32(esp, eax); /* 0x100C5FD7: push eax */
    RECOMP_CALL(sub_100BFCDC); /* 0x100C5FD8: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5FDD: fld qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C5FE0: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x100C5FE2: fld qword ptr [ebp - 0x28] */
    _st[1] -= _st[0]; /* 0x100C5FE5: fsub st(1), st(0) */
    fp_push(_st[0]); /* 0x100C5FE7: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C5FE9: faddp st(3) */
    fp_xch(1); /* 0x100C5FEB: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C5FED: fmulp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5FEF: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C5FF2: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x100C5FF4: fld qword ptr [ebp - 0x38] */
    _st[1] -= _st[0]; /* 0x100C5FF7: fsub st(1), st(0) */
    fp_push(_st[0]); /* 0x100C5FF9: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C5FFB: faddp st(3) */
    fp_xch(1); /* 0x100C5FFD: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C5FFF: fmulp st(2) */
    fp_xch(3); /* 0x100C6001: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C6003: faddp st(1) */
    fp_xch(2); /* 0x100C6005: fxch st(2) */
    _st[0] *= _st[0]; /* 0x100C6007: fmul st(0), st(0) */
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100C6009: fsub qword ptr [0x10067cd8] */
    fp_xch(1); /* 0x100C600F: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C6011: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C6013: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C6015: faddp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C6017: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C601A: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C601E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C6021: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C6026: fmul qword ptr [0x10063bd0] */
    eax = ebp + (-0x20); /* 0x100C602C: lea eax, [ebp - 0x20] */
    goto L_100C6073; /* 0x100C602F: jmp 0x100c6073 */
L_100C6031:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C6031: fdivp st(1) */
    PUSH32(esp, ecx); /* 0x100C6033: push ecx */
    PUSH32(esp, ecx); /* 0x100C6034: push ecx */
    _st[0] *= _st[0]; /* 0x100C6035: fmul st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6037: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C603A: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C603F: fmul qword ptr [0x10063bd0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x100C6045: fstp qword ptr [ebp - 0x38] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C6048: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C604B: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C604E: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C6051: push ecx */
    PUSH32(esp, ecx); /* 0x100C6052: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6053: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C6056: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x38)); /* 0x100C605B: fadd qword ptr [ebp - 0x38] */
    eax = ebp + (-0x30); /* 0x100C605E: lea eax, [ebp - 0x30] */
    goto L_100C6073; /* 0x100C6061: jmp 0x100c6073 */
L_100C6063:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6063: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x40); /* 0x100C6066: lea eax, [ebp - 0x40] */
L_100C6069:
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6069: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C606D: fld qword ptr [0x10065b48] */
L_100C6073:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6073: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6076: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6077: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C607C: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C607E: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C6081: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6084: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6086: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6087: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6088: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6089: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C608A: pop edi */
    esi = POP32_VAL(esp); /* 0x100C608B: pop esi */
    esp = ebp; /* 0x100C608C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C608E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C608F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6090u);

L_100C6090:
    PUSH32(esp, ebp); /* 0x100C6090: push ebp */
    ebp = esp; /* 0x100C6091: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C6093: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x100C6096: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x100C6099: push esi */
    PUSH32(esp, edi); /* 0x100C609A: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C609B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C609E: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C60A1: mov edi, esp */
    PUSH32(esp, eax); /* 0x100C60A3: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60A7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E8F); /* 0x100C60A8: call 0x100c5e8f */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063CB0)); /* 0x100C60AD: fld qword ptr [0x10063cb0] */
    esi = eax; /* 0x100C60B3: mov esi, eax */
    PUSH32(esp, ecx); /* 0x100C60B5: push ecx */
    edi = esp; /* 0x100C60B6: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C60B8: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C60BB: fstp qword ptr [esp + 0x10] */
    PUSH32(esp, eax); /* 0x100C60BF: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60C0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60C1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60C3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6637); /* 0x100C60C4: call 0x100c6637 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C60C9: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C60CB: add esp, 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C60CE: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C60D1: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60D3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C60D6: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C60D7: pop edi */
    esi = POP32_VAL(esp); /* 0x100C60D8: pop esi */
    esp = ebp; /* 0x100C60D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C60DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C60DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C60DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C60DDu);

L_100C60DD:
    PUSH32(esp, ebp); /* 0x100C60DD: push ebp */
    ebp = esp; /* 0x100C60DE: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x100C6104)); /* 0x100C60E0: fld dword ptr [0x100c6104] */
    PUSH32(esp, ecx); /* 0x100C60E6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C60E7: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C60EA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C60ED: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6155); /* 0x100C60F0: call 0x100c6155 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C60F5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C60F6: pop ecx */
    PUSH32(esp, edx); /* 0x100C60F7: push edx */
    PUSH32(esp, eax); /* 0x100C60F8: push eax */
    RECOMP_CALL(sub_100C6835); /* 0x100C60F9: call 0x100c6835 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C60FE: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C6101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6102: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6108u);

L_100C6108:
    PUSH32(esp, ebp); /* 0x100C6108: push ebp */
    ebp = esp; /* 0x100C6109: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C610B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x100C610E: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x100C6111: push esi */
    PUSH32(esp, edi); /* 0x100C6112: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6113: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6116: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6119: mov edi, esp */
    PUSH32(esp, eax); /* 0x100C611B: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C611C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C611D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C611E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C611F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6378); /* 0x100C6120: call 0x100c6378 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063CB0)); /* 0x100C6125: fld qword ptr [0x10063cb0] */
    esi = eax; /* 0x100C612B: mov esi, eax */
    PUSH32(esp, ecx); /* 0x100C612D: push ecx */
    edi = esp; /* 0x100C612E: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C6130: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6133: fstp qword ptr [esp + 0x10] */
    PUSH32(esp, eax); /* 0x100C6137: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6138: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6139: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C613A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C613B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6637); /* 0x100C613C: call 0x100c6637 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6141: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C6143: add esp, 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C6146: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6149: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C614B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C614C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C614D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C614E: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C614F: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6150: pop esi */
    esp = ebp; /* 0x100C6151: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6153: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6154: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6155(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6155u);

L_100C6155:
    PUSH32(esp, ebp); /* 0x100C6155: push ebp */
    ebp = esp; /* 0x100C6156: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100C6158: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C615B: push esi */
    PUSH32(esp, edi); /* 0x100C615C: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C615D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6160: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C6163: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6168: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C616B: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C616E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C6171: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x100C6176: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C6179: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C617A: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C617D: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C6182: movzx edi, ax */
    eax = ebp + (-0x8); /* 0x100C6185: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C6188: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C6189: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C618E: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x100C6191: movzx esi, ax */
    PUSH32(esp, 2); /* 0x100C6194: push 2 */
    eax = POP32_VAL(esp); /* 0x100C6196: pop eax */
    PUSH32(esp, ecx); /* 0x100C6197: push ecx */
    PUSH32(esp, ecx); /* 0x100C6198: push ecx */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C6199: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C61B4; /* 0x100C619C: jne 0x100c61b4 */
L_100C619E:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C619E: fld dword ptr [ebp - 4] */
    /* cmp LO16(esi), 1 */ /* 0x100C61A1: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_100C61A5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C634D; /* 0x100C61A5: je 0x100c634d */
L_100C61AB:
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C61AB: fst dword ptr [esp + 4] */
    goto L_100C6357; /* 0x100C61AF: jmp 0x100c6357 */
L_100C61B4:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C61B4: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C61C2; /* 0x100C61B7: jne 0x100c61c2 */
L_100C61B9:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C61B9: fld dword ptr [ebp - 8] */
    /* cmp LO16(edi), 1 */ /* 0x100C61BC: cmp di, 1 */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    goto L_100C61A5; /* 0x100C61C0: jmp 0x100c61a5 */
L_100C61C2:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C61C2: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C61C5: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C61C9: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C61CC: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C61CF: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C61D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C61D6: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x100C61D7: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C61D8: fstp dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100C61DB: pop ecx */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C61DC: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6348; /* 0x100C61DF: je 0x100c6348 */
L_100C61E5:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C61E5: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6348; /* 0x100C61E8: je 0x100c6348 */
L_100C61EE:
    fp_push(0.0); /* 0x100C61EE: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C61F0: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C61F3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C61F5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C61F7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6204; /* 0x100C61FA: jp 0x100c6204 */
L_100C61FC:
    _st[0] = -_st[0]; /* 0x100C61FC: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C61FE: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C6201: fld dword ptr [ebp - 4] */
L_100C6204:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C6204: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C6207: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6209: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C620B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6218; /* 0x100C620E: jp 0x100c6218 */
L_100C6210:
    _st[0] = -_st[0]; /* 0x100C6210: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C6212: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C6215: fld dword ptr [ebp - 8] */
L_100C6218:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6218: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C621A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C621C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6235; /* 0x100C621F: jne 0x100c6235 */
L_100C6221:
    fp_xch(1); /* 0x100C6221: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C6223: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C6226: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C6229: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C622C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C622F: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C6232: fld dword ptr [ebp - 8] */
L_100C6235:
    fp_xch(2); /* 0x100C6235: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6237: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6239: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C623B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C625F; /* 0x100C623E: jp 0x100c625f */
L_100C6240:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C6240: fstp st(0) */
    PUSH32(esp, 4); /* 0x100C6242: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C6244: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C6246: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C624B: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C624E: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C6251: fld dword ptr [0x10065b68] */
    _st[0] = -_st[0]; /* 0x100C6257: fchs  */
    PUSH32(esp, ecx); /* 0x100C6259: push ecx */
    goto L_100C6357; /* 0x100C625A: jmp 0x100c6357 */
L_100C625F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C6370)); /* 0x100C625F: fcom qword ptr [0x100c6370] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6265: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6267: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6309; /* 0x100C626A: jp 0x100c6309 */
L_100C6270:
    fp_xch(1); /* 0x100C6270: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C6368)); /* 0x100C6272: fcom qword ptr [0x100c6368] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6278: fnstsw ax */
    fp_xch(1); /* 0x100C627A: fxch st(1) */
    /* test HI8(eax), 1 */ /* 0x100C627C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6309; /* 0x100C627F: jne 0x100c6309 */
L_100C6285:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C6285: fstp dword ptr [ebp - 0x10] */
    eax = ebp + (-0x10); /* 0x100C6288: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0xBu); /* 0x100C628B: push 0xb */
    PUSH32(esp, eax); /* 0x100C628D: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C628E: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100C6291: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x100C6296: lea eax, [ebp - 0x14] */
    PUSH32(esp, 0xBu); /* 0x100C6299: push 0xb */
    PUSH32(esp, eax); /* 0x100C629B: push eax */
    RECOMP_CALL(sub_100BFE6A); /* 0x100C629C: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C62A1: fld dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C62A4: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C62A7: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C62A9: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x100C62AC: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C62AE: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C62B1: fld st(0) */
    fp_push(_st[3]); /* 0x100C62B3: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C62B5: fsubp st(1) */
    fp_xch(3); /* 0x100C62B7: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C62B9: faddp st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C62BB: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C62BD: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C62C0: fld st(0) */
    fp_push(_st[5]); /* 0x100C62C2: fld st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C62C4: fsubp st(1) */
    fp_xch(5); /* 0x100C62C6: fxch st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C62C8: faddp st(1) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x100C62CA: fmulp st(4) */
    fp_xch(1); /* 0x100C62CC: fxch st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C62CE: faddp st(3) */
    fp_xch(1); /* 0x100C62D0: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C62D2: fmul st(0), st(0) */
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100C62D4: fsub qword ptr [0x10067cd8] */
    fp_xch(1); /* 0x100C62DA: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C62DC: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C62DE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C62E0: fstp dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x100C62E3: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C62E6: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C62E9: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C62EC: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C62F0: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C62F3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C62F6: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C62FB: fmul qword ptr [0x10063bd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C6301: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C6304: fld dword ptr [ebp - 0x18] */
    goto L_100C6357; /* 0x100C6307: jmp 0x100c6357 */
L_100C6309:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C6309: fdivp st(1) */
    PUSH32(esp, ecx); /* 0x100C630B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C630C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C630F: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[0]; /* 0x100C6312: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C6314: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C6317: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C631A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C631D: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C6322: fmul qword ptr [0x10063bd0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100C6328: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C632B: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C632E: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C6331: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C6334: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6335: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C6338: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x1C)); /* 0x100C633D: fadd qword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C6340: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C6343: fld dword ptr [ebp - 0x18] */
    goto L_100C6357; /* 0x100C6346: jmp 0x100c6357 */
L_100C6348:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C6348: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C634B: push ecx */
    PUSH32(esp, ecx); /* 0x100C634C: push ecx */
L_100C634D:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C634D: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C6351: fld dword ptr [0x10065b68] */
L_100C6357:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6357: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C635A: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C635F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6360: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C6361: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6362: pop esi */
    esp = ebp; /* 0x100C6363: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6365: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6366: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6378(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6378u);

L_100C6378:
    PUSH32(esp, ebp); /* 0x100C6378: push ebp */
    ebp = esp; /* 0x100C6379: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x100C637B: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C637E: push esi */
    PUSH32(esp, edi); /* 0x100C637F: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6380: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6383: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6386: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6388: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6389: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C638A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C638B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C638C: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6391: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6393: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C6396: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6399: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C639A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C639B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C639C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C639D: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C63A2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C63A5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C63A6: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C63A9: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C63AE: movzx edi, ax */
    eax = ebp + (-0x8); /* 0x100C63B1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C63B4: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C63B5: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C63BA: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x100C63BD: movzx esi, ax */
    PUSH32(esp, 2); /* 0x100C63C0: push 2 */
    eax = POP32_VAL(esp); /* 0x100C63C2: pop eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C63C3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C63C6: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C63E4; /* 0x100C63C9: jne 0x100c63e4 */
L_100C63CB:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C63CB: fld qword ptr [ebp - 0x10] */
    /* cmp LO16(esi), 1 */ /* 0x100C63CE: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_100C63D2:
    eax = ebp + (-0x38); /* 0x100C63D2: lea eax, [ebp - 0x38] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C6557; /* 0x100C63D5: je 0x100c6557 */
L_100C63DB:
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C63DB: fst qword ptr [esp + 8] */
    goto L_100C6561; /* 0x100C63DF: jmp 0x100c6561 */
L_100C63E4:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C63E4: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C63F2; /* 0x100C63E7: jne 0x100c63f2 */
L_100C63E9:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C63E9: fld qword ptr [ebp - 8] */
    /* cmp LO16(edi), 1 */ /* 0x100C63EC: cmp di, 1 */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    goto L_100C63D2; /* 0x100C63F0: jmp 0x100c63d2 */
L_100C63F2:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C63F2: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C63F5: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C63F9: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C63FC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C63FF: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C6404: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6406: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C6409: inc eax */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C640A: fst qword ptr [ebp - 0x18] */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100C640D: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6551; /* 0x100C6410: je 0x100c6551 */
L_100C6416:
    /* cmp LO16(esi), LO16(eax) */ /* 0x100C6416: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6551; /* 0x100C6419: je 0x100c6551 */
L_100C641F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C641F: fstp st(0) */
    fp_push(0.0); /* 0x100C6421: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C6423: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6426: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6428: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C642A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6434; /* 0x100C642D: jp 0x100c6434 */
L_100C642F:
    _st[0] = -_st[0]; /* 0x100C642F: fchs  */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C6431: fst qword ptr [ebp - 0x10] */
L_100C6434:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C6434: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C6437: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6439: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C643B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6445; /* 0x100C643E: jp 0x100c6445 */
L_100C6440:
    _st[0] = -_st[0]; /* 0x100C6440: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C6442: fst qword ptr [ebp - 8] */
L_100C6445:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6445: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6447: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6449: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6456; /* 0x100C644C: jne 0x100c6456 */
L_100C644E:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C644E: fst qword ptr [ebp - 0x10] */
    fp_xch(1); /* 0x100C6451: fxch st(1) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C6453: fst qword ptr [ebp - 8] */
L_100C6456:
    fp_xch(2); /* 0x100C6456: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6458: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C645A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C645C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6486; /* 0x100C645F: jp 0x100c6486 */
L_100C6461:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C6461: fstp st(1) */
    PUSH32(esp, 4); /* 0x100C6463: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C6465: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C6467: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C646C: fld qword ptr [ebp - 0x18] */
    eax = ebp + (-0x38); /* 0x100C646F: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C6472: sub esp, 0xc */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6475: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C6479: fld qword ptr [0x10065b88] */
    _st[0] = -_st[0]; /* 0x100C647F: fchs  */
    goto L_100C6561; /* 0x100C6481: jmp 0x100c6561 */
L_100C6486:
    fp_push(*(double*)ADDR(0x10063CA8)); /* 0x100C6486: fld qword ptr [0x10063ca8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C648C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C648E: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C6490: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C651A; /* 0x100C6493: jne 0x100c651a */
L_100C6499:
    fp_xch(1); /* 0x100C6499: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10063CA0)); /* 0x100C649B: fcom qword ptr [0x10063ca0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C64A1: fnstsw ax */
    fp_xch(1); /* 0x100C64A3: fxch st(1) */
    /* test HI8(eax), 1 */ /* 0x100C64A5: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C651A; /* 0x100C64A8: jne 0x100c651a */
L_100C64AA:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C64AA: fstp qword ptr [ebp - 0x30] */
    eax = ebp + (-0x30); /* 0x100C64AD: lea eax, [ebp - 0x30] */
    PUSH32(esp, 0x1Au); /* 0x100C64B0: push 0x1a */
    PUSH32(esp, eax); /* 0x100C64B2: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C64B3: fstp qword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_100C002B); /* 0x100C64B6: call 0x100c002b */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x100C64BB: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x1Au); /* 0x100C64BE: push 0x1a */
    PUSH32(esp, eax); /* 0x100C64C0: push eax */
    RECOMP_CALL(sub_100C002B); /* 0x100C64C1: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C64C6: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C64C9: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x100C64CB: fld qword ptr [ebp - 0x28] */
    _st[1] -= _st[0]; /* 0x100C64CE: fsub st(1), st(0) */
    fp_push(_st[0]); /* 0x100C64D0: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C64D2: faddp st(3) */
    fp_xch(1); /* 0x100C64D4: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C64D6: fmulp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C64D8: fld qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C64DB: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C64DD: fld qword ptr [ebp - 0x30] */
    _st[1] -= _st[0]; /* 0x100C64E0: fsub st(1), st(0) */
    fp_push(_st[0]); /* 0x100C64E2: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C64E4: faddp st(3) */
    fp_xch(1); /* 0x100C64E6: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C64E8: fmulp st(2) */
    fp_xch(3); /* 0x100C64EA: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C64EC: faddp st(1) */
    fp_xch(2); /* 0x100C64EE: fxch st(2) */
    _st[0] *= _st[0]; /* 0x100C64F0: fmul st(0), st(0) */
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100C64F2: fsub qword ptr [0x10067cd8] */
    fp_xch(1); /* 0x100C64F8: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C64FA: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C64FC: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C64FE: faddp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C6500: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6503: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6507: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C650A: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C650F: fmul qword ptr [0x10063bd0] */
    eax = ebp + (-0x20); /* 0x100C6515: lea eax, [ebp - 0x20] */
    goto L_100C6561; /* 0x100C6518: jmp 0x100c6561 */
L_100C651A:
    _st[1] /= _st[0]; /* 0x100C651A: fdiv st(1), st(0) */
    fp_xch(1); /* 0x100C651C: fxch st(1) */
    PUSH32(esp, ecx); /* 0x100C651E: push ecx */
    PUSH32(esp, ecx); /* 0x100C651F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C6520: fstp qword ptr [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6523: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C6526: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C652B: fstp qword ptr [ebp - 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C652E: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6531: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C6534: fld qword ptr [ebp - 0x30] */
    _st[0] *= _st[0]; /* 0x100C6537: fmul st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C6539: push ecx */
    PUSH32(esp, ecx); /* 0x100C653A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C653B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C653E: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C6543: fmul qword ptr [0x10063bd0] */
    eax = ebp + (-0x48); /* 0x100C6549: lea eax, [ebp - 0x48] */
    _st[0] += *(double*)ADDR(ebp + (-0x28)); /* 0x100C654C: fadd qword ptr [ebp - 0x28] */
    goto L_100C6561; /* 0x100C654F: jmp 0x100c6561 */
L_100C6551:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6551: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x48); /* 0x100C6554: lea eax, [ebp - 0x48] */
L_100C6557:
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6557: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C655B: fld qword ptr [0x10065b88] */
L_100C6561:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6561: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6564: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6565: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C656A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C656C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C656F: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6572: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6574: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6575: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6576: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6577: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C6578: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6579: pop esi */
    esp = ebp; /* 0x100C657A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C657C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C657D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C657E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C657Eu);

L_100C657E:
    PUSH32(esp, ebp); /* 0x100C657E: push ebp */
    ebp = esp; /* 0x100C657F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6581: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C6584: push esi */
    PUSH32(esp, edi); /* 0x100C6585: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6586: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6589: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C658C: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C658E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C658F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6590: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6591: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6592: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6597: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6599: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C659C: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C659F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65A1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65A2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C65A3: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100C65A8: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0x10); /* 0x100C65AB: lea esi, [ebp - 0x10] */
    edi = eax; /* 0x100C65AE: mov edi, eax */
    _st[0] = -_st[0]; /* 0x100C65B0: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C65B2: fstp qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C65B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65B8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C65BB: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C65BC: pop edi */
    esi = POP32_VAL(esp); /* 0x100C65BD: pop esi */
    esp = ebp; /* 0x100C65BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C65C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C65C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C65C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C65C2u);

L_100C65C2:
    PUSH32(esp, ebp); /* 0x100C65C2: push ebp */
    ebp = esp; /* 0x100C65C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C65C5: push ecx */
    PUSH32(esp, ecx); /* 0x100C65C6: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C65C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C65CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C65CD: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C65D2: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C65D5: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C65D8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C65DB: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x100C65E0: mov eax, dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x100C65E3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C65E5: fstp dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x4)); /* 0x100C65E8: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C65EB: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100C65EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C65F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C65F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C65F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C65F2u);

L_100C65F2:
    PUSH32(esp, ebp); /* 0x100C65F2: push ebp */
    ebp = esp; /* 0x100C65F3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100C65F5: mov eax, dword ptr [ebp + 0xc] */
    edx = 0x7FFFu; /* 0x100C65F8: mov edx, 0x7fff */
    ecx = eax; /* 0x100C65FD: mov ecx, eax */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x100C65FF: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x100C65FF: shr eax, 0x10 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x100C6602: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x100C6602: shr ecx, 0x10 */
    _flag_a = (uint32_t)((LO16(ecx) ^ MEM16(ebp + 0xA))) << 16; _flag_b = (uint32_t)((LO16(ecx) ^ MEM16(ebp + 0xA))) << 16;
    SET_LO16(ecx, LO16(ecx) ^ MEM16(ebp + 0xA)); /* 0x100C6605: xor cx, word ptr [ebp + 0xa] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(ecx, LO16(ecx) & LO16(edx)); /* 0x100C6609: and cx, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(ecx) ^ LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) ^ LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) ^ LO16(eax)); /* 0x100C660C: xor cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + 0xA) = (uint16_t)(LO16(ecx)); /* 0x100C660F: mov word ptr [ebp + 0xa], cx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C6613: fld dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100C6616: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6617: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6618u);

L_100C6618:
    PUSH32(esp, ebp); /* 0x100C6618: push ebp */
    ebp = esp; /* 0x100C6619: mov ebp, esp */
    eax = MEM32(ebp + 0xE); /* 0x100C661B: mov eax, dword ptr [ebp + 0xe] */
    ecx = 0x7FFFu; /* 0x100C661E: mov ecx, 0x7fff */
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100C6623: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x100C6627: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ MEM16(ebp + 0x16))) << 16;
    SET_LO16(eax, LO16(eax) ^ MEM16(ebp + 0x16)); /* 0x100C662A: xor ax, word ptr [ebp + 0x16] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(ebp + 0xE) = (uint16_t)(LO16(eax)); /* 0x100C662E: mov word ptr [ebp + 0xe], ax */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6632: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100C6635: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6636: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6637(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6637u);

L_100C6637:
    PUSH32(esp, ebp); /* 0x100C6637: push ebp */
    ebp = esp; /* 0x100C6638: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C663A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C663D: push esi */
    PUSH32(esp, edi); /* 0x100C663E: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C663F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6642: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6645: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6647: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6648: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6649: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C664A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C664B: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x1C); /* 0x100C6650: fmul qword ptr [ebp + 0x1c] */
    esi = ebp + 0xC; /* 0x100C6653: lea esi, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x100C6656: push ecx */
    PUSH32(esp, ecx); /* 0x100C6657: push ecx */
    edi = esp; /* 0x100C6658: mov edi, esp */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C665A: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C665E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C665F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6660: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6661: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6662: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x1C); /* 0x100C6667: fmul qword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x100C666A: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C666D: add esp, 8 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6670: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6673: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6674: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6679: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C667B: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C667E: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6681: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6683: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6684: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6685: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6686: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C6687: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6688: pop esi */
    esp = ebp; /* 0x100C6689: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C668B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C668C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C668D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C668Du);

L_100C668D:
    PUSH32(esp, ebp); /* 0x100C668D: push ebp */
    ebp = esp; /* 0x100C668E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C6690: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C6693: push esi */
    PUSH32(esp, edi); /* 0x100C6694: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6695: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6698: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C669B: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C669D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C669E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C669F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66A0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C66A1: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C66A6: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C66A8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C66AB: fucompp  */
    fp_pop(); fp_pop();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C66AD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C66B0: fnstsw ax */
    edi = esp; /* 0x100C66B2: mov edi, esp */
    /* test HI8(eax), 0x44u */ /* 0x100C66B4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C6702; /* 0x100C66B7: jnp 0x100c6702 */
L_100C66B9:
    esi = ebp + 0xC; /* 0x100C66B9: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66BC: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x10); /* 0x100C66BD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C66C0: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66C1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66C3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E8F); /* 0x100C66C4: call 0x100c5e8f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C66C9: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C66CC: mov esi, eax */
    edi = esp; /* 0x100C66CE: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C66D0: lea eax, [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C66D3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66D8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66D9: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C66DA: mov edi, esp */
    esi = ebp + 0x1C; /* 0x100C66DC: lea esi, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x100C66DF: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66E1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66E2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66E3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6958); /* 0x100C66E4: call 0x100c6958 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C66E9: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C66EB: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x100C66EE: lea eax, [ebp - 0x30] */
L_100C66F1:
    edi = esp; /* 0x100C66F1: mov edi, esp */
    PUSH32(esp, eax); /* 0x100C66F3: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66F5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66F6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C66F7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C58D2); /* 0x100C66F8: call 0x100c58d2 */
    RECOMP_FLAGS_IN();
    goto L_100C679E; /* 0x100C66FD: jmp 0x100c679e */
L_100C6702:
    esi = ebp + 0x1C; /* 0x100C6702: lea esi, [ebp + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6705: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6706: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6707: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6708: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C6709: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C670E: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6710: add esp, 0x10 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6713: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6715: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C6717: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100C6719: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C675D; /* 0x100C671C: jnp 0x100c675d */
L_100C671E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C671E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6721: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6724: mov edi, esp */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C6726: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6728: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6729: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C672A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C672B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C672C: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6731: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6732: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6733: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C6736: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C673B: fstp qword ptr [esp] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C673E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x1C; /* 0x100C6741: lea esi, [ebp + 0x1c] */
    edi = esp; /* 0x100C6744: mov edi, esp */
    eax = ebp + (-0x30); /* 0x100C6746: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100C6749: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C674A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C674B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C674C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C674D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6637); /* 0x100C674E: call 0x100c6637 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6753: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C6755: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x20); /* 0x100C6758: lea eax, [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_100C66F1; /* 0x100C675B: jmp 0x100c66f1 */
L_100C675D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C675D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    esi = ebp + 0x1C; /* 0x100C6760: lea esi, [ebp + 0x1c] */
    edi = esp; /* 0x100C6763: mov edi, esp */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6765: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6769: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C676A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C676B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C676C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C676D: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C6772: push ecx */
    PUSH32(esp, ecx); /* 0x100C6773: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6774: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C6778: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C677A: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C677D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C677E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C677F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6780: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6781: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6786: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6787: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6788: fstp qword ptr [esp] */
    RECOMP_ICALL(0x10036A46u); /* 0x100C678B: call 0x10036a46 */ /* not lifted */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6790: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6791: pop ecx */
    eax = ebp + (-0x30); /* 0x100C6792: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6795: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6798: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6799: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
L_100C679E:
    esi = eax; /* 0x100C679E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C67A0: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C67A3: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C67A6: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C67A8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C67A9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C67AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C67AB: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C67AC: pop edi */
    esi = POP32_VAL(esp); /* 0x100C67AD: pop esi */
    esp = ebp; /* 0x100C67AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C67B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C67B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C67B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C67B2u);

L_100C67B2:
    PUSH32(esp, ebp); /* 0x100C67B2: push ebp */
    ebp = esp; /* 0x100C67B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C67B5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C67B8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C67BB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C67BE: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C67C3: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C67C6: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C67C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C67CC: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C67D1: push dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C67D4: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C67D7: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C67DA: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C67DF: push dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C67E2: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C67E5: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C67E8: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C67ED: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C67F0: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C67F3: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C67F6: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C67F8: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C67FB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C67FD: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C67FF: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x100C6802: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C6804: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C6807: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C6809: fmulp st(2) */
    fp_xch(4); /* 0x100C680B: fxch st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C680D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C680F: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C6812: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C6815: fstp dword ptr [esp + 4] */
    fp_xch(3); /* 0x100C6819: fxch st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C681B: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C681D: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C681F: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C6821: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C6824: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6827: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C682A: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C682F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6830: pop ecx */
    esp = ebp; /* 0x100C6831: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6833: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6834: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6835(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6835u);

L_100C6835:
    PUSH32(esp, ebp); /* 0x100C6835: push ebp */
    ebp = esp; /* 0x100C6836: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C6838: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6839: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C683C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C683F: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x100C6844: fmul dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6847: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C684A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C684D: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6850: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6853: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6856: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C6859: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x100C685E: fmul dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6861: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C6864: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C6867: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C686A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C686D: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6872: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6873: pop ecx */
    esp = ebp; /* 0x100C6874: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6876: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6877: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6878u);

L_100C6878:
    PUSH32(esp, ebp); /* 0x100C6878: push ebp */
    ebp = esp; /* 0x100C6879: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C687B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C687E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C6881: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C6886: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6888: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C688A: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C688C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C688D: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100C688E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C68B7; /* 0x100C6891: jnp 0x100c68b7 */
L_100C6893:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6893: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6896: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6155); /* 0x100C6899: call 0x100c6155 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C689E: push edx */
    PUSH32(esp, eax); /* 0x100C689F: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C68A0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C68A3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C67B2); /* 0x100C68A6: call 0x100c67b2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C68AB: push edx */
    PUSH32(esp, eax); /* 0x100C68AC: push eax */
    RECOMP_CALL(sub_100C5AA8); /* 0x100C68AD: call 0x100c5aa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100C68B2: add esp, 0x20 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C68B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C68B6: ret  */
L_100C68B7:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C68B7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C68BA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C68BD: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C68C2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C68C4: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C68C6: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C68C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C68C9: pop ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C68CA: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100C68CC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C6901; /* 0x100C68CF: jnp 0x100c6901 */
L_100C68D1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C68D1: push dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C68D4: fstp st(0) */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C68D6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C68D9: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C68DE: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C68DF: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C68E2: call 0x100c20af */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C68E7: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C68EA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C68ED: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C6835); /* 0x100C68F0: call 0x100c6835 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C68F5: push edx */
    PUSH32(esp, eax); /* 0x100C68F6: push eax */
    RECOMP_CALL(sub_100C5AA8); /* 0x100C68F7: call 0x100c5aa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C68FC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C68FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6900: ret  */
L_100C6901:
    PUSH32(esp, ecx); /* 0x100C6901: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6902: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C6905: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C6908: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C690B: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6910: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6911: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6914: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6917: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C691A: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C691F: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6920: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C6935); /* 0x100C6923: call 0x100c6935 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6928: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6929: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C692C: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6931: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6932: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C6933: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6934: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6935(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6935u);

L_100C6935:
    PUSH32(esp, ebp); /* 0x100C6935: push ebp */
    ebp = esp; /* 0x100C6936: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C6938: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C693B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C693E: fstp qword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C6942: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6945: fstp qword ptr [esp] */
    RECOMP_ICALL(0x10036A46u); /* 0x100C6948: call 0x10036a46 */ /* not lifted */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C694D: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C6950: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6953: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C6956: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6957: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6958u);

L_100C6958:
    PUSH32(esp, ebp); /* 0x100C6958: push ebp */
    ebp = esp; /* 0x100C6959: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C695B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C695E: push esi */
    PUSH32(esp, edi); /* 0x100C695F: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6960: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6963: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6966: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6968: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6969: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C696A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C696B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C696C: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6971: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6973: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C6976: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6979: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C697A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C697B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C697C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C697D: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6982: mov edi, esp */
    esi = ebp + 0x1C; /* 0x100C6984: lea esi, [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C6987: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C698A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C698B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C698C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C698D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C698E: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6993: mov edi, esp */
    esi = ebp + 0x1C; /* 0x100C6995: lea esi, [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C6998: fstp qword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C699B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C699C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C699D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C699E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C699F: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C69A4: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x20); /* 0x100C69A7: lea eax, [ebp - 0x20] */
    fp_push(_st[0]); /* 0x100C69AA: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C69AC: fld qword ptr [ebp - 0x10] */
    _st[1] *= _st[0]; /* 0x100C69AF: fmul st(1), st(0) */
    fp_push(_st[3]); /* 0x100C69B1: fld st(3) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C69B3: fld qword ptr [ebp - 0x18] */
    _st[1] *= _st[0]; /* 0x100C69B6: fmul st(1), st(0) */
    fp_xch(3); /* 0x100C69B8: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C69BA: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C69BC: fstp qword ptr [esp + 8] */
    fp_xch(2); /* 0x100C69C0: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C69C2: fmulp st(1) */
    fp_xch(2); /* 0x100C69C4: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C69C6: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C69C8: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C69CA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C69CD: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C69CE: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C69D3: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C69D5: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C69D8: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C69DB: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69DD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69E0: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C69E1: pop edi */
    esi = POP32_VAL(esp); /* 0x100C69E2: pop esi */
    esp = ebp; /* 0x100C69E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C69E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C69E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C69E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C69E7u);

L_100C69E7:
    PUSH32(esp, ebp); /* 0x100C69E7: push ebp */
    ebp = esp; /* 0x100C69E8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C69EA: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C69ED: push esi */
    PUSH32(esp, edi); /* 0x100C69EE: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C69EF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C69F2: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C69F5: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69F7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69F8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69F9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C69FA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C69FB: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C6A00: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6A02: add esp, 0x10 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6A05: fucompp  */
    fp_pop(); fp_pop();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6A07: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6A0A: fnstsw ax */
    edi = esp; /* 0x100C6A0C: mov edi, esp */
    /* test HI8(eax), 0x44u */ /* 0x100C6A0E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C6A5C; /* 0x100C6A11: jnp 0x100c6a5c */
L_100C6A13:
    esi = ebp + 0xC; /* 0x100C6A13: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A16: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x10); /* 0x100C6A17: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C6A1A: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A1B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A1C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A1D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6378); /* 0x100C6A1E: call 0x100c6378 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6A23: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C6A26: mov esi, eax */
    edi = esp; /* 0x100C6A28: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C6A2A: lea eax, [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6A2D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A30: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A31: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A32: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A33: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C6A34: mov edi, esp */
    esi = ebp + 0x1C; /* 0x100C6A36: lea esi, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x100C6A39: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A3A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A3B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A3C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A3D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6958); /* 0x100C6A3E: call 0x100c6958 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6A43: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C6A45: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x100C6A48: lea eax, [ebp - 0x30] */
L_100C6A4B:
    edi = esp; /* 0x100C6A4B: mov edi, esp */
    PUSH32(esp, eax); /* 0x100C6A4D: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A4E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A4F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A51: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5C5D); /* 0x100C6A52: call 0x100c5c5d */
    RECOMP_FLAGS_IN();
    goto L_100C6AF8; /* 0x100C6A57: jmp 0x100c6af8 */
L_100C6A5C:
    esi = ebp + 0x1C; /* 0x100C6A5C: lea esi, [ebp + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A5F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A60: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A61: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A62: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C6A63: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C6A68: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6A6A: add esp, 0x10 */
    _flag_k = FK_ADD;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6A6D: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6A6F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C6A71: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100C6A73: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C6AB7; /* 0x100C6A76: jnp 0x100c6ab7 */
L_100C6A78:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6A78: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6A7B: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6A7E: mov edi, esp */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C6A80: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A82: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A83: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A84: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6A85: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6A86: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6A8B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6A8C: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6A8D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C6A90: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6A95: fstp qword ptr [esp] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6A98: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x1C; /* 0x100C6A9B: lea esi, [ebp + 0x1c] */
    edi = esp; /* 0x100C6A9E: mov edi, esp */
    eax = ebp + (-0x30); /* 0x100C6AA0: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100C6AA3: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AA4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AA5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AA6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AA7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6637); /* 0x100C6AA8: call 0x100c6637 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6AAD: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C6AAF: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x20); /* 0x100C6AB2: lea eax, [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_100C6A4B; /* 0x100C6AB5: jmp 0x100c6a4b */
L_100C6AB7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C6AB7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    esi = ebp + 0x1C; /* 0x100C6ABA: lea esi, [ebp + 0x1c] */
    edi = esp; /* 0x100C6ABD: mov edi, esp */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6ABF: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AC3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AC4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AC6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6AC7: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C6ACC: push ecx */
    PUSH32(esp, ecx); /* 0x100C6ACD: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6ACE: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C6AD2: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6AD4: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AD7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AD8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6AD9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6ADA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6ADB: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6AE0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6AE1: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6AE2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C6B0C); /* 0x100C6AE5: call 0x100c6b0c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6AEA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6AEB: pop ecx */
    eax = ebp + (-0x30); /* 0x100C6AEC: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6AEF: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6AF2: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6AF3: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
L_100C6AF8:
    esi = eax; /* 0x100C6AF8: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C6AFA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C6AFD: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6B00: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B03: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B04: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B05: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C6B06: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6B07: pop esi */
    esp = ebp; /* 0x100C6B08: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6B0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6B0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6B0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6B0Cu);

L_100C6B0C:
    PUSH32(esp, ebp); /* 0x100C6B0C: push ebp */
    ebp = esp; /* 0x100C6B0D: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C6B0F: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6B12: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6B15: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6B19: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6B1C: fstp qword ptr [esp] */
    RECOMP_ICALL(0x10036A46u); /* 0x100C6B1F: call 0x10036a46 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6B24: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C6B27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6B28: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6B29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6B29u);

L_100C6B29:
    PUSH32(esp, ebp); /* 0x100C6B29: push ebp */
    ebp = esp; /* 0x100C6B2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100C6B2C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C6B2F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C6B34: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C6B36: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100C6B39: push esi */
    PUSH32(esp, edi); /* 0x100C6B3A: push edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C6B3B: mov ecx, dword ptr [ebp - 4] */
    esi = ebp + 0x8; /* 0x100C6B3E: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C6B41: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x14); /* 0x100C6B43: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B46: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B49: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C6B4A: fld qword ptr [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x100C6B4D: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6B4E: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C6B4F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C6B54: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6B56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6B57: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6B58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6B58u);

L_100C6B58:
    PUSH32(esp, ebp); /* 0x100C6B58: push ebp */
    ebp = esp; /* 0x100C6B59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C6B5B: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C6B5E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C6B63: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C6B65: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100C6B68: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C6B6B: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100C6B6E: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C6B71: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x100C6B73: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C6B76: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C6B79: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C6B7C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C6B81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6B83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6B84: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6B85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6B85u);

L_100C6B85:
    PUSH32(esp, ebp); /* 0x100C6B85: push ebp */
    ebp = esp; /* 0x100C6B86: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C6B88: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C6B8B: push esi */
    PUSH32(esp, edi); /* 0x100C6B8C: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6B8D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6B90: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6B93: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B96: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B97: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6B98: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6B99: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C6B9E: push ecx */
    PUSH32(esp, ecx); /* 0x100C6B9F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6BA0: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C6BA4: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6BA6: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BA9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BAA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BAB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BAC: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C6BAD: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C6BB2: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C6BB5: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C6BB8: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6BBA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6BBD: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6BBE: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6BC3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C6BC6: mov esi, eax */
    edi = esp; /* 0x100C6BC8: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C6BCA: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C6BCD: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BCE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BCF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BD0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BD1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6DBF); /* 0x100C6BD2: call 0x100c6dbf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6BD7: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C6BD9: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6BDC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BDF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE2: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C6BE3: mov esi, eax */
    edi = esp; /* 0x100C6BE5: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BE9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BEA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6BEB: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C6BF0: push ecx */
    PUSH32(esp, ecx); /* 0x100C6BF1: push ecx */
    edi = esp; /* 0x100C6BF2: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6BF4: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C6BF7: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C6BF9: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BFD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BFE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6BFF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6C00: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C6C01: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6C06: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6C07: pop ecx */
    eax = ebp + (-0x20); /* 0x100C6C08: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6C0B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6C0E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6C0F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6C14: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C6C16: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C6C19: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6C1C: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6C1E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6C1F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6C20: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6C21: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C6C22: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6C23: pop esi */
    esp = ebp; /* 0x100C6C24: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6C26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6C27: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6C28u);

L_100C6C28:
    PUSH32(esp, ebp); /* 0x100C6C28: push ebp */
    ebp = esp; /* 0x100C6C29: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6C2B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6C2E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C6C31: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6C36: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6C37: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6C3A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6C3D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C6C40: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C6C45: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C6C48: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6C4A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C6C4D: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C6C52: push edx */
    PUSH32(esp, eax); /* 0x100C6C53: push eax */
    RECOMP_CALL(sub_100C7098); /* 0x100C6C54: call 0x100c7098 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C6C59: push edx */
    PUSH32(esp, eax); /* 0x100C6C5A: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100C6C5B: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x100C6C5E: mov dword ptr [ebp + 0xc], edx */
    RECOMP_CALL(sub_100C6B58); /* 0x100C6C61: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C6C66: add esp, 0x14 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C6C69: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6C6B: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C6C6E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C6C71: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C6C74: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6C79: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6C7A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C6C7D: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6C82: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6C83: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C6C84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6C85: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6C86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6C86u);

L_100C6C86:
    PUSH32(esp, ebp); /* 0x100C6C86: push ebp */
    ebp = esp; /* 0x100C6C87: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C6C89: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C6C8C: push esi */
    PUSH32(esp, eax); /* 0x100C6C8D: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C6C8E: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C6C93: movzx esi, ax */
    eax = ebp + 0x10; /* 0x100C6C96: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C6C99: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C6C9A: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6C9F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6CA0: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C6CA1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C6CA3: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C6CA6: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C6D79; /* 0x100C6CA9: jle 0x100c6d79 */
L_100C6CAF:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C6CAF: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C6D79; /* 0x100C6CB2: jle 0x100c6d79 */
L_100C6CB8:
    fp_push(0.0); /* 0x100C6CB8: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C6CBA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6CBC: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6CBF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6CC1: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C6CC3: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C6CC5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6CD0; /* 0x100C6CC8: jp 0x100c6cd0 */
L_100C6CCA:
    _st[0] = -_st[0]; /* 0x100C6CCA: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C6CCC: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C6CCD: fst qword ptr [ebp + 8] */
L_100C6CD0:
    fp_push(*(double*)ADDR(0x10065BB8)); /* 0x100C6CD0: fld qword ptr [0x10065bb8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6CD6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6CD8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6CDA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C6D28; /* 0x100C6CDD: je 0x100c6d28 */
L_100C6CDF:
    fp_push(*(double*)ADDR(0x10063CE0)); /* 0x100C6CDF: fld qword ptr [0x10063ce0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6CE5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6CE7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6CE9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6D2D; /* 0x100C6CEC: jne 0x100c6d2d */
L_100C6CEE:
    fp_push(_st[0]); /* 0x100C6CEE: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C6CF0: fmul st(1) */
    fp_push(*(double*)ADDR(0x10063CB8)); /* 0x100C6CF2: fld qword ptr [0x10063cb8] */
    _st[0] *= _st[1]; /* 0x100C6CF8: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063CC8); /* 0x100C6CFA: fadd qword ptr [0x10063cc8] */
    _st[0] *= _st[1]; /* 0x100C6D00: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063CD8); /* 0x100C6D02: fadd qword ptr [0x10063cd8] */
    fp_push(_st[1]); /* 0x100C6D08: fld st(1) */
    _st[0] *= _st[3]; /* 0x100C6D0A: fmul st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C6D0C: fmulp st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C6D0E: faddp st(2) */
    fp_push(*(double*)ADDR(0x10063CC0)); /* 0x100C6D10: fld qword ptr [0x10063cc0] */
    _st[0] *= _st[1]; /* 0x100C6D16: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10063CD0); /* 0x100C6D18: fsub qword ptr [0x10063cd0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C6D1E: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C6D20: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C6D26: fdivp st(1) */
L_100C6D28:
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C6D28: fmul qword ptr [ebp + 0x10] */
    goto L_100C6D70; /* 0x100C6D2B: jmp 0x100c6d70 */
L_100C6D2D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065C10)); /* 0x100C6D2D: fcomp qword ptr [0x10065c10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6D33: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C6D35: push -1 */
    PUSH32(esp, ecx); /* 0x100C6D37: push ecx */
    PUSH32(esp, ecx); /* 0x100C6D38: push ecx */
    /* test HI8(eax), 5 */ /* 0x100C6D39: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C6D3C: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6D5E; /* 0x100C6D3F: jp 0x100c6d5e */
L_100C6D41:
    fp_push(1.0); /* 0x100C6D41: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6D43: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6D46: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C6D47: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100C6D4C: fld qword ptr [0x10063c60] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6D52: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100C6D55: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C6D57: fsubrp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C6D59: fmul qword ptr [ebp + 0x10] */
    goto L_100C6D6D; /* 0x100C6D5C: jmp 0x100c6d6d */
L_100C6D5E:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C6D5E: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6D61: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6D64: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C6D65: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6D6A: fld qword ptr [ebp + 8] */
L_100C6D6D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C6D6D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C6D70:
    /* test LO16(esi), LO16(esi) */ /* 0x100C6D70: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C6DBC; /* 0x100C6D73: je 0x100c6dbc */
L_100C6D75:
    _st[0] = -_st[0]; /* 0x100C6D75: fchs  */
    goto L_100C6DBC; /* 0x100C6D77: jmp 0x100c6dbc */
L_100C6D79:
    PUSH32(esp, 2); /* 0x100C6D79: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C6D7B: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C6D7C: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6D86; /* 0x100C6D7F: jne 0x100c6d86 */
L_100C6D81:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6D81: fld qword ptr [ebp + 8] */
    goto L_100C6DBC; /* 0x100C6D84: jmp 0x100c6dbc */
L_100C6D86:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C6D86: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6D90; /* 0x100C6D89: jne 0x100c6d90 */
L_100C6D8B:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C6D8B: fld qword ptr [ebp + 0x10] */
    goto L_100C6DBC; /* 0x100C6D8E: jmp 0x100c6dbc */
L_100C6D90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C6D90: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C6D92: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C6D93: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6DAC; /* 0x100C6D96: jne 0x100c6dac */
L_100C6D98:
    /* test LO16(eax), LO16(eax) */ /* 0x100C6D98: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_100C6D9B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C6DB6; /* 0x100C6D9B: jne 0x100c6db6 */
L_100C6D9D:
    PUSH32(esp, ecx); /* 0x100C6D9D: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C6D9E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C6DA3: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C6DA9: pop ecx */
    goto L_100C6DBC; /* 0x100C6DAA: jmp 0x100c6dbc */
L_100C6DAC:
    /* test LO16(esi), LO16(esi) */ /* 0x100C6DAC: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6DB6; /* 0x100C6DAF: jne 0x100c6db6 */
L_100C6DB1:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C6DB1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    goto L_100C6D9B; /* 0x100C6DB4: jmp 0x100c6d9b */
L_100C6DB6:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C6DB6: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C6DB9: fmul qword ptr [ebp + 0x10] */
L_100C6DBC:
    esi = POP32_VAL(esp); /* 0x100C6DBC: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C6DBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6DBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6DBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6DBFu);

L_100C6DBF:
    PUSH32(esp, ebp); /* 0x100C6DBF: push ebp */
    ebp = esp; /* 0x100C6DC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C6DC2: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C6DC5: push esi */
    PUSH32(esp, edi); /* 0x100C6DC6: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6DC7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C6DCA: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C6DCD: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DCF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DD0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DD1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DD2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C6DD3: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C6DD8: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C6DDA: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C6DDD: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DE0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DE1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DE2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6DE3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C6DE4: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C6DE9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C6DEC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C6DED: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C6DF0: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C6DF5: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C6DF8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C6DFB: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C6DFC: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C6E01: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C6E04: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C6E07: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C6E09: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C6E0A: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6E3B; /* 0x100C6E0D: jne 0x100c6e3b */
L_100C6E0F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6E0F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO16(eax), LO16(eax) */ /* 0x100C6E12: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x20); /* 0x100C6E15: lea eax, [ebp - 0x20] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6E2C; /* 0x100C6E18: jne 0x100c6e2c */
L_100C6E1A:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C6E1A: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6E1D: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C6E21: fld qword ptr [0x10065b58] */
    goto L_100C6EED; /* 0x100C6E27: jmp 0x100c6eed */
L_100C6E2C:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C6E2C: fld qword ptr [0x10065b58] */
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C6E32: fst qword ptr [esp + 8] */
    goto L_100C6EED; /* 0x100C6E36: jmp 0x100c6eed */
L_100C6E3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C6E3B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C6E3D: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C6E3E: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6E78; /* 0x100C6E41: jne 0x100c6e78 */
L_100C6E43:
    PUSH32(esp, edi); /* 0x100C6E43: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C6E44: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6E49: pop ecx */
L_100C6E4A:
    /* test LO16(esi), LO16(esi) */ /* 0x100C6E4A: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C6E66; /* 0x100C6E4D: je 0x100c6e66 */
L_100C6E4F:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C6E4F: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6E66; /* 0x100C6E52: je 0x100c6e66 */
L_100C6E54:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C6E54: fld qword ptr [0x10065b58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6E5A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C6E5D: fst qword ptr [esp + 8] */
    goto L_100C6EEA; /* 0x100C6E61: jmp 0x100c6eea */
L_100C6E66:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C6E66: fld qword ptr [0x10065b58] */
L_100C6E6C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C6E6C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6E6F: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C6E73: fld qword ptr [ebp - 0x10] */
    goto L_100C6EEA; /* 0x100C6E76: jmp 0x100c6eea */
L_100C6E78:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C6E78: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C6E4A; /* 0x100C6E7B: je 0x100c6e4a */
L_100C6E7D:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C6E7D: fld qword ptr [ebp - 8] */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C6E80: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C6EAF; /* 0x100C6E83: jne 0x100c6eaf */
L_100C6E85:
    /* test LO16(eax), LO16(eax) */ /* 0x100C6E85: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C6E6C; /* 0x100C6E88: je 0x100c6e6c */
L_100C6E8A:
    PUSH32(esp, ecx); /* 0x100C6E8A: push ecx */
    PUSH32(esp, ecx); /* 0x100C6E8B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6E8C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C6E8F: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10065B48); /* 0x100C6E94: fmul qword ptr [0x10065b48] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6E9A: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C6E9D: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C6EA0: push ecx */
    PUSH32(esp, ecx); /* 0x100C6EA1: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EA2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C6EA5: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x100C6EAA: fmul qword ptr [ebp - 0x10] */
    goto L_100C6EEA; /* 0x100C6EAD: jmp 0x100c6eea */
L_100C6EAF:
    PUSH32(esp, ecx); /* 0x100C6EAF: push ecx */
    PUSH32(esp, ecx); /* 0x100C6EB0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EB1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C6EB4: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EB9: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C6EBC: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C6EBF: push ecx */
    PUSH32(esp, ecx); /* 0x100C6EC0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EC1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C50E0); /* 0x100C6EC4: call 0x100c50e0 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C6EC9: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C6ECD: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6ED0: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C6ED3: call 0x10036596 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6ED8: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C6EDB: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C6EDE: push ecx */
    PUSH32(esp, ecx); /* 0x100C6EDF: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EE0: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C6C86); /* 0x100C6EE3: call 0x100c6c86 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6EE8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6EE9: pop ecx */
L_100C6EEA:
    eax = ebp + (-0x20); /* 0x100C6EEA: lea eax, [ebp - 0x20] */
L_100C6EED:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C6EED: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6EF0: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C6EF1: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C6EF6: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C6EF8: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C6EFB: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C6EFE: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6F00: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6F01: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6F02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C6F03: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C6F04: pop edi */
    esi = POP32_VAL(esp); /* 0x100C6F05: pop esi */
    esp = ebp; /* 0x100C6F06: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C6F08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C6F09: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C6F0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C6F0Au);

L_100C6F0A:
    PUSH32(esp, ebp); /* 0x100C6F0A: push ebp */
    ebp = esp; /* 0x100C6F0B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C6F0D: push ecx */
    eax = ebp + 0x8; /* 0x100C6F0E: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C6F11: push esi */
    PUSH32(esp, eax); /* 0x100C6F12: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C6F13: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C6F18: movzx esi, ax */
    eax = ebp + 0xC; /* 0x100C6F1B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C6F1E: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C6F1F: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C6F24: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C6F25: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C6F26: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C6F28: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C6F2B: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C7012; /* 0x100C6F2E: jle 0x100c7012 */
L_100C6F34:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C6F34: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C7012; /* 0x100C6F37: jle 0x100c7012 */
L_100C6F3D:
    fp_push(0.0); /* 0x100C6F3D: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C6F3F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C6F41: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6F44: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6F46: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C6F48: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C6F4A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C6F58; /* 0x100C6F4D: jp 0x100c6f58 */
L_100C6F4F:
    _st[0] = -_st[0]; /* 0x100C6F4F: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C6F51: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C6F52: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C6F55: fld dword ptr [ebp + 8] */
L_100C6F58:
    fp_push(*(float*)&MEM32(0x10065BD8)); /* 0x100C6F58: fld dword ptr [0x10065bd8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6F5E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6F60: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6F62: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C6FB4; /* 0x100C6F65: je 0x100c6fb4 */
L_100C6F67:
    fp_push(*(float*)&MEM32(0x100C707C)); /* 0x100C6F67: fld dword ptr [0x100c707c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6F6D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6F6F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C6F71: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6FBC; /* 0x100C6F74: jne 0x100c6fbc */
L_100C6F76:
    fp_push(_st[0]); /* 0x100C6F76: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C6F78: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C6F7A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C6F7D: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C6F80: fld st(0) */
    fp_push(_st[2]); /* 0x100C6F82: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C6F84: fmulp st(1) */
    _st[0] *= *(double*)ADDR(0x100C7090); /* 0x100C6F86: fmul qword ptr [0x100c7090] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C6F8C: faddp st(2) */
    fp_xch(1); /* 0x100C6F8E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C6F90: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C6F93: fld dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x100C6F96: fld st(1) */
    _st[0] *= *(double*)ADDR(0x100C7080); /* 0x100C6F98: fmul qword ptr [0x100c7080] */
    _st[0] -= *(double*)ADDR(0x100C7088); /* 0x100C6F9E: fsub qword ptr [0x100c7088] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C6FA4: fmulp st(2) */
    fp_xch(1); /* 0x100C6FA6: fxch st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C6FA8: fadd qword ptr [0x10067cd8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C6FAE: fstp dword ptr [ebp - 4] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C6FB1: fdiv dword ptr [ebp - 4] */
L_100C6FB4:
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C6FB4: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C6FB7: fstp dword ptr [ebp + 8] */
    goto L_100C7000; /* 0x100C6FBA: jmp 0x100c7000 */
L_100C6FBC:
    fp_push(*(float*)&MEM32(0x10065C1C)); /* 0x100C6FBC: fld dword ptr [0x10065c1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C6FC2: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C6FC4: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C6FC6: push -1 */
    PUSH32(esp, ecx); /* 0x100C6FC8: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x100C6FC9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C6FCC: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C6FF1; /* 0x100C6FCF: jne 0x100c6ff1 */
L_100C6FD1:
    fp_push(1.0); /* 0x100C6FD1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6FD3: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6FD6: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C6FD7: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C6FDC: fld dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100C6FDF: fld qword ptr [0x10063c60] */
    _st[0] /= _st[1]; /* 0x100C6FE5: fdiv st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C6FE7: fsubp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C6FE9: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C6FEC: fstp dword ptr [ebp + 8] */
    goto L_100C6FFD; /* 0x100C6FEF: jmp 0x100c6ffd */
L_100C6FF1:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C6FF1: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C6FF4: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C6FF7: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C6FF8: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
L_100C6FFD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C6FFD: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C7000:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C7000: fld dword ptr [ebp + 8] */
    /* test LO16(esi), LO16(esi) */ /* 0x100C7003: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C700A; /* 0x100C7006: je 0x100c700a */
L_100C7008:
    _st[0] = -_st[0]; /* 0x100C7008: fchs  */
L_100C700A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C700A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C700D: fld dword ptr [ebp - 4] */
    goto L_100C7077; /* 0x100C7010: jmp 0x100c7077 */
L_100C7012:
    PUSH32(esp, 2); /* 0x100C7012: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C7014: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C7015: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C701F; /* 0x100C7018: jne 0x100c701f */
L_100C701A:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C701A: fld dword ptr [ebp + 8] */
    goto L_100C7077; /* 0x100C701D: jmp 0x100c7077 */
L_100C701F:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C701F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7029; /* 0x100C7022: jne 0x100c7029 */
L_100C7024:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C7024: fld dword ptr [ebp + 0xc] */
    goto L_100C7077; /* 0x100C7027: jmp 0x100c7077 */
L_100C7029:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C7029: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C702B: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C702C: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7053; /* 0x100C702F: jne 0x100c7053 */
L_100C7031:
    /* test LO16(eax), LO16(eax) */ /* 0x100C7031: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7044; /* 0x100C7034: je 0x100c7044 */
L_100C7036:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C7036: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C7039: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C703C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C703F: fld dword ptr [ebp - 4] */
    goto L_100C7077; /* 0x100C7042: jmp 0x100c7077 */
L_100C7044:
    PUSH32(esp, ecx); /* 0x100C7044: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C7045: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C704A: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C7050: pop ecx */
    goto L_100C7077; /* 0x100C7051: jmp 0x100c7077 */
L_100C7053:
    /* test LO16(esi), LO16(esi) */ /* 0x100C7053: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C706B; /* 0x100C7056: jne 0x100c706b */
L_100C7058:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C7058: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7044; /* 0x100C705B: je 0x100c7044 */
L_100C705D:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C705D: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C7060: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C7063: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7066: fld dword ptr [ebp - 4] */
    goto L_100C7077; /* 0x100C7069: jmp 0x100c7077 */
L_100C706B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C706B: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C706E: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C7071: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7074: fld dword ptr [ebp - 4] */
L_100C7077:
    esi = POP32_VAL(esp); /* 0x100C7077: pop esi */
    esp = ebp; /* 0x100C7078: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C707A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C707B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7098u);

L_100C7098:
    PUSH32(esp, ebp); /* 0x100C7098: push ebp */
    ebp = esp; /* 0x100C7099: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C709B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C709E: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C709F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C70A2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C70A5: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C70AA: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C70AD: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C70B0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C70B3: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C70B8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C70BB: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C70BC: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C70BF: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C70C4: movzx esi, ax */
    eax = ebp + (-0x4); /* 0x100C70C7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C70CA: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C70CB: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C70D0: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C70D3: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C70D6: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C70D8: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C70D9: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C710D; /* 0x100C70DC: jne 0x100c710d */
L_100C70DE:
    PUSH32(esp, ecx); /* 0x100C70DE: push ecx */
    PUSH32(esp, ecx); /* 0x100C70DF: push ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100C70E0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7101; /* 0x100C70E3: jne 0x100c7101 */
L_100C70E5:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C70E5: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C70E8: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C70EC: fld dword ptr [0x10065b78] */
L_100C70F2:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C70F2: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C70F5: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C70FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C70FB: pop ecx */
    goto L_100C71CB; /* 0x100C70FC: jmp 0x100c71cb */
L_100C7101:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C7101: fld dword ptr [0x10065b78] */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7107: fst dword ptr [esp + 4] */
    RECOMP_BACKEDGE();
    goto L_100C70F2; /* 0x100C710B: jmp 0x100c70f2 */
L_100C710D:
    PUSH32(esp, edi); /* 0x100C710D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C710E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C7110: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C7111: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7149; /* 0x100C7114: jne 0x100c7149 */
L_100C7116:
    PUSH32(esp, edi); /* 0x100C7116: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C7117: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C711C: pop ecx */
L_100C711D:
    /* test LO16(esi), LO16(esi) */ /* 0x100C711D: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7138; /* 0x100C7120: je 0x100c7138 */
L_100C7122:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C7122: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7138; /* 0x100C7125: je 0x100c7138 */
L_100C7127:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C7127: fld dword ptr [0x10065b78] */
    PUSH32(esp, ecx); /* 0x100C712D: push ecx */
    PUSH32(esp, ecx); /* 0x100C712E: push ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C712F: fst dword ptr [esp + 4] */
    goto L_100C71C0; /* 0x100C7133: jmp 0x100c71c0 */
L_100C7138:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C7138: fld dword ptr [0x10065b78] */
    PUSH32(esp, ecx); /* 0x100C713E: push ecx */
L_100C713F:
    PUSH32(esp, ecx); /* 0x100C713F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7140: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7144: fld dword ptr [ebp - 8] */
    goto L_100C71C0; /* 0x100C7147: jmp 0x100c71c0 */
L_100C7149:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C7149: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C711D; /* 0x100C714C: je 0x100c711d */
L_100C714E:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C714E: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C7151: push ecx */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C7152: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C718A; /* 0x100C7155: jne 0x100c718a */
L_100C7157:
    /* test LO16(eax), LO16(eax) */ /* 0x100C7157: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C713F; /* 0x100C715A: je 0x100c713f */
L_100C715C:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C715C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C715F: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x10065B68); /* 0x100C7164: fmul dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C716A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C716D: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7170: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7173: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C7176: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7177: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C717A: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100C717F: fmul dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C7182: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7185: fld dword ptr [ebp - 0xc] */
    goto L_100C71C0; /* 0x100C7188: jmp 0x100c71c0 */
L_100C718A:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C718A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55D4); /* 0x100C718D: call 0x100c55d4 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7192: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7195: fld dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C7198: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7199: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C5348); /* 0x100C719C: call 0x100c5348 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C71A1: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C71A5: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C71A8: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C55BA); /* 0x100C71AB: call 0x100c55ba */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C71B0: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C71B3: fld dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C71B6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C71B7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C6F0A); /* 0x100C71BA: call 0x100c6f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C71BF: pop ecx */
L_100C71C0:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C71C0: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C71C3: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C71C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C71C9: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C71CA: pop edi */
L_100C71CB:
    esi = POP32_VAL(esp); /* 0x100C71CB: pop esi */
    esp = ebp; /* 0x100C71CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C71CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C71CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C71D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C71D0u);

L_100C71D0:
    PUSH32(esp, ebp); /* 0x100C71D0: push ebp */
    ebp = esp; /* 0x100C71D1: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C71D3: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C71D6: push esi */
    PUSH32(esp, eax); /* 0x100C71D7: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C71D8: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C71DD: movzx esi, ax */
    eax = ebp + 0x10; /* 0x100C71E0: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C71E3: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C71E4: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C71E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C71EA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C71EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C71ED: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C71F0: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C72C3; /* 0x100C71F3: jle 0x100c72c3 */
L_100C71F9:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C71F9: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C72C3; /* 0x100C71FC: jle 0x100c72c3 */
L_100C7202:
    fp_push(0.0); /* 0x100C7202: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C7204: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7206: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7209: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C720B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C720D: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C720F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C721A; /* 0x100C7212: jp 0x100c721a */
L_100C7214:
    _st[0] = -_st[0]; /* 0x100C7214: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C7216: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C7217: fst qword ptr [ebp + 8] */
L_100C721A:
    fp_push(*(double*)ADDR(0x10065BF8)); /* 0x100C721A: fld qword ptr [0x10065bf8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7220: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7222: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C7224: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7272; /* 0x100C7227: je 0x100c7272 */
L_100C7229:
    fp_push(*(double*)ADDR(0x10063CE0)); /* 0x100C7229: fld qword ptr [0x10063ce0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C722F: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7231: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C7233: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7277; /* 0x100C7236: jne 0x100c7277 */
L_100C7238:
    fp_push(_st[0]); /* 0x100C7238: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C723A: fmul st(1) */
    fp_push(*(double*)ADDR(0x10063CB8)); /* 0x100C723C: fld qword ptr [0x10063cb8] */
    _st[0] *= _st[1]; /* 0x100C7242: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063CC8); /* 0x100C7244: fadd qword ptr [0x10063cc8] */
    _st[0] *= _st[1]; /* 0x100C724A: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063CD8); /* 0x100C724C: fadd qword ptr [0x10063cd8] */
    fp_push(_st[1]); /* 0x100C7252: fld st(1) */
    _st[0] *= _st[3]; /* 0x100C7254: fmul st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C7256: fmulp st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C7258: faddp st(2) */
    fp_push(*(double*)ADDR(0x10063CC0)); /* 0x100C725A: fld qword ptr [0x10063cc0] */
    _st[0] *= _st[1]; /* 0x100C7260: fmul st(1) */
    _st[0] -= *(double*)ADDR(0x10063CD0); /* 0x100C7262: fsub qword ptr [0x10063cd0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C7268: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C726A: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7270: fdivp st(1) */
L_100C7272:
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C7272: fmul qword ptr [ebp + 0x10] */
    goto L_100C72BA; /* 0x100C7275: jmp 0x100c72ba */
L_100C7277:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065C28)); /* 0x100C7277: fcomp qword ptr [0x10065c28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C727D: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C727F: push -1 */
    PUSH32(esp, ecx); /* 0x100C7281: push ecx */
    PUSH32(esp, ecx); /* 0x100C7282: push ecx */
    /* test HI8(eax), 5 */ /* 0x100C7283: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C7286: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C72A8; /* 0x100C7289: jp 0x100c72a8 */
L_100C728B:
    fp_push(1.0); /* 0x100C728B: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C728D: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C7290: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C7291: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100C7296: fld qword ptr [0x10063c60] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C729C: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100C729F: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C72A1: fsubrp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C72A3: fmul qword ptr [ebp + 0x10] */
    goto L_100C72B7; /* 0x100C72A6: jmp 0x100c72b7 */
L_100C72A8:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C72A8: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C72AB: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C72AE: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C72AF: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C72B4: fld qword ptr [ebp + 8] */
L_100C72B7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C72B7: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C72BA:
    /* test LO16(esi), LO16(esi) */ /* 0x100C72BA: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7306; /* 0x100C72BD: je 0x100c7306 */
L_100C72BF:
    _st[0] = -_st[0]; /* 0x100C72BF: fchs  */
    goto L_100C7306; /* 0x100C72C1: jmp 0x100c7306 */
L_100C72C3:
    PUSH32(esp, 2); /* 0x100C72C3: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C72C5: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C72C6: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C72D0; /* 0x100C72C9: jne 0x100c72d0 */
L_100C72CB:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C72CB: fld qword ptr [ebp + 8] */
    goto L_100C7306; /* 0x100C72CE: jmp 0x100c7306 */
L_100C72D0:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C72D0: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C72DA; /* 0x100C72D3: jne 0x100c72da */
L_100C72D5:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C72D5: fld qword ptr [ebp + 0x10] */
    goto L_100C7306; /* 0x100C72D8: jmp 0x100c7306 */
L_100C72DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C72DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C72DC: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C72DD: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C72F6; /* 0x100C72E0: jne 0x100c72f6 */
L_100C72E2:
    /* test LO16(eax), LO16(eax) */ /* 0x100C72E2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_100C72E5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C7300; /* 0x100C72E5: jne 0x100c7300 */
L_100C72E7:
    PUSH32(esp, ecx); /* 0x100C72E7: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C72E8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C72ED: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C72F3: pop ecx */
    goto L_100C7306; /* 0x100C72F4: jmp 0x100c7306 */
L_100C72F6:
    /* test LO16(esi), LO16(esi) */ /* 0x100C72F6: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7300; /* 0x100C72F9: jne 0x100c7300 */
L_100C72FB:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C72FB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    goto L_100C72E5; /* 0x100C72FE: jmp 0x100c72e5 */
L_100C7300:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7300: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C7303: fmul qword ptr [ebp + 0x10] */
L_100C7306:
    esi = POP32_VAL(esp); /* 0x100C7306: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C7307: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7308: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7309(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7309u);

L_100C7309:
    PUSH32(esp, ebp); /* 0x100C7309: push ebp */
    ebp = esp; /* 0x100C730A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x100C730C: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C730F: push esi */
    PUSH32(esp, edi); /* 0x100C7310: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7311: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C7314: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C7317: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7319: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C731A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C731B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C731C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C731D: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C7322: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C7324: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7327: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C732A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C732B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C732C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C732D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C732E: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C7333: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C7336: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C7337: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C733A: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C733F: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C7342: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C7345: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C7346: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C734B: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C734E: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C7351: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C7353: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C7354: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7385; /* 0x100C7357: jne 0x100c7385 */
L_100C7359:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7359: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO16(eax), LO16(eax) */ /* 0x100C735C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x28); /* 0x100C735F: lea eax, [ebp - 0x28] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7376; /* 0x100C7362: jne 0x100c7376 */
L_100C7364:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C7364: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7367: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C736B: fld qword ptr [0x10065b98] */
    goto L_100C744C; /* 0x100C7371: jmp 0x100c744c */
L_100C7376:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C7376: fld qword ptr [0x10065b98] */
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C737C: fst qword ptr [esp + 8] */
    goto L_100C744C; /* 0x100C7380: jmp 0x100c744c */
L_100C7385:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C7385: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C7387: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C7388: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C73C5; /* 0x100C738B: jne 0x100c73c5 */
L_100C738D:
    PUSH32(esp, edi); /* 0x100C738D: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C738E: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C7393: pop ecx */
L_100C7394:
    /* test LO16(esi), LO16(esi) */ /* 0x100C7394: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C73B3; /* 0x100C7397: je 0x100c73b3 */
L_100C7399:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C7399: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C73B3; /* 0x100C739C: je 0x100c73b3 */
L_100C739E:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C739E: fld qword ptr [0x10065b98] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C73A4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C73A7: fst qword ptr [esp + 8] */
L_100C73AB:
    eax = ebp + (-0x28); /* 0x100C73AB: lea eax, [ebp - 0x28] */
    goto L_100C744C; /* 0x100C73AE: jmp 0x100c744c */
L_100C73B3:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C73B3: fld qword ptr [0x10065b98] */
L_100C73B9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C73B9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C73BC: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C73C0: fld qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C73AB; /* 0x100C73C3: jmp 0x100c73ab */
L_100C73C5:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C73C5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7394; /* 0x100C73C8: je 0x100c7394 */
L_100C73CA:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C73CA: fld qword ptr [ebp - 8] */
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C73CD: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7402; /* 0x100C73D0: jne 0x100c7402 */
L_100C73D2:
    /* test LO16(eax), LO16(eax) */ /* 0x100C73D2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C73B9; /* 0x100C73D5: je 0x100c73b9 */
L_100C73D7:
    PUSH32(esp, ecx); /* 0x100C73D7: push ecx */
    PUSH32(esp, ecx); /* 0x100C73D8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C73D9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C73DC: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C73E1: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C73E4: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C73E7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C73EA: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C73EF: fld qword ptr [0x10065b88] */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C73F5: fmul qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C73F8: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x100C73FB: push ecx */
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x100C73FC: fmul qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C73FF: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C73AB; /* 0x100C7400: jmp 0x100c73ab */
L_100C7402:
    PUSH32(esp, ecx); /* 0x100C7402: push ecx */
    PUSH32(esp, ecx); /* 0x100C7403: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7404: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C7407: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C740C: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C740F: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7412: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C7415: call 0x10036596 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C741A: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C741D: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7420: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C7423: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C7426: push ecx */
    PUSH32(esp, ecx); /* 0x100C7427: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7428: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C55EE); /* 0x100C742B: call 0x100c55ee */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7430: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C7434: fld qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7437: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C743A: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C743D: push ecx */
    PUSH32(esp, ecx); /* 0x100C743E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C743F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C71D0); /* 0x100C7442: call 0x100c71d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C7447: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7448: pop ecx */
    eax = ebp + (-0x38); /* 0x100C7449: lea eax, [ebp - 0x38] */
L_100C744C:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C744C: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C744F: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C7450: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C7455: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C7457: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C745A: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C745D: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C745F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7460: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7461: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7462: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C7463: pop edi */
    esi = POP32_VAL(esp); /* 0x100C7464: pop esi */
    esp = ebp; /* 0x100C7465: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C7467: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7468: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7469(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7469u);

L_100C7469:
    PUSH32(esp, ebp); /* 0x100C7469: push ebp */
    ebp = esp; /* 0x100C746A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C746C: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C746F: push esi */
    PUSH32(esp, edi); /* 0x100C7470: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7471: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C7474: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C7477: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7479: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C747A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C747B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C747C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C747D: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C7482: push ecx */
    PUSH32(esp, ecx); /* 0x100C7483: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C7484: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C7488: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C748A: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C748D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C748E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C748F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7490: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C7491: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C7496: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C7499: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C749C: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C749E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C74A1: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C74A2: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C74A7: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C74AA: mov esi, eax */
    edi = esp; /* 0x100C74AC: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C74AE: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C74B1: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74B2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74B3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74B5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7309); /* 0x100C74B6: call 0x100c7309 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C74BB: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C74BD: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C74C0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74C3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74C4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74C5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74C6: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C74C7: mov esi, eax */
    edi = esp; /* 0x100C74C9: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74CC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74CE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C74CF: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C74D4: push ecx */
    PUSH32(esp, ecx); /* 0x100C74D5: push ecx */
    edi = esp; /* 0x100C74D6: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C74D8: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C74DB: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C74DD: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74E1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74E2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74E3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C74E4: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C74E5: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C74EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C74EB: pop ecx */
    eax = ebp + (-0x20); /* 0x100C74EC: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C74EF: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C74F2: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C74F3: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C74F8: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C74FA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C74FD: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C7500: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7502: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7503: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7504: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7505: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C7506: pop edi */
    esi = POP32_VAL(esp); /* 0x100C7507: pop esi */
    esp = ebp; /* 0x100C7508: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C750A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C750B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C750C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C750Cu);

L_100C750C:
    PUSH32(esp, ebp); /* 0x100C750C: push ebp */
    ebp = esp; /* 0x100C750D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C750F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7512: lea eax, [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100C7515: push ebx */
    PUSH32(esp, esi); /* 0x100C7516: push esi */
    PUSH32(esp, edi); /* 0x100C7517: push edi */
    PUSH32(esp, eax); /* 0x100C7518: push eax */
    eax = ebp + (-0x4); /* 0x100C7519: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C751C: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100C751D: call 0x100d687a */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C7522: movzx edi, ax */
    eax = ebp + 0x10; /* 0x100C7525: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C7528: push eax */
    eax = ebp + (-0x8); /* 0x100C7529: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C752C: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100C752D: call 0x100d687a */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x18); /* 0x100C7532: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C7535: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C7537: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(eax); /* 0x100C7538: movzx eax, ax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C753B: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100C753E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), LO16(ecx) */ /* 0x100C7541: cmp di, cx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C76AB; /* 0x100C7544: je 0x100c76ab */
L_100C754A:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C754A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C76AB; /* 0x100C754D: je 0x100c76ab */
L_100C7553:
    PUSH32(esp, 2); /* 0x100C7553: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C7555: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C7556: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7563; /* 0x100C7559: jne 0x100c7563 */
L_100C755B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C755B: fld qword ptr [ebp + 8] */
    goto L_100C76B1; /* 0x100C755E: jmp 0x100c76b1 */
L_100C7563:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C7563: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7570; /* 0x100C7566: jne 0x100c7570 */
L_100C7568:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7568: fld qword ptr [ebp + 0x10] */
    goto L_100C76B1; /* 0x100C756B: jmp 0x100c76b1 */
L_100C7570:
    fp_push(0.0); /* 0x100C7570: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7572: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7575: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7577: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7579: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7583; /* 0x100C757C: jp 0x100c7583 */
L_100C757E:
    _st[0] = -_st[0]; /* 0x100C757E: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C7580: fst qword ptr [ebp + 8] */
L_100C7583:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7583: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C7586: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7588: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C758A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7594; /* 0x100C758D: jp 0x100c7594 */
L_100C758F:
    _st[0] = -_st[0]; /* 0x100C758F: fchs  */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100C7591: fst qword ptr [ebp + 0x10] */
L_100C7594:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C7594: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7596: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7598: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C75B1; /* 0x100C759B: jp 0x100c75b1 */
L_100C759D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C759D: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C759F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C75A1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C75A3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C76B1; /* 0x100C75A6: jnp 0x100c76b1 */
L_100C75AC:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C75AC: mov ecx, dword ptr [ebp - 4] */
    goto L_100C75EA; /* 0x100C75AF: jmp 0x100c75ea */
L_100C75B1:
    edx = MEM32(ebp + (-0x8)); /* 0x100C75B1: mov edx, dword ptr [ebp - 8] */
    fp_xch(2); /* 0x100C75B4: fxch st(2) */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C75B6: mov ecx, dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C75B9: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C75BB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C75BD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C75D2; /* 0x100C75C0: jnp 0x100c75d2 */
L_100C75C2:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C75C2: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100C75D2; /* 0x100C75C5: jl 0x100c75d2 */
L_100C75C7:
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C75E8; /* 0x100C75C7: jne 0x100c75e8 */
L_100C75C9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C75C9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C75CB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C75CD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C75E8; /* 0x100C75D0: jp 0x100c75e8 */
L_100C75D2:
    fp_xch(1); /* 0x100C75D2: fxch st(1) */
    eax = (uint32_t)LO16(ecx); /* 0x100C75D4: movzx eax, cx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C75D7: fstp qword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(edx); /* 0x100C75DA: movzx ecx, dx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100C75DD: fstp qword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C75E0: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C75E3: mov dword ptr [ebp - 8], eax */
    goto L_100C75EC; /* 0x100C75E6: jmp 0x100c75ec */
L_100C75E8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C75E8: fstp st(0) */
L_100C75EA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C75EA: fstp st(0) */
L_100C75EC:
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x100C75EC: movsx ecx, cx */
    eax = ecx; /* 0x100C75EF: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C75F1: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x100C75F2: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100C75F5: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100C75F7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C75FA: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x100C75FC: mov dword ptr [esi], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100C7602; /* 0x100C75FE: jne 0x100c7602 */
L_100C7600:
    MEM32(esi) = ebx; /* 0x100C7600: mov dword ptr [esi], ebx */
L_100C7602:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x100C7602: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7604: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C7607: push ecx */
    PUSH32(esp, eax); /* 0x100C7608: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100C7609: call 0x100d649e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x8)); /* 0x100C760E: movsx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x100C7612: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C7614: push eax */
    eax = ebp + 0x10; /* 0x100C7615: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C7618: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100C7619: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C761E: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C7621: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C7624: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7626: fld qword ptr [ebp + 0x10] */
    _st[1] -= _st[0]; /* 0x100C7629: fsub st(1), st(0) */
    fp_xch(1); /* 0x100C762B: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C762D: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C762F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7631: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C76A5; /* 0x100C7634: jnp 0x100c76a5 */
L_100C7636:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7636: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7638: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C763A: push ecx */
    PUSH32(esp, ecx); /* 0x100C763B: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x100C763C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7667; /* 0x100C763F: jne 0x100c7667 */
L_100C7641:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7641: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7643: fdivp st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C7645: fst qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C7648: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C764A: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C764C: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7652: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C7655: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C765A: fadd qword ptr [ebp - 0x10] */
L_100C765D:
    _st[0] = *(double*)ADDR(ebp + 0x10) / _st[0]; /* 0x100C765D: fdivr qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C7660: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7661: pop ecx */
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100C7662: fadd qword ptr [ebp + 8] */
    goto L_100C76B1; /* 0x100C7665: jmp 0x100c76b1 */
L_100C7667:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C7667: fstp st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7669: fdivp st(1) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C766B: fst qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x100C766E: fld st(0) */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C7670: fld qword ptr [0x10063be8] */
    _st[1] += _st[0]; /* 0x100C7676: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C7678: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C767A: fmulp st(2) */
    fp_xch(1); /* 0x100C767C: fxch st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C767E: fst qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C7681: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7683: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C7686: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063CF0); /* 0x100C768B: fadd qword ptr [0x10063cf0] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C7691: fdivr qword ptr [ebp - 0x10] */
    _st[0] += *(double*)ADDR(0x10063CE8); /* 0x100C7694: fadd qword ptr [0x10063ce8] */
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x100C769A: fadd qword ptr [ebp - 0x18] */
    _st[0] += *(double*)ADDR(0x10063CF8); /* 0x100C769D: fadd qword ptr [0x10063cf8] */
    RECOMP_BACKEDGE();
    goto L_100C765D; /* 0x100C76A3: jmp 0x100c765d */
L_100C76A5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C76A5: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C76A7: fstp st(1) */
    goto L_100C76B1; /* 0x100C76A9: jmp 0x100c76b1 */
L_100C76AB:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C76AB: fld qword ptr [0x10065b48] */
L_100C76B1:
    edi = POP32_VAL(esp); /* 0x100C76B1: pop edi */
    esi = POP32_VAL(esp); /* 0x100C76B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C76B3: pop ebx */
    esp = ebp; /* 0x100C76B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C76B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C76B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C76B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C76B8u);

L_100C76B8:
    PUSH32(esp, ebp); /* 0x100C76B8: push ebp */
    ebp = esp; /* 0x100C76B9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100C76BB: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C76BE: push esi */
    PUSH32(esp, edi); /* 0x100C76BF: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C76C0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C76C3: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C76C6: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76CB: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C76CC: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C76D1: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C76D3: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C76D6: fstp qword ptr [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76D9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76DA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C76DC: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C76DD: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x100C76E2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C76E5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C76E6: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C76E9: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C76EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)LO16(eax); /* 0x100C76F0: movzx esi, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C76F3: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C76F4: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C76F7: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7704; /* 0x100C76FA: jne 0x100c7704 */
L_100C76FC:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C76FC: fld qword ptr [ebp - 0xc] */
    goto L_100C7863; /* 0x100C76FF: jmp 0x100c7863 */
L_100C7704:
    eax = ebp + (-0x14); /* 0x100C7704: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100C7707: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C7708: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C770D: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C770E: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7803; /* 0x100C7711: je 0x100c7803 */
L_100C7717:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7717: fld qword ptr [ebp - 0xc] */
    eax = ebp + (-0x4); /* 0x100C771A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C771D: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C771E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7721: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7725: fld qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7728: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C750C); /* 0x100C772B: call 0x100c750c */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x100C7730: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C7733: add esp, 0x14 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x100C7736: fst qword ptr [ebp - 0x1c] */
    /* test esi, esi */ /* 0x100C7739: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C774E; /* 0x100C773B: jne 0x100c774e */
L_100C773D:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C773D: fld qword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x100C7740: fmul st(1) */
L_100C7742:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7742: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7745: fstp qword ptr [esp + 8] */
    goto L_100C7870; /* 0x100C7749: jmp 0x100c7870 */
L_100C774E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C774E: fstp st(0) */
    eax = esi; /* 0x100C7750: mov eax, esi */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7752: fld qword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100C7755: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C7757: push eax */
    PUSH32(esp, ecx); /* 0x100C7758: push ecx */
    _st[0] = fabs(_st[0]); /* 0x100C7759: fabs  */
    PUSH32(esp, ecx); /* 0x100C775B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C775C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100C775F: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x1C)); /* 0x100C7764: fadd qword ptr [ebp - 0x1c] */
    eax = esi; /* 0x100C7767: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C7769: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C776C: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100C776D: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C776F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7771: fmul qword ptr [0x10063be8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C7777: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x100C7778: push eax */
    PUSH32(esp, ecx); /* 0x100C7779: push ecx */
    PUSH32(esp, ecx); /* 0x100C777A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C777B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C777E: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7783: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100C7786: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C778B: fld qword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C778E: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C7791: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7793: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7795: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7797: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C7799: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C77AD; /* 0x100C779C: jp 0x100c77ad */
L_100C779E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C779E: fstp st(0) */
    fp_push(_st[0]); /* 0x100C77A0: fld st(0) */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C77A2: fmul qword ptr [0x10063be8] */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) / _st[0]; /* 0x100C77A8: fdivr qword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C7742; /* 0x100C77AB: jmp 0x100c7742 */
L_100C77AD:
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C77AD: movzx eax, word ptr [ebp - 6] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C77B1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test eax, 0x8000u */ /* 0x100C77B4: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C77D5; /* 0x100C77B9: je 0x100c77d5 */
L_100C77BB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C77BB: fstp st(0) */
    fp_push(_st[0]); /* 0x100C77BD: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C77BF: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C77C1: fstp qword ptr [esp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C77C5: fmul qword ptr [0x10063be8] */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) / _st[0]; /* 0x100C77CB: fdivr qword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x100C77CE: fchs  */
    goto L_100C7870; /* 0x100C77D0: jmp 0x100c7870 */
L_100C77D5:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C77D5: fld qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C77D8: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C77DA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C77DC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x24); /* 0x100C77DF: lea eax, [ebp - 0x24] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C77F1; /* 0x100C77E2: jp 0x100c77f1 */
L_100C77E4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C77E4: fstp st(0) */
    fp_xch(1); /* 0x100C77E6: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C77E8: fstp qword ptr [esp + 8] */
    goto L_100C7873; /* 0x100C77EC: jmp 0x100c7873 */
L_100C77F1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C77F1: fstp st(1) */
    fp_xch(1); /* 0x100C77F3: fxch st(1) */
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C77F5: fst qword ptr [esp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C77F9: fmul qword ptr [0x10063be8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C77FF: fdivp st(1) */
    goto L_100C7873; /* 0x100C7801: jmp 0x100c7873 */
L_100C7803:
    fp_push(0.0); /* 0x100C7803: fldz  */
    /* cmp LO16(esi), 2 */ /* 0x100C7805: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C782C; /* 0x100C7809: jne 0x100c782c */
L_100C780B:
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C780B: fld qword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C780E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7810: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7812: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C7814: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7825; /* 0x100C7817: jp 0x100c7825 */
L_100C7819:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7819: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C781C: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7820: fld qword ptr [ebp - 0xc] */
    goto L_100C7870; /* 0x100C7823: jmp 0x100c7870 */
L_100C7825:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7825: fstp st(0) */
    esi = ebp + 0xC; /* 0x100C7827: lea esi, [ebp + 0xc] */
    goto L_100C7881; /* 0x100C782A: jmp 0x100c7881 */
L_100C782C:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x14))); /* 0x100C782C: fcom qword ptr [ebp - 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C782F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C7831: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C7834: movzx eax, word ptr [ebp - 6] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7852; /* 0x100C7838: jne 0x100c7852 */
L_100C783A:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C783A: fld qword ptr [0x10065b48] */
    /* test eax, 0x8000u */ /* 0x100C7840: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7742; /* 0x100C7845: je 0x100c7742 */
L_100C784B:
    _st[0] = -_st[0]; /* 0x100C784B: fchs  */
    RECOMP_BACKEDGE();
    goto L_100C7742; /* 0x100C784D: jmp 0x100c7742 */
L_100C7852:
    /* test eax, 0x8000u */ /* 0x100C7852: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7863; /* 0x100C7857: je 0x100c7863 */
L_100C7859:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7859: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C785B: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C7861: fchs  */
L_100C7863:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7863: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7866: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C786A: fld qword ptr [0x10065b48] */
L_100C7870:
    eax = ebp + (-0x24); /* 0x100C7870: lea eax, [ebp - 0x24] */
L_100C7873:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7873: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C7876: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C7877: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C787C: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C787F: mov esi, eax */
L_100C7881:
    eax = MEM32(ebp + 0x8); /* 0x100C7881: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C7884: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7886: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7887: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7888: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7889: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C788A: pop edi */
    esi = POP32_VAL(esp); /* 0x100C788B: pop esi */
    esp = ebp; /* 0x100C788C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C788E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C788F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7890u);

L_100C7890:
    PUSH32(esp, ebp); /* 0x100C7890: push ebp */
    ebp = esp; /* 0x100C7891: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100C7893: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7896: lea eax, [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100C7899: push ebx */
    PUSH32(esp, esi); /* 0x100C789A: push esi */
    PUSH32(esp, edi); /* 0x100C789B: push edi */
    PUSH32(esp, eax); /* 0x100C789C: push eax */
    eax = ebp + (-0x4); /* 0x100C789D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C78A0: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100C78A1: call 0x100d690e */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C78A6: movzx edi, ax */
    eax = ebp + 0xC; /* 0x100C78A9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C78AC: push eax */
    eax = ebp + (-0x8); /* 0x100C78AD: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C78B0: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100C78B1: call 0x100d690e */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x100C78B6: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C78B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C78BB: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(eax); /* 0x100C78BC: movzx eax, ax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C78BF: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100C78C2: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), LO16(ecx) */ /* 0x100C78C5: cmp di, cx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7A73; /* 0x100C78C8: je 0x100c7a73 */
L_100C78CE:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C78CE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7A73; /* 0x100C78D1: je 0x100c7a73 */
L_100C78D7:
    PUSH32(esp, 2); /* 0x100C78D7: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C78D9: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C78DA: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C78E7; /* 0x100C78DD: jne 0x100c78e7 */
L_100C78DF:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C78DF: fld dword ptr [ebp + 8] */
    goto L_100C7A79; /* 0x100C78E2: jmp 0x100c7a79 */
L_100C78E7:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C78E7: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C78F4; /* 0x100C78EA: jne 0x100c78f4 */
L_100C78EC:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C78EC: fld dword ptr [ebp + 0xc] */
    goto L_100C7A79; /* 0x100C78EF: jmp 0x100c7a79 */
L_100C78F4:
    fp_push(0.0); /* 0x100C78F4: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C78F6: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C78F9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C78FB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C78FD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C790A; /* 0x100C7900: jp 0x100c790a */
L_100C7902:
    _st[0] = -_st[0]; /* 0x100C7902: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C7904: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C7907: fld dword ptr [ebp + 8] */
L_100C790A:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C790A: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C790D: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C790F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7911: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C791E; /* 0x100C7914: jp 0x100c791e */
L_100C7916:
    _st[0] = -_st[0]; /* 0x100C7916: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C7918: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C791B: fld dword ptr [ebp + 0xc] */
L_100C791E:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C791E: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7920: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7922: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C793B; /* 0x100C7925: jp 0x100c793b */
L_100C7927:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7927: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7929: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C792B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C792D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C7A79; /* 0x100C7930: jnp 0x100c7a79 */
L_100C7936:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C7936: mov ecx, dword ptr [ebp - 4] */
    goto L_100C7978; /* 0x100C7939: jmp 0x100c7978 */
L_100C793B:
    edx = MEM32(ebp + (-0x8)); /* 0x100C793B: mov edx, dword ptr [ebp - 8] */
    fp_xch(2); /* 0x100C793E: fxch st(2) */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C7940: mov ecx, dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7943: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7945: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7947: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C795C; /* 0x100C794A: jnp 0x100c795c */
L_100C794C:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C794C: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100C795C; /* 0x100C794F: jl 0x100c795c */
L_100C7951:
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7976; /* 0x100C7951: jne 0x100c7976 */
L_100C7953:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7953: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7955: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7957: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7976; /* 0x100C795A: jp 0x100c7976 */
L_100C795C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C795C: fstp dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(ecx); /* 0x100C795F: movzx eax, cx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C7962: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C7965: fld dword ptr [ebp + 0x10] */
    ecx = (uint32_t)LO16(edx); /* 0x100C7968: movzx ecx, dx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C796B: fstp dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C796E: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C7971: mov dword ptr [ebp - 8], eax */
    goto L_100C797A; /* 0x100C7974: jmp 0x100c797a */
L_100C7976:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7976: fstp st(0) */
L_100C7978:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7978: fstp st(0) */
L_100C797A:
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x100C797A: movsx ecx, cx */
    eax = ecx; /* 0x100C797D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C797F: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x100C7980: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100C7983: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100C7985: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C7988: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x100C798A: mov dword ptr [esi], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100C7990; /* 0x100C798C: jne 0x100c7990 */
L_100C798E:
    MEM32(esi) = ebx; /* 0x100C798E: mov dword ptr [esi], ebx */
L_100C7990:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x100C7990: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7992: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C7995: push ecx */
    PUSH32(esp, eax); /* 0x100C7996: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100C7997: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x8)); /* 0x100C799C: movsx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x100C79A0: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C79A2: push eax */
    eax = ebp + 0xC; /* 0x100C79A3: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C79A6: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100C79A7: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C79AC: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C79AF: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C79B2: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C79B4: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x100C79B7: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100C79B9: fsubp st(2) */
    fp_xch(1); /* 0x100C79BB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C79BD: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C79C0: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x100C79C3: fld st(0) */
    fp_push(_st[3]); /* 0x100C79C5: fld st(3) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C79C7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C79C9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C79CB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C7A6D; /* 0x100C79CE: jnp 0x100c7a6d */
L_100C79D4:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C79D4: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C79D6: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C79D8: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x100C79D9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7A17; /* 0x100C79DC: jne 0x100c7a17 */
L_100C79DE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C79DE: fstp st(0) */
    fp_push(_st[0]); /* 0x100C79E0: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x100C79E2: fdivp st(2) */
    fp_xch(1); /* 0x100C79E4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C79E6: fstp dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C79E9: fstp qword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C79EC: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[0]; /* 0x100C79EF: fmul st(0), st(0) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C79F1: fadd qword ptr [0x10067cd8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C79F7: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C79FA: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C79FD: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C7A00: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x100C7A05: fadd dword ptr [ebp + 0x10] */
    _st[0] = *(double*)ADDR(ebp + (-0x14)) / _st[0]; /* 0x100C7A08: fdivr qword ptr [ebp - 0x14] */
L_100C7A0B:
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x100C7A0B: fadd dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C7A0E: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C7A0F: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C7A12: fld dword ptr [ebp + 0x10] */
    goto L_100C7A79; /* 0x100C7A15: jmp 0x100c7a79 */
L_100C7A17:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C7A17: fstp st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7A19: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C7A1B: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x100C7A1E: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x100C7A21: fld st(0) */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C7A23: fld qword ptr [0x10063be8] */
    _st[1] += _st[0]; /* 0x100C7A29: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C7A2B: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C7A2D: fmulp st(2) */
    fp_xch(1); /* 0x100C7A2F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C7A31: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7A34: fld dword ptr [ebp - 0xc] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x100C7A37: fst qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C7A3A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C7A3C: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7A3F: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7A42: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C7A45: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x100C7A88); /* 0x100C7A4A: fadd qword ptr [0x100c7a88] */
    _st[0] = *(double*)ADDR(ebp + (-0x14)) / _st[0]; /* 0x100C7A50: fdivr qword ptr [ebp - 0x14] */
    _st[0] += *(double*)ADDR(0x100C7A80); /* 0x100C7A53: fadd qword ptr [0x100c7a80] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x100C7A59: fadd dword ptr [ebp + 0x10] */
    _st[0] += *(double*)ADDR(0x100C7A90); /* 0x100C7A5C: fadd qword ptr [0x100c7a90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x100C7A62: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C7A65: fld dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x100C7A68: fdiv dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C7A0B; /* 0x100C7A6B: jmp 0x100c7a0b */
L_100C7A6D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7A6D: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7A6F: fstp st(1) */
    goto L_100C7A79; /* 0x100C7A71: jmp 0x100c7a79 */
L_100C7A73:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C7A73: fld dword ptr [0x10065b68] */
L_100C7A79:
    edi = POP32_VAL(esp); /* 0x100C7A79: pop edi */
    esi = POP32_VAL(esp); /* 0x100C7A7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C7A7B: pop ebx */
    esp = ebp; /* 0x100C7A7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C7A7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7A7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7A98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7A98u);

L_100C7A98:
    PUSH32(esp, ebp); /* 0x100C7A98: push ebp */
    ebp = esp; /* 0x100C7A99: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7A9B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C7A9E: push esi */
    PUSH32(esp, edi); /* 0x100C7A9F: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C7AA0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C7AA3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C7AA6: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C7AAB: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C7AAE: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C7AB1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C7AB4: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x100C7AB9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C7ABC: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C7ABD: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C7AC0: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C7AC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)LO16(eax); /* 0x100C7AC7: movzx esi, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C7ACA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C7ACB: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C7ACE: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7ADB; /* 0x100C7AD1: jne 0x100c7adb */
L_100C7AD3:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7AD3: fld dword ptr [ebp - 4] */
    goto L_100C7C82; /* 0x100C7AD6: jmp 0x100c7c82 */
L_100C7ADB:
    eax = ebp + (-0xC); /* 0x100C7ADB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C7ADE: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C7ADF: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C7AE4: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C7AE5: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7C18; /* 0x100C7AE8: je 0x100c7c18 */
L_100C7AEE:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7AEE: fld dword ptr [ebp - 4] */
    eax = ebp + (-0x10); /* 0x100C7AF1: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C7AF4: push eax */
    PUSH32(esp, ecx); /* 0x100C7AF5: push ecx */
    PUSH32(esp, ecx); /* 0x100C7AF6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7AF7: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7AFB: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7AFE: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C7890); /* 0x100C7B01: call 0x100c7890 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x10)); /* 0x100C7B06: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C7B09: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C7B0C: fstp dword ptr [ebp - 8] */
    /* test esi, esi */ /* 0x100C7B0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7B2C; /* 0x100C7B11: jne 0x100c7b2c */
L_100C7B13:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7B13: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C7B16: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C7B18: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7B1B: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7B1E: fld dword ptr [ebp - 0x10] */
L_100C7B21:
    PUSH32(esp, ecx); /* 0x100C7B21: push ecx */
    PUSH32(esp, ecx); /* 0x100C7B22: push ecx */
L_100C7B23:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7B23: fstp dword ptr [esp + 4] */
    goto L_100C7C8E; /* 0x100C7B27: jmp 0x100c7c8e */
L_100C7B2C:
    fp_push(0.0); /* 0x100C7B2C: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7B2E: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7B31: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7B33: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7B35: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C7B37: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7B3E; /* 0x100C7B3A: jp 0x100c7b3e */
L_100C7B3C:
    _st[0] = -_st[0]; /* 0x100C7B3C: fchs  */
L_100C7B3E:
    ecx = esi; /* 0x100C7B3E: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100C7B40: neg ecx */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7B42: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7B45: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C7B48: push ecx */
    PUSH32(esp, ecx); /* 0x100C7B49: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7B4A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C7C9E); /* 0x100C7B4D: call 0x100c7c9e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7B52: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7B55: fld dword ptr [ebp - 0x10] */
    eax = esi; /* 0x100C7B58: mov eax, esi */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100C7B5A: fadd dword ptr [ebp - 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C7B5D: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100C7B5E: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100C7B60: pop ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C7B61: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7B63: fmul qword ptr [0x10063be8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C7B69: dec eax */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x100C7B6A: pop ecx */
    PUSH32(esp, eax); /* 0x100C7B6B: push eax */
    PUSH32(esp, ecx); /* 0x100C7B6C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7B6D: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7B70: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7B73: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C7B76: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7B7B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C7C9E); /* 0x100C7B7E: call 0x100c7c9e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C7B83: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7B86: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100C7B89: fcomp qword ptr [0x10067cd0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7B8F: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C7B91: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7B92: pop ecx */
    /* test HI8(eax), 1 */ /* 0x100C7B93: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7BB5; /* 0x100C7B96: jne 0x100c7bb5 */
L_100C7B98:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7B98: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7B9B: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C7B9E: fld st(0) */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7BA0: fmul qword ptr [0x10063be8] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x100C7BA6: fdivp st(2) */
    fp_xch(1); /* 0x100C7BA8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7BAA: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7BAD: fld dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C7B21; /* 0x100C7BB0: jmp 0x100c7b21 */
L_100C7BB5:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C7BB5: movzx eax, word ptr [ebp - 2] */
    PUSH32(esp, ecx); /* 0x100C7BB9: push ecx */
    PUSH32(esp, ecx); /* 0x100C7BBA: push ecx */
    /* test eax, 0x8000u */ /* 0x100C7BBB: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7BE7; /* 0x100C7BC0: je 0x100c7be7 */
L_100C7BC2:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7BC2: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C7BC5: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C7BC7: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7BC9: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7BCD: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100C7BD0: fchs  */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C7BD2: fld qword ptr [0x10063be8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C7BD8: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C7BDA: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7BDC: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7BDF: fld dword ptr [ebp - 0x10] */
    goto L_100C7C8E; /* 0x100C7BE2: jmp 0x100c7c8e */
L_100C7BE7:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7BE7: fld dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C7BEA: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7BEC: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7BEE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7BF0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7BFF; /* 0x100C7BF3: jp 0x100c7bff */
L_100C7BF5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7BF5: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7BF7: fld dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_100C7B23; /* 0x100C7BFA: jmp 0x100c7b23 */
L_100C7BFF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7BFF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C7C01: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7C04: fst dword ptr [esp + 4] */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7C08: fmul qword ptr [0x10063be8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7C0E: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7C10: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7C13: fld dword ptr [ebp - 0x10] */
    goto L_100C7C8E; /* 0x100C7C16: jmp 0x100c7c8e */
L_100C7C18:
    fp_push(0.0); /* 0x100C7C18: fldz  */
    /* cmp LO16(esi), 2 */ /* 0x100C7C1A: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7C43; /* 0x100C7C1E: jne 0x100c7c43 */
L_100C7C20:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C7C20: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7C23: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7C25: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7C27: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C7C29: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7C39; /* 0x100C7C2C: jp 0x100c7c39 */
L_100C7C2E:
    PUSH32(esp, ecx); /* 0x100C7C2E: push ecx */
    PUSH32(esp, ecx); /* 0x100C7C2F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7C30: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C7C34: fld dword ptr [ebp - 4] */
    goto L_100C7C8E; /* 0x100C7C37: jmp 0x100c7c8e */
L_100C7C39:
    eax = MEM32(ebp + 0x8); /* 0x100C7C39: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7C3C: fstp st(0) */
    edx = MEM32(ebp + 0xC); /* 0x100C7C3E: mov edx, dword ptr [ebp + 0xc] */
    goto L_100C7C98; /* 0x100C7C41: jmp 0x100c7c98 */
L_100C7C43:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x100C7C43: fcom dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7C46: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C7C48: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C7C4B: movzx eax, word ptr [ebp - 2] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7C6B; /* 0x100C7C4F: jne 0x100c7c6b */
L_100C7C51:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C7C51: fld dword ptr [0x10065b68] */
    /* test eax, 0x8000u */ /* 0x100C7C57: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7C60; /* 0x100C7C5C: je 0x100c7c60 */
L_100C7C5E:
    _st[0] = -_st[0]; /* 0x100C7C5E: fchs  */
L_100C7C60:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7C60: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7C63: fld dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C7B21; /* 0x100C7C66: jmp 0x100c7b21 */
L_100C7C6B:
    /* test eax, 0x8000u */ /* 0x100C7C6B: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7C7C; /* 0x100C7C70: je 0x100c7c7c */
L_100C7C72:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7C72: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C7C74: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C7C7A: fchs  */
L_100C7C7C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C7C7C: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C7C7F: fld dword ptr [ebp - 0x10] */
L_100C7C82:
    PUSH32(esp, ecx); /* 0x100C7C82: push ecx */
    PUSH32(esp, ecx); /* 0x100C7C83: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C7C84: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C7C88: fld dword ptr [0x10065b68] */
L_100C7C8E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C7C8E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C7C91: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C7C96: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7C97: pop ecx */
L_100C7C98:
    edi = POP32_VAL(esp); /* 0x100C7C98: pop edi */
    esi = POP32_VAL(esp); /* 0x100C7C99: pop esi */
    esp = ebp; /* 0x100C7C9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C7C9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7C9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7C9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7C9Eu);

L_100C7C9E:
    PUSH32(esp, ebp); /* 0x100C7C9E: push ebp */
    ebp = esp; /* 0x100C7C9F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C7CA1: push dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C7CA4: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C7CA7: push ecx */
    PUSH32(esp, ecx); /* 0x100C7CA8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7CA9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100C7CAC: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C7CB1: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C7CB4: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C7CB7: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C7CBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7CBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7CBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7CBCu);

L_100C7CBC:
    PUSH32(esp, ebp); /* 0x100C7CBC: push ebp */
    ebp = esp; /* 0x100C7CBD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C7CBF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7CC2: lea eax, [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100C7CC5: push ebx */
    PUSH32(esp, esi); /* 0x100C7CC6: push esi */
    PUSH32(esp, edi); /* 0x100C7CC7: push edi */
    PUSH32(esp, eax); /* 0x100C7CC8: push eax */
    eax = ebp + (-0x4); /* 0x100C7CC9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C7CCC: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100C7CCD: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C7CD2: movzx edi, ax */
    eax = ebp + 0x10; /* 0x100C7CD5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C7CD8: push eax */
    eax = ebp + (-0x8); /* 0x100C7CD9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C7CDC: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100C7CDD: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x18); /* 0x100C7CE2: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C7CE5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C7CE7: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(eax); /* 0x100C7CE8: movzx eax, ax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C7CEB: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100C7CEE: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), LO16(ecx) */ /* 0x100C7CF1: cmp di, cx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7E5B; /* 0x100C7CF4: je 0x100c7e5b */
L_100C7CFA:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C7CFA: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7E5B; /* 0x100C7CFD: je 0x100c7e5b */
L_100C7D03:
    PUSH32(esp, 2); /* 0x100C7D03: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C7D05: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C7D06: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7D13; /* 0x100C7D09: jne 0x100c7d13 */
L_100C7D0B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7D0B: fld qword ptr [ebp + 8] */
    goto L_100C7E61; /* 0x100C7D0E: jmp 0x100c7e61 */
L_100C7D13:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C7D13: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7D20; /* 0x100C7D16: jne 0x100c7d20 */
L_100C7D18:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7D18: fld qword ptr [ebp + 0x10] */
    goto L_100C7E61; /* 0x100C7D1B: jmp 0x100c7e61 */
L_100C7D20:
    fp_push(0.0); /* 0x100C7D20: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7D22: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7D25: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D27: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7D29: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7D33; /* 0x100C7D2C: jp 0x100c7d33 */
L_100C7D2E:
    _st[0] = -_st[0]; /* 0x100C7D2E: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C7D30: fst qword ptr [ebp + 8] */
L_100C7D33:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7D33: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C7D36: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D38: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7D3A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7D44; /* 0x100C7D3D: jp 0x100c7d44 */
L_100C7D3F:
    _st[0] = -_st[0]; /* 0x100C7D3F: fchs  */
    *(double*)ADDR(ebp + 0x10) = _st[0]; /* 0x100C7D41: fst qword ptr [ebp + 0x10] */
L_100C7D44:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C7D44: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D46: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7D48: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7D61; /* 0x100C7D4B: jp 0x100c7d61 */
L_100C7D4D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7D4D: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7D4F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D51: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7D53: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C7E61; /* 0x100C7D56: jnp 0x100c7e61 */
L_100C7D5C:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C7D5C: mov ecx, dword ptr [ebp - 4] */
    goto L_100C7D9A; /* 0x100C7D5F: jmp 0x100c7d9a */
L_100C7D61:
    edx = MEM32(ebp + (-0x8)); /* 0x100C7D61: mov edx, dword ptr [ebp - 8] */
    fp_xch(2); /* 0x100C7D64: fxch st(2) */
    ecx = MEM32(ebp + (-0x4)); /* 0x100C7D66: mov ecx, dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7D69: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D6B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7D6D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C7D82; /* 0x100C7D70: jnp 0x100c7d82 */
L_100C7D72:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100C7D72: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_100C7D82; /* 0x100C7D75: jl 0x100c7d82 */
L_100C7D77:
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7D98; /* 0x100C7D77: jne 0x100c7d98 */
L_100C7D79:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7D79: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7D7B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C7D7D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7D98; /* 0x100C7D80: jp 0x100c7d98 */
L_100C7D82:
    fp_xch(1); /* 0x100C7D82: fxch st(1) */
    eax = (uint32_t)LO16(ecx); /* 0x100C7D84: movzx eax, cx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C7D87: fstp qword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(edx); /* 0x100C7D8A: movzx ecx, dx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x100C7D8D: fstp qword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C7D90: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C7D93: mov dword ptr [ebp - 8], eax */
    goto L_100C7D9C; /* 0x100C7D96: jmp 0x100c7d9c */
L_100C7D98:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7D98: fstp st(0) */
L_100C7D9A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7D9A: fstp st(0) */
L_100C7D9C:
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x100C7D9C: movsx ecx, cx */
    eax = ecx; /* 0x100C7D9F: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C7DA1: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x100C7DA2: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100C7DA5: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100C7DA7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C7DAA: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x100C7DAC: mov dword ptr [esi], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100C7DB2; /* 0x100C7DAE: jne 0x100c7db2 */
L_100C7DB0:
    MEM32(esi) = ebx; /* 0x100C7DB0: mov dword ptr [esi], ebx */
L_100C7DB2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x100C7DB2: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C7DB4: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C7DB7: push ecx */
    PUSH32(esp, eax); /* 0x100C7DB8: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100C7DB9: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x8)); /* 0x100C7DBE: movsx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x100C7DC2: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C7DC4: push eax */
    eax = ebp + 0x10; /* 0x100C7DC5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C7DC8: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100C7DC9: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C7DCE: fld qword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C7DD1: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C7DD4: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C7DD6: fld qword ptr [ebp + 0x10] */
    _st[1] -= _st[0]; /* 0x100C7DD9: fsub st(1), st(0) */
    fp_xch(1); /* 0x100C7DDB: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C7DDD: fucom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7DDF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7DE1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C7E55; /* 0x100C7DE4: jnp 0x100c7e55 */
L_100C7DE6:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7DE6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7DE8: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C7DEA: push ecx */
    PUSH32(esp, ecx); /* 0x100C7DEB: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x100C7DEC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7E17; /* 0x100C7DEF: jne 0x100c7e17 */
L_100C7DF1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7DF1: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7DF3: fdivp st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C7DF5: fst qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C7DF8: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C7DFA: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C7DFC: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7E02: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C7E05: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C7E0A: fadd qword ptr [ebp - 0x10] */
L_100C7E0D:
    _st[0] = *(double*)ADDR(ebp + 0x10) / _st[0]; /* 0x100C7E0D: fdivr qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C7E10: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7E11: pop ecx */
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100C7E12: fadd qword ptr [ebp + 8] */
    goto L_100C7E61; /* 0x100C7E15: jmp 0x100c7e61 */
L_100C7E17:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C7E17: fstp st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7E19: fdivp st(1) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C7E1B: fst qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x100C7E1E: fld st(0) */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C7E20: fld qword ptr [0x10063be8] */
    _st[1] += _st[0]; /* 0x100C7E26: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C7E28: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C7E2A: fmulp st(2) */
    fp_xch(1); /* 0x100C7E2C: fxch st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C7E2E: fst qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C7E31: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7E33: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C7E36: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063CF0); /* 0x100C7E3B: fadd qword ptr [0x10063cf0] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C7E41: fdivr qword ptr [ebp - 0x10] */
    _st[0] += *(double*)ADDR(0x10063CE8); /* 0x100C7E44: fadd qword ptr [0x10063ce8] */
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x100C7E4A: fadd qword ptr [ebp - 0x18] */
    _st[0] += *(double*)ADDR(0x10063CF8); /* 0x100C7E4D: fadd qword ptr [0x10063cf8] */
    RECOMP_BACKEDGE();
    goto L_100C7E0D; /* 0x100C7E53: jmp 0x100c7e0d */
L_100C7E55:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7E55: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7E57: fstp st(1) */
    goto L_100C7E61; /* 0x100C7E59: jmp 0x100c7e61 */
L_100C7E5B:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C7E5B: fld qword ptr [0x10065b88] */
L_100C7E61:
    edi = POP32_VAL(esp); /* 0x100C7E61: pop edi */
    esi = POP32_VAL(esp); /* 0x100C7E62: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C7E63: pop ebx */
    esp = ebp; /* 0x100C7E64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C7E66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C7E67: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C7E68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C7E68u);

L_100C7E68:
    PUSH32(esp, ebp); /* 0x100C7E68: push ebp */
    ebp = esp; /* 0x100C7E69: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100C7E6B: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C7E6E: push esi */
    PUSH32(esp, edi); /* 0x100C7E6F: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7E70: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C7E73: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C7E76: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E78: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E79: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E7A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E7B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C7E7C: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C7E81: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C7E83: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C7E86: fstp qword ptr [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E89: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C7E8C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C7E8D: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x100C7E92: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C7E95: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C7E96: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100C0034); /* 0x100C7E99: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C7E9E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)LO16(eax); /* 0x100C7EA0: movzx esi, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C7EA3: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C7EA4: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C7EA7: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7EB4; /* 0x100C7EAA: jne 0x100c7eb4 */
L_100C7EAC:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7EAC: fld qword ptr [ebp - 0xc] */
    goto L_100C8015; /* 0x100C7EAF: jmp 0x100c8015 */
L_100C7EB4:
    eax = ebp + (-0x14); /* 0x100C7EB4: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100C7EB7: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C7EB8: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C7EBD: pop ecx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C7EBE: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C7FB5; /* 0x100C7EC1: je 0x100c7fb5 */
L_100C7EC7:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7EC7: fld qword ptr [ebp - 0xc] */
    eax = ebp + (-0x4); /* 0x100C7ECA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C7ECD: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7ECE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7ED1: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7ED5: fld qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7ED8: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C7CBC); /* 0x100C7EDB: call 0x100c7cbc */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x100C7EE0: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C7EE3: add esp, 0x14 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x100C7EE6: fst qword ptr [ebp - 0x1c] */
    /* test esi, esi */ /* 0x100C7EE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C7EFE; /* 0x100C7EEB: jne 0x100c7efe */
L_100C7EED:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7EED: fld qword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x100C7EF0: fmul st(1) */
L_100C7EF2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7EF2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7EF5: fstp qword ptr [esp + 8] */
    goto L_100C8022; /* 0x100C7EF9: jmp 0x100c8022 */
L_100C7EFE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7EFE: fstp st(0) */
    eax = esi; /* 0x100C7F00: mov eax, esi */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7F02: fld qword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100C7F05: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C7F07: push eax */
    PUSH32(esp, ecx); /* 0x100C7F08: push ecx */
    _st[0] = fabs(_st[0]); /* 0x100C7F09: fabs  */
    PUSH32(esp, ecx); /* 0x100C7F0B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7F0C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100C7F0F: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x1C)); /* 0x100C7F14: fadd qword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C7F17: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7F1A: fmul qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7F20: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C7F23: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100C7F28: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C7F2A: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100C7F2B: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100C7F2D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C7F2E: pop ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C7F2F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C7F31: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x100C7F32: push eax */
    PUSH32(esp, ecx); /* 0x100C7F33: push ecx */
    PUSH32(esp, ecx); /* 0x100C7F34: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C7F35: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100C7F38: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7F3D: fld qword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C7F40: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C7F43: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7F45: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7F47: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7F49: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C7F4B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7F5F; /* 0x100C7F4E: jp 0x100c7f5f */
L_100C7F50:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7F50: fstp st(0) */
    fp_push(_st[0]); /* 0x100C7F52: fld st(0) */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7F54: fmul qword ptr [0x10063be8] */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) / _st[0]; /* 0x100C7F5A: fdivr qword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C7EF2; /* 0x100C7F5D: jmp 0x100c7ef2 */
L_100C7F5F:
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C7F5F: movzx eax, word ptr [ebp - 6] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7F63: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test eax, 0x8000u */ /* 0x100C7F66: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7F87; /* 0x100C7F6B: je 0x100c7f87 */
L_100C7F6D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7F6D: fstp st(0) */
    fp_push(_st[0]); /* 0x100C7F6F: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C7F71: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7F73: fstp qword ptr [esp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7F77: fmul qword ptr [0x10063be8] */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) / _st[0]; /* 0x100C7F7D: fdivr qword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x100C7F80: fchs  */
    goto L_100C8022; /* 0x100C7F82: jmp 0x100c8022 */
L_100C7F87:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7F87: fld qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7F8A: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7F8C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C7F8E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x24); /* 0x100C7F91: lea eax, [ebp - 0x24] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7FA3; /* 0x100C7F94: jp 0x100c7fa3 */
L_100C7F96:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7F96: fstp st(0) */
    fp_xch(1); /* 0x100C7F98: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7F9A: fstp qword ptr [esp + 8] */
    goto L_100C8025; /* 0x100C7F9E: jmp 0x100c8025 */
L_100C7FA3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7FA3: fstp st(1) */
    fp_xch(1); /* 0x100C7FA5: fxch st(1) */
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C7FA7: fst qword ptr [esp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BE8); /* 0x100C7FAB: fmul qword ptr [0x10063be8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C7FB1: fdivp st(1) */
    goto L_100C8025; /* 0x100C7FB3: jmp 0x100c8025 */
L_100C7FB5:
    fp_push(0.0); /* 0x100C7FB5: fldz  */
    /* cmp LO16(esi), 2 */ /* 0x100C7FB7: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C7FDE; /* 0x100C7FBB: jne 0x100c7fde */
L_100C7FBD:
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C7FBD: fld qword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C7FC0: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7FC2: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C7FC4: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C7FC6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C7FD7; /* 0x100C7FC9: jp 0x100c7fd7 */
L_100C7FCB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C7FCB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C7FCE: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C7FD2: fld qword ptr [ebp - 0xc] */
    goto L_100C8022; /* 0x100C7FD5: jmp 0x100c8022 */
L_100C7FD7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C7FD7: fstp st(0) */
    esi = ebp + 0xC; /* 0x100C7FD9: lea esi, [ebp + 0xc] */
    goto L_100C8033; /* 0x100C7FDC: jmp 0x100c8033 */
L_100C7FDE:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x14))); /* 0x100C7FDE: fcom qword ptr [ebp - 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C7FE1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C7FE3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C7FE6: movzx eax, word ptr [ebp - 6] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8004; /* 0x100C7FEA: jne 0x100c8004 */
L_100C7FEC:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C7FEC: fld qword ptr [0x10065b88] */
    /* test eax, 0x8000u */ /* 0x100C7FF2: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C7EF2; /* 0x100C7FF7: je 0x100c7ef2 */
L_100C7FFD:
    _st[0] = -_st[0]; /* 0x100C7FFD: fchs  */
    RECOMP_BACKEDGE();
    goto L_100C7EF2; /* 0x100C7FFF: jmp 0x100c7ef2 */
L_100C8004:
    /* test eax, 0x8000u */ /* 0x100C8004: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C8015; /* 0x100C8009: je 0x100c8015 */
L_100C800B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C800B: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C800D: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C8013: fchs  */
L_100C8015:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C8015: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C8018: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C801C: fld qword ptr [0x10065b88] */
L_100C8022:
    eax = ebp + (-0x24); /* 0x100C8022: lea eax, [ebp - 0x24] */
L_100C8025:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8025: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8028: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C8029: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C802E: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C8031: mov esi, eax */
L_100C8033:
    eax = MEM32(ebp + 0x8); /* 0x100C8033: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C8036: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8038: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8039: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C803A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C803B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C803C: pop edi */
    esi = POP32_VAL(esp); /* 0x100C803D: pop esi */
    esp = ebp; /* 0x100C803E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8040: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8041: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8042(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8042u);

L_100C8042:
    PUSH32(esp, ebp); /* 0x100C8042: push ebp */
    ebp = esp; /* 0x100C8043: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C8045: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C8048: push esi */
    PUSH32(esp, edi); /* 0x100C8049: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C804A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C804D: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C8050: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8052: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8053: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8054: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8055: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C8056: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C805B: push ecx */
    PUSH32(esp, ecx); /* 0x100C805C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C805D: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C8061: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C8063: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8066: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8067: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8068: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8069: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C806A: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C806F: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C8072: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C8075: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8077: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C807A: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C807B: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C8080: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C8083: mov esi, eax */
    edi = esp; /* 0x100C8085: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C8087: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C808A: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C808B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C808C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C808D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C808E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C8143); /* 0x100C808F: call 0x100c8143 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C8094: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C8096: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C8099: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C809C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C809D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C809E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C809F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C80A0: mov esi, eax */
    edi = esp; /* 0x100C80A2: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80A7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C80A8: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C80AD: push ecx */
    PUSH32(esp, ecx); /* 0x100C80AE: push ecx */
    edi = esp; /* 0x100C80AF: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C80B1: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C80B4: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C80B6: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80BB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80BC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80BD: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C80BE: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C80C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C80C4: pop ecx */
    eax = ebp + (-0x20); /* 0x100C80C5: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C80C8: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C80CB: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C80CC: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C80D1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C80D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C80D6: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C80D9: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80DC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80DD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C80DE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C80DF: pop edi */
    esi = POP32_VAL(esp); /* 0x100C80E0: pop esi */
    esp = ebp; /* 0x100C80E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C80E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C80E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C80E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C80E5u);

L_100C80E5:
    PUSH32(esp, ebp); /* 0x100C80E5: push ebp */
    ebp = esp; /* 0x100C80E6: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C80E8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C80EB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C80EE: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C80F3: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C80F4: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C80F7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C80FA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C80FD: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C8102: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C8105: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8107: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C810A: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C810F: push edx */
    PUSH32(esp, eax); /* 0x100C8110: push eax */
    RECOMP_CALL(sub_100C82B6); /* 0x100C8111: call 0x100c82b6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C8116: push edx */
    PUSH32(esp, eax); /* 0x100C8117: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100C8118: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x100C811B: mov dword ptr [ebp + 0xc], edx */
    RECOMP_CALL(sub_100C6B58); /* 0x100C811E: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C8123: add esp, 0x14 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C8126: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8128: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C812B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C812E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C8131: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C8136: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8137: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C813A: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C813F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8140: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C8141: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8142: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8143(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8143u);

L_100C8143:
    PUSH32(esp, ebp); /* 0x100C8143: push ebp */
    ebp = esp; /* 0x100C8144: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x100C8146: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C8149: push esi */
    PUSH32(esp, edi); /* 0x100C814A: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C814B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C814E: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C8151: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8153: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8154: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8155: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8156: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C8157: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C815C: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C815E: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8161: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8164: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8165: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8166: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8167: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C8168: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C816D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C8170: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8171: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C8174: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C8179: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C817C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C817F: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C8180: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C8185: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C8187: movzx eax, ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C818A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C818B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C818E: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C81D3; /* 0x100C8191: jne 0x100c81d3 */
L_100C8193:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C8193: movzx eax, word ptr [ebp - 2] */
    fp_push(0.0); /* 0x100C8197: fldz  */
    /* test eax, 0x8000u */ /* 0x100C8199: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C81AA; /* 0x100C819E: je 0x100c81aa */
L_100C81A0:
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C81A0: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C81A6: fchs  */
    goto L_100C81AC; /* 0x100C81A8: jmp 0x100c81ac */
L_100C81AA:
    fp_push(_st[0]); /* 0x100C81AA: fld st(0) */
L_100C81AC:
    fp_xch(1); /* 0x100C81AC: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C81AE: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C81B1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C81B3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C81C0; /* 0x100C81B6: jne 0x100c81c0 */
L_100C81B8:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C81B8: fld qword ptr [0x10067ce8] */
    goto L_100C81C2; /* 0x100C81BE: jmp 0x100c81c2 */
L_100C81C0:
    fp_push(1.0); /* 0x100C81C0: fld1  */
L_100C81C2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C81C2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x100C81C5: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C81C7: fstp qword ptr [esp + 8] */
L_100C81CB:
    eax = ebp + (-0x28); /* 0x100C81CB: lea eax, [ebp - 0x28] */
    goto L_100C8299; /* 0x100C81CE: jmp 0x100c8299 */
L_100C81D3:
    PUSH32(esp, 2); /* 0x100C81D3: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C81D5: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C81D6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C81E7; /* 0x100C81D9: jne 0x100c81e7 */
L_100C81DB:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C81DB: fld qword ptr [ebp - 8] */
L_100C81DE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C81DE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C81E1: fst qword ptr [esp + 8] */
    RECOMP_BACKEDGE();
    goto L_100C81CB; /* 0x100C81E5: jmp 0x100c81cb */
L_100C81E7:
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C81E7: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8205; /* 0x100C81EA: jne 0x100c8205 */
L_100C81EC:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C81EC: fld qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x100C81EF: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C81F1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C81F3: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C81F5: fld qword ptr [ebp - 0x10] */
    /* test HI8(eax), 0x44u */ /* 0x100C81F8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C81C2; /* 0x100C81FB: jnp 0x100c81c2 */
L_100C81FD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C81FD: fstp st(1) */
    fp_push(_st[0]); /* 0x100C81FF: fld st(0) */
    fp_xch(1); /* 0x100C8201: fxch st(1) */
    RECOMP_BACKEDGE();
    goto L_100C81C2; /* 0x100C8203: jmp 0x100c81c2 */
L_100C8205:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100C8205: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8212; /* 0x100C8208: jne 0x100c8212 */
L_100C820A:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C820A: fld qword ptr [0x10065b58] */
    RECOMP_BACKEDGE();
    goto L_100C81DE; /* 0x100C8210: jmp 0x100c81de */
L_100C8212:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8212: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C8215: push ecx */
    PUSH32(esp, ecx); /* 0x100C8216: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8217: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036EB1); /* 0x100C821A: call 0x10036eb1 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C821F: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C8222: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8225: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366BE); /* 0x100C8228: call 0x100366be */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C822D: fld qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x100C8230: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C8232: fmul st(1) */
    fp_push(1.0); /* 0x100C8234: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C8236: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8237: pop ecx */
    _st[1] += _st[0]; /* 0x100C8238: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C823A: fxch st(1) */
    _st[0] *= _st[3]; /* 0x100C823C: fmul st(3) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C823E: fst qword ptr [ebp - 0x18] */
    _st[0] *= _st[3]; /* 0x100C8241: fmul st(3) */
    _st[0] += _st[1]; /* 0x100C8243: fadd st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C8245: fst qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C8248: fld qword ptr [0x10065b48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C824E: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8250: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C8252: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C8277; /* 0x100C8255: jp 0x100c8277 */
L_100C8257:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C8257: fstp st(0) */
    fp_push(0.0); /* 0x100C8259: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C825B: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C825D: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C825F: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C8261: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C826E; /* 0x100C8264: jne 0x100c826e */
L_100C8266:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C8266: fstp st(0) */
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C8268: fld qword ptr [0x10067ce8] */
L_100C826E:
    fp_xch(1); /* 0x100C826E: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C8270: fmulp st(2) */
    RECOMP_BACKEDGE();
    goto L_100C81C2; /* 0x100C8272: jmp 0x100c81c2 */
L_100C8277:
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x100C8277: fdivp st(2) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C8279: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x100C827C: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C827E: fstp qword ptr [esp + 8] */
    fp_xch(1); /* 0x100C8282: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C8284: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C8286: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8288: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C828B: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C8290: fmul qword ptr [ebp - 0x18] */
    eax = ebp + (-0x38); /* 0x100C8293: lea eax, [ebp - 0x38] */
    _st[0] /= *(double*)ADDR(ebp + (-0x20)); /* 0x100C8296: fdiv qword ptr [ebp - 0x20] */
L_100C8299:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8299: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C829C: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C829D: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C82A2: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C82A4: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C82A7: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C82AA: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C82AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C82AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C82AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C82AF: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C82B0: pop edi */
    esi = POP32_VAL(esp); /* 0x100C82B1: pop esi */
    esp = ebp; /* 0x100C82B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C82B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C82B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C82B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C82B6u);

L_100C82B6:
    PUSH32(esp, ebp); /* 0x100C82B6: push ebp */
    ebp = esp; /* 0x100C82B7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100C82B9: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C82BC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C82BD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C82C0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C82C3: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C82C8: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C82CB: fstp dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C82CE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C82D1: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100C82D6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C82D9: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C82DA: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C82DD: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C82E2: movzx esi, ax */
    eax = ebp + (-0x4); /* 0x100C82E5: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C82E8: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C82E9: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C82EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C82F0: movzx eax, ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C82F3: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C82F4: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C82F7: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8341; /* 0x100C82FA: jne 0x100c8341 */
L_100C82FC:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C82FC: movzx eax, word ptr [ebp - 2] */
    fp_push(0.0); /* 0x100C8300: fldz  */
    /* test eax, 0x8000u */ /* 0x100C8302: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C8316; /* 0x100C8307: je 0x100c8316 */
L_100C8309:
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C8309: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C830F: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C8311: fstp dword ptr [ebp - 0xc] */
    goto L_100C8319; /* 0x100C8314: jmp 0x100c8319 */
L_100C8316:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C8316: fst dword ptr [ebp - 0xc] */
L_100C8319:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x100C8319: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C831C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C831E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C832B; /* 0x100C8321: jne 0x100c832b */
L_100C8323:
    fp_push(*(float*)&MEM32(0x10063D00)); /* 0x100C8323: fld dword ptr [0x10063d00] */
    goto L_100C832D; /* 0x100C8329: jmp 0x100c832d */
L_100C832B:
    fp_push(1.0); /* 0x100C832B: fld1  */
L_100C832D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C832D: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C8330: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C8333: push ecx */
    PUSH32(esp, ecx); /* 0x100C8334: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C8335: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C8339: fld dword ptr [ebp - 0x10] */
    goto L_100C844A; /* 0x100C833C: jmp 0x100c844a */
L_100C8341:
    PUSH32(esp, 2); /* 0x100C8341: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C8343: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C8344: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8357; /* 0x100C8347: jne 0x100c8357 */
L_100C8349:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8349: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C834C: push ecx */
L_100C834D:
    PUSH32(esp, ecx); /* 0x100C834D: push ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C834E: fst dword ptr [esp + 4] */
    goto L_100C844A; /* 0x100C8352: jmp 0x100c844a */
L_100C8357:
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C8357: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8387; /* 0x100C835A: jne 0x100c8387 */
L_100C835C:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C835C: fld dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C835F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8361: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8363: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8365: fld dword ptr [ebp - 8] */
    /* test HI8(eax), 0x44u */ /* 0x100C8368: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C8374; /* 0x100C836B: jp 0x100c8374 */
L_100C836D:
    fp_xch(1); /* 0x100C836D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C836F: fstp dword ptr [ebp - 0x10] */
    goto L_100C8379; /* 0x100C8372: jmp 0x100c8379 */
L_100C8374:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C8374: fstp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8376: fst dword ptr [ebp - 0x10] */
L_100C8379:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C8379: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C837C: push ecx */
    PUSH32(esp, ecx); /* 0x100C837D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C837E: fstp dword ptr [esp + 4] */
    goto L_100C844A; /* 0x100C8382: jmp 0x100c844a */
L_100C8387:
    PUSH32(esp, ecx); /* 0x100C8387: push ecx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x100C8388: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8395; /* 0x100C838B: jne 0x100c8395 */
L_100C838D:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C838D: fld dword ptr [0x10065b78] */
    RECOMP_BACKEDGE();
    goto L_100C834D; /* 0x100C8393: jmp 0x100c834d */
L_100C8395:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8395: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8398: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8473); /* 0x100C839B: call 0x100c8473 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C83A0: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C83A3: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C83A6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8459); /* 0x100C83A9: call 0x100c8459 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C83AE: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C83B1: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C83B4: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C83B6: fmul st(1) */
    fp_push(1.0); /* 0x100C83B8: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C83BA: pop ecx */
    _st[1] += _st[0]; /* 0x100C83BB: fadd st(1), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C83BD: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x100C83C0: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x100C83C2: fmulp st(3) */
    fp_xch(2); /* 0x100C83C4: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C83C6: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C83C9: fld dword ptr [ebp - 0x10] */
    fp_push(_st[2]); /* 0x100C83CC: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C83CE: fmulp st(1) */
    _st[0] += _st[1]; /* 0x100C83D0: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C83D2: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C83D5: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x100C83D8: fld st(0) */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C83DA: fld dword ptr [0x10065b68] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C83E0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C83E2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C83E4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C841C; /* 0x100C83E7: jp 0x100c841c */
L_100C83E9:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C83E9: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C83EB: fstp st(0) */
    fp_push(0.0); /* 0x100C83ED: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C83EF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C83F1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C83F3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8400; /* 0x100C83F6: jne 0x100c8400 */
L_100C83F8:
    fp_push(*(float*)&MEM32(0x10063D00)); /* 0x100C83F8: fld dword ptr [0x10063d00] */
    goto L_100C8402; /* 0x100C83FE: jmp 0x100c8402 */
L_100C8400:
    fp_push(1.0); /* 0x100C8400: fld1  */
L_100C8402:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8402: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C8405: push ecx */
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C8406: fmul qword ptr [0x10067cd0] */
    PUSH32(esp, ecx); /* 0x100C840C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C840D: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C8410: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C8413: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C8417: fld dword ptr [ebp - 0x10] */
    goto L_100C844A; /* 0x100C841A: jmp 0x100c844a */
L_100C841C:
    { double _v = fp_pop(); _st[2] = _v == 0.0 ? _st[2] : _st[2] / _v; } /* 0x100C841C: fdivp st(3) */
    fp_xch(2); /* 0x100C841E: fxch st(2) */
    PUSH32(esp, ecx); /* 0x100C8420: push ecx */
    PUSH32(esp, ecx); /* 0x100C8421: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C8422: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C8425: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C8428: fstp dword ptr [esp + 4] */
    _st[0] *= _st[0]; /* 0x100C842C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C842E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C8430: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C8433: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8436: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C8439: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x100C843E: fmul dword ptr [ebp - 0x10] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x100C8441: fdiv dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C8444: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C8447: fld dword ptr [ebp - 0x14] */
L_100C844A:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C844A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C844D: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C8452: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8453: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C8454: pop esi */
    esp = ebp; /* 0x100C8455: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8457: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8458: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8459(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8459u);

L_100C8459:
    PUSH32(esp, ebp); /* 0x100C8459: push ebp */
    ebp = esp; /* 0x100C845A: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C845C: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C845F: push ecx */
    PUSH32(esp, ecx); /* 0x100C8460: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8461: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366BE); /* 0x100C8464: call 0x100366be */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C8469: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C846C: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C846F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8470: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C8471: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8472: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8473(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8473u);

L_100C8473:
    PUSH32(esp, ebp); /* 0x100C8473: push ebp */
    ebp = esp; /* 0x100C8474: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8476: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C8479: push ecx */
    PUSH32(esp, ecx); /* 0x100C847A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C847B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036EB1); /* 0x100C847E: call 0x10036eb1 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C8483: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8486: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C8489: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C848A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C848B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C848C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C848D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C848Du);

L_100C848D:
    PUSH32(esp, ebp); /* 0x100C848D: push ebp */
    ebp = esp; /* 0x100C848E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x100C8490: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C8493: push esi */
    PUSH32(esp, edi); /* 0x100C8494: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C8495: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C8498: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C849B: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C849D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C849E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C849F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C84A0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C84A1: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C84A6: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C84A8: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C84AB: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C84AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C84AF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C84B0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C84B1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C84B2: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C84B7: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C84BA: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C84BB: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C84BE: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C84C3: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C84C6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C84C9: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C84CA: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C84CF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C84D1: movzx eax, ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C84D4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C84D5: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp LO16(esi), LO16(edx) */ /* 0x100C84D8: cmp si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C851D; /* 0x100C84DB: jne 0x100c851d */
L_100C84DD:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C84DD: movzx eax, word ptr [ebp - 2] */
    fp_push(0.0); /* 0x100C84E1: fldz  */
    /* test eax, 0x8000u */ /* 0x100C84E3: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C84F4; /* 0x100C84E8: je 0x100c84f4 */
L_100C84EA:
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C84EA: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C84F0: fchs  */
    goto L_100C84F6; /* 0x100C84F2: jmp 0x100c84f6 */
L_100C84F4:
    fp_push(_st[0]); /* 0x100C84F4: fld st(0) */
L_100C84F6:
    fp_xch(1); /* 0x100C84F6: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C84F8: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C84FB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C84FD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C850A; /* 0x100C8500: jne 0x100c850a */
L_100C8502:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C8502: fld qword ptr [0x10067ce8] */
    goto L_100C850C; /* 0x100C8508: jmp 0x100c850c */
L_100C850A:
    fp_push(1.0); /* 0x100C850A: fld1  */
L_100C850C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C850C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x100C850F: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C8511: fstp qword ptr [esp + 8] */
L_100C8515:
    eax = ebp + (-0x30); /* 0x100C8515: lea eax, [ebp - 0x30] */
    goto L_100C85EA; /* 0x100C8518: jmp 0x100c85ea */
L_100C851D:
    PUSH32(esp, 2); /* 0x100C851D: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C851F: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C8520: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C8531; /* 0x100C8523: jne 0x100c8531 */
L_100C8525:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8525: fld qword ptr [ebp - 8] */
L_100C8528:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C8528: sub esp, 0x10 */
    _flag_k = FK_CMP;
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C852B: fst qword ptr [esp + 8] */
    RECOMP_BACKEDGE();
    goto L_100C8515; /* 0x100C852F: jmp 0x100c8515 */
L_100C8531:
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C8531: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C854F; /* 0x100C8534: jne 0x100c854f */
L_100C8536:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8536: fld qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x100C8539: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C853B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C853D: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C853F: fld qword ptr [ebp - 0x10] */
    /* test HI8(eax), 0x44u */ /* 0x100C8542: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C850C; /* 0x100C8545: jnp 0x100c850c */
L_100C8547:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C8547: fstp st(1) */
    fp_push(_st[0]); /* 0x100C8549: fld st(0) */
    fp_xch(1); /* 0x100C854B: fxch st(1) */
    RECOMP_BACKEDGE();
    goto L_100C850C; /* 0x100C854D: jmp 0x100c850c */
L_100C854F:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100C854F: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C855C; /* 0x100C8552: jne 0x100c855c */
L_100C8554:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C8554: fld qword ptr [0x10065b98] */
    RECOMP_BACKEDGE();
    goto L_100C8528; /* 0x100C855A: jmp 0x100c8528 */
L_100C855C:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C855C: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C855F: push ecx */
    PUSH32(esp, ecx); /* 0x100C8560: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8561: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036EB1); /* 0x100C8564: call 0x10036eb1 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C8569: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C856C: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C856F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366BE); /* 0x100C8572: call 0x100366be */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C8577: fld qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x100C857A: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C857C: fmul st(1) */
    fp_push(1.0); /* 0x100C857E: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C8580: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8581: pop ecx */
    _st[1] += _st[0]; /* 0x100C8582: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C8584: fxch st(1) */
    _st[0] *= _st[3]; /* 0x100C8586: fmul st(3) */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x100C8588: fst qword ptr [ebp - 0x28] */
    _st[0] *= _st[3]; /* 0x100C858B: fmul st(3) */
    _st[0] += _st[1]; /* 0x100C858D: fadd st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C858F: fst qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C8592: fld qword ptr [0x10065b88] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8598: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C859A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C859C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C85BF; /* 0x100C859F: jp 0x100c85bf */
L_100C85A1:
    fp_push(0.0); /* 0x100C85A1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C85A3: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C85A5: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C85A7: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C85A9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C85B6; /* 0x100C85AC: jne 0x100c85b6 */
L_100C85AE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C85AE: fstp st(0) */
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C85B0: fld qword ptr [0x10067ce8] */
L_100C85B6:
    fp_xch(1); /* 0x100C85B6: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C85B8: fmulp st(2) */
    RECOMP_BACKEDGE();
    goto L_100C850C; /* 0x100C85BA: jmp 0x100c850c */
L_100C85BF:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C85BF: fstp st(1) */
    fp_xch(1); /* 0x100C85C1: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C85C3: fmul st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C85C5: push ecx */
    PUSH32(esp, ecx); /* 0x100C85C6: push ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C85C7: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C85C9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C85CC: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C85D1: fld qword ptr [ebp - 0x18] */
    eax = ebp + (-0x40); /* 0x100C85D4: lea eax, [ebp - 0x40] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C85D7: fld qword ptr [ebp - 0x20] */
    _st[1] /= _st[0]; /* 0x100C85DA: fdiv st(1), st(0) */
    fp_xch(1); /* 0x100C85DC: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C85DE: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x100C85E1: fld qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C85E4: fmulp st(2) */
    PUSH32(esp, ecx); /* 0x100C85E6: push ecx */
    PUSH32(esp, ecx); /* 0x100C85E7: push ecx */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C85E8: fdivp st(1) */
L_100C85EA:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C85EA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C85ED: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C85EE: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C85F3: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C85F5: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C85F8: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C85FB: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C85FD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C85FE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C85FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8600: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C8601: pop edi */
    esi = POP32_VAL(esp); /* 0x100C8602: pop esi */
    esp = ebp; /* 0x100C8603: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8605: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8606: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8607(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8607u);

L_100C8607:
    PUSH32(esp, ebp); /* 0x100C8607: push ebp */
    ebp = esp; /* 0x100C8608: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C860A: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C860D: push esi */
    PUSH32(esp, edi); /* 0x100C860E: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C860F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C8612: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C8615: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8617: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8618: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8619: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C861A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C861B: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C8620: push ecx */
    PUSH32(esp, ecx); /* 0x100C8621: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C8622: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C8626: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C8628: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C862B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C862C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C862D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C862E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C862F: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C8634: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C8637: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C863A: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C863C: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C863F: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C8640: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C8645: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C8648: mov esi, eax */
    edi = esp; /* 0x100C864A: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C864C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C864F: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8650: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8651: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8652: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8653: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C848D); /* 0x100C8654: call 0x100c848d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C8659: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C865B: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C865E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8661: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8662: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8663: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8664: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C8665: mov esi, eax */
    edi = esp; /* 0x100C8667: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8669: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C866A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C866B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C866C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C866D: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C8672: push ecx */
    PUSH32(esp, ecx); /* 0x100C8673: push ecx */
    edi = esp; /* 0x100C8674: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C8676: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C8679: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C867B: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C867F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8680: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8681: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C8682: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C8683: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C8688: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8689: pop ecx */
    eax = ebp + (-0x20); /* 0x100C868A: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C868D: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8690: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C8691: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C8696: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C8698: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C869B: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C869E: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C86A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C86A1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C86A2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C86A3: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C86A4: pop edi */
    esi = POP32_VAL(esp); /* 0x100C86A5: pop esi */
    esp = ebp; /* 0x100C86A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C86A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C86A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C86AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C86AAu);

L_100C86AA:
    PUSH32(esp, ebp); /* 0x100C86AA: push ebp */
    ebp = esp; /* 0x100C86AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C86AD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C86B0: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C86B3: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C86B5: fmul st(1) */
    PUSH32(esp, 0); /* 0x100C86B7: push 0 */
    PUSH32(esp, 6); /* 0x100C86B9: push 6 */
    PUSH32(esp, 0x100C8708u); /* 0x100C86BB: push 0x100c8708 */
    PUSH32(esp, ecx); /* 0x100C86C0: push ecx */
    _st[0] = -_st[0]; /* 0x100C86C1: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C86C3: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C86C6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C86C7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C86CA: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C86CF: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C86D2: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C86D5: fld qword ptr [ebp + 8] */
    PUSH32(esp, 6); /* 0x100C86D8: push 6 */
    PUSH32(esp, 0x100C8740u); /* 0x100C86DA: push 0x100c8740 */
    PUSH32(esp, ecx); /* 0x100C86DF: push ecx */
    PUSH32(esp, ecx); /* 0x100C86E0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C86E1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C86E4: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C86E9: fdivr qword ptr [ebp - 0x10] */
    eax = ebp + (-0x8); /* 0x100C86EC: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C86EF: add esp, 8 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C86F2: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C86F5: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C86F6: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C86FB: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C86FE: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100C8701: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8703: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8704: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8708u);

    goto L_100C8708;
L_100C8703:
    ebp = POP32_VAL(esp); /* 0x100C8703: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8704: ret  */
L_100C8708:
    PUSHAD(); /* 0x100C8708: pushal  */
    PUSH32(esp, 0x75u); /* 0x100C8709: push 0x75 */
    /* in: no port I/O under Win32 */ /* 0x100C870B: in al, 0x5a */
    /* cmp eax, MEM32(0x417C7D3E) */ /* 0x100C870D: cmp eax, dword ptr [0x417c7d3e] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x417C7D3E));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a - _flag_b), 0)) goto L_100C8703; /* 0x100C8713: jp 0x100c8703 */
L_100C8715:
    /* in: no port I/O under Win32 */ /* 0x100C8715: in eax, dx */
    { uint32_t _tmp = MEM32(edi); /* 0x100C8716: xchg dword ptr [edi], edi */
      MEM32(edi) = edi;
      edi = _tmp; }
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100C8718: stc  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100C8719: dec esp */
    _flag_k = FK_DEC;
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + 0x3FB87BB9)); /* 0x100C871A: fcomp dword ptr [eax + 0x3fb87bb9] */
    fp_pop();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100C8720: dec esp */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8721: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8740u);

L_100C8740:
    goto L_0B016B5D; /* 0x100C8740: jmp 0xb016b5d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0B016B5D: RECOMP_ITAIL(0x0B016B5Du); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_100C8778(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8778u);

L_100C8778:
    PUSH32(esp, ebp); /* 0x100C8778: push ebp */
    ebp = esp; /* 0x100C8779: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C877B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C877E: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C877F: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8784: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C8785: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C8786: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8881; /* 0x100C8789: je 0x100c8881 */
L_100C878F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C878F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8868; /* 0x100C8790: je 0x100c8868 */
L_100C8796:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8796: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8881; /* 0x100C8797: je 0x100c8881 */
L_100C879D:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C879D: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C87A0: fld st(0) */
    _st[0] = fabs(_st[0]); /* 0x100C87A2: fabs  */
    fp_push(*(double*)ADDR(0x100E2048)); /* 0x100C87A4: fld qword ptr [0x100e2048] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C87AA: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C87AC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C87AE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C882D; /* 0x100C87B1: jne 0x100c882d */
L_100C87B3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C87B3: fstp st(0) */
    fp_push(_st[0]); /* 0x100C87B5: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C87B7: fmul st(1) */
    fp_push(*(double*)ADDR(0x10063D08)); /* 0x100C87B9: fld qword ptr [0x10063d08] */
    _st[0] *= _st[1]; /* 0x100C87BF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D18); /* 0x100C87C1: fadd qword ptr [0x10063d18] */
    _st[0] *= _st[1]; /* 0x100C87C7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D28); /* 0x100C87C9: fadd qword ptr [0x10063d28] */
    _st[0] *= _st[1]; /* 0x100C87CF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D38); /* 0x100C87D1: fadd qword ptr [0x10063d38] */
    _st[0] *= _st[1]; /* 0x100C87D7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D48); /* 0x100C87D9: fadd qword ptr [0x10063d48] */
    _st[0] *= _st[1]; /* 0x100C87DF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D58); /* 0x100C87E1: fadd qword ptr [0x10063d58] */
    _st[0] *= _st[1]; /* 0x100C87E7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D68); /* 0x100C87E9: fadd qword ptr [0x10063d68] */
    fp_push(_st[1]); /* 0x100C87EF: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10063D10); /* 0x100C87F1: fmul qword ptr [0x10063d10] */
    _st[0] += *(double*)ADDR(0x10063D20); /* 0x100C87F7: fadd qword ptr [0x10063d20] */
    _st[0] *= _st[2]; /* 0x100C87FD: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D30); /* 0x100C87FF: fadd qword ptr [0x10063d30] */
    _st[0] *= _st[2]; /* 0x100C8805: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D40); /* 0x100C8807: fadd qword ptr [0x10063d40] */
    _st[0] *= _st[2]; /* 0x100C880D: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D50); /* 0x100C880F: fadd qword ptr [0x10063d50] */
    _st[0] *= _st[2]; /* 0x100C8815: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D60); /* 0x100C8817: fadd qword ptr [0x10063d60] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C881D: fmulp st(2) */
    fp_xch(1); /* 0x100C881F: fxch st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C8821: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C8827: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8829: fmulp st(1) */
    ebp = POP32_VAL(esp); /* 0x100C882B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C882C: ret  */
L_100C882D:
    fp_push(*(double*)ADDR(0x100E2040)); /* 0x100C882D: fld qword ptr [0x100e2040] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8833: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8835: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C8837: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8853; /* 0x100C883A: jne 0x100c8853 */
L_100C883C:
    PUSH32(esp, ecx); /* 0x100C883C: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C883D: fstp st(1) */
    PUSH32(esp, ecx); /* 0x100C883F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8840: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C86AA); /* 0x100C8843: call 0x100c86aa */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C8848: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C884A: pop ecx */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C884B: fsubrp st(1) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C884D: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C8850: pop ecx */
    goto L_100C8859; /* 0x100C8851: jmp 0x100c8859 */
L_100C8853:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C8853: fstp st(0) */
    fp_push(1.0); /* 0x100C8855: fld1  */
    fp_xch(1); /* 0x100C8857: fxch st(1) */
L_100C8859:
    fp_push(0.0); /* 0x100C8859: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C885B: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C885D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C885F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8884; /* 0x100C8862: jne 0x100c8884 */
L_100C8864:
    _st[0] = -_st[0]; /* 0x100C8864: fchs  */
    ebp = POP32_VAL(esp); /* 0x100C8866: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8867: ret  */
L_100C8868:
    eax = MEM32(ebp + 0xE); /* 0x100C8868: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C886B: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C886E: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C887D; /* 0x100C8873: je 0x100c887d */
L_100C8875:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C8875: fld qword ptr [0x10067ce8] */
    ebp = POP32_VAL(esp); /* 0x100C887B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C887C: ret  */
L_100C887D:
    fp_push(1.0); /* 0x100C887D: fld1  */
    ebp = POP32_VAL(esp); /* 0x100C887F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8880: ret  */
L_100C8881:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C8881: fld qword ptr [ebp + 8] */
L_100C8884:
    ebp = POP32_VAL(esp); /* 0x100C8884: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8885: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8886(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8886u);

L_100C8886:
    PUSH32(esp, ebp); /* 0x100C8886: push ebp */
    ebp = esp; /* 0x100C8887: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C8889: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C888C: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C888F: push esi */
    PUSH32(esp, eax); /* 0x100C8890: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C8891: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8896: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C8897: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C8898: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8A59; /* 0x100C889B: je 0x100c8a59 */
L_100C88A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C88A1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8A40; /* 0x100C88A2: je 0x100c8a40 */
L_100C88A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C88A8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8A3B; /* 0x100C88A9: je 0x100c8a3b */
L_100C88AF:
    fp_push(*(double*)ADDR(0x10064070)); /* 0x100C88AF: fld qword ptr [0x10064070] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C88B5: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C88B8: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C88BA: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C88BC: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C88BE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C88D8; /* 0x100C88C1: jp 0x100c88d8 */
L_100C88C3:
    PUSH32(esp, ecx); /* 0x100C88C3: push ecx */
    PUSH32(esp, ecx); /* 0x100C88C4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C88C5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8778); /* 0x100C88C8: call 0x100c8778 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C88CD: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C88CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C88D0: pop ecx */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C88D1: fsubrp st(1) */
    goto L_100C8A5B; /* 0x100C88D3: jmp 0x100c8a5b */
L_100C88D8:
    fp_push(*(double*)ADDR(0x10064088)); /* 0x100C88D8: fld qword ptr [0x10064088] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C88DE: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C88E0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C88E2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8972; /* 0x100C88E5: jne 0x100c8972 */
L_100C88EB:
    fp_push(1.0); /* 0x100C88EB: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C88ED: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C88EF: fnstsw ax */
    PUSH32(esp, 8); /* 0x100C88F1: push 8 */
    /* test HI8(eax), 0x41u */ /* 0x100C88F3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8935; /* 0x100C88F6: jne 0x100c8935 */
L_100C88F8:
    _st[0] -= *(double*)ADDR(0x10064078); /* 0x100C88F8: fsub qword ptr [0x10064078] */
    PUSH32(esp, 0x100C8A60u); /* 0x100C88FE: push 0x100c8a60 */
    PUSH32(esp, ecx); /* 0x100C8903: push ecx */
    PUSH32(esp, ecx); /* 0x100C8904: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C8905: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8908: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C890B: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C8910: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8913: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8916: fld qword ptr [ebp - 8] */
    PUSH32(esp, 9); /* 0x100C8919: push 9 */
    PUSH32(esp, 0x100C8AA8u); /* 0x100C891B: push 0x100c8aa8 */
    PUSH32(esp, ecx); /* 0x100C8920: push ecx */
    PUSH32(esp, ecx); /* 0x100C8921: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8922: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C8925: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C892A: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C892D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C8A5B; /* 0x100C8930: jmp 0x100c8a5b */
L_100C8935:
    _st[0] -= *(double*)ADDR(0x10064080); /* 0x100C8935: fsub qword ptr [0x10064080] */
    PUSH32(esp, 0x100C8AF8u); /* 0x100C893B: push 0x100c8af8 */
    PUSH32(esp, ecx); /* 0x100C8940: push ecx */
    PUSH32(esp, ecx); /* 0x100C8941: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C8942: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8945: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C8948: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C894D: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8950: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8953: fld qword ptr [ebp - 8] */
    PUSH32(esp, 9); /* 0x100C8956: push 9 */
    PUSH32(esp, 0x100C8B40u); /* 0x100C8958: push 0x100c8b40 */
    PUSH32(esp, ecx); /* 0x100C895D: push ecx */
    PUSH32(esp, ecx); /* 0x100C895E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C895F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C8962: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C8967: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C896A: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C8A5B; /* 0x100C896D: jmp 0x100c8a5b */
L_100C8972:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C8972: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100C8B90u; /* 0x100C8974: mov ecx, 0x100c8b90 */
L_100C8979:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C8979: fcom qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C897B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C897D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C899C; /* 0x100C8980: jnp 0x100c899c */
L_100C8982:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C8982: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100C8983: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, 6 */ /* 0x100C8986: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100C8979; /* 0x100C8989: jb 0x100c8979 */
L_100C898B:
    PUSH32(esp, 0x10u); /* 0x100C898B: push 0x10 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C898D: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C898F: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C8994: pop ecx */
L_100C8995:
    fp_push(0.0); /* 0x100C8995: fldz  */
    goto L_100C8A5B; /* 0x100C8997: jmp 0x100c8a5b */
L_100C899C:
    fp_push(1.0); /* 0x100C899C: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C899E: fdivrp st(1) */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x100C89A0: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x100C89A0: shl esi, 5 */
    PUSH32(esp, MEM32(esi + 0x100C8BA4)); /* 0x100C89A3: push dword ptr [esi + 0x100c8ba4] */
    _st[0] -= *(double*)ADDR(esi + 0x100C8B98); /* 0x100C89A9: fsub qword ptr [esi + 0x100c8b98] */
    PUSH32(esp, MEM32(esi + 0x100C8BA0)); /* 0x100C89AF: push dword ptr [esi + 0x100c8ba0] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C89B5: fst qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C89B8: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C89B9: fst qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C89BC: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C89BD: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C89C0: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C89C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C89C8: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C89CB: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(esi + 0x100C8BAC)); /* 0x100C89CE: push dword ptr [esi + 0x100c8bac] */
    PUSH32(esp, MEM32(esi + 0x100C8BA8)); /* 0x100C89D4: push dword ptr [esi + 0x100c8ba8] */
    PUSH32(esp, ecx); /* 0x100C89DA: push ecx */
    PUSH32(esp, ecx); /* 0x100C89DB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C89DC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C89DF: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C89E4: fdivr qword ptr [ebp - 0x18] */
    eax = ebp + (-0x8); /* 0x100C89E7: lea eax, [ebp - 8] */
    PUSH32(esp, 0x11u); /* 0x100C89EA: push 0x11 */
    PUSH32(esp, eax); /* 0x100C89EC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C89ED: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C89F0: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C89F3: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100C89F6: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C89FB: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C89FE: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C8A01: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C8A03: fld qword ptr [ebp + 8] */
    _st[1] -= _st[0]; /* 0x100C8A06: fsub st(1), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C8A08: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8A0A: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8A0C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366FA); /* 0x100C8A0F: call 0x100366fa */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C8A14: fmul qword ptr [ebp - 0x18] */
    eax = ebp + (-0x8); /* 0x100C8A17: lea eax, [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8A1A: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C8A1D: pop ecx */
    _st[0] *= _st[0]; /* 0x100C8A1E: fmul st(0), st(0) */
    ecx = POP32_VAL(esp); /* 0x100C8A20: pop ecx */
    PUSH32(esp, 0); /* 0x100C8A21: push 0 */
    PUSH32(esp, ecx); /* 0x100C8A23: push ecx */
    PUSH32(esp, ecx); /* 0x100C8A24: push ecx */
    _st[0] = -_st[0]; /* 0x100C8A25: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8A27: fstp qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8A2A: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8A2D: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C8A2E: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C8A33: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C8A36: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C8A5B; /* 0x100C8A39: jmp 0x100c8a5b */
L_100C8A3B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C8A3B: fld qword ptr [ebp + 8] */
    goto L_100C8A5B; /* 0x100C8A3E: jmp 0x100c8a5b */
L_100C8A40:
    eax = MEM32(ebp + 0xE); /* 0x100C8A40: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C8A43: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C8A46: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C8995; /* 0x100C8A4B: je 0x100c8995 */
L_100C8A51:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C8A51: fld qword ptr [0x10063be8] */
    goto L_100C8A5B; /* 0x100C8A57: jmp 0x100c8a5b */
L_100C8A59:
    fp_push(1.0); /* 0x100C8A59: fld1  */
L_100C8A5B:
    esi = POP32_VAL(esp); /* 0x100C8A5B: pop esi */
    esp = ebp; /* 0x100C8A5C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8A5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8A5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8A60u);

L_100C8A60:
    /* test eax, 0x08EBE29Bu */ /* 0x100C8A60: test eax, 0x8ebe29b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08EBE29Bu);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C8A65:
    if (ecx == 0) goto L_100C8A91; /* 0x100C8A65: jecxz 0x100c8a91 */
L_100C8A67:
    void_lift_trap(0x100C8A67u, "aas ");
    SET_LO8(ebx, 0x8Du); /* 0x100C8A68: mov bl, 0x8d */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + (-0x40A3A6A3))) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + MEM8(esi + (-0x40A3A6A3))); /* 0x100C8A6A: add bh, byte ptr [esi - 0x40a3a6a3] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C8AAE; /* 0x100C8A70: jge 0x100c8aae */
L_100C8A72:
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C8A72: retf  */
L_100C8A91:
    PUSHAD(); /* 0x100C8A91: pushal  */
    { uint32_t _tmp = MEM8(ebx + 0x4D3FD842); /* 0x100C8A92: xchg byte ptr [ebx + 0x4d3fd842], dl */
      MEM8(ebx + 0x4D3FD842) = (uint8_t)(LO8(edx));
      SET_LO8(edx, _tmp); }
    void_lift_trap(0x100C8A99u, "int1 ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C8A9A: inc ecx */
    _flag_k = FK_INC;
    _st[0] = *(double*)ADDR(edi) - _st[0]; /* 0x100C8A9B: fsubr qword ptr [edi] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C8A9D: fsubrp st(0) */
    edi = 0xBFD69483u; /* 0x100C8A9F: mov edi, 0xbfd69483 */
    { uint32_t _tmp = MEM8(eax + (-0x2E)); /* 0x100C8AA4: xchg byte ptr [eax - 0x2e], al */
      MEM8(eax + (-0x2E)) = (uint8_t)(LO8(eax));
      SET_LO8(eax, _tmp); }
    void_lift_trap(0x100C8AA7u, "aas ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8AA8: dec ecx */
    _flag_k = FK_DEC;
    eax = 0xB31F5AC7u; /* 0x100C8AA9: mov eax, 0xb31f5ac7 */
L_100C8AAE:
    void_lift_trap(0x100C8AAEu, "iretd ");
    esi = 0x3D88A1D9u; /* 0x100C8AAF: mov esi, 0x3d88a1d9 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100C8A65; /* 0x100C8AB4: jbe 0x100c8a65 */
L_100C8AB6:
    _flag_a = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x3Fu); /* 0x100C8AB6: xor al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x265EF517); /* 0x100C8AB8: mov eax, dword ptr [0x265ef517] */
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C8ABD: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C8ABE: dec edi */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C8ABFu, "aas ");
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C8AC0: retf 0x2345 */
    RECOMP_REGS_OUT();
}

void sub_100C8AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8AA8u);

    goto L_100C8AA8;
L_100C8A65:
    if (ecx == 0) goto L_100C8A91; /* 0x100C8A65: jecxz 0x100c8a91 */
L_100C8A67:
    void_lift_trap(0x100C8A67u, "aas ");
    SET_LO8(ebx, 0x8Du); /* 0x100C8A68: mov bl, 0x8d */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + (-0x40A3A6A3))) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + MEM8(esi + (-0x40A3A6A3))); /* 0x100C8A6A: add bh, byte ptr [esi - 0x40a3a6a3] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C8AAE; /* 0x100C8A70: jge 0x100c8aae */
L_100C8A72:
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C8A72: retf  */
L_100C8A91:
    PUSHAD(); /* 0x100C8A91: pushal  */
    { uint32_t _tmp = MEM8(ebx + 0x4D3FD842); /* 0x100C8A92: xchg byte ptr [ebx + 0x4d3fd842], dl */
      MEM8(ebx + 0x4D3FD842) = (uint8_t)(LO8(edx));
      SET_LO8(edx, _tmp); }
    void_lift_trap(0x100C8A99u, "int1 ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C8A9A: inc ecx */
    _flag_k = FK_INC;
    _st[0] = *(double*)ADDR(edi) - _st[0]; /* 0x100C8A9B: fsubr qword ptr [edi] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C8A9D: fsubrp st(0) */
    edi = 0xBFD69483u; /* 0x100C8A9F: mov edi, 0xbfd69483 */
    { uint32_t _tmp = MEM8(eax + (-0x2E)); /* 0x100C8AA4: xchg byte ptr [eax - 0x2e], al */
      MEM8(eax + (-0x2E)) = (uint8_t)(LO8(eax));
      SET_LO8(eax, _tmp); }
    void_lift_trap(0x100C8AA7u, "aas ");
L_100C8AA8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8AA8: dec ecx */
    _flag_k = FK_DEC;
    eax = 0xB31F5AC7u; /* 0x100C8AA9: mov eax, 0xb31f5ac7 */
L_100C8AAE:
    void_lift_trap(0x100C8AAEu, "iretd ");
    esi = 0x3D88A1D9u; /* 0x100C8AAF: mov esi, 0x3d88a1d9 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100C8A65; /* 0x100C8AB4: jbe 0x100c8a65 */
L_100C8AB6:
    _flag_a = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x3Fu); /* 0x100C8AB6: xor al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x265EF517); /* 0x100C8AB8: mov eax, dword ptr [0x265ef517] */
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C8ABD: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C8ABE: dec edi */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C8ABFu, "aas ");
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C8AC0: retf 0x2345 */
    RECOMP_REGS_OUT();
}

void sub_100C8AF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8AF8u);

L_100C8AF8:
    ecx = POP32_VAL(esp); /* 0x100C8AF8: pop ecx */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(edx)); /* 0x100C8AF9: and byte ptr [esi], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = MEM8(edi), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8AFB: sbb byte ptr [edi], ch */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((esp ^ eax)); _flag_b = (uint32_t)((esp ^ eax));
    esp = esp ^ eax; /* 0x100C8AFD: xor esp, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C8AFF: dec edx */
    _flag_k = FK_DEC;
    /* in: no port I/O under Win32 */ /* 0x100C8B01: in eax, 0x99 */
    SET_LO8(ebx, 0x99u); /* 0x100C8B03: mov bl, 0x99 */
    _flag_a = (eax >> 8) & 0xD5u; _flag_b = 0; _cf = _flag_a & 1u; _flag_k = FK_EFLAGS; /* 0x100C8B05: sahf  */
    _flag_k = FK_EFLAGS;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi); /* 0x100C8B06: idiv dword ptr [esi] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    SET_LO8(eax, MEM8(0x4BE59786)); /* 0x100C8B08: mov al, byte ptr [0x4be59786] */
    ebx = POP32_VAL(esp); /* 0x100C8B0D: pop ebx */
    _flag_a = (uint32_t)(MEM32(edi + (-0x3D5FBC2C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + (-0x3D5FBC2C)) = MEM32(edi + (-0x3D5FBC2C)) - edi; /* 0x100C8B0E: sub dword ptr [edi - 0x3d5fbc2c], edi */
    _flag_k = FK_CMP;
    esi = ebp; /* 0x100C8B14: mov esi, ebp */
    void_lift_trap(0x100C8B16u, "bound edi, qword ptr [edi + 0x4fb336c9]");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8B1C: dec ecx */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C8B1Du, "sti ");
    { uint32_t _tmp = esi; /* 0x100C8B1E: xchg esi, eax */
      esi = eax;
      eax = _tmp; }
    void_lift_trap(0x100C8B1Fu, "aas ");
    edi = 0x03AE0DE4u; /* 0x100C8B20: mov edi, 0x3ae0de4 */
    _flag_a = (uint32_t)((LO8(eax) | 0xB5u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xB5u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xB5u); /* 0x100C8B25: or al, 0xb5 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0x7CD14E00u; /* 0x100C8B27: mov edi, 0x7cd14e00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C8B2C: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8B2D: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi); _seg_es = MEM16(edi + 4); /* 0x100C8B2E: les edi, ptr [edi] */
    void_lift_trap(0x100C8B30u, "fcmove st(0), st(3)");
    SET_LO8(ebx, 0xACu); /* 0x100C8B32: mov bl, 0xac */
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C8B34: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C8B35: stosb byte ptr es:[edi], al */
    edi = MEM32(edi + (-0x75F26CF9)); _seg_es = MEM16(edi + (-0x75F26CF9) + 4); /* 0x100C8B36: les edi, ptr [edi - 0x75f26cf9] */
    RECOMP_ITAIL(0x100C8B3Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C8B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8B40u);

L_100C8B40:
    /* in: no port I/O under Win32 */ /* 0x100C8B40: in al, dx */
    void_lift_trap(0x100C8B41u, "hlt ");
    void_lift_trap(0x100C8B42u, "int 0xc2");
    goto L_100C8B44; /* falls through past a gap */
L_100C8B43:
    RECOMP_FLAGS_OUT(); esp += 23488; { RECOMP_REGS_OUT(); return; } /* 0x100C8B43: ret 0x5bbc */
L_100C8B44:
    esp = 0x8E3F215Bu; /* 0x100C8B44: mov esp, 0x8e3f215b */
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C8B49: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x100C8B4Au, "salc ");
    PUSHAD(); /* 0x100C8B4B: pushal  */
    RECOMP_BACKEDGE();
    if (CMP_O(_flag_a, _flag_b)) goto L_100C8B43; /* 0x100C8B4C: jo 0x100c8b43 */
L_100C8B4E:
    PUSH32(esp, ecx); /* 0x100C8B4E: push ecx */
    void_lift_trap(0x100C8B4Fu, "aas ");
    PUSH32(esp, esp); /* 0x100C8B50: push esp */
    void_lift_trap(0x100C8B51u, "daa ");
    /* fwait */ /* 0x100C8B52: wait  */
    { uint32_t _fl = POP32_VAL(esp); /* 0x100C8B53: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xBEu) << 24;
    SET_LO8(eax, LO8(eax) & 0xBEu); /* 0x100C8B54: and al, 0xbe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8B97; /* 0x100C8B56: ja 0x100c8b97 */
L_100C8B58:
    eax = MEM32(esi); esi += _df * 4; /* 0x100C8B58: lodsd eax, dword ptr [esi] */
    esi = 0xB9ADF94Du; /* 0x100C8B59: mov esi, 0xb9adf94d */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8B5E: cwde  */
    void_lift_trap(0x100C8B5Fu, "aas ");
    void_lift_trap(0x100C8B60u, "int3 ");
L_100C8B97:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8B97: inc eax */
    _flag_k = FK_INC;
    _df = -1; /* 0x100C8B98: std  */
    /* in: no port I/O under Win32 */ /* 0x100C8B99: in eax, 0x9d */
    { uint32_t _tmp = MEM32(ebx + 0x703FE1F2); /* 0x100C8B9B: xchg dword ptr [ebx + 0x703fe1f2], ecx */
      MEM32(ebx + 0x703FE1F2) = ecx;
      ecx = _tmp; }
    /* cmp eax, 0x000D1006u */ /* 0x100C8BA1: cmp eax, 0xd1006 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000D1006u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100C8BE7; } /* 0x100C8BA8: loopne 0x100c8be7 */
L_100C8BAA:
    PUSH32(esp, _seg_es); /* 0x100C8BAA: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8BAB: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BAD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BAF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100C8BB5: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8BB7: inc eax */
    _flag_k = FK_INC;
    void_lift_trap(0x100C8BB8u, "arpl si, cx");
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8BBA: cwde  */
    _flag_a = (uint32_t)((esp ^ esi)); _flag_b = (uint32_t)((esp ^ esi));
    esp = esp ^ esi; /* 0x100C8BBB: xor esp, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = _seg_ds; /* 0x100C8BBD: mov ecx, ds */
    void_lift_trap(0x100C8BBFu, "aas ");
    RECOMP_ITAIL(0x100C8BC0u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100C8BE7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x100C8BE7: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8BE9: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8BEB: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3F7CED92))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3F7CED92)) = (uint8_t)(MEM8(eax + (-0x3F7CED92)) + LO8(ebx)); /* 0x100C8BEF: add byte ptr [eax - 0x3f7ced92], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C8BF5: dec edx */
    _flag_k = FK_DEC;
    _seg_ss = POP32_VAL(esp); /* 0x100C8BF6: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8BF7: inc eax */
    _flag_k = FK_INC;
    RECOMP_ITAIL(0x100C8BF8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C8B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8B90u);

L_100C8B90:
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8B90: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8B92: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8B94: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + (-0x3))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + (-0x3)) = MEM32(eax + (-0x3)) + eax; /* 0x100C8B96: add dword ptr [eax - 3], eax */
    _flag_k = FK_ADD;
    /* in: no port I/O under Win32 */ /* 0x100C8B99: in eax, 0x9d */
    { uint32_t _tmp = MEM32(ebx + 0x703FE1F2); /* 0x100C8B9B: xchg dword ptr [ebx + 0x703fe1f2], ecx */
      MEM32(ebx + 0x703FE1F2) = ecx;
      ecx = _tmp; }
    /* cmp eax, 0x000D1006u */ /* 0x100C8BA1: cmp eax, 0xd1006 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000D1006u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BA6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100C8BE7; } /* 0x100C8BA8: loopne 0x100c8be7 */
L_100C8BAA:
    PUSH32(esp, _seg_es); /* 0x100C8BAA: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8BAB: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BAD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BAF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BB1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BB3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100C8BB5: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8BB7: inc eax */
    _flag_k = FK_INC;
    void_lift_trap(0x100C8BB8u, "arpl si, cx");
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8BBA: cwde  */
    _flag_a = (uint32_t)((esp ^ esi)); _flag_b = (uint32_t)((esp ^ esi));
    esp = esp ^ esi; /* 0x100C8BBB: xor esp, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = _seg_ds; /* 0x100C8BBD: mov ecx, ds */
    void_lift_trap(0x100C8BBFu, "aas ");
    RECOMP_ITAIL(0x100C8BC0u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100C8BE7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(eax)); /* 0x100C8BE7: add al, ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8BE9: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8BEB: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8BED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3F7CED92))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3F7CED92)) = (uint8_t)(MEM8(eax + (-0x3F7CED92)) + LO8(ebx)); /* 0x100C8BEF: add byte ptr [eax - 0x3f7ced92], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C8BF5: dec edx */
    _flag_k = FK_DEC;
    _seg_ss = POP32_VAL(esp); /* 0x100C8BF6: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8BF7: inc eax */
    _flag_k = FK_INC;
    RECOMP_ITAIL(0x100C8BF8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C8C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8C50u);

L_100C8C50:
    PUSH32(esp, ebp); /* 0x100C8C50: push ebp */
    ebp = esp; /* 0x100C8C51: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100C8C53: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x100C8C56: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8C59: dec eax */
    _flag_k = FK_DEC;
    fp_push(*(float*)&MEM32(ecx)); /* 0x100C8C5A: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C8C5C: fstp dword ptr [ebp + 0xc] */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100C8C78; /* 0x100C8C5F: js 0x100c8c78 */
L_100C8C61:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8C61: fld dword ptr [ebp + 8] */
L_100C8C64:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C8C64: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x100C8C67: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8C6A: dec eax */
    _flag_k = FK_DEC;
    fp_push(_st[1]); /* 0x100C8C6B: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8C6D: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x100C8C6F: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C8C71: fstp dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_100C8C64; /* 0x100C8C74: jns 0x100c8c64 */
L_100C8C76:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C8C76: fstp st(0) */
L_100C8C78:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C8C78: fld dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x100C8C7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8C7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8C7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8C7Du);

L_100C8C7D:
    PUSH32(esp, ebp); /* 0x100C8C7D: push ebp */
    ebp = esp; /* 0x100C8C7E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C8C80: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C8C83: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C8C86: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C8C87: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8C8C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C8C8D: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C8C8E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8E72; /* 0x100C8C91: je 0x100c8e72 */
L_100C8C97:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8C97: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8E53; /* 0x100C8C98: je 0x100c8e53 */
L_100C8C9E:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8C9E: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8CA1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C8E74; /* 0x100C8CA2: je 0x100c8e74 */
L_100C8CA8:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C8F98)); /* 0x100C8CA8: fcom qword ptr [0x100c8f98] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8CAE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C8CB0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C8CCE; /* 0x100C8CB3: jp 0x100c8cce */
L_100C8CB5:
    PUSH32(esp, ecx); /* 0x100C8CB5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8CB6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C9458); /* 0x100C8CB9: call 0x100c9458 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C8CBE: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C8CC0: fsubrp st(1) */
    ecx = POP32_VAL(esp); /* 0x100C8CC2: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8CC3: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8CC6: fld dword ptr [ebp - 8] */
    goto L_100C8E74; /* 0x100C8CC9: jmp 0x100c8e74 */
L_100C8CCE:
    fp_push(*(float*)&MEM32(0x100C8F90)); /* 0x100C8CCE: fld dword ptr [0x100c8f90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8CD4: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8CD6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C8CD8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8D76; /* 0x100C8CDB: jne 0x100c8d76 */
L_100C8CE1:
    fp_push(1.0); /* 0x100C8CE1: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8CE3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8CE5: fnstsw ax */
    PUSH32(esp, 4); /* 0x100C8CE7: push 4 */
    /* test HI8(eax), 0x41u */ /* 0x100C8CE9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8D32; /* 0x100C8CEC: jne 0x100c8d32 */
L_100C8CEE:
    _st[0] -= *(double*)ADDR(0x10064078); /* 0x100C8CEE: fsub qword ptr [0x10064078] */
    PUSH32(esp, 0x100C8E78u); /* 0x100C8CF4: push 0x100c8e78 */
    PUSH32(esp, ecx); /* 0x100C8CF9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C8CFA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8CFD: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8D00: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8D03: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8D08: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8D0B: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8D0E: fld dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x100C8D11: push 4 */
    PUSH32(esp, 0x100C8E90u); /* 0x100C8D13: push 0x100c8e90 */
    PUSH32(esp, ecx); /* 0x100C8D18: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8D19: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8D1C: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C8D21: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8D24: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8D27: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8D2A: fld dword ptr [ebp - 8] */
    goto L_100C8E74; /* 0x100C8D2D: jmp 0x100c8e74 */
L_100C8D32:
    _st[0] -= *(double*)ADDR(0x10064080); /* 0x100C8D32: fsub qword ptr [0x10064080] */
    PUSH32(esp, 0x100C8EA4u); /* 0x100C8D38: push 0x100c8ea4 */
    PUSH32(esp, ecx); /* 0x100C8D3D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C8D3E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8D41: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8D44: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8D47: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8D4C: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8D4F: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8D52: fld dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x100C8D55: push 4 */
    PUSH32(esp, 0x100C8EB8u); /* 0x100C8D57: push 0x100c8eb8 */
    PUSH32(esp, ecx); /* 0x100C8D5C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8D5D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8D60: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C8D65: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8D68: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8D6B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8D6E: fld dword ptr [ebp - 8] */
    goto L_100C8E74; /* 0x100C8D71: jmp 0x100c8e74 */
L_100C8D76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C8D76: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C8D78: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C8D7A:
    fp_push(*(float*)&MEM32(ecx + 0x100C8ED0)); /* 0x100C8D7A: fld dword ptr [ecx + 0x100c8ed0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C8D80: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C8D82: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C8D84: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C8DA6; /* 0x100C8D87: je 0x100c8da6 */
L_100C8D89:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x100C8D89: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C8D8C: inc edx */
    _flag_k = FK_INC;
    /* cmp ecx, 0xC0u */ /* 0x100C8D8D: cmp ecx, 0xc0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100C8D7A; /* 0x100C8D93: jb 0x100c8d7a */
L_100C8D95:
    PUSH32(esp, 0x10u); /* 0x100C8D95: push 0x10 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C8D97: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C8D99: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x100C8D9E: fldz  */
    ecx = POP32_VAL(esp); /* 0x100C8DA0: pop ecx */
    goto L_100C8E74; /* 0x100C8DA1: jmp 0x100c8e74 */
L_100C8DA6:
    fp_push(1.0); /* 0x100C8DA6: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C8DA8: fdivrp st(1) */
    PUSH32(esp, esi); /* 0x100C8DAA: push esi */
    esi = (uint32_t)((int32_t)edx * (int32_t)0x18u); /* 0x100C8DAB: imul esi, edx, 0x18 */
    _st[0] -= (double)*(float*)ADDR(esi + 0x100C8ED4); /* 0x100C8DAE: fsub dword ptr [esi + 0x100c8ed4] */
    PUSH32(esp, MEM32(esi + 0x100C8EDC)); /* 0x100C8DB4: push dword ptr [esi + 0x100c8edc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C8DBA: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x100C8ED8)); /* 0x100C8DBD: push dword ptr [esi + 0x100c8ed8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8DC3: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C8DC6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8DC7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8DCA: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8DCF: add esp, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C8DD2: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8DD5: fld dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x100C8EE4)); /* 0x100C8DD8: push dword ptr [esi + 0x100c8ee4] */
    PUSH32(esp, MEM32(esi + 0x100C8EE0)); /* 0x100C8DDE: push dword ptr [esi + 0x100c8ee0] */
    PUSH32(esp, ecx); /* 0x100C8DE4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8DE5: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8C50); /* 0x100C8DE8: call 0x100c8c50 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C8DED: fdivr qword ptr [ebp - 0x10] */
    eax = ebp + (-0x4); /* 0x100C8DF0: lea eax, [ebp - 4] */
    PUSH32(esp, 8); /* 0x100C8DF3: push 8 */
    PUSH32(esp, eax); /* 0x100C8DF5: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8DF6: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8DF9: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C8DFC: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100C8DFF: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E04: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C8E07: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C8E0A: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8E0C: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C8E0F: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100C8E11: fsubp st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C8E13: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8E15: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C8E17: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C8E1A: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8E1D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8FA0); /* 0x100C8E20: call 0x100c8fa0 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100C8E25: fmul dword ptr [ebp - 8] */
    eax = ebp + (-0x4); /* 0x100C8E28: lea eax, [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C8E2B: pop ecx */
    PUSH32(esp, 0); /* 0x100C8E2C: push 0 */
    PUSH32(esp, ecx); /* 0x100C8E2E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8E2F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E32: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C8E35: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C8E37: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8E39: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C8E3B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8E3E: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8E41: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8E44: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C8E45: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E4A: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8E4D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100C8E50: pop esi */
    goto L_100C8E74; /* 0x100C8E51: jmp 0x100c8e74 */
L_100C8E53:
    eax = MEM32(ebp + 0xA); /* 0x100C8E53: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100C8E56: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C8E59: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C8E68; /* 0x100C8E5E: je 0x100c8e68 */
L_100C8E60:
    fp_push(*(float*)&MEM32(0x10063C70)); /* 0x100C8E60: fld dword ptr [0x10063c70] */
    goto L_100C8E6A; /* 0x100C8E66: jmp 0x100c8e6a */
L_100C8E68:
    fp_push(0.0); /* 0x100C8E68: fldz  */
L_100C8E6A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8E6A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8E6D: fld dword ptr [ebp - 8] */
    goto L_100C8E74; /* 0x100C8E70: jmp 0x100c8e74 */
L_100C8E72:
    fp_push(1.0); /* 0x100C8E72: fld1  */
L_100C8E74:
    esp = ebp; /* 0x100C8E74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8E76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8E77: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8E78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8E78u);

    goto L_100C8E78;
L_100C8E29:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100C8E29: inc ebp */
    _flag_k = FK_INC;
    _df = 1; /* 0x100C8E2A: cld  */
    ecx = POP32_VAL(esp); /* 0x100C8E2B: pop ecx */
    PUSH32(esp, 0); /* 0x100C8E2C: push 0 */
    PUSH32(esp, ecx); /* 0x100C8E2E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8E2F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E32: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C8E35: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C8E37: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8E39: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C8E3B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8E3E: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8E41: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8E44: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C8E45: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E4A: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8E4D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100C8E50: pop esi */
    goto L_100C8E74; /* 0x100C8E51: jmp 0x100c8e74 */
L_100C8E74:
    esp = ebp; /* 0x100C8E74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8E76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8E77: ret  */
L_100C8E78:
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100C8E78: stc  */
    /* test eax, 0x1A89463Cu */ /* 0x100C8E79: test eax, 0x1a89463c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1A89463Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x3EDA37B1u; /* 0x100C8E7F: mov esi, 0x3eda37b1 */
    /* out: no port I/O under Win32 */ /* 0x100C8E84: out 0xb0, al */
    PUSH32(esp, _seg_cs); /* 0x100C8E86: push cs */
    edi = 0x3E922D87u; /* 0x100C8E87: mov edi, 0x3e922d87 */
    /* nop */ /* 0x100C8E8C: nop  */
    /* nop */ /* 0x100C8E8D: nop  */
    /* nop */ /* 0x100C8E8E: nop  */
    /* nop */ /* 0x100C8E8F: nop  */
    void_lift_trap(0x100C8E90u, "insb byte ptr es:[edi], dx");
    { uint32_t _rv = (MEM32(esi + 0x3D)) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _cf) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0x3D) = _rv; } /* 0x100C8E91: rcl dword ptr [esi + 0x3d] */
    /* cmp MEM32(ebx + (-0x73)), esp */ /* 0x100C8E94: cmp dword ptr [ebx - 0x73], esp */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x73))); _flag_b = (uint32_t)(esp);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp eax, 0x3EDAD072u */ /* 0x100C8E97: cmp eax, 0x3edad072 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3EDAD072u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    void_lift_trap(0x100C8E9Cu, "sti ");
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100C8E29; /* 0x100C8E9D: jae 0x100c8e29 */
L_100C8E9F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx); /* 0x100C8E9F: add ecx, dword ptr ds:[edx] */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C8EE3; /* 0x100C8EA2: jge 0x100c8ee3 */
L_100C8EA4:
    PUSH32(esp, esp); /* 0x100C8EA4: push esp */
    _flag_a = (uint32_t)(MEM32(esp + edi + (-0x42540B1A))); _flag_b = (uint32_t)(ecx);
    MEM32(esp + edi + (-0x42540B1A)) = MEM32(esp + edi + (-0x42540B1A)) & ecx; /* 0x100C8EA5: and dword ptr [esp + edi - 0x42540b1a], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8F16; /* 0x100C8EAC: jne 0x100c8f16 */
L_100C8EAE:
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ebx)); /* 0x100C8EAE: xor byte ptr [esi], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 12339; { RECOMP_REGS_OUT(); return; } /* 0x100C8EB0: ret 0x302f */
L_100C8ED9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8ED9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EDA: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EDB: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EDD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x1100640)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1100640) = (uint8_t)(MEM8(eax + 0x1100640) + HI8(edx)); /* 0x100C8EDF: add byte ptr [eax + 0x1100640], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8EE5; /* falls through past a gap */
L_100C8EE3:
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EE3: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100C8EE5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EE5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + (-0x7FBFF667))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x7FBFF667)) = (uint8_t)(MEM8(edx + (-0x7FBFF667)) + LO8(ebx)); /* 0x100C8EE7: add byte ptr [edx - 0x7fbff667], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(esi); esi += _df * 4; /* 0x100C8EED: lodsd eax, dword ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x3Fu); /* 0x100C8EEE: add al, 0x3f */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x06100640u; /* 0x100C8EF0: mov eax, 0x6100640 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x100C8EF7: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8EF9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EFA: push es */
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EFB: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100C8EFF: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8F01: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F03: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = ebx; /* 0x100C8F04: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_100C8ED9; /* 0x100C8F05: jg 0x100c8ed9 */
L_100C8F07:
    /* in: no port I/O under Win32 */ /* 0x100C8F07: in al, 0x40 */
    PUSH32(esp, _seg_es); /* 0x100C8F0A: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F0B: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + LO8(eax)); /* 0x100C8F0F: add byte ptr [ecx + eax*2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F12: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F13: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F17; /* falls through past a gap */
L_100C8F16:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F18; /* falls through past a gap */
L_100C8F17:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F19; /* falls through past a gap */
L_100C8F18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F1A; /* falls through past a gap */
L_100C8F19:
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x40) = (uint8_t)(MEM8(eax + 0x40) + HI8(eax)); /* 0x100C8F19: add byte ptr [eax + 0x40], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F1C; /* falls through past a gap */
L_100C8F1A:
    PUSHAD(); /* 0x100C8F1A: pushal  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F1B: inc eax */
    _flag_k = FK_INC;
L_100C8F1C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8F1C: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x100C8F1D: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100C8F1E: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | 0x41u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x41u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x41u); /* 0x100C8F1F: or al, 0x41 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F22: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F23: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + HI8(ecx)); /* 0x100C8F27: add byte ptr [ecx + eax*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F2A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F2B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x100C8F2F: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100C8F31u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C8E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8E90u);

    goto L_100C8E90;
L_100C8E29:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100C8E29: inc ebp */
    _flag_k = FK_INC;
    _df = 1; /* 0x100C8E2A: cld  */
    ecx = POP32_VAL(esp); /* 0x100C8E2B: pop ecx */
    PUSH32(esp, 0); /* 0x100C8E2C: push 0 */
    PUSH32(esp, ecx); /* 0x100C8E2E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C8E2F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E32: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C8E35: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C8E37: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C8E39: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C8E3B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C8E3E: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C8E41: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C8E44: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C8E45: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C8E4A: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C8E4D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100C8E50: pop esi */
    goto L_100C8E74; /* 0x100C8E51: jmp 0x100c8e74 */
L_100C8E74:
    esp = ebp; /* 0x100C8E74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C8E76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8E77: ret  */
L_100C8E90:
    void_lift_trap(0x100C8E90u, "insb byte ptr es:[edi], dx");
    { uint32_t _rv = (MEM32(esi + 0x3D)) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _cf) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0x3D) = _rv; } /* 0x100C8E91: rcl dword ptr [esi + 0x3d] */
    /* cmp MEM32(ebx + (-0x73)), esp */ /* 0x100C8E94: cmp dword ptr [ebx - 0x73], esp */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x73))); _flag_b = (uint32_t)(esp);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* cmp eax, 0x3EDAD072u */ /* 0x100C8E97: cmp eax, 0x3edad072 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3EDAD072u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    void_lift_trap(0x100C8E9Cu, "sti ");
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100C8E29; /* 0x100C8E9D: jae 0x100c8e29 */
L_100C8E9F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx); /* 0x100C8E9F: add ecx, dword ptr ds:[edx] */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C8EE3; /* 0x100C8EA2: jge 0x100c8ee3 */
L_100C8EA4:
    PUSH32(esp, esp); /* 0x100C8EA4: push esp */
    _flag_a = (uint32_t)(MEM32(esp + edi + (-0x42540B1A))); _flag_b = (uint32_t)(ecx);
    MEM32(esp + edi + (-0x42540B1A)) = MEM32(esp + edi + (-0x42540B1A)) & ecx; /* 0x100C8EA5: and dword ptr [esp + edi - 0x42540b1a], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8F16; /* 0x100C8EAC: jne 0x100c8f16 */
L_100C8EAE:
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ebx)); /* 0x100C8EAE: xor byte ptr [esi], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 12339; { RECOMP_REGS_OUT(); return; } /* 0x100C8EB0: ret 0x302f */
L_100C8ED9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8ED9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EDA: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EDB: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EDD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x1100640)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1100640) = (uint8_t)(MEM8(eax + 0x1100640) + HI8(edx)); /* 0x100C8EDF: add byte ptr [eax + 0x1100640], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8EE5; /* falls through past a gap */
L_100C8EE3:
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EE3: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100C8EE5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EE5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + (-0x7FBFF667))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x7FBFF667)) = (uint8_t)(MEM8(edx + (-0x7FBFF667)) + LO8(ebx)); /* 0x100C8EE7: add byte ptr [edx - 0x7fbff667], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(esi); esi += _df * 4; /* 0x100C8EED: lodsd eax, dword ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x3Fu); /* 0x100C8EEE: add al, 0x3f */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x06100640u; /* 0x100C8EF0: mov eax, 0x6100640 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x100C8EF7: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8EF9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EFA: push es */
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EFB: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100C8EFF: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8F01: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F03: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = ebx; /* 0x100C8F04: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_100C8ED9; /* 0x100C8F05: jg 0x100c8ed9 */
L_100C8F07:
    /* in: no port I/O under Win32 */ /* 0x100C8F07: in al, 0x40 */
    PUSH32(esp, _seg_es); /* 0x100C8F0A: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F0B: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + LO8(eax)); /* 0x100C8F0F: add byte ptr [ecx + eax*2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F12: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F13: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F17; /* falls through past a gap */
L_100C8F16:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F18; /* falls through past a gap */
L_100C8F17:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F19; /* falls through past a gap */
L_100C8F18:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F1A; /* falls through past a gap */
L_100C8F19:
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x40) = (uint8_t)(MEM8(eax + 0x40) + HI8(eax)); /* 0x100C8F19: add byte ptr [eax + 0x40], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100C8F1C; /* falls through past a gap */
L_100C8F1A:
    PUSHAD(); /* 0x100C8F1A: pushal  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F1B: inc eax */
    _flag_k = FK_INC;
L_100C8F1C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8F1C: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x100C8F1D: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100C8F1E: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | 0x41u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x41u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x41u); /* 0x100C8F1F: or al, 0x41 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F22: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F23: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + HI8(ecx)); /* 0x100C8F27: add byte ptr [ecx + eax*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F2A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F2B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x100C8F2F: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100C8F31u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C8EA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8EA4u);

L_100C8EA4:
    PUSH32(esp, esp); /* 0x100C8EA4: push esp */
    _flag_a = (uint32_t)(MEM32(esp + edi + (-0x42540B1A))); _flag_b = (uint32_t)(ecx);
    MEM32(esp + edi + (-0x42540B1A)) = MEM32(esp + edi + (-0x42540B1A)) & ecx; /* 0x100C8EA5: and dword ptr [esp + edi - 0x42540b1a], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C8F16; /* 0x100C8EAC: jne 0x100c8f16 */
L_100C8EAE:
    _flag_a = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(esi) ^ HI8(ebx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) ^ HI8(ebx)); /* 0x100C8EAE: xor byte ptr [esi], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 12339; { RECOMP_REGS_OUT(); return; } /* 0x100C8EB0: ret 0x302f */
L_100C8F16:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F18: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x100C8F1A: pushal  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F1B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8F1C: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x100C8F1D: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100C8F1E: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | 0x41u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x41u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x41u); /* 0x100C8F1F: or al, 0x41 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F22: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F23: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + HI8(ecx)); /* 0x100C8F27: add byte ptr [ecx + eax*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F2A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F2B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x100C8F2F: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100C8F31u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C8EB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8EB8u);

L_100C8EB8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C8EB8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + esi; /* 0x100C8EB9: add dword ptr [edi], esi */
    _flag_k = FK_ADD;
    /* cmp eax, 0x3E1C6E1Eu */ /* 0x100C8EBB: cmp eax, 0x3e1c6e1e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E1C6E1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EC0: sbb eax, dword ptr es:[edx] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x100C8EC3u, "aas ");
    eax = 0x6A3F2661u; /* 0x100C8EC4: mov eax, 0x6a3f2661 */
    _st[0] = (double)*(float*)ADDR(esi + 0x3F) / _st[0]; /* 0x100C8EC9: fdivr dword ptr [esi + 0x3f] */
    /* nop */ /* 0x100C8ECC: nop  */
    /* nop */ /* 0x100C8ECD: nop  */
    /* nop */ /* 0x100C8ECE: nop  */
    /* nop */ /* 0x100C8ECF: nop  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8ED0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100C8F13; } /* 0x100C8ED2: loopne 0x100c8f13 */
L_100C8ED4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100C8ED4: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = eax, _sb = 0x0640903Fu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8ED6: sbb eax, 0x640903f */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100C8EDB; /* falls through past a gap */
L_100C8ED9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8ED9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EDA: push es */
L_100C8EDB:
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EDB: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EDD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x1100640)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1100640) = (uint8_t)(MEM8(eax + 0x1100640) + HI8(edx)); /* 0x100C8EDF: add byte ptr [eax + 0x1100640], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EE5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + (-0x7FBFF667))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x7FBFF667)) = (uint8_t)(MEM8(edx + (-0x7FBFF667)) + LO8(ebx)); /* 0x100C8EE7: add byte ptr [edx - 0x7fbff667], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(esi); esi += _df * 4; /* 0x100C8EED: lodsd eax, dword ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x3Fu); /* 0x100C8EEE: add al, 0x3f */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x06100640u; /* 0x100C8EF0: mov eax, 0x6100640 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ebx)); /* 0x100C8EF7: add al, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8EF9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C8EFA: push es */
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8EFB: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8EFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100C8EFF: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C8F01: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C8F03: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = ebx; /* 0x100C8F04: xchg ebx, eax */
      ebx = eax;
      eax = _tmp; }
    RECOMP_BACKEDGE();
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_100C8ED9; /* 0x100C8F05: jg 0x100c8ed9 */
L_100C8F07:
    /* in: no port I/O under Win32 */ /* 0x100C8F07: in al, 0x40 */
    PUSH32(esp, _seg_es); /* 0x100C8F0A: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F0B: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + LO8(eax)); /* 0x100C8F0F: add byte ptr [ecx + eax*2], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F12: push es */
L_100C8F13:
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F13: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x40) = (uint8_t)(MEM8(eax + 0x40) + HI8(eax)); /* 0x100C8F19: add byte ptr [eax + 0x40], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C8F1C: dec ecx */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edx; /* 0x100C8F1D: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100C8F1E: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | 0x41u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x41u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x41u); /* 0x100C8F1F: or al, 0x41 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F22: push es */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F23: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2) = (uint8_t)(MEM8(ecx + eax * 2) + HI8(ecx)); /* 0x100C8F27: add byte ptr [ecx + eax*2], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_es); /* 0x100C8F2A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C8F2B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C8F2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ecx)); /* 0x100C8F2F: add ch, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100C8F31u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C8FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8FA0u);

L_100C8FA0:
    PUSH32(esp, ebp); /* 0x100C8FA0: push ebp */
    ebp = esp; /* 0x100C8FA1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8FA3: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C8FA6: push ecx */
    PUSH32(esp, ecx); /* 0x100C8FA7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C8FA8: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366FA); /* 0x100C8FAB: call 0x100366fa */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C8FB0: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C8FB3: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C8FB6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C8FB7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C8FB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8FB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8FBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8FBAu);

L_100C8FBA:
    PUSH32(esp, ebp); /* 0x100C8FBA: push ebp */
    ebp = esp; /* 0x100C8FBB: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x100C8FBD: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x100C8FC0: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8FC3: dec eax */
    _flag_k = FK_DEC;
    fp_push(*(double*)ADDR(ecx)); /* 0x100C8FC4: fld qword ptr [ecx] */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100C8FDD; /* 0x100C8FC6: js 0x100c8fdd */
L_100C8FC8:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C8FC8: fld qword ptr [ebp + 8] */
    goto L_100C8FCF; /* 0x100C8FCB: jmp 0x100c8fcf */
L_100C8FCD:
    fp_xch(1); /* 0x100C8FCD: fxch st(1) */
L_100C8FCF:
    _st[1] *= _st[0]; /* 0x100C8FCF: fmul st(1), st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x100C8FD1: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8FD4: dec eax */
    _flag_k = FK_DEC;
    fp_xch(1); /* 0x100C8FD5: fxch st(1) */
    _st[0] += *(double*)ADDR(ecx); /* 0x100C8FD7: fadd qword ptr [ecx] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_100C8FCD; /* 0x100C8FD9: jns 0x100c8fcd */
L_100C8FDB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C8FDB: fstp st(1) */
L_100C8FDD:
    ebp = POP32_VAL(esp); /* 0x100C8FDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C8FDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C8FDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C8FDFu);

L_100C8FDF:
    PUSH32(esp, ebp); /* 0x100C8FDF: push ebp */
    ebp = esp; /* 0x100C8FE0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C8FE2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C8FE5: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C8FE8: push esi */
    PUSH32(esp, eax); /* 0x100C8FE9: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C8FEA: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C8FEF: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C8FF0: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C8FF1: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C91B2; /* 0x100C8FF4: je 0x100c91b2 */
L_100C8FFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C8FFA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9199; /* 0x100C8FFB: je 0x100c9199 */
L_100C9001:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9001: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9194; /* 0x100C9002: je 0x100c9194 */
L_100C9008:
    fp_push(*(double*)ADDR(0x10064070)); /* 0x100C9008: fld qword ptr [0x10064070] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C900E: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9011: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9013: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9015: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C9017: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9031; /* 0x100C901A: jp 0x100c9031 */
L_100C901C:
    PUSH32(esp, ecx); /* 0x100C901C: push ecx */
    PUSH32(esp, ecx); /* 0x100C901D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C901E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C9680); /* 0x100C9021: call 0x100c9680 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C9026: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C9028: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9029: pop ecx */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C902A: fsubrp st(1) */
    goto L_100C91B4; /* 0x100C902C: jmp 0x100c91b4 */
L_100C9031:
    fp_push(*(double*)ADDR(0x10064088)); /* 0x100C9031: fld qword ptr [0x10064088] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9037: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9039: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C903B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C90CB; /* 0x100C903E: jne 0x100c90cb */
L_100C9044:
    fp_push(1.0); /* 0x100C9044: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9046: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9048: fnstsw ax */
    PUSH32(esp, 8); /* 0x100C904A: push 8 */
    /* test HI8(eax), 0x41u */ /* 0x100C904C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C908E; /* 0x100C904F: jne 0x100c908e */
L_100C9051:
    _st[0] -= *(double*)ADDR(0x10064078); /* 0x100C9051: fsub qword ptr [0x10064078] */
    PUSH32(esp, 0x100C91C0u); /* 0x100C9057: push 0x100c91c0 */
    PUSH32(esp, ecx); /* 0x100C905C: push ecx */
    PUSH32(esp, ecx); /* 0x100C905D: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C905E: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9061: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C9064: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C9069: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C906C: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C906F: fld qword ptr [ebp - 8] */
    PUSH32(esp, 9); /* 0x100C9072: push 9 */
    PUSH32(esp, 0x100C9208u); /* 0x100C9074: push 0x100c9208 */
    PUSH32(esp, ecx); /* 0x100C9079: push ecx */
    PUSH32(esp, ecx); /* 0x100C907A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C907B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C907E: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C9083: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C9086: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C91B4; /* 0x100C9089: jmp 0x100c91b4 */
L_100C908E:
    _st[0] -= *(double*)ADDR(0x10064080); /* 0x100C908E: fsub qword ptr [0x10064080] */
    PUSH32(esp, 0x100C9258u); /* 0x100C9094: push 0x100c9258 */
    PUSH32(esp, ecx); /* 0x100C9099: push ecx */
    PUSH32(esp, ecx); /* 0x100C909A: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C909B: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C909E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C90A1: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C90A6: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C90A9: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C90AC: fld qword ptr [ebp - 8] */
    PUSH32(esp, 9); /* 0x100C90AF: push 9 */
    PUSH32(esp, 0x100C92A0u); /* 0x100C90B1: push 0x100c92a0 */
    PUSH32(esp, ecx); /* 0x100C90B6: push ecx */
    PUSH32(esp, ecx); /* 0x100C90B7: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C90B8: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C90BB: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C90C0: fdivr qword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C90C3: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C91B4; /* 0x100C90C6: jmp 0x100c91b4 */
L_100C90CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C90CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100C92F0u; /* 0x100C90CD: mov ecx, 0x100c92f0 */
L_100C90D2:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C90D2: fcom qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C90D4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C90D6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C90F5; /* 0x100C90D9: jnp 0x100c90f5 */
L_100C90DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C90DB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100C90DC: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, 6 */ /* 0x100C90DF: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100C90D2; /* 0x100C90E2: jb 0x100c90d2 */
L_100C90E4:
    PUSH32(esp, 0x10u); /* 0x100C90E4: push 0x10 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C90E6: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C90E8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C90ED: pop ecx */
L_100C90EE:
    fp_push(0.0); /* 0x100C90EE: fldz  */
    goto L_100C91B4; /* 0x100C90F0: jmp 0x100c91b4 */
L_100C90F5:
    fp_push(1.0); /* 0x100C90F5: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C90F7: fdivrp st(1) */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x100C90F9: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x100C90F9: shl esi, 5 */
    PUSH32(esp, MEM32(esi + 0x100C9304)); /* 0x100C90FC: push dword ptr [esi + 0x100c9304] */
    _st[0] -= *(double*)ADDR(esi + 0x100C92F8); /* 0x100C9102: fsub qword ptr [esi + 0x100c92f8] */
    PUSH32(esp, MEM32(esi + 0x100C9300)); /* 0x100C9108: push dword ptr [esi + 0x100c9300] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C910E: fst qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C9111: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C9112: fst qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C9115: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9116: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C9119: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C911E: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C9121: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C9124: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(esi + 0x100C930C)); /* 0x100C9127: push dword ptr [esi + 0x100c930c] */
    PUSH32(esp, MEM32(esi + 0x100C9308)); /* 0x100C912D: push dword ptr [esi + 0x100c9308] */
    PUSH32(esp, ecx); /* 0x100C9133: push ecx */
    PUSH32(esp, ecx); /* 0x100C9134: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9135: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C9138: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C913D: fdivr qword ptr [ebp - 0x18] */
    eax = ebp + (-0x8); /* 0x100C9140: lea eax, [ebp - 8] */
    PUSH32(esp, 0x11u); /* 0x100C9143: push 0x11 */
    PUSH32(esp, eax); /* 0x100C9145: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C9146: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9149: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C914C: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C002B); /* 0x100C914F: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C9154: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C9157: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x100C915A: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C915C: fld qword ptr [ebp + 8] */
    _st[1] -= _st[0]; /* 0x100C915F: fsub st(1), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9161: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C9163: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9165: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366FA); /* 0x100C9168: call 0x100366fa */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C916D: fmul qword ptr [ebp - 0x18] */
    eax = ebp + (-0x8); /* 0x100C9170: lea eax, [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C9173: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C9176: pop ecx */
    _st[0] *= _st[0]; /* 0x100C9177: fmul st(0), st(0) */
    ecx = POP32_VAL(esp); /* 0x100C9179: pop ecx */
    PUSH32(esp, 0); /* 0x100C917A: push 0 */
    PUSH32(esp, ecx); /* 0x100C917C: push ecx */
    PUSH32(esp, ecx); /* 0x100C917D: push ecx */
    _st[0] = -_st[0]; /* 0x100C917E: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C9180: fstp qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9183: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C9186: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C9187: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C918C: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C918F: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C91B4; /* 0x100C9192: jmp 0x100c91b4 */
L_100C9194:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9194: fld qword ptr [ebp + 8] */
    goto L_100C91B4; /* 0x100C9197: jmp 0x100c91b4 */
L_100C9199:
    eax = MEM32(ebp + 0xE); /* 0x100C9199: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C919C: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C919F: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C90EE; /* 0x100C91A4: je 0x100c90ee */
L_100C91AA:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C91AA: fld qword ptr [0x10063be8] */
    goto L_100C91B4; /* 0x100C91B0: jmp 0x100c91b4 */
L_100C91B2:
    fp_push(1.0); /* 0x100C91B2: fld1  */
L_100C91B4:
    esi = POP32_VAL(esp); /* 0x100C91B4: pop esi */
    esp = ebp; /* 0x100C91B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C91B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C91B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C91C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C91C0u);

L_100C91C0:
    /* test eax, 0x08EBE29Bu */ /* 0x100C91C0: test eax, 0x8ebe29b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08EBE29Bu);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C91C5:
    if (ecx == 0) goto L_100C91F1; /* 0x100C91C5: jecxz 0x100c91f1 */
L_100C91C7:
    void_lift_trap(0x100C91C7u, "aas ");
    SET_LO8(ebx, 0x8Du); /* 0x100C91C8: mov bl, 0x8d */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + (-0x40A3A6A3))) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + MEM8(esi + (-0x40A3A6A3))); /* 0x100C91CA: add bh, byte ptr [esi - 0x40a3a6a3] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C920E; /* 0x100C91D0: jge 0x100c920e */
L_100C91D2:
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C91D2: retf  */
L_100C91F1:
    PUSHAD(); /* 0x100C91F1: pushal  */
    { uint32_t _tmp = MEM8(ebx + 0x4D3FD842); /* 0x100C91F2: xchg byte ptr [ebx + 0x4d3fd842], dl */
      MEM8(ebx + 0x4D3FD842) = (uint8_t)(LO8(edx));
      SET_LO8(edx, _tmp); }
    void_lift_trap(0x100C91F9u, "int1 ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C91FA: inc ecx */
    _flag_k = FK_INC;
    _st[0] = *(double*)ADDR(edi) - _st[0]; /* 0x100C91FB: fsubr qword ptr [edi] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C91FD: fsubrp st(0) */
    edi = 0xBFD69483u; /* 0x100C91FF: mov edi, 0xbfd69483 */
    { uint32_t _tmp = MEM8(eax + (-0x2E)); /* 0x100C9204: xchg byte ptr [eax - 0x2e], al */
      MEM8(eax + (-0x2E)) = (uint8_t)(LO8(eax));
      SET_LO8(eax, _tmp); }
    void_lift_trap(0x100C9207u, "aas ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C9208: dec ecx */
    _flag_k = FK_DEC;
    eax = 0xB31F5AC7u; /* 0x100C9209: mov eax, 0xb31f5ac7 */
L_100C920E:
    void_lift_trap(0x100C920Eu, "iretd ");
    esi = 0x3D88A1D9u; /* 0x100C920F: mov esi, 0x3d88a1d9 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100C91C5; /* 0x100C9214: jbe 0x100c91c5 */
L_100C9216:
    _flag_a = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x3Fu); /* 0x100C9216: xor al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x265EF517); /* 0x100C9218: mov eax, dword ptr [0x265ef517] */
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C921D: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C921E: dec edi */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C921Fu, "aas ");
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C9220: retf 0x2345 */
    RECOMP_REGS_OUT();
}

void sub_100C9208(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9208u);

    goto L_100C9208;
L_100C91C5:
    if (ecx == 0) goto L_100C91F1; /* 0x100C91C5: jecxz 0x100c91f1 */
L_100C91C7:
    void_lift_trap(0x100C91C7u, "aas ");
    SET_LO8(ebx, 0x8Du); /* 0x100C91C8: mov bl, 0x8d */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + (-0x40A3A6A3))) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + MEM8(esi + (-0x40A3A6A3))); /* 0x100C91CA: add bh, byte ptr [esi - 0x40a3a6a3] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_100C920E; /* 0x100C91D0: jge 0x100c920e */
L_100C91D2:
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C91D2: retf  */
L_100C91F1:
    PUSHAD(); /* 0x100C91F1: pushal  */
    { uint32_t _tmp = MEM8(ebx + 0x4D3FD842); /* 0x100C91F2: xchg byte ptr [ebx + 0x4d3fd842], dl */
      MEM8(ebx + 0x4D3FD842) = (uint8_t)(LO8(edx));
      SET_LO8(edx, _tmp); }
    void_lift_trap(0x100C91F9u, "int1 ");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C91FA: inc ecx */
    _flag_k = FK_INC;
    _st[0] = *(double*)ADDR(edi) - _st[0]; /* 0x100C91FB: fsubr qword ptr [edi] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C91FD: fsubrp st(0) */
    edi = 0xBFD69483u; /* 0x100C91FF: mov edi, 0xbfd69483 */
    { uint32_t _tmp = MEM8(eax + (-0x2E)); /* 0x100C9204: xchg byte ptr [eax - 0x2e], al */
      MEM8(eax + (-0x2E)) = (uint8_t)(LO8(eax));
      SET_LO8(eax, _tmp); }
    void_lift_trap(0x100C9207u, "aas ");
L_100C9208:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C9208: dec ecx */
    _flag_k = FK_DEC;
    eax = 0xB31F5AC7u; /* 0x100C9209: mov eax, 0xb31f5ac7 */
L_100C920E:
    void_lift_trap(0x100C920Eu, "iretd ");
    esi = 0x3D88A1D9u; /* 0x100C920F: mov esi, 0x3d88a1d9 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100C91C5; /* 0x100C9214: jbe 0x100c91c5 */
L_100C9216:
    _flag_a = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x3Fu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x3Fu); /* 0x100C9216: xor al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x265EF517); /* 0x100C9218: mov eax, dword ptr [0x265ef517] */
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C921D: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C921E: dec edi */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C921Fu, "aas ");
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100C9220: retf 0x2345 */
    RECOMP_REGS_OUT();
}

void sub_100C9258(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9258u);

L_100C9258:
    ecx = POP32_VAL(esp); /* 0x100C9258: pop ecx */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & HI8(edx)); /* 0x100C9259: and byte ptr [esi], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _sa = MEM8(edi), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C925B: sbb byte ptr [edi], ch */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((esp ^ eax)); _flag_b = (uint32_t)((esp ^ eax));
    esp = esp ^ eax; /* 0x100C925D: xor esp, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C925F: dec edx */
    _flag_k = FK_DEC;
    /* in: no port I/O under Win32 */ /* 0x100C9261: in eax, 0x99 */
    SET_LO8(ebx, 0x99u); /* 0x100C9263: mov bl, 0x99 */
    _flag_a = (eax >> 8) & 0xD5u; _flag_b = 0; _cf = _flag_a & 1u; _flag_k = FK_EFLAGS; /* 0x100C9265: sahf  */
    _flag_k = FK_EFLAGS;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi); /* 0x100C9266: idiv dword ptr [esi] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    SET_LO8(eax, MEM8(0x4BE59786)); /* 0x100C9268: mov al, byte ptr [0x4be59786] */
    ebx = POP32_VAL(esp); /* 0x100C926D: pop ebx */
    _flag_a = (uint32_t)(MEM32(edi + (-0x3D5FBC2C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + (-0x3D5FBC2C)) = MEM32(edi + (-0x3D5FBC2C)) - edi; /* 0x100C926E: sub dword ptr [edi - 0x3d5fbc2c], edi */
    _flag_k = FK_CMP;
    esi = ebp; /* 0x100C9274: mov esi, ebp */
    void_lift_trap(0x100C9276u, "bound edi, qword ptr [edi + 0x4fb336c9]");
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C927C: dec ecx */
    _flag_k = FK_DEC;
    void_lift_trap(0x100C927Du, "sti ");
    { uint32_t _tmp = esi; /* 0x100C927E: xchg esi, eax */
      esi = eax;
      eax = _tmp; }
    void_lift_trap(0x100C927Fu, "aas ");
    edi = 0x03AE0DE4u; /* 0x100C9280: mov edi, 0x3ae0de4 */
    _flag_a = (uint32_t)((LO8(eax) | 0xB5u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xB5u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xB5u); /* 0x100C9285: or al, 0xb5 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0x7CD14E00u; /* 0x100C9287: mov edi, 0x7cd14e00 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C928C: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C928D: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi); _seg_es = MEM16(edi + 4); /* 0x100C928E: les edi, ptr [edi] */
    void_lift_trap(0x100C9290u, "fcmove st(0), st(3)");
    SET_LO8(ebx, 0xACu); /* 0x100C9292: mov bl, 0xac */
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C9294: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C9295: stosb byte ptr es:[edi], al */
    edi = MEM32(edi + (-0x75F26CF9)); _seg_es = MEM16(edi + (-0x75F26CF9) + 4); /* 0x100C9296: les edi, ptr [edi - 0x75f26cf9] */
    RECOMP_ITAIL(0x100C929Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C92A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C92A0u);

L_100C92A0:
    /* in: no port I/O under Win32 */ /* 0x100C92A0: in al, dx */
    void_lift_trap(0x100C92A1u, "hlt ");
    void_lift_trap(0x100C92A2u, "int 0xc2");
    goto L_100C92A4; /* falls through past a gap */
L_100C92A3:
    RECOMP_FLAGS_OUT(); esp += 23488; { RECOMP_REGS_OUT(); return; } /* 0x100C92A3: ret 0x5bbc */
L_100C92A4:
    esp = 0x8E3F215Bu; /* 0x100C92A4: mov esp, 0x8e3f215b */
    { uint32_t _a, _b; _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100C92A9: cmpsb byte ptr [esi], byte ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x100C92AAu, "salc ");
    PUSHAD(); /* 0x100C92AB: pushal  */
    RECOMP_BACKEDGE();
    if (CMP_O(_flag_a, _flag_b)) goto L_100C92A3; /* 0x100C92AC: jo 0x100c92a3 */
L_100C92AE:
    PUSH32(esp, ecx); /* 0x100C92AE: push ecx */
    void_lift_trap(0x100C92AFu, "aas ");
    PUSH32(esp, esp); /* 0x100C92B0: push esp */
    void_lift_trap(0x100C92B1u, "daa ");
    /* fwait */ /* 0x100C92B2: wait  */
    { uint32_t _fl = POP32_VAL(esp); /* 0x100C92B3: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xBEu) << 24;
    SET_LO8(eax, LO8(eax) & 0xBEu); /* 0x100C92B4: and al, 0xbe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C92F7; /* 0x100C92B6: ja 0x100c92f7 */
L_100C92B8:
    eax = MEM32(esi); esi += _df * 4; /* 0x100C92B8: lodsd eax, dword ptr [esi] */
    esi = 0xB9ADF94Du; /* 0x100C92B9: mov esi, 0xb9adf94d */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C92BE: cwde  */
    void_lift_trap(0x100C92BFu, "aas ");
    void_lift_trap(0x100C92C0u, "int3 ");
L_100C92F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C92F7: inc eax */
    _flag_k = FK_INC;
    _df = -1; /* 0x100C92F8: std  */
    /* in: no port I/O under Win32 */ /* 0x100C92F9: in eax, 0x9d */
    { uint32_t _tmp = MEM32(ebx + (-0x27C01E0E)); /* 0x100C92FB: xchg dword ptr [ebx - 0x27c01e0e], ecx */
      MEM32(ebx + (-0x27C01E0E)) = ecx;
      ecx = _tmp; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9301: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C9302: push es */
    { uint32_t _aa = MEM8(0x48000000), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9303: adc byte ptr [0x48000000], cl */
      MEM8(0x48000000) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9309: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C930A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C930B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C930D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C930F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9311: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9313: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100C9315: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9317: inc eax */
    _flag_k = FK_INC;
    void_lift_trap(0x100C9318u, "arpl si, cx");
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C931A: cwde  */
    _flag_a = (uint32_t)((esp ^ esi)); _flag_b = (uint32_t)((esp ^ esi));
    esp = esp ^ esi; /* 0x100C931B: xor esp, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = _seg_ds; /* 0x100C931D: mov ecx, ds */
    void_lift_trap(0x100C931Fu, "aas ");
    eax = POP32_VAL(esp); /* 0x100C9320: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9321: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C9322: push es */
    { uint32_t _aa = MEM8((-0x38000000)), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9323: adc byte ptr [0xc8000000], cl */
      MEM8((-0x38000000)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9329: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C932A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C932B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C932D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C932F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9331: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9333: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100C9335: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9337: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C9338: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C9339: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933A: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933B: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933C: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933D: stosb byte ptr es:[edi], al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((MEM8(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((MEM8(edi)) >> 7) & 1u)); /* 0x100C933E: sar byte ptr [edi], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edi)) >> ((LO8(ecx)) & 31)))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edi)) >> ((LO8(ecx)) & 31)));
    _st[0] += (double)*(float*)ADDR(edx + 0x6); /* 0x100C9340: fadd dword ptr [edx + 6] */
    { uint32_t _aa = MEM8(0x48000000), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9343: adc byte ptr [0x48000000], cl */
      MEM8(0x48000000) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C9349: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C934A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C934B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C934D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3F7CED92))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3F7CED92)) = (uint8_t)(MEM8(eax + (-0x3F7CED92)) + LO8(ebx)); /* 0x100C934F: add byte ptr [eax - 0x3f7ced92], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C9355: dec edx */
    _flag_k = FK_DEC;
    _seg_ss = POP32_VAL(esp); /* 0x100C9356: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9357: inc eax */
    _flag_k = FK_INC;
    RECOMP_ITAIL(0x100C9358u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C92F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C92F0u);

L_100C92F0:
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C92F0: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C92F2: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ MEM32(ebx))); _flag_b = (uint32_t)((esi ^ MEM32(ebx)));
    esi = esi ^ MEM32(ebx); /* 0x100C92F4: xor esi, dword ptr [ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + (-0x3))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + (-0x3)) = MEM32(eax + (-0x3)) + eax; /* 0x100C92F6: add dword ptr [eax - 3], eax */
    _flag_k = FK_ADD;
    /* in: no port I/O under Win32 */ /* 0x100C92F9: in eax, 0x9d */
    { uint32_t _tmp = MEM32(ebx + (-0x27C01E0E)); /* 0x100C92FB: xchg dword ptr [ebx - 0x27c01e0e], ecx */
      MEM32(ebx + (-0x27C01E0E)) = ecx;
      ecx = _tmp; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9301: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C9302: push es */
    { uint32_t _aa = MEM8(0x48000000), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9303: adc byte ptr [0x48000000], cl */
      MEM8(0x48000000) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9309: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C930A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C930B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C930D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C930F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9311: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9313: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x100C9315: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9317: inc eax */
    _flag_k = FK_INC;
    void_lift_trap(0x100C9318u, "arpl si, cx");
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C931A: cwde  */
    _flag_a = (uint32_t)((esp ^ esi)); _flag_b = (uint32_t)((esp ^ esi));
    esp = esp ^ esi; /* 0x100C931B: xor esp, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = _seg_ds; /* 0x100C931D: mov ecx, ds */
    void_lift_trap(0x100C931Fu, "aas ");
    eax = POP32_VAL(esp); /* 0x100C9320: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9321: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C9322: push es */
    { uint32_t _aa = MEM8((-0x38000000)), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9323: adc byte ptr [0xc8000000], cl */
      MEM8((-0x38000000)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C9329: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C932A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C932B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C932D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C932F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9331: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C9333: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100C9335: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9337: inc eax */
    _flag_k = FK_INC;
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C9338: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C9339: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933A: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933B: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933C: stosb byte ptr es:[edi], al */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x100C933D: stosb byte ptr es:[edi], al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((MEM8(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((MEM8(edi)) >> 7) & 1u)); /* 0x100C933E: sar byte ptr [edi], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edi)) >> ((LO8(ecx)) & 31)))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(edi)) >> ((LO8(ecx)) & 31)));
    _st[0] += (double)*(float*)ADDR(edx + 0x6); /* 0x100C9340: fadd dword ptr [edx + 6] */
    { uint32_t _aa = MEM8(0x48000000), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C9343: adc byte ptr [0x48000000], cl */
      MEM8(0x48000000) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C9349: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, _seg_es); /* 0x100C934A: push es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100C934B: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100C934D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x3F7CED92))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x3F7CED92)) = (uint8_t)(MEM8(eax + (-0x3F7CED92)) + LO8(ebx)); /* 0x100C934F: add byte ptr [eax - 0x3f7ced92], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C9355: dec edx */
    _flag_k = FK_DEC;
    _seg_ss = POP32_VAL(esp); /* 0x100C9356: pop ss */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9357: inc eax */
    _flag_k = FK_INC;
    RECOMP_ITAIL(0x100C9358u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100C93B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C93B0u);

L_100C93B0:
    PUSH32(esp, ebp); /* 0x100C93B0: push ebp */
    ebp = esp; /* 0x100C93B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C93B3: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C93B4: fld dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x100C93B7: lea eax, [ebp + 8] */
    fp_push(_st[0]); /* 0x100C93BA: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C93BC: fchs  */
    fp_push(_st[1]); /* 0x100C93BE: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C93C0: fmulp st(1) */
    PUSH32(esp, 0); /* 0x100C93C2: push 0 */
    PUSH32(esp, ecx); /* 0x100C93C4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C93C5: fstp dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x100C9420)); /* 0x100C93C8: fld qword ptr [0x100c9420] */
    _st[0] *= _st[1]; /* 0x100C93CE: fmul st(1) */
    _st[0] = *(double*)ADDR(0x100C9428) - _st[0]; /* 0x100C93D0: fsubr qword ptr [0x100c9428] */
    fp_push(_st[1]); /* 0x100C93D6: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C93D8: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C9430); /* 0x100C93DA: fadd qword ptr [0x100c9430] */
    fp_push(_st[1]); /* 0x100C93E0: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C93E2: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C9440); /* 0x100C93E4: fadd qword ptr [0x100c9440] */
    fp_push(_st[1]); /* 0x100C93EA: fld st(1) */
    _st[0] *= *(double*)ADDR(0x100C9438); /* 0x100C93EC: fmul qword ptr [0x100c9438] */
    _st[0] += *(double*)ADDR(0x100C9450); /* 0x100C93F2: fadd qword ptr [0x100c9450] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C93F8: fmulp st(2) */
    fp_xch(1); /* 0x100C93FA: fxch st(1) */
    _st[0] += *(double*)ADDR(0x100C9448); /* 0x100C93FC: fadd qword ptr [0x100c9448] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C9402: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9404: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9407: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C940A: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C940D: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C940E: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9413: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C9416: add esp, 0xc */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100C9419: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C941B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C941C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9458u);

L_100C9458:
    PUSH32(esp, ebp); /* 0x100C9458: push ebp */
    ebp = esp; /* 0x100C9459: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C945B: push ecx */
    eax = ebp + 0x8; /* 0x100C945C: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C945F: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C9460: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C9465: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C9466: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C9467: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C956D; /* 0x100C946A: je 0x100c956d */
L_100C9470:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9470: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C954E; /* 0x100C9471: je 0x100c954e */
L_100C9477:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9477: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C956D; /* 0x100C9478: je 0x100c956d */
L_100C947E:
    fp_push(0.0); /* 0x100C947E: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9480: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9483: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9485: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9487: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C9489: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9497; /* 0x100C948C: jp 0x100c9497 */
L_100C948E:
    fp_push(_st[0]); /* 0x100C948E: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C9490: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9492: fstp dword ptr [ebp - 4] */
    goto L_100C949A; /* 0x100C9495: jmp 0x100c949a */
L_100C9497:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9497: fst dword ptr [ebp - 4] */
L_100C949A:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C949A: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x100E2054)); /* 0x100C949D: fld dword ptr [0x100e2054] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C94A3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C94A5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C94A7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9508; /* 0x100C94AA: jne 0x100c9508 */
L_100C94AC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C94AC: fstp st(0) */
    fp_push(_st[0]); /* 0x100C94AE: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C94B0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C94B2: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C94B5: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100C9578)); /* 0x100C94B8: fld qword ptr [0x100c9578] */
    _st[0] *= _st[1]; /* 0x100C94BE: fmul st(1) */
    _st[0] += *(double*)ADDR(0x100C9588); /* 0x100C94C0: fadd qword ptr [0x100c9588] */
    fp_push(_st[1]); /* 0x100C94C6: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C94C8: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C9598); /* 0x100C94CA: fadd qword ptr [0x100c9598] */
    fp_push(_st[1]); /* 0x100C94D0: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C94D2: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C95A8); /* 0x100C94D4: fadd qword ptr [0x100c95a8] */
    fp_push(_st[1]); /* 0x100C94DA: fld st(1) */
    _st[0] *= *(double*)ADDR(0x100C9580); /* 0x100C94DC: fmul qword ptr [0x100c9580] */
    _st[0] += *(double*)ADDR(0x100C9590); /* 0x100C94E2: fadd qword ptr [0x100c9590] */
    fp_push(_st[2]); /* 0x100C94E8: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C94EA: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C95A0); /* 0x100C94EC: fadd qword ptr [0x100c95a0] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C94F2: fmulp st(2) */
    fp_xch(1); /* 0x100C94F4: fxch st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C94F6: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C94FC: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C94FE: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9500: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9503: fld dword ptr [ebp - 4] */
    goto L_100C9570; /* 0x100C9506: jmp 0x100c9570 */
L_100C9508:
    fp_push(*(float*)&MEM32(0x100E2050)); /* 0x100C9508: fld dword ptr [0x100e2050] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C950E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9510: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9512: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C952F; /* 0x100C9515: jne 0x100c952f */
L_100C9517:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9517: fstp st(1) */
    PUSH32(esp, ecx); /* 0x100C9519: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C951A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C93B0); /* 0x100C951D: call 0x100c93b0 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C9522: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C9524: fsubrp st(1) */
    ecx = POP32_VAL(esp); /* 0x100C9526: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9527: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C952A: fld dword ptr [ebp + 8] */
    goto L_100C9536; /* 0x100C952D: jmp 0x100c9536 */
L_100C952F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C952F: fstp st(0) */
    fp_push(1.0); /* 0x100C9531: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9533: fstp dword ptr [ebp - 4] */
L_100C9536:
    fp_push(0.0); /* 0x100C9536: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9538: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C953A: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C953C: fld dword ptr [ebp - 4] */
    /* test HI8(eax), 0x41u */ /* 0x100C953F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9546; /* 0x100C9542: jne 0x100c9546 */
L_100C9544:
    _st[0] = -_st[0]; /* 0x100C9544: fchs  */
L_100C9546:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9546: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9549: fld dword ptr [ebp - 4] */
    goto L_100C9570; /* 0x100C954C: jmp 0x100c9570 */
L_100C954E:
    eax = MEM32(ebp + 0xA); /* 0x100C954E: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100C9551: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C9554: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9563; /* 0x100C9559: je 0x100c9563 */
L_100C955B:
    fp_push(*(float*)&MEM32(0x10063D00)); /* 0x100C955B: fld dword ptr [0x10063d00] */
    goto L_100C9565; /* 0x100C9561: jmp 0x100c9565 */
L_100C9563:
    fp_push(1.0); /* 0x100C9563: fld1  */
L_100C9565:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9565: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9568: fld dword ptr [ebp - 4] */
    goto L_100C9570; /* 0x100C956B: jmp 0x100c9570 */
L_100C956D:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C956D: fld dword ptr [ebp + 8] */
L_100C9570:
    esp = ebp; /* 0x100C9570: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C9572: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9573: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C95B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C95B0u);

L_100C95B0:
    PUSH32(esp, ebp); /* 0x100C95B0: push ebp */
    ebp = esp; /* 0x100C95B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C95B3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C95B6: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C95B9: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C95BB: fmul st(1) */
    PUSH32(esp, 0); /* 0x100C95BD: push 0 */
    PUSH32(esp, 6); /* 0x100C95BF: push 6 */
    PUSH32(esp, 0x100C9610u); /* 0x100C95C1: push 0x100c9610 */
    PUSH32(esp, ecx); /* 0x100C95C6: push ecx */
    _st[0] = -_st[0]; /* 0x100C95C7: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C95C9: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C95CC: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C95CD: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C95D0: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C95D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C95D8: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C95DB: fld qword ptr [ebp + 8] */
    PUSH32(esp, 6); /* 0x100C95DE: push 6 */
    PUSH32(esp, 0x100C9648u); /* 0x100C95E0: push 0x100c9648 */
    PUSH32(esp, ecx); /* 0x100C95E5: push ecx */
    PUSH32(esp, ecx); /* 0x100C95E6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C95E7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C8FBA); /* 0x100C95EA: call 0x100c8fba */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C95EF: fdivr qword ptr [ebp - 0x10] */
    eax = ebp + (-0x8); /* 0x100C95F2: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C95F5: add esp, 8 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C95F8: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C95FB: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100C95FC: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C9601: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C9604: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x100C9607: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C9609: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C960A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9610u);

    goto L_100C9610;
L_100C960B:
    /* nop */ /* 0x100C960B: nop  */
    /* nop */ /* 0x100C960C: nop  */
    /* nop */ /* 0x100C960D: nop  */
    /* nop */ /* 0x100C960E: nop  */
    /* nop */ /* 0x100C960F: nop  */
L_100C9610:
    PUSHAD(); /* 0x100C9610: pushal  */
    PUSH32(esp, 0x75u); /* 0x100C9611: push 0x75 */
    /* in: no port I/O under Win32 */ /* 0x100C9613: in al, 0x5a */
    /* cmp eax, MEM32(0x417C7D3E) */ /* 0x100C9615: cmp eax, dword ptr [0x417c7d3e] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x417C7D3E));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a - _flag_b), 0)) goto L_100C960B; /* 0x100C961B: jp 0x100c960b */
L_100C961D:
    /* in: no port I/O under Win32 */ /* 0x100C961D: in eax, dx */
    { uint32_t _tmp = MEM32(edi); /* 0x100C961E: xchg dword ptr [edi], edi */
      MEM32(edi) = edi;
      edi = _tmp; }
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100C9620: stc  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100C9621: dec esp */
    _flag_k = FK_DEC;
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(eax + 0x3FB87BB9)); /* 0x100C9622: fcomp dword ptr [eax + 0x3fb87bb9] */
    fp_pop();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100C9628: dec esp */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9629: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9648u);

L_100C9648:
    goto L_0B017A65; /* 0x100C9648: jmp 0xb017a65 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0B017A65: RECOMP_ITAIL(0x0B017A65u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_100C9680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9680u);

L_100C9680:
    PUSH32(esp, ebp); /* 0x100C9680: push ebp */
    ebp = esp; /* 0x100C9681: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C9683: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C9686: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C9687: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C968C: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C968D: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C968E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9789; /* 0x100C9691: je 0x100c9789 */
L_100C9697:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9697: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9770; /* 0x100C9698: je 0x100c9770 */
L_100C969E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C969E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9789; /* 0x100C969F: je 0x100c9789 */
L_100C96A5:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C96A5: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C96A8: fld st(0) */
    _st[0] = fabs(_st[0]); /* 0x100C96AA: fabs  */
    fp_push(*(double*)ADDR(0x100E2060)); /* 0x100C96AC: fld qword ptr [0x100e2060] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C96B2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C96B4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C96B6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9735; /* 0x100C96B9: jne 0x100c9735 */
L_100C96BB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C96BB: fstp st(0) */
    fp_push(_st[0]); /* 0x100C96BD: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C96BF: fmul st(1) */
    fp_push(*(double*)ADDR(0x10063D08)); /* 0x100C96C1: fld qword ptr [0x10063d08] */
    _st[0] *= _st[1]; /* 0x100C96C7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D18); /* 0x100C96C9: fadd qword ptr [0x10063d18] */
    _st[0] *= _st[1]; /* 0x100C96CF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D28); /* 0x100C96D1: fadd qword ptr [0x10063d28] */
    _st[0] *= _st[1]; /* 0x100C96D7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D38); /* 0x100C96D9: fadd qword ptr [0x10063d38] */
    _st[0] *= _st[1]; /* 0x100C96DF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D48); /* 0x100C96E1: fadd qword ptr [0x10063d48] */
    _st[0] *= _st[1]; /* 0x100C96E7: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D58); /* 0x100C96E9: fadd qword ptr [0x10063d58] */
    _st[0] *= _st[1]; /* 0x100C96EF: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063D68); /* 0x100C96F1: fadd qword ptr [0x10063d68] */
    fp_push(_st[1]); /* 0x100C96F7: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10063D10); /* 0x100C96F9: fmul qword ptr [0x10063d10] */
    _st[0] += *(double*)ADDR(0x10063D20); /* 0x100C96FF: fadd qword ptr [0x10063d20] */
    _st[0] *= _st[2]; /* 0x100C9705: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D30); /* 0x100C9707: fadd qword ptr [0x10063d30] */
    _st[0] *= _st[2]; /* 0x100C970D: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D40); /* 0x100C970F: fadd qword ptr [0x10063d40] */
    _st[0] *= _st[2]; /* 0x100C9715: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D50); /* 0x100C9717: fadd qword ptr [0x10063d50] */
    _st[0] *= _st[2]; /* 0x100C971D: fmul st(2) */
    _st[0] += *(double*)ADDR(0x10063D60); /* 0x100C971F: fadd qword ptr [0x10063d60] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C9725: fmulp st(2) */
    fp_xch(1); /* 0x100C9727: fxch st(1) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C9729: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C972F: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C9731: fmulp st(1) */
    ebp = POP32_VAL(esp); /* 0x100C9733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9734: ret  */
L_100C9735:
    fp_push(*(double*)ADDR(0x100E2058)); /* 0x100C9735: fld qword ptr [0x100e2058] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C973B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C973D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C973F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C975B; /* 0x100C9742: jne 0x100c975b */
L_100C9744:
    PUSH32(esp, ecx); /* 0x100C9744: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9745: fstp st(1) */
    PUSH32(esp, ecx); /* 0x100C9747: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9748: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C95B0); /* 0x100C974B: call 0x100c95b0 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C9750: fld1  */
    ecx = POP32_VAL(esp); /* 0x100C9752: pop ecx */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C9753: fsubrp st(1) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9755: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C9758: pop ecx */
    goto L_100C9761; /* 0x100C9759: jmp 0x100c9761 */
L_100C975B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C975B: fstp st(0) */
    fp_push(1.0); /* 0x100C975D: fld1  */
    fp_xch(1); /* 0x100C975F: fxch st(1) */
L_100C9761:
    fp_push(0.0); /* 0x100C9761: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9763: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9765: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9767: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C978C; /* 0x100C976A: jne 0x100c978c */
L_100C976C:
    _st[0] = -_st[0]; /* 0x100C976C: fchs  */
    ebp = POP32_VAL(esp); /* 0x100C976E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C976F: ret  */
L_100C9770:
    eax = MEM32(ebp + 0xE); /* 0x100C9770: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C9773: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C9776: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9785; /* 0x100C977B: je 0x100c9785 */
L_100C977D:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100C977D: fld qword ptr [0x10067ce8] */
    ebp = POP32_VAL(esp); /* 0x100C9783: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9784: ret  */
L_100C9785:
    fp_push(1.0); /* 0x100C9785: fld1  */
    ebp = POP32_VAL(esp); /* 0x100C9787: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9788: ret  */
L_100C9789:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9789: fld qword ptr [ebp + 8] */
L_100C978C:
    ebp = POP32_VAL(esp); /* 0x100C978C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C978D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C978E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C978Eu);

L_100C978E:
    PUSH32(esp, ebp); /* 0x100C978E: push ebp */
    ebp = esp; /* 0x100C978F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C9791: push ecx */
    PUSH32(esp, esi); /* 0x100C9792: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C9793: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C9796: push edi */
    PUSH32(esp, esi); /* 0x100C9797: push esi */
    RECOMP_CALL(sub_100BFE08); /* 0x100C9798: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C979D: movzx edi, ax */
    eax = ebp + 0xC; /* 0x100C97A0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C97A3: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C97A4: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C97A9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C97AA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C97AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C97AD: movzx eax, ax */
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100C97B0: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C98EF; /* 0x100C97B3: jle 0x100c98ef */
L_100C97B9:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C97B9: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C98EF; /* 0x100C97BC: jle 0x100c98ef */
L_100C97C2:
    fp_push(*(double*)ADDR(0x100C99D0)); /* 0x100C97C2: fld qword ptr [0x100c99d0] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x100C97C8: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C97CA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C97CC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C97E3; /* 0x100C97CF: jne 0x100c97e3 */
L_100C97D1:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C97D1: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C97D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C97D6: fmul qword ptr [0x10067cd0] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C97DC: fstp qword ptr [esi] */
    goto L_100C99BE; /* 0x100C97DE: jmp 0x100c99be */
L_100C97E3:
    fp_push(*(double*)ADDR(esi)); /* 0x100C97E3: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C99C8)); /* 0x100C97E5: fcomp qword ptr [0x100c99c8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C97EB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C97ED: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C980D; /* 0x100C97F0: jne 0x100c980d */
L_100C97F2:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C97F2: fld qword ptr [0x10065b48] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C97F8: fmul qword ptr [ebp + 0xc] */
    PUSH32(esp, 8); /* 0x100C97FB: push 8 */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C97FD: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C97FF: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9804: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C9806: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9807: inc eax */
    _flag_k = FK_INC;
    goto L_100C99BE; /* 0x100C9808: jmp 0x100c99be */
L_100C980D:
    fp_push(*(double*)ADDR(esi)); /* 0x100C980D: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x10064508); /* 0x100C980F: fmul qword ptr [0x10064508] */
    fp_push(0.0); /* 0x100C9815: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9817: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9819: fnstsw ax */
    fp_push(*(double*)ADDR(0x10063BD0)); /* 0x100C981B: fld qword ptr [0x10063bd0] */
    /* test HI8(eax), 0x41u */ /* 0x100C9821: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C982E; /* 0x100C9824: jne 0x100c982e */
L_100C9826:
    fp_push(*(double*)ADDR(0x10064518)); /* 0x100C9826: fld qword ptr [0x10064518] */
    goto L_100C9830; /* 0x100C982C: jmp 0x100c9830 */
L_100C982E:
    fp_push(_st[0]); /* 0x100C982E: fld st(0) */
L_100C9830:
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9830: faddp st(2) */
    fp_xch(1); /* 0x100C9832: fxch st(1) */
    RECOMP_CALL(sub_10051B40); /* 0x100C9834: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100C9839: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C983B: mov dword ptr [ebp - 4], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C983E: fild dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x10064500)); /* 0x100C9841: fld qword ptr [0x10064500] */
    _st[0] *= _st[1]; /* 0x100C9847: fmul st(1) */
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x100C9849: fsubr qword ptr [esi] */
    fp_xch(1); /* 0x100C984B: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x100644D8); /* 0x100C984D: fmul qword ptr [0x100644d8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C9853: fsubp st(1) */
    fp_push(*(double*)ADDR(0x10065BA8)); /* 0x100C9855: fld qword ptr [0x10065ba8] */
    fp_push(_st[0]); /* 0x100C985B: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C985D: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C985F: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9861: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C9863: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C987A; /* 0x100C9866: jp 0x100c987a */
L_100C9868:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9868: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C986A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C986C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C987C; /* 0x100C986F: jne 0x100c987c */
L_100C9871:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9871: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9873: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9875: fld qword ptr [ebp + 0xc] */
    goto L_100C98BD; /* 0x100C9878: jmp 0x100c98bd */
L_100C987A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C987A: fstp st(0) */
L_100C987C:
    fp_push(_st[0]); /* 0x100C987C: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C987E: fmul st(1) */
    fp_push(*(double*)ADDR(0x100644E8)); /* 0x100C9880: fld qword ptr [0x100644e8] */
    _st[0] *= _st[1]; /* 0x100C9886: fmul st(1) */
    _st[0] += *(double*)ADDR(0x100644F8); /* 0x100C9888: fadd qword ptr [0x100644f8] */
    _st[0] *= _st[1]; /* 0x100C988E: fmul st(1) */
    fp_push(_st[1]); /* 0x100C9890: fld st(1) */
    _st[0] *= *(double*)ADDR(0x100644E0); /* 0x100C9892: fmul qword ptr [0x100644e0] */
    _st[0] += *(double*)ADDR(0x100644F0); /* 0x100C9898: fadd qword ptr [0x100644f0] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C989E: fmulp st(2) */
    fp_xch(1); /* 0x100C98A0: fxch st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C98A2: faddp st(3) */
    fp_xch(2); /* 0x100C98A4: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C98A6: fmulp st(1) */
    fp_push(_st[0]); /* 0x100C98A8: fld st(0) */
    _st[0] += _st[2]; /* 0x100C98AA: fadd st(2) */
    fp_push(1.0); /* 0x100C98AC: fld1  */
    _st[1] += _st[0]; /* 0x100C98AE: fadd st(1), st(0) */
    fp_xch(3); /* 0x100C98B0: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C98B2: fsubrp st(2) */
    fp_xch(1); /* 0x100C98B4: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C98B6: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C98B8: fdivrp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C98BA: fmul qword ptr [ebp + 0xc] */
L_100C98BD:
    eax = MEM32(ebp + 0x14); /* 0x100C98BD: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100C98C0: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100C98C2: push eax */
    PUSH32(esp, esi); /* 0x100C98C3: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C98C4: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100D649E); /* 0x100C98C6: call 0x100d649e */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C98CB: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C98CE: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C98D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C98D2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C98D3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C98DF; /* 0x100C98D6: je 0x100c98df */
L_100C98D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C98D8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C98E7; /* 0x100C98D9: jne 0x100c98e7 */
L_100C98DB:
    PUSH32(esp, 8); /* 0x100C98DB: push 8 */
    goto L_100C98E1; /* 0x100C98DD: jmp 0x100c98e1 */
L_100C98DF:
    PUSH32(esp, 0x10u); /* 0x100C98DF: push 0x10 */
L_100C98E1:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C98E1: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C98E6: pop ecx */
L_100C98E7:
    SET_LO16(eax, LO16(esi)); /* 0x100C98E7: mov ax, si */
    goto L_100C99BE; /* 0x100C98EA: jmp 0x100c99be */
L_100C98EF:
    PUSH32(esp, ebx); /* 0x100C98EF: push ebx */
    PUSH32(esp, 2); /* 0x100C98F0: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C98F2: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C98F3: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9900; /* 0x100C98F6: jne 0x100c9900 */
L_100C98F8:
    SET_LO16(eax, LO16(ebx)); /* 0x100C98F8: mov ax, bx */
    goto L_100C99BD; /* 0x100C98FB: jmp 0x100c99bd */
L_100C9900:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C9900: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9910; /* 0x100C9903: jne 0x100c9910 */
L_100C9905:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9905: fld qword ptr [ebp + 0xc] */
L_100C9908:
    SET_LO16(eax, LO16(ebx)); /* 0x100C9908: mov ax, bx */
    goto L_100C99BB; /* 0x100C990B: jmp 0x100c99bb */
L_100C9910:
    /* test LO16(eax), LO16(eax) */ /* 0x100C9910: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C993E; /* 0x100C9913: jne 0x100c993e */
L_100C9915:
    fp_push(*(double*)ADDR(esi)); /* 0x100C9915: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C9917: fld qword ptr [0x10065b48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C991D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C991F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9921: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C992E; /* 0x100C9924: jnp 0x100c992e */
L_100C9926:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9926: fld qword ptr [ebp + 0xc] */
    goto L_100C99B9; /* 0x100C9929: jmp 0x100c99b9 */
L_100C992E:
    PUSH32(esp, 1); /* 0x100C992E: push 1 */
L_100C9930:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9930: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C9935: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C993B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100C9908; /* 0x100C993C: jmp 0x100c9908 */
L_100C993E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C993E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9940: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C9941: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9964; /* 0x100C9944: jne 0x100c9964 */
L_100C9946:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C9946: fld qword ptr [0x10065b48] */
    _st[0] = -_st[0]; /* 0x100C994C: fchs  */
    fp_push(*(double*)ADDR(esi)); /* 0x100C994E: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9950: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9952: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9954: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9961; /* 0x100C9957: jnp 0x100c9961 */
L_100C9959:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9959: fld qword ptr [ebp + 0xc] */
L_100C995C:
    SET_LO16(eax, LO16(ecx)); /* 0x100C995C: mov ax, cx */
    goto L_100C99BB; /* 0x100C995F: jmp 0x100c99bb */
L_100C9961:
    PUSH32(esp, ecx); /* 0x100C9961: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C9930; /* 0x100C9962: jmp 0x100c9930 */
L_100C9964:
    /* test LO16(edi), LO16(edi) */ /* 0x100C9964: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9998; /* 0x100C9967: jne 0x100c9998 */
L_100C9969:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C9969: push dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C996C: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100C996F: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C9970: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100D649E); /* 0x100C9972: call 0x100d649e */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C9977: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C997A: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C997D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C997E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C997F: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C998B; /* 0x100C9982: je 0x100c998b */
L_100C9984:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9984: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C9993; /* 0x100C9985: jne 0x100c9993 */
L_100C9987:
    PUSH32(esp, 8); /* 0x100C9987: push 8 */
    goto L_100C998D; /* 0x100C9989: jmp 0x100c998d */
L_100C998B:
    PUSH32(esp, 0x10u); /* 0x100C998B: push 0x10 */
L_100C998D:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C998D: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9992: pop ecx */
L_100C9993:
    SET_LO16(eax, LO16(esi)); /* 0x100C9993: mov ax, si */
    goto L_100C99BD; /* 0x100C9996: jmp 0x100c99bd */
L_100C9998:
    fp_push(*(double*)ADDR(esi)); /* 0x100C9998: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C999A: fld qword ptr [0x10065b48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C99A0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C99A2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C99A4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C99B0; /* 0x100C99A7: jp 0x100c99b0 */
L_100C99A9:
    fp_push(*(double*)ADDR(esi)); /* 0x100C99A9: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C99AB: fmul qword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C995C; /* 0x100C99AE: jmp 0x100c995c */
L_100C99B0:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C99B0: fld qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C99B3: fmul qword ptr [0x10067cd0] */
L_100C99B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C99B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C99BB:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C99BB: fstp qword ptr [esi] */
L_100C99BD:
    ebx = POP32_VAL(esp); /* 0x100C99BD: pop ebx */
L_100C99BE:
    edi = POP32_VAL(esp); /* 0x100C99BE: pop edi */
    esi = POP32_VAL(esp); /* 0x100C99BF: pop esi */
    esp = ebp; /* 0x100C99C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C99C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C99C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C99D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C99D8u);

L_100C99D8:
    PUSH32(esp, ebp); /* 0x100C99D8: push ebp */
    ebp = esp; /* 0x100C99D9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C99DB: push ecx */
    PUSH32(esp, ecx); /* 0x100C99DC: push ecx */
    eax = ebp + 0x8; /* 0x100C99DD: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C99E0: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C99E1: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C99E6: pop ecx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C99E7: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C99E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100C99EA: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9A9B; /* 0x100C99EC: je 0x100c9a9b */
L_100C99F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C99F2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9A8A; /* 0x100C99F3: je 0x100c9a8a */
L_100C99F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C99F9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9A85; /* 0x100C99FA: je 0x100c9a85 */
L_100C9A00:
    fp_push(*(double*)ADDR(0x10064520)); /* 0x100C9A00: fld qword ptr [0x10064520] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9A06: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9A09: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9A0B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9A0D: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C9A0F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9A68; /* 0x100C9A12: jnp 0x100c9a68 */
L_100C9A14:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064510)); /* 0x100C9A14: fcom qword ptr [0x10064510] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9A1A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C9A1C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9A68; /* 0x100C9A1F: je 0x100c9a68 */
L_100C9A21:
    PUSH32(esp, ecx); /* 0x100C9A21: push ecx */
    eax = ebp + (-0x8); /* 0x100C9A22: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C9A25: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C9A26: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFCDC); /* 0x100C9A29: call 0x100bfcdc */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C9A2E: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C9A31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9A32: pop ecx */
    fp_push(_st[0]); /* 0x100C9A33: fld st(0) */
    RECOMP_CALL(sub_10051B40); /* 0x100C9A35: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + 0x8) - _st[0]; /* 0x100C9A3A: fsubr qword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x100C9A3D: movsx ecx, ax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10063BD0)); /* 0x100C9A40: fcom qword ptr [0x10063bd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9A46: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9A48: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9A54; /* 0x100C9A4B: jne 0x100c9a54 */
L_100C9A4D:
    fp_push(1.0); /* 0x100C9A4D: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9A4F: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C9A50: fsubp st(1) */
    goto L_100C9A68; /* 0x100C9A52: jmp 0x100c9a68 */
L_100C9A54:
    fp_push(*(double*)ADDR(0x10064518)); /* 0x100C9A54: fld qword ptr [0x10064518] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9A5A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9A5C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9A5E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9A68; /* 0x100C9A61: jne 0x100c9a68 */
L_100C9A63:
    fp_push(1.0); /* 0x100C9A63: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C9A65: dec ecx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C9A66: faddp st(1) */
L_100C9A68:
    _st[0] *= *(double*)ADDR(0x10063C10); /* 0x100C9A68: fmul qword ptr [0x10063c10] */
    eax = ebp + 0x8; /* 0x100C9A6E: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C9A71: push ecx */
    PUSH32(esp, ecx); /* 0x100C9A72: push ecx */
    PUSH32(esp, ecx); /* 0x100C9A73: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C9A74: fstp qword ptr [ebp + 8] */
    fp_push(1.0); /* 0x100C9A77: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C9A79: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C9A7C: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C9A7D: call 0x100c978e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C9A82: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C9A85:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C9A85: fld qword ptr [ebp + 8] */
    goto L_100C9A9D; /* 0x100C9A88: jmp 0x100c9a9d */
L_100C9A8A:
    eax = MEM32(ebp + 0xE); /* 0x100C9A8A: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C9A8D: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C9A90: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9A85; /* 0x100C9A95: je 0x100c9a85 */
L_100C9A97:
    fp_push(0.0); /* 0x100C9A97: fldz  */
    goto L_100C9A9D; /* 0x100C9A99: jmp 0x100c9a9d */
L_100C9A9B:
    fp_push(1.0); /* 0x100C9A9B: fld1  */
L_100C9A9D:
    esp = ebp; /* 0x100C9A9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C9A9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9AA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9AA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9AA1u);

L_100C9AA1:
    PUSH32(esp, ebp); /* 0x100C9AA1: push ebp */
    ebp = esp; /* 0x100C9AA2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C9AA4: push ecx */
    PUSH32(esp, ecx); /* 0x100C9AA5: push ecx */
    PUSH32(esp, esi); /* 0x100C9AA6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C9AA7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C9AAA: push edi */
    PUSH32(esp, esi); /* 0x100C9AAB: push esi */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C9AAC: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C9AB1: movzx edi, ax */
    eax = ebp + 0xC; /* 0x100C9AB4: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C9AB7: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C9AB8: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9ABD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9ABE: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C9ABF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C9AC1: movzx eax, ax */
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100C9AC4: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C9C19; /* 0x100C9AC7: jle 0x100c9c19 */
L_100C9ACD:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C9ACD: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C9C19; /* 0x100C9AD0: jle 0x100c9c19 */
L_100C9AD6:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9AD6: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C9D18)); /* 0x100C9AD8: fcomp qword ptr [0x100c9d18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9ADE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C9AE0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9AF7; /* 0x100C9AE3: jp 0x100c9af7 */
L_100C9AE5:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9AE5: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9AE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C9AEA: fmul qword ptr [0x10067cd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100C9AF0: fstp dword ptr [esi] */
    goto L_100C9CE8; /* 0x100C9AF2: jmp 0x100c9ce8 */
L_100C9AF7:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9AF7: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100C9D10)); /* 0x100C9AF9: fcomp qword ptr [0x100c9d10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9AFF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9B01: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9B21; /* 0x100C9B04: jne 0x100c9b21 */
L_100C9B06:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C9B06: fld dword ptr [0x10065b68] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C9B0C: fmul dword ptr [ebp + 0xc] */
    PUSH32(esp, 8); /* 0x100C9B0F: push 8 */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100C9B11: fstp dword ptr [esi] */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9B13: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9B18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C9B1A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9B1B: inc eax */
    _flag_k = FK_INC;
    goto L_100C9CE8; /* 0x100C9B1C: jmp 0x100c9ce8 */
L_100C9B21:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9B21: fld dword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x10064530); /* 0x100C9B23: fmul qword ptr [0x10064530] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9B29: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C9B2C: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9B2E: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9B31: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9B33: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9B35: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C9B37: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9B44; /* 0x100C9B3A: jp 0x100c9b44 */
L_100C9B3C:
    fp_push(*(float*)&MEM32(0x10064540)); /* 0x100C9B3C: fld dword ptr [0x10064540] */
    goto L_100C9B4A; /* 0x100C9B42: jmp 0x100c9b4a */
L_100C9B44:
    fp_push(*(float*)&MEM32(0x10064528)); /* 0x100C9B44: fld dword ptr [0x10064528] */
L_100C9B4A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9B4A: fstp dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C9B4D: fadd dword ptr [ebp - 4] */
    RECOMP_CALL(sub_10051B40); /* 0x100C9B50: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100C9B55: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C9B57: mov dword ptr [ebp - 4], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C9B5A: fild dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9B5D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9B60: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9B62: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100C9D08)); /* 0x100C9B65: fld qword ptr [0x100c9d08] */
    _st[0] *= _st[1]; /* 0x100C9B6B: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100C9B6D: fsubp st(2) */
    _st[0] *= *(double*)ADDR(0x100C9CF0); /* 0x100C9B6F: fmul qword ptr [0x100c9cf0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C9B75: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9B77: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x10065BC8)); /* 0x100C9B7A: fld dword ptr [0x10065bc8] */
    fp_push(_st[0]); /* 0x100C9B80: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C9B82: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9B84: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9B87: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9B89: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9B8B: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C9B8D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9BA4; /* 0x100C9B90: jne 0x100c9ba4 */
L_100C9B92:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9B92: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9B94: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9B96: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C9B98: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9BA6; /* 0x100C9B9B: jp 0x100c9ba6 */
L_100C9B9D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9B9D: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9B9F: fld dword ptr [ebp + 0xc] */
    goto L_100C9BE7; /* 0x100C9BA2: jmp 0x100c9be7 */
L_100C9BA4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9BA4: fstp st(1) */
L_100C9BA6:
    fp_push(_st[0]); /* 0x100C9BA6: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C9BA8: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9BAA: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9BAD: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x100C9D00)); /* 0x100C9BB0: fld qword ptr [0x100c9d00] */
    _st[0] *= _st[1]; /* 0x100C9BB6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C9BB8: fstp dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x100C9CF8); /* 0x100C9BBB: fmul qword ptr [0x100c9cf8] */
    _st[0] += *(double*)ADDR(0x10063BD0); /* 0x100C9BC1: fadd qword ptr [0x10063bd0] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C9BC7: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9BC9: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9BCC: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x100C9BCF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C9BD1: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C9BD4: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9BD6: faddp st(2) */
    fp_push(1.0); /* 0x100C9BD8: fld1  */
    _st[2] += _st[0]; /* 0x100C9BDA: fadd st(2), st(0) */
    fp_xch(1); /* 0x100C9BDC: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x100C9BDE: fsubrp st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9BE0: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C9BE2: fdivrp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C9BE4: fmul dword ptr [ebp + 0xc] */
L_100C9BE7:
    eax = MEM32(ebp + 0x10); /* 0x100C9BE7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100C9BEA: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100C9BEC: push eax */
    PUSH32(esp, esi); /* 0x100C9BED: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100C9BEE: fstp dword ptr [esi] */
    RECOMP_CALL(sub_100D66D7); /* 0x100C9BF0: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C9BF5: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C9BF8: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C9BFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9BFC: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C9BFD: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9C09; /* 0x100C9C00: je 0x100c9c09 */
L_100C9C02:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9C02: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C9C11; /* 0x100C9C03: jne 0x100c9c11 */
L_100C9C05:
    PUSH32(esp, 8); /* 0x100C9C05: push 8 */
    goto L_100C9C0B; /* 0x100C9C07: jmp 0x100c9c0b */
L_100C9C09:
    PUSH32(esp, 0x10u); /* 0x100C9C09: push 0x10 */
L_100C9C0B:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9C0B: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9C10: pop ecx */
L_100C9C11:
    SET_LO16(eax, LO16(esi)); /* 0x100C9C11: mov ax, si */
    goto L_100C9CE8; /* 0x100C9C14: jmp 0x100c9ce8 */
L_100C9C19:
    PUSH32(esp, ebx); /* 0x100C9C19: push ebx */
    PUSH32(esp, 2); /* 0x100C9C1A: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C9C1C: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C9C1D: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9C2A; /* 0x100C9C20: jne 0x100c9c2a */
L_100C9C22:
    SET_LO16(eax, LO16(ebx)); /* 0x100C9C22: mov ax, bx */
    goto L_100C9CE7; /* 0x100C9C25: jmp 0x100c9ce7 */
L_100C9C2A:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C9C2A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9C3A; /* 0x100C9C2D: jne 0x100c9c3a */
L_100C9C2F:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9C2F: fld dword ptr [ebp + 0xc] */
L_100C9C32:
    SET_LO16(eax, LO16(ebx)); /* 0x100C9C32: mov ax, bx */
    goto L_100C9CE5; /* 0x100C9C35: jmp 0x100c9ce5 */
L_100C9C3A:
    /* test LO16(eax), LO16(eax) */ /* 0x100C9C3A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9C68; /* 0x100C9C3D: jne 0x100c9c68 */
L_100C9C3F:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9C3F: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C9C41: fld dword ptr [0x10065b68] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9C47: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9C49: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9C4B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9C58; /* 0x100C9C4E: jnp 0x100c9c58 */
L_100C9C50:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9C50: fld dword ptr [ebp + 0xc] */
    goto L_100C9CE3; /* 0x100C9C53: jmp 0x100c9ce3 */
L_100C9C58:
    PUSH32(esp, 1); /* 0x100C9C58: push 1 */
L_100C9C5A:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9C5A: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C9C5F: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C9C65: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100C9C32; /* 0x100C9C66: jmp 0x100c9c32 */
L_100C9C68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C9C68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9C6A: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C9C6B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9C8E; /* 0x100C9C6E: jne 0x100c9c8e */
L_100C9C70:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9C70: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C9C72: fld dword ptr [0x10065b68] */
    _st[0] = -_st[0]; /* 0x100C9C78: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9C7A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9C7C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9C7E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9C8B; /* 0x100C9C81: jnp 0x100c9c8b */
L_100C9C83:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9C83: fld dword ptr [ebp + 0xc] */
L_100C9C86:
    SET_LO16(eax, LO16(ecx)); /* 0x100C9C86: mov ax, cx */
    goto L_100C9CE5; /* 0x100C9C89: jmp 0x100c9ce5 */
L_100C9C8B:
    PUSH32(esp, ecx); /* 0x100C9C8B: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C9C5A; /* 0x100C9C8C: jmp 0x100c9c5a */
L_100C9C8E:
    /* test LO16(edi), LO16(edi) */ /* 0x100C9C8E: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9CC2; /* 0x100C9C91: jne 0x100c9cc2 */
L_100C9C93:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C9C93: push dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9C96: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100C9C99: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100C9C9A: fstp dword ptr [esi] */
    RECOMP_CALL(sub_100D66D7); /* 0x100C9C9C: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C9CA1: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C9CA4: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C9CA7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9CA8: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C9CA9: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9CB5; /* 0x100C9CAC: je 0x100c9cb5 */
L_100C9CAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9CAE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C9CBD; /* 0x100C9CAF: jne 0x100c9cbd */
L_100C9CB1:
    PUSH32(esp, 8); /* 0x100C9CB1: push 8 */
    goto L_100C9CB7; /* 0x100C9CB3: jmp 0x100c9cb7 */
L_100C9CB5:
    PUSH32(esp, 0x10u); /* 0x100C9CB5: push 0x10 */
L_100C9CB7:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9CB7: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9CBC: pop ecx */
L_100C9CBD:
    SET_LO16(eax, LO16(esi)); /* 0x100C9CBD: mov ax, si */
    goto L_100C9CE7; /* 0x100C9CC0: jmp 0x100c9ce7 */
L_100C9CC2:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9CC2: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C9CC4: fld dword ptr [0x10065b68] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9CCA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9CCC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9CCE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9CDA; /* 0x100C9CD1: jp 0x100c9cda */
L_100C9CD3:
    fp_push(*(float*)&MEM32(esi)); /* 0x100C9CD3: fld dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x100C9CD5: fmul dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C9C86; /* 0x100C9CD8: jmp 0x100c9c86 */
L_100C9CDA:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C9CDA: fld dword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C9CDD: fmul qword ptr [0x10067cd0] */
L_100C9CE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9CE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C9CE5:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x100C9CE5: fstp dword ptr [esi] */
L_100C9CE7:
    ebx = POP32_VAL(esp); /* 0x100C9CE7: pop ebx */
L_100C9CE8:
    edi = POP32_VAL(esp); /* 0x100C9CE8: pop edi */
    esi = POP32_VAL(esp); /* 0x100C9CE9: pop esi */
    esp = ebp; /* 0x100C9CEA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C9CEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9CED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9D20u);

L_100C9D20:
    PUSH32(esp, ebp); /* 0x100C9D20: push ebp */
    ebp = esp; /* 0x100C9D21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C9D23: push ecx */
    eax = ebp + 0x8; /* 0x100C9D24: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C9D27: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C9D28: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9D2D: pop ecx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C9D2E: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C9D2F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100C9D31: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9DFC; /* 0x100C9D33: je 0x100c9dfc */
L_100C9D39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9D39: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9DE0; /* 0x100C9D3A: je 0x100c9de0 */
L_100C9D40:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9D40: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9DDB; /* 0x100C9D41: je 0x100c9ddb */
L_100C9D47:
    fp_push(*(float*)&MEM32(0x10064544)); /* 0x100C9D47: fld dword ptr [0x10064544] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9D4D: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9D50: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9D52: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C9D54: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C9D56: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9DBF; /* 0x100C9D59: jnp 0x100c9dbf */
L_100C9D5B:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064538)); /* 0x100C9D5B: fcom qword ptr [0x10064538] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9D61: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C9D63: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9DBF; /* 0x100C9D66: je 0x100c9dbf */
L_100C9D68:
    PUSH32(esp, ecx); /* 0x100C9D68: push ecx */
    eax = ebp + (-0x4); /* 0x100C9D69: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C9D6C: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9D6D: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100BFE6A); /* 0x100C9D70: call 0x100bfe6a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9D75: fld dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C9D78: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9D79: pop ecx */
    fp_push(_st[0]); /* 0x100C9D7A: fld st(0) */
    RECOMP_CALL(sub_10051B40); /* 0x100C9D7C: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    _st[0] = (double)*(float*)ADDR(ebp + 0x8) - _st[0]; /* 0x100C9D81: fsubr dword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x100C9D84: movsx ecx, ax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C9D87: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9D8A: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10063BD0)); /* 0x100C9D8D: fcom qword ptr [0x10063bd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9D93: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9D95: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9DA3; /* 0x100C9D98: jne 0x100c9da3 */
L_100C9D9A:
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100C9D9A: fsub qword ptr [0x10067cd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9DA0: inc ecx */
    _flag_k = FK_INC;
    goto L_100C9DB9; /* 0x100C9DA1: jmp 0x100c9db9 */
L_100C9DA3:
    fp_push(*(float*)&MEM32(0x10064540)); /* 0x100C9DA3: fld dword ptr [0x10064540] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9DA9: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9DAB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9DAD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9DBF; /* 0x100C9DB0: jne 0x100c9dbf */
L_100C9DB2:
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C9DB2: fadd qword ptr [0x10067cd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C9DB8: dec ecx */
    _flag_k = FK_DEC;
L_100C9DB9:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C9DB9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9DBC: fld dword ptr [ebp + 8] */
L_100C9DBF:
    _st[0] *= *(double*)ADDR(0x10063C18); /* 0x100C9DBF: fmul qword ptr [0x10063c18] */
    eax = ebp + 0x8; /* 0x100C9DC5: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C9DC8: push ecx */
    PUSH32(esp, ecx); /* 0x100C9DC9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C9DCA: fstp dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x100C9DCD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C9DCF: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C9DD2: push eax */
    RECOMP_CALL(sub_100C9AA1); /* 0x100C9DD3: call 0x100c9aa1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C9DD8: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C9DDB:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9DDB: fld dword ptr [ebp + 8] */
    goto L_100C9DFE; /* 0x100C9DDE: jmp 0x100c9dfe */
L_100C9DE0:
    eax = MEM32(ebp + 0xA); /* 0x100C9DE0: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100C9DE3: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C9DE6: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C9DF1; /* 0x100C9DEB: je 0x100c9df1 */
L_100C9DED:
    fp_push(0.0); /* 0x100C9DED: fldz  */
    goto L_100C9DF4; /* 0x100C9DEF: jmp 0x100c9df4 */
L_100C9DF1:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C9DF1: fld dword ptr [ebp + 8] */
L_100C9DF4:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C9DF4: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C9DF7: fld dword ptr [ebp - 4] */
    goto L_100C9DFE; /* 0x100C9DFA: jmp 0x100c9dfe */
L_100C9DFC:
    fp_push(1.0); /* 0x100C9DFC: fld1  */
L_100C9DFE:
    esp = ebp; /* 0x100C9DFE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C9E00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C9E01: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C9E02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C9E02u);

L_100C9E02:
    PUSH32(esp, ebp); /* 0x100C9E02: push ebp */
    ebp = esp; /* 0x100C9E03: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C9E05: push ecx */
    PUSH32(esp, esi); /* 0x100C9E06: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C9E07: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C9E0A: push edi */
    PUSH32(esp, esi); /* 0x100C9E0B: push esi */
    RECOMP_CALL(sub_100C0034); /* 0x100C9E0C: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x100C9E11: movzx edi, ax */
    eax = ebp + 0xC; /* 0x100C9E14: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C9E17: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C9E18: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9E1D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9E1E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C9E1F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C9E21: movzx eax, ax */
    /* cmp LO16(ecx), LO16(edi) */ /* 0x100C9E24: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C9F63; /* 0x100C9E27: jle 0x100c9f63 */
L_100C9E2D:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C9E2D: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C9F63; /* 0x100C9E30: jle 0x100c9f63 */
L_100C9E36:
    fp_push(*(double*)ADDR(0x100CA040)); /* 0x100C9E36: fld qword ptr [0x100ca040] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x100C9E3C: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9E3E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9E40: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9E57; /* 0x100C9E43: jne 0x100c9e57 */
L_100C9E45:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9E45: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9E48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100C9E4A: fmul qword ptr [0x10067cd0] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C9E50: fstp qword ptr [esi] */
    goto L_100CA032; /* 0x100C9E52: jmp 0x100ca032 */
L_100C9E57:
    fp_push(*(double*)ADDR(esi)); /* 0x100C9E57: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100CA038)); /* 0x100C9E59: fcomp qword ptr [0x100ca038] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9E5F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9E61: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9E81; /* 0x100C9E64: jne 0x100c9e81 */
L_100C9E66:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C9E66: fld qword ptr [0x10065b88] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C9E6C: fmul qword ptr [ebp + 0xc] */
    PUSH32(esp, 8); /* 0x100C9E6F: push 8 */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C9E71: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9E73: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C9E78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C9E7A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C9E7B: inc eax */
    _flag_k = FK_INC;
    goto L_100CA032; /* 0x100C9E7C: jmp 0x100ca032 */
L_100C9E81:
    fp_push(*(double*)ADDR(esi)); /* 0x100C9E81: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x10064508); /* 0x100C9E83: fmul qword ptr [0x10064508] */
    fp_push(0.0); /* 0x100C9E89: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9E8B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9E8D: fnstsw ax */
    fp_push(*(double*)ADDR(0x10063BD0)); /* 0x100C9E8F: fld qword ptr [0x10063bd0] */
    /* test HI8(eax), 0x41u */ /* 0x100C9E95: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9EA2; /* 0x100C9E98: jne 0x100c9ea2 */
L_100C9E9A:
    fp_push(*(double*)ADDR(0x10064518)); /* 0x100C9E9A: fld qword ptr [0x10064518] */
    goto L_100C9EA4; /* 0x100C9EA0: jmp 0x100c9ea4 */
L_100C9EA2:
    fp_push(_st[0]); /* 0x100C9EA2: fld st(0) */
L_100C9EA4:
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9EA4: faddp st(2) */
    fp_xch(1); /* 0x100C9EA6: fxch st(1) */
    RECOMP_CALL(sub_10051B40); /* 0x100C9EA8: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100C9EAD: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100C9EAF: mov dword ptr [ebp - 4], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C9EB2: fild dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x10064500)); /* 0x100C9EB5: fld qword ptr [0x10064500] */
    _st[0] *= _st[1]; /* 0x100C9EBB: fmul st(1) */
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x100C9EBD: fsubr qword ptr [esi] */
    fp_xch(1); /* 0x100C9EBF: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x100644D8); /* 0x100C9EC1: fmul qword ptr [0x100644d8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C9EC7: fsubp st(1) */
    fp_push(*(double*)ADDR(0x10065BE8)); /* 0x100C9EC9: fld qword ptr [0x10065be8] */
    fp_push(_st[0]); /* 0x100C9ECF: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C9ED1: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C9ED3: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9ED5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C9ED7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C9EEE; /* 0x100C9EDA: jp 0x100c9eee */
L_100C9EDC:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9EDC: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9EDE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C9EE0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9EF0; /* 0x100C9EE3: jne 0x100c9ef0 */
L_100C9EE5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9EE5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9EE7: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9EE9: fld qword ptr [ebp + 0xc] */
    goto L_100C9F31; /* 0x100C9EEC: jmp 0x100c9f31 */
L_100C9EEE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C9EEE: fstp st(0) */
L_100C9EF0:
    fp_push(_st[0]); /* 0x100C9EF0: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C9EF2: fmul st(1) */
    fp_push(*(double*)ADDR(0x100644E8)); /* 0x100C9EF4: fld qword ptr [0x100644e8] */
    _st[0] *= _st[1]; /* 0x100C9EFA: fmul st(1) */
    _st[0] += *(double*)ADDR(0x100644F8); /* 0x100C9EFC: fadd qword ptr [0x100644f8] */
    _st[0] *= _st[1]; /* 0x100C9F02: fmul st(1) */
    fp_push(_st[1]); /* 0x100C9F04: fld st(1) */
    _st[0] *= *(double*)ADDR(0x100644E0); /* 0x100C9F06: fmul qword ptr [0x100644e0] */
    _st[0] += *(double*)ADDR(0x100644F0); /* 0x100C9F0C: fadd qword ptr [0x100644f0] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C9F12: fmulp st(2) */
    fp_xch(1); /* 0x100C9F14: fxch st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C9F16: faddp st(3) */
    fp_xch(2); /* 0x100C9F18: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C9F1A: fmulp st(1) */
    fp_push(_st[0]); /* 0x100C9F1C: fld st(0) */
    _st[0] += _st[2]; /* 0x100C9F1E: fadd st(2) */
    fp_push(1.0); /* 0x100C9F20: fld1  */
    _st[1] += _st[0]; /* 0x100C9F22: fadd st(1), st(0) */
    fp_xch(3); /* 0x100C9F24: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C9F26: fsubrp st(2) */
    fp_xch(1); /* 0x100C9F28: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C9F2A: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C9F2C: fdivrp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C9F2E: fmul qword ptr [ebp + 0xc] */
L_100C9F31:
    eax = MEM32(ebp + 0x14); /* 0x100C9F31: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100C9F34: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100C9F36: push eax */
    PUSH32(esp, esi); /* 0x100C9F37: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C9F38: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100D6871); /* 0x100C9F3A: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C9F3F: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C9F42: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C9F45: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9F46: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C9F47: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9F53; /* 0x100C9F4A: je 0x100c9f53 */
L_100C9F4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9F4C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C9F5B; /* 0x100C9F4D: jne 0x100c9f5b */
L_100C9F4F:
    PUSH32(esp, 8); /* 0x100C9F4F: push 8 */
    goto L_100C9F55; /* 0x100C9F51: jmp 0x100c9f55 */
L_100C9F53:
    PUSH32(esp, 0x10u); /* 0x100C9F53: push 0x10 */
L_100C9F55:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9F55: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C9F5A: pop ecx */
L_100C9F5B:
    SET_LO16(eax, LO16(esi)); /* 0x100C9F5B: mov ax, si */
    goto L_100CA032; /* 0x100C9F5E: jmp 0x100ca032 */
L_100C9F63:
    PUSH32(esp, ebx); /* 0x100C9F63: push ebx */
    PUSH32(esp, 2); /* 0x100C9F64: push 2 */
    ebx = POP32_VAL(esp); /* 0x100C9F66: pop ebx */
    /* cmp LO16(edi), LO16(ebx) */ /* 0x100C9F67: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9F74; /* 0x100C9F6A: jne 0x100c9f74 */
L_100C9F6C:
    SET_LO16(eax, LO16(ebx)); /* 0x100C9F6C: mov ax, bx */
    goto L_100CA031; /* 0x100C9F6F: jmp 0x100ca031 */
L_100C9F74:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C9F74: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9F84; /* 0x100C9F77: jne 0x100c9f84 */
L_100C9F79:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9F79: fld qword ptr [ebp + 0xc] */
L_100C9F7C:
    SET_LO16(eax, LO16(ebx)); /* 0x100C9F7C: mov ax, bx */
    goto L_100CA02F; /* 0x100C9F7F: jmp 0x100ca02f */
L_100C9F84:
    /* test LO16(eax), LO16(eax) */ /* 0x100C9F84: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C9FB2; /* 0x100C9F87: jne 0x100c9fb2 */
L_100C9F89:
    fp_push(*(double*)ADDR(esi)); /* 0x100C9F89: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C9F8B: fld qword ptr [0x10065b88] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9F91: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9F93: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9F95: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9FA2; /* 0x100C9F98: jnp 0x100c9fa2 */
L_100C9F9A:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9F9A: fld qword ptr [ebp + 0xc] */
    goto L_100CA02D; /* 0x100C9F9D: jmp 0x100ca02d */
L_100C9FA2:
    PUSH32(esp, 1); /* 0x100C9FA2: push 1 */
L_100C9FA4:
    RECOMP_CALL(sub_100BFFA8); /* 0x100C9FA4: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C9FA9: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C9FAF: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100C9F7C; /* 0x100C9FB0: jmp 0x100c9f7c */
L_100C9FB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C9FB2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C9FB4: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C9FB5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C9FD8; /* 0x100C9FB8: jne 0x100c9fd8 */
L_100C9FBA:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C9FBA: fld qword ptr [0x10065b88] */
    _st[0] = -_st[0]; /* 0x100C9FC0: fchs  */
    fp_push(*(double*)ADDR(esi)); /* 0x100C9FC2: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C9FC4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C9FC6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C9FC8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C9FD5; /* 0x100C9FCB: jnp 0x100c9fd5 */
L_100C9FCD:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9FCD: fld qword ptr [ebp + 0xc] */
L_100C9FD0:
    SET_LO16(eax, LO16(ecx)); /* 0x100C9FD0: mov ax, cx */
    goto L_100CA02F; /* 0x100C9FD3: jmp 0x100ca02f */
L_100C9FD5:
    PUSH32(esp, ecx); /* 0x100C9FD5: push ecx */
    RECOMP_BACKEDGE();
    goto L_100C9FA4; /* 0x100C9FD6: jmp 0x100c9fa4 */
L_100C9FD8:
    /* test LO16(edi), LO16(edi) */ /* 0x100C9FD8: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA00C; /* 0x100C9FDB: jne 0x100ca00c */
L_100C9FDD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C9FDD: push dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C9FE0: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100C9FE3: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100C9FE4: fstp qword ptr [esi] */
    RECOMP_CALL(sub_100D6871); /* 0x100C9FE6: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C9FEB: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C9FEE: movsx eax, si */
    ecx = POP32_VAL(esp); /* 0x100C9FF1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C9FF2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C9FF3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C9FFF; /* 0x100C9FF6: je 0x100c9fff */
L_100C9FF8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C9FF8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100CA007; /* 0x100C9FF9: jne 0x100ca007 */
L_100C9FFB:
    PUSH32(esp, 8); /* 0x100C9FFB: push 8 */
    goto L_100CA001; /* 0x100C9FFD: jmp 0x100ca001 */
L_100C9FFF:
    PUSH32(esp, 0x10u); /* 0x100C9FFF: push 0x10 */
L_100CA001:
    RECOMP_CALL(sub_100BFFA8); /* 0x100CA001: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA006: pop ecx */
L_100CA007:
    SET_LO16(eax, LO16(esi)); /* 0x100CA007: mov ax, si */
    goto L_100CA031; /* 0x100CA00A: jmp 0x100ca031 */
L_100CA00C:
    fp_push(*(double*)ADDR(esi)); /* 0x100CA00C: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100CA00E: fld qword ptr [0x10065b88] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA014: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA016: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100CA018: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA024; /* 0x100CA01B: jp 0x100ca024 */
L_100CA01D:
    fp_push(*(double*)ADDR(esi)); /* 0x100CA01D: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100CA01F: fmul qword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C9FD0; /* 0x100CA022: jmp 0x100c9fd0 */
L_100CA024:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100CA024: fld qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(0x10067CD0); /* 0x100CA027: fmul qword ptr [0x10067cd0] */
L_100CA02D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100CA02D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100CA02F:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x100CA02F: fstp qword ptr [esi] */
L_100CA031:
    ebx = POP32_VAL(esp); /* 0x100CA031: pop ebx */
L_100CA032:
    edi = POP32_VAL(esp); /* 0x100CA032: pop edi */
    esi = POP32_VAL(esp); /* 0x100CA033: pop esi */
    esp = ebp; /* 0x100CA034: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA036: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA037: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA048u);

L_100CA048:
    PUSH32(esp, ebp); /* 0x100CA048: push ebp */
    ebp = esp; /* 0x100CA049: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA04B: push ecx */
    PUSH32(esp, ecx); /* 0x100CA04C: push ecx */
    eax = ebp + 0x8; /* 0x100CA04D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA050: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CA051: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA056: pop ecx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CA057: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100CA058: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100CA05A: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA10B; /* 0x100CA05C: je 0x100ca10b */
L_100CA062:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA062: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA0FA; /* 0x100CA063: je 0x100ca0fa */
L_100CA069:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA069: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA0F5; /* 0x100CA06A: je 0x100ca0f5 */
L_100CA070:
    fp_push(*(double*)ADDR(0x10064520)); /* 0x100CA070: fld qword ptr [0x10064520] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA076: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA079: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA07B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CA07D: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100CA07F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100CA0D8; /* 0x100CA082: jnp 0x100ca0d8 */
L_100CA084:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10064510)); /* 0x100CA084: fcom qword ptr [0x10064510] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA08A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CA08C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA0D8; /* 0x100CA08F: je 0x100ca0d8 */
L_100CA091:
    PUSH32(esp, ecx); /* 0x100CA091: push ecx */
    eax = ebp + (-0x8); /* 0x100CA092: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100CA095: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CA096: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C002B); /* 0x100CA099: call 0x100c002b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CA09E: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100CA0A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA0A2: pop ecx */
    fp_push(_st[0]); /* 0x100CA0A3: fld st(0) */
    RECOMP_CALL(sub_10051B40); /* 0x100CA0A5: call 0x10051b40 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + 0x8) - _st[0]; /* 0x100CA0AA: fsubr qword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x100CA0AD: movsx ecx, ax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10063BD0)); /* 0x100CA0B0: fcom qword ptr [0x10063bd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA0B6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA0B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA0C4; /* 0x100CA0BB: jne 0x100ca0c4 */
L_100CA0BD:
    fp_push(1.0); /* 0x100CA0BD: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100CA0BF: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CA0C0: fsubp st(1) */
    goto L_100CA0D8; /* 0x100CA0C2: jmp 0x100ca0d8 */
L_100CA0C4:
    fp_push(*(double*)ADDR(0x10064518)); /* 0x100CA0C4: fld qword ptr [0x10064518] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA0CA: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA0CC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA0CE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA0D8; /* 0x100CA0D1: jne 0x100ca0d8 */
L_100CA0D3:
    fp_push(1.0); /* 0x100CA0D3: fld1  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100CA0D5: dec ecx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CA0D6: faddp st(1) */
L_100CA0D8:
    _st[0] *= *(double*)ADDR(0x10063C10); /* 0x100CA0D8: fmul qword ptr [0x10063c10] */
    eax = ebp + 0x8; /* 0x100CA0DE: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CA0E1: push ecx */
    PUSH32(esp, ecx); /* 0x100CA0E2: push ecx */
    PUSH32(esp, ecx); /* 0x100CA0E3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100CA0E4: fstp qword ptr [ebp + 8] */
    fp_push(1.0); /* 0x100CA0E7: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA0E9: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100CA0EC: push eax */
    RECOMP_CALL(sub_100C9E02); /* 0x100CA0ED: call 0x100c9e02 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CA0F2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100CA0F5:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA0F5: fld qword ptr [ebp + 8] */
    goto L_100CA10D; /* 0x100CA0F8: jmp 0x100ca10d */
L_100CA0FA:
    eax = MEM32(ebp + 0xE); /* 0x100CA0FA: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CA0FD: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CA100: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA0F5; /* 0x100CA105: je 0x100ca0f5 */
L_100CA107:
    fp_push(0.0); /* 0x100CA107: fldz  */
    goto L_100CA10D; /* 0x100CA109: jmp 0x100ca10d */
L_100CA10B:
    fp_push(1.0); /* 0x100CA10B: fld1  */
L_100CA10D:
    esp = ebp; /* 0x100CA10D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA10F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA110: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA111(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA111u);

L_100CA111:
    PUSH32(esp, ebp); /* 0x100CA111: push ebp */
    ebp = esp; /* 0x100CA112: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CA114: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA117: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CA118: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CA11D: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CA11E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CA11F: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA1DE; /* 0x100CA122: je 0x100ca1de */
L_100CA128:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA128: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA1C9; /* 0x100CA129: je 0x100ca1c9 */
L_100CA12F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA12F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA1DE; /* 0x100CA130: je 0x100ca1de */
L_100CA136:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA136: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100645A8)); /* 0x100CA139: fcom qword ptr [0x100645a8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA13F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA141: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA1B5; /* 0x100CA144: jne 0x100ca1b5 */
L_100CA146:
    fp_push(*(double*)ADDR(0x10064590)); /* 0x100CA146: fld qword ptr [0x10064590] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA14C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA14E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA150: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA1B5; /* 0x100CA153: jne 0x100ca1b5 */
L_100CA155:
    fp_push(*(double*)ADDR(0x10064548)); /* 0x100CA155: fld qword ptr [0x10064548] */
    _st[0] *= _st[1]; /* 0x100CA15B: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064558); /* 0x100CA15D: fadd qword ptr [0x10064558] */
    _st[0] *= _st[1]; /* 0x100CA163: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064568); /* 0x100CA165: fadd qword ptr [0x10064568] */
    _st[0] *= _st[1]; /* 0x100CA16B: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064578); /* 0x100CA16D: fadd qword ptr [0x10064578] */
    _st[0] *= _st[1]; /* 0x100CA173: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064580); /* 0x100CA175: fadd qword ptr [0x10064580] */
    _st[0] *= _st[1]; /* 0x100CA17B: fmul st(1) */
    fp_push(*(double*)ADDR(0x100645A0)); /* 0x100CA17D: fld qword ptr [0x100645a0] */
    _st[1] += _st[0]; /* 0x100CA183: fadd st(1), st(0) */
    fp_push(_st[2]); /* 0x100CA185: fld st(2) */
    _st[0] *= *(double*)ADDR(0x10064550); /* 0x100CA187: fmul qword ptr [0x10064550] */
    _st[0] = *(double*)ADDR(0x10064560) - _st[0]; /* 0x100CA18D: fsubr qword ptr [0x10064560] */
    _st[0] *= _st[3]; /* 0x100CA193: fmul st(3) */
    _st[0] -= *(double*)ADDR(0x10064570); /* 0x100CA195: fsub qword ptr [0x10064570] */
    _st[0] *= _st[3]; /* 0x100CA19B: fmul st(3) */
    _st[0] += *(double*)ADDR(0x10064588); /* 0x100CA19D: fadd qword ptr [0x10064588] */
    _st[0] *= _st[3]; /* 0x100CA1A3: fmul st(3) */
    _st[0] -= *(double*)ADDR(0x10064598); /* 0x100CA1A5: fsub qword ptr [0x10064598] */
    _st[0] *= _st[3]; /* 0x100CA1AB: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CA1AD: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100CA1AF: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA1B1: fmulp st(1) */
    ebp = POP32_VAL(esp); /* 0x100CA1B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA1B4: ret  */
L_100CA1B5:
    PUSH32(esp, ecx); /* 0x100CA1B5: push ecx */
    PUSH32(esp, ecx); /* 0x100CA1B6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA1B7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366FA); /* 0x100CA1BA: call 0x100366fa */
    RECOMP_FLAGS_IN();
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100CA1BF: fsub qword ptr [0x10067cd8] */
    ecx = POP32_VAL(esp); /* 0x100CA1C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA1C6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100CA1C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA1C8: ret  */
L_100CA1C9:
    eax = MEM32(ebp + 0xE); /* 0x100CA1C9: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CA1CC: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CA1CF: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA1DE; /* 0x100CA1D4: je 0x100ca1de */
L_100CA1D6:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100CA1D6: fld qword ptr [0x10067ce8] */
    ebp = POP32_VAL(esp); /* 0x100CA1DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA1DD: ret  */
L_100CA1DE:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA1DE: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CA1E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA1E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA1E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA1E3u);

L_100CA1E3:
    PUSH32(esp, ebp); /* 0x100CA1E3: push ebp */
    ebp = esp; /* 0x100CA1E4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA1E6: push ecx */
    eax = ebp + 0x8; /* 0x100CA1E7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA1EA: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CA1EB: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CA1F0: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CA1F1: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CA1F2: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA2A2; /* 0x100CA1F5: je 0x100ca2a2 */
L_100CA1FB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA1FB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA282; /* 0x100CA1FC: je 0x100ca282 */
L_100CA202:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA202: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA2A2; /* 0x100CA203: je 0x100ca2a2 */
L_100CA209:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CA209: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100CA2E8)); /* 0x100CA20C: fcom qword ptr [0x100ca2e8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA212: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA214: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA26A; /* 0x100CA217: jne 0x100ca26a */
L_100CA219:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100CA2D8)); /* 0x100CA219: fcom qword ptr [0x100ca2d8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA21F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100CA221: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA26A; /* 0x100CA224: jp 0x100ca26a */
L_100CA226:
    fp_push(*(double*)ADDR(0x100CA2B0)); /* 0x100CA226: fld qword ptr [0x100ca2b0] */
    _st[0] *= _st[1]; /* 0x100CA22C: fmul st(1) */
    _st[0] += *(double*)ADDR(0x100CA2B8); /* 0x100CA22E: fadd qword ptr [0x100ca2b8] */
    fp_push(_st[1]); /* 0x100CA234: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA236: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100CA2C8); /* 0x100CA238: fadd qword ptr [0x100ca2c8] */
    fp_push(_st[1]); /* 0x100CA23E: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA240: fmulp st(1) */
    fp_push(*(double*)ADDR(0x100CA2E0)); /* 0x100CA242: fld qword ptr [0x100ca2e0] */
    _st[1] += _st[0]; /* 0x100CA248: fadd st(1), st(0) */
    fp_push(_st[2]); /* 0x100CA24A: fld st(2) */
    _st[0] *= *(double*)ADDR(0x100CA2C0); /* 0x100CA24C: fmul qword ptr [0x100ca2c0] */
    _st[0] -= *(double*)ADDR(0x100CA2D0); /* 0x100CA252: fsub qword ptr [0x100ca2d0] */
    fp_push(_st[3]); /* 0x100CA258: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA25A: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CA25C: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100CA25E: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA260: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CA262: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CA265: fld dword ptr [ebp - 4] */
    goto L_100CA2A5; /* 0x100CA268: jmp 0x100ca2a5 */
L_100CA26A:
    PUSH32(esp, ecx); /* 0x100CA26A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100CA26B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C8FA0); /* 0x100CA26E: call 0x100c8fa0 */
    RECOMP_FLAGS_IN();
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100CA273: fsub qword ptr [0x10067cd8] */
    ecx = POP32_VAL(esp); /* 0x100CA279: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CA27A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CA27D: fld dword ptr [ebp - 4] */
    goto L_100CA2A5; /* 0x100CA280: jmp 0x100ca2a5 */
L_100CA282:
    eax = MEM32(ebp + 0xA); /* 0x100CA282: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100CA285: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CA288: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA297; /* 0x100CA28D: je 0x100ca297 */
L_100CA28F:
    fp_push(*(float*)&MEM32(0x10063D00)); /* 0x100CA28F: fld dword ptr [0x10063d00] */
    goto L_100CA29A; /* 0x100CA295: jmp 0x100ca29a */
L_100CA297:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CA297: fld dword ptr [ebp + 8] */
L_100CA29A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CA29A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CA29D: fld dword ptr [ebp - 4] */
    goto L_100CA2A5; /* 0x100CA2A0: jmp 0x100ca2a5 */
L_100CA2A2:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CA2A2: fld dword ptr [ebp + 8] */
L_100CA2A5:
    esp = ebp; /* 0x100CA2A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA2A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA2A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA2F0u);

L_100CA2F0:
    PUSH32(esp, ebp); /* 0x100CA2F0: push ebp */
    ebp = esp; /* 0x100CA2F1: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CA2F3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100CA2F6: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CA2F7: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100CA2FC: cwde  */
    ecx = POP32_VAL(esp); /* 0x100CA2FD: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100CA2FE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA3BD; /* 0x100CA301: je 0x100ca3bd */
L_100CA307:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA307: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA3A8; /* 0x100CA308: je 0x100ca3a8 */
L_100CA30E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA30E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA3BD; /* 0x100CA30F: je 0x100ca3bd */
L_100CA315:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA315: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x100645A8)); /* 0x100CA318: fcom qword ptr [0x100645a8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA31E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA320: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA394; /* 0x100CA323: jne 0x100ca394 */
L_100CA325:
    fp_push(*(double*)ADDR(0x10064590)); /* 0x100CA325: fld qword ptr [0x10064590] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA32B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA32D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA32F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA394; /* 0x100CA332: jne 0x100ca394 */
L_100CA334:
    fp_push(*(double*)ADDR(0x10064548)); /* 0x100CA334: fld qword ptr [0x10064548] */
    _st[0] *= _st[1]; /* 0x100CA33A: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064558); /* 0x100CA33C: fadd qword ptr [0x10064558] */
    _st[0] *= _st[1]; /* 0x100CA342: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064568); /* 0x100CA344: fadd qword ptr [0x10064568] */
    _st[0] *= _st[1]; /* 0x100CA34A: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064578); /* 0x100CA34C: fadd qword ptr [0x10064578] */
    _st[0] *= _st[1]; /* 0x100CA352: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10064580); /* 0x100CA354: fadd qword ptr [0x10064580] */
    _st[0] *= _st[1]; /* 0x100CA35A: fmul st(1) */
    fp_push(*(double*)ADDR(0x100645A0)); /* 0x100CA35C: fld qword ptr [0x100645a0] */
    _st[1] += _st[0]; /* 0x100CA362: fadd st(1), st(0) */
    fp_push(_st[2]); /* 0x100CA364: fld st(2) */
    _st[0] *= *(double*)ADDR(0x10064550); /* 0x100CA366: fmul qword ptr [0x10064550] */
    _st[0] = *(double*)ADDR(0x10064560) - _st[0]; /* 0x100CA36C: fsubr qword ptr [0x10064560] */
    _st[0] *= _st[3]; /* 0x100CA372: fmul st(3) */
    _st[0] -= *(double*)ADDR(0x10064570); /* 0x100CA374: fsub qword ptr [0x10064570] */
    _st[0] *= _st[3]; /* 0x100CA37A: fmul st(3) */
    _st[0] += *(double*)ADDR(0x10064588); /* 0x100CA37C: fadd qword ptr [0x10064588] */
    _st[0] *= _st[3]; /* 0x100CA382: fmul st(3) */
    _st[0] -= *(double*)ADDR(0x10064598); /* 0x100CA384: fsub qword ptr [0x10064598] */
    _st[0] *= _st[3]; /* 0x100CA38A: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100CA38C: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100CA38E: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100CA390: fmulp st(1) */
    ebp = POP32_VAL(esp); /* 0x100CA392: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA393: ret  */
L_100CA394:
    PUSH32(esp, ecx); /* 0x100CA394: push ecx */
    PUSH32(esp, ecx); /* 0x100CA395: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA396: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100366FA); /* 0x100CA399: call 0x100366fa */
    RECOMP_FLAGS_IN();
    _st[0] -= *(double*)ADDR(0x10067CD8); /* 0x100CA39E: fsub qword ptr [0x10067cd8] */
    ecx = POP32_VAL(esp); /* 0x100CA3A4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA3A5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100CA3A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA3A7: ret  */
L_100CA3A8:
    eax = MEM32(ebp + 0xE); /* 0x100CA3A8: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100CA3AB: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100CA3AE: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100CA3BD; /* 0x100CA3B3: je 0x100ca3bd */
L_100CA3B5:
    fp_push(*(double*)ADDR(0x10067CE8)); /* 0x100CA3B5: fld qword ptr [0x10067ce8] */
    ebp = POP32_VAL(esp); /* 0x100CA3BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA3BC: ret  */
L_100CA3BD:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA3BD: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100CA3C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA3C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA3C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA3C2u);

L_100CA3C2:
    PUSH32(esp, ebp); /* 0x100CA3C2: push ebp */
    ebp = esp; /* 0x100CA3C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA3C5: push ecx */
    PUSH32(esp, ecx); /* 0x100CA3C6: push ecx */
    fp_push(0.0); /* 0x100CA3C7: fldz  */
    PUSH32(esp, esi); /* 0x100CA3C9: push esi */
    PUSH32(esp, edi); /* 0x100CA3CA: push edi */
    edi = 0xFFFFu; /* 0x100CA3CB: mov edi, 0xffff */
    PUSH32(esp, edi); /* 0x100CA3D0: push edi */
    PUSH32(esp, 0x133Fu); /* 0x100CA3D1: push 0x133f */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100CA3D6: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100D3175); /* 0x100CA3D9: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA3DE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA3DF: pop ecx */
    ecx = MEM32(ebp + 0xE); /* 0x100CA3E0: mov ecx, dword ptr [ebp + 0xe] */
    esi = eax; /* 0x100CA3E3: mov esi, eax */
    eax = 0x7FF0u; /* 0x100CA3E5: mov eax, 0x7ff0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100CA3EA: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100CA3ED: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100CA3EF: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA45B; /* 0x100CA3F2: jne 0x100ca45b */
L_100CA3F4:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA3F4: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100CA3F7: push ecx */
    PUSH32(esp, ecx); /* 0x100CA3F8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA3F9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D305A); /* 0x100CA3FC: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA401: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA402: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA403: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA44F; /* 0x100CA404: je 0x100ca44f */
L_100CA406:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA406: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA441; /* 0x100CA407: je 0x100ca441 */
L_100CA409:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA409: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CA40C: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100CA40D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100CA430; /* 0x100CA40E: je 0x100ca430 */
L_100CA410:
    fp_push(*(double*)ADDR(0x10067CD8)); /* 0x100CA410: fld qword ptr [0x10067cd8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100CA416: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] += _st[1]; /* 0x100CA419: fadd st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100CA41B: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA41F: fstp qword ptr [esp] */
    PUSH32(esp, 0x15u); /* 0x100CA422: push 0x15 */
    PUSH32(esp, 8); /* 0x100CA424: push 8 */
    RECOMP_CALL(sub_100C006F); /* 0x100CA426: call 0x100c006f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100CA42B: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_100CA478; /* 0x100CA42E: jmp 0x100ca478 */
L_100CA430:
    PUSH32(esp, ecx); /* 0x100CA430: push ecx */
    PUSH32(esp, ecx); /* 0x100CA431: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100CA432: fstp qword ptr [esp] */
    PUSH32(esp, 0x15u); /* 0x100CA435: push 0x15 */
    RECOMP_CALL(sub_100C03F1); /* 0x100CA437: call 0x100c03f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100CA43C: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100CA478; /* 0x100CA43F: jmp 0x100ca478 */
L_100CA441:
    PUSH32(esp, edi); /* 0x100CA441: push edi */
    PUSH32(esp, esi); /* 0x100CA442: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100CA443: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA448: fld qword ptr [ebp + 8] */
    _st[0] = -_st[0]; /* 0x100CA44B: fchs  */
    goto L_100CA476; /* 0x100CA44D: jmp 0x100ca476 */
L_100CA44F:
    PUSH32(esp, edi); /* 0x100CA44F: push edi */
    PUSH32(esp, esi); /* 0x100CA450: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100CA451: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA456: fld qword ptr [ebp + 8] */
    goto L_100CA476; /* 0x100CA459: jmp 0x100ca476 */
L_100CA45B:
    eax = MEM32(ebp + 0xC); /* 0x100CA45B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x100CA45E: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100CA463: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100CA466: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100CA469: push edi */
    PUSH32(esp, esi); /* 0x100CA46A: push esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x100CA46B: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_100D3175); /* 0x100CA46E: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100CA473: fld qword ptr [ebp - 8] */
L_100CA476:
    ecx = POP32_VAL(esp); /* 0x100CA476: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100CA477: pop ecx */
L_100CA478:
    edi = POP32_VAL(esp); /* 0x100CA478: pop edi */
    esi = POP32_VAL(esp); /* 0x100CA479: pop esi */
    esp = ebp; /* 0x100CA47A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA47C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA47D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA47E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA47Eu);

L_100CA47E:
    PUSH32(esp, ebp); /* 0x100CA47E: push ebp */
    ebp = esp; /* 0x100CA47F: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CA481: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CA484: push esi */
    PUSH32(esp, eax); /* 0x100CA485: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CA486: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA48B: pop ecx */
    PUSH32(esp, 2); /* 0x100CA48C: push 2 */
    esi = POP32_VAL(esp); /* 0x100CA48E: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA48F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA499; /* 0x100CA492: jne 0x100ca499 */
L_100CA494:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA494: fld qword ptr [ebp + 8] */
    goto L_100CA4C1; /* 0x100CA497: jmp 0x100ca4c1 */
L_100CA499:
    eax = ebp + 0x10; /* 0x100CA499: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CA49C: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100CA49D: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA4A2: fld qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100CA4A5: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA4A6: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CA4C1; /* 0x100CA4A9: je 0x100ca4c1 */
L_100CA4AB:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA4AB: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA4AE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA4B0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA4B2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA4BF; /* 0x100CA4B5: jp 0x100ca4bf */
L_100CA4B7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA4B7: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA4B9: fstp st(0) */
    fp_push(0.0); /* 0x100CA4BB: fldz  */
    goto L_100CA4C1; /* 0x100CA4BD: jmp 0x100ca4c1 */
L_100CA4BF:
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CA4BF: fsubrp st(1) */
L_100CA4C1:
    esi = POP32_VAL(esp); /* 0x100CA4C1: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA4C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA4C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA4C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA4C4u);

L_100CA4C4:
    PUSH32(esp, ebp); /* 0x100CA4C4: push ebp */
    ebp = esp; /* 0x100CA4C5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100CA4C7: push ecx */
    eax = ebp + 0x8; /* 0x100CA4C8: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CA4CB: push esi */
    PUSH32(esp, eax); /* 0x100CA4CC: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CA4CD: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA4D2: pop ecx */
    PUSH32(esp, 2); /* 0x100CA4D3: push 2 */
    esi = POP32_VAL(esp); /* 0x100CA4D5: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA4D6: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA4E0; /* 0x100CA4D9: jne 0x100ca4e0 */
L_100CA4DB:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CA4DB: fld dword ptr [ebp + 8] */
    goto L_100CA513; /* 0x100CA4DE: jmp 0x100ca513 */
L_100CA4E0:
    eax = ebp + 0xC; /* 0x100CA4E0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100CA4E3: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100CA4E4: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA4E9: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA4EA: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA4F4; /* 0x100CA4ED: jne 0x100ca4f4 */
L_100CA4EF:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CA4EF: fld dword ptr [ebp + 0xc] */
    goto L_100CA513; /* 0x100CA4F2: jmp 0x100ca513 */
L_100CA4F4:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100CA4F4: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100CA4F7: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA4FA: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA4FC: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100CA4FE: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100CA50B; /* 0x100CA501: jne 0x100ca50b */
L_100CA503:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100CA503: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA505: fstp st(0) */
    fp_push(0.0); /* 0x100CA507: fldz  */
    goto L_100CA513; /* 0x100CA509: jmp 0x100ca513 */
L_100CA50B:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100CA50B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100CA50D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100CA510: fld dword ptr [ebp - 4] */
L_100CA513:
    esi = POP32_VAL(esp); /* 0x100CA513: pop esi */
    esp = ebp; /* 0x100CA514: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100CA516: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA517: ret  */
    RECOMP_REGS_OUT();
}

void sub_100CA518(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100CA518u);

L_100CA518:
    PUSH32(esp, ebp); /* 0x100CA518: push ebp */
    ebp = esp; /* 0x100CA519: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100CA51B: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100CA51E: push esi */
    PUSH32(esp, eax); /* 0x100CA51F: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CA520: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100CA525: pop ecx */
    PUSH32(esp, 2); /* 0x100CA526: push 2 */
    esi = POP32_VAL(esp); /* 0x100CA528: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA529: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100CA533; /* 0x100CA52C: jne 0x100ca533 */
L_100CA52E:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA52E: fld qword ptr [ebp + 8] */
    goto L_100CA55B; /* 0x100CA531: jmp 0x100ca55b */
L_100CA533:
    eax = ebp + 0x10; /* 0x100CA533: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100CA536: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100CA537: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100CA53C: fld qword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100CA53F: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100CA540: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100CA55B; /* 0x100CA543: je 0x100ca55b */
L_100CA545:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100CA545: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100CA548: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100CA54A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100CA54C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100CA559; /* 0x100CA54F: jp 0x100ca559 */
L_100CA551:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA551: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100CA553: fstp st(0) */
    fp_push(0.0); /* 0x100CA555: fldz  */
    goto L_100CA55B; /* 0x100CA557: jmp 0x100ca55b */
L_100CA559:
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100CA559: fsubrp st(1) */
L_100CA55B:
    esi = POP32_VAL(esp); /* 0x100CA55B: pop esi */
    ebp = POP32_VAL(esp); /* 0x100CA55C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100CA55D: ret  */
    RECOMP_REGS_OUT();
}
