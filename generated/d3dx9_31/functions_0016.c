#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170CA3DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA3DCu);

L_170CA3DC:
    edi = edi; /* 0x170CA3DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA3DE: push ebp */
    ebp = esp; /* 0x170CA3DF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA3E1: push esi */
    PUSH32(esp, 1); /* 0x170CA3E2: push 1 */
    PUSH32(esp, 8); /* 0x170CA3E4: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA3E6: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA3E9: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA3EB: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007540u; /* 0x170CA3F0: mov dword ptr [esi], 0x17007540 */
    eax = esi; /* 0x170CA3F6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA3F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA3F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA3FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA402(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA402u);

L_170CA402:
    edi = edi; /* 0x170CA402: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA404: push ebp */
    ebp = esp; /* 0x170CA405: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA407: push esi */
    esi = ecx; /* 0x170CA408: mov esi, ecx */
    RECOMP_CALL(sub_170C39B4); /* 0x170CA40A: call 0x170c39b4 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170CA40F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CA41C; /* 0x170CA413: je 0x170ca41c */
L_170CA415:
    PUSH32(esp, esi); /* 0x170CA415: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170CA416: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170CA41B: pop ecx */
L_170CA41C:
    eax = esi; /* 0x170CA41C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA41E: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA41F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA420: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA428u);

L_170CA428:
    edi = edi; /* 0x170CA428: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA42A: push ebp */
    ebp = esp; /* 0x170CA42B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x170CA42D: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CA430: push ebx */
    PUSH32(esp, esi); /* 0x170CA431: push esi */
    esi = ecx; /* 0x170CA432: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CA434: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CA438: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA446; /* 0x170CA439: je 0x170ca446 */
L_170CA43B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA43B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CA43E: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CA443: mov dword ptr [ebp + 0x10], eax */
L_170CA446:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CA446: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA459; /* 0x170CA44A: je 0x170ca459 */
L_170CA44C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA44C: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CA44F: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CA451: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CA456: mov dword ptr [ebp + 0x10], eax */
L_170CA459:
    eax = MEM32(ebp + 0x8); /* 0x170CA459: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CA45C: fldz  */
    edi = MEM32(esi + 0x68); /* 0x170CA45E: mov edi, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CA461: fstp dword ptr [ebp - 0x40] */
    edx = MEM32(esi + 0x60); /* 0x170CA464: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CA467: fldz  */
    ebx = MEM32(esi + 0x64); /* 0x170CA469: mov ebx, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CA46C: imul edx, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170CA46F: fstp dword ptr [ebp - 0x3c] */
    MEM32(ebp + 0x8) = eax; /* 0x170CA472: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CA475: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + (-0x1); /* 0x170CA479: lea ecx, [edi - 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CA47C: imul ecx, dword ptr [ebp + 8] */
    edx = edx + ecx * 4; /* 0x170CA480: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x170CA483: mov ecx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x170CA486: imul ebx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CA489: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CA48C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x170CA48F: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x20); /* 0x170CA491: add edx, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170CA494: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + eax * 8; /* 0x170CA498: lea eax, [ecx + eax*8] */
    ecx = MEM32(esi + 0x34); /* 0x170CA49B: mov ecx, dword ptr [esi + 0x34] */
    eax = ecx + eax * 4; /* 0x170CA49E: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x4)) = edx; /* 0x170CA4A1: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x170CA4A4: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CA4B0; /* 0x170CA4A7: jne 0x170ca4b0 */
L_170CA4A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CA4A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CA4AB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CA4AD: inc ebx */
    _flag_k = FK_INC;
    goto L_170CA4B4; /* 0x170CA4AE: jmp 0x170ca4b4 */
L_170CA4B0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170CA4B0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x170CA4B1: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CA4B4:
    MEM16(ebp + 0x8) = _fpu_cw; /* 0x170CA4B4: fnstcw word ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CA4B7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CA4BA: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x170CA4BF: mov dword ptr [ebp + 0xc], eax */
    _fpu_cw = MEM16(ebp + 0xC); /* 0x170CA4C2: fldcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x170CA4C5: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x7C) = eax; /* 0x170CA4C8: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CA4CB: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA4DB; /* 0x170CA4CF: je 0x170ca4db */
L_170CA4D1:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA4D1: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CA4D4: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CA4D6: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
L_170CA4DB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CA4DB: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x170CA4DF: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CA68F; /* 0x170CA4E3: jbe 0x170ca68f */
L_170CA4E9:
    eax = ebx; /* 0x170CA4E9: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170CA4EB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170CA4EB: shl eax, 2 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170CA4EE: mov dword ptr [ebp - 0x1c], eax */
    eax = edi; /* 0x170CA4F1: mov eax, edi */
    edx = ebx + edi; /* 0x170CA4F3: lea edx, [ebx + edi] */
    ecx = ebx; /* 0x170CA4F6: mov ecx, ebx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CA4F8: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CA4F8: shl ecx, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x170CA4FB: sub edi, ebx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CA4FD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CA4FD: shl eax, 4 */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x170CA500: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x170CA500: shl edx, 4 */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CA503: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CA503: shl edi, 4 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x170CA506: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + 0xC) = edi; /* 0x170CA509: mov dword ptr [ebp + 0xc], edi */
L_170CA50C:
    ecx = MEM32(ebp + 0x8); /* 0x170CA50C: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x170CA50F: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CA512: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(edi + ecx * 4)); /* 0x170CA515: fld dword ptr [edi + ecx*4] */
    ecx = MEM32(ebp + 0x10); /* 0x170CA518: mov ecx, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CA51B: fst dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170CA51E: add ecx, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CA520: fld dword ptr [ebp - 0x40] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x170CA523: fadd dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(0x17006020); /* 0x170CA525: fmul dword ptr [0x17006020] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170CA52B: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170CA52E: fld dword ptr [ebp - 0x3c] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x170CA531: fadd dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17006020); /* 0x170CA534: fmul dword ptr [0x17006020] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170CA53A: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170CA53D: fld dword ptr [ebp - 0x30] */
    _st[0] += _st[1]; /* 0x170CA540: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CA542: fstp dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CA545: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CA547: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA54A: fistp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170CA54D: fld dword ptr [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x10)); /* 0x170CA550: mov edi, dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170CA553: fadd dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x50)) = edi; /* 0x170CA556: mov dword ptr [ebp - 0x50], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CA559: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CA55C: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA55F: fistp dword ptr [ebp - 0x18] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CA562: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x170CA566: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x170CA569: mov dword ptr [ebp - 0x4c], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA612; /* 0x170CA56C: je 0x170ca612 */
L_170CA572:
    fp_push(*(float*)&MEM32(0x17006018)); /* 0x170CA572: fld dword ptr [0x17006018] */
    edi = MEM32(esi + 0x5C); /* 0x170CA578: mov edi, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x50))); /* 0x170CA57B: fild dword ptr [ebp - 0x50] */
    ebx = MEM32(ebp + 0xC); /* 0x170CA57E: mov ebx, dword ptr [ebp + 0xc] */
    edi = ebx + edi + 0x10; /* 0x170CA581: lea edi, [ebx + edi + 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x30)) - _st[0]; /* 0x170CA585: fsubr dword ptr [ebp - 0x30] */
    _st[0] *= _st[1]; /* 0x170CA588: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CA58A: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CA590: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA592: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA594: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CA596: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CA599: fld dword ptr [0x170074b0] */
    edi = eax + edi + 0x10; /* 0x170CA59F: lea edi, [eax + edi + 0x10] */
    _st[0] *= _st[1]; /* 0x170CA5A3: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA5A5: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA5A7: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CA5A9: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CA5AC: fld dword ptr [0x170018d4] */
    edi = edx + edi + 0x10; /* 0x170CA5B2: lea edi, [edx + edi + 0x10] */
    _st[0] *= _st[1]; /* 0x170CA5B6: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA5B8: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA5BA: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CA5BC: mov edi, dword ptr [esi + 0x5c] */
    edi = ebx + edi + 0x14; /* 0x170CA5BF: lea edi, [ebx + edi + 0x14] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CA5C3: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CA5C9: fstp dword ptr [ebp - 0x40] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4C))); /* 0x170CA5CC: fild dword ptr [ebp - 0x4c] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x2C)) - _st[0]; /* 0x170CA5CF: fsubr dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CA5D2: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CA5D4: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CA5DA: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA5DC: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA5DE: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CA5E0: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CA5E3: fld dword ptr [0x170074b0] */
    edi = eax + edi + 0x14; /* 0x170CA5E9: lea edi, [eax + edi + 0x14] */
    _st[0] *= _st[1]; /* 0x170CA5ED: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA5EF: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA5F1: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CA5F3: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CA5F6: fld dword ptr [0x170018d4] */
    edi = edx + edi + 0x14; /* 0x170CA5FC: lea edi, [edx + edi + 0x14] */
    _st[0] *= _st[1]; /* 0x170CA600: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CA602: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CA604: fstp dword ptr [edi] */
    edi = MEM32(ebp + (-0x50)); /* 0x170CA606: mov edi, dword ptr [ebp - 0x50] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CA609: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170CA60F: fstp dword ptr [ebp - 0x3c] */
L_170CA612:
    /* cmp edi, 0x7FFFu */ /* 0x170CA612: cmp edi, 0x7fff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = edi; /* 0x170CA618: mov ebx, edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CA621; /* 0x170CA61A: jl 0x170ca621 */
L_170CA61C:
    ebx = 0x7FFFu; /* 0x170CA61C: mov ebx, 0x7fff */
L_170CA621:
    /* cmp ebx, 0xFFFF8001u */ /* 0x170CA621: cmp ebx, 0xffff8001 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF8001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = 0x7FFFu; /* 0x170CA627: mov ebx, 0x7fff */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CA636; /* 0x170CA62C: jle 0x170ca636 */
L_170CA62E:
    /* cmp edi, ebx */ /* 0x170CA62E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CA63B; /* 0x170CA630: jl 0x170ca63b */
L_170CA632:
    edi = ebx; /* 0x170CA632: mov edi, ebx */
    goto L_170CA63B; /* 0x170CA634: jmp 0x170ca63b */
L_170CA636:
    edi = 0xFFFF8001u; /* 0x170CA636: mov edi, 0xffff8001 */
L_170CA63B:
    /* cmp ecx, ebx */ /* 0x170CA63B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x170CA63D: mov ebx, ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CA646; /* 0x170CA63F: jl 0x170ca646 */
L_170CA641:
    ebx = 0x7FFFu; /* 0x170CA641: mov ebx, 0x7fff */
L_170CA646:
    /* cmp ebx, 0xFFFF8001u */ /* 0x170CA646: cmp ebx, 0xffff8001 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF8001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CA65B; /* 0x170CA64C: jle 0x170ca65b */
L_170CA64E:
    ebx = 0x7FFFu; /* 0x170CA64E: mov ebx, 0x7fff */
    /* cmp ecx, ebx */ /* 0x170CA653: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CA660; /* 0x170CA655: jl 0x170ca660 */
L_170CA657:
    ecx = ebx; /* 0x170CA657: mov ecx, ebx */
    goto L_170CA660; /* 0x170CA659: jmp 0x170ca660 */
L_170CA65B:
    ecx = 0xFFFF8001u; /* 0x170CA65B: mov ecx, 0xffff8001 */
L_170CA660:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x170CA660: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x170CA660: shl ecx, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x170CA663: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x170CA669: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x4)); /* 0x170CA66B: mov edi, dword ptr [ebp - 4] */
    MEM32(edi) = ecx; /* 0x170CA66E: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x170CA670: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x1C)); /* 0x170CA673: add edi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ecx; /* 0x170CA676: add dword ptr [ebp + 0xc], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CA679: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170CA67B: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CA67D: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x170CA680: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(esi + 0x68) */ /* 0x170CA683: cmp ecx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170CA686: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CA50C; /* 0x170CA689: jb 0x170ca50c */
L_170CA68F:
    eax = MEM32(esi + 0x7C); /* 0x170CA68F: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CA692: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CA695: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CA698: pop edi */
    esi = POP32_VAL(esp); /* 0x170CA699: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CA69A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CA69B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CA69C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CA6A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA6A4u);

L_170CA6A4:
    edi = edi; /* 0x170CA6A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA6A6: push ebp */
    ebp = esp; /* 0x170CA6A7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA6A9: push esi */
    PUSH32(esp, 1); /* 0x170CA6AA: push 1 */
    PUSH32(esp, 8); /* 0x170CA6AC: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA6AE: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA6B1: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA6B3: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007550u; /* 0x170CA6B8: mov dword ptr [esi], 0x17007550 */
    eax = esi; /* 0x170CA6BE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA6C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA6C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA6C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA6CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA6CAu);

L_170CA6CA:
    edi = edi; /* 0x170CA6CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA6CC: push ebp */
    ebp = esp; /* 0x170CA6CD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA6CF: push esi */
    PUSH32(esp, 1); /* 0x170CA6D0: push 1 */
    PUSH32(esp, 0x10u); /* 0x170CA6D2: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA6D4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA6D7: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA6D9: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007560u; /* 0x170CA6DE: mov dword ptr [esi], 0x17007560 */
    eax = esi; /* 0x170CA6E4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA6E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA6E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA6E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA6F0u);

L_170CA6F0:
    edi = edi; /* 0x170CA6F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA6F2: push ebp */
    ebp = esp; /* 0x170CA6F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA6F5: push esi */
    PUSH32(esp, 1); /* 0x170CA6F6: push 1 */
    PUSH32(esp, 0x10u); /* 0x170CA6F8: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA6FA: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA6FD: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA6FF: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007570u; /* 0x170CA704: mov dword ptr [esi], 0x17007570 */
    eax = esi; /* 0x170CA70A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA70C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA70D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA70E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA716u);

L_170CA716:
    edi = edi; /* 0x170CA716: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA718: push ebp */
    ebp = esp; /* 0x170CA719: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA71B: push esi */
    PUSH32(esp, 1); /* 0x170CA71C: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CA71E: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA720: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA723: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA725: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007580u; /* 0x170CA72A: mov dword ptr [esi], 0x17007580 */
    eax = esi; /* 0x170CA730: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA732: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA734: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA73C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA73Cu);

L_170CA73C:
    edi = edi; /* 0x170CA73C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA73E: push ebp */
    ebp = esp; /* 0x170CA73F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA741: push esi */
    PUSH32(esp, 1); /* 0x170CA742: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CA744: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA746: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA749: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA74B: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007590u; /* 0x170CA750: mov dword ptr [esi], 0x17007590 */
    eax = esi; /* 0x170CA756: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA758: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA759: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA75A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA762(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA762u);

L_170CA762:
    edi = edi; /* 0x170CA762: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA764: push ebp */
    ebp = esp; /* 0x170CA765: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA767: push esi */
    PUSH32(esp, 1); /* 0x170CA768: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CA76A: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA76C: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA76F: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA771: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075A0u; /* 0x170CA776: mov dword ptr [esi], 0x170075a0 */
    eax = esi; /* 0x170CA77C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA77E: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA77F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA780: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA788u);

L_170CA788:
    edi = edi; /* 0x170CA788: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA78A: push ebp */
    ebp = esp; /* 0x170CA78B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CA78D: push esi */
    PUSH32(esp, 1); /* 0x170CA78E: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CA790: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CA792: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CA795: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CA797: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075B0u; /* 0x170CA79C: mov dword ptr [esi], 0x170075b0 */
    eax = esi; /* 0x170CA7A2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CA7A4: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CA7A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CA7A6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CA7AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CA7AEu);

L_170CA7AE:
    edi = edi; /* 0x170CA7AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CA7B0: push ebp */
    ebp = esp; /* 0x170CA7B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x170CA7B3: sub esp, 0x54 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CA7B6: push ebx */
    PUSH32(esp, esi); /* 0x170CA7B7: push esi */
    esi = ecx; /* 0x170CA7B8: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CA7BA: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CA7BE: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA7CC; /* 0x170CA7BF: je 0x170ca7cc */
L_170CA7C1:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA7C1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CA7C4: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CA7C9: mov dword ptr [ebp + 0x10], eax */
L_170CA7CC:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CA7CC: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA7DF; /* 0x170CA7D0: je 0x170ca7df */
L_170CA7D2:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA7D2: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CA7D5: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CA7D7: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CA7DC: mov dword ptr [ebp + 0x10], eax */
L_170CA7DF:
    eax = MEM32(ebp + 0x8); /* 0x170CA7DF: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CA7E2: fldz  */
    edi = MEM32(esi + 0x68); /* 0x170CA7E4: mov edi, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x170CA7E7: fstp dword ptr [ebp - 0x54] */
    edx = MEM32(esi + 0x60); /* 0x170CA7EA: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CA7ED: fldz  */
    ebx = MEM32(esi + 0x64); /* 0x170CA7EF: mov ebx, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CA7F2: imul edx, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CA7F5: fstp dword ptr [ebp - 0x50] */
    fp_push(0.0); /* 0x170CA7F8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170CA7FA: fstp dword ptr [ebp - 0x4c] */
    fp_push(0.0); /* 0x170CA7FD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170CA7FF: fstp dword ptr [ebp - 0x48] */
    MEM32(ebp + 0x8) = eax; /* 0x170CA802: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CA805: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + (-0x1); /* 0x170CA809: lea ecx, [edi - 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CA80C: imul ecx, dword ptr [ebp + 8] */
    ecx = edx + ecx * 4; /* 0x170CA810: lea ecx, [edx + ecx*4] */
    edx = MEM32(ebp + 0xC); /* 0x170CA813: mov edx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x170CA816: imul ebx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170CA819: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x20); /* 0x170CA81B: add ecx, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CA81E: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CA821: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170CA824: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x170CA828: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(esi + 0x34); /* 0x170CA82B: mov ecx, dword ptr [esi + 0x34] */
    eax = edx + eax * 8; /* 0x170CA82E: lea eax, [edx + eax*8] */
    eax = ecx + eax * 4; /* 0x170CA831: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170CA834: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CA840; /* 0x170CA837: jne 0x170ca840 */
L_170CA839:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CA839: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CA83B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CA83D: inc ebx */
    _flag_k = FK_INC;
    goto L_170CA844; /* 0x170CA83E: jmp 0x170ca844 */
L_170CA840:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170CA840: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x170CA841: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CA844:
    MEM16(ebp + 0x8) = _fpu_cw; /* 0x170CA844: fnstcw word ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CA847: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CA84A: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x170CA84F: mov dword ptr [ebp + 0xc], eax */
    _fpu_cw = MEM16(ebp + 0xC); /* 0x170CA852: fldcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x170CA855: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x7C) = eax; /* 0x170CA858: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CA85B: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CA86B; /* 0x170CA85F: je 0x170ca86b */
L_170CA861:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CA861: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CA864: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CA866: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
L_170CA86B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CA86B: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x170CA86F: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CAB78; /* 0x170CA873: jbe 0x170cab78 */
L_170CA879:
    edx = MEM32(ebp + 0x10); /* 0x170CA879: mov edx, dword ptr [ebp + 0x10] */
    eax = ebx; /* 0x170CA87C: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170CA87E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170CA87E: shl eax, 2 */
    MEM32(ebp + (-0x20)) = eax; /* 0x170CA881: mov dword ptr [ebp - 0x20], eax */
    eax = edi; /* 0x170CA884: mov eax, edi */
    ecx = ebx; /* 0x170CA886: mov ecx, ebx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CA888: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CA888: shl ecx, 4 */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CA88B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CA88B: shl eax, 4 */
    MEM32(ebp + (-0x24)) = ecx; /* 0x170CA88E: mov dword ptr [ebp - 0x24], ecx */
    ecx = ebx + edi; /* 0x170CA891: lea ecx, [ebx + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x170CA894: sub edi, ebx */
    _flag_k = FK_CMP;
    edx = eax + edx + 0x8; /* 0x170CA896: lea edx, [eax + edx + 8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CA89A: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CA89A: shl ecx, 4 */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CA89D: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CA89D: shl edi, 4 */
    MEM32(ebp + 0xC) = edx; /* 0x170CA8A0: mov dword ptr [ebp + 0xc], edx */
L_170CA8A3:
    edx = MEM32(ebp + 0x8); /* 0x170CA8A3: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x170CA8A6: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CA8A9: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebx + edx * 4)); /* 0x170CA8AC: fld dword ptr [ebx + edx*4] */
    edx = MEM32(ebp + 0xC); /* 0x170CA8AF: mov edx, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CA8B2: fst dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x170CA8B5: fld dword ptr [ebp - 0x54] */
    _st[0] += (double)*(float*)ADDR(edx + (-0x8)); /* 0x170CA8B8: fadd dword ptr [edx - 8] */
    _st[0] *= (double)*(float*)ADDR(0x1700601C); /* 0x170CA8BB: fmul dword ptr [0x1700601c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CA8C1: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x170CA8C4: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(edx + (-0x4)); /* 0x170CA8C7: fadd dword ptr [edx - 4] */
    _st[0] *= (double)*(float*)ADDR(0x1700601C); /* 0x170CA8CA: fmul dword ptr [0x1700601c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CA8D0: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x170CA8D3: fld dword ptr [ebp - 0x4c] */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170CA8D6: fadd dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(0x1700601C); /* 0x170CA8D8: fmul dword ptr [0x1700601c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170CA8DE: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170CA8E1: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(edx + 0x4); /* 0x170CA8E4: fadd dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x170CA8E7: fmul dword ptr [0x17001da0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170CA8ED: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170CA8F0: fld dword ptr [ebp - 0x44] */
    _st[0] += _st[1]; /* 0x170CA8F3: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CA8F5: fstp dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CA8F8: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CA8FA: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA8FD: fistp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CA900: fld dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x10)); /* 0x170CA903: mov edx, dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CA906: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x34)) = edx; /* 0x170CA909: mov dword ptr [ebp - 0x34], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CA90C: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CA90F: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA912: fistp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170CA915: fld dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x14)); /* 0x170CA918: mov edx, dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CA91B: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x30)) = edx; /* 0x170CA91E: mov dword ptr [ebp - 0x30], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CA921: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CA924: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA927: fistp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170CA92A: fld dword ptr [ebp - 0x38] */
    edx = MEM32(ebp + (-0x18)); /* 0x170CA92D: mov edx, dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CA930: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x170CA933: mov dword ptr [ebp - 0x2c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CA936: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CA939: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1C)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CA93C: fistp dword ptr [ebp - 0x1c] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CA93F: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x1C)); /* 0x170CA943: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x28)) = ebx; /* 0x170CA946: mov dword ptr [ebp - 0x28], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CAA81; /* 0x170CA949: je 0x170caa81 */
L_170CA94F:
    fp_push(*(float*)&MEM32(0x17006010)); /* 0x170CA94F: fld dword ptr [0x17006010] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA955: mov ebx, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x34))); /* 0x170CA958: fild dword ptr [ebp - 0x34] */
    ebx = ebx + edi + 0x10; /* 0x170CA95B: lea ebx, [ebx + edi + 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x44)) - _st[0]; /* 0x170CA95F: fsubr dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x170CA962: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CA964: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CA96A: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA96C: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA96E: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA970: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CA973: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x10; /* 0x170CA979: lea ebx, [ebx + eax + 0x10] */
    _st[0] *= _st[1]; /* 0x170CA97D: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA97F: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA981: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA983: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CA986: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x10; /* 0x170CA98C: lea ebx, [ebx + ecx + 0x10] */
    _st[0] *= _st[1]; /* 0x170CA990: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA992: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA994: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA996: mov ebx, dword ptr [esi + 0x5c] */
    ebx = ebx + edi + 0x14; /* 0x170CA999: lea ebx, [ebx + edi + 0x14] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CA99D: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x170CA9A3: fstp dword ptr [ebp - 0x54] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x30))); /* 0x170CA9A6: fild dword ptr [ebp - 0x30] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x40)) - _st[0]; /* 0x170CA9A9: fsubr dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x170CA9AC: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CA9AE: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CA9B4: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA9B6: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA9B8: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA9BA: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CA9BD: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x14; /* 0x170CA9C3: lea ebx, [ebx + eax + 0x14] */
    _st[0] *= _st[1]; /* 0x170CA9C7: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA9C9: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA9CB: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA9CD: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CA9D0: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x14; /* 0x170CA9D6: lea ebx, [ebx + ecx + 0x14] */
    _st[0] *= _st[1]; /* 0x170CA9DA: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CA9DC: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CA9DE: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CA9E0: mov ebx, dword ptr [esi + 0x5c] */
    ebx = ebx + edi + 0x18; /* 0x170CA9E3: lea ebx, [ebx + edi + 0x18] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CA9E7: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CA9ED: fstp dword ptr [ebp - 0x50] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x2C))); /* 0x170CA9F0: fild dword ptr [ebp - 0x2c] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x3C)) - _st[0]; /* 0x170CA9F3: fsubr dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CA9F6: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CA9F8: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CA9FE: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA00: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA02: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CAA04: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAA07: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x18; /* 0x170CAA0D: lea ebx, [ebx + eax + 0x18] */
    _st[0] *= _st[1]; /* 0x170CAA11: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA13: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA15: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CAA17: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAA1A: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x18; /* 0x170CAA20: lea ebx, [ebx + ecx + 0x18] */
    _st[0] *= _st[1]; /* 0x170CAA24: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA26: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA28: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CAA2A: mov ebx, dword ptr [esi + 0x5c] */
    ebx = ebx + edi + 0x1C; /* 0x170CAA2D: lea ebx, [ebx + edi + 0x1c] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAA31: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170CAA37: fstp dword ptr [ebp - 0x4c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x170CAA3A: fild dword ptr [ebp - 0x28] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x38)) - _st[0]; /* 0x170CAA3D: fsubr dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CAA40: fmul dword ptr [0x1700600c] */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CAA46: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CAA4C: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA4E: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA50: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CAA52: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAA55: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x1C; /* 0x170CAA5B: lea ebx, [ebx + eax + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CAA5F: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA61: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA63: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CAA65: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAA68: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x1C; /* 0x170CAA6E: lea ebx, [ebx + ecx + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CAA72: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CAA74: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CAA76: fstp dword ptr [ebx] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAA78: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170CAA7E: fstp dword ptr [ebp - 0x48] */
L_170CAA81:
    ebx = MEM32(ebp + (-0x34)); /* 0x170CAA81: mov ebx, dword ptr [ebp - 0x34] */
    /* cmp ebx, 0x1FFu */ /* 0x170CAA84: cmp ebx, 0x1ff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAA91; /* 0x170CAA8A: jl 0x170caa91 */
L_170CAA8C:
    ebx = 0x1FFu; /* 0x170CAA8C: mov ebx, 0x1ff */
L_170CAA91:
    /* cmp ebx, 0xFFFFFE01u */ /* 0x170CAA91: cmp ebx, 0xfffffe01 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFE01u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAAAB; /* 0x170CAA97: jle 0x170caaab */
L_170CAA99:
    /* cmp MEM32(ebp + (-0x34)), 0x1FFu */ /* 0x170CAA99: cmp dword ptr [ebp - 0x34], 0x1ff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAAB2; /* 0x170CAAA0: jl 0x170caab2 */
L_170CAAA2:
    MEM32(ebp + (-0x34)) = 0x1FFu; /* 0x170CAAA2: mov dword ptr [ebp - 0x34], 0x1ff */
    goto L_170CAAB2; /* 0x170CAAA9: jmp 0x170caab2 */
L_170CAAAB:
    MEM32(ebp + (-0x34)) = 0xFFFFFE01u; /* 0x170CAAAB: mov dword ptr [ebp - 0x34], 0xfffffe01 */
L_170CAAB2:
    ebx = MEM32(ebp + (-0x30)); /* 0x170CAAB2: mov ebx, dword ptr [ebp - 0x30] */
    /* cmp ebx, 0x1FFu */ /* 0x170CAAB5: cmp ebx, 0x1ff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAAC2; /* 0x170CAABB: jl 0x170caac2 */
L_170CAABD:
    ebx = 0x1FFu; /* 0x170CAABD: mov ebx, 0x1ff */
L_170CAAC2:
    /* cmp ebx, 0xFFFFFE01u */ /* 0x170CAAC2: cmp ebx, 0xfffffe01 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFE01u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAADC; /* 0x170CAAC8: jle 0x170caadc */
L_170CAACA:
    /* cmp MEM32(ebp + (-0x30)), 0x1FFu */ /* 0x170CAACA: cmp dword ptr [ebp - 0x30], 0x1ff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAAE3; /* 0x170CAAD1: jl 0x170caae3 */
L_170CAAD3:
    MEM32(ebp + (-0x30)) = 0x1FFu; /* 0x170CAAD3: mov dword ptr [ebp - 0x30], 0x1ff */
    goto L_170CAAE3; /* 0x170CAADA: jmp 0x170caae3 */
L_170CAADC:
    MEM32(ebp + (-0x30)) = 0xFFFFFE01u; /* 0x170CAADC: mov dword ptr [ebp - 0x30], 0xfffffe01 */
L_170CAAE3:
    /* cmp edx, 0x1FFu */ /* 0x170CAAE3: cmp edx, 0x1ff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = edx; /* 0x170CAAE9: mov ebx, edx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAAF2; /* 0x170CAAEB: jl 0x170caaf2 */
L_170CAAED:
    ebx = 0x1FFu; /* 0x170CAAED: mov ebx, 0x1ff */
L_170CAAF2:
    /* cmp ebx, 0xFFFFFE01u */ /* 0x170CAAF2: cmp ebx, 0xfffffe01 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFE01u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAB07; /* 0x170CAAF8: jle 0x170cab07 */
L_170CAAFA:
    ebx = 0x1FFu; /* 0x170CAAFA: mov ebx, 0x1ff */
    /* cmp edx, ebx */ /* 0x170CAAFF: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAB0C; /* 0x170CAB01: jl 0x170cab0c */
L_170CAB03:
    edx = ebx; /* 0x170CAB03: mov edx, ebx */
    goto L_170CAB0C; /* 0x170CAB05: jmp 0x170cab0c */
L_170CAB07:
    edx = 0xFFFFFE01u; /* 0x170CAB07: mov edx, 0xfffffe01 */
L_170CAB0C:
    ebx = MEM32(ebp + (-0x28)); /* 0x170CAB0C: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp ebx, 3 */ /* 0x170CAB0F: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAB17; /* 0x170CAB12: jl 0x170cab17 */
L_170CAB14:
    PUSH32(esp, 3); /* 0x170CAB14: push 3 */
    ebx = POP32_VAL(esp); /* 0x170CAB16: pop ebx */
L_170CAB17:
    /* cmp ebx, 0xFFFFFFFDu */ /* 0x170CAB17: cmp ebx, -3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAB28; /* 0x170CAB1A: jle 0x170cab28 */
L_170CAB1C:
    ebx = MEM32(ebp + (-0x28)); /* 0x170CAB1C: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp ebx, 3 */ /* 0x170CAB1F: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAB2B; /* 0x170CAB22: jl 0x170cab2b */
L_170CAB24:
    PUSH32(esp, 3); /* 0x170CAB24: push 3 */
    goto L_170CAB2A; /* 0x170CAB26: jmp 0x170cab2a */
L_170CAB28:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x170CAB28: push -3 */
L_170CAB2A:
    ebx = POP32_VAL(esp); /* 0x170CAB2A: pop ebx */
L_170CAB2B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x170CAB2B: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (10u) _cf = (((ebx) >> 22) & 1u); /* 0x170CAB31: shl ebx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ebx << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 10u; /* 0x170CAB31: shl ebx, 0xa */
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x170CAB34: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x30)); /* 0x170CAB36: mov ebx, dword ptr [ebp - 0x30] */
    if (10u) _cf = (((edx) >> 22) & 1u); /* 0x170CAB39: shl edx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((edx << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 10u; /* 0x170CAB39: shl edx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x170CAB3C: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x170CAB42: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x34)); /* 0x170CAB44: mov ebx, dword ptr [ebp - 0x34] */
    if (10u) _cf = (((edx) >> 22) & 1u); /* 0x170CAB47: shl edx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((edx << 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 10u; /* 0x170CAB47: shl edx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x170CAB4A: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x170CAB50: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x4)); /* 0x170CAB52: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebx) = edx; /* 0x170CAB55: mov dword ptr [ebx], edx */
    edx = MEM32(ebp + (-0x24)); /* 0x170CAB57: mov edx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x20)); /* 0x170CAB5A: add ebx, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edx; /* 0x170CAB5D: add dword ptr [ebp + 0xc], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CAB60: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x170CAB62: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x170CAB64: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CAB66: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + 0x8); /* 0x170CAB69: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x68) */ /* 0x170CAB6C: cmp edx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x170CAB6F: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CA8A3; /* 0x170CAB72: jb 0x170ca8a3 */
L_170CAB78:
    eax = MEM32(esi + 0x7C); /* 0x170CAB78: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CAB7B: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CAB7E: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CAB81: pop edi */
    esi = POP32_VAL(esp); /* 0x170CAB82: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CAB83: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CAB84: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CAB85: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CAB8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CAB8Du);

L_170CAB8D:
    edi = edi; /* 0x170CAB8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAB8F: push ebp */
    ebp = esp; /* 0x170CAB90: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CAB92: push esi */
    PUSH32(esp, 1); /* 0x170CAB93: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CAB95: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CAB97: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CAB9A: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CAB9C: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075C0u; /* 0x170CABA1: mov dword ptr [esi], 0x170075c0 */
    eax = esi; /* 0x170CABA7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CABA9: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CABAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CABAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CABB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CABB3u);

L_170CABB3:
    edi = edi; /* 0x170CABB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CABB5: push ebp */
    ebp = esp; /* 0x170CABB6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CABB8: push esi */
    PUSH32(esp, 1); /* 0x170CABB9: push 1 */
    PUSH32(esp, 0x40u); /* 0x170CABBB: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CABBD: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CABC0: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CABC2: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075D0u; /* 0x170CABC7: mov dword ptr [esi], 0x170075d0 */
    eax = esi; /* 0x170CABCD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CABCF: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CABD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CABD1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CABD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CABD9u);

L_170CABD9:
    edi = edi; /* 0x170CABD9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CABDB: push ebp */
    ebp = esp; /* 0x170CABDC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CABDE: push esi */
    PUSH32(esp, 1); /* 0x170CABDF: push 1 */
    PUSH32(esp, 0x10u); /* 0x170CABE1: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CABE3: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CABE6: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CABE8: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075E0u; /* 0x170CABED: mov dword ptr [esi], 0x170075e0 */
    eax = esi; /* 0x170CABF3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CABF5: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CABF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CABF7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CABFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CABFFu);

L_170CABFF:
    edi = edi; /* 0x170CABFF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAC01: push ebp */
    ebp = esp; /* 0x170CAC02: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CAC04: push esi */
    PUSH32(esp, 1); /* 0x170CAC05: push 1 */
    PUSH32(esp, 8); /* 0x170CAC07: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CAC09: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CAC0C: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CAC0E: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170075F0u; /* 0x170CAC13: mov dword ptr [esi], 0x170075f0 */
    eax = esi; /* 0x170CAC19: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CAC1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CAC1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CAC1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CAC25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CAC25u);

L_170CAC25:
    edi = edi; /* 0x170CAC25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAC27: push ebp */
    ebp = esp; /* 0x170CAC28: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CAC2A: push esi */
    PUSH32(esp, 1); /* 0x170CAC2B: push 1 */
    PUSH32(esp, 8); /* 0x170CAC2D: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CAC2F: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CAC32: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CAC34: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007600u; /* 0x170CAC39: mov dword ptr [esi], 0x17007600 */
    eax = esi; /* 0x170CAC3F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CAC41: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CAC42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CAC43: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CAC4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CAC4Bu);

L_170CAC4B:
    edi = edi; /* 0x170CAC4B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAC4D: push ebp */
    ebp = esp; /* 0x170CAC4E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CAC50: push esi */
    PUSH32(esp, 1); /* 0x170CAC51: push 1 */
    PUSH32(esp, 0x10u); /* 0x170CAC53: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CAC55: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CAC58: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CAC5A: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007610u; /* 0x170CAC5F: mov dword ptr [esi], 0x17007610 */
    eax = esi; /* 0x170CAC65: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CAC67: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CAC68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CAC69: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CAC71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CAC71u);

L_170CAC71:
    edi = edi; /* 0x170CAC71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAC73: push ebp */
    ebp = esp; /* 0x170CAC74: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CAC76: push esi */
    PUSH32(esp, 1); /* 0x170CAC77: push 1 */
    PUSH32(esp, 8); /* 0x170CAC79: push 8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CAC7B: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CAC7E: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CAC80: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007620u; /* 0x170CAC85: mov dword ptr [esi], 0x17007620 */
    eax = esi; /* 0x170CAC8B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CAC8D: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CAC8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CAC8F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CAC97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CAC97u);

L_170CAC97:
    edi = edi; /* 0x170CAC97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CAC99: push ebp */
    ebp = esp; /* 0x170CAC9A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x170CAC9C: sub esp, 0x5c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CAC9F: push ebx */
    PUSH32(esp, esi); /* 0x170CACA0: push esi */
    esi = ecx; /* 0x170CACA1: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CACA3: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CACA7: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CACB5; /* 0x170CACA8: je 0x170cacb5 */
L_170CACAA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CACAA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CACAD: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CACB2: mov dword ptr [ebp + 0x10], eax */
L_170CACB5:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CACB5: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CACC8; /* 0x170CACB9: je 0x170cacc8 */
L_170CACBB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CACBB: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CACBE: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CACC0: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CACC5: mov dword ptr [ebp + 0x10], eax */
L_170CACC8:
    eax = MEM32(ebp + 0x8); /* 0x170CACC8: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CACCB: fldz  */
    edi = MEM32(esi + 0x68); /* 0x170CACCD: mov edi, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x170CACD0: fstp dword ptr [ebp - 0x5c] */
    edx = MEM32(esi + 0x60); /* 0x170CACD3: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CACD6: fldz  */
    ebx = MEM32(esi + 0x64); /* 0x170CACD8: mov ebx, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CACDB: imul edx, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x170CACDE: fstp dword ptr [ebp - 0x58] */
    fp_push(0.0); /* 0x170CACE1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x170CACE3: fstp dword ptr [ebp - 0x54] */
    fp_push(0.0); /* 0x170CACE6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CACE8: fstp dword ptr [ebp - 0x50] */
    MEM32(ebp + 0x8) = eax; /* 0x170CACEB: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CACEE: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + (-0x1); /* 0x170CACF2: lea ecx, [edi - 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CACF5: imul ecx, dword ptr [ebp + 8] */
    ecx = edx + ecx * 8; /* 0x170CACF9: lea ecx, [edx + ecx*8] */
    edx = MEM32(ebp + 0xC); /* 0x170CACFC: mov edx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x170CACFF: imul ebx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170CAD02: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x20); /* 0x170CAD04: add ecx, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CAD07: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CAD0A: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170CAD0D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x170CAD11: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(esi + 0x34); /* 0x170CAD14: mov ecx, dword ptr [esi + 0x34] */
    eax = edx + eax * 8; /* 0x170CAD17: lea eax, [edx + eax*8] */
    eax = ecx + eax * 4; /* 0x170CAD1A: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170CAD1D: mov dword ptr [ebp - 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CAD29; /* 0x170CAD20: jne 0x170cad29 */
L_170CAD22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CAD22: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CAD24: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CAD26: inc ebx */
    _flag_k = FK_INC;
    goto L_170CAD2D; /* 0x170CAD27: jmp 0x170cad2d */
L_170CAD29:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170CAD29: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x170CAD2A: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CAD2D:
    MEM16(ebp + 0x8) = _fpu_cw; /* 0x170CAD2D: fnstcw word ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CAD30: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CAD33: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x170CAD38: mov dword ptr [ebp + 0xc], eax */
    _fpu_cw = MEM16(ebp + 0xC); /* 0x170CAD3B: fldcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x170CAD3E: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x7C) = eax; /* 0x170CAD41: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CAD44: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CAD54; /* 0x170CAD48: je 0x170cad54 */
L_170CAD4A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CAD4A: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CAD4D: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CAD4F: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
L_170CAD54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CAD54: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x170CAD58: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB05C; /* 0x170CAD5C: jbe 0x170cb05c */
L_170CAD62:
    eax = ebx; /* 0x170CAD62: mov eax, ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170CAD64: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170CAD64: shl eax, 3 */
    MEM32(ebp + (-0x28)) = eax; /* 0x170CAD67: mov dword ptr [ebp - 0x28], eax */
    eax = ebx; /* 0x170CAD6A: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CAD6C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CAD6C: shl eax, 4 */
    ecx = edi; /* 0x170CAD6F: mov ecx, edi */
    edx = ebx + edi; /* 0x170CAD71: lea edx, [ebx + edi] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x170CAD74: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x10); /* 0x170CAD77: mov eax, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CAD7A: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CAD7A: shl ecx, 4 */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x170CAD7D: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x170CAD7D: shl edx, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x170CAD80: sub edi, ebx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CAD82: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CAD82: shl edi, 4 */
    eax = ecx + eax + 0x8; /* 0x170CAD85: lea eax, [ecx + eax + 8] */
    MEM32(ebp + (-0xC)) = edx; /* 0x170CAD89: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = edi; /* 0x170CAD8C: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + 0xC) = eax; /* 0x170CAD8F: mov dword ptr [ebp + 0xc], eax */
L_170CAD92:
    eax = MEM32(ebp + 0x8); /* 0x170CAD92: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17006020)); /* 0x170CAD95: fld dword ptr [0x17006020] */
    ebx = MEM32(ebp + (-0x10)); /* 0x170CAD9B: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CAD9E: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x170CADA1: fld dword ptr [ebx + eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x170CADA4: mov eax, dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CADA7: fst dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x170CADAA: fld dword ptr [ebp - 0x5c] */
    _st[0] += (double)*(float*)ADDR(eax + (-0x8)); /* 0x170CADAD: fadd dword ptr [eax - 8] */
    _st[0] *= _st[2]; /* 0x170CADB0: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170CADB2: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x170CADB5: fld dword ptr [ebp - 0x58] */
    _st[0] += (double)*(float*)ADDR(eax + (-0x4)); /* 0x170CADB8: fadd dword ptr [eax - 4] */
    _st[0] *= _st[2]; /* 0x170CADBB: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170CADBD: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x170CADC0: fld dword ptr [ebp - 0x54] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CADC3: fadd dword ptr [eax] */
    _st[0] *= _st[2]; /* 0x170CADC5: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CADC7: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x170CADCA: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x170CADCD: fadd dword ptr [eax + 4] */
    _st[0] *= _st[2]; /* 0x170CADD0: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CADD2: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x170CADD5: fld dword ptr [ebp - 0x4c] */
    _st[0] += _st[1]; /* 0x170CADD8: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CADDA: fstp dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CADDD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CADDF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CADE1: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CADE4: fistp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170CADE7: fld dword ptr [ebp - 0x48] */
    ebx = MEM32(ebp + (-0x18)); /* 0x170CADEA: mov ebx, dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CADED: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x170CADF0: mov dword ptr [ebp - 0x3c], ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CADF3: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CADF6: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CADF9: fistp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170CADFC: fld dword ptr [ebp - 0x44] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170CADFF: mov eax, dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CAE02: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = eax; /* 0x170CAE05: mov dword ptr [ebp - 0x38], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CAE08: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CAE0B: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CAE0E: fistp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CAE11: fld dword ptr [ebp - 0x40] */
    eax = MEM32(ebp + (-0x20)); /* 0x170CAE14: mov eax, dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170CAE17: fadd dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x34)) = eax; /* 0x170CAE1A: mov dword ptr [ebp - 0x34], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CAE1D: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CAE20: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x24)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CAE23: fistp dword ptr [ebp - 0x24] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CAE26: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x24)); /* 0x170CAE2A: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x30)) = eax; /* 0x170CAE2D: mov dword ptr [ebp - 0x30], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CAF64; /* 0x170CAE30: je 0x170caf64 */
L_170CAE36:
    fp_push(*(float*)&MEM32(0x17006018)); /* 0x170CAE36: fld dword ptr [0x17006018] */
    eax = MEM32(esi + 0x5C); /* 0x170CAE3C: mov eax, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x3C))); /* 0x170CAE3F: fild dword ptr [ebp - 0x3c] */
    eax = eax + edi + 0x10; /* 0x170CAE42: lea eax, [eax + edi + 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4C)) - _st[0]; /* 0x170CAE46: fsubr dword ptr [ebp - 0x4c] */
    _st[0] *= _st[1]; /* 0x170CAE49: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CAE4B: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CAE51: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAE53: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAE55: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAE57: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAE5A: fld dword ptr [0x170074b0] */
    eax = eax + ecx + 0x10; /* 0x170CAE60: lea eax, [eax + ecx + 0x10] */
    _st[0] *= _st[1]; /* 0x170CAE64: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAE66: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAE68: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAE6A: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAE6D: fld dword ptr [0x170018d4] */
    eax = eax + edx + 0x10; /* 0x170CAE73: lea eax, [eax + edx + 0x10] */
    _st[0] *= _st[1]; /* 0x170CAE77: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAE79: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAE7B: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAE7D: mov eax, dword ptr [esi + 0x5c] */
    eax = eax + edi + 0x14; /* 0x170CAE80: lea eax, [eax + edi + 0x14] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAE84: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x170CAE8A: fstp dword ptr [ebp - 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x38))); /* 0x170CAE8D: fild dword ptr [ebp - 0x38] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x48)) - _st[0]; /* 0x170CAE90: fsubr dword ptr [ebp - 0x48] */
    _st[0] *= _st[1]; /* 0x170CAE93: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CAE95: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CAE9B: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAE9D: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAE9F: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAEA1: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAEA4: fld dword ptr [0x170074b0] */
    eax = eax + ecx + 0x14; /* 0x170CAEAA: lea eax, [eax + ecx + 0x14] */
    _st[0] *= _st[1]; /* 0x170CAEAE: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAEB0: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAEB2: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAEB4: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAEB7: fld dword ptr [0x170018d4] */
    eax = eax + edx + 0x14; /* 0x170CAEBD: lea eax, [eax + edx + 0x14] */
    _st[0] *= _st[1]; /* 0x170CAEC1: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAEC3: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAEC5: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAEC7: mov eax, dword ptr [esi + 0x5c] */
    eax = eax + edi + 0x18; /* 0x170CAECA: lea eax, [eax + edi + 0x18] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAECE: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x170CAED4: fstp dword ptr [ebp - 0x58] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x34))); /* 0x170CAED7: fild dword ptr [ebp - 0x34] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x44)) - _st[0]; /* 0x170CAEDA: fsubr dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x170CAEDD: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CAEDF: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CAEE5: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAEE7: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAEE9: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAEEB: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAEEE: fld dword ptr [0x170074b0] */
    eax = eax + ecx + 0x18; /* 0x170CAEF4: lea eax, [eax + ecx + 0x18] */
    _st[0] *= _st[1]; /* 0x170CAEF8: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAEFA: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAEFC: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAEFE: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAF01: fld dword ptr [0x170018d4] */
    eax = eax + edx + 0x18; /* 0x170CAF07: lea eax, [eax + edx + 0x18] */
    _st[0] *= _st[1]; /* 0x170CAF0B: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAF0D: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAF0F: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAF11: mov eax, dword ptr [esi + 0x5c] */
    eax = eax + edi + 0x1C; /* 0x170CAF14: lea eax, [eax + edi + 0x1c] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAF18: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x170CAF1E: fstp dword ptr [ebp - 0x54] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x30))); /* 0x170CAF21: fild dword ptr [ebp - 0x30] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x40)) - _st[0]; /* 0x170CAF24: fsubr dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CAF27: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CAF29: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CAF2F: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAF31: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAF33: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAF35: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CAF38: fld dword ptr [0x170074b0] */
    eax = eax + ecx + 0x1C; /* 0x170CAF3E: lea eax, [eax + ecx + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CAF42: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAF44: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAF46: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CAF48: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CAF4B: fld dword ptr [0x170018d4] */
    eax = eax + edx + 0x1C; /* 0x170CAF51: lea eax, [eax + edx + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CAF55: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CAF57: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CAF59: fstp dword ptr [eax] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CAF5B: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CAF61: fstp dword ptr [ebp - 0x50] */
L_170CAF64:
    eax = 0x7FFFu; /* 0x170CAF64: mov eax, 0x7fff */
    /* cmp ebx, eax */ /* 0x170CAF69: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebx; /* 0x170CAF6B: mov edi, ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAF71; /* 0x170CAF6D: jl 0x170caf71 */
L_170CAF6F:
    edi = eax; /* 0x170CAF6F: mov edi, eax */
L_170CAF71:
    edx = 0xFFFF8001u; /* 0x170CAF71: mov edx, 0xffff8001 */
    /* cmp edi, edx */ /* 0x170CAF76: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAF83; /* 0x170CAF78: jle 0x170caf83 */
L_170CAF7A:
    /* cmp ebx, eax */ /* 0x170CAF7A: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAF86; /* 0x170CAF7C: jl 0x170caf86 */
L_170CAF7E:
    MEM32(ebp + (-0x3C)) = eax; /* 0x170CAF7E: mov dword ptr [ebp - 0x3c], eax */
    goto L_170CAF86; /* 0x170CAF81: jmp 0x170caf86 */
L_170CAF83:
    MEM32(ebp + (-0x3C)) = edx; /* 0x170CAF83: mov dword ptr [ebp - 0x3c], edx */
L_170CAF86:
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x170CAF86: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x38)); /* 0x170CAF89: mov edi, dword ptr [ebp - 0x38] */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAF90; /* 0x170CAF8C: jl 0x170caf90 */
L_170CAF8E:
    edi = eax; /* 0x170CAF8E: mov edi, eax */
L_170CAF90:
    /* cmp edi, edx */ /* 0x170CAF90: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAF9E; /* 0x170CAF92: jle 0x170caf9e */
L_170CAF94:
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x170CAF94: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAFA1; /* 0x170CAF97: jl 0x170cafa1 */
L_170CAF99:
    MEM32(ebp + (-0x38)) = eax; /* 0x170CAF99: mov dword ptr [ebp - 0x38], eax */
    goto L_170CAFA1; /* 0x170CAF9C: jmp 0x170cafa1 */
L_170CAF9E:
    MEM32(ebp + (-0x38)) = edx; /* 0x170CAF9E: mov dword ptr [ebp - 0x38], edx */
L_170CAFA1:
    /* cmp MEM32(ebp + (-0x34)), eax */ /* 0x170CAFA1: cmp dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x34)); /* 0x170CAFA4: mov edi, dword ptr [ebp - 0x34] */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAFAB; /* 0x170CAFA7: jl 0x170cafab */
L_170CAFA9:
    edi = eax; /* 0x170CAFA9: mov edi, eax */
L_170CAFAB:
    /* cmp edi, edx */ /* 0x170CAFAB: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAFB9; /* 0x170CAFAD: jle 0x170cafb9 */
L_170CAFAF:
    /* cmp MEM32(ebp + (-0x34)), eax */ /* 0x170CAFAF: cmp dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAFBC; /* 0x170CAFB2: jl 0x170cafbc */
L_170CAFB4:
    MEM32(ebp + (-0x34)) = eax; /* 0x170CAFB4: mov dword ptr [ebp - 0x34], eax */
    goto L_170CAFBC; /* 0x170CAFB7: jmp 0x170cafbc */
L_170CAFB9:
    MEM32(ebp + (-0x34)) = edx; /* 0x170CAFB9: mov dword ptr [ebp - 0x34], edx */
L_170CAFBC:
    /* cmp MEM32(ebp + (-0x30)), eax */ /* 0x170CAFBC: cmp dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x30)); /* 0x170CAFBF: mov edi, dword ptr [ebp - 0x30] */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAFC6; /* 0x170CAFC2: jl 0x170cafc6 */
L_170CAFC4:
    edi = eax; /* 0x170CAFC4: mov edi, eax */
L_170CAFC6:
    /* cmp edi, edx */ /* 0x170CAFC6: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CAFD4; /* 0x170CAFC8: jle 0x170cafd4 */
L_170CAFCA:
    /* cmp MEM32(ebp + (-0x30)), eax */ /* 0x170CAFCA: cmp dword ptr [ebp - 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CAFD7; /* 0x170CAFCD: jl 0x170cafd7 */
L_170CAFCF:
    MEM32(ebp + (-0x30)) = eax; /* 0x170CAFCF: mov dword ptr [ebp - 0x30], eax */
    goto L_170CAFD7; /* 0x170CAFD2: jmp 0x170cafd7 */
L_170CAFD4:
    MEM32(ebp + (-0x30)) = edx; /* 0x170CAFD4: mov dword ptr [ebp - 0x30], edx */
L_170CAFD7:
    eax = MEM32(ebp + (-0x30)); /* 0x170CAFD7: mov eax, dword ptr [ebp - 0x30] */
    edi = 0xFFFFu; /* 0x170CAFDA: mov edi, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x170CAFDF: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x170CAFE1: cdq  */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x170CAFE2: shld edx, eax, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(eax) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(eax) >> (32 - (16u)))) : (edx));
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x170CAFE6: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x170CAFE6: shl eax, 0x10 */
    ebx = eax; /* 0x170CAFE9: mov ebx, eax */
    eax = edx; /* 0x170CAFEB: mov eax, edx */
    MEM32(ebp + 0x10) = eax; /* 0x170CAFED: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x170CAFF0: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x170CAFF3: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x170CAFF5: cdq  */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x170CAFF6: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x170CAFF8: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x170CAFFB: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x170CAFFD: shld eax, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (eax));
    edi = eax; /* 0x170CB001: mov edi, eax */
    eax = MEM32(ebp + (-0x38)); /* 0x170CB003: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x170CB006: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x170CB00B: cdq  */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x170CB00C: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x170CB00E: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x170CB00E: shl ebx, 0x10 */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x170CB011: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x3C)); /* 0x170CB013: mov eax, dword ptr [ebp - 0x3c] */
    if (1) _cf = (((edi) >> 16) & 1u); /* 0x170CB016: shld edi, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edi));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x170CB01A: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x170CB01F: cdq  */
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x170CB020: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0xC)); /* 0x170CB022: mov edx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x170CB025: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x170CB025: shl ebx, 0x10 */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x170CB028: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x170CB02A: mov eax, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = edi; /* 0x170CB02D: mov dword ptr [eax + 4], edi */
    edi = MEM32(ebp + (-0x8)); /* 0x170CB030: mov edi, dword ptr [ebp - 8] */
    MEM32(eax) = ebx; /* 0x170CB033: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x170CB035: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x170CB038: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x170CB03B: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x170CB03E: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170CB041: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CB043: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170CB045: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CB047: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x170CB04A: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x68) */ /* 0x170CB04D: cmp eax, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x170CB050: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x170CB053: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CAD92; /* 0x170CB056: jb 0x170cad92 */
L_170CB05C:
    eax = MEM32(esi + 0x7C); /* 0x170CB05C: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CB05F: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CB062: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CB065: pop edi */
    esi = POP32_VAL(esp); /* 0x170CB066: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CB067: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CB068: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB069: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB071u);

L_170CB071:
    edi = edi; /* 0x170CB071: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB073: push ebp */
    ebp = esp; /* 0x170CB074: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB076: push esi */
    PUSH32(esp, 2); /* 0x170CB077: push 2 */
    PUSH32(esp, 0x10u); /* 0x170CB079: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB07B: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB07E: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB080: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007640u; /* 0x170CB085: mov dword ptr [esi], 0x17007640 */
    eax = esi; /* 0x170CB08B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB08D: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB08E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB08F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB097(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB097u);

L_170CB097:
    edi = edi; /* 0x170CB097: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB099: push ebp */
    ebp = esp; /* 0x170CB09A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB09C: push esi */
    PUSH32(esp, 2); /* 0x170CB09D: push 2 */
    PUSH32(esp, 0x10u); /* 0x170CB09F: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB0A1: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB0A4: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB0A6: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007650u; /* 0x170CB0AB: mov dword ptr [esi], 0x17007650 */
    eax = esi; /* 0x170CB0B1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB0B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB0B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB0B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB0BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB0BDu);

L_170CB0BD:
    edi = edi; /* 0x170CB0BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB0BF: push ebp */
    ebp = esp; /* 0x170CB0C0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB0C2: push esi */
    PUSH32(esp, 2); /* 0x170CB0C3: push 2 */
    PUSH32(esp, 0x20u); /* 0x170CB0C5: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB0C7: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB0CA: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB0CC: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007660u; /* 0x170CB0D1: mov dword ptr [esi], 0x17007660 */
    eax = esi; /* 0x170CB0D7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB0D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB0DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB0DB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB0E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB0E3u);

L_170CB0E3:
    edi = edi; /* 0x170CB0E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB0E5: push ebp */
    ebp = esp; /* 0x170CB0E6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB0E8: push esi */
    PUSH32(esp, 3); /* 0x170CB0E9: push 3 */
    PUSH32(esp, 0x20u); /* 0x170CB0EB: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB0ED: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB0F0: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB0F2: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007670u; /* 0x170CB0F7: mov dword ptr [esi], 0x17007670 */
    eax = esi; /* 0x170CB0FD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB0FF: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB100: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB101: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB109(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB109u);

L_170CB109:
    edi = edi; /* 0x170CB109: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB10B: push ebp */
    ebp = esp; /* 0x170CB10C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB10E: push esi */
    PUSH32(esp, 2); /* 0x170CB10F: push 2 */
    PUSH32(esp, 0x20u); /* 0x170CB111: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB113: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB116: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB118: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007680u; /* 0x170CB11D: mov dword ptr [esi], 0x17007680 */
    eax = esi; /* 0x170CB123: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB125: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB126: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB127: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB12F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB12Fu);

L_170CB12F:
    edi = edi; /* 0x170CB12F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB131: push ebp */
    ebp = esp; /* 0x170CB132: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB134: push esi */
    PUSH32(esp, 2); /* 0x170CB135: push 2 */
    PUSH32(esp, 0x20u); /* 0x170CB137: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB139: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB13C: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB13E: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007690u; /* 0x170CB143: mov dword ptr [esi], 0x17007690 */
    eax = esi; /* 0x170CB149: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB14B: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB14C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB14D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB155(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB155u);

L_170CB155:
    edi = edi; /* 0x170CB155: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB157: push ebp */
    ebp = esp; /* 0x170CB158: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x170CB15A: sub esp, 0x54 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CB15D: push ebx */
    PUSH32(esp, esi); /* 0x170CB15E: push esi */
    esi = ecx; /* 0x170CB15F: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CB161: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CB165: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB173; /* 0x170CB166: je 0x170cb173 */
L_170CB168:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB168: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CB16B: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB170: mov dword ptr [ebp + 0x10], eax */
L_170CB173:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CB173: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB186; /* 0x170CB177: je 0x170cb186 */
L_170CB179:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB179: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CB17C: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB17E: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB183: mov dword ptr [ebp + 0x10], eax */
L_170CB186:
    eax = MEM32(ebp + 0x8); /* 0x170CB186: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CB189: fldz  */
    ebx = MEM32(esi + 0x68); /* 0x170CB18B: mov ebx, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CB18E: fstp dword ptr [ebp - 0x44] */
    edx = MEM32(esi + 0x60); /* 0x170CB191: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CB194: fldz  */
    edi = MEM32(esi + 0x64); /* 0x170CB196: mov edi, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CB199: imul edx, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CB19C: fstp dword ptr [ebp - 0x40] */
    MEM32(ebp + 0x8) = eax; /* 0x170CB19F: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CB1A2: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + (-0x1); /* 0x170CB1A6: lea ecx, [ebx - 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB1A9: imul ecx, dword ptr [ebp + 8] */
    edx = edx + ecx * 2; /* 0x170CB1AD: lea edx, [edx + ecx*2] */
    ecx = MEM32(ebp + 0xC); /* 0x170CB1B0: mov ecx, dword ptr [ebp + 0xc] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x170CB1B3: imul edi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CB1B6: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CB1B9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170CB1BC: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x20); /* 0x170CB1BE: add edx, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    eax = ecx + eax * 8; /* 0x170CB1C1: lea eax, [ecx + eax*8] */
    ecx = MEM32(esi + 0x34); /* 0x170CB1C4: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CB1C7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x170CB1C9: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + eax * 4; /* 0x170CB1CC: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x170CB1CF: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x170CB1D2: mov dword ptr [ebp - 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CB1E2; /* 0x170CB1D5: jne 0x170cb1e2 */
L_170CB1D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CB1D7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 1; /* 0x170CB1D9: mov dword ptr [ebp + 8], 1 */
    goto L_170CB1E7; /* 0x170CB1E0: jmp 0x170cb1e7 */
L_170CB1E2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170CB1E2: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 0xFFFFFFFFu; /* 0x170CB1E3: or dword ptr [ebp + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CB1E7:
    MEM16(ebp + 0xC) = _fpu_cw; /* 0x170CB1E7: fnstcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x170CB1EA: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CB1ED: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170CB1F2: mov dword ptr [ebp - 4], eax */
    _fpu_cw = MEM16(ebp + (-0x4)); /* 0x170CB1F5: fldcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x170CB1F8: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x7C) = eax; /* 0x170CB1FB: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x5C), edi */ /* 0x170CB1FE: cmp dword ptr [esi + 0x5c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB20D; /* 0x170CB201: je 0x170cb20d */
L_170CB203:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB203: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CB206: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CB208: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
L_170CB20D:
    /* cmp MEM32(esi + 0x68), edi */ /* 0x170CB20D: cmp dword ptr [esi + 0x68], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170CB210: mov dword ptr [ebp - 4], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB3B5; /* 0x170CB213: jbe 0x170cb3b5 */
L_170CB219:
    eax = MEM32(ebp + 0x8); /* 0x170CB219: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x170CB21C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x170CB21F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x170CB221: mov dword ptr [ebp - 0x20], eax */
    eax = ecx; /* 0x170CB224: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CB226: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CB226: shl eax, 4 */
    edi = ebx; /* 0x170CB229: mov edi, ebx */
    MEM32(ebp + (-0x24)) = eax; /* 0x170CB22B: mov dword ptr [ebp - 0x24], eax */
    eax = ecx + ebx; /* 0x170CB22E: lea eax, [ecx + ebx] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CB231: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CB231: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170CB234: sub ebx, ecx */
    _flag_k = FK_CMP;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CB236: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CB236: shl edi, 4 */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x170CB239: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x170CB239: shl ebx, 4 */
    MEM32(ebp + 0xC) = eax; /* 0x170CB23C: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + 0x8) = ebx; /* 0x170CB23F: mov dword ptr [ebp + 8], ebx */
L_170CB242:
    eax = MEM32(ebp + 0x10); /* 0x170CB242: mov eax, dword ptr [ebp + 0x10] */
    ebx = edi + eax; /* 0x170CB245: lea ebx, [edi + eax] */
    PUSH32(esp, ebx); /* 0x170CB248: push ebx */
    PUSH32(esp, ebx); /* 0x170CB249: push ebx */
    RECOMP_CALL(sub_17040B68); /* 0x170CB24A: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170CB24F: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x170CB252: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CB255: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x170CB258: fld dword ptr [ecx + eax*4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170CB25B: fst dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(0x170074CC)); /* 0x170CB25E: fld dword ptr [0x170074cc] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170CB264: fld dword ptr [ebp - 0x44] */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CB267: fadd dword ptr [ebx] */
    _st[0] *= _st[1]; /* 0x170CB269: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170CB26B: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CB26E: fld dword ptr [ebp - 0x40] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x4); /* 0x170CB271: fadd dword ptr [ebx + 4] */
    _st[0] *= _st[1]; /* 0x170CB274: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170CB276: fstp dword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CB279: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x170CB27B: fld dword ptr [ebp - 0x34] */
    _st[0] += _st[1]; /* 0x170CB27E: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170CB280: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CB283: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x170CB285: fld dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CB288: fistp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170CB28B: fld dword ptr [ebp - 0x30] */
    edx = MEM32(ebp + (-0x14)); /* 0x170CB28E: mov edx, dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170CB291: fadd dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x54)) = edx; /* 0x170CB294: mov dword ptr [ebp - 0x54], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170CB297: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170CB29A: fld dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CB29D: fistp dword ptr [ebp - 0x1c] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CB2A0: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x1C)); /* 0x170CB2A4: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x170CB2A7: mov dword ptr [ebp - 0x50], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB356; /* 0x170CB2AA: je 0x170cb356 */
L_170CB2B0:
    fp_push(*(float*)&MEM32(0x170074C8)); /* 0x170CB2B0: fld dword ptr [0x170074c8] */
    eax = MEM32(esi + 0x5C); /* 0x170CB2B6: mov eax, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x54))); /* 0x170CB2B9: fild dword ptr [ebp - 0x54] */
    ebx = MEM32(ebp + 0x8); /* 0x170CB2BC: mov ebx, dword ptr [ebp + 8] */
    eax = eax + ebx + 0x10; /* 0x170CB2BF: lea eax, [eax + ebx + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x170CB2C3: mov ebx, dword ptr [ebp + 0xc] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x34)) - _st[0]; /* 0x170CB2C6: fsubr dword ptr [ebp - 0x34] */
    _st[0] *= _st[1]; /* 0x170CB2C9: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CB2CB: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CB2D1: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB2D3: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB2D5: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CB2D7: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CB2DA: fld dword ptr [0x170074b0] */
    eax = edi + eax + 0x10; /* 0x170CB2E0: lea eax, [edi + eax + 0x10] */
    _st[0] *= _st[1]; /* 0x170CB2E4: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB2E6: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB2E8: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CB2EA: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CB2ED: fld dword ptr [0x170018d4] */
    eax = eax + ebx + 0x10; /* 0x170CB2F3: lea eax, [eax + ebx + 0x10] */
    _st[0] *= _st[1]; /* 0x170CB2F7: fmul st(1) */
    ebx = MEM32(ebp + 0x8); /* 0x170CB2F9: mov ebx, dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB2FC: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB2FE: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CB300: mov eax, dword ptr [esi + 0x5c] */
    eax = eax + ebx + 0x14; /* 0x170CB303: lea eax, [eax + ebx + 0x14] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CB307: fmul qword ptr [0x170074a8] */
    ebx = MEM32(ebp + 0xC); /* 0x170CB30D: mov ebx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CB310: fstp dword ptr [ebp - 0x44] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x50))); /* 0x170CB313: fild dword ptr [ebp - 0x50] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x30)) - _st[0]; /* 0x170CB316: fsubr dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CB319: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CB31B: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CB321: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB323: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB325: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CB327: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CB32A: fld dword ptr [0x170074b0] */
    eax = edi + eax + 0x14; /* 0x170CB330: lea eax, [edi + eax + 0x14] */
    _st[0] *= _st[1]; /* 0x170CB334: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB336: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB338: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x5C); /* 0x170CB33A: mov eax, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CB33D: fld dword ptr [0x170018d4] */
    eax = eax + ebx + 0x14; /* 0x170CB343: lea eax, [eax + ebx + 0x14] */
    _st[0] *= _st[1]; /* 0x170CB347: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x170CB349: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB34B: fstp dword ptr [eax] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CB34D: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CB353: fstp dword ptr [ebp - 0x40] */
L_170CB356:
    PUSH32(esp, 0x7Fu); /* 0x170CB356: push 0x7f */
    ebx = POP32_VAL(esp); /* 0x170CB358: pop ebx */
    /* cmp edx, ebx */ /* 0x170CB359: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx; /* 0x170CB35B: mov eax, edx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB361; /* 0x170CB35D: jl 0x170cb361 */
L_170CB35F:
    eax = ebx; /* 0x170CB35F: mov eax, ebx */
L_170CB361:
    /* cmp eax, 0xFFFFFF81u */ /* 0x170CB361: cmp eax, -0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF81u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CB36E; /* 0x170CB364: jle 0x170cb36e */
L_170CB366:
    /* cmp edx, ebx */ /* 0x170CB366: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB371; /* 0x170CB368: jl 0x170cb371 */
L_170CB36A:
    edx = ebx; /* 0x170CB36A: mov edx, ebx */
    goto L_170CB371; /* 0x170CB36C: jmp 0x170cb371 */
L_170CB36E:
    PUSH32(esp, 0xFFFFFF81u); /* 0x170CB36E: push -0x7f */
    edx = POP32_VAL(esp); /* 0x170CB370: pop edx */
L_170CB371:
    /* cmp ecx, ebx */ /* 0x170CB371: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx; /* 0x170CB373: mov eax, ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB379; /* 0x170CB375: jl 0x170cb379 */
L_170CB377:
    eax = ebx; /* 0x170CB377: mov eax, ebx */
L_170CB379:
    /* cmp eax, 0xFFFFFF81u */ /* 0x170CB379: cmp eax, -0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF81u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170CB386; /* 0x170CB37C: jle 0x170cb386 */
L_170CB37E:
    /* cmp ecx, ebx */ /* 0x170CB37E: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB389; /* 0x170CB380: jl 0x170cb389 */
L_170CB382:
    ecx = ebx; /* 0x170CB382: mov ecx, ebx */
    goto L_170CB389; /* 0x170CB384: jmp 0x170cb389 */
L_170CB386:
    PUSH32(esp, 0xFFFFFF81u); /* 0x170CB386: push -0x7f */
    ecx = POP32_VAL(esp); /* 0x170CB388: pop ecx */
L_170CB389:
    eax = MEM32(ebp + (-0x8)); /* 0x170CB389: mov eax, dword ptr [ebp - 8] */
    SET_LO16(edx, (uint32_t)LO8(edx)); /* 0x170CB38C: movzx dx, dl */
    SET_HI8(edx, LO8(ecx)); /* 0x170CB390: mov dh, cl */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x170CB392: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x170CB395: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x170CB398: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x170CB39B: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x170CB39E: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x170CB3A1: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170CB3A4: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170CB3A6: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170CB3A9: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi + 0x68) */ /* 0x170CB3AC: cmp eax, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB242; /* 0x170CB3AF: jb 0x170cb242 */
L_170CB3B5:
    eax = MEM32(esi + 0x7C); /* 0x170CB3B5: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CB3B8: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CB3BB: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CB3BE: pop edi */
    esi = POP32_VAL(esp); /* 0x170CB3BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CB3C0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CB3C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB3C2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB3CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB3CAu);

L_170CB3CA:
    edi = edi; /* 0x170CB3CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB3CC: push ebp */
    ebp = esp; /* 0x170CB3CD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB3CF: push esi */
    PUSH32(esp, 3); /* 0x170CB3D0: push 3 */
    PUSH32(esp, 0x40u); /* 0x170CB3D2: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB3D4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB3D7: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB3D9: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076A0u; /* 0x170CB3DE: mov dword ptr [esi], 0x170076a0 */
    eax = esi; /* 0x170CB3E4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB3E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB3E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB3E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB3F0u);

L_170CB3F0:
    edi = edi; /* 0x170CB3F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB3F2: push ebp */
    ebp = esp; /* 0x170CB3F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB3F5: push esi */
    PUSH32(esp, 2); /* 0x170CB3F6: push 2 */
    PUSH32(esp, 0x10u); /* 0x170CB3F8: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB3FA: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB3FD: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB3FF: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076B0u; /* 0x170CB404: mov dword ptr [esi], 0x170076b0 */
    eax = esi; /* 0x170CB40A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB40C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB40D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB40E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB416(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB416u);

L_170CB416:
    edi = edi; /* 0x170CB416: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB418: push ebp */
    ebp = esp; /* 0x170CB419: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB41B: push esi */
    PUSH32(esp, 1); /* 0x170CB41C: push 1 */
    PUSH32(esp, 0x10u); /* 0x170CB41E: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB420: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB423: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB425: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007630u; /* 0x170CB42A: mov dword ptr [esi], 0x17007630 */
    eax = esi; /* 0x170CB430: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB432: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB433: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB434: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB43C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB43Cu);

L_170CB43C:
    edi = edi; /* 0x170CB43C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB43E: push ebp */
    ebp = esp; /* 0x170CB43F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB441: push esi */
    PUSH32(esp, 4); /* 0x170CB442: push 4 */
    PUSH32(esp, 0x10u); /* 0x170CB444: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB446: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB449: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB44B: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076D0u; /* 0x170CB450: mov dword ptr [esi], 0x170076d0 */
    eax = esi; /* 0x170CB456: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB458: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB459: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB45A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB462(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB462u);

L_170CB462:
    edi = edi; /* 0x170CB462: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB464: push ebp */
    ebp = esp; /* 0x170CB465: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB467: push esi */
    PUSH32(esp, 4); /* 0x170CB468: push 4 */
    PUSH32(esp, 0x20u); /* 0x170CB46A: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB46C: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB46F: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB471: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076E0u; /* 0x170CB476: mov dword ptr [esi], 0x170076e0 */
    eax = esi; /* 0x170CB47C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB47E: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB47F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB480: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB488u);

L_170CB488:
    edi = edi; /* 0x170CB488: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB48A: push ebp */
    ebp = esp; /* 0x170CB48B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB48D: push esi */
    PUSH32(esp, 4); /* 0x170CB48E: push 4 */
    PUSH32(esp, 0x40u); /* 0x170CB490: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB492: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB495: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB497: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076F0u; /* 0x170CB49C: mov dword ptr [esi], 0x170076f0 */
    eax = esi; /* 0x170CB4A2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB4A4: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB4A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB4A6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB4AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB4AEu);

L_170CB4AE:
    edi = edi; /* 0x170CB4AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB4B0: push ebp */
    ebp = esp; /* 0x170CB4B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB4B3: push esi */
    PUSH32(esp, 4); /* 0x170CB4B4: push 4 */
    PUSH32(esp, 0x20u); /* 0x170CB4B6: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB4B8: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB4BB: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB4BD: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170076C0u; /* 0x170CB4C2: mov dword ptr [esi], 0x170076c0 */
    eax = esi; /* 0x170CB4C8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB4CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB4CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB4CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB4D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB4D4u);

L_170CB4D4:
    edi = edi; /* 0x170CB4D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB4D6: push ebp */
    ebp = esp; /* 0x170CB4D7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB4D9: push esi */
    PUSH32(esp, 4); /* 0x170CB4DA: push 4 */
    PUSH32(esp, 0x40u); /* 0x170CB4DC: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB4DE: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB4E1: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB4E3: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007700u; /* 0x170CB4E8: mov dword ptr [esi], 0x17007700 */
    eax = esi; /* 0x170CB4EE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB4F0: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB4F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB4F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB4FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB4FAu);

L_170CB4FA:
    edi = edi; /* 0x170CB4FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB4FC: push ebp */
    ebp = esp; /* 0x170CB4FD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB4FF: push esi */
    PUSH32(esp, 4); /* 0x170CB500: push 4 */
    PUSH32(esp, 0x80u); /* 0x170CB502: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB507: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB50A: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB50C: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007710u; /* 0x170CB511: mov dword ptr [esi], 0x17007710 */
    eax = esi; /* 0x170CB517: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB519: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB51A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB51B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB523(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB523u);

L_170CB523:
    edi = edi; /* 0x170CB523: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB525: push ebp */
    ebp = esp; /* 0x170CB526: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB528: push esi */
    PUSH32(esp, 1); /* 0x170CB529: push 1 */
    PUSH32(esp, 0x20u); /* 0x170CB52B: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB52D: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB530: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB532: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007720u; /* 0x170CB537: mov dword ptr [esi], 0x17007720 */
    eax = esi; /* 0x170CB53D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB53F: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB540: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB541: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB549u);

L_170CB549:
    edi = edi; /* 0x170CB549: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB54B: push ebp */
    ebp = esp; /* 0x170CB54C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB54E: push esi */
    PUSH32(esp, 1); /* 0x170CB54F: push 1 */
    PUSH32(esp, 0x30u); /* 0x170CB551: push 0x30 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CB553: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CB556: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CB558: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007730u; /* 0x170CB55D: mov dword ptr [esi], 0x17007730 */
    eax = esi; /* 0x170CB563: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CB565: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB566: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CB567: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CB56F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB56Fu);

L_170CB56F:
    edi = edi; /* 0x170CB56F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB571: push ebp */
    ebp = esp; /* 0x170CB572: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB574: push esi */
    esi = ecx; /* 0x170CB575: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CB577: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB588; /* 0x170CB57B: je 0x170cb588 */
L_170CB57D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB57D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB580: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB585: mov dword ptr [ebp + 0x10], eax */
L_170CB588:
    eax = MEM32(esi + 0x60); /* 0x170CB588: mov eax, dword ptr [esi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB58B: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x64); /* 0x170CB58F: mov ecx, dword ptr [esi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB592: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CB596: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x170CB598: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CB59B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), ecx */ /* 0x170CB59D: cmp dword ptr [esi + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB5B7; /* 0x170CB5A0: jbe 0x170cb5b7 */
L_170CB5A2:
    edx = MEM32(ebp + 0x10); /* 0x170CB5A2: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CB5A5: push edi */
L_170CB5A6:
    edi = MEM32(edx); /* 0x170CB5A6: mov edi, dword ptr [edx] */
    MEM32(eax) = edi; /* 0x170CB5A8: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CB5AA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170CB5AD: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x170CB5AE: add edx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x68) */ /* 0x170CB5B1: cmp ecx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB5A6; /* 0x170CB5B4: jb 0x170cb5a6 */
L_170CB5B6:
    edi = POP32_VAL(esp); /* 0x170CB5B6: pop edi */
L_170CB5B7:
    esi = POP32_VAL(esp); /* 0x170CB5B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB5B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB5B9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB5C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB5C1u);

L_170CB5C1:
    edi = edi; /* 0x170CB5C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB5C3: push ebp */
    ebp = esp; /* 0x170CB5C4: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CB5C6: push ebx */
    PUSH32(esp, esi); /* 0x170CB5C7: push esi */
    PUSH32(esp, edi); /* 0x170CB5C8: push edi */
    edi = ecx; /* 0x170CB5C9: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CB5CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x170CB5CD: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB5DD; /* 0x170CB5D0: je 0x170cb5dd */
L_170CB5D2:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB5D2: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB5D5: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB5DA: mov dword ptr [ebp + 0x10], eax */
L_170CB5DD:
    esi = MEM32(edi + 0x60); /* 0x170CB5DD: mov esi, dword ptr [edi + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB5E0: imul esi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x64); /* 0x170CB5E4: mov eax, dword ptr [edi + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB5E7: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CB5EB: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x20); /* 0x170CB5ED: add esi, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x68), ebx */ /* 0x170CB5F0: cmp dword ptr [edi + 0x68], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB612; /* 0x170CB5F3: jbe 0x170cb612 */
L_170CB5F5:
    eax = MEM32(ebp + 0x10); /* 0x170CB5F5: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = eax; /* 0x170CB5F8: mov dword ptr [ebp + 0x10], eax */
L_170CB5FB:
    PUSH32(esp, 1); /* 0x170CB5FB: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB5FD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170CB600: push esi */
    RECOMP_CALL(sub_1704068C); /* 0x170CB601: call 0x1704068c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x170CB606: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170CB60A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170CB60B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CB60C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x68) */ /* 0x170CB60D: cmp ebx, dword ptr [edi + 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB5FB; /* 0x170CB610: jb 0x170cb5fb */
L_170CB612:
    edi = POP32_VAL(esp); /* 0x170CB612: pop edi */
    esi = POP32_VAL(esp); /* 0x170CB613: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CB614: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CB615: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB616: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB61E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB61Eu);

L_170CB61E:
    edi = edi; /* 0x170CB61E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB620: push ebp */
    ebp = esp; /* 0x170CB621: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CB623: push ebx */
    PUSH32(esp, esi); /* 0x170CB624: push esi */
    PUSH32(esp, edi); /* 0x170CB625: push edi */
    edi = ecx; /* 0x170CB626: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CB628: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x170CB62A: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB63A; /* 0x170CB62D: je 0x170cb63a */
L_170CB62F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB62F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB632: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB637: mov dword ptr [ebp + 0x10], eax */
L_170CB63A:
    esi = MEM32(edi + 0x60); /* 0x170CB63A: mov esi, dword ptr [edi + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB63D: imul esi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x64); /* 0x170CB641: mov eax, dword ptr [edi + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB644: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CB648: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x20); /* 0x170CB64A: add esi, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x68), ebx */ /* 0x170CB64D: cmp dword ptr [edi + 0x68], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB670; /* 0x170CB650: jbe 0x170cb670 */
L_170CB652:
    eax = MEM32(ebp + 0x10); /* 0x170CB652: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = eax; /* 0x170CB655: mov dword ptr [ebp + 0x10], eax */
L_170CB658:
    PUSH32(esp, 2); /* 0x170CB658: push 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB65A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170CB65D: push esi */
    RECOMP_CALL(sub_1704068C); /* 0x170CB65E: call 0x1704068c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x170CB663: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170CB667: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CB66A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x68) */ /* 0x170CB66B: cmp ebx, dword ptr [edi + 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB658; /* 0x170CB66E: jb 0x170cb658 */
L_170CB670:
    edi = POP32_VAL(esp); /* 0x170CB670: pop edi */
    esi = POP32_VAL(esp); /* 0x170CB671: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CB672: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CB673: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB674: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB67C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB67Cu);

L_170CB67C:
    edi = edi; /* 0x170CB67C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB67E: push ebp */
    ebp = esp; /* 0x170CB67F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB681: push esi */
    esi = ecx; /* 0x170CB682: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CB684: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB695; /* 0x170CB688: je 0x170cb695 */
L_170CB68A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB68A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB68D: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB692: mov dword ptr [ebp + 0x10], eax */
L_170CB695:
    eax = MEM32(esi + 0x68); /* 0x170CB695: mov eax, dword ptr [esi + 0x68] */
    ecx = MEM32(esi + 0x64); /* 0x170CB698: mov ecx, dword ptr [esi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB69B: imul ecx, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170CB69F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170CB69F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170CB6A2: push eax */
    eax = MEM32(esi + 0x60); /* 0x170CB6A3: mov eax, dword ptr [esi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB6A6: imul eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB6AA: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CB6AD: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x170CB6AF: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170CB6B2: push eax */
    RECOMP_CALL(sub_1704068C); /* 0x170CB6B3: call 0x1704068c */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x170CB6B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB6B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB6BA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB6C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB6C2u);

L_170CB6C2:
    edi = edi; /* 0x170CB6C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB6C4: push ebp */
    ebp = esp; /* 0x170CB6C5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CB6C7: push esi */
    esi = ecx; /* 0x170CB6C8: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CB6CA: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB6DB; /* 0x170CB6CE: je 0x170cb6db */
L_170CB6D0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB6D0: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB6D3: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB6D8: mov dword ptr [ebp + 0x10], eax */
L_170CB6DB:
    eax = MEM32(esi + 0x60); /* 0x170CB6DB: mov eax, dword ptr [esi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB6DE: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x64); /* 0x170CB6E2: mov ecx, dword ptr [esi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB6E5: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CB6E9: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x170CB6EB: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CB6EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), edx */ /* 0x170CB6F0: cmp dword ptr [esi + 0x68], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB710; /* 0x170CB6F3: jbe 0x170cb710 */
L_170CB6F5:
    ecx = MEM32(ebp + 0x10); /* 0x170CB6F5: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CB6F8: push edi */
L_170CB6F9:
    edi = MEM32(ecx); /* 0x170CB6F9: mov edi, dword ptr [ecx] */
    MEM32(eax) = edi; /* 0x170CB6FB: mov dword ptr [eax], edi */
    edi = MEM32(ecx + 0x4); /* 0x170CB6FD: mov edi, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = edi; /* 0x170CB700: mov dword ptr [eax + 4], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170CB703: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CB706: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x170CB707: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x68) */ /* 0x170CB70A: cmp edx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB6F9; /* 0x170CB70D: jb 0x170cb6f9 */
L_170CB70F:
    edi = POP32_VAL(esp); /* 0x170CB70F: pop edi */
L_170CB710:
    esi = POP32_VAL(esp); /* 0x170CB710: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CB711: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB712: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB71A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB71Au);

L_170CB71A:
    edi = edi; /* 0x170CB71A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB71C: push ebp */
    ebp = esp; /* 0x170CB71D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CB71F: push ebx */
    ebx = ecx; /* 0x170CB720: mov ebx, ecx */
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CB722: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CB726: push esi */
    PUSH32(esp, edi); /* 0x170CB727: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB735; /* 0x170CB728: je 0x170cb735 */
L_170CB72A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB72A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB72D: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB732: mov dword ptr [ebp + 0x10], eax */
L_170CB735:
    edi = MEM32(ebx + 0x60); /* 0x170CB735: mov edi, dword ptr [ebx + 0x60] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB738: imul edi, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x64); /* 0x170CB73C: mov eax, dword ptr [ebx + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CB73F: imul eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx + 0x68); /* 0x170CB743: mov ecx, dword ptr [ebx + 0x68] */
    esi = MEM32(ebp + 0x10); /* 0x170CB746: mov esi, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CB749: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CB749: shl ecx, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170CB74C: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x20); /* 0x170CB74E: add edi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x170CB751: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CB753: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CB753: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CB756: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170CB758: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CB75A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CB75D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170CB75F: pop edi */
    esi = POP32_VAL(esp); /* 0x170CB760: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CB761: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CB762: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CB763: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CB76B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CB76Bu);

L_170CB76B:
    edi = edi; /* 0x170CB76B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CB76D: push ebp */
    ebp = esp; /* 0x170CB76E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x170CB770: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CB773: push ebx */
    PUSH32(esp, esi); /* 0x170CB774: push esi */
    esi = ecx; /* 0x170CB775: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CB777: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CB77B: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB789; /* 0x170CB77C: je 0x170cb789 */
L_170CB77E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB77E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CB781: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB786: mov dword ptr [ebp + 0x10], eax */
L_170CB789:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CB789: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB79C; /* 0x170CB78D: je 0x170cb79c */
L_170CB78F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB78F: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CB792: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CB794: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CB799: mov dword ptr [ebp + 0x10], eax */
L_170CB79C:
    eax = MEM32(ebp + 0x8); /* 0x170CB79C: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CB79F: fldz  */
    edi = MEM32(esi + 0x68); /* 0x170CB7A1: mov edi, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CB7A4: fstp dword ptr [ebp - 0x50] */
    edx = MEM32(esi + 0x60); /* 0x170CB7A7: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CB7AA: fldz  */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CB7AC: imul edx, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CB7AF: fstp dword ptr [ebp - 0x44] */
    MEM32(ebp + 0x8) = eax; /* 0x170CB7B2: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CB7B5: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + (-0x1); /* 0x170CB7B9: lea ecx, [edi - 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CB7BC: imul ecx, dword ptr [ebp + 8] */
    ebx = edx + ecx * 4; /* 0x170CB7C0: lea ebx, [edx + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x170CB7C3: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(esi + 0x64); /* 0x170CB7C6: mov edx, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x170CB7C9: imul edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CB7CC: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CB7CF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x170CB7D2: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + 0x20); /* 0x170CB7D4: add ebx, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170CB7D7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + eax * 8; /* 0x170CB7DB: lea eax, [ecx + eax*8] */
    ecx = MEM32(esi + 0x34); /* 0x170CB7DE: mov ecx, dword ptr [esi + 0x34] */
    eax = ecx + eax * 4; /* 0x170CB7E1: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170CB7E4: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x170CB7E7: mov dword ptr [ebp - 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CB7F7; /* 0x170CB7EA: jne 0x170cb7f7 */
L_170CB7EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CB7EC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = 1; /* 0x170CB7EE: mov dword ptr [ebp + 0xc], 1 */
    goto L_170CB7FC; /* 0x170CB7F5: jmp 0x170cb7fc */
L_170CB7F7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170CB7F7: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | 0xFFFFFFFFu));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 0xFFFFFFFFu; /* 0x170CB7F8: or dword ptr [ebp + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CB7FC:
    MEM16(ebp + 0x8) = _fpu_cw; /* 0x170CB7FC: fnstcw word ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CB7FF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CB802: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x170CB807: mov dword ptr [ebp - 8], eax */
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x170CB80A: fldcw word ptr [ebp - 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CB80D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CB810: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x7C) = eax; /* 0x170CB812: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x68), ecx */ /* 0x170CB815: cmp dword ptr [esi + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CB846; /* 0x170CB818: jbe 0x170cb846 */
L_170CB81A:
    eax = MEM32(ebp + 0x10); /* 0x170CB81A: mov eax, dword ptr [ebp + 0x10] */
L_170CB81D:
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170CB81D: fld dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170CB820: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(0x17005314); /* 0x170CB821: fmul dword ptr [0x17005314] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170CB827: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17005310); /* 0x170CB82A: fmul dword ptr [0x17005310] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170CB830: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x170CB832: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(0x17005318); /* 0x170CB834: fmul dword ptr [0x17005318] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170CB83A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170CB83C: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x170CB83E: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x68) */ /* 0x170CB841: cmp ecx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB81D; /* 0x170CB844: jb 0x170cb81d */
L_170CB846:
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CB846: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB856; /* 0x170CB84A: je 0x170cb856 */
L_170CB84C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CB84C: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CB84F: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CB851: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
L_170CB856:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CB856: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x170CB85A: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CBA03; /* 0x170CB85E: jbe 0x170cba03 */
L_170CB864:
    edx = MEM32(ebp + 0xC); /* 0x170CB864: mov edx, dword ptr [ebp + 0xc] */
    eax = edx; /* 0x170CB867: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170CB869: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170CB869: shl eax, 2 */
    ecx = edx; /* 0x170CB86C: mov ecx, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170CB86E: mov dword ptr [ebp - 0x1c], eax */
    eax = edi; /* 0x170CB871: mov eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170CB873: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0xC); /* 0x170CB875: sub edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CB878: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CB878: shl ecx, 4 */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CB87B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CB87B: shl eax, 4 */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x170CB87E: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x170CB87E: shl edx, 4 */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CB881: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CB881: shl edi, 4 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x170CB884: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + 0xC) = edi; /* 0x170CB887: mov dword ptr [ebp + 0xc], edi */
L_170CB88A:
    ecx = MEM32(ebp + 0x8); /* 0x170CB88A: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0xC)); /* 0x170CB88D: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CB890: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(edi + ecx * 4)); /* 0x170CB893: fld dword ptr [edi + ecx*4] */
    ecx = MEM32(ebp + 0x10); /* 0x170CB896: mov ecx, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CB899: fst dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170CB89C: add ecx, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x170CB89E: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x170CB8A1: fadd dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(0x17001420); /* 0x170CB8A3: fmul dword ptr [0x17001420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CB8A9: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170CB8AC: fld dword ptr [ebp - 0x44] */
    _st[0] += (double)*(float*)ADDR(ecx + 0xC); /* 0x170CB8AF: fadd dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17001420); /* 0x170CB8B2: fmul dword ptr [0x17001420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170CB8B8: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CB8BB: fld dword ptr [ebp - 0x40] */
    _st[0] += _st[1]; /* 0x170CB8BE: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170CB8C0: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CB8C3: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170CB8C5: fld dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CB8C8: fistp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x170CB8CB: fld dword ptr [ebp - 0x34] */
    ecx = MEM32(ebp + (-0x10)); /* 0x170CB8CE: mov ecx, dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170CB8D1: fadd dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x170CB8D4: mov dword ptr [ebp - 0x30], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CB8D7: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CB8DA: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CB8DD: fistp dword ptr [ebp - 0x18] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CB8E0: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x170CB8E4: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x170CB8E7: mov dword ptr [ebp - 0x24], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CB990; /* 0x170CB8EA: je 0x170cb990 */
L_170CB8F0:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CB8F0: fld dword ptr [0x17006014] */
    edi = MEM32(esi + 0x5C); /* 0x170CB8F6: mov edi, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x30))); /* 0x170CB8F9: fild dword ptr [ebp - 0x30] */
    ebx = MEM32(ebp + 0xC); /* 0x170CB8FC: mov ebx, dword ptr [ebp + 0xc] */
    edi = ebx + edi + 0x10; /* 0x170CB8FF: lea edi, [ebx + edi + 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x40)) - _st[0]; /* 0x170CB903: fsubr dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x170CB906: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CB908: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CB90E: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB910: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB912: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CB914: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CB917: fld dword ptr [0x170074b0] */
    edi = eax + edi + 0x10; /* 0x170CB91D: lea edi, [eax + edi + 0x10] */
    _st[0] *= _st[1]; /* 0x170CB921: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB923: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB925: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CB927: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CB92A: fld dword ptr [0x170018d4] */
    edi = edx + edi + 0x10; /* 0x170CB930: lea edi, [edx + edi + 0x10] */
    _st[0] *= _st[1]; /* 0x170CB934: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB936: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB938: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CB93A: mov edi, dword ptr [esi + 0x5c] */
    edi = ebx + edi + 0x1C; /* 0x170CB93D: lea edi, [ebx + edi + 0x1c] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CB941: fmul qword ptr [0x170074a8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x170CB947: mov ebx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CB94A: fstp dword ptr [ebp - 0x50] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x24))); /* 0x170CB94D: fild dword ptr [ebp - 0x24] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x34)) - _st[0]; /* 0x170CB950: fsubr dword ptr [ebp - 0x34] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CB953: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CB955: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CB95B: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB95D: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB95F: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CB961: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CB964: fld dword ptr [0x170074b0] */
    edi = eax + edi + 0x1C; /* 0x170CB96A: lea edi, [eax + edi + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CB96E: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB970: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB972: fstp dword ptr [edi] */
    edi = MEM32(esi + 0x5C); /* 0x170CB974: mov edi, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CB977: fld dword ptr [0x170018d4] */
    edi = edx + edi + 0x1C; /* 0x170CB97D: lea edi, [edx + edi + 0x1c] */
    _st[0] *= _st[1]; /* 0x170CB981: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170CB983: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CB985: fstp dword ptr [edi] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CB987: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x170CB98D: fstp dword ptr [ebp - 0x44] */
L_170CB990:
    edi = MEM32(ebp + (-0x30)); /* 0x170CB990: mov edi, dword ptr [ebp - 0x30] */
    /* cmp edi, 0xFFFFu */ /* 0x170CB993: cmp edi, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB9A0; /* 0x170CB999: jl 0x170cb9a0 */
L_170CB99B:
    edi = 0xFFFFu; /* 0x170CB99B: mov edi, 0xffff */
L_170CB9A0:
    /* test edi, edi */ /* 0x170CB9A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CB9B6; /* 0x170CB9A2: jle 0x170cb9b6 */
L_170CB9A4:
    /* cmp MEM32(ebp + (-0x30)), 0xFFFFu */ /* 0x170CB9A4: cmp dword ptr [ebp - 0x30], 0xffff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB9BA; /* 0x170CB9AB: jl 0x170cb9ba */
L_170CB9AD:
    MEM32(ebp + (-0x30)) = 0xFFFFu; /* 0x170CB9AD: mov dword ptr [ebp - 0x30], 0xffff */
    goto L_170CB9BA; /* 0x170CB9B4: jmp 0x170cb9ba */
L_170CB9B6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x170CB9B6: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CB9BA:
    /* cmp ecx, 0xFFFFu */ /* 0x170CB9BA: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx; /* 0x170CB9C0: mov edi, ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB9C9; /* 0x170CB9C2: jl 0x170cb9c9 */
L_170CB9C4:
    edi = 0xFFFFu; /* 0x170CB9C4: mov edi, 0xffff */
L_170CB9C9:
    /* test edi, edi */ /* 0x170CB9C9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CB9DA; /* 0x170CB9CB: jle 0x170cb9da */
L_170CB9CD:
    edi = 0xFFFFu; /* 0x170CB9CD: mov edi, 0xffff */
    /* cmp ecx, edi */ /* 0x170CB9D2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CB9DC; /* 0x170CB9D4: jl 0x170cb9dc */
L_170CB9D6:
    ecx = edi; /* 0x170CB9D6: mov ecx, edi */
    goto L_170CB9DC; /* 0x170CB9D8: jmp 0x170cb9dc */
L_170CB9DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CB9DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CB9DC:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x170CB9DC: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x170CB9DC: shl ecx, 0x10 */
    _flag_a = (uint32_t)((ecx | MEM32(ebp + (-0x30)))); _flag_b = (uint32_t)((ecx | MEM32(ebp + (-0x30))));
    ecx = ecx | MEM32(ebp + (-0x30)); /* 0x170CB9DF: or ecx, dword ptr [ebp - 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = ecx; /* 0x170CB9E2: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x170CB9E4: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x1C)); /* 0x170CB9E7: add ebx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ecx; /* 0x170CB9EA: add dword ptr [ebp + 0xc], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CB9ED: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170CB9EF: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CB9F1: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x170CB9F4: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(esi + 0x68) */ /* 0x170CB9F7: cmp ecx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x170CB9FA: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CB88A; /* 0x170CB9FD: jb 0x170cb88a */
L_170CBA03:
    eax = MEM32(esi + 0x7C); /* 0x170CBA03: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CBA06: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CBA09: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CBA0C: pop edi */
    esi = POP32_VAL(esp); /* 0x170CBA0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CBA0E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CBA0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBA10: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBA18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBA18u);

L_170CBA18:
    edi = edi; /* 0x170CBA18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBA1A: push ebp */
    ebp = esp; /* 0x170CBA1B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x170CBA1D: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CBA20: push ebx */
    PUSH32(esp, esi); /* 0x170CBA21: push esi */
    esi = ecx; /* 0x170CBA22: mov esi, ecx */
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x170CBA24: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CBA28: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBA36; /* 0x170CBA29: je 0x170cba36 */
L_170CBA2B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CBA2B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CBA2E: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CBA33: mov dword ptr [ebp + 0x10], eax */
L_170CBA36:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CBA36: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBA49; /* 0x170CBA3A: je 0x170cba49 */
L_170CBA3C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CBA3C: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CBA3F: mov ecx, esi */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CBA41: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CBA46: mov dword ptr [ebp + 0x10], eax */
L_170CBA49:
    ecx = MEM32(ebp + 0x8); /* 0x170CBA49: mov ecx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170CBA4C: fldz  */
    ebx = MEM32(esi + 0x68); /* 0x170CBA4E: mov ebx, dword ptr [esi + 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CBA51: fstp dword ptr [ebp - 0x50] */
    edx = MEM32(esi + 0x60); /* 0x170CBA54: mov edx, dword ptr [esi + 0x60] */
    fp_push(0.0); /* 0x170CBA57: fldz  */
    MEM32(ebp + 0x8) = ecx; /* 0x170CBA59: mov dword ptr [ebp + 8], ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x170CBA5C: imul edx, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170CBA5F: fstp dword ptr [ebp - 0x4c] */
    fp_push(0.0); /* 0x170CBA62: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170CBA64: fstp dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 1; /* 0x170CBA67: and dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + (-0x1); /* 0x170CBA6B: lea eax, [ebx - 1] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBA6E: imul eax, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x170CBA72: lea eax, [eax + eax*2] */
    edi = edx + eax * 2; /* 0x170CBA75: lea edi, [edx + eax*2] */
    eax = MEM32(ebp + 0xC); /* 0x170CBA78: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(esi + 0x64); /* 0x170CBA7B: mov edx, dword ptr [esi + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x170CBA7E: imul edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CBA81: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CBA84: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 8; /* 0x170CBA87: lea eax, [eax + ecx*8] */
    ecx = MEM32(esi + 0x34); /* 0x170CBA8A: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x170CBA8D: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x20); /* 0x170CBA8F: add edi, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170CBA92: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + eax * 4; /* 0x170CBA96: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170CBA99: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CBAA8; /* 0x170CBA9C: jne 0x170cbaa8 */
L_170CBA9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CBA9E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CBAA0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CBAA2: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edx; /* 0x170CBAA3: mov dword ptr [ebp + 8], edx */
    goto L_170CBAB0; /* 0x170CBAA6: jmp 0x170cbab0 */
L_170CBAA8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170CBAA8: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 0xFFFFFFFFu));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 0xFFFFFFFFu; /* 0x170CBAA9: or dword ptr [ebp + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x170CBAAD: mov edx, dword ptr [ebp + 8] */
L_170CBAB0:
    MEM16(ebp + 0xC) = _fpu_cw; /* 0x170CBAB0: fnstcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x170CBAB3: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CBAB6: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170CBABB: mov dword ptr [ebp - 4], eax */
    _fpu_cw = MEM16(ebp + (-0x4)); /* 0x170CBABE: fldcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x170CBAC1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x7C) = eax; /* 0x170CBAC4: mov dword ptr [esi + 0x7c], eax */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CBAC7: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBADA; /* 0x170CBACB: je 0x170cbada */
L_170CBACD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CBACD: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CBAD0: mov ecx, esi */
    RECOMP_CALL(sub_170C52C9); /* 0x170CBAD2: call 0x170c52c9 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x170CBAD7: mov edx, dword ptr [ebp + 8] */
L_170CBADA:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CBADA: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x170CBADE: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CBD0B; /* 0x170CBAE2: jbe 0x170cbd0b */
L_170CBAE8:
    eax = edx + edx * 2; /* 0x170CBAE8: lea eax, [edx + edx*2] */
    ecx = edx; /* 0x170CBAEB: mov ecx, edx */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170CBAED: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170CBAED: shl eax, 1 */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CBAEF: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CBAEF: shl ecx, 4 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170CBAF2: mov dword ptr [ebp - 0x1c], eax */
    eax = ebx; /* 0x170CBAF5: mov eax, ebx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x170CBAF7: mov dword ptr [ebp - 0x20], ecx */
    ecx = edx + ebx; /* 0x170CBAFA: lea ecx, [edx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x170CBAFD: sub ebx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x170CBAFF: mov edx, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBB02: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBB02: shl eax, 4 */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CBB05: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CBB05: shl ecx, 4 */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x170CBB08: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x170CBB08: shl ebx, 4 */
    edx = eax + edx + 0x8; /* 0x170CBB0B: lea edx, [eax + edx + 8] */
    MEM32(ebp + 0xC) = ebx; /* 0x170CBB0F: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + 0x10) = edx; /* 0x170CBB12: mov dword ptr [ebp + 0x10], edx */
L_170CBB15:
    edx = MEM32(ebp + 0x8); /* 0x170CBB15: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x170CBB18: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CBB1B: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebx + edx * 4)); /* 0x170CBB1E: fld dword ptr [ebx + edx*4] */
    edx = MEM32(ebp + 0x10); /* 0x170CBB21: mov edx, dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170CBB24: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x170CBB27: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(edx + (-0x8)); /* 0x170CBB2A: fadd dword ptr [edx - 8] */
    _st[0] *= (double)*(float*)ADDR(0x17001420); /* 0x170CBB2D: fmul dword ptr [0x17001420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x170CBB33: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x170CBB36: fld dword ptr [ebp - 0x4c] */
    _st[0] += (double)*(float*)ADDR(edx + (-0x4)); /* 0x170CBB39: fadd dword ptr [edx - 4] */
    _st[0] *= (double)*(float*)ADDR(0x17001420); /* 0x170CBB3C: fmul dword ptr [0x17001420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170CBB42: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170CBB45: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170CBB48: fadd dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(0x17001420); /* 0x170CBB4A: fmul dword ptr [0x17001420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170CBB50: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170CBB53: fld dword ptr [ebp - 0x40] */
    _st[0] += _st[1]; /* 0x170CBB56: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CBB58: fstp dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CBB5B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CBB5D: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CBB60: fistp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170CBB63: fld dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x10)); /* 0x170CBB66: mov edx, dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170CBB69: fadd dword ptr [ebp - 4] */
    MEM32(ebp + (-0x30)) = edx; /* 0x170CBB6C: mov dword ptr [ebp - 0x30], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CBB6F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CBB72: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CBB75: fistp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170CBB78: fld dword ptr [ebp - 0x38] */
    edx = MEM32(ebp + (-0x14)); /* 0x170CBB7B: mov edx, dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170CBB7E: fadd dword ptr [ebp - 4] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x170CBB81: mov dword ptr [ebp - 0x2c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CBB84: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CBB87: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CBB8A: fistp dword ptr [ebp - 0x18] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x170CBB8D: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x18)); /* 0x170CBB91: mov edx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x28)) = edx; /* 0x170CBB94: mov dword ptr [ebp - 0x28], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBC84; /* 0x170CBB97: je 0x170cbc84 */
L_170CBB9D:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CBB9D: fld dword ptr [0x17006014] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBBA3: mov ebx, dword ptr [esi + 0x5c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x30))); /* 0x170CBBA6: fild dword ptr [ebp - 0x30] */
    edx = MEM32(ebp + 0xC); /* 0x170CBBA9: mov edx, dword ptr [ebp + 0xc] */
    ebx = ebx + edx + 0x10; /* 0x170CBBAC: lea ebx, [ebx + edx + 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x40)) - _st[0]; /* 0x170CBBB0: fsubr dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x170CBBB3: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CBBB5: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CBBBB: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBBBD: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBBBF: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBBC1: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CBBC4: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x10; /* 0x170CBBCA: lea ebx, [ebx + eax + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBBCE: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBBD0: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBBD2: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBBD4: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CBBD7: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x10; /* 0x170CBBDD: lea ebx, [ebx + ecx + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBBE1: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBBE3: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBBE5: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBBE7: mov ebx, dword ptr [esi + 0x5c] */
    ebx = ebx + edx + 0x14; /* 0x170CBBEA: lea ebx, [ebx + edx + 0x14] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CBBEE: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x170CBBF4: fstp dword ptr [ebp - 0x50] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x2C))); /* 0x170CBBF7: fild dword ptr [ebp - 0x2c] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x3C)) - _st[0]; /* 0x170CBBFA: fsubr dword ptr [ebp - 0x3c] */
    _st[0] *= _st[1]; /* 0x170CBBFD: fmul st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CBBFF: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CBC05: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBC07: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBC09: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBC0B: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CBC0E: fld dword ptr [0x170074b0] */
    ebx = ebx + eax + 0x14; /* 0x170CBC14: lea ebx, [ebx + eax + 0x14] */
    _st[0] *= _st[1]; /* 0x170CBC18: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBC1A: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBC1C: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBC1E: mov ebx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CBC21: fld dword ptr [0x170018d4] */
    ebx = ebx + ecx + 0x14; /* 0x170CBC27: lea ebx, [ebx + ecx + 0x14] */
    _st[0] *= _st[1]; /* 0x170CBC2B: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170CBC2D: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x170CBC2F: fstp dword ptr [ebx] */
    ebx = MEM32(esi + 0x5C); /* 0x170CBC31: mov ebx, dword ptr [esi + 0x5c] */
    edx = ebx + edx + 0x18; /* 0x170CBC34: lea edx, [ebx + edx + 0x18] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CBC38: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x170CBC3E: fstp dword ptr [ebp - 0x4c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x170CBC41: fild dword ptr [ebp - 0x28] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x38)) - _st[0]; /* 0x170CBC44: fsubr dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170CBC47: fmulp st(1) */
    fp_push(*(float*)&MEM32(0x170074B4)); /* 0x170CBC49: fld dword ptr [0x170074b4] */
    _st[0] *= _st[1]; /* 0x170CBC4F: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170CBC51: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170CBC53: fstp dword ptr [edx] */
    edx = MEM32(esi + 0x5C); /* 0x170CBC55: mov edx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170074B0)); /* 0x170CBC58: fld dword ptr [0x170074b0] */
    edx = edx + eax + 0x18; /* 0x170CBC5E: lea edx, [edx + eax + 0x18] */
    _st[0] *= _st[1]; /* 0x170CBC62: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170CBC64: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170CBC66: fstp dword ptr [edx] */
    edx = MEM32(esi + 0x5C); /* 0x170CBC68: mov edx, dword ptr [esi + 0x5c] */
    fp_push(*(float*)&MEM32(0x170018D4)); /* 0x170CBC6B: fld dword ptr [0x170018d4] */
    edx = edx + ecx + 0x18; /* 0x170CBC71: lea edx, [edx + ecx + 0x18] */
    _st[0] *= _st[1]; /* 0x170CBC75: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170CBC77: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170CBC79: fstp dword ptr [edx] */
    _st[0] *= *(double*)ADDR(0x170074A8); /* 0x170CBC7B: fmul qword ptr [0x170074a8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170CBC81: fstp dword ptr [ebp - 0x48] */
L_170CBC84:
    ebx = MEM32(ebp + (-0x30)); /* 0x170CBC84: mov ebx, dword ptr [ebp - 0x30] */
    edx = 0xFFFFu; /* 0x170CBC87: mov edx, 0xffff */
    /* cmp ebx, edx */ /* 0x170CBC8C: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBC92; /* 0x170CBC8E: jl 0x170cbc92 */
L_170CBC90:
    ebx = edx; /* 0x170CBC90: mov ebx, edx */
L_170CBC92:
    /* test ebx, ebx */ /* 0x170CBC92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CBCA0; /* 0x170CBC94: jle 0x170cbca0 */
L_170CBC96:
    /* cmp MEM32(ebp + (-0x30)), edx */ /* 0x170CBC96: cmp dword ptr [ebp - 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBCA4; /* 0x170CBC99: jl 0x170cbca4 */
L_170CBC9B:
    MEM32(ebp + (-0x30)) = edx; /* 0x170CBC9B: mov dword ptr [ebp - 0x30], edx */
    goto L_170CBCA4; /* 0x170CBC9E: jmp 0x170cbca4 */
L_170CBCA0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x170CBCA0: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CBCA4:
    ebx = MEM32(ebp + (-0x2C)); /* 0x170CBCA4: mov ebx, dword ptr [ebp - 0x2c] */
    /* cmp ebx, edx */ /* 0x170CBCA7: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBCAD; /* 0x170CBCA9: jl 0x170cbcad */
L_170CBCAB:
    ebx = edx; /* 0x170CBCAB: mov ebx, edx */
L_170CBCAD:
    /* test ebx, ebx */ /* 0x170CBCAD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CBCBB; /* 0x170CBCAF: jle 0x170cbcbb */
L_170CBCB1:
    /* cmp MEM32(ebp + (-0x2C)), edx */ /* 0x170CBCB1: cmp dword ptr [ebp - 0x2c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBCBF; /* 0x170CBCB4: jl 0x170cbcbf */
L_170CBCB6:
    MEM32(ebp + (-0x2C)) = edx; /* 0x170CBCB6: mov dword ptr [ebp - 0x2c], edx */
    goto L_170CBCBF; /* 0x170CBCB9: jmp 0x170cbcbf */
L_170CBCBB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x170CBCBB: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CBCBF:
    ebx = MEM32(ebp + (-0x28)); /* 0x170CBCBF: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp ebx, edx */ /* 0x170CBCC2: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBCC8; /* 0x170CBCC4: jl 0x170cbcc8 */
L_170CBCC6:
    ebx = edx; /* 0x170CBCC6: mov ebx, edx */
L_170CBCC8:
    /* test ebx, ebx */ /* 0x170CBCC8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CBCD7; /* 0x170CBCCA: jle 0x170cbcd7 */
L_170CBCCC:
    ebx = MEM32(ebp + (-0x28)); /* 0x170CBCCC: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp ebx, edx */ /* 0x170CBCCF: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170CBCD9; /* 0x170CBCD1: jl 0x170cbcd9 */
L_170CBCD3:
    ebx = edx; /* 0x170CBCD3: mov ebx, edx */
    goto L_170CBCD9; /* 0x170CBCD5: jmp 0x170cbcd9 */
L_170CBCD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CBCD7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CBCD9:
    SET_LO16(edx, MEM16(ebp + (-0x2C))); /* 0x170CBCD9: mov dx, word ptr [ebp - 0x2c] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(edx)); /* 0x170CBCDD: mov word ptr [edi + 2], dx */
    SET_LO16(edx, MEM16(ebp + (-0x30))); /* 0x170CBCE1: mov dx, word ptr [ebp - 0x30] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(edx)); /* 0x170CBCE5: mov word ptr [edi + 4], dx */
    edx = MEM32(ebp + (-0x20)); /* 0x170CBCE9: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + edx; /* 0x170CBCEC: add dword ptr [ebp + 0x10], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edx; /* 0x170CBCEF: add dword ptr [ebp + 0xc], edx */
    _flag_k = FK_ADD;
    MEM16(edi) = (uint16_t)(LO16(ebx)); /* 0x170CBCF2: mov word ptr [edi], bx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x1C)); /* 0x170CBCF5: add edi, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBCF8: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x170CBCFA: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CBCFC: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + 0x8); /* 0x170CBCFF: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(esi + 0x68) */ /* 0x170CBD02: cmp edx, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CBB15; /* 0x170CBD05: jb 0x170cbb15 */
L_170CBD0B:
    eax = MEM32(esi + 0x7C); /* 0x170CBD0B: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CBD0E: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CBD11: fldcw word ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x170CBD14: pop edi */
    esi = POP32_VAL(esp); /* 0x170CBD15: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CBD16: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CBD17: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBD18: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBD20u);

L_170CBD20:
    edi = edi; /* 0x170CBD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBD22: push ebp */
    ebp = esp; /* 0x170CBD23: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CBD25: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBD28: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CBD2C: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CBD2F: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBD33: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CBD35: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x74); /* 0x170CBD38: mov edx, dword ptr [ecx + 0x74] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CBD3B: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CBD3D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBD3F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CBD40: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CBD89; /* 0x170CBD43: jae 0x170cbd89 */
L_170CBD45:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CBD45: fld dword ptr [0x17001428] */
    PUSH32(esp, edi); /* 0x170CBD4B: push edi */
L_170CBD4C:
    edi = (uint32_t)MEM8(eax + 0x2); /* 0x170CBD4C: movzx edi, byte ptr [eax + 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBD50: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBD53: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBD56: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CBD58: fstp dword ptr [esi] */
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x170CBD5A: movzx edi, byte ptr [eax + 1] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBD5E: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CBD61: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBD64: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBD67: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CBD69: fstp dword ptr [esi - 0xc] */
    edi = (uint32_t)MEM8(eax); /* 0x170CBD6C: movzx edi, byte ptr [eax] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBD6F: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170CBD72: add eax, 3 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CBD75: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBD77: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBD7A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CBD7C: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CBD7F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CBD81: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CBD4C; /* 0x170CBD84: jb 0x170cbd4c */
L_170CBD86:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CBD86: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CBD88: pop edi */
L_170CBD89:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CBD89: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBD9F; /* 0x170CBD8D: je 0x170cbd9f */
L_170CBD8F:
    eax = MEM32(ecx + 0x68); /* 0x170CBD8F: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBD92: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBD92: shl eax, 4 */
    edx = esi; /* 0x170CBD95: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CBD97: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CBD99: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CBD9A: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CBD9F:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CBD9F: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBDB3; /* 0x170CBDA3: je 0x170cbdb3 */
L_170CBDA5:
    eax = MEM32(ecx + 0x68); /* 0x170CBDA5: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBDA8: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBDA8: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CBDAB: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBDAD: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CBDAE: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CBDB3:
    esi = POP32_VAL(esp); /* 0x170CBDB3: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CBDB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBDB5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBDBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBDBDu);

L_170CBDBD:
    edi = edi; /* 0x170CBDBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBDBF: push ebp */
    ebp = esp; /* 0x170CBDC0: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CBDC2: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBDC5: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CBDC9: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CBDCC: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBDD0: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CBDD2: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CBDD5: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CBDD8: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CBDDB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBDDD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CBDDE: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CBE40; /* 0x170CBDE1: jae 0x170cbe40 */
L_170CBDE3:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CBDE3: fld dword ptr [0x17001428] */
    PUSH32(esp, edi); /* 0x170CBDE9: push edi */
L_170CBDEA:
    edi = (uint32_t)MEM8(eax + 0x2); /* 0x170CBDEA: movzx edi, byte ptr [eax + 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBDEE: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBDF1: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBDF4: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CBDF6: fstp dword ptr [esi] */
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x170CBDF8: movzx edi, byte ptr [eax + 1] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBDFC: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBDFF: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBE02: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CBE04: fstp dword ptr [esi + 4] */
    edi = MEM32(eax); /* 0x170CBE07: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x170CBE09: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CBE0F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CBE11: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBE14: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CBE1F; /* 0x170CBE17: jge 0x170cbe1f */
L_170CBE19:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CBE19: fadd dword ptr [0x1700142c] */
L_170CBE1F:
    _st[0] *= _st[1]; /* 0x170CBE1F: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CBE21: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CBE24: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CBE27: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CBE29: fstp dword ptr [esi - 8] */
    edi = (uint32_t)MEM8(eax + (-0x1)); /* 0x170CBE2C: movzx edi, byte ptr [eax - 1] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBE30: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBE33: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBE36: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CBE38: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CBDEA; /* 0x170CBE3B: jb 0x170cbdea */
L_170CBE3D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CBE3D: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CBE3F: pop edi */
L_170CBE40:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CBE40: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBE56; /* 0x170CBE44: je 0x170cbe56 */
L_170CBE46:
    eax = MEM32(ecx + 0x68); /* 0x170CBE46: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBE49: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBE49: shl eax, 4 */
    edx = esi; /* 0x170CBE4C: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CBE4E: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CBE50: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CBE51: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CBE56:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CBE56: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBE6A; /* 0x170CBE5A: je 0x170cbe6a */
L_170CBE5C:
    eax = MEM32(ecx + 0x68); /* 0x170CBE5C: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBE5F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBE5F: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CBE62: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBE64: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CBE65: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CBE6A:
    esi = POP32_VAL(esp); /* 0x170CBE6A: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CBE6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBE6C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBE74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBE74u);

L_170CBE74:
    edi = edi; /* 0x170CBE74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBE76: push ebp */
    ebp = esp; /* 0x170CBE77: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CBE79: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBE7C: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CBE80: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CBE83: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBE87: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CBE89: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CBE8C: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CBE8F: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CBE92: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBE94: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CBE95: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CBEED; /* 0x170CBE98: jae 0x170cbeed */
L_170CBE9A:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CBE9A: fld dword ptr [0x17001428] */
    PUSH32(esp, edi); /* 0x170CBEA0: push edi */
L_170CBEA1:
    edi = (uint32_t)MEM8(eax + 0x2); /* 0x170CBEA1: movzx edi, byte ptr [eax + 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBEA5: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBEA8: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBEAB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CBEAD: fstp dword ptr [esi] */
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x170CBEAF: movzx edi, byte ptr [eax + 1] */
    MEM32(ebp + 0x10) = edi; /* 0x170CBEB3: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBEB6: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBEB9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CBEBB: fstp dword ptr [esi + 4] */
    edi = MEM32(eax); /* 0x170CBEBE: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x170CBEC0: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CBEC6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CBEC8: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBECB: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CBED6; /* 0x170CBECE: jge 0x170cbed6 */
L_170CBED0:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CBED0: fadd dword ptr [0x1700142c] */
L_170CBED6:
    _st[0] *= _st[1]; /* 0x170CBED6: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CBED8: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CBEDB: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CBEDE: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CBEE0: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CBEE3: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CBEE5: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CBEA1; /* 0x170CBEE8: jb 0x170cbea1 */
L_170CBEEA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CBEEA: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CBEEC: pop edi */
L_170CBEED:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CBEED: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBF03; /* 0x170CBEF1: je 0x170cbf03 */
L_170CBEF3:
    eax = MEM32(ecx + 0x68); /* 0x170CBEF3: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBEF6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBEF6: shl eax, 4 */
    edx = esi; /* 0x170CBEF9: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CBEFB: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CBEFD: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CBEFE: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CBF03:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CBF03: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBF17; /* 0x170CBF07: je 0x170cbf17 */
L_170CBF09:
    eax = MEM32(ecx + 0x68); /* 0x170CBF09: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBF0C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBF0C: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CBF0F: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBF11: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CBF12: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CBF17:
    esi = POP32_VAL(esp); /* 0x170CBF17: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CBF18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBF19: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBF21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBF21u);

L_170CBF21:
    edi = edi; /* 0x170CBF21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBF23: push ebp */
    ebp = esp; /* 0x170CBF24: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CBF26: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBF29: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CBF2D: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CBF30: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBF34: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CBF36: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CBF39: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CBF3C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CBF3D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CBF40: push edi */
    edi = eax + edx * 2; /* 0x170CBF41: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CBF44: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CBF9E; /* 0x170CBF46: jae 0x170cbf9e */
L_170CBF48:
    fp_push(*(float*)&MEM32(0x17007494)); /* 0x170CBF48: fld dword ptr [0x17007494] */
L_170CBF4E:
    SET_LO16(edx, MEM16(eax)); /* 0x170CBF4E: mov dx, word ptr [eax] */
    if (11u) _cf = (((LO16(edx)) >> 10) & 1u); /* 0x170CBF51: shr dx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 11u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 11u); /* 0x170CBF51: shr dx, 0xb */
    edx = (uint32_t)LO16(edx); /* 0x170CBF55: movzx edx, dx */
    MEM32(ebp + 0x10) = edx; /* 0x170CBF58: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CBF5B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBF5D: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CBF60: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CBF62: fstp dword ptr [esi] */
    SET_LO16(edx, MEM16(eax)); /* 0x170CBF64: mov dx, word ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CBF67: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x170CBF6A: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x170CBF6A: shr edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x170CBF6D: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CBF70: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBF73: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CBF76: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(0x1700748C); /* 0x170CBF78: fmul dword ptr [0x1700748c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CBF7E: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CBF81: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CBF83: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CBF86: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CBF89: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CBF8C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CBF8D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CBF8E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x170CBF90: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CBF92: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CBF95: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CBF97: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CBF4E; /* 0x170CBF9A: jb 0x170cbf4e */
L_170CBF9C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CBF9C: fstp st(0) */
L_170CBF9E:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CBF9E: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBFB4; /* 0x170CBFA2: je 0x170cbfb4 */
L_170CBFA4:
    eax = MEM32(ecx + 0x68); /* 0x170CBFA4: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBFA7: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBFA7: shl eax, 4 */
    edx = esi; /* 0x170CBFAA: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CBFAC: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CBFAE: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CBFAF: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CBFB4:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CBFB4: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CBFC8; /* 0x170CBFB8: je 0x170cbfc8 */
L_170CBFBA:
    eax = MEM32(ecx + 0x68); /* 0x170CBFBA: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CBFBD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CBFBD: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CBFC0: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CBFC2: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CBFC3: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CBFC8:
    edi = POP32_VAL(esp); /* 0x170CBFC8: pop edi */
    esi = POP32_VAL(esp); /* 0x170CBFC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CBFCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CBFCB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CBFD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CBFD3u);

L_170CBFD3:
    edi = edi; /* 0x170CBFD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CBFD5: push ebp */
    ebp = esp; /* 0x170CBFD6: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CBFD8: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CBFDB: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CBFDF: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CBFE2: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CBFE6: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CBFE8: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CBFEB: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CBFEE: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CBFEF: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CBFF2: push edi */
    edi = eax + edx * 2; /* 0x170CBFF3: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CBFF6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC04D; /* 0x170CBFF8: jae 0x170cc04d */
L_170CBFFA:
    fp_push(*(float*)&MEM32(0x17007494)); /* 0x170CBFFA: fld dword ptr [0x17007494] */
L_170CC000:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC000: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax)); /* 0x170CC002: mov dx, word ptr [eax] */
    if (10u) _cf = (((edx) >> 9) & 1u); /* 0x170CC005: shr edx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((edx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 10u; /* 0x170CC005: shr edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC008: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC00B: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC00E: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC011: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC013: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC015: fstp dword ptr [esi] */
    SET_LO16(edx, MEM16(eax)); /* 0x170CC017: mov dx, word ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC01A: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x170CC01D: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x170CC01D: shr edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC020: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC023: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC026: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC029: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC02B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC02D: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC030: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC032: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC035: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC038: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC03B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC03C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC03D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x170CC03F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC041: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CC044: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC046: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC000; /* 0x170CC049: jb 0x170cc000 */
L_170CC04B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC04B: fstp st(0) */
L_170CC04D:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC04D: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC063; /* 0x170CC051: je 0x170cc063 */
L_170CC053:
    eax = MEM32(ecx + 0x68); /* 0x170CC053: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC056: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC056: shl eax, 4 */
    edx = esi; /* 0x170CC059: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC05B: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC05D: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC05E: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC063:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC063: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC077; /* 0x170CC067: je 0x170cc077 */
L_170CC069:
    eax = MEM32(ecx + 0x68); /* 0x170CC069: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC06C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC06C: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC06F: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC071: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC072: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC077:
    edi = POP32_VAL(esp); /* 0x170CC077: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC078: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC079: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC07A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC082(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC082u);

L_170CC082:
    edi = edi; /* 0x170CC082: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC084: push ebp */
    ebp = esp; /* 0x170CC085: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC087: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC08A: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC08E: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC091: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC095: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC097: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC09A: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC09D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC09E: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC0A1: push edi */
    edi = eax + edx * 2; /* 0x170CC0A2: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CC0A5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC10A; /* 0x170CC0A7: jae 0x170cc10a */
L_170CC0A9:
    fp_push(*(float*)&MEM32(0x17007494)); /* 0x170CC0A9: fld dword ptr [0x17007494] */
L_170CC0AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC0AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax)); /* 0x170CC0B1: mov dx, word ptr [eax] */
    if (10u) _cf = (((edx) >> 9) & 1u); /* 0x170CC0B4: shr edx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((edx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 10u; /* 0x170CC0B4: shr edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC0B7: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC0BA: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC0BD: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC0C0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC0C2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC0C4: fstp dword ptr [esi] */
    SET_LO16(edx, MEM16(eax)); /* 0x170CC0C6: mov dx, word ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC0C9: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x170CC0CC: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x170CC0CC: shr edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC0CF: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC0D2: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC0D5: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC0D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC0DA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC0DC: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC0DF: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x170CC0E1: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC0E4: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC0E7: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC0EA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC0EC: fstp dword ptr [esi - 8] */
    SET_LO16(edx, MEM16(eax)); /* 0x170CC0EF: mov dx, word ptr [eax] */
    if (15u) _cf = (((LO16(edx)) >> 14) & 1u); /* 0x170CC0F2: shr dx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 15u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 15u); /* 0x170CC0F2: shr dx, 0xf */
    edx = (uint32_t)LO16(edx); /* 0x170CC0F6: movzx edx, dx */
    MEM32(ebp + 0x10) = edx; /* 0x170CC0F9: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC0FC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC0FD: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC0FE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC100: fild dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC103: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC0AF; /* 0x170CC106: jb 0x170cc0af */
L_170CC108:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC108: fstp st(0) */
L_170CC10A:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC10A: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC120; /* 0x170CC10E: je 0x170cc120 */
L_170CC110:
    eax = MEM32(ecx + 0x68); /* 0x170CC110: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC113: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC113: shl eax, 4 */
    edx = esi; /* 0x170CC116: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC118: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC11A: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC11B: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC120:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC120: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC134; /* 0x170CC124: je 0x170cc134 */
L_170CC126:
    eax = MEM32(ecx + 0x68); /* 0x170CC126: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC129: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC129: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC12C: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC12E: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC12F: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC134:
    edi = POP32_VAL(esp); /* 0x170CC134: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC135: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC136: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC137: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC13F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC13Fu);

L_170CC13F:
    edi = edi; /* 0x170CC13F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC141: push ebp */
    ebp = esp; /* 0x170CC142: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC144: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC147: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC14B: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC14E: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC152: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC154: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC157: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC15A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC15B: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC15E: push edi */
    edi = eax + edx * 2; /* 0x170CC15F: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CC162: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC1C6; /* 0x170CC164: jae 0x170cc1c6 */
L_170CC166:
    fp_push(*(float*)&MEM32(0x170074B8)); /* 0x170CC166: fld dword ptr [0x170074b8] */
L_170CC16C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x170CC16C: mov dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x170CC16F: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = (uint32_t)LO8(edx); /* 0x170CC172: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CC175: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC178: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC17A: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC17D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC17F: fstp dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC181: mov dl, byte ptr [eax] */
    if (4u) _cf = (((LO8(edx)) >> 3) & 1u); /* 0x170CC183: shr dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 4u); /* 0x170CC183: shr dl, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC186: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x170CC189: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC18C: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC18F: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC192: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC194: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC196: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC199: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x170CC19B: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC19E: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC1A1: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC1A4: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC1A6: fstp dword ptr [esi - 8] */
    SET_LO16(edx, MEM16(eax)); /* 0x170CC1A9: mov dx, word ptr [eax] */
    if (12u) _cf = (((LO16(edx)) >> 11) & 1u); /* 0x170CC1AC: shr dx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 12u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 12u); /* 0x170CC1AC: shr dx, 0xc */
    edx = (uint32_t)LO16(edx); /* 0x170CC1B0: movzx edx, dx */
    MEM32(ebp + 0x10) = edx; /* 0x170CC1B3: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC1B6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC1B7: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC1B8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC1BA: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC1BD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC1BF: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC16C; /* 0x170CC1C2: jb 0x170cc16c */
L_170CC1C4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC1C4: fstp st(0) */
L_170CC1C6:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC1C6: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC1DC; /* 0x170CC1CA: je 0x170cc1dc */
L_170CC1CC:
    eax = MEM32(ecx + 0x68); /* 0x170CC1CC: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC1CF: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC1CF: shl eax, 4 */
    edx = esi; /* 0x170CC1D2: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC1D4: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC1D6: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC1D7: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC1DC:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC1DC: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC1F0; /* 0x170CC1E0: je 0x170cc1f0 */
L_170CC1E2:
    eax = MEM32(ecx + 0x68); /* 0x170CC1E2: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC1E5: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC1E5: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC1E8: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC1EA: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC1EB: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC1F0:
    edi = POP32_VAL(esp); /* 0x170CC1F0: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC1F1: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC1F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC1F3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC1FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC1FBu);

L_170CC1FB:
    edi = edi; /* 0x170CC1FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC1FD: push ebp */
    ebp = esp; /* 0x170CC1FE: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC200: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC203: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC207: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC20A: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC20E: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC210: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC213: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC216: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC217: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC21A: push edi */
    edi = eax + edx * 4; /* 0x170CC21B: lea edi, [eax + edx*4] */
    /* cmp eax, edi */ /* 0x170CC21E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC2AD; /* 0x170CC220: jae 0x170cc2ad */
L_170CC226:
    fp_push(*(float*)&MEM32(0x170074C0)); /* 0x170CC226: fld dword ptr [0x170074c0] */
    edx = 0x3FFu; /* 0x170CC22C: mov edx, 0x3ff */
    PUSH32(esp, ebx); /* 0x170CC231: push ebx */
L_170CC232:
    ebx = MEM32(eax); /* 0x170CC232: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC234: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC236: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC238: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC23B: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC246; /* 0x170CC23E: jge 0x170cc246 */
L_170CC240:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC240: fadd dword ptr [0x1700142c] */
L_170CC246:
    _st[0] *= _st[1]; /* 0x170CC246: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC248: fstp dword ptr [esi] */
    ebx = MEM32(eax); /* 0x170CC24A: mov ebx, dword ptr [eax] */
    if (10u) _cf = (((ebx) >> 9) & 1u); /* 0x170CC24C: shr ebx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ebx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 10u; /* 0x170CC24C: shr ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC24F: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC251: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC253: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC256: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC261; /* 0x170CC259: jge 0x170cc261 */
L_170CC25B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC25B: fadd dword ptr [0x1700142c] */
L_170CC261:
    _st[0] *= _st[1]; /* 0x170CC261: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CC263: fstp dword ptr [esi + 4] */
    ebx = MEM32(eax); /* 0x170CC266: mov ebx, dword ptr [eax] */
    if (20u) _cf = (((ebx) >> 19) & 1u); /* 0x170CC268: shr ebx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ebx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 20u; /* 0x170CC268: shr ebx, 0x14 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC26B: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC26D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC26F: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC272: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC27D; /* 0x170CC275: jge 0x170cc27d */
L_170CC277:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC277: fadd dword ptr [0x1700142c] */
L_170CC27D:
    _st[0] *= _st[1]; /* 0x170CC27D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CC27F: fstp dword ptr [esi + 8] */
    ebx = MEM32(eax); /* 0x170CC282: mov ebx, dword ptr [eax] */
    if (30u) _cf = (((ebx) >> 29) & 1u); /* 0x170CC284: shr ebx, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((ebx >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 30u; /* 0x170CC284: shr ebx, 0x1e */
    /* test ebx, ebx */ /* 0x170CC287: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC289: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC28C: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC297; /* 0x170CC28F: jge 0x170cc297 */
L_170CC291:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC291: fadd dword ptr [0x1700142c] */
L_170CC297:
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CC297: fmul dword ptr [0x1700600c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CC29D: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC2A0: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CC2A3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC2A5: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC232; /* 0x170CC2A8: jb 0x170cc232 */
L_170CC2AA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC2AA: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CC2AC: pop ebx */
L_170CC2AD:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC2AD: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC2C3; /* 0x170CC2B1: je 0x170cc2c3 */
L_170CC2B3:
    eax = MEM32(ecx + 0x68); /* 0x170CC2B3: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC2B6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC2B6: shl eax, 4 */
    edx = esi; /* 0x170CC2B9: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC2BB: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC2BD: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC2BE: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC2C3:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC2C3: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC2D7; /* 0x170CC2C7: je 0x170cc2d7 */
L_170CC2C9:
    eax = MEM32(ecx + 0x68); /* 0x170CC2C9: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC2CC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC2CC: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC2CF: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC2D1: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC2D2: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC2D7:
    edi = POP32_VAL(esp); /* 0x170CC2D7: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC2D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC2D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC2DA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC2E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC2E2u);

L_170CC2E2:
    edi = edi; /* 0x170CC2E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC2E4: push ebp */
    ebp = esp; /* 0x170CC2E5: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC2E7: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC2EA: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC2EE: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC2F1: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC2F5: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC2F7: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC2FA: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CC2FD: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CC300: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC302: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC303: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC365; /* 0x170CC306: jae 0x170cc365 */
L_170CC308:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CC308: fld dword ptr [0x17001428] */
    PUSH32(esp, edi); /* 0x170CC30E: push edi */
L_170CC30F:
    edi = MEM32(eax); /* 0x170CC30F: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x170CC311: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CC317: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CC319: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC31C: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC327; /* 0x170CC31F: jge 0x170cc327 */
L_170CC321:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC321: fadd dword ptr [0x1700142c] */
L_170CC327:
    _st[0] *= _st[1]; /* 0x170CC327: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CC329: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC32C: fstp dword ptr [esi] */
    edi = (uint32_t)MEM8(eax + (-0x3)); /* 0x170CC32E: movzx edi, byte ptr [eax - 3] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC332: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC335: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CC338: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC33A: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC33D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC33F: fstp dword ptr [esi - 0xc] */
    edi = (uint32_t)MEM8(eax + (-0x2)); /* 0x170CC342: movzx edi, byte ptr [eax - 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC346: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC349: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC34C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC34E: fstp dword ptr [esi - 8] */
    edi = (uint32_t)MEM8(eax + (-0x1)); /* 0x170CC351: movzx edi, byte ptr [eax - 1] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC355: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC358: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC35B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC35D: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC30F; /* 0x170CC360: jb 0x170cc30f */
L_170CC362:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC362: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CC364: pop edi */
L_170CC365:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC365: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC37B; /* 0x170CC369: je 0x170cc37b */
L_170CC36B:
    eax = MEM32(ecx + 0x68); /* 0x170CC36B: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC36E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC36E: shl eax, 4 */
    edx = esi; /* 0x170CC371: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC373: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC375: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC376: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC37B:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC37B: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC38F; /* 0x170CC37F: je 0x170cc38f */
L_170CC381:
    eax = MEM32(ecx + 0x68); /* 0x170CC381: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC384: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC384: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC387: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC389: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC38A: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC38F:
    esi = POP32_VAL(esp); /* 0x170CC38F: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC390: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC391: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC399u);

L_170CC399:
    edi = edi; /* 0x170CC399: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC39B: push ebp */
    ebp = esp; /* 0x170CC39C: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC39E: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC3A1: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC3A5: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC3A8: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC3AC: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC3AE: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC3B1: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CC3B4: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CC3B7: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC3B9: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC3BA: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC412; /* 0x170CC3BD: jae 0x170cc412 */
L_170CC3BF:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CC3BF: fld dword ptr [0x17001428] */
    PUSH32(esp, edi); /* 0x170CC3C5: push edi */
L_170CC3C6:
    edi = MEM32(eax); /* 0x170CC3C6: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x170CC3C8: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CC3CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CC3D0: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC3D3: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC3DE; /* 0x170CC3D6: jge 0x170cc3de */
L_170CC3D8:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC3D8: fadd dword ptr [0x1700142c] */
L_170CC3DE:
    _st[0] *= _st[1]; /* 0x170CC3DE: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CC3E0: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC3E3: fstp dword ptr [esi] */
    edi = (uint32_t)MEM8(eax + (-0x3)); /* 0x170CC3E5: movzx edi, byte ptr [eax - 3] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC3E9: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC3EC: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CC3EF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC3F1: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC3F4: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC3F6: fstp dword ptr [esi - 0xc] */
    edi = (uint32_t)MEM8(eax + (-0x2)); /* 0x170CC3F9: movzx edi, byte ptr [eax - 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC3FD: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC400: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC403: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC405: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CC408: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC40A: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC3C6; /* 0x170CC40D: jb 0x170cc3c6 */
L_170CC40F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC40F: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CC411: pop edi */
L_170CC412:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC412: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC428; /* 0x170CC416: je 0x170cc428 */
L_170CC418:
    eax = MEM32(ecx + 0x68); /* 0x170CC418: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC41B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC41B: shl eax, 4 */
    edx = esi; /* 0x170CC41E: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC420: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC422: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC423: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC428:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC428: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC43C; /* 0x170CC42C: je 0x170cc43c */
L_170CC42E:
    eax = MEM32(ecx + 0x68); /* 0x170CC42E: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC431: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC431: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC434: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC436: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC437: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC43C:
    esi = POP32_VAL(esp); /* 0x170CC43C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC43D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC43E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC446(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC446u);

L_170CC446:
    edi = edi; /* 0x170CC446: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC448: push ebp */
    ebp = esp; /* 0x170CC449: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC44B: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC44E: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC452: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC455: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC459: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC45B: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC45E: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CC461: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CC464: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC466: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC467: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC4B5; /* 0x170CC46A: jae 0x170cc4b5 */
L_170CC46C:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CC46C: fld dword ptr [0x17006014] */
    PUSH32(esp, edi); /* 0x170CC472: push edi */
L_170CC473:
    edi = MEM32(eax); /* 0x170CC473: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x170CC475: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CC47B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CC47D: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC480: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC48B; /* 0x170CC483: jge 0x170cc48b */
L_170CC485:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC485: fadd dword ptr [0x1700142c] */
L_170CC48B:
    _st[0] *= _st[1]; /* 0x170CC48B: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CC48D: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC490: fstp dword ptr [esi] */
    edi = (uint32_t)MEM16(eax + (-0x2)); /* 0x170CC492: movzx edi, word ptr [eax - 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC496: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC499: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CC49C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC49E: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC4A1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC4A3: fstp dword ptr [esi - 0xc] */
    fp_push(1.0); /* 0x170CC4A6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC4A8: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CC4AB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC4AD: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC473; /* 0x170CC4B0: jb 0x170cc473 */
L_170CC4B2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC4B2: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CC4B4: pop edi */
L_170CC4B5:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC4B5: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC4CB; /* 0x170CC4B9: je 0x170cc4cb */
L_170CC4BB:
    eax = MEM32(ecx + 0x68); /* 0x170CC4BB: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC4BE: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC4BE: shl eax, 4 */
    edx = esi; /* 0x170CC4C1: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC4C3: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC4C5: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC4C6: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC4CB:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC4CB: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC4DF; /* 0x170CC4CF: je 0x170cc4df */
L_170CC4D1:
    eax = MEM32(ecx + 0x68); /* 0x170CC4D1: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC4D4: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC4D4: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC4D7: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC4D9: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC4DA: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC4DF:
    esi = POP32_VAL(esp); /* 0x170CC4DF: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC4E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC4E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC4E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC4E9u);

L_170CC4E9:
    edi = edi; /* 0x170CC4E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC4EB: push ebp */
    ebp = esp; /* 0x170CC4EC: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC4EE: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC4F1: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC4F5: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC4F8: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC4FC: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC4FE: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC501: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC504: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC505: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC508: push edi */
    edi = eax + edx * 4; /* 0x170CC509: lea edi, [eax + edx*4] */
    /* cmp eax, edi */ /* 0x170CC50C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC59B; /* 0x170CC50E: jae 0x170cc59b */
L_170CC514:
    fp_push(*(float*)&MEM32(0x170074C0)); /* 0x170CC514: fld dword ptr [0x170074c0] */
    edx = 0x3FFu; /* 0x170CC51A: mov edx, 0x3ff */
    PUSH32(esp, ebx); /* 0x170CC51F: push ebx */
L_170CC520:
    ebx = MEM32(eax); /* 0x170CC520: mov ebx, dword ptr [eax] */
    if (20u) _cf = (((ebx) >> 19) & 1u); /* 0x170CC522: shr ebx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ebx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 20u; /* 0x170CC522: shr ebx, 0x14 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC525: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC527: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC529: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC52C: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC537; /* 0x170CC52F: jge 0x170cc537 */
L_170CC531:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC531: fadd dword ptr [0x1700142c] */
L_170CC537:
    _st[0] *= _st[1]; /* 0x170CC537: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC539: fstp dword ptr [esi] */
    ebx = MEM32(eax); /* 0x170CC53B: mov ebx, dword ptr [eax] */
    if (10u) _cf = (((ebx) >> 9) & 1u); /* 0x170CC53D: shr ebx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ebx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 10u; /* 0x170CC53D: shr ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC540: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC542: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC544: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC547: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC552; /* 0x170CC54A: jge 0x170cc552 */
L_170CC54C:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC54C: fadd dword ptr [0x1700142c] */
L_170CC552:
    _st[0] *= _st[1]; /* 0x170CC552: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CC554: fstp dword ptr [esi + 4] */
    ebx = MEM32(eax); /* 0x170CC557: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x170CC559: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170CC55B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC55D: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC560: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC56B; /* 0x170CC563: jge 0x170cc56b */
L_170CC565:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC565: fadd dword ptr [0x1700142c] */
L_170CC56B:
    _st[0] *= _st[1]; /* 0x170CC56B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CC56D: fstp dword ptr [esi + 8] */
    ebx = MEM32(eax); /* 0x170CC570: mov ebx, dword ptr [eax] */
    if (30u) _cf = (((ebx) >> 29) & 1u); /* 0x170CC572: shr ebx, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((ebx >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 30u; /* 0x170CC572: shr ebx, 0x1e */
    /* test ebx, ebx */ /* 0x170CC575: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x170CC577: mov dword ptr [ebp + 0x10], ebx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC57A: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC585; /* 0x170CC57D: jge 0x170cc585 */
L_170CC57F:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC57F: fadd dword ptr [0x1700142c] */
L_170CC585:
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CC585: fmul dword ptr [0x1700600c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CC58B: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC58E: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CC591: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC593: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC520; /* 0x170CC596: jb 0x170cc520 */
L_170CC598:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC598: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CC59A: pop ebx */
L_170CC59B:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC59B: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC5B1; /* 0x170CC59F: je 0x170cc5b1 */
L_170CC5A1:
    eax = MEM32(ecx + 0x68); /* 0x170CC5A1: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC5A4: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC5A4: shl eax, 4 */
    edx = esi; /* 0x170CC5A7: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC5A9: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC5AB: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC5AC: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC5B1:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC5B1: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC5C5; /* 0x170CC5B5: je 0x170cc5c5 */
L_170CC5B7:
    eax = MEM32(ecx + 0x68); /* 0x170CC5B7: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC5BA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC5BA: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC5BD: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC5BF: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC5C0: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC5C5:
    edi = POP32_VAL(esp); /* 0x170CC5C5: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC5C6: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC5C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC5C8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC5D0u);

L_170CC5D0:
    edi = edi; /* 0x170CC5D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC5D2: push ebp */
    ebp = esp; /* 0x170CC5D3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CC5D5: push ebx */
    PUSH32(esp, esi); /* 0x170CC5D6: push esi */
    ebx = ecx; /* 0x170CC5D7: mov ebx, ecx */
    esi = MEM32(ebx + 0x60); /* 0x170CC5D9: mov esi, dword ptr [ebx + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC5DC: imul esi, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x64); /* 0x170CC5E0: mov eax, dword ptr [ebx + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC5E3: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CC5E7: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x20); /* 0x170CC5E9: add esi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x68); /* 0x170CC5EC: mov eax, dword ptr [ebx + 0x68] */
    eax = esi + eax * 8; /* 0x170CC5EF: lea eax, [esi + eax*8] */
    /* cmp esi, eax */ /* 0x170CC5F2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CC5F4: push edi */
    edi = MEM32(ebp + 0x10); /* 0x170CC5F5: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x170CC5F8: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC695; /* 0x170CC5FB: jae 0x170cc695 */
L_170CC601:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CC601: fld dword ptr [0x17006014] */
L_170CC607:
    ecx = MEM32(esi); /* 0x170CC607: mov ecx, dword ptr [esi] */
    eax = 0xFFFFu; /* 0x170CC609: mov eax, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x170CC60E: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170CC610: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x170CC612: mov dword ptr [ebp + 0x10], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC615: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC620; /* 0x170CC618: jge 0x170cc620 */
L_170CC61A:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC61A: fadd dword ptr [0x1700142c] */
L_170CC620:
    _st[0] *= _st[1]; /* 0x170CC620: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x170CC622: fstp dword ptr [edi] */
    ecx = MEM32(esi); /* 0x170CC624: mov ecx, dword ptr [esi] */
    edx = MEM32(esi + 0x4); /* 0x170CC626: mov edx, dword ptr [esi + 4] */
    if (1) _cf = (((ecx) >> 15) & 1u); /* 0x170CC629: shrd ecx, edx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (16u)) | ((uint32_t)(edx) << (32 - (16u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (16u)) | ((uint32_t)(edx) << (32 - (16u)))) : (ecx));
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x170CC62D: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x170CC62F: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x170CC62F: shr edx, 0x10 */
    /* test ecx, ecx */ /* 0x170CC632: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x170CC634: mov dword ptr [ebp + 0x10], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC637: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC642; /* 0x170CC63A: jge 0x170cc642 */
L_170CC63C:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC63C: fadd dword ptr [0x1700142c] */
L_170CC642:
    _st[0] *= _st[1]; /* 0x170CC642: fmul st(1) */
    SET_LO8(ecx, 0x20u); /* 0x170CC644: mov cl, 0x20 */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x170CC646: fstp dword ptr [edi + 4] */
    eax = MEM32(esi); /* 0x170CC649: mov eax, dword ptr [esi] */
    edx = MEM32(esi + 0x4); /* 0x170CC64B: mov edx, dword ptr [esi + 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC64E: fstp st(0) */
    RECOMP_CALL(sub_1721B290); /* 0x170CC650: call 0x1721b290 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CC655: fld dword ptr [0x17006014] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x170CC65B: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x170CC660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x170CC662: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC665: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CC670; /* 0x170CC668: jge 0x170cc670 */
L_170CC66A:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CC66A: fadd dword ptr [0x1700142c] */
L_170CC670:
    _st[0] *= _st[1]; /* 0x170CC670: fmul st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170CC672: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x170CC675: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x170CC678: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x8)) = _v; } /* 0x170CC67B: fstp dword ptr [edi - 8] */
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x170CC67E: movzx eax, word ptr [esi - 2] */
    MEM32(ebp + 0x10) = eax; /* 0x170CC682: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC685: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC688: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x4)) = _v; } /* 0x170CC68A: fstp dword ptr [edi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC607; /* 0x170CC68D: jb 0x170cc607 */
L_170CC693:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC693: fstp st(0) */
L_170CC695:
    /* cmp MEM32(ebx + 0x18), 0 */ /* 0x170CC695: cmp dword ptr [ebx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC6AD; /* 0x170CC699: je 0x170cc6ad */
L_170CC69B:
    eax = MEM32(ebx + 0x68); /* 0x170CC69B: mov eax, dword ptr [ebx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC69E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC69E: shl eax, 4 */
    ecx = edi; /* 0x170CC6A1: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CC6A3: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CC6A5: push ecx */
    ecx = ebx; /* 0x170CC6A6: mov ecx, ebx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC6A8: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC6AD:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CC6AD: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC6C3; /* 0x170CC6B1: je 0x170cc6c3 */
L_170CC6B3:
    eax = MEM32(ebx + 0x68); /* 0x170CC6B3: mov eax, dword ptr [ebx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC6B6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC6B6: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x170CC6B9: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CC6BB: push edi */
    ecx = ebx; /* 0x170CC6BC: mov ecx, ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CC6BE: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC6C3:
    edi = POP32_VAL(esp); /* 0x170CC6C3: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC6C4: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CC6C5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CC6C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC6C7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC6CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC6CFu);

L_170CC6CF:
    edi = edi; /* 0x170CC6CF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC6D1: push ebp */
    ebp = esp; /* 0x170CC6D2: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC6D4: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC6D7: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC6DB: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC6DE: imul edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170CC6E2: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC6E3: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC6E6: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC6E8: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x170CC6EB: push edi */
    edi = MEM32(ecx + 0x68); /* 0x170CC6EC: mov edi, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170CC6EF: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CC6F1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC749; /* 0x170CC6F3: jae 0x170cc749 */
L_170CC6F5:
    fp_push(*(float*)&MEM32(0x170074BC)); /* 0x170CC6F5: fld dword ptr [0x170074bc] */
L_170CC6FB:
    SET_LO8(edx, MEM8(eax)); /* 0x170CC6FB: mov dl, byte ptr [eax] */
    if (5u) _cf = (((LO8(edx)) >> 4) & 1u); /* 0x170CC6FD: shr dl, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 5u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 5u); /* 0x170CC6FD: shr dl, 5 */
    edx = (uint32_t)LO8(edx); /* 0x170CC700: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CC703: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC706: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC709: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC70B: fstp dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC70D: mov dl, byte ptr [eax] */
    if (2u) _cf = (((LO8(edx)) >> 1) & 1u); /* 0x170CC70F: shr dl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 2u); /* 0x170CC70F: shr dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(edx, LO8(edx) & 7); /* 0x170CC712: and dl, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = (uint32_t)LO8(edx); /* 0x170CC715: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CC718: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC71B: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC71E: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC721: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC723: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC726: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(edx, LO8(edx) & 3); /* 0x170CC728: and dl, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = (uint32_t)LO8(edx); /* 0x170CC72B: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CC72E: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC731: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC732: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC734: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CC737: fmul dword ptr [0x1700600c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC73D: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CC740: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC742: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC6FB; /* 0x170CC745: jb 0x170cc6fb */
L_170CC747:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC747: fstp st(0) */
L_170CC749:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC749: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC75F; /* 0x170CC74D: je 0x170cc75f */
L_170CC74F:
    eax = MEM32(ecx + 0x68); /* 0x170CC74F: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC752: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC752: shl eax, 4 */
    edx = esi; /* 0x170CC755: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC757: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC759: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC75A: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC75F:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC75F: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC773; /* 0x170CC763: je 0x170cc773 */
L_170CC765:
    eax = MEM32(ecx + 0x68); /* 0x170CC765: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC768: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC768: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC76B: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC76D: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC76E: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC773:
    edi = POP32_VAL(esp); /* 0x170CC773: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC774: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC776: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC77E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC77Eu);

L_170CC77E:
    edi = edi; /* 0x170CC77E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC780: push ebp */
    ebp = esp; /* 0x170CC781: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC783: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC786: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC78A: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC78D: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC791: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC793: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC796: mov edx, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CC799: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CC79B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC79D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC79E: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC7CD; /* 0x170CC7A1: jae 0x170cc7cd */
L_170CC7A3:
    PUSH32(esp, edi); /* 0x170CC7A3: push edi */
L_170CC7A4:
    fp_push(0.0); /* 0x170CC7A4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC7A6: fstp dword ptr [esi] */
    fp_push(0.0); /* 0x170CC7A8: fldz  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC7AA: add esi, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC7AD: fstp dword ptr [esi - 0xc] */
    fp_push(0.0); /* 0x170CC7B0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC7B2: fstp dword ptr [esi - 8] */
    edi = (uint32_t)MEM8(eax); /* 0x170CC7B5: movzx edi, byte ptr [eax] */
    MEM32(ebp + 0x10) = edi; /* 0x170CC7B8: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC7BB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x170CC7BC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC7BE: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001428); /* 0x170CC7C1: fmul dword ptr [0x17001428] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC7C7: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC7A4; /* 0x170CC7CA: jb 0x170cc7a4 */
L_170CC7CC:
    edi = POP32_VAL(esp); /* 0x170CC7CC: pop edi */
L_170CC7CD:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC7CD: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC7E3; /* 0x170CC7D1: je 0x170cc7e3 */
L_170CC7D3:
    eax = MEM32(ecx + 0x68); /* 0x170CC7D3: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC7D6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC7D6: shl eax, 4 */
    edx = esi; /* 0x170CC7D9: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC7DB: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC7DD: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC7DE: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC7E3:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC7E3: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC7F7; /* 0x170CC7E7: je 0x170cc7f7 */
L_170CC7E9:
    eax = MEM32(ecx + 0x68); /* 0x170CC7E9: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC7EC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC7EC: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC7EF: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC7F1: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC7F2: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC7F7:
    esi = POP32_VAL(esp); /* 0x170CC7F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC7F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC7F9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC801(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC801u);

L_170CC801:
    edi = edi; /* 0x170CC801: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC803: push ebp */
    ebp = esp; /* 0x170CC804: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC806: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC809: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC80D: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC810: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC814: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC816: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC819: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC81C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC81D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC820: push edi */
    edi = eax + edx * 2; /* 0x170CC821: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CC824: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC88B; /* 0x170CC826: jae 0x170cc88b */
L_170CC828:
    fp_push(*(float*)&MEM32(0x170074BC)); /* 0x170CC828: fld dword ptr [0x170074bc] */
L_170CC82E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC82E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax)); /* 0x170CC830: mov dl, byte ptr [eax] */
    if (5u) _cf = (((LO8(edx)) >> 4) & 1u); /* 0x170CC832: shr dl, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 5u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 5u); /* 0x170CC832: shr dl, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x170CC835: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC838: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC83B: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC83E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC840: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC842: fstp dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC844: mov dl, byte ptr [eax] */
    if (2u) _cf = (((LO8(edx)) >> 1) & 1u); /* 0x170CC846: shr dl, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 2u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 2u); /* 0x170CC846: shr dl, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC849: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x170CC84C: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC84F: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC852: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC855: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC857: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC859: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC85C: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CC85E: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC861: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC864: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC867: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC868: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC869: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CC86B: fmul dword ptr [0x1700600c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC871: fstp dword ptr [esi - 8] */
    edx = (uint32_t)MEM8(eax + (-0x1)); /* 0x170CC874: movzx edx, byte ptr [eax - 1] */
    MEM32(ebp + 0x10) = edx; /* 0x170CC878: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC87B: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001428); /* 0x170CC87E: fmul dword ptr [0x17001428] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC884: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC82E; /* 0x170CC887: jb 0x170cc82e */
L_170CC889:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC889: fstp st(0) */
L_170CC88B:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC88B: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC8A1; /* 0x170CC88F: je 0x170cc8a1 */
L_170CC891:
    eax = MEM32(ecx + 0x68); /* 0x170CC891: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC894: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC894: shl eax, 4 */
    edx = esi; /* 0x170CC897: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC899: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC89B: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC89C: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC8A1:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC8A1: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC8B5; /* 0x170CC8A5: je 0x170cc8b5 */
L_170CC8A7:
    eax = MEM32(ecx + 0x68); /* 0x170CC8A7: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC8AA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC8AA: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC8AD: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC8AF: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC8B0: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC8B5:
    edi = POP32_VAL(esp); /* 0x170CC8B5: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC8B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC8B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC8B8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC8C0u);

L_170CC8C0:
    edi = edi; /* 0x170CC8C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC8C2: push ebp */
    ebp = esp; /* 0x170CC8C3: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC8C5: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC8C8: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC8CC: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC8CF: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC8D3: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC8D5: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC8D8: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CC8DB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CC8DC: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CC8DF: push edi */
    edi = eax + edx * 2; /* 0x170CC8E0: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CC8E3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC937; /* 0x170CC8E5: jae 0x170cc937 */
L_170CC8E7:
    fp_push(*(float*)&MEM32(0x170074B8)); /* 0x170CC8E7: fld dword ptr [0x170074b8] */
L_170CC8ED:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x170CC8ED: mov dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x170CC8F0: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = (uint32_t)LO8(edx); /* 0x170CC8F3: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CC8F6: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC8F9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC8FB: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CC8FE: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CC900: fstp dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC902: mov dl, byte ptr [eax] */
    if (4u) _cf = (((LO8(edx)) >> 3) & 1u); /* 0x170CC904: shr dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 4u); /* 0x170CC904: shr dl, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CC907: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x170CC90A: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC90D: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC910: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC913: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x170CC915: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CC917: fstp dword ptr [esi - 0xc] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CC91A: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x170CC91C: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CC91F: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC922: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC925: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC926: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170CC927: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x170CC929: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CC92B: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CC92E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CC930: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC8ED; /* 0x170CC933: jb 0x170cc8ed */
L_170CC935:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CC935: fstp st(0) */
L_170CC937:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC937: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC94D; /* 0x170CC93B: je 0x170cc94d */
L_170CC93D:
    eax = MEM32(ecx + 0x68); /* 0x170CC93D: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC940: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC940: shl eax, 4 */
    edx = esi; /* 0x170CC943: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC945: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC947: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC948: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC94D:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC94D: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC961; /* 0x170CC951: je 0x170cc961 */
L_170CC953:
    eax = MEM32(ecx + 0x68); /* 0x170CC953: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC956: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC956: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CC959: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CC95B: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CC95C: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC961:
    edi = POP32_VAL(esp); /* 0x170CC961: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC962: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CC963: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC964: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CC96C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CC96Cu);

L_170CC96C:
    edi = edi; /* 0x170CC96C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CC96E: push ebp */
    ebp = esp; /* 0x170CC96F: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CC971: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CC974: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CC978: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CC97B: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CC97F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CC981: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CC984: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 2; /* 0x170CC987: lea edx, [eax + edx*2] */
    /* cmp eax, edx */ /* 0x170CC98A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CC98C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170CC98D: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = edx; /* 0x170CC990: mov dword ptr [ebp + 8], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CC9CD; /* 0x170CC993: jae 0x170cc9cd */
L_170CC995:
    PUSH32(esp, esi); /* 0x170CC995: push esi */
    PUSH32(esp, edi); /* 0x170CC996: push edi */
L_170CC997:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CC997: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax)); /* 0x170CC999: mov dl, byte ptr [eax] */
    edi = ebx; /* 0x170CC99B: mov edi, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170CC99D: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x170CC9A0: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x170CC9A6: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x170CC9A6: shl edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x38); /* 0x170CC9A9: add edx, dword ptr [ecx + 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC9AC: inc eax */
    _flag_k = FK_INC;
    esi = edx; /* 0x170CC9AD: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CC9AF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CC9B0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CC9B1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CC9B2: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = (uint32_t)MEM8(eax); /* 0x170CC9B3: movzx edx, byte ptr [eax] */
    MEM32(ebp + 0x10) = edx; /* 0x170CC9B6: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CC9B9: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170CC9BA: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CC9BD: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001428); /* 0x170CC9C0: fmul dword ptr [0x17001428] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + (-0x4)) = _v; } /* 0x170CC9C6: fstp dword ptr [ebx - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CC997; /* 0x170CC9C9: jb 0x170cc997 */
L_170CC9CB:
    edi = POP32_VAL(esp); /* 0x170CC9CB: pop edi */
    esi = POP32_VAL(esp); /* 0x170CC9CC: pop esi */
L_170CC9CD:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CC9CD: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC9E3; /* 0x170CC9D1: je 0x170cc9e3 */
L_170CC9D3:
    eax = MEM32(ecx + 0x68); /* 0x170CC9D3: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC9D6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC9D6: shl eax, 4 */
    edx = ebx; /* 0x170CC9D9: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CC9DB: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CC9DD: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CC9DE: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CC9E3:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CC9E3: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CC9F7; /* 0x170CC9E7: je 0x170cc9f7 */
L_170CC9E9:
    eax = MEM32(ecx + 0x68); /* 0x170CC9E9: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CC9EC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CC9EC: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x170CC9EF: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CC9F1: push ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CC9F2: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CC9F7:
    ebx = POP32_VAL(esp); /* 0x170CC9F7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CC9F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CC9F9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCA01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCA01u);

L_170CCA01:
    edi = edi; /* 0x170CCA01: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCA03: push ebp */
    ebp = esp; /* 0x170CCA04: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CCA06: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCA09: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CCA0D: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCA10: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CCA14: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CCA16: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CCA19: mov edx, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CCA1C: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CCA1E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CCA20: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170CCA21: mov ebx, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCA41; /* 0x170CCA24: jae 0x170cca41 */
L_170CCA26:
    PUSH32(esp, esi); /* 0x170CCA26: push esi */
    PUSH32(esp, edi); /* 0x170CCA27: push edi */
L_170CCA28:
    esi = (uint32_t)MEM8(eax); /* 0x170CCA28: movzx esi, byte ptr [eax] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x170CCA2B: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x170CCA2B: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ecx + 0x38); /* 0x170CCA2E: add esi, dword ptr [ecx + 0x38] */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x170CCA31: mov edi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CCA33: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CCA34: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CCA35: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCA36: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170CCA37: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CCA3A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CCA3C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCA28; /* 0x170CCA3D: jb 0x170cca28 */
L_170CCA3F:
    edi = POP32_VAL(esp); /* 0x170CCA3F: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCA40: pop esi */
L_170CCA41:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CCA41: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCA57; /* 0x170CCA45: je 0x170cca57 */
L_170CCA47:
    eax = MEM32(ecx + 0x68); /* 0x170CCA47: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCA4A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCA4A: shl eax, 4 */
    edx = ebx; /* 0x170CCA4D: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CCA4F: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CCA51: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCA52: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCA57:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CCA57: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCA6B; /* 0x170CCA5B: je 0x170cca6b */
L_170CCA5D:
    eax = MEM32(ecx + 0x68); /* 0x170CCA5D: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCA60: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCA60: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x170CCA63: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CCA65: push ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CCA66: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCA6B:
    ebx = POP32_VAL(esp); /* 0x170CCA6B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CCA6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCA6D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCA75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCA75u);

L_170CCA75:
    edi = edi; /* 0x170CCA75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCA77: push ebp */
    ebp = esp; /* 0x170CCA78: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CCA7A: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCA7D: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CCA81: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCA84: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CCA88: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CCA8A: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CCA8D: mov edx, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CCA90: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CCA92: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCA94: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCA95: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCAC0; /* 0x170CCA98: jae 0x170ccac0 */
L_170CCA9A:
    PUSH32(esp, edi); /* 0x170CCA9A: push edi */
L_170CCA9B:
    edi = (uint32_t)MEM8(eax); /* 0x170CCA9B: movzx edi, byte ptr [eax] */
    MEM32(ebp + 0x10) = edi; /* 0x170CCA9E: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCAA1: inc eax */
    _flag_k = FK_INC;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCAA2: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001428); /* 0x170CCAA5: fmul dword ptr [0x17001428] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CCAAB: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CCAAE: fst dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCAB1: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCAB3: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CCAB6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x170CCAB8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCABA: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCA9B; /* 0x170CCABD: jb 0x170cca9b */
L_170CCABF:
    edi = POP32_VAL(esp); /* 0x170CCABF: pop edi */
L_170CCAC0:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CCAC0: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCAD6; /* 0x170CCAC4: je 0x170ccad6 */
L_170CCAC6:
    eax = MEM32(ecx + 0x68); /* 0x170CCAC6: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCAC9: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCAC9: shl eax, 4 */
    edx = esi; /* 0x170CCACC: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CCACE: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CCAD0: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCAD1: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCAD6:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CCAD6: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCAEA; /* 0x170CCADA: je 0x170ccaea */
L_170CCADC:
    eax = MEM32(ecx + 0x68); /* 0x170CCADC: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCADF: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCADF: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCAE2: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCAE4: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCAE5: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCAEA:
    esi = POP32_VAL(esp); /* 0x170CCAEA: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCAEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCAEC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCAF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCAF4u);

L_170CCAF4:
    edi = edi; /* 0x170CCAF4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCAF6: push ebp */
    ebp = esp; /* 0x170CCAF7: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CCAF9: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCAFC: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CCB00: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCB03: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CCB07: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CCB09: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CCB0C: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, esi); /* 0x170CCB0F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCB10: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CCB13: push edi */
    edi = eax + edx * 2; /* 0x170CCB14: lea edi, [eax + edx*2] */
    /* cmp eax, edi */ /* 0x170CCB17: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCB55; /* 0x170CCB19: jae 0x170ccb55 */
L_170CCB1B:
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x170CCB1B: fld dword ptr [0x17001428] */
L_170CCB21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CCB21: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax)); /* 0x170CCB23: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x170CCB25: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CCB2B: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCB2E: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCB31: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCB32: inc eax */
    _flag_k = FK_INC;
    _st[0] *= _st[1]; /* 0x170CCB33: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CCB35: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CCB38: fst dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCB3B: fstp dword ptr [esi] */
    edx = (uint32_t)MEM8(eax + (-0x1)); /* 0x170CCB3D: movzx edx, byte ptr [eax - 1] */
    MEM32(ebp + 0x10) = edx; /* 0x170CCB41: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCB44: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CCB47: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCB49: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCB4C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCB4E: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCB21; /* 0x170CCB51: jb 0x170ccb21 */
L_170CCB53:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCB53: fstp st(0) */
L_170CCB55:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CCB55: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCB6B; /* 0x170CCB59: je 0x170ccb6b */
L_170CCB5B:
    eax = MEM32(ecx + 0x68); /* 0x170CCB5B: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCB5E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCB5E: shl eax, 4 */
    edx = esi; /* 0x170CCB61: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CCB63: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CCB65: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCB66: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCB6B:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CCB6B: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCB7F; /* 0x170CCB6F: je 0x170ccb7f */
L_170CCB71:
    eax = MEM32(ecx + 0x68); /* 0x170CCB71: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCB74: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCB74: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCB77: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCB79: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCB7A: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCB7F:
    edi = POP32_VAL(esp); /* 0x170CCB7F: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCB80: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCB81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCB82: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCB8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCB8Au);

L_170CCB8A:
    edi = edi; /* 0x170CCB8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCB8C: push ebp */
    ebp = esp; /* 0x170CCB8D: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CCB8F: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCB92: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CCB96: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCB99: imul edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170CCB9D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCB9E: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CCBA1: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CCBA3: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x170CCBA6: push edi */
    edi = MEM32(ecx + 0x68); /* 0x170CCBA7: mov edi, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170CCBAA: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CCBAC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCBEB; /* 0x170CCBAE: jae 0x170ccbeb */
L_170CCBB0:
    fp_push(*(float*)&MEM32(0x170074B8)); /* 0x170CCBB0: fld dword ptr [0x170074b8] */
L_170CCBB6:
    SET_LO8(edx, MEM8(eax)); /* 0x170CCBB6: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(edx, LO8(edx) & 0xFu); /* 0x170CCBB8: and dl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = (uint32_t)LO8(edx); /* 0x170CCBBB: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CCBBE: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCBC1: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCBC4: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CCBC6: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CCBC9: fst dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCBCC: fstp dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x170CCBCE: mov dl, byte ptr [eax] */
    if (4u) _cf = (((LO8(edx)) >> 3) & 1u); /* 0x170CCBD0: shr dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 4u); /* 0x170CCBD0: shr dl, 4 */
    edx = (uint32_t)LO8(edx); /* 0x170CCBD3: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x170CCBD6: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCBD9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCBDA: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x170CCBDD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCBDF: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCBE2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCBE4: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCBB6; /* 0x170CCBE7: jb 0x170ccbb6 */
L_170CCBE9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCBE9: fstp st(0) */
L_170CCBEB:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CCBEB: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCC01; /* 0x170CCBEF: je 0x170ccc01 */
L_170CCBF1:
    eax = MEM32(ecx + 0x68); /* 0x170CCBF1: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCBF4: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCBF4: shl eax, 4 */
    edx = esi; /* 0x170CCBF7: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CCBF9: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CCBFB: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCBFC: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCC01:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CCC01: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCC15; /* 0x170CCC05: je 0x170ccc15 */
L_170CCC07:
    eax = MEM32(ecx + 0x68); /* 0x170CCC07: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCC0A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCC0A: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCC0D: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCC0F: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCC10: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCC15:
    edi = POP32_VAL(esp); /* 0x170CCC15: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCC16: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCC17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCC18: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCC20u);

L_170CCC20:
    edi = edi; /* 0x170CCC20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCC22: push ebp */
    ebp = esp; /* 0x170CCC23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CCC25: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCC26: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CCC29: push edi */
    edi = ecx; /* 0x170CCC2A: mov edi, ecx */
    eax = MEM32(edi + 0x60); /* 0x170CCC2C: mov eax, dword ptr [edi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCC2F: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x64); /* 0x170CCC33: mov ecx, dword ptr [edi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCC36: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CCC3A: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x20); /* 0x170CCC3C: add eax, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x68); /* 0x170CCC3F: mov ecx, dword ptr [edi + 0x68] */
    ecx = eax + ecx * 2; /* 0x170CCC42: lea ecx, [eax + ecx*2] */
    /* cmp eax, ecx */ /* 0x170CCC45: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x170CCC47: mov dword ptr [ebp + 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCC9A; /* 0x170CCC4A: jae 0x170ccc9a */
L_170CCC4C:
    fp_push(*(float*)&MEM32(0x170074C8)); /* 0x170CCC4C: fld dword ptr [0x170074c8] */
    PUSH32(esp, ebx); /* 0x170CCC52: push ebx */
L_170CCC53:
    SET_LO8(ecx, MEM8(eax)); /* 0x170CCC53: mov cl, byte ptr [eax] */
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x170CCC55: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), 0x80u */ /* 0x170CCC58: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCC5B: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(ecx)); /* 0x170CCC5E: add bl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = (int32_t)(int8_t)LO8(ebx); /* 0x170CCC60: movsx ecx, bl */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCC63: mov dword ptr [ebp + 0x10], ecx */
    /* cmp LO8(edx), 0x80u */ /* 0x170CCC66: cmp dl, 0x80 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCC69: sete cl */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCC6C: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(edx)); /* 0x170CCC6F: add cl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x170CCC71: movsx ecx, cl */
    _st[0] *= _st[1]; /* 0x170CCC74: fmul st(1) */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCC76: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCC79: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCC7A: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCC7C: inc eax */
    _flag_k = FK_INC;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCC7D: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCC80: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170CCC83: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x170CCC86: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CCC88: fstp dword ptr [esi - 0xc] */
    fp_push(1.0); /* 0x170CCC8B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CCC8D: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CCC90: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCC92: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCC53; /* 0x170CCC95: jb 0x170ccc53 */
L_170CCC97:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCC97: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CCC99: pop ebx */
L_170CCC9A:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CCC9A: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCCB2; /* 0x170CCC9E: je 0x170cccb2 */
L_170CCCA0:
    eax = MEM32(edi + 0x68); /* 0x170CCCA0: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCCA3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCCA3: shl eax, 4 */
    ecx = esi; /* 0x170CCCA6: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CCCA8: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CCCAA: push ecx */
    ecx = edi; /* 0x170CCCAB: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCCAD: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCCB2:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CCCB2: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCCC8; /* 0x170CCCB6: je 0x170cccc8 */
L_170CCCB8:
    eax = MEM32(edi + 0x68); /* 0x170CCCB8: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCCBB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCCBB: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCCBE: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCCC0: push esi */
    ecx = edi; /* 0x170CCCC1: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCCC3: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCCC8:
    edi = POP32_VAL(esp); /* 0x170CCCC8: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCCC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCCCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCCCB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCCD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCCD3u);

L_170CCCD3:
    edi = edi; /* 0x170CCCD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCCD5: push ebp */
    ebp = esp; /* 0x170CCCD6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CCCD8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCCD9: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CCCDC: push edi */
    edi = ecx; /* 0x170CCCDD: mov edi, ecx */
    eax = MEM32(edi + 0x60); /* 0x170CCCDF: mov eax, dword ptr [edi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCCE2: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x64); /* 0x170CCCE6: mov ecx, dword ptr [edi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCCE9: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CCCED: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x20); /* 0x170CCCEF: add eax, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x68); /* 0x170CCCF2: mov ecx, dword ptr [edi + 0x68] */
    ecx = eax + ecx * 2; /* 0x170CCCF5: lea ecx, [eax + ecx*2] */
    /* cmp eax, ecx */ /* 0x170CCCF8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x170CCCFA: mov dword ptr [ebp + 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCD72; /* 0x170CCCFD: jae 0x170ccd72 */
L_170CCCFF:
    fp_push(*(float*)&MEM32(0x170074B8)); /* 0x170CCCFF: fld dword ptr [0x170074b8] */
    PUSH32(esp, ebx); /* 0x170CCD05: push ebx */
L_170CCD06:
    SET_LO8(edx, MEM8(eax)); /* 0x170CCD06: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CCD08: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x170CCD0A: mov cx, word ptr [eax] */
    if (3u) _cf = (((LO8(edx)) >> 5) & 1u); /* 0x170CCD0D: shl dl, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 3u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 3u); /* 0x170CCD0D: shl dl, 3 */
    if (3u) _cf = (((LO8(edx)) >> 2) & 1u); /* 0x170CCD10: sar dl, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(LO8(edx)) >> 3u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, (uint32_t)((int32_t)(int32_t)(int8_t)(LO8(edx)) >> 3u));
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x170CCD13: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x170CCD13: shr ecx, 5 */
    if (3u) _cf = (((LO8(ecx)) >> 5) & 1u); /* 0x170CCD16: shl cl, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 3u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 3u); /* 0x170CCD16: shl cl, 3 */
    if (3u) _cf = (((LO8(ecx)) >> 2) & 1u); /* 0x170CCD19: sar cl, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(LO8(ecx)) >> 3u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, (uint32_t)((int32_t)(int32_t)(int8_t)(LO8(ecx)) >> 3u));
    /* cmp LO8(edx), 0xF0u */ /* 0x170CCD1C: cmp dl, 0xf0 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCD1F: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(edx)); /* 0x170CCD22: add bl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(ecx), 0xF0u */ /* 0x170CCD24: cmp cl, 0xf0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = (int32_t)(int8_t)LO8(ebx); /* 0x170CCD27: movsx edx, bl */
    MEM32(ebp + 0x10) = edx; /* 0x170CCD2A: mov dword ptr [ebp + 0x10], edx */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCD2D: sete dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x170CCD30: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCD32: fild dword ptr [ebp + 0x10] */
    ecx = (int32_t)(int8_t)LO8(edx); /* 0x170CCD35: movsx ecx, dl */
    _st[0] *= _st[1]; /* 0x170CCD38: fmul st(1) */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCD3A: mov dword ptr [ebp + 0x10], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCD3D: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCD3F: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCD42: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCD45: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CCD47: fstp dword ptr [esi - 0xc] */
    fp_push(1.0); /* 0x170CCD4A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CCD4C: fstp dword ptr [esi - 8] */
    SET_LO16(ecx, MEM16(eax)); /* 0x170CCD4F: mov cx, word ptr [eax] */
    if (10u) _cf = (((LO16(ecx)) >> 9) & 1u); /* 0x170CCD52: shr cx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 10u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 10u); /* 0x170CCD52: shr cx, 0xa */
    ecx = (uint32_t)LO16(ecx); /* 0x170CCD56: movzx ecx, cx */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCD59: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCD5C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CCD5D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170CCD5E: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCD61: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700748C); /* 0x170CCD64: fmul dword ptr [0x1700748c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCD6A: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCD06; /* 0x170CCD6D: jb 0x170ccd06 */
L_170CCD6F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCD6F: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CCD71: pop ebx */
L_170CCD72:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CCD72: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCD8A; /* 0x170CCD76: je 0x170ccd8a */
L_170CCD78:
    eax = MEM32(edi + 0x68); /* 0x170CCD78: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCD7B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCD7B: shl eax, 4 */
    ecx = esi; /* 0x170CCD7E: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CCD80: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CCD82: push ecx */
    ecx = edi; /* 0x170CCD83: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCD85: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCD8A:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CCD8A: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCDA0; /* 0x170CCD8E: je 0x170ccda0 */
L_170CCD90:
    eax = MEM32(edi + 0x68); /* 0x170CCD90: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCD93: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCD93: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCD96: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCD98: push esi */
    ecx = edi; /* 0x170CCD99: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCD9B: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCDA0:
    edi = POP32_VAL(esp); /* 0x170CCDA0: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCDA1: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCDA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCDA3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCDAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCDABu);

L_170CCDAB:
    edi = edi; /* 0x170CCDAB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCDAD: push ebp */
    ebp = esp; /* 0x170CCDAE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CCDB0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCDB1: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CCDB4: push edi */
    edi = ecx; /* 0x170CCDB5: mov edi, ecx */
    eax = MEM32(edi + 0x60); /* 0x170CCDB7: mov eax, dword ptr [edi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCDBA: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x64); /* 0x170CCDBE: mov ecx, dword ptr [edi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCDC1: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CCDC5: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x20); /* 0x170CCDC7: add eax, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x68); /* 0x170CCDCA: mov ecx, dword ptr [edi + 0x68] */
    ecx = eax + ecx * 4; /* 0x170CCDCD: lea ecx, [eax + ecx*4] */
    /* cmp eax, ecx */ /* 0x170CCDD0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x170CCDD2: mov dword ptr [ebp + 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCE36; /* 0x170CCDD5: jae 0x170cce36 */
L_170CCDD7:
    fp_push(*(float*)&MEM32(0x170074C8)); /* 0x170CCDD7: fld dword ptr [0x170074c8] */
    PUSH32(esp, ebx); /* 0x170CCDDD: push ebx */
L_170CCDDE:
    SET_LO8(edx, MEM8(eax)); /* 0x170CCDDE: mov dl, byte ptr [eax] */
    ecx = MEM32(eax); /* 0x170CCDE0: mov ecx, dword ptr [eax] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x170CCDE2: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x170CCDE2: shr ecx, 8 */
    /* cmp LO8(edx), 0x80u */ /* 0x170CCDE5: cmp dl, 0x80 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCDE8: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(edx)); /* 0x170CCDEB: add bl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = (int32_t)(int8_t)LO8(ebx); /* 0x170CCDED: movsx edx, bl */
    /* cmp LO8(ecx), 0x80u */ /* 0x170CCDF0: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0x10) = edx; /* 0x170CCDF3: mov dword ptr [ebp + 0x10], edx */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCDF6: sete dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x170CCDF9: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCDFB: fild dword ptr [ebp + 0x10] */
    ecx = (int32_t)(int8_t)LO8(edx); /* 0x170CCDFE: movsx ecx, dl */
    _st[0] *= _st[1]; /* 0x170CCE01: fmul st(1) */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCE03: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CCE06: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCE09: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCE0B: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170CCE0E: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCE11: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCE14: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CCE16: fstp dword ptr [esi - 0xc] */
    fp_push(1.0); /* 0x170CCE19: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CCE1B: fstp dword ptr [esi - 8] */
    ecx = (uint32_t)MEM8(eax + (-0x2)); /* 0x170CCE1E: movzx ecx, byte ptr [eax - 2] */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCE22: mov dword ptr [ebp + 0x10], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCE25: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001428); /* 0x170CCE28: fmul dword ptr [0x17001428] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCE2E: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCDDE; /* 0x170CCE31: jb 0x170ccdde */
L_170CCE33:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCE33: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CCE35: pop ebx */
L_170CCE36:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CCE36: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCE4E; /* 0x170CCE3A: je 0x170cce4e */
L_170CCE3C:
    eax = MEM32(edi + 0x68); /* 0x170CCE3C: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCE3F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCE3F: shl eax, 4 */
    ecx = esi; /* 0x170CCE42: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CCE44: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CCE46: push ecx */
    ecx = edi; /* 0x170CCE47: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCE49: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCE4E:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CCE4E: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCE64; /* 0x170CCE52: je 0x170cce64 */
L_170CCE54:
    eax = MEM32(edi + 0x68); /* 0x170CCE54: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCE57: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCE57: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCE5A: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCE5C: push esi */
    ecx = edi; /* 0x170CCE5D: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCE5F: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCE64:
    edi = POP32_VAL(esp); /* 0x170CCE64: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCE65: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CCE66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCE67: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCE6Fu);

L_170CCE6F:
    edi = edi; /* 0x170CCE6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCE71: push ebp */
    ebp = esp; /* 0x170CCE72: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170CCE74: push ecx */
    PUSH32(esp, esi); /* 0x170CCE75: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCE76: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CCE79: push edi */
    edi = ecx; /* 0x170CCE7A: mov edi, ecx */
    eax = MEM32(edi + 0x60); /* 0x170CCE7C: mov eax, dword ptr [edi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCE7F: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x64); /* 0x170CCE83: mov ecx, dword ptr [edi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCE86: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CCE8A: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x20); /* 0x170CCE8C: add eax, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x68); /* 0x170CCE8F: mov ecx, dword ptr [edi + 0x68] */
    ecx = eax + ecx * 4; /* 0x170CCE92: lea ecx, [eax + ecx*4] */
    /* cmp eax, ecx */ /* 0x170CCE95: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x170CCE97: mov dword ptr [ebp - 4], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCF29; /* 0x170CCE9A: jae 0x170ccf29 */
L_170CCEA0:
    fp_push(*(float*)&MEM32(0x170074C8)); /* 0x170CCEA0: fld dword ptr [0x170074c8] */
    PUSH32(esp, ebx); /* 0x170CCEA6: push ebx */
L_170CCEA7:
    ebx = MEM32(eax); /* 0x170CCEA7: mov ebx, dword ptr [eax] */
    edx = ebx; /* 0x170CCEA9: mov edx, ebx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x170CCEAB: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x170CCEAB: shr edx, 0x10 */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(edx)); /* 0x170CCEAE: mov byte ptr [ebp + 0x13], dl */
    edx = ebx; /* 0x170CCEB1: mov edx, ebx */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x170CCEB3: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x170CCEB3: shr edx, 0x18 */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(edx)); /* 0x170CCEB6: mov byte ptr [ebp + 0xb], dl */
    ecx = ebx; /* 0x170CCEB9: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x170CCEBB: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x170CCEBB: shr ecx, 8 */
    SET_LO8(edx, LO8(ebx)); /* 0x170CCEBE: mov dl, bl */
    /* cmp LO8(edx), 0x80u */ /* 0x170CCEC0: cmp dl, 0x80 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCEC3: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(edx)); /* 0x170CCEC6: add bl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(ecx), 0x80u */ /* 0x170CCEC8: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = (int32_t)(int8_t)LO8(ebx); /* 0x170CCECB: movsx edx, bl */
    MEM32(ebp + 0xC) = edx; /* 0x170CCECE: mov dword ptr [ebp + 0xc], edx */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCED1: sete dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x170CCED4: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x170CCED6: fild dword ptr [ebp + 0xc] */
    /* cmp MEM8(ebp + 0x13), 0x80u */ /* 0x170CCED9: cmp byte ptr [ebp + 0x13], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (int32_t)(int8_t)LO8(edx); /* 0x170CCEDD: movsx ecx, dl */
    _st[0] *= _st[1]; /* 0x170CCEE0: fmul st(1) */
    MEM32(ebp + 0xC) = ecx; /* 0x170CCEE2: mov dword ptr [ebp + 0xc], ecx */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCEE5: sete cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x13)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0x13)); /* 0x170CCEE8: add cl, byte ptr [ebp + 0x13] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCEEB: fstp dword ptr [esi] */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x170CCEED: fild dword ptr [ebp + 0xc] */
    /* cmp MEM8(ebp + 0xB), 0x80u */ /* 0x170CCEF0: cmp byte ptr [ebp + 0xb], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x170CCEF4: movsx ecx, cl */
    _st[0] *= _st[1]; /* 0x170CCEF7: fmul st(1) */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCEF9: mov dword ptr [ebp + 0x10], ecx */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCEFC: sete cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xB)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0xB)); /* 0x170CCEFF: add cl, byte ptr [ebp + 0xb] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CCF02: fstp dword ptr [esi + 4] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCF05: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CCF08: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x170CCF0B: movsx ecx, cl */
    _st[0] *= _st[1]; /* 0x170CCF0E: fmul st(1) */
    MEM32(ebp + 0x10) = ecx; /* 0x170CCF10: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCF13: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x170CCF16: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CCF19: fstp dword ptr [esi - 8] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCF1C: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCF1F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCF21: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCEA7; /* 0x170CCF24: jb 0x170ccea7 */
L_170CCF26:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCF26: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CCF28: pop ebx */
L_170CCF29:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CCF29: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCF41; /* 0x170CCF2D: je 0x170ccf41 */
L_170CCF2F:
    eax = MEM32(edi + 0x68); /* 0x170CCF2F: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCF32: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCF32: shl eax, 4 */
    ecx = esi; /* 0x170CCF35: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CCF37: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CCF39: push ecx */
    ecx = edi; /* 0x170CCF3A: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCF3C: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCF41:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CCF41: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCF57; /* 0x170CCF45: je 0x170ccf57 */
L_170CCF47:
    eax = MEM32(edi + 0x68); /* 0x170CCF47: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCF4A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCF4A: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CCF4D: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCF4F: push esi */
    ecx = edi; /* 0x170CCF50: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CCF52: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CCF57:
    edi = POP32_VAL(esp); /* 0x170CCF57: pop edi */
    esi = POP32_VAL(esp); /* 0x170CCF58: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CCF59: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CCF5A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CCF62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CCF62u);

L_170CCF62:
    edi = edi; /* 0x170CCF62: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CCF64: push ebp */
    ebp = esp; /* 0x170CCF65: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CCF67: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CCF6A: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CCF6E: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CCF71: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CCF75: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CCF77: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CCF7A: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CCF7D: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CCF80: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CCF82: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CCF83: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = edx; /* 0x170CCF86: mov dword ptr [ebp + 8], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CCFE8; /* 0x170CCF89: jae 0x170ccfe8 */
L_170CCF8B:
    fp_push(*(float*)&MEM32(0x17006018)); /* 0x170CCF8B: fld dword ptr [0x17006018] */
    PUSH32(esp, ebx); /* 0x170CCF91: push ebx */
    PUSH32(esp, edi); /* 0x170CCF92: push edi */
L_170CCF93:
    SET_LO16(edx, MEM16(eax + 0x2)); /* 0x170CCF93: mov dx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170CCF97: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(eax)); /* 0x170CCF99: mov di, word ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CCF9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), 0x8000u */ /* 0x170CCF9E: cmp di, 0x8000 */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x8000u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCFA3: sete bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x170CCFA6: add ebx, edi */
    _flag_k = FK_ADD;
    edi = (int32_t)(int16_t)LO16(ebx); /* 0x170CCFA8: movsx edi, bx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CCFAB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), 0x8000u */ /* 0x170CCFAD: cmp dx, 0x8000 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x8000u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CCFB2: sete bl */
    MEM32(ebp + 0x10) = edi; /* 0x170CCFB5: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CCFB8: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCFBB: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCFBE: fmul st(1) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x170CCFC0: add ebx, edx */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CCFC2: fstp dword ptr [esi] */
    edx = (int32_t)(int16_t)LO16(ebx); /* 0x170CCFC4: movsx edx, bx */
    MEM32(ebp + 0x10) = edx; /* 0x170CCFC7: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CCFCA: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170CCFCD: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CCFD0: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CCFD3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CCFD5: fstp dword ptr [esi - 0xc] */
    fp_push(1.0); /* 0x170CCFD8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CCFDA: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CCFDD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CCFDF: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CCF93; /* 0x170CCFE2: jb 0x170ccf93 */
L_170CCFE4:
    edi = POP32_VAL(esp); /* 0x170CCFE4: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CCFE5: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CCFE7: pop ebx */
L_170CCFE8:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CCFE8: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CCFFE; /* 0x170CCFEC: je 0x170ccffe */
L_170CCFEE:
    eax = MEM32(ecx + 0x68); /* 0x170CCFEE: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CCFF1: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CCFF1: shl eax, 4 */
    edx = esi; /* 0x170CCFF4: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CCFF6: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CCFF8: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CCFF9: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CCFFE:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CCFFE: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD012; /* 0x170CD002: je 0x170cd012 */
L_170CD004:
    eax = MEM32(ecx + 0x68); /* 0x170CD004: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD007: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD007: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD00A: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD00C: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD00D: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD012:
    esi = POP32_VAL(esp); /* 0x170CD012: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD013: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD014: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD01C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD01Cu);

L_170CD01C:
    edi = edi; /* 0x170CD01C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD01E: push ebp */
    ebp = esp; /* 0x170CD01F: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD021: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD024: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD028: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD02B: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD02F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD031: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD034: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CD037: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CD03A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD03C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD03D: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0xC) = edx; /* 0x170CD040: mov dword ptr [ebp + 0xc], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD0F9; /* 0x170CD043: jae 0x170cd0f9 */
L_170CD049:
    fp_push(*(float*)&MEM32(0x17006010)); /* 0x170CD049: fld dword ptr [0x17006010] */
    PUSH32(esp, ebx); /* 0x170CD04F: push ebx */
    PUSH32(esp, edi); /* 0x170CD050: push edi */
L_170CD051:
    edx = MEM32(eax); /* 0x170CD051: mov edx, dword ptr [eax] */
    SET_LO16(edi, MEM16(eax)); /* 0x170CD053: mov di, word ptr [eax] */
    ebx = edx; /* 0x170CD056: mov ebx, edx */
    if (20u) _cf = (((edx) >> 19) & 1u); /* 0x170CD058: shr edx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((edx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 20u; /* 0x170CD058: shr edx, 0x14 */
    if (6u) _cf = (((LO16(edx)) >> 10) & 1u); /* 0x170CD05B: shl dx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << 6u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << 6u); /* 0x170CD05B: shl dx, 6 */
    if (6u) _cf = (((LO16(edx)) >> 5) & 1u); /* 0x170CD05F: sar dx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edx)) >> 6u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edx)) >> 6u));
    if (10u) _cf = (((ebx) >> 9) & 1u); /* 0x170CD063: shr ebx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ebx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 10u; /* 0x170CD063: shr ebx, 0xa */
    if (6u) _cf = (((LO16(edi)) >> 10) & 1u); /* 0x170CD066: shl di, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) << 6u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) << 6u); /* 0x170CD066: shl di, 6 */
    if (6u) _cf = (((LO16(ebx)) >> 10) & 1u); /* 0x170CD06A: shl bx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ebx) << 6u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ebx, LO16(ebx) << 6u); /* 0x170CD06A: shl bx, 6 */
    if (6u) _cf = (((LO16(edi)) >> 5) & 1u); /* 0x170CD06E: sar di, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 6u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 6u));
    if (6u) _cf = (((LO16(ebx)) >> 5) & 1u); /* 0x170CD072: sar bx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(ebx)) >> 6u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ebx, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(ebx)) >> 6u));
    MEM32(ebp + 0x10) = edx; /* 0x170CD076: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CD079: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), 0xFE00u */ /* 0x170CD07B: cmp di, 0xfe00 */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0xFE00u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD080: sete dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170CD083: add edx, edi */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)LO16(edx); /* 0x170CD085: movsx edx, dx */
    MEM32(ebp + 0x8) = edx; /* 0x170CD088: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CD08B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ebx), 0xFE00u */ /* 0x170CD08D: cmp bx, 0xfe00 */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0xFE00u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x170CD092: fild dword ptr [ebp + 8] */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD095: sete dl */
    _st[0] *= _st[1]; /* 0x170CD098: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CD09A: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x170CD09C: add edx, ebx */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)LO16(edx); /* 0x170CD09E: movsx edx, dx */
    MEM32(ebp + 0x8) = edx; /* 0x170CD0A1: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CD0A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + 0x10), 0xFE00u */ /* 0x170CD0A6: cmp word ptr [ebp + 0x10], 0xfe00 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(0xFE00u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x170CD0AC: fild dword ptr [ebp + 8] */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD0AF: sete dl */
    _st[0] *= _st[1]; /* 0x170CD0B2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CD0B4: fstp dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x170CD0B7: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)LO16(edx); /* 0x170CD0BA: movsx edx, dx */
    MEM32(ebp + 0x10) = edx; /* 0x170CD0BD: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD0C0: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD0C3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD0C5: fstp dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x170CD0C8: mov edx, dword ptr [eax] */
    if (30u) _cf = (((edx) >> 29) & 1u); /* 0x170CD0CA: shr edx, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((edx >> 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 30u; /* 0x170CD0CA: shr edx, 0x1e */
    /* test edx, edx */ /* 0x170CD0CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x170CD0CF: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD0D2: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CD0DD; /* 0x170CD0D5: jge 0x170cd0dd */
L_170CD0D7:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CD0D7: fadd dword ptr [0x1700142c] */
L_170CD0DD:
    _st[0] *= (double)*(float*)ADDR(0x1700600C); /* 0x170CD0DD: fmul dword ptr [0x1700600c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CD0E3: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD0E6: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x170CD0E9: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CD0EC: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD051; /* 0x170CD0EF: jb 0x170cd051 */
L_170CD0F5:
    edi = POP32_VAL(esp); /* 0x170CD0F5: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD0F6: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CD0F8: pop ebx */
L_170CD0F9:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD0F9: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD10F; /* 0x170CD0FD: je 0x170cd10f */
L_170CD0FF:
    eax = MEM32(ecx + 0x68); /* 0x170CD0FF: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD102: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD102: shl eax, 4 */
    edx = esi; /* 0x170CD105: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD107: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD109: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD10A: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD10F:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD10F: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD123; /* 0x170CD113: je 0x170cd123 */
L_170CD115:
    eax = MEM32(ecx + 0x68); /* 0x170CD115: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD118: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD118: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD11B: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD11D: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD11E: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD123:
    esi = POP32_VAL(esp); /* 0x170CD123: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD124: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD125: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD12D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD12Du);

L_170CD12D:
    edi = edi; /* 0x170CD12D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD12F: push ebp */
    ebp = esp; /* 0x170CD130: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170CD132: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x60); /* 0x170CD135: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD138: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD13C: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD13F: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD143: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD145: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD148: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 8; /* 0x170CD14B: lea edx, [eax + edx*8] */
    /* cmp eax, edx */ /* 0x170CD14E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD150: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD151: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x170CD154: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x170CD157: mov dword ptr [ebp - 4], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD208; /* 0x170CD15A: jae 0x170cd208 */
L_170CD160:
    fp_push(*(float*)&MEM32(0x17006018)); /* 0x170CD160: fld dword ptr [0x17006018] */
    PUSH32(esp, ebx); /* 0x170CD166: push ebx */
    PUSH32(esp, edi); /* 0x170CD167: push edi */
    edi = 0xFFFF8000u; /* 0x170CD168: mov edi, 0xffff8000 */
L_170CD16D:
    edx = MEM32(eax + 0x4); /* 0x170CD16D: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x170CD170: mov ecx, dword ptr [eax] */
    ebx = edx; /* 0x170CD172: mov ebx, edx */
    if (1) _cf = (((ecx) >> 15) & 1u); /* 0x170CD174: shrd ecx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (16u)) | ((uint32_t)(ebx) << (32 - (16u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (16u)) | ((uint32_t)(ebx) << (32 - (16u)))) : (ecx));
    MEM32(ebp + 0x10) = ecx; /* 0x170CD178: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CD17B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x170CD17D: mov cx, word ptr [eax] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x170CD180: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x170CD180: shr ebx, 0x10 */
    SET_LO16(ebx, LO16(edx)); /* 0x170CD183: mov bx, dx */
    MEM32(ebp + (-0xC)) = edx; /* 0x170CD186: mov dword ptr [ebp - 0xc], edx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x170CD189: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x170CD189: shr edx, 0x10 */
    MEM32(ebp + 0x8) = edx; /* 0x170CD18C: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CD18F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(edi) */ /* 0x170CD191: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD194: sete dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170CD197: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)LO16(edx); /* 0x170CD199: movsx ecx, dx */
    MEM32(ebp + 0xC) = ecx; /* 0x170CD19C: mov dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CD19F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + 0x10), LO16(edi) */ /* 0x170CD1A1: cmp word ptr [ebp + 0x10], di */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x170CD1A5: fild dword ptr [ebp + 0xc] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD1A8: sete cl */
    _st[0] *= _st[1]; /* 0x170CD1AB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CD1AD: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x170CD1AF: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x170CD1B2: movsx ecx, cx */
    MEM32(ebp + 0x10) = ecx; /* 0x170CD1B5: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CD1B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ebx), LO16(edi) */ /* 0x170CD1BA: cmp bx, di */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD1BD: fild dword ptr [ebp + 0x10] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD1C0: sete cl */
    _st[0] *= _st[1]; /* 0x170CD1C3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CD1C5: fstp dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170CD1C8: add ecx, ebx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x170CD1CA: movsx ecx, cx */
    MEM32(ebp + 0x10) = ecx; /* 0x170CD1CD: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CD1D0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + 0x8), LO16(edi) */ /* 0x170CD1D2: cmp word ptr [ebp + 8], di */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD1D6: fild dword ptr [ebp + 0x10] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD1D9: sete cl */
    _st[0] *= _st[1]; /* 0x170CD1DC: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170CD1DE: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD1E1: add esi, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CD1E4: fstp dword ptr [esi - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x170CD1E7: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x170CD1EA: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x170CD1ED: movsx ecx, cx */
    MEM32(ebp + 0x10) = ecx; /* 0x170CD1F0: mov dword ptr [ebp + 0x10], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD1F3: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD1F6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CD1F8: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD16D; /* 0x170CD1FB: jb 0x170cd16d */
L_170CD201:
    ecx = MEM32(ebp + (-0x8)); /* 0x170CD201: mov ecx, dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD204: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CD206: pop edi */
    ebx = POP32_VAL(esp); /* 0x170CD207: pop ebx */
L_170CD208:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD208: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD21E; /* 0x170CD20C: je 0x170cd21e */
L_170CD20E:
    eax = MEM32(ecx + 0x68); /* 0x170CD20E: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD211: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD211: shl eax, 4 */
    edx = esi; /* 0x170CD214: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD216: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD218: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD219: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD21E:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD21E: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD232; /* 0x170CD222: je 0x170cd232 */
L_170CD224:
    eax = MEM32(ecx + 0x68); /* 0x170CD224: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD227: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD227: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD22A: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD22C: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD22D: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD232:
    esi = POP32_VAL(esp); /* 0x170CD232: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CD233: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD234: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD23C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD23Cu);

L_170CD23C:
    edi = edi; /* 0x170CD23C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD23E: push ebp */
    ebp = esp; /* 0x170CD23F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CD241: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD242: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CD245: push edi */
    edi = ecx; /* 0x170CD246: mov edi, ecx */
    edx = MEM32(edi + 0x60); /* 0x170CD248: mov edx, dword ptr [edi + 0x60] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD24B: imul edx, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x64); /* 0x170CD24F: mov eax, dword ptr [edi + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD252: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CD256: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0x20); /* 0x170CD258: add edx, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x68); /* 0x170CD25B: mov eax, dword ptr [edi + 0x68] */
    eax = edx + eax * 2; /* 0x170CD25E: lea eax, [edx + eax*2] */
    /* cmp edx, eax */ /* 0x170CD261: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170CD263: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD2DC; /* 0x170CD266: jae 0x170cd2dc */
L_170CD268:
    fp_push(*(float*)&MEM32(0x170074C8)); /* 0x170CD268: fld dword ptr [0x170074c8] */
    PUSH32(esp, ebx); /* 0x170CD26E: push ebx */
L_170CD26F:
    SET_LO8(eax, MEM8(edx)); /* 0x170CD26F: mov al, byte ptr [edx] */
    SET_LO8(ecx, MEM8(edx + 0x1)); /* 0x170CD271: mov cl, byte ptr [edx + 1] */
    /* cmp LO8(eax), 0x80u */ /* 0x170CD274: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD276: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(eax)); /* 0x170CD279: add bl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x170CD27B: movsx eax, bl */
    MEM32(ebp + 0x10) = eax; /* 0x170CD27E: mov dword ptr [ebp + 0x10], eax */
    /* cmp LO8(ecx), 0x80u */ /* 0x170CD281: cmp cl, 0x80 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD284: sete al */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD287: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x170CD28A: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (int32_t)(int8_t)LO8(eax); /* 0x170CD28C: movsx eax, al */
    _st[0] *= _st[1]; /* 0x170CD28F: fmul st(1) */
    MEM32(ebp + 0x10) = eax; /* 0x170CD291: mov dword ptr [ebp + 0x10], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x170CD294: fst dword ptr [esi] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD296: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[2]; /* 0x170CD299: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CD29B: fst dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x170CD29E: fld st(1) */
    _st[0] *= _st[2]; /* 0x170CD2A0: fmul st(2) */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x170CD2A2: fsubr dword ptr [0x17001424] */
    fp_push(_st[1]); /* 0x170CD2A8: fld st(1) */
    _st[0] *= _st[2]; /* 0x170CD2AA: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170CD2AC: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170CD2AE: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD2B0: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170CD2B2: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170CD2B8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170CD2BA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170CD2C5; /* 0x170CD2BD: jp 0x170cd2c5 */
L_170CD2BF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD2BF: fstp st(0) */
    fp_push(0.0); /* 0x170CD2C1: fldz  */
    goto L_170CD2C7; /* 0x170CD2C3: jmp 0x170cd2c7 */
L_170CD2C5:
    _st[0] = sqrt(_st[0]); /* 0x170CD2C5: fsqrt  */
L_170CD2C7:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD2C7: fstp dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CD2CA: inc edx */
    _flag_k = FK_INC;
    fp_push(1.0); /* 0x170CD2CB: fld1  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CD2CD: inc edx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170CD2CE: fstp dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD2D1: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x170CD2D4: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD26F; /* 0x170CD2D7: jb 0x170cd26f */
L_170CD2D9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD2D9: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x170CD2DB: pop ebx */
L_170CD2DC:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CD2DC: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD2F4; /* 0x170CD2E0: je 0x170cd2f4 */
L_170CD2E2:
    eax = MEM32(edi + 0x68); /* 0x170CD2E2: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD2E5: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD2E5: shl eax, 4 */
    ecx = esi; /* 0x170CD2E8: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CD2EA: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CD2EC: push ecx */
    ecx = edi; /* 0x170CD2ED: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD2EF: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD2F4:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CD2F4: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD30A; /* 0x170CD2F8: je 0x170cd30a */
L_170CD2FA:
    eax = MEM32(edi + 0x68); /* 0x170CD2FA: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD2FD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD2FD: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD300: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD302: push esi */
    ecx = edi; /* 0x170CD303: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD305: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD30A:
    edi = POP32_VAL(esp); /* 0x170CD30A: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD30B: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD30C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD30D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD315(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD315u);

L_170CD315:
    edi = edi; /* 0x170CD315: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD317: push ebp */
    ebp = esp; /* 0x170CD318: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD31A: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD31D: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD321: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD324: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD328: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD32A: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD32D: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 2; /* 0x170CD330: lea edx, [eax + edx*2] */
    /* cmp eax, edx */ /* 0x170CD333: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD335: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD336: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD362; /* 0x170CD339: jae 0x170cd362 */
L_170CD33B:
    PUSH32(esp, edi); /* 0x170CD33B: push edi */
L_170CD33C:
    edi = (uint32_t)MEM16(eax); /* 0x170CD33C: movzx edi, word ptr [eax] */
    MEM32(ebp + 0x10) = edi; /* 0x170CD33F: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CD342: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CD343: inc eax */
    _flag_k = FK_INC;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD344: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17006014); /* 0x170CD347: fmul dword ptr [0x17006014] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD34D: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CD350: fst dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CD353: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD355: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD358: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x170CD35A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CD35C: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD33C; /* 0x170CD35F: jb 0x170cd33c */
L_170CD361:
    edi = POP32_VAL(esp); /* 0x170CD361: pop edi */
L_170CD362:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD362: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD378; /* 0x170CD366: je 0x170cd378 */
L_170CD368:
    eax = MEM32(ecx + 0x68); /* 0x170CD368: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD36B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD36B: shl eax, 4 */
    edx = esi; /* 0x170CD36E: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD370: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD372: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD373: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD378:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD378: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD38C; /* 0x170CD37C: je 0x170cd38c */
L_170CD37E:
    eax = MEM32(ecx + 0x68); /* 0x170CD37E: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD381: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD381: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD384: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD386: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD387: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD38C:
    esi = POP32_VAL(esp); /* 0x170CD38C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD38D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD38E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD396(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD396u);

L_170CD396:
    edi = edi; /* 0x170CD396: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD398: push ebp */
    ebp = esp; /* 0x170CD399: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD39B: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD39E: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD3A2: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD3A5: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD3A9: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD3AB: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD3AE: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CD3B1: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CD3B4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD3B6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD3B7: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD3DB; /* 0x170CD3BA: jae 0x170cd3db */
L_170CD3BC:
    PUSH32(esp, edi); /* 0x170CD3BC: push edi */
L_170CD3BD:
    edi = MEM32(eax); /* 0x170CD3BD: mov edi, dword ptr [eax] */
    fp_push(1.0); /* 0x170CD3BF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170CD3C1: fstp dword ptr [esi + 0xc] */
    MEM32(esi) = edi; /* 0x170CD3C4: mov dword ptr [esi], edi */
    fp_push(1.0); /* 0x170CD3C6: fld1  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CD3C8: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD3CB: fstp dword ptr [esi + 8] */
    fp_push(1.0); /* 0x170CD3CE: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD3D0: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD3D3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CD3D5: fstp dword ptr [esi - 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD3BD; /* 0x170CD3D8: jb 0x170cd3bd */
L_170CD3DA:
    edi = POP32_VAL(esp); /* 0x170CD3DA: pop edi */
L_170CD3DB:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD3DB: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD3F1; /* 0x170CD3DF: je 0x170cd3f1 */
L_170CD3E1:
    eax = MEM32(ecx + 0x68); /* 0x170CD3E1: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD3E4: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD3E4: shl eax, 4 */
    edx = esi; /* 0x170CD3E7: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD3E9: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD3EB: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD3EC: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD3F1:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD3F1: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD405; /* 0x170CD3F5: je 0x170cd405 */
L_170CD3F7:
    eax = MEM32(ecx + 0x68); /* 0x170CD3F7: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD3FA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD3FA: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD3FD: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD3FF: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD400: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD405:
    esi = POP32_VAL(esp); /* 0x170CD405: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD406: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD407: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD40F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD40Fu);

L_170CD40F:
    edi = edi; /* 0x170CD40F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD411: push ebp */
    ebp = esp; /* 0x170CD412: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CD414: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170CD415: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170CD418: push esi */
    PUSH32(esp, edi); /* 0x170CD419: push edi */
    edi = ecx; /* 0x170CD41A: mov edi, ecx */
    esi = MEM32(edi + 0x60); /* 0x170CD41C: mov esi, dword ptr [edi + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD41F: imul esi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x64); /* 0x170CD423: mov eax, dword ptr [edi + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD426: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CD42A: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x20); /* 0x170CD42C: add esi, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x68); /* 0x170CD42F: mov eax, dword ptr [edi + 0x68] */
    eax = esi + eax * 2; /* 0x170CD432: lea eax, [esi + eax*2] */
    /* cmp esi, eax */ /* 0x170CD435: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170CD437: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD45E; /* 0x170CD43A: jae 0x170cd45e */
L_170CD43C:
    PUSH32(esp, 1); /* 0x170CD43C: push 1 */
    PUSH32(esp, esi); /* 0x170CD43E: push esi */
    PUSH32(esp, ebx); /* 0x170CD43F: push ebx */
    RECOMP_CALL(sub_17040756); /* 0x170CD440: call 0x17040756 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x170CD445: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x170CD447: fstp dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170CD44A: inc esi */
    _flag_k = FK_INC;
    fp_push(1.0); /* 0x170CD44B: fld1  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170CD44D: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x170CD44E: fstp dword ptr [ebx + 8] */
    fp_push(1.0); /* 0x170CD451: fld1  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170CD453: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x170CD456: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + (-0xC)) = _v; } /* 0x170CD459: fstp dword ptr [ebx - 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD43C; /* 0x170CD45C: jb 0x170cd43c */
L_170CD45E:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CD45E: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD476; /* 0x170CD462: je 0x170cd476 */
L_170CD464:
    eax = MEM32(edi + 0x68); /* 0x170CD464: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD467: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD467: shl eax, 4 */
    ecx = ebx; /* 0x170CD46A: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CD46C: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CD46E: push ecx */
    ecx = edi; /* 0x170CD46F: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD471: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD476:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CD476: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD48C; /* 0x170CD47A: je 0x170cd48c */
L_170CD47C:
    eax = MEM32(edi + 0x68); /* 0x170CD47C: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD47F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD47F: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x170CD482: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CD484: push ebx */
    ecx = edi; /* 0x170CD485: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD487: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD48C:
    edi = POP32_VAL(esp); /* 0x170CD48C: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD48D: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CD48E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CD48F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD490: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD498u);

L_170CD498:
    edi = edi; /* 0x170CD498: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD49A: push ebp */
    ebp = esp; /* 0x170CD49B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CD49D: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170CD49E: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170CD4A1: push esi */
    PUSH32(esp, edi); /* 0x170CD4A2: push edi */
    edi = ecx; /* 0x170CD4A3: mov edi, ecx */
    esi = MEM32(edi + 0x60); /* 0x170CD4A5: mov esi, dword ptr [edi + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD4A8: imul esi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x64); /* 0x170CD4AC: mov eax, dword ptr [edi + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD4AF: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CD4B3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x20); /* 0x170CD4B5: add esi, dword ptr [edi + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x68); /* 0x170CD4B8: mov eax, dword ptr [edi + 0x68] */
    eax = esi + eax * 4; /* 0x170CD4BB: lea eax, [esi + eax*4] */
    /* cmp esi, eax */ /* 0x170CD4BE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170CD4C0: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD4E3; /* 0x170CD4C3: jae 0x170cd4e3 */
L_170CD4C5:
    PUSH32(esp, 2); /* 0x170CD4C5: push 2 */
    PUSH32(esp, esi); /* 0x170CD4C7: push esi */
    PUSH32(esp, ebx); /* 0x170CD4C8: push ebx */
    RECOMP_CALL(sub_17040756); /* 0x170CD4C9: call 0x17040756 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x170CD4CE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x170CD4D0: fstp dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170CD4D3: add esi, 4 */
    _flag_k = FK_ADD;
    fp_push(1.0); /* 0x170CD4D6: fld1  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170CD4D8: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x170CD4DB: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + (-0x8)) = _v; } /* 0x170CD4DE: fstp dword ptr [ebx - 8] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD4C5; /* 0x170CD4E1: jb 0x170cd4c5 */
L_170CD4E3:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x170CD4E3: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD4FB; /* 0x170CD4E7: je 0x170cd4fb */
L_170CD4E9:
    eax = MEM32(edi + 0x68); /* 0x170CD4E9: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD4EC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD4EC: shl eax, 4 */
    ecx = ebx; /* 0x170CD4EF: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170CD4F1: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x170CD4F3: push ecx */
    ecx = edi; /* 0x170CD4F4: mov ecx, edi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD4F6: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD4FB:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x170CD4FB: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD511; /* 0x170CD4FF: je 0x170cd511 */
L_170CD501:
    eax = MEM32(edi + 0x68); /* 0x170CD501: mov eax, dword ptr [edi + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD504: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD504: shl eax, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x170CD507: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CD509: push ebx */
    ecx = edi; /* 0x170CD50A: mov ecx, edi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD50C: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD511:
    edi = POP32_VAL(esp); /* 0x170CD511: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD512: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CD513: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CD514: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD515: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD51D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD51Du);

L_170CD51D:
    edi = edi; /* 0x170CD51D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD51F: push ebp */
    ebp = esp; /* 0x170CD520: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CD522: push esi */
    esi = ecx; /* 0x170CD523: mov esi, ecx */
    eax = MEM32(esi + 0x68); /* 0x170CD525: mov eax, dword ptr [esi + 0x68] */
    ecx = MEM32(esi + 0x64); /* 0x170CD528: mov ecx, dword ptr [esi + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD52B: imul ecx, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170CD52F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170CD52F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170CD532: push eax */
    eax = MEM32(esi + 0x60); /* 0x170CD533: mov eax, dword ptr [esi + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD536: imul eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CD53A: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x170CD53C: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170CD53F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD540: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_17040756); /* 0x170CD543: call 0x17040756 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x170CD548: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD558; /* 0x170CD54C: je 0x170cd558 */
L_170CD54E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD54E: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CD551: mov ecx, esi */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD553: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD558:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x170CD558: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD568; /* 0x170CD55C: je 0x170cd568 */
L_170CD55E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD55E: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x170CD561: mov ecx, esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD563: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD568:
    esi = POP32_VAL(esp); /* 0x170CD568: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD569: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD56A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD572(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD572u);

L_170CD572:
    edi = edi; /* 0x170CD572: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD574: push ebp */
    ebp = esp; /* 0x170CD575: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD577: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD57A: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD57E: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD581: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD585: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD587: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD58A: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 8; /* 0x170CD58D: lea edx, [eax + edx*8] */
    /* cmp eax, edx */ /* 0x170CD590: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD592: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD593: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD5B8; /* 0x170CD596: jae 0x170cd5b8 */
L_170CD598:
    PUSH32(esp, edi); /* 0x170CD598: push edi */
L_170CD599:
    edi = MEM32(eax); /* 0x170CD599: mov edi, dword ptr [eax] */
    fp_push(1.0); /* 0x170CD59B: fld1  */
    MEM32(esi) = edi; /* 0x170CD59D: mov dword ptr [esi], edi */
    edi = MEM32(eax + 0x4); /* 0x170CD59F: mov edi, dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170CD5A2: fstp dword ptr [esi + 0xc] */
    fp_push(1.0); /* 0x170CD5A5: fld1  */
    MEM32(esi + 0x4) = edi; /* 0x170CD5A7: mov dword ptr [esi + 4], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD5AA: fstp dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170CD5AD: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD5B0: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD5B3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD599; /* 0x170CD5B5: jb 0x170cd599 */
L_170CD5B7:
    edi = POP32_VAL(esp); /* 0x170CD5B7: pop edi */
L_170CD5B8:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD5B8: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD5CE; /* 0x170CD5BC: je 0x170cd5ce */
L_170CD5BE:
    eax = MEM32(ecx + 0x68); /* 0x170CD5BE: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD5C1: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD5C1: shl eax, 4 */
    edx = esi; /* 0x170CD5C4: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD5C6: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD5C8: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD5C9: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD5CE:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD5CE: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD5E2; /* 0x170CD5D2: je 0x170cd5e2 */
L_170CD5D4:
    eax = MEM32(ecx + 0x68); /* 0x170CD5D4: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD5D7: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD5D7: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD5DA: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD5DC: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD5DD: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD5E2:
    esi = POP32_VAL(esp); /* 0x170CD5E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD5E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD5E4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD5EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD5ECu);

L_170CD5EC:
    edi = edi; /* 0x170CD5EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD5EE: push ebp */
    ebp = esp; /* 0x170CD5EF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CD5F1: push ebx */
    ebx = ecx; /* 0x170CD5F2: mov ebx, ecx */
    eax = MEM32(ebx + 0x64); /* 0x170CD5F4: mov eax, dword ptr [ebx + 0x64] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD5F7: imul eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx + 0x68); /* 0x170CD5FB: mov ecx, dword ptr [ebx + 0x68] */
    PUSH32(esp, esi); /* 0x170CD5FE: push esi */
    esi = MEM32(ebx + 0x60); /* 0x170CD5FF: mov esi, dword ptr [ebx + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD602: imul esi, dword ptr [ebp + 8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CD606: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CD606: shl ecx, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170CD609: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x20); /* 0x170CD60B: add esi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x170CD60E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CD610: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CD610: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x170CD613: push edi */
    edi = MEM32(ebp + 0x10); /* 0x170CD614: mov edi, dword ptr [ebp + 0x10] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CD617: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170CD619: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CD61B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CD61E: rep movsb byte ptr es:[edi], byte ptr [esi] */
    /* cmp MEM32(ebx + 0x18), 0 */ /* 0x170CD620: cmp dword ptr [ebx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD630; /* 0x170CD624: je 0x170cd630 */
L_170CD626:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD626: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CD629: mov ecx, ebx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD62B: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD630:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CD630: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD640; /* 0x170CD634: je 0x170cd640 */
L_170CD636:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD636: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CD639: mov ecx, ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CD63B: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD640:
    edi = POP32_VAL(esp); /* 0x170CD640: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD641: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CD642: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CD643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD644: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD64C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD64Cu);

L_170CD64C:
    edi = edi; /* 0x170CD64C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD64E: push ebp */
    ebp = esp; /* 0x170CD64F: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD651: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD654: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD658: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD65B: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD65F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD661: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x68); /* 0x170CD664: mov edx, dword ptr [ecx + 0x68] */
    edx = eax + edx * 4; /* 0x170CD667: lea edx, [eax + edx*4] */
    /* cmp eax, edx */ /* 0x170CD66A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD66C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD66D: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD6B7; /* 0x170CD670: jae 0x170cd6b7 */
L_170CD672:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CD672: fld dword ptr [0x17006014] */
    PUSH32(esp, edi); /* 0x170CD678: push edi */
L_170CD679:
    edi = MEM32(eax); /* 0x170CD679: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x170CD67B: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170CD681: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x170CD683: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD686: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CD691; /* 0x170CD689: jge 0x170cd691 */
L_170CD68B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170CD68B: fadd dword ptr [0x1700142c] */
L_170CD691:
    _st[0] *= _st[1]; /* 0x170CD691: fmul st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170CD693: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170CD696: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x170CD699: fst dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CD69C: fstp dword ptr [esi] */
    edi = (uint32_t)MEM16(eax + (-0x2)); /* 0x170CD69E: movzx edi, word ptr [eax - 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CD6A2: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD6A5: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD6A8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD6AA: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD6AD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CD6AF: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD679; /* 0x170CD6B2: jb 0x170cd679 */
L_170CD6B4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD6B4: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CD6B6: pop edi */
L_170CD6B7:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD6B7: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD6CD; /* 0x170CD6BB: je 0x170cd6cd */
L_170CD6BD:
    eax = MEM32(ecx + 0x68); /* 0x170CD6BD: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD6C0: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD6C0: shl eax, 4 */
    edx = esi; /* 0x170CD6C3: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD6C5: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD6C7: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD6C8: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD6CD:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD6CD: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD6E1; /* 0x170CD6D1: je 0x170cd6e1 */
L_170CD6D3:
    eax = MEM32(ecx + 0x68); /* 0x170CD6D3: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD6D6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD6D6: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD6D9: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD6DB: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD6DC: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD6E1:
    esi = POP32_VAL(esp); /* 0x170CD6E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD6E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD6E3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD6EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD6EBu);

L_170CD6EB:
    edi = edi; /* 0x170CD6EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD6ED: push ebp */
    ebp = esp; /* 0x170CD6EE: mov ebp, esp */
    eax = MEM32(ecx + 0x60); /* 0x170CD6F0: mov eax, dword ptr [ecx + 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x170CD6F3: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x64); /* 0x170CD6F7: mov edx, dword ptr [ecx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CD6FA: imul edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CD6FE: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x170CD700: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx + 0x74); /* 0x170CD703: mov edx, dword ptr [ecx + 0x74] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CD706: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD708: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD70A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170CD70B: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CD754; /* 0x170CD70E: jae 0x170cd754 */
L_170CD710:
    fp_push(*(float*)&MEM32(0x17006014)); /* 0x170CD710: fld dword ptr [0x17006014] */
    PUSH32(esp, edi); /* 0x170CD716: push edi */
L_170CD717:
    edi = (uint32_t)MEM16(eax + 0x4); /* 0x170CD717: movzx edi, word ptr [eax + 4] */
    MEM32(ebp + 0x10) = edi; /* 0x170CD71B: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD71E: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD721: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170CD723: fstp dword ptr [esi] */
    edi = (uint32_t)MEM16(eax + 0x2); /* 0x170CD725: movzx edi, word ptr [eax + 2] */
    MEM32(ebp + 0x10) = edi; /* 0x170CD729: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CD72C: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD72F: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD732: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x170CD734: fstp dword ptr [esi - 0xc] */
    edi = (uint32_t)MEM16(eax); /* 0x170CD737: movzx edi, word ptr [eax] */
    MEM32(ebp + 0x10) = edi; /* 0x170CD73A: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170CD73D: add eax, 6 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x170CD740: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CD742: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170CD745: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x170CD747: fstp dword ptr [esi - 8] */
    fp_push(1.0); /* 0x170CD74A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x170CD74C: fstp dword ptr [esi - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CD717; /* 0x170CD74F: jb 0x170cd717 */
L_170CD751:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170CD751: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x170CD753: pop edi */
L_170CD754:
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x170CD754: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD76A; /* 0x170CD758: je 0x170cd76a */
L_170CD75A:
    eax = MEM32(ecx + 0x68); /* 0x170CD75A: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD75D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD75D: shl eax, 4 */
    edx = esi; /* 0x170CD760: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CD762: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CD764: push edx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD765: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD76A:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x170CD76A: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD77E; /* 0x170CD76E: je 0x170cd77e */
L_170CD770:
    eax = MEM32(ecx + 0x68); /* 0x170CD770: mov eax, dword ptr [ecx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD773: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD773: shl eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x170CD776: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD778: push esi */
    RECOMP_CALL(sub_170C519B); /* 0x170CD779: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD77E:
    esi = POP32_VAL(esp); /* 0x170CD77E: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CD77F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD780: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD788u);

L_170CD788:
    edi = edi; /* 0x170CD788: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD78A: push ebp */
    ebp = esp; /* 0x170CD78B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170CD78D: push ecx */
    PUSH32(esp, ebx); /* 0x170CD78E: push ebx */
    PUSH32(esp, esi); /* 0x170CD78F: push esi */
    PUSH32(esp, edi); /* 0x170CD790: push edi */
    PUSH32(esp, 1); /* 0x170CD791: push 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CD793: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170CD795: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CD796: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CD799: mov esi, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CD79B: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x3C); /* 0x170CD7A0: mov ecx, dword ptr [esi + 0x3c] */
    eax = MEM32(esi + 0x44); /* 0x170CD7A3: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x170CD7A6: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CD7A9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x170CD7AA: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x170CD7AD: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x170CD7AF: sub edi, ecx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x8C) = eax; /* 0x170CD7B1: mov dword ptr [esi + 0x8c], eax */
    eax = edi; /* 0x170CD7B7: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CD7B9: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CD7B9: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170CD7BC: push eax */
    MEM32(esi) = 0x17007740u; /* 0x170CD7BD: mov dword ptr [esi], 0x17007740 */
    MEM32(esi + 0x84) = ecx; /* 0x170CD7C3: mov dword ptr [esi + 0x84], ecx */
    MEM32(esi + 0x88) = ebx; /* 0x170CD7C9: mov dword ptr [esi + 0x88], ebx */
    MEM32(esi + 0x94) = ebx; /* 0x170CD7CF: mov dword ptr [esi + 0x94], ebx */
    MEM32(esi + 0x90) = ebx; /* 0x170CD7D5: mov dword ptr [esi + 0x90], ebx */
    MEM32(esi + 0x98) = ebx; /* 0x170CD7DB: mov dword ptr [esi + 0x98], ebx */
    MEM32(esi + 0x9C) = edi; /* 0x170CD7E1: mov dword ptr [esi + 0x9c], edi */
    MEM32(esi + 0xA0) = ebx; /* 0x170CD7E7: mov dword ptr [esi + 0xa0], ebx */
    MEM32(esi + 0xA4) = 1; /* 0x170CD7ED: mov dword ptr [esi + 0xa4], 1 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CD7F7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170CD7FC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170CD7FE: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170CD7FF: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD817; /* 0x170CD802: je 0x170cd817 */
L_170CD804:
    PUSH32(esp, 0x1706E47Eu); /* 0x170CD804: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170CD809: push edi */
    PUSH32(esp, 0x10u); /* 0x170CD80A: push 0x10 */
    PUSH32(esp, eax); /* 0x170CD80C: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x170CD80D: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170CD812: mov eax, dword ptr [ebp - 4] */
    goto L_170CD819; /* 0x170CD815: jmp 0x170cd819 */
L_170CD817:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CD817: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CD819:
    /* cmp eax, ebx */ /* 0x170CD819: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x80) = eax; /* 0x170CD81B: mov dword ptr [esi + 0x80], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CD829; /* 0x170CD821: jne 0x170cd829 */
L_170CD823:
    MEM32(esi + 0xA4) = ebx; /* 0x170CD823: mov dword ptr [esi + 0xa4], ebx */
L_170CD829:
    eax = MEM32(ebp + 0x8); /* 0x170CD829: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x170CD82C: mov eax, dword ptr [eax + 4] */
    /* cmp eax, 0x32595559u */ /* 0x170CD82F: cmp eax, 0x32595559 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD85D; /* 0x170CD834: je 0x170cd85d */
L_170CD836:
    /* cmp eax, 0x42475247u */ /* 0x170CD836: cmp eax, 0x42475247 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42475247u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD84B; /* 0x170CD83B: je 0x170cd84b */
L_170CD83D:
    /* cmp eax, 0x47424752u */ /* 0x170CD83D: cmp eax, 0x47424752 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47424752u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD85D; /* 0x170CD842: je 0x170cd85d */
L_170CD844:
    /* cmp eax, 0x59565955u */ /* 0x170CD844: cmp eax, 0x59565955 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CD86D; /* 0x170CD849: jne 0x170cd86d */
L_170CD84B:
    MEM32(esi + 0xA8) = 8; /* 0x170CD84B: mov dword ptr [esi + 0xa8], 8 */
    MEM32(esi + 0xAC) = ebx; /* 0x170CD855: mov dword ptr [esi + 0xac], ebx */
    goto L_170CD86D; /* 0x170CD85B: jmp 0x170cd86d */
L_170CD85D:
    MEM32(esi + 0xA8) = ebx; /* 0x170CD85D: mov dword ptr [esi + 0xa8], ebx */
    MEM32(esi + 0xAC) = 8; /* 0x170CD863: mov dword ptr [esi + 0xac], 8 */
L_170CD86D:
    edi = POP32_VAL(esp); /* 0x170CD86D: pop edi */
    eax = esi; /* 0x170CD86E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CD870: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CD871: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CD872: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CD873: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CD87B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD87Bu);

    goto L_170CD87B;
L_170C39B4:
    edi = edi; /* 0x170C39B4: mov edi, edi */
    PUSH32(esp, esi); /* 0x170C39B6: push esi */
    esi = ecx; /* 0x170C39B7: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x170C39B9: push dword ptr [esi + 0x38] */
    MEM32(esi) = 0x17007440u; /* 0x170C39BC: mov dword ptr [esi], 0x17007440 */
    RECOMP_CALL(sub_1721B010); /* 0x170C39C2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x170C39C7: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_1721B010); /* 0x170C39CA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x170C39CF: push dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_1721B010); /* 0x170C39D2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x170C39D7: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x170C39DA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170C39DB: ret  */
L_170CD87B:
    edi = edi; /* 0x170CD87B: mov edi, edi */
    PUSH32(esp, esi); /* 0x170CD87D: push esi */
    esi = ecx; /* 0x170CD87E: mov esi, ecx */
    MEM32(esi) = 0x17007740u; /* 0x170CD880: mov dword ptr [esi], 0x17007740 */
    RECOMP_CALL(sub_170C3F06); /* 0x170CD886: call 0x170c3f06 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x80); /* 0x170CD88B: mov eax, dword ptr [esi + 0x80] */
    /* test eax, eax */ /* 0x170CD891: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CD89C; /* 0x170CD893: je 0x170cd89c */
L_170CD895:
    PUSH32(esp, eax); /* 0x170CD895: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x170CD896: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170CD89B: pop ecx */
L_170CD89C:
    ecx = esi; /* 0x170CD89C: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x170CD89E: pop esi */
    RECOMP_BACKEDGE();
    goto L_170C39B4; /* 0x170CD89F: jmp 0x170c39b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170CD8A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD8A9u);

L_170CD8A9:
    edi = edi; /* 0x170CD8A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD8AB: push ebp */
    ebp = esp; /* 0x170CD8AC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CD8AE: push ebx */
    ebx = ecx; /* 0x170CD8AF: mov ebx, ecx */
    /* cmp MEM32(ebx + 0x54), 0 */ /* 0x170CD8B1: cmp dword ptr [ebx + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CD8B5: push esi */
    PUSH32(esp, edi); /* 0x170CD8B6: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD8C5; /* 0x170CD8B7: je 0x170cd8c5 */
L_170CD8B9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD8B9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170C39E9); /* 0x170CD8BC: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170CD8C1: mov esi, eax */
    goto L_170CD8C8; /* 0x170CD8C3: jmp 0x170cd8c8 */
L_170CD8C5:
    esi = MEM32(ebp + 0x10); /* 0x170CD8C5: mov esi, dword ptr [ebp + 0x10] */
L_170CD8C8:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CD8C8: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD8D8; /* 0x170CD8CC: je 0x170cd8d8 */
L_170CD8CE:
    PUSH32(esp, esi); /* 0x170CD8CE: push esi */
    ecx = ebx; /* 0x170CD8CF: mov ecx, ebx */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CD8D1: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170CD8D6: mov esi, eax */
L_170CD8D8:
    ecx = MEM32(ebx + 0x9C); /* 0x170CD8D8: mov ecx, dword ptr [ebx + 0x9c] */
    eax = MEM32(ebp + 0x8); /* 0x170CD8DE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x40); /* 0x170CD8E1: add eax, dword ptr [ebx + 0x40] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0xC); /* 0x170CD8E4: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x4C); /* 0x170CD8E7: add edi, dword ptr [ebx + 0x4c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CD8EA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebx + 0x68) */ /* 0x170CD8EC: cmp ecx, dword ptr [ebx + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x170CD8EF: mov ecx, ebx */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CD8F1: setne dl */
    PUSH32(esp, edx); /* 0x170CD8F4: push edx */
    PUSH32(esp, edi); /* 0x170CD8F5: push edi */
    PUSH32(esp, eax); /* 0x170CD8F6: push eax */
    RECOMP_CALL(sub_170C420E); /* 0x170CD8F7: call 0x170c420e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CD8FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CD930; /* 0x170CD8FE: jl 0x170cd930 */
L_170CD900:
    edi = MEM32(ebx + 0x3C); /* 0x170CD900: mov edi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx + 0x84); /* 0x170CD903: sub edi, dword ptr [ebx + 0x84] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x68); /* 0x170CD909: mov ecx, dword ptr [ebx + 0x68] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CD90C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CD90C: shl ecx, 4 */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CD90F: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CD90F: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x80));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x80); /* 0x170CD912: add edi, dword ptr [ebx + 0x80] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x170CD918: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CD91A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CD91A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CD91D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170CD91F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CD921: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CD924: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebx + 0xA0) = 1; /* 0x170CD926: mov dword ptr [ebx + 0xa0], 1 */
L_170CD930:
    edi = POP32_VAL(esp); /* 0x170CD930: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD931: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CD932: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CD933: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD934: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD93C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD93Cu);

L_170CD93C:
    edi = edi; /* 0x170CD93C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD93E: push ebp */
    ebp = esp; /* 0x170CD93F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170CD941: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170CD944: push ebx */
    ebx = ecx; /* 0x170CD945: mov ebx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x170CD947: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x4C); /* 0x170CD94A: add ecx, dword ptr [ebx + 0x4c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x40); /* 0x170CD94D: add eax, dword ptr [ebx + 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x170CD950: push 1 */
    PUSH32(esp, ecx); /* 0x170CD952: push ecx */
    PUSH32(esp, eax); /* 0x170CD953: push eax */
    ecx = ebx; /* 0x170CD954: mov ecx, ebx */
    RECOMP_CALL(sub_170C420E); /* 0x170CD956: call 0x170c420e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CD95B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CD9AC; /* 0x170CD95D: jl 0x170cd9ac */
L_170CD95F:
    ecx = MEM32(ebx + 0x68); /* 0x170CD95F: mov ecx, dword ptr [ebx + 0x68] */
    PUSH32(esp, esi); /* 0x170CD962: push esi */
    esi = MEM32(ebx + 0x3C); /* 0x170CD963: mov esi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx + 0x84); /* 0x170CD966: sub esi, dword ptr [ebx + 0x84] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x170CD96C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x170CD96C: shl ecx, 4 */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x170CD96F: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x170CD96F: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x80));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x80); /* 0x170CD972: add esi, dword ptr [ebx + 0x80] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x170CD978: mov eax, ecx */
    PUSH32(esp, edi); /* 0x170CD97A: push edi */
    edi = MEM32(ebp + 0x10); /* 0x170CD97B: mov edi, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CD97E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CD97E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CD981: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170CD983: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CD985: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CD988: rep movsb byte ptr es:[edi], byte ptr [esi] */
    /* cmp MEM32(ebx + 0x18), 0 */ /* 0x170CD98A: cmp dword ptr [ebx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170CD98E: pop edi */
    esi = POP32_VAL(esp); /* 0x170CD98F: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD99C; /* 0x170CD990: je 0x170cd99c */
L_170CD992:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD992: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CD995: mov ecx, ebx */
    RECOMP_CALL(sub_170C4F24); /* 0x170CD997: call 0x170c4f24 */
    RECOMP_FLAGS_IN();
L_170CD99C:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CD99C: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CD9AC; /* 0x170CD9A0: je 0x170cd9ac */
L_170CD9A2:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CD9A2: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CD9A5: mov ecx, ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CD9A7: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CD9AC:
    ebx = POP32_VAL(esp); /* 0x170CD9AC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CD9AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CD9AE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CD9B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CD9B6u);

L_170CD9B6:
    edi = edi; /* 0x170CD9B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CD9B8: push ebp */
    ebp = esp; /* 0x170CD9B9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CD9BB: push ebx */
    PUSH32(esp, esi); /* 0x170CD9BC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170CD9BD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170CD9C0: push edi */
    PUSH32(esp, 1); /* 0x170CD9C1: push 1 */
    PUSH32(esp, 0); /* 0x170CD9C3: push 0 */
    PUSH32(esp, esi); /* 0x170CD9C5: push esi */
    ebx = ecx; /* 0x170CD9C6: mov ebx, ecx */
    RECOMP_CALL(sub_170C4AB0); /* 0x170CD9C8: call 0x170c4ab0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x170CD9CD: mov eax, dword ptr [ebx + 4] */
    ecx = 0x35545844u; /* 0x170CD9D0: mov ecx, 0x35545844 */
    /* cmp eax, ecx */ /* 0x170CD9D5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx) = 0x17007750u; /* 0x170CD9D7: mov dword ptr [ebx], 0x17007750 */
    if (CMP_G(_flag_a, _flag_b)) goto L_170CDAB2; /* 0x170CD9DD: jg 0x170cdab2 */
L_170CD9E3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDA8F; /* 0x170CD9E3: je 0x170cda8f */
L_170CD9E9:
    /* cmp eax, 0x31545844u */ /* 0x170CD9E9: cmp eax, 0x31545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDA76; /* 0x170CD9EE: je 0x170cda76 */
L_170CD9F4:
    /* cmp eax, 0x32545844u */ /* 0x170CD9F4: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDA53; /* 0x170CD9F9: je 0x170cda53 */
L_170CD9FB:
    /* cmp eax, 0x33545844u */ /* 0x170CD9FB: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDA30; /* 0x170CDA00: je 0x170cda30 */
L_170CDA02:
    /* cmp eax, 0x34545844u */ /* 0x170CDA02: cmp eax, 0x34545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDB42; /* 0x170CDA07: jne 0x170cdb42 */
L_170CDA0D:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDA0D: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170DA980u; /* 0x170CDA17: mov dword ptr [ebx + 0x90], 0x170da980 */
    MEM32(ebx + 0x8C) = 0x170DA917u; /* 0x170CDA21: mov dword ptr [ebx + 0x8c], 0x170da917 */
    goto L_170CDB42; /* 0x170CDA2B: jmp 0x170cdb42 */
L_170CDA30:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDA30: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170DA149u; /* 0x170CDA3A: mov dword ptr [ebx + 0x90], 0x170da149 */
    MEM32(ebx + 0x8C) = 0x170D9E53u; /* 0x170CDA44: mov dword ptr [ebx + 0x8c], 0x170d9e53 */
    goto L_170CDB42; /* 0x170CDA4E: jmp 0x170cdb42 */
L_170CDA53:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDA53: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170DA942u; /* 0x170CDA5D: mov dword ptr [ebx + 0x90], 0x170da942 */
    MEM32(ebx + 0x8C) = 0x170DA8ECu; /* 0x170CDA67: mov dword ptr [ebx + 0x8c], 0x170da8ec */
    goto L_170CDB42; /* 0x170CDA71: jmp 0x170cdb42 */
L_170CDA76:
    MEM32(ebx + 0x90) = 0x170DA020u; /* 0x170CDA76: mov dword ptr [ebx + 0x90], 0x170da020 */
    MEM32(ebx + 0x8C) = 0x170D9D0Cu; /* 0x170CDA80: mov dword ptr [ebx + 0x8c], 0x170d9d0c */
    goto L_170CDB38; /* 0x170CDA8A: jmp 0x170cdb38 */
L_170CDA8F:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDA8F: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170DA27Du; /* 0x170CDA99: mov dword ptr [ebx + 0x90], 0x170da27d */
    MEM32(ebx + 0x8C) = 0x170D9EDDu; /* 0x170CDAA3: mov dword ptr [ebx + 0x8c], 0x170d9edd */
    goto L_170CDB42; /* 0x170CDAAD: jmp 0x170cdb42 */
L_170CDAB2:
    /* cmp eax, 0x53344342u */ /* 0x170CDAB2: cmp eax, 0x53344342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53344342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDB24; /* 0x170CDAB7: je 0x170cdb24 */
L_170CDAB9:
    /* cmp eax, 0x53354342u */ /* 0x170CDAB9: cmp eax, 0x53354342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53354342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDB04; /* 0x170CDABE: je 0x170cdb04 */
L_170CDAC0:
    /* cmp eax, 0x55344342u */ /* 0x170CDAC0: cmp eax, 0x55344342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x55344342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDAEE; /* 0x170CDAC5: je 0x170cdaee */
L_170CDAC7:
    /* cmp eax, 0x55354342u */ /* 0x170CDAC7: cmp eax, 0x55354342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x55354342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDB42; /* 0x170CDACC: jne 0x170cdb42 */
L_170CDACE:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDACE: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170D8921u; /* 0x170CDAD8: mov dword ptr [ebx + 0x90], 0x170d8921 */
    MEM32(ebx + 0x8C) = 0x170DA83Au; /* 0x170CDAE2: mov dword ptr [ebx + 0x8c], 0x170da83a */
    goto L_170CDB42; /* 0x170CDAEC: jmp 0x170cdb42 */
L_170CDAEE:
    MEM32(ebx + 0x90) = 0x170D8895u; /* 0x170CDAEE: mov dword ptr [ebx + 0x90], 0x170d8895 */
    MEM32(ebx + 0x8C) = 0x170DA79Au; /* 0x170CDAF8: mov dword ptr [ebx + 0x8c], 0x170da79a */
    goto L_170CDB38; /* 0x170CDB02: jmp 0x170cdb38 */
L_170CDB04:
    MEM32(ebx + 0x88) = 0x10u; /* 0x170CDB04: mov dword ptr [ebx + 0x88], 0x10 */
    MEM32(ebx + 0x90) = 0x170D898Eu; /* 0x170CDB0E: mov dword ptr [ebx + 0x90], 0x170d898e */
    MEM32(ebx + 0x8C) = 0x170DA893u; /* 0x170CDB18: mov dword ptr [ebx + 0x8c], 0x170da893 */
    goto L_170CDB42; /* 0x170CDB22: jmp 0x170cdb42 */
L_170CDB24:
    MEM32(ebx + 0x90) = 0x170D88DBu; /* 0x170CDB24: mov dword ptr [ebx + 0x90], 0x170d88db */
    MEM32(ebx + 0x8C) = 0x170DA7EAu; /* 0x170CDB2E: mov dword ptr [ebx + 0x8c], 0x170da7ea */
L_170CDB38:
    MEM32(ebx + 0x88) = 8; /* 0x170CDB38: mov dword ptr [ebx + 0x88], 8 */
L_170CDB42:
    PUSH32(esp, 6); /* 0x170CDB42: push 6 */
    ecx = POP32_VAL(esp); /* 0x170CDB44: pop ecx */
    eax = ebx + 0x94; /* 0x170CDB45: lea eax, [ebx + 0x94] */
    edi = eax; /* 0x170CDB4B: mov edi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x170CDB4D: add esi, 0x10 */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CDB50: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax); /* 0x170CDB52: mov eax, dword ptr [eax] */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x170CDB54: push -4 */
    edx = POP32_VAL(esp); /* 0x170CDB56: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x170CDB57: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xAC) = eax; /* 0x170CDB59: mov dword ptr [ebx + 0xac], eax */
    eax = MEM32(ebx + 0x98); /* 0x170CDB5F: mov eax, dword ptr [ebx + 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x170CDB65: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xB0) = eax; /* 0x170CDB67: mov dword ptr [ebx + 0xb0], eax */
    eax = MEM32(ebx + 0xA4); /* 0x170CDB6D: mov eax, dword ptr [ebx + 0xa4] */
    MEM32(ebx + 0xBC) = eax; /* 0x170CDB73: mov dword ptr [ebx + 0xbc], eax */
    eax = MEM32(ebx + 0x9C); /* 0x170CDB79: mov eax, dword ptr [ebx + 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170CDB7F: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x170CDB82: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x48); /* 0x170CDB84: mov ecx, dword ptr [ebx + 0x48] */
    esi = MEM32(ebx + 0x3C); /* 0x170CDB87: mov esi, dword ptr [ebx + 0x3c] */
    MEM32(ebx + 0xB4) = eax; /* 0x170CDB8A: mov dword ptr [ebx + 0xb4], eax */
    eax = MEM32(ebx + 0xA0); /* 0x170CDB90: mov eax, dword ptr [ebx + 0xa0] */
    edi = MEM32(ebx + 0x40); /* 0x170CDB96: mov edi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)((MEM32(ebx + 0xE8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0xE8) | 0xFFFFFFFFu));
    MEM32(ebx + 0xE8) = MEM32(ebx + 0xE8) | 0xFFFFFFFFu; /* 0x170CDB99: or dword ptr [ebx + 0xe8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0xEC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0xEC) | 0xFFFFFFFFu));
    MEM32(ebx + 0xEC) = MEM32(ebx + 0xEC) | 0xFFFFFFFFu; /* 0x170CDBA0: or dword ptr [ebx + 0xec], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170CDBA7: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x170CDBAA: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xB8) = eax; /* 0x170CDBAC: mov dword ptr [ebx + 0xb8], eax */
    eax = MEM32(ebx + 0xA8); /* 0x170CDBB2: mov eax, dword ptr [ebx + 0xa8] */
    MEM32(ebx + 0xC0) = eax; /* 0x170CDBB8: mov dword ptr [ebx + 0xc0], eax */
    eax = MEM32(ebx + 0x4C); /* 0x170CDBBE: mov eax, dword ptr [ebx + 0x4c] */
    MEM32(ebx + 0xD4) = eax; /* 0x170CDBC1: mov dword ptr [ebx + 0xd4], eax */
    eax = MEM32(ebx + 0x44); /* 0x170CDBC7: mov eax, dword ptr [ebx + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170CDBCA: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x170CDBCD: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x170CDBCF: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xCC) = eax; /* 0x170CDBD1: mov dword ptr [ebx + 0xcc], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x170CDBD7: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x170CDBDA: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x170CDBDC: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebx + 0x50); /* 0x170CDBDE: mov edx, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x170CDBE1: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0xD0) = ecx; /* 0x170CDBE3: mov dword ptr [ebx + 0xd0], ecx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170CDBE9: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170CDBE9: shr eax, 2 */
    MEM32(ebx + 0xDC) = eax; /* 0x170CDBEC: mov dword ptr [ebx + 0xdc], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x170CDBF2: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0xD8) = edx; /* 0x170CDBF4: mov dword ptr [ebx + 0xd8], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0x4C); /* 0x170CDBFA: sub edx, dword ptr [ebx + 0x4c] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDBFD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDBFD: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDC00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xF0) = eax; /* 0x170CDC02: mov dword ptr [ebx + 0xf0], eax */
    MEM32(ebx + 0xF4) = eax; /* 0x170CDC08: mov dword ptr [ebx + 0xf4], eax */
    MEM32(ebx + 0xF8) = eax; /* 0x170CDC0E: mov dword ptr [ebx + 0xf8], eax */
    eax = MEM32(ebp + 0x8); /* 0x170CDC14: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0xC4) = esi; /* 0x170CDC17: mov dword ptr [ebx + 0xc4], esi */
    MEM32(ebx + 0xC8) = edi; /* 0x170CDC1D: mov dword ptr [ebx + 0xc8], edi */
    MEM32(ebx + 0xE0) = ecx; /* 0x170CDC23: mov dword ptr [ebx + 0xe0], ecx */
    MEM32(ebx + 0xE4) = edx; /* 0x170CDC29: mov dword ptr [ebx + 0xe4], edx */
    eax = MEM32(eax + 0x40); /* 0x170CDC2F: mov eax, dword ptr [eax + 0x40] */
    edi = POP32_VAL(esp); /* 0x170CDC32: pop edi */
    MEM32(ebx + 0xFC) = eax; /* 0x170CDC33: mov dword ptr [ebx + 0xfc], eax */
    esi = POP32_VAL(esp); /* 0x170CDC39: pop esi */
    eax = ebx; /* 0x170CDC3A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170CDC3C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CDC3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CDC3E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CDC46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CDC46u);

L_170CDC46:
    edi = edi; /* 0x170CDC46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CDC48: push ebp */
    ebp = esp; /* 0x170CDC49: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x170CDC4B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CDC4E: push ebx */
    ebx = ecx; /* 0x170CDC4F: mov ebx, ecx */
    eax = MEM32(ebx + 0x40); /* 0x170CDC51: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x170CDC54: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x4C); /* 0x170CDC57: mov eax, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x170CDC5A: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0xF8), 0 */ /* 0x170CDC5D: cmp dword ptr [ebx + 0xf8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xF8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170CDC64: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDCAE; /* 0x170CDC65: jne 0x170cdcae */
L_170CDC67:
    eax = MEM32(ebx + 0xE0); /* 0x170CDC67: mov eax, dword ptr [ebx + 0xe0] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0xE4)); /* 0x170CDC6D: imul eax, dword ptr [ebx + 0xe4] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170CDC74: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170CDC74: shl eax, 3 */
    PUSH32(esp, eax); /* 0x170CDC77: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170CDC78: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170CDC7D: mov edi, eax */
    /* test edi, edi */ /* 0x170CDC7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CDC81: pop ecx */
    MEM32(ebx + 0xF8) = edi; /* 0x170CDC82: mov dword ptr [ebx + 0xf8], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE061; /* 0x170CDC88: je 0x170ce061 */
L_170CDC8E:
    ecx = MEM32(ebx + 0xE0); /* 0x170CDC8E: mov ecx, dword ptr [ebx + 0xe0] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0xE4)); /* 0x170CDC94: imul ecx, dword ptr [ebx + 0xe4] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x170CDC9B: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x170CDC9B: shl ecx, 3 */
    edx = ecx; /* 0x170CDC9E: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDCA0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDCA0: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDCA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170CDCA5: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170CDCA7: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CDCA9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170CDCAC: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_170CDCAE:
    eax = MEM32(ebp + 0xC); /* 0x170CDCAE: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xD4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0xD4); /* 0x170CDCB1: sub eax, dword ptr [ebx + 0xd4] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x170CDCB7: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0xE0)); /* 0x170CDCBA: imul eax, dword ptr [ebx + 0xe0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0xC8); /* 0x170CDCC1: sub ecx, dword ptr [ebx + 0xc8] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CDCC7: push esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDCC8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDCC8: shr ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CDCCB: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0xF8); /* 0x170CDCCD: mov ecx, dword ptr [ebx + 0xf8] */
    esi = ecx + eax * 8; /* 0x170CDCD3: lea esi, [ecx + eax*8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x170CDCD6: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x170CDCDA: mov dword ptr [ebp - 4], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDD24; /* 0x170CDCDD: jne 0x170cdd24 */
L_170CDCDF:
    edi = MEM32(ebx + 0xDC); /* 0x170CDCDF: mov edi, dword ptr [ebx + 0xdc] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CDCE5: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CDCE5: shl edi, 4 */
    eax = edi; /* 0x170CDCE8: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CDCEA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CDCEA: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170CDCED: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170CDCEE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CDCF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CDCF5: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x170CDCF6: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CDD0E; /* 0x170CDCF9: je 0x170cdd0e */
L_170CDCFB:
    PUSH32(esp, 0x1706E47Eu); /* 0x170CDCFB: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170CDD00: push edi */
    PUSH32(esp, 0x10u); /* 0x170CDD01: push 0x10 */
    PUSH32(esp, eax); /* 0x170CDD03: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x170CDD04: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x170CDD09: mov eax, dword ptr [ebp - 0x10] */
    goto L_170CDD10; /* 0x170CDD0C: jmp 0x170cdd10 */
L_170CDD0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDD0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CDD10:
    /* test eax, eax */ /* 0x170CDD10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x170CDD12: mov dword ptr [esi + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE060; /* 0x170CDD15: je 0x170ce060 */
L_170CDD1B:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x170CDD1B: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0xF4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) + 1; /* 0x170CDD1E: inc dword ptr [ebx + 0xf4] */
    _flag_k = FK_INC;
L_170CDD24:
    /* cmp MEM32(esi), 0 */ /* 0x170CDD24: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDE64; /* 0x170CDD27: jne 0x170cde64 */
L_170CDD2D:
    edi = MEM32(ebp + 0x8); /* 0x170CDD2D: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x40); /* 0x170CDD30: mov eax, dword ptr [ebx + 0x40] */
    edx = edi; /* 0x170CDD33: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x170CDD35: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x170CDD38: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x170CDD3A: mov dword ptr [ebp - 0x10], edx */
    ecx = edx + 0x4; /* 0x170CDD3D: lea ecx, [edx + 4] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDD4A; /* 0x170CDD40: jae 0x170cdd4a */
L_170CDD42:
    /* cmp eax, MEM32(ebx + 0x98) */ /* 0x170CDD42: cmp eax, dword ptr [ebx + 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170CDD59; /* 0x170CDD48: ja 0x170cdd59 */
L_170CDD4A:
    eax = MEM32(ebx + 0x48); /* 0x170CDD4A: mov eax, dword ptr [ebx + 0x48] */
    /* cmp ecx, eax */ /* 0x170CDD4D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CDDC0; /* 0x170CDD4F: jbe 0x170cddc0 */
L_170CDD51:
    /* cmp eax, MEM32(ebx + 0xA0) */ /* 0x170CDD51: cmp eax, dword ptr [ebx + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDDC0; /* 0x170CDD57: jae 0x170cddc0 */
L_170CDD59:
    eax = MEM32(ebx + 0xC4); /* 0x170CDD59: mov eax, dword ptr [ebx + 0xc4] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x170CDD5F: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x170CDD5F: shr edi, 2 */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebx + 0x60)); /* 0x170CDD62: imul edi, dword ptr [ebx + 0x60] */
    ecx = eax; /* 0x170CDD66: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDD68: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDD68: shr ecx, 2 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x88)); /* 0x170CDD6B: imul ecx, dword ptr [ebx + 0x88] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x170CDD72: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x64); /* 0x170CDD74: mov ecx, dword ptr [ebx + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CDD77: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x170CDD7B: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x20); /* 0x170CDD7D: add edi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0xCC) */ /* 0x170CDD80: cmp eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x4); /* 0x170CDD86: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x170CDD89: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x170CDD8C: mov dword ptr [ebp - 0xc], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDE48; /* 0x170CDD8F: jae 0x170cde48 */
L_170CDD95:
    PUSH32(esp, edi); /* 0x170CDD95: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170CDD96: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(ebx + 0x8C)); /* 0x170CDD99: call dword ptr [ebx + 0x8c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x170CDD9F: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x170CDDA3: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x88));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x88); /* 0x170CDDA6: add edi, dword ptr [ebx + 0x88] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x100u; /* 0x170CDDAC: add dword ptr [ebp - 8], 0x100 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0xCC) */ /* 0x170CDDB3: cmp eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDD95; /* 0x170CDDB9: jb 0x170cdd95 */
L_170CDDBB:
    goto L_170CDE45; /* 0x170CDDBB: jmp 0x170cde45 */
L_170CDDC0:
    eax = MEM32(ebx + 0xC4); /* 0x170CDDC0: mov eax, dword ptr [ebx + 0xc4] */
    ecx = MEM32(ebx + 0x3C); /* 0x170CDDC6: mov ecx, dword ptr [ebx + 0x3c] */
    /* cmp eax, ecx */ /* 0x170CDDC9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDE01; /* 0x170CDDCB: jae 0x170cde01 */
L_170CDDCD:
    /* cmp ecx, MEM32(ebx + 0x94) */ /* 0x170CDDCD: cmp ecx, dword ptr [ebx + 0x94] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x94));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CDE01; /* 0x170CDDD3: jbe 0x170cde01 */
L_170CDDD5:
    ecx = MEM32(ebx + 0x64); /* 0x170CDDD5: mov ecx, dword ptr [ebx + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CDDD8: imul ecx, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170CDDDC: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170CDDDC: shr eax, 2 */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x88)); /* 0x170CDDDF: imul eax, dword ptr [ebx + 0x88] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x170CDDE6: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x170CDDE6: shr edi, 2 */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebx + 0x60)); /* 0x170CDDE9: imul edi, dword ptr [ebx + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170CDDED: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CDDEF: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x20); /* 0x170CDDF1: add eax, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170CDDF4: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x170CDDF5: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(ebx + 0x8C)); /* 0x170CDDF8: call dword ptr [ebx + 0x8c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x170CDDFE: mov edx, dword ptr [ebp - 0x10] */
L_170CDE01:
    eax = MEM32(ebx + 0xCC); /* 0x170CDE01: mov eax, dword ptr [ebx + 0xcc] */
    ecx = MEM32(ebx + 0x44); /* 0x170CDE07: mov ecx, dword ptr [ebx + 0x44] */
    /* cmp eax, ecx */ /* 0x170CDE0A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CDE48; /* 0x170CDE0C: jbe 0x170cde48 */
L_170CDE0E:
    /* cmp ecx, MEM32(ebx + 0x9C) */ /* 0x170CDE0E: cmp ecx, dword ptr [ebx + 0x9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x9C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDE48; /* 0x170CDE14: jae 0x170cde48 */
L_170CDE16:
    ecx = MEM32(ebp + 0x8); /* 0x170CDE16: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x170CDE19: add eax, -4 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170CDE1C: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170CDE1C: shr eax, 2 */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x88)); /* 0x170CDE1F: imul eax, dword ptr [ebx + 0x88] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDE26: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDE26: shr ecx, 2 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x60)); /* 0x170CDE29: imul ecx, dword ptr [ebx + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CDE2D: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x64); /* 0x170CDE2F: mov ecx, dword ptr [ebx + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CDE32: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CDE36: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x20); /* 0x170CDE38: add eax, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170CDE3B: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x170CDE3C: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(ebx + 0x8C)); /* 0x170CDE3F: call dword ptr [ebx + 0x8c] */
    RECOMP_FLAGS_IN();
L_170CDE45:
    edx = MEM32(ebp + (-0x10)); /* 0x170CDE45: mov edx, dword ptr [ebp - 0x10] */
L_170CDE48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CDE48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CDE4A:
    eax = ecx + edx; /* 0x170CDE4A: lea eax, [ecx + edx] */
    /* cmp eax, MEM32(ebx + 0x40) */ /* 0x170CDE4D: cmp eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDE57; /* 0x170CDE50: jb 0x170cde57 */
L_170CDE52:
    /* cmp eax, MEM32(ebx + 0x48) */ /* 0x170CDE52: cmp eax, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDE5E; /* 0x170CDE55: jb 0x170cde5e */
L_170CDE57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDE57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CDE59: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x170CDE5A: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x170CDE5A: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170CDE5C: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CDE5E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170CDE5E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 4 */ /* 0x170CDE5F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDE4A; /* 0x170CDE62: jb 0x170cde4a */
L_170CDE64:
    /* cmp MEM32(ebx + 0x54), 0 */ /* 0x170CDE64: cmp dword ptr [ebx + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDE77; /* 0x170CDE68: je 0x170cde77 */
L_170CDE6A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CDE6A: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CDE6D: mov ecx, ebx */
    RECOMP_CALL(sub_170C39E9); /* 0x170CDE6F: call 0x170c39e9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CDE74: mov dword ptr [ebp + 0x10], eax */
L_170CDE77:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CDE77: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDE8A; /* 0x170CDE7B: je 0x170cde8a */
L_170CDE7D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CDE7D: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170CDE80: mov ecx, ebx */
    RECOMP_CALL(sub_170C4FA3); /* 0x170CDE82: call 0x170c4fa3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x170CDE87: mov dword ptr [ebp + 0x10], eax */
L_170CDE8A:
    ecx = MEM32(ebx + 0x3C); /* 0x170CDE8A: mov ecx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0xC4); /* 0x170CDE8D: sub ecx, dword ptr [ebx + 0xc4] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x170CDE93: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0xC8); /* 0x170CDE96: sub edx, dword ptr [ebx + 0xc8] */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x68); /* 0x170CDE9C: mov eax, dword ptr [ebx + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170CDE9F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170CDEA1: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x170CDEA4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x170CDEA6: mov dword ptr [ebp - 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDED6; /* 0x170CDEA9: jae 0x170cded6 */
L_170CDEAB:
    edi = ecx; /* 0x170CDEAB: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x170CDEAD: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x170CDEB0: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x170CDEB2: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x170CDEB2: shl edi, 2 */
    eax = ecx; /* 0x170CDEB5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170CDEB7: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x170CDEBA: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CDEBC: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CDEBC: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x4); /* 0x170CDEBF: add edi, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x10); /* 0x170CDEC2: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x170CDEC5: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDEC9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDECA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDECB: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170CDECC: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x170CDECD: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDED0: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x4)); /* 0x170CDED1: mov esi, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDEAB; /* 0x170CDED4: jb 0x170cdeab */
L_170CDED6:
    edi = MEM32(ebp + 0x8); /* 0x170CDED6: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170CDED9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CDEDB: inc edx */
    _flag_k = FK_INC;
    ecx = edi; /* 0x170CDEDC: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CDEDE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x170CDEE1: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x170CDEE3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x170CDEE3: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x170CDEE5: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), 0xFu */ /* 0x170CDEE7: cmp dword ptr [esi], 0xf */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CE060; /* 0x170CDEEA: jne 0x170ce060 */
L_170CDEF0:
    eax = MEM32(ebx + 0xC4); /* 0x170CDEF0: mov eax, dword ptr [ebx + 0xc4] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x170CDEF6: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x170CDEF6: shr edi, 2 */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebx + 0x60)); /* 0x170CDEF9: imul edi, dword ptr [ebx + 0x60] */
    ecx = eax; /* 0x170CDEFD: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CDEFF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CDEFF: shr ecx, 2 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x88)); /* 0x170CDF02: imul ecx, dword ptr [ebx + 0x88] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x170CDF09: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x64); /* 0x170CDF0B: mov ecx, dword ptr [ebx + 0x64] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x170CDF0E: imul ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x170CDF12: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x20); /* 0x170CDF14: add edi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0xCC) */ /* 0x170CDF17: cmp eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x4); /* 0x170CDF1D: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + 0xC) = edi; /* 0x170CDF20: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + 0x10) = ecx; /* 0x170CDF23: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x170CDF26: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CE01A; /* 0x170CDF29: jae 0x170ce01a */
L_170CDF2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDF2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x170CDF31: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170CDF34: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x170CDF37: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x8); /* 0x170CDF3A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x170CDF3D: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edx; /* 0x170CDF40: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x170CDF43: mov dword ptr [ebp - 0x10], eax */
L_170CDF46:
    eax = MEM32(ebx + 0x9C); /* 0x170CDF46: mov eax, dword ptr [ebx + 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x8)); /* 0x170CDF4C: sub eax, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0xA0); /* 0x170CDF4F: mov ecx, dword ptr [ebx + 0xa0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x170CDF55: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    /* cmp eax, 4 */ /* 0x170CDF58: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDF9F; /* 0x170CDF5B: jae 0x170cdf9f */
L_170CDF5D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170CDF5D: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170CDF61: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CDF9F; /* 0x170CDF63: jbe 0x170cdf9f */
L_170CDF65:
    /* cmp MEM32(ebp + 0x8), 4 */ /* 0x170CDF65: cmp dword ptr [ebp + 8], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDF9F; /* 0x170CDF69: jae 0x170cdf9f */
L_170CDF6B:
    edx = eax; /* 0x170CDF6B: mov edx, eax */
L_170CDF6D:
    edi = MEM32(ebp + 0x8); /* 0x170CDF6D: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(ebp + edx * 4 + (-0x20)); /* 0x170CDF70: mov esi, dword ptr [ebp + edx*4 - 0x20] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x170CDF74: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x170CDF74: shl edi, 2 */
    _flag_a = (uint32_t)((esi | edi)); _flag_b = (uint32_t)((esi | edi));
    esi = esi | edi; /* 0x170CDF77: or esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | edx)); _flag_b = (uint32_t)((edi | edx));
    edi = edi | edx; /* 0x170CDF79: or edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x170CDF7B: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x170CDF7B: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x170CDF7E: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CDF81: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CDF81: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x170CDF84: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170CDF87: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 4 */ /* 0x170CDF88: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDF8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDF8C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDF8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDF8E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDF6D; /* 0x170CDF8F: jb 0x170cdf6d */
L_170CDF91:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170CDF91: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x170CDF94: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x4)); /* 0x170CDF97: mov esi, dword ptr [ebp - 4] */
    edi = MEM32(ebp + 0xC); /* 0x170CDF9A: mov edi, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDF65; /* 0x170CDF9D: jb 0x170cdf65 */
L_170CDF9F:
    /* cmp ecx, 4 */ /* 0x170CDF9F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CDFDA; /* 0x170CDFA2: jae 0x170cdfda */
L_170CDFA4:
    edx = MEM32(ebp + ecx * 4 + (-0x20)); /* 0x170CDFA4: mov edx, dword ptr [ebp + ecx*4 - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDFA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x170CDFAA: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x170CDFAA: shl edx, 2 */
L_170CDFAD:
    edi = ecx; /* 0x170CDFAD: mov edi, ecx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x170CDFAF: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x170CDFAF: shl edi, 2 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x170CDFB2: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x170CDFB4: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x170CDFB4: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x170CDFB7: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    esi = edx; /* 0x170CDFBA: mov esi, edx */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x170CDFBC: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x170CDFBE: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x170CDFBE: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x170CDFC1: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CDFC4: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 4 */ /* 0x170CDFC5: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDFC8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDFC9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDFCA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CDFCB: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDFAD; /* 0x170CDFCC: jb 0x170cdfad */
L_170CDFCE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170CDFCE: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 4 */ /* 0x170CDFCF: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDFA4; /* 0x170CDFD2: jb 0x170cdfa4 */
L_170CDFD4:
    edi = MEM32(ebp + 0xC); /* 0x170CDFD4: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x170CDFD7: mov esi, dword ptr [ebp - 4] */
L_170CDFDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDFDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xFC), eax */ /* 0x170CDFDC: cmp dword ptr [ebx + 0xfc], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xFC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CDFE9; /* 0x170CDFE2: jne 0x170cdfe9 */
L_170CDFE4:
    /* cmp MEM32(ebx + 0x5C), eax */ /* 0x170CDFE4: cmp dword ptr [ebx + 0x5c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CDFEC; /* 0x170CDFE7: je 0x170cdfec */
L_170CDFE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CDFE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CDFEB: inc eax */
    _flag_k = FK_INC;
L_170CDFEC:
    PUSH32(esp, eax); /* 0x170CDFEC: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CDFED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170CDFF0: push edi */
    RECOMP_ICALL(MEM32(ebx + 0x90)); /* 0x170CDFF1: call dword ptr [ebx + 0x90] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x170CDFF7: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x88));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x88); /* 0x170CDFFB: add edi, dword ptr [ebx + 0x88] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x170CE001: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x100u; /* 0x170CE004: add dword ptr [ebp + 0x10], 0x100 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0xCC) */ /* 0x170CE00B: cmp eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x170CE011: mov dword ptr [ebp + 0xc], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CDF46; /* 0x170CE014: jb 0x170cdf46 */
L_170CE01A:
    ecx = MEM32(ebx + 0xE4); /* 0x170CE01A: mov ecx, dword ptr [ebx + 0xe4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0xE0)); /* 0x170CE020: imul ecx, dword ptr [ebx + 0xe0] */
    edx = MEM32(ebx + 0xF8); /* 0x170CE027: mov edx, dword ptr [ebx + 0xf8] */
    eax = esi + 0x8; /* 0x170CE02D: lea eax, [esi + 8] */
    ecx = edx + ecx * 8; /* 0x170CE030: lea ecx, [edx + ecx*8] */
    /* cmp eax, ecx */ /* 0x170CE033: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CE04D; /* 0x170CE035: jae 0x170ce04d */
L_170CE037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170CE037: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ecx */ /* 0x170CE039: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CE04D; /* 0x170CE03B: jne 0x170ce04d */
L_170CE03D:
    /* cmp MEM32(esi + 0xC), ecx */ /* 0x170CE03D: cmp dword ptr [esi + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CE04D; /* 0x170CE040: jne 0x170ce04d */
L_170CE042:
    eax = MEM32(esi + 0x4); /* 0x170CE042: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0xC) = eax; /* 0x170CE045: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x4) = ecx; /* 0x170CE048: mov dword ptr [esi + 4], ecx */
    goto L_170CE05C; /* 0x170CE04B: jmp 0x170ce05c */
L_170CE04D:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x170CE04D: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x170CE050: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0xF4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) - 1; /* 0x170CE055: dec dword ptr [ebx + 0xf4] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x170CE05B: pop ecx */
L_170CE05C:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170CE05C: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CE060:
    esi = POP32_VAL(esp); /* 0x170CE060: pop esi */
L_170CE061:
    edi = POP32_VAL(esp); /* 0x170CE061: pop edi */
    ebx = POP32_VAL(esp); /* 0x170CE062: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CE063: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CE064: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CE06C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE06Cu);

L_170CE06C:
    edi = edi; /* 0x170CE06C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE06E: push ebp */
    ebp = esp; /* 0x170CE06F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x170CE071: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170CE074: push ebx */
    PUSH32(esp, esi); /* 0x170CE075: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170CE076: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170CE079: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170CE07A: mov edi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x170CE07D: mov ebx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x40); /* 0x170CE07F: add esi, dword ptr [ebx + 0x40] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x4C); /* 0x170CE082: add edi, dword ptr [ebx + 0x4c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0xF0), 0 */ /* 0x170CE085: cmp dword ptr [ebx + 0xf0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xF0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CE0D0; /* 0x170CE08C: jne 0x170ce0d0 */
L_170CE08E:
    eax = MEM32(ebx + 0xDC); /* 0x170CE08E: mov eax, dword ptr [ebx + 0xdc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CE094: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CE094: shl eax, 4 */
    MEM32(ebp + 0x8) = eax; /* 0x170CE097: mov dword ptr [ebp + 8], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CE09A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CE09A: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170CE09D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE09E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE0A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE0A5: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x170CE0A6: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE0C0; /* 0x170CE0A9: je 0x170ce0c0 */
L_170CE0AB:
    PUSH32(esp, 0x1706E47Eu); /* 0x170CE0AB: push 0x1706e47e */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CE0B0: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x170CE0B3: push 0x10 */
    PUSH32(esp, eax); /* 0x170CE0B5: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x170CE0B6: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x170CE0BB: mov eax, dword ptr [ebp + 0xc] */
    goto L_170CE0C2; /* 0x170CE0BE: jmp 0x170ce0c2 */
L_170CE0C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CE0C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CE0C2:
    /* test eax, eax */ /* 0x170CE0C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xF0) = eax; /* 0x170CE0C4: mov dword ptr [ebx + 0xf0], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE2F0; /* 0x170CE0CA: je 0x170ce2f0 */
L_170CE0D0:
    eax = esi; /* 0x170CE0D0: mov eax, esi */
    ecx = ebx + 0xE8; /* 0x170CE0D2: lea ecx, [ebx + 0xe8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x170CE0D8: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ecx) */ /* 0x170CE0DB: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CE0E7; /* 0x170CE0DD: jne 0x170ce0e7 */
L_170CE0DF:
    /* cmp edi, MEM32(ebx + 0xEC) */ /* 0x170CE0DF: cmp edi, dword ptr [ebx + 0xec] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE14C; /* 0x170CE0E5: je 0x170ce14c */
L_170CE0E7:
    MEM32(ecx) = eax; /* 0x170CE0E7: mov dword ptr [ecx], eax */
    ecx = MEM32(ebx + 0xC4); /* 0x170CE0E9: mov ecx, dword ptr [ebx + 0xc4] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170CE0EF: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170CE0EF: shr eax, 2 */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x60)); /* 0x170CE0F2: imul eax, dword ptr [ebx + 0x60] */
    edx = ecx; /* 0x170CE0F6: mov edx, ecx */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x170CE0F8: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x170CE0F8: shr edx, 2 */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebx + 0x88)); /* 0x170CE0FB: imul edx, dword ptr [ebx + 0x88] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CE102: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x64); /* 0x170CE104: mov edx, dword ptr [ebx + 0x64] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x170CE107: imul edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170CE10A: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x20); /* 0x170CE10C: add eax, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    MEM32(ebx + 0xEC) = edi; /* 0x170CE10F: mov dword ptr [ebx + 0xec], edi */
    MEM32(ebp + 0x8) = eax; /* 0x170CE115: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebx + 0xF0); /* 0x170CE118: mov eax, dword ptr [ebx + 0xf0] */
    MEM32(ebp + 0xC) = eax; /* 0x170CE11E: mov dword ptr [ebp + 0xc], eax */
    edi = ecx; /* 0x170CE121: mov edi, ecx */
    goto L_170CE144; /* 0x170CE123: jmp 0x170ce144 */
L_170CE125:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CE125: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170CE128: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebx + 0x8C)); /* 0x170CE12B: call dword ptr [ebx + 0x8c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x88); /* 0x170CE131: mov eax, dword ptr [ebx + 0x88] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x170CE137: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x100u; /* 0x170CE13A: add dword ptr [ebp + 0xc], 0x100 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x170CE141: add edi, 4 */
    _flag_k = FK_ADD;
L_170CE144:
    /* cmp edi, MEM32(ebx + 0xCC) */ /* 0x170CE144: cmp edi, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xCC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CE125; /* 0x170CE14A: jb 0x170ce125 */
L_170CE14C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx + 0xC8); /* 0x170CE14C: sub esi, dword ptr [ebx + 0xc8] */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x3C); /* 0x170CE152: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0xC4); /* 0x170CE155: sub eax, dword ptr [ebx + 0xc4] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x68); /* 0x170CE15B: mov ecx, dword ptr [ebx + 0x68] */
    edx = MEM32(ebp + 0x10); /* 0x170CE15E: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    esi = esi & 3; /* 0x170CE161: and esi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x170CE164: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170CE167: add ecx, eax */
    _flag_k = FK_ADD;
L_170CE169:
    /* cmp eax, ecx */ /* 0x170CE169: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CE194; /* 0x170CE16B: jae 0x170ce194 */
L_170CE16D:
    esi = eax; /* 0x170CE16D: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x170CE16F: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((esi | MEM32(ebp + 0x8)));
    esi = esi | MEM32(ebp + 0x8); /* 0x170CE172: or esi, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x170CE175: mov edi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x170CE177: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x170CE177: shl esi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x170CE17A: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | edi)); _flag_b = (uint32_t)((esi | edi));
    esi = esi | edi; /* 0x170CE17D: or esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x170CE17F: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x170CE17F: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xF0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xF0); /* 0x170CE182: add esi, dword ptr [ebx + 0xf0] */
    _flag_k = FK_ADD;
    edi = edx; /* 0x170CE188: mov edi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE18A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE18B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE18C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x170CE18D: add edx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE190: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170CE191: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_170CE169; /* 0x170CE192: jmp 0x170ce169 */
L_170CE194:
    /* cmp MEM32(ebx + 0x18), 0 */ /* 0x170CE194: cmp dword ptr [ebx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE2DA; /* 0x170CE198: je 0x170ce2da */
L_170CE19E:
    eax = MEM32(ebx + 0x68); /* 0x170CE19E: mov eax, dword ptr [ebx + 0x68] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170CE1A1: neg eax */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CE1A3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CE1A3: shl eax, 4 */
    ecx = edx; /* 0x170CE1A6: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170CE1A8: add edx, eax */
    _flag_k = FK_ADD;
    MEM16(ebp + 0x10) = _fpu_cw; /* 0x170CE1AA: fnstcw word ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x170CE1AD: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x170CE1B0: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x170CE1B5: mov dword ptr [ebp + 8], eax */
    _fpu_cw = MEM16(ebp + 0x8); /* 0x170CE1B8: fldcw word ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x170CE1BB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x7C) = eax; /* 0x170CE1BE: mov dword ptr [ebx + 0x7c], eax */
    goto L_170CE2C9; /* 0x170CE1C1: jmp 0x170ce2c9 */
L_170CE1C6:
    fp_push(*(float*)&MEM32(edx)); /* 0x170CE1C6: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(0x17007498); /* 0x170CE1C8: fmul dword ptr [0x17007498] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170CE1CE: fadd dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CE1D4: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CE1D7: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CE1DA: fistp dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170CE1DD: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x10) = eax; /* 0x170CE1E0: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CE1E3: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17007494); /* 0x170CE1E6: fmul dword ptr [0x17007494] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170CE1EC: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170CE1EF: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17007490); /* 0x170CE1F2: fmul dword ptr [0x17007490] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170CE1F8: fadd dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CE1FE: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CE201: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + 0xC) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CE204: fistp dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x170CE207: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x170CE20A: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CE20D: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700748C); /* 0x170CE210: fmul dword ptr [0x1700748c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170CE216: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170CE219: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17007498); /* 0x170CE21C: fmul dword ptr [0x17007498] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170CE222: fadd dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CE228: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CE22B: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CE22E: fistp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x170CE231: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = eax; /* 0x170CE234: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CE237: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17007494); /* 0x170CE23A: fmul dword ptr [0x17007494] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170CE240: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170CE243: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x80); /* 0x170CE246: fmul dword ptr [ebx + 0x80] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170CE24C: fadd dword ptr [0x1700141c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170CE252: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170CE255: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x170CE258: fistp dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x170CE25B: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + 0x10) = eax; /* 0x170CE25E: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x170CE261: fild dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x84); /* 0x170CE264: fmul dword ptr [ebx + 0x84] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170CE26A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x24)); /* 0x170CE26D: fld dword ptr [ebx + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170CE270: fld dword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170CE273: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170CE275: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170CE277: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170CE2C6; /* 0x170CE27A: jp 0x170ce2c6 */
L_170CE27C:
    fp_push(*(float*)&MEM32(ebx + 0x28)); /* 0x170CE27C: fld dword ptr [ebx + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170CE27F: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170CE282: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170CE284: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170CE286: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170CE2C6; /* 0x170CE289: jp 0x170ce2c6 */
L_170CE28B:
    fp_push(*(float*)&MEM32(ebx + 0x2C)); /* 0x170CE28B: fld dword ptr [ebx + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x170CE28E: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170CE291: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170CE293: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170CE295: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170CE2C6; /* 0x170CE298: jp 0x170ce2c6 */
L_170CE29A:
    fp_push(*(float*)&MEM32(ebx + 0x30)); /* 0x170CE29A: fld dword ptr [ebx + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170CE29D: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170CE2A0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170CE2A2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170CE2A4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170CE2C6; /* 0x170CE2A7: jp 0x170ce2c6 */
L_170CE2A9:
    fp_push(0.0); /* 0x170CE2A9: fldz  */
    esi = ebp + (-0x28); /* 0x170CE2AB: lea esi, [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170CE2AE: fstp dword ptr [ebp - 0x28] */
    edi = edx; /* 0x170CE2B1: mov edi, edx */
    fp_push(0.0); /* 0x170CE2B3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170CE2B5: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x170CE2B8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170CE2BA: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x170CE2BD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170CE2BF: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE2C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE2C3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE2C4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170CE2C5: movsd dword ptr es:[edi], dword ptr [esi] */
L_170CE2C6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x170CE2C6: add edx, 0x10 */
    _flag_k = FK_ADD;
L_170CE2C9:
    /* cmp edx, ecx */ /* 0x170CE2C9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170CE1C6; /* 0x170CE2CB: jb 0x170ce1c6 */
L_170CE2D1:
    eax = MEM32(ebx + 0x7C); /* 0x170CE2D1: mov eax, dword ptr [ebx + 0x7c] */
    MEM32(ebp + 0x10) = eax; /* 0x170CE2D4: mov dword ptr [ebp + 0x10], eax */
    _fpu_cw = MEM16(ebp + 0x10); /* 0x170CE2D7: fldcw word ptr [ebp + 0x10] */
L_170CE2DA:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170CE2DA: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE2F0; /* 0x170CE2DE: je 0x170ce2f0 */
L_170CE2E0:
    eax = MEM32(ebx + 0x68); /* 0x170CE2E0: mov eax, dword ptr [ebx + 0x68] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170CE2E3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170CE2E3: shl eax, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170CE2E6: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x170CE2E8: push edx */
    ecx = ebx; /* 0x170CE2E9: mov ecx, ebx */
    RECOMP_CALL(sub_170C519B); /* 0x170CE2EB: call 0x170c519b */
    RECOMP_FLAGS_IN();
L_170CE2F0:
    edi = POP32_VAL(esp); /* 0x170CE2F0: pop edi */
    esi = POP32_VAL(esp); /* 0x170CE2F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CE2F2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CE2F3: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CE2F4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CE2FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE2FCu);

L_170CE2FC:
    edi = edi; /* 0x170CE2FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE2FE: push ebp */
    ebp = esp; /* 0x170CE2FF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CE301: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CE302: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CE305: mov esi, ecx */
    RECOMP_CALL(sub_170CD788); /* 0x170CE307: call 0x170cd788 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007740u; /* 0x170CE30C: mov dword ptr [esi], 0x17007740 */
    eax = esi; /* 0x170CE312: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CE314: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CE315: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CE316: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CE31E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE31Eu);

L_170CE31E:
    edi = edi; /* 0x170CE31E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE320: push ebp */
    ebp = esp; /* 0x170CE321: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CE323: push esi */
    esi = ecx; /* 0x170CE324: mov esi, ecx */
    RECOMP_CALL(sub_170C489A); /* 0x170CE326: call 0x170c489a */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170CE32B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE338; /* 0x170CE32F: je 0x170ce338 */
L_170CE331:
    PUSH32(esp, esi); /* 0x170CE331: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170CE332: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170CE337: pop ecx */
L_170CE338:
    eax = esi; /* 0x170CE338: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CE33A: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CE33B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CE33C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CE344(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE344u);

L_170CE344:
    edi = edi; /* 0x170CE344: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE346: push ebp */
    ebp = esp; /* 0x170CE347: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CE349: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CE34A: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x170CE34D: mov esi, ecx */
    RECOMP_CALL(sub_170CD9B6); /* 0x170CE34F: call 0x170cd9b6 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17007750u; /* 0x170CE354: mov dword ptr [esi], 0x17007750 */
    eax = esi; /* 0x170CE35A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CE35C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CE35D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CE35E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CE366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE366u);

L_170CE366:
    edi = edi; /* 0x170CE366: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE368: push ebp */
    ebp = esp; /* 0x170CE369: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CE36B: push esi */
    esi = ecx; /* 0x170CE36C: mov esi, ecx */
    RECOMP_CALL(sub_170CD87B); /* 0x170CE36E: call 0x170cd87b */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170CE373: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CE380; /* 0x170CE377: je 0x170ce380 */
L_170CE379:
    PUSH32(esp, esi); /* 0x170CE379: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170CE37A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170CE37F: pop ecx */
L_170CE380:
    eax = esi; /* 0x170CE380: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CE382: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CE383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CE384: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170CE38C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CE38Cu);

L_170CE38C:
    edi = edi; /* 0x170CE38C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CE38E: push ebp */
    ebp = esp; /* 0x170CE38F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170CE391: push esi */
    PUSH32(esp, edi); /* 0x170CE392: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170CE393: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x170CE396: mov eax, dword ptr [edi + 4] */
    ecx = 0x31545844u; /* 0x170CE399: mov ecx, 0x31545844 */
    /* cmp eax, ecx */ /* 0x170CE39E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CE94B; /* 0x170CE3A0: jg 0x170ce94b */
L_170CE3A6:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE92B; /* 0x170CE3A6: je 0x170ce92b */
L_170CE3AC:
    /* cmp eax, 0x32u */ /* 0x170CE3AC: cmp eax, 0x32 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CE64E; /* 0x170CE3AF: jg 0x170ce64e */
L_170CE3B5:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE62E; /* 0x170CE3B5: je 0x170ce62e */
L_170CE3BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14u; /* 0x170CE3BB: sub eax, 0x14 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x15u */ /* 0x170CE3BE: cmp eax, 0x15 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE3C1: ja 0x170ceb91 */
L_170CE3C7:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x170CEBAA)); goto _ljump; }
L_170CE3CE:
    PUSH32(esp, 0x80u); /* 0x170CE3CE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE3D3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE3D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE3DA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE3DB: je 0x170ceb71 */
L_170CE3E1:
    PUSH32(esp, edi); /* 0x170CE3E1: push edi */
    ecx = eax; /* 0x170CE3E2: mov ecx, eax */
    RECOMP_CALL(sub_170C9F21); /* 0x170CE3E4: call 0x170c9f21 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE3E9: jmp 0x170ceb6d */
L_170CE3EE:
    PUSH32(esp, 0x80u); /* 0x170CE3EE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE3F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE3F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE3FA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE3FB: je 0x170ceb71 */
L_170CE401:
    PUSH32(esp, edi); /* 0x170CE401: push edi */
    ecx = eax; /* 0x170CE402: mov ecx, eax */
    RECOMP_CALL(sub_170CA2F8); /* 0x170CE404: call 0x170ca2f8 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE409: jmp 0x170ceb6d */
L_170CE40E:
    PUSH32(esp, 0x80u); /* 0x170CE40E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE413: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE418: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE41A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE41B: je 0x170ceb71 */
L_170CE421:
    PUSH32(esp, edi); /* 0x170CE421: push edi */
    ecx = eax; /* 0x170CE422: mov ecx, eax */
    RECOMP_CALL(sub_170CA31E); /* 0x170CE424: call 0x170ca31e */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE429: jmp 0x170ceb6d */
L_170CE42E:
    PUSH32(esp, 0x80u); /* 0x170CE42E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE433: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE438: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE43A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE43B: je 0x170ceb71 */
L_170CE441:
    PUSH32(esp, edi); /* 0x170CE441: push edi */
    ecx = eax; /* 0x170CE442: mov ecx, eax */
    RECOMP_CALL(sub_170CA344); /* 0x170CE444: call 0x170ca344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE449: jmp 0x170ceb6d */
L_170CE44E:
    PUSH32(esp, 0x80u); /* 0x170CE44E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE453: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE458: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE45A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE45B: je 0x170ceb71 */
L_170CE461:
    PUSH32(esp, edi); /* 0x170CE461: push edi */
    ecx = eax; /* 0x170CE462: mov ecx, eax */
    RECOMP_CALL(sub_170CA36A); /* 0x170CE464: call 0x170ca36a */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE469: jmp 0x170ceb6d */
L_170CE46E:
    PUSH32(esp, 0x80u); /* 0x170CE46E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE473: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE478: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE47A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE47B: je 0x170ceb71 */
L_170CE481:
    PUSH32(esp, edi); /* 0x170CE481: push edi */
    ecx = eax; /* 0x170CE482: mov ecx, eax */
    RECOMP_CALL(sub_170CA390); /* 0x170CE484: call 0x170ca390 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE489: jmp 0x170ceb6d */
L_170CE48E:
    PUSH32(esp, 0x80u); /* 0x170CE48E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE493: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE498: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE49A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE49B: je 0x170ceb71 */
L_170CE4A1:
    PUSH32(esp, edi); /* 0x170CE4A1: push edi */
    ecx = eax; /* 0x170CE4A2: mov ecx, eax */
    RECOMP_CALL(sub_170CA3B6); /* 0x170CE4A4: call 0x170ca3b6 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE4A9: jmp 0x170ceb6d */
L_170CE4AE:
    PUSH32(esp, 0x80u); /* 0x170CE4AE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE4B3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE4B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE4BA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE4BB: je 0x170ceb71 */
L_170CE4C1:
    PUSH32(esp, edi); /* 0x170CE4C1: push edi */
    ecx = eax; /* 0x170CE4C2: mov ecx, eax */
    RECOMP_CALL(sub_170CA3DC); /* 0x170CE4C4: call 0x170ca3dc */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE4C9: jmp 0x170ceb6d */
L_170CE4CE:
    PUSH32(esp, 0x80u); /* 0x170CE4CE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE4D3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE4D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE4DA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE4DB: je 0x170ceb71 */
L_170CE4E1:
    PUSH32(esp, edi); /* 0x170CE4E1: push edi */
    ecx = eax; /* 0x170CE4E2: mov ecx, eax */
    RECOMP_CALL(sub_170CA6A4); /* 0x170CE4E4: call 0x170ca6a4 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE4E9: jmp 0x170ceb6d */
L_170CE4EE:
    PUSH32(esp, 0x80u); /* 0x170CE4EE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE4F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE4F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE4FA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE4FB: je 0x170ceb71 */
L_170CE501:
    PUSH32(esp, edi); /* 0x170CE501: push edi */
    ecx = eax; /* 0x170CE502: mov ecx, eax */
    RECOMP_CALL(sub_170CA6CA); /* 0x170CE504: call 0x170ca6ca */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE509: jmp 0x170ceb6d */
L_170CE50E:
    PUSH32(esp, 0x80u); /* 0x170CE50E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE513: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE518: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE51A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE51B: je 0x170ceb71 */
L_170CE521:
    PUSH32(esp, edi); /* 0x170CE521: push edi */
    ecx = eax; /* 0x170CE522: mov ecx, eax */
    RECOMP_CALL(sub_170CA6F0); /* 0x170CE524: call 0x170ca6f0 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE529: jmp 0x170ceb6d */
L_170CE52E:
    PUSH32(esp, 0x80u); /* 0x170CE52E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE533: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE538: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE53A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE53B: je 0x170ceb71 */
L_170CE541:
    PUSH32(esp, edi); /* 0x170CE541: push edi */
    ecx = eax; /* 0x170CE542: mov ecx, eax */
    RECOMP_CALL(sub_170CA716); /* 0x170CE544: call 0x170ca716 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE549: jmp 0x170ceb6d */
L_170CE54E:
    PUSH32(esp, 0x80u); /* 0x170CE54E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE553: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE558: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE55A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE55B: je 0x170ceb71 */
L_170CE561:
    PUSH32(esp, edi); /* 0x170CE561: push edi */
    ecx = eax; /* 0x170CE562: mov ecx, eax */
    RECOMP_CALL(sub_170CA73C); /* 0x170CE564: call 0x170ca73c */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE569: jmp 0x170ceb6d */
L_170CE56E:
    PUSH32(esp, 0x80u); /* 0x170CE56E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE573: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE57A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE57B: je 0x170ceb71 */
L_170CE581:
    PUSH32(esp, edi); /* 0x170CE581: push edi */
    ecx = eax; /* 0x170CE582: mov ecx, eax */
    RECOMP_CALL(sub_170CA762); /* 0x170CE584: call 0x170ca762 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE589: jmp 0x170ceb6d */
L_170CE58E:
    PUSH32(esp, 0x80u); /* 0x170CE58E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE593: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE598: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE59A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE59B: je 0x170ceb71 */
L_170CE5A1:
    PUSH32(esp, edi); /* 0x170CE5A1: push edi */
    ecx = eax; /* 0x170CE5A2: mov ecx, eax */
    RECOMP_CALL(sub_170CA788); /* 0x170CE5A4: call 0x170ca788 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE5A9: jmp 0x170ceb6d */
L_170CE5AE:
    PUSH32(esp, 0x80u); /* 0x170CE5AE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE5B3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE5B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE5BA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE5BB: je 0x170ceb71 */
L_170CE5C1:
    PUSH32(esp, edi); /* 0x170CE5C1: push edi */
    ecx = eax; /* 0x170CE5C2: mov ecx, eax */
    RECOMP_CALL(sub_170CAB8D); /* 0x170CE5C4: call 0x170cab8d */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE5C9: jmp 0x170ceb6d */
L_170CE5CE:
    PUSH32(esp, 0x80u); /* 0x170CE5CE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE5D3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE5D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE5DA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE5DB: je 0x170ceb71 */
L_170CE5E1:
    PUSH32(esp, edi); /* 0x170CE5E1: push edi */
    ecx = eax; /* 0x170CE5E2: mov ecx, eax */
    RECOMP_CALL(sub_170CABB3); /* 0x170CE5E4: call 0x170cabb3 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE5E9: jmp 0x170ceb6d */
L_170CE5EE:
    PUSH32(esp, 0x80u); /* 0x170CE5EE: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE5F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE5F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE5FA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE5FB: je 0x170ceb71 */
L_170CE601:
    PUSH32(esp, edi); /* 0x170CE601: push edi */
    ecx = eax; /* 0x170CE602: mov ecx, eax */
    RECOMP_CALL(sub_170CABD9); /* 0x170CE604: call 0x170cabd9 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE609: jmp 0x170ceb6d */
L_170CE60E:
    PUSH32(esp, 0x80u); /* 0x170CE60E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE613: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE618: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE61A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE61B: je 0x170ceb71 */
L_170CE621:
    PUSH32(esp, edi); /* 0x170CE621: push edi */
    ecx = eax; /* 0x170CE622: mov ecx, eax */
    RECOMP_CALL(sub_170CABFF); /* 0x170CE624: call 0x170cabff */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE629: jmp 0x170ceb6d */
L_170CE62E:
    PUSH32(esp, 0x80u); /* 0x170CE62E: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE633: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE63A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE63B: je 0x170ceb71 */
L_170CE641:
    PUSH32(esp, edi); /* 0x170CE641: push edi */
    ecx = eax; /* 0x170CE642: mov ecx, eax */
    RECOMP_CALL(sub_170CAC25); /* 0x170CE644: call 0x170cac25 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE649: jmp 0x170ceb6d */
L_170CE64E:
    /* cmp eax, 0x51u */ /* 0x170CE64E: cmp eax, 0x51 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CE7D6; /* 0x170CE651: jg 0x170ce7d6 */
L_170CE657:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE7B6; /* 0x170CE657: je 0x170ce7b6 */
L_170CE65D:
    /* cmp eax, 0x3Eu */ /* 0x170CE65D: cmp eax, 0x3e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CE720; /* 0x170CE660: jg 0x170ce720 */
L_170CE666:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE700; /* 0x170CE666: je 0x170ce700 */
L_170CE66C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x33u; /* 0x170CE66C: sub eax, 0x33 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE6E0; /* 0x170CE66F: je 0x170ce6e0 */
L_170CE671:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE671: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE6C0; /* 0x170CE672: je 0x170ce6c0 */
L_170CE674:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x170CE674: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE6A0; /* 0x170CE677: je 0x170ce6a0 */
L_170CE679:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE679: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE67A: jne 0x170ceb91 */
L_170CE680:
    PUSH32(esp, 0x80u); /* 0x170CE680: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE685: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE68A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE68C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE68D: je 0x170ceb71 */
L_170CE693:
    PUSH32(esp, edi); /* 0x170CE693: push edi */
    ecx = eax; /* 0x170CE694: mov ecx, eax */
    RECOMP_CALL(sub_170CB097); /* 0x170CE696: call 0x170cb097 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE69B: jmp 0x170ceb6d */
L_170CE6A0:
    PUSH32(esp, 0x80u); /* 0x170CE6A0: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE6A5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE6AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE6AC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE6AD: je 0x170ceb71 */
L_170CE6B3:
    PUSH32(esp, edi); /* 0x170CE6B3: push edi */
    ecx = eax; /* 0x170CE6B4: mov ecx, eax */
    RECOMP_CALL(sub_170CB071); /* 0x170CE6B6: call 0x170cb071 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE6BB: jmp 0x170ceb6d */
L_170CE6C0:
    PUSH32(esp, 0x80u); /* 0x170CE6C0: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE6C5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE6CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE6CC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE6CD: je 0x170ceb71 */
L_170CE6D3:
    PUSH32(esp, edi); /* 0x170CE6D3: push edi */
    ecx = eax; /* 0x170CE6D4: mov ecx, eax */
    RECOMP_CALL(sub_170CAC71); /* 0x170CE6D6: call 0x170cac71 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE6DB: jmp 0x170ceb6d */
L_170CE6E0:
    PUSH32(esp, 0x80u); /* 0x170CE6E0: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE6E5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE6EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE6EC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE6ED: je 0x170ceb71 */
L_170CE6F3:
    PUSH32(esp, edi); /* 0x170CE6F3: push edi */
    ecx = eax; /* 0x170CE6F4: mov ecx, eax */
    RECOMP_CALL(sub_170CAC4B); /* 0x170CE6F6: call 0x170cac4b */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE6FB: jmp 0x170ceb6d */
L_170CE700:
    PUSH32(esp, 0x80u); /* 0x170CE700: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE705: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE70A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE70C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE70D: je 0x170ceb71 */
L_170CE713:
    PUSH32(esp, edi); /* 0x170CE713: push edi */
    ecx = eax; /* 0x170CE714: mov ecx, eax */
    RECOMP_CALL(sub_170CB0BD); /* 0x170CE716: call 0x170cb0bd */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE71B: jmp 0x170ceb6d */
L_170CE720:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3Fu; /* 0x170CE720: sub eax, 0x3f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE796; /* 0x170CE723: je 0x170ce796 */
L_170CE725:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE725: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE776; /* 0x170CE726: je 0x170ce776 */
L_170CE728:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170CE728: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE756; /* 0x170CE72B: je 0x170ce756 */
L_170CE72D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170CE72D: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE730: jne 0x170ceb91 */
L_170CE736:
    PUSH32(esp, 0x80u); /* 0x170CE736: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE73B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE740: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE742: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE743: je 0x170ceb71 */
L_170CE749:
    PUSH32(esp, edi); /* 0x170CE749: push edi */
    ecx = eax; /* 0x170CE74A: mov ecx, eax */
    RECOMP_CALL(sub_170CB416); /* 0x170CE74C: call 0x170cb416 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE751: jmp 0x170ceb6d */
L_170CE756:
    PUSH32(esp, 0x80u); /* 0x170CE756: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE75B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE762: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE763: je 0x170ceb71 */
L_170CE769:
    PUSH32(esp, edi); /* 0x170CE769: push edi */
    ecx = eax; /* 0x170CE76A: mov ecx, eax */
    RECOMP_CALL(sub_170CB12F); /* 0x170CE76C: call 0x170cb12f */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE771: jmp 0x170ceb6d */
L_170CE776:
    PUSH32(esp, 0x80u); /* 0x170CE776: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE77B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE780: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE782: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE783: je 0x170ceb71 */
L_170CE789:
    PUSH32(esp, edi); /* 0x170CE789: push edi */
    ecx = eax; /* 0x170CE78A: mov ecx, eax */
    RECOMP_CALL(sub_170CB109); /* 0x170CE78C: call 0x170cb109 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE791: jmp 0x170ceb6d */
L_170CE796:
    PUSH32(esp, 0x80u); /* 0x170CE796: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE79B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE7A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE7A2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE7A3: je 0x170ceb71 */
L_170CE7A9:
    PUSH32(esp, edi); /* 0x170CE7A9: push edi */
    ecx = eax; /* 0x170CE7AA: mov ecx, eax */
    RECOMP_CALL(sub_170CB0E3); /* 0x170CE7AC: call 0x170cb0e3 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE7B1: jmp 0x170ceb6d */
L_170CE7B6:
    PUSH32(esp, 0x80u); /* 0x170CE7B6: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE7BB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE7C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE7C2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE7C3: je 0x170ceb71 */
L_170CE7C9:
    PUSH32(esp, edi); /* 0x170CE7C9: push edi */
    ecx = eax; /* 0x170CE7CA: mov ecx, eax */
    RECOMP_CALL(sub_170CB416); /* 0x170CE7CC: call 0x170cb416 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE7D1: jmp 0x170ceb6d */
L_170CE7D6:
    /* cmp eax, 0x71u */ /* 0x170CE7D6: cmp eax, 0x71 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x71u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CE899; /* 0x170CE7D9: jg 0x170ce899 */
L_170CE7DF:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE879; /* 0x170CE7DF: je 0x170ce879 */
L_170CE7E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x52u; /* 0x170CE7E5: sub eax, 0x52 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE859; /* 0x170CE7E8: je 0x170ce859 */
L_170CE7EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Cu; /* 0x170CE7EA: sub eax, 0x1c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE839; /* 0x170CE7ED: je 0x170ce839 */
L_170CE7EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE7EF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE819; /* 0x170CE7F0: je 0x170ce819 */
L_170CE7F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE7F2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE7F3: jne 0x170ceb91 */
L_170CE7F9:
    PUSH32(esp, 0x80u); /* 0x170CE7F9: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE7FE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE803: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE805: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE806: je 0x170ceb71 */
L_170CE80C:
    PUSH32(esp, edi); /* 0x170CE80C: push edi */
    ecx = eax; /* 0x170CE80D: mov ecx, eax */
    RECOMP_CALL(sub_170CB462); /* 0x170CE80F: call 0x170cb462 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE814: jmp 0x170ceb6d */
L_170CE819:
    PUSH32(esp, 0x80u); /* 0x170CE819: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE81E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE823: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE825: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE826: je 0x170ceb71 */
L_170CE82C:
    PUSH32(esp, edi); /* 0x170CE82C: push edi */
    ecx = eax; /* 0x170CE82D: mov ecx, eax */
    RECOMP_CALL(sub_170CB43C); /* 0x170CE82F: call 0x170cb43c */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE834: jmp 0x170ceb6d */
L_170CE839:
    PUSH32(esp, 0x80u); /* 0x170CE839: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE83E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE845: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE846: je 0x170ceb71 */
L_170CE84C:
    PUSH32(esp, edi); /* 0x170CE84C: push edi */
    ecx = eax; /* 0x170CE84D: mov ecx, eax */
    RECOMP_CALL(sub_170CB3CA); /* 0x170CE84F: call 0x170cb3ca */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE854: jmp 0x170ceb6d */
L_170CE859:
    PUSH32(esp, 0x80u); /* 0x170CE859: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE85E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE863: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE865: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE866: je 0x170ceb71 */
L_170CE86C:
    PUSH32(esp, edi); /* 0x170CE86C: push edi */
    ecx = eax; /* 0x170CE86D: mov ecx, eax */
    RECOMP_CALL(sub_170CB4AE); /* 0x170CE86F: call 0x170cb4ae */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE874: jmp 0x170ceb6d */
L_170CE879:
    PUSH32(esp, 0x80u); /* 0x170CE879: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE87E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE883: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE885: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE886: je 0x170ceb71 */
L_170CE88C:
    PUSH32(esp, edi); /* 0x170CE88C: push edi */
    ecx = eax; /* 0x170CE88D: mov ecx, eax */
    RECOMP_CALL(sub_170CB488); /* 0x170CE88F: call 0x170cb488 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE894: jmp 0x170ceb6d */
L_170CE899:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x72u; /* 0x170CE899: sub eax, 0x72 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE90B; /* 0x170CE89C: je 0x170ce90b */
L_170CE89E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE89E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE8EB; /* 0x170CE89F: je 0x170ce8eb */
L_170CE8A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE8A1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CE8CB; /* 0x170CE8A2: je 0x170ce8cb */
L_170CE8A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CE8A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE8A5: jne 0x170ceb91 */
L_170CE8AB:
    PUSH32(esp, 0x80u); /* 0x170CE8AB: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE8B0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE8B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE8B7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE8B8: je 0x170ceb71 */
L_170CE8BE:
    PUSH32(esp, edi); /* 0x170CE8BE: push edi */
    ecx = eax; /* 0x170CE8BF: mov ecx, eax */
    RECOMP_CALL(sub_170CB3F0); /* 0x170CE8C1: call 0x170cb3f0 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE8C6: jmp 0x170ceb6d */
L_170CE8CB:
    PUSH32(esp, 0x80u); /* 0x170CE8CB: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE8D0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE8D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE8D7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE8D8: je 0x170ceb71 */
L_170CE8DE:
    PUSH32(esp, edi); /* 0x170CE8DE: push edi */
    ecx = eax; /* 0x170CE8DF: mov ecx, eax */
    RECOMP_CALL(sub_170CB4FA); /* 0x170CE8E1: call 0x170cb4fa */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE8E6: jmp 0x170ceb6d */
L_170CE8EB:
    PUSH32(esp, 0x80u); /* 0x170CE8EB: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE8F0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE8F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE8F7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE8F8: je 0x170ceb71 */
L_170CE8FE:
    PUSH32(esp, edi); /* 0x170CE8FE: push edi */
    ecx = eax; /* 0x170CE8FF: mov ecx, eax */
    RECOMP_CALL(sub_170CB4D4); /* 0x170CE901: call 0x170cb4d4 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE906: jmp 0x170ceb6d */
L_170CE90B:
    PUSH32(esp, 0x80u); /* 0x170CE90B: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE910: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE915: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE917: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE918: je 0x170ceb71 */
L_170CE91E:
    PUSH32(esp, edi); /* 0x170CE91E: push edi */
    ecx = eax; /* 0x170CE91F: mov ecx, eax */
    RECOMP_CALL(sub_170CB4AE); /* 0x170CE921: call 0x170cb4ae */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE926: jmp 0x170ceb6d */
L_170CE92B:
    PUSH32(esp, 0x100u); /* 0x170CE92B: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE930: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE937: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE938: je 0x170ceb71 */
L_170CE93E:
    PUSH32(esp, edi); /* 0x170CE93E: push edi */
    ecx = eax; /* 0x170CE93F: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CE941: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE946: jmp 0x170ceb6d */
L_170CE94B:
    ecx = 0x42475247u; /* 0x170CE94B: mov ecx, 0x42475247 */
    /* cmp eax, ecx */ /* 0x170CE950: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170CEA9F; /* 0x170CE952: jg 0x170cea9f */
L_170CE958:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEA7F; /* 0x170CE958: je 0x170cea7f */
L_170CE95E:
    /* cmp eax, 0x32545844u */ /* 0x170CE95E: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEA5F; /* 0x170CE963: je 0x170cea5f */
L_170CE969:
    /* cmp eax, 0x32595559u */ /* 0x170CE969: cmp eax, 0x32595559 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEA3F; /* 0x170CE96E: je 0x170cea3f */
L_170CE974:
    /* cmp eax, 0x33545844u */ /* 0x170CE974: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEA1F; /* 0x170CE979: je 0x170cea1f */
L_170CE97F:
    /* cmp eax, 0x34545844u */ /* 0x170CE97F: cmp eax, 0x34545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE9FF; /* 0x170CE984: je 0x170ce9ff */
L_170CE986:
    /* cmp eax, 0x35545844u */ /* 0x170CE986: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE9DF; /* 0x170CE98B: je 0x170ce9df */
L_170CE98D:
    /* cmp eax, 0x36314C41u */ /* 0x170CE98D: cmp eax, 0x36314c41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36314C41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CE9BF; /* 0x170CE992: je 0x170ce9bf */
L_170CE994:
    /* cmp eax, 0x36315220u */ /* 0x170CE994: cmp eax, 0x36315220 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36315220u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CE999: jne 0x170ceb91 */
L_170CE99F:
    PUSH32(esp, 0x80u); /* 0x170CE99F: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE9A4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE9A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE9AB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE9AC: je 0x170ceb71 */
L_170CE9B2:
    PUSH32(esp, edi); /* 0x170CE9B2: push edi */
    ecx = eax; /* 0x170CE9B3: mov ecx, eax */
    RECOMP_CALL(sub_170CB549); /* 0x170CE9B5: call 0x170cb549 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE9BA: jmp 0x170ceb6d */
L_170CE9BF:
    PUSH32(esp, 0x80u); /* 0x170CE9BF: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE9C4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE9C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE9CB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE9CC: je 0x170ceb71 */
L_170CE9D2:
    PUSH32(esp, edi); /* 0x170CE9D2: push edi */
    ecx = eax; /* 0x170CE9D3: mov ecx, eax */
    RECOMP_CALL(sub_170CB523); /* 0x170CE9D5: call 0x170cb523 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE9DA: jmp 0x170ceb6d */
L_170CE9DF:
    PUSH32(esp, 0x100u); /* 0x170CE9DF: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CE9E4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CE9E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CE9EB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CE9EC: je 0x170ceb71 */
L_170CE9F2:
    PUSH32(esp, edi); /* 0x170CE9F2: push edi */
    ecx = eax; /* 0x170CE9F3: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CE9F5: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CE9FA: jmp 0x170ceb6d */
L_170CE9FF:
    PUSH32(esp, 0x100u); /* 0x170CE9FF: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEA04: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEA09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEA0B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEA0C: je 0x170ceb71 */
L_170CEA12:
    PUSH32(esp, edi); /* 0x170CEA12: push edi */
    ecx = eax; /* 0x170CEA13: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEA15: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEA1A: jmp 0x170ceb6d */
L_170CEA1F:
    PUSH32(esp, 0x100u); /* 0x170CEA1F: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEA24: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEA29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEA2B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEA2C: je 0x170ceb71 */
L_170CEA32:
    PUSH32(esp, edi); /* 0x170CEA32: push edi */
    ecx = eax; /* 0x170CEA33: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEA35: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEA3A: jmp 0x170ceb6d */
L_170CEA3F:
    PUSH32(esp, 0xB0u); /* 0x170CEA3F: push 0xb0 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEA44: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEA49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEA4B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEA4C: je 0x170ceb71 */
L_170CEA52:
    PUSH32(esp, edi); /* 0x170CEA52: push edi */
    ecx = eax; /* 0x170CEA53: mov ecx, eax */
    RECOMP_CALL(sub_170CE2FC); /* 0x170CEA55: call 0x170ce2fc */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEA5A: jmp 0x170ceb6d */
L_170CEA5F:
    PUSH32(esp, 0x100u); /* 0x170CEA5F: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEA64: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEA69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEA6B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEA6C: je 0x170ceb71 */
L_170CEA72:
    PUSH32(esp, edi); /* 0x170CEA72: push edi */
    ecx = eax; /* 0x170CEA73: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEA75: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEA7A: jmp 0x170ceb6d */
L_170CEA7F:
    PUSH32(esp, 0xB0u); /* 0x170CEA7F: push 0xb0 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEA84: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEA89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEA8B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEA8C: je 0x170ceb71 */
L_170CEA92:
    PUSH32(esp, edi); /* 0x170CEA92: push edi */
    ecx = eax; /* 0x170CEA93: mov ecx, eax */
    RECOMP_CALL(sub_170CE2FC); /* 0x170CEA95: call 0x170ce2fc */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEA9A: jmp 0x170ceb6d */
L_170CEA9F:
    /* cmp eax, 0x47424752u */ /* 0x170CEA9F: cmp eax, 0x47424752 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47424752u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEB56; /* 0x170CEAA4: je 0x170ceb56 */
L_170CEAAA:
    /* cmp eax, 0x53344342u */ /* 0x170CEAAA: cmp eax, 0x53344342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53344342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEB3D; /* 0x170CEAAF: je 0x170ceb3d */
L_170CEAB5:
    /* cmp eax, 0x53354342u */ /* 0x170CEAB5: cmp eax, 0x53354342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53354342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEB24; /* 0x170CEABA: je 0x170ceb24 */
L_170CEABC:
    /* cmp eax, 0x55344342u */ /* 0x170CEABC: cmp eax, 0x55344342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x55344342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEB0B; /* 0x170CEAC1: je 0x170ceb0b */
L_170CEAC3:
    /* cmp eax, 0x55354342u */ /* 0x170CEAC3: cmp eax, 0x55354342 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x55354342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEAF2; /* 0x170CEAC8: je 0x170ceaf2 */
L_170CEACA:
    /* cmp eax, 0x59565955u */ /* 0x170CEACA: cmp eax, 0x59565955 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CEACF: jne 0x170ceb91 */
L_170CEAD5:
    PUSH32(esp, 0xB0u); /* 0x170CEAD5: push 0xb0 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEADA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEADF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEAE1: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEAE2: je 0x170ceb71 */
L_170CEAE8:
    PUSH32(esp, edi); /* 0x170CEAE8: push edi */
    ecx = eax; /* 0x170CEAE9: mov ecx, eax */
    RECOMP_CALL(sub_170CE2FC); /* 0x170CEAEB: call 0x170ce2fc */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEAF0: jmp 0x170ceb6d */
L_170CEAF2:
    PUSH32(esp, 0x100u); /* 0x170CEAF2: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEAF7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEAFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEAFE: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEAFF: je 0x170ceb71 */
L_170CEB01:
    PUSH32(esp, edi); /* 0x170CEB01: push edi */
    ecx = eax; /* 0x170CEB02: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEB04: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEB09: jmp 0x170ceb6d */
L_170CEB0B:
    PUSH32(esp, 0x100u); /* 0x170CEB0B: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEB10: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEB15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEB17: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEB18: je 0x170ceb71 */
L_170CEB1A:
    PUSH32(esp, edi); /* 0x170CEB1A: push edi */
    ecx = eax; /* 0x170CEB1B: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEB1D: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEB22: jmp 0x170ceb6d */
L_170CEB24:
    PUSH32(esp, 0x100u); /* 0x170CEB24: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEB29: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEB2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEB30: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEB31: je 0x170ceb71 */
L_170CEB33:
    PUSH32(esp, edi); /* 0x170CEB33: push edi */
    ecx = eax; /* 0x170CEB34: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEB36: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEB3B: jmp 0x170ceb6d */
L_170CEB3D:
    PUSH32(esp, 0x100u); /* 0x170CEB3D: push 0x100 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEB42: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEB47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEB49: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEB4A: je 0x170ceb71 */
L_170CEB4C:
    PUSH32(esp, edi); /* 0x170CEB4C: push edi */
    ecx = eax; /* 0x170CEB4D: mov ecx, eax */
    RECOMP_CALL(sub_170CE344); /* 0x170CEB4F: call 0x170ce344 */
    RECOMP_FLAGS_IN();
    goto L_170CEB6D; /* 0x170CEB54: jmp 0x170ceb6d */
L_170CEB56:
    PUSH32(esp, 0xB0u); /* 0x170CEB56: push 0xb0 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEB5B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEB60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEB62: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB71; /* 0x170CEB63: je 0x170ceb71 */
L_170CEB65:
    PUSH32(esp, edi); /* 0x170CEB65: push edi */
    ecx = eax; /* 0x170CEB66: mov ecx, eax */
    RECOMP_CALL(sub_170CE2FC); /* 0x170CEB68: call 0x170ce2fc */
    RECOMP_FLAGS_IN();
L_170CEB6D:
    esi = eax; /* 0x170CEB6D: mov esi, eax */
    goto L_170CEB73; /* 0x170CEB6F: jmp 0x170ceb73 */
L_170CEB71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170CEB71: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CEB73:
    /* test esi, esi */ /* 0x170CEB73: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEB91; /* 0x170CEB75: je 0x170ceb91 */
L_170CEB77:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x170CEB77: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEB95; /* 0x170CEB7B: je 0x170ceb95 */
L_170CEB7D:
    PUSH32(esp, edi); /* 0x170CEB7D: push edi */
    ecx = esi; /* 0x170CEB7E: mov ecx, esi */
    RECOMP_CALL(sub_170C4D63); /* 0x170CEB80: call 0x170c4d63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEB85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170CEB95; /* 0x170CEB87: jge 0x170ceb95 */
L_170CEB89:
    eax = MEM32(esi); /* 0x170CEB89: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170CEB8B: push 1 */
    ecx = esi; /* 0x170CEB8D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170CEB8F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_170CEB91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEB91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170CEBA4; /* 0x170CEB93: jmp 0x170ceba4 */
L_170CEB95:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x170CEB95: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEBA2; /* 0x170CEB99: je 0x170ceba2 */
L_170CEB9B:
    eax = MEM32(esi); /* 0x170CEB9B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x170CEB9D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170CEB9F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_170CEBA2:
    eax = esi; /* 0x170CEBA2: mov eax, esi */
L_170CEBA4:
    edi = POP32_VAL(esp); /* 0x170CEBA4: pop edi */
    esi = POP32_VAL(esp); /* 0x170CEBA5: pop esi */
    ebp = POP32_VAL(esp); /* 0x170CEBA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170CEBA7: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x170CE3CEu: goto L_170CE3CE;
      case 0x170CE3EEu: goto L_170CE3EE;
      case 0x170CE40Eu: goto L_170CE40E;
      case 0x170CE42Eu: goto L_170CE42E;
      case 0x170CE44Eu: goto L_170CE44E;
      case 0x170CE46Eu: goto L_170CE46E;
      case 0x170CE48Eu: goto L_170CE48E;
      case 0x170CE4AEu: goto L_170CE4AE;
      case 0x170CE4CEu: goto L_170CE4CE;
      case 0x170CE4EEu: goto L_170CE4EE;
      case 0x170CE50Eu: goto L_170CE50E;
      case 0x170CE52Eu: goto L_170CE52E;
      case 0x170CE54Eu: goto L_170CE54E;
      case 0x170CE56Eu: goto L_170CE56E;
      case 0x170CE58Eu: goto L_170CE58E;
      case 0x170CE5AEu: goto L_170CE5AE;
      case 0x170CE5CEu: goto L_170CE5CE;
      case 0x170CE5EEu: goto L_170CE5EE;
      case 0x170CE60Eu: goto L_170CE60E;
      case 0x170CEB91u: goto L_170CEB91;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170CEC07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CEC07u);

L_170CEC07:
    edi = edi; /* 0x170CEC07: mov edi, edi */
    PUSH32(esp, esi); /* 0x170CEC09: push esi */
    esi = ecx; /* 0x170CEC0A: mov esi, ecx */
    RECOMP_CALL(sub_1721BA18); /* 0x170CEC0C: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEC11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x170CEC13: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x170CEC16: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x20) = eax; /* 0x170CEC19: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x18) = eax; /* 0x170CEC1C: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x170CEC1F: mov dword ptr [esi + 0x1c], eax */
    eax = esi; /* 0x170CEC22: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170CEC24: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170CEC25: ret  */
    RECOMP_REGS_OUT();
}

void sub_170CEC2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CEC2Bu);

L_170CEC2B:
    edi = edi; /* 0x170CEC2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CEC2D: push ebp */
    ebp = esp; /* 0x170CEC2E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170CEC30: push ebx */
    PUSH32(esp, esi); /* 0x170CEC31: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170CEC32: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170CEC34: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170CEC35: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170CEC38: inc ebx */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x170CEC39: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x170CEC3B: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEC6A; /* 0x170CEC3D: je 0x170cec6a */
L_170CEC3F:
    /* cmp edi, ebx */ /* 0x170CEC3F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEC6A; /* 0x170CEC41: je 0x170cec6a */
L_170CEC43:
    PUSH32(esp, 2); /* 0x170CEC43: push 2 */
    ebx = POP32_VAL(esp); /* 0x170CEC45: pop ebx */
    /* cmp edi, ebx */ /* 0x170CEC46: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170CEC63; /* 0x170CEC48: jne 0x170cec63 */
L_170CEC4A:
    edi = MEM32(ebp + 0x8); /* 0x170CEC4A: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170CEC4D: push edi */
    PUSH32(esp, 0x400u); /* 0x170CEC4E: push 0x400 */
    RECOMP_CALL(sub_1702B9BA); /* 0x170CEC53: call 0x1702b9ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEC58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CEC9E; /* 0x170CEC5A: jl 0x170cec9e */
L_170CEC5C:
    eax = MEM32(edi); /* 0x170CEC5C: mov eax, dword ptr [edi] */
    MEM32(esi + 0x14) = eax; /* 0x170CEC5E: mov dword ptr [esi + 0x14], eax */
    goto L_170CEC99; /* 0x170CEC61: jmp 0x170cec99 */
L_170CEC63:
    eax = 0x80004005u; /* 0x170CEC63: mov eax, 0x80004005 */
    goto L_170CEC9E; /* 0x170CEC68: jmp 0x170cec9e */
L_170CEC6A:
    PUSH32(esp, 0x00010000u); /* 0x170CEC6A: push 0x10000 */
    RECOMP_CALL(sub_1721B01C); /* 0x170CEC6F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEC74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170CEC76: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x170CEC77: mov dword ptr [esi + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170CEC83; /* 0x170CEC7A: jne 0x170cec83 */
L_170CEC7C:
    eax = 0x8007000Eu; /* 0x170CEC7C: mov eax, 0x8007000e */
    goto L_170CEC9E; /* 0x170CEC81: jmp 0x170cec9e */
L_170CEC83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEC83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x170CEC85: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170CEC87: sete al */
    ecx = esi; /* 0x170CEC8A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x170CEC8C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CEC8D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721BB9E); /* 0x170CEC90: call 0x1721bb9e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEC95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CEC9E; /* 0x170CEC97: jl 0x170cec9e */
L_170CEC99:
    MEM32(esi + 0x10) = ebx; /* 0x170CEC99: mov dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEC9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CEC9E:
    edi = POP32_VAL(esp); /* 0x170CEC9E: pop edi */
    esi = POP32_VAL(esp); /* 0x170CEC9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CECA0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170CECA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170CECA2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170CECAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CECAAu);

L_170CECAA:
    edi = edi; /* 0x170CECAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CECAC: push ebp */
    ebp = esp; /* 0x170CECAD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170CECAF: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170CECB0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170CECB4: push ebx */
    ebx = ecx; /* 0x170CECB5: mov ebx, ecx */
    eax = MEM32(ebx + 0x10); /* 0x170CECB7: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x170CECBA: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170CECBD: push esi */
    PUSH32(esp, edi); /* 0x170CECBE: push edi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CEE43; /* 0x170CECBF: je 0x170cee43 */
L_170CECC5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CECC5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CED54; /* 0x170CECC6: je 0x170ced54 */
L_170CECCC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CECCC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CECD9; /* 0x170CECCD: je 0x170cecd9 */
L_170CECCF:
    eax = 0x80004005u; /* 0x170CECCF: mov eax, 0x80004005 */
    goto L_170CEE45; /* 0x170CECD4: jmp 0x170cee45 */
L_170CECD9:
    eax = MEM32(ebx + 0x14); /* 0x170CECD9: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(eax); /* 0x170CECDC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170CECDE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170CECDF: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x20); /* 0x170CECE2: mov edx, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebp + 0xC); /* 0x170CECE5: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170CECE8: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x170CECEA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CED23; /* 0x170CECEC: jbe 0x170ced23 */
L_170CECEE:
    eax = MEM32(ebx + 0x14); /* 0x170CECEE: mov eax, dword ptr [ebx + 0x14] */
    edx = MEM32(ebx + 0x20); /* 0x170CECF1: mov edx, dword ptr [ebx + 0x20] */
    esi = edx + ecx; /* 0x170CECF4: lea esi, [edx + ecx] */
    ecx = MEM32(eax); /* 0x170CECF7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170CECF9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170CECFA: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170CECFD: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170CECFD: shl eax, 1 */
    /* cmp esi, eax */ /* 0x170CECFF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170CED07; /* 0x170CED01: jbe 0x170ced07 */
L_170CED03:
    eax = esi; /* 0x170CED03: mov eax, esi */
    goto L_170CED12; /* 0x170CED05: jmp 0x170ced12 */
L_170CED07:
    eax = MEM32(ebx + 0x14); /* 0x170CED07: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(eax); /* 0x170CED0A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170CED0C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170CED0D: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170CED10: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170CED10: shl eax, 1 */
L_170CED12:
    ecx = MEM32(ebx + 0x14); /* 0x170CED12: mov ecx, dword ptr [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x170CED15: push eax */
    RECOMP_CALL(sub_1702B6FC); /* 0x170CED16: call 0x1702b6fc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CED1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170CEE45; /* 0x170CED1D: jl 0x170cee45 */
L_170CED23:
    eax = MEM32(ebx + 0x14); /* 0x170CED23: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(eax); /* 0x170CED26: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + 0x8); /* 0x170CED28: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x170CED2B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170CED2C: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170CED2F: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x170CED31: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0x20); /* 0x170CED34: add edi, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x170CED37: mov ecx, eax */
    edx = ecx; /* 0x170CED39: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CED3B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CED3B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CED3E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170CED40: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CED42: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CED45: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x170CED47: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x170CED4A: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax; /* 0x170CED4C: add dword ptr [ebx + 0x20], eax */
    _flag_k = FK_ADD;
    goto L_170CEE43; /* 0x170CED4F: jmp 0x170cee43 */
L_170CED54:
    edx = MEM32(ebx + 0x1C); /* 0x170CED54: mov edx, dword ptr [ebx + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x170CED57: mov ecx, dword ptr [ebp + 0xc] */
    esi = edx + ecx; /* 0x170CED5A: lea esi, [edx + ecx] */
    eax = 0x00010000u; /* 0x170CED5D: mov eax, 0x10000 */
    /* cmp esi, eax */ /* 0x170CED62: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170CED84; /* 0x170CED64: ja 0x170ced84 */
L_170CED66:
    edi = MEM32(ebx + 0x18); /* 0x170CED66: mov edi, dword ptr [ebx + 0x18] */
    esi = MEM32(ebp + 0x8); /* 0x170CED69: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x170CED6C: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CED6E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CED6E: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x170CED71: add edi, edx */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CED73: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170CED75: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CED77: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CED7A: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + eax; /* 0x170CED7C: add dword ptr [ebx + 0x1c], eax */
    _flag_k = FK_ADD;
    goto L_170CEE3E; /* 0x170CED7F: jmp 0x170cee3e */
L_170CED84:
    /* cmp edx, eax */ /* 0x170CED84: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170CEDB2; /* 0x170CED86: je 0x170cedb2 */
L_170CED88:
    /* test edx, edx */ /* 0x170CED88: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEDB2; /* 0x170CED8A: je 0x170cedb2 */
L_170CED8C:
    edi = MEM32(ebx + 0x18); /* 0x170CED8C: mov edi, dword ptr [ebx + 0x18] */
    esi = MEM32(ebp + 0x8); /* 0x170CED8F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x170CED92: add edi, edx */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x170CED94: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170CED96: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x170CED98: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CED9A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CED9A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CED9D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170CED9F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CEDA1: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CEDA4: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edx = MEM32(ebx + 0x1C); /* 0x170CEDA6: mov edx, dword ptr [ebx + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x170CEDA9: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170CEDAC: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170CEDAE: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_170CEDB5; /* 0x170CEDB0: jmp 0x170cedb5 */
L_170CEDB2:
    ecx = MEM32(ebp + 0x8); /* 0x170CEDB2: mov ecx, dword ptr [ebp + 8] */
L_170CEDB5:
    /* test edx, edx */ /* 0x170CEDB5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(0x170010E4); /* 0x170CEDB7: mov edi, dword ptr [0x170010e4] */
    MEM32(ebp + 0x8) = ecx; /* 0x170CEDBD: mov dword ptr [ebp + 8], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEDE9; /* 0x170CEDC0: je 0x170cede9 */
L_170CEDC2:
    PUSH32(esp, 0); /* 0x170CEDC2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CEDC4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170CEDC7: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x170CEDC8: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx)); /* 0x170CEDCB: push dword ptr [ebx] */
    RECOMP_ICALL(edi); /* 0x170CEDCD: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEDCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CECCF; /* 0x170CEDD1: je 0x170ceccf */
L_170CEDD7:
    eax = 0x00010000u; /* 0x170CEDD7: mov eax, 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax; /* 0x170CEDDC: add dword ptr [ebx + 0x20], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x1C); /* 0x170CEDDF: sub eax, dword ptr [ebx + 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0; /* 0x170CEDE2: and dword ptr [ebx + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170CEDE6: mov dword ptr [ebp - 4], eax */
L_170CEDE9:
    eax = MEM32(ebp + 0xC); /* 0x170CEDE9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4)); /* 0x170CEDEC: sub eax, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x170CEDEF: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x170CEDEF: shr eax, 0x10 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170CEE17; /* 0x170CEDF2: je 0x170cee17 */
L_170CEDF4:
    PUSH32(esp, 0); /* 0x170CEDF4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170CEDF6: push dword ptr [ebp + 0x10] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x170CEDF9: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x170CEDF9: shl eax, 0x10 */
    esi = eax; /* 0x170CEDFC: mov esi, eax */
    PUSH32(esp, esi); /* 0x170CEDFE: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170CEDFF: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx)); /* 0x170CEE02: push dword ptr [ebx] */
    RECOMP_ICALL(edi); /* 0x170CEE04: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEE06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CECCF; /* 0x170CEE08: je 0x170ceccf */
L_170CEE0E:
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + esi; /* 0x170CEE0E: add dword ptr [ebx + 0x20], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + esi; /* 0x170CEE11: add dword ptr [ebp - 4], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + esi; /* 0x170CEE14: add dword ptr [ebp + 8], esi */
    _flag_k = FK_ADD;
L_170CEE17:
    eax = MEM32(ebp + 0xC); /* 0x170CEE17: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x170CEE1A: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170CEE3B; /* 0x170CEE1D: jae 0x170cee3b */
L_170CEE1F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4)); /* 0x170CEE1F: sub eax, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    edi = MEM32(ebx + 0x18); /* 0x170CEE22: mov edi, dword ptr [ebx + 0x18] */
    esi = MEM32(ebp + 0x8); /* 0x170CEE25: mov esi, dword ptr [ebp + 8] */
    ecx = eax; /* 0x170CEE28: mov ecx, eax */
    edx = ecx; /* 0x170CEE2A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170CEE2C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170CEE2C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170CEE2F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170CEE31: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170CEE33: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170CEE36: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebx + 0x1C) = eax; /* 0x170CEE38: mov dword ptr [ebx + 0x1c], eax */
L_170CEE3B:
    eax = MEM32(ebp + 0xC); /* 0x170CEE3B: mov eax, dword ptr [ebp + 0xc] */
L_170CEE3E:
    ecx = MEM32(ebp + 0x10); /* 0x170CEE3E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x170CEE41: mov dword ptr [ecx], eax */
L_170CEE43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEE43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CEE45:
    edi = POP32_VAL(esp); /* 0x170CEE45: pop edi */
    esi = POP32_VAL(esp); /* 0x170CEE46: pop esi */
    ebx = POP32_VAL(esp); /* 0x170CEE47: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CEE48: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170CEE49: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170CEE51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170CEE51u);

L_170CEE51:
    edi = edi; /* 0x170CEE51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170CEE53: push ebp */
    ebp = esp; /* 0x170CEE54: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170CEE56: push ecx */
    PUSH32(esp, esi); /* 0x170CEE57: push esi */
    esi = ecx; /* 0x170CEE58: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x170CEE5A: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x170CEE5D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CEE96; /* 0x170CEE60: je 0x170cee96 */
L_170CEE62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CEE62: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CEE6F; /* 0x170CEE63: je 0x170cee6f */
L_170CEE65:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170CEE65: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170CEE96; /* 0x170CEE66: je 0x170cee96 */
L_170CEE68:
    eax = 0x80004005u; /* 0x170CEE68: mov eax, 0x80004005 */
    goto L_170CEE98; /* 0x170CEE6D: jmp 0x170cee98 */
L_170CEE6F:
    eax = MEM32(esi + 0x1C); /* 0x170CEE6F: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x170CEE72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEE96; /* 0x170CEE74: je 0x170cee96 */
L_170CEE76:
    PUSH32(esp, 0); /* 0x170CEE76: push 0 */
    ecx = ebp + (-0x4); /* 0x170CEE78: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170CEE7B: push ecx */
    PUSH32(esp, eax); /* 0x170CEE7C: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x170CEE7D: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi)); /* 0x170CEE80: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x170CEE82: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170CEE88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170CEE68; /* 0x170CEE8A: je 0x170cee68 */
L_170CEE8C:
    eax = MEM32(esi + 0x1C); /* 0x170CEE8C: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + eax; /* 0x170CEE8F: add dword ptr [esi + 0x20], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x170CEE92: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CEE96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170CEE96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170CEE98:
    esi = POP32_VAL(esp); /* 0x170CEE98: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170CEE99: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170CEE9A: ret  */
    RECOMP_REGS_OUT();
}
