#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170BBADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBADBu);

L_170BBADB:
    edi = edi; /* 0x170BBADB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBADD: push ebp */
    ebp = esp; /* 0x170BBADE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF28u; /* 0x170BBAE0: sub esp, 0xf28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BBAE6: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x170BBAE7: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BBAEA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170BBAEC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BBAEE: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBB46; /* 0x170BBAEF: jbe 0x170bbb46 */
L_170BBAF1:
    MEM32(ebp + (-0x4)) = ebx; /* 0x170BBAF1: mov dword ptr [ebp - 4], ebx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BBAF4: fild dword ptr [ebp - 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BBAFF; /* 0x170BBAF7: jge 0x170bbaff */
L_170BBAF9:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BBAF9: fadd dword ptr [0x1700142c] */
L_170BBAFF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170BBAFF: fstp dword ptr [ebp - 0x28] */
L_170BBB02:
    /* test ecx, ecx */ /* 0x170BBB02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + ecx * 4 + (-0xF28); /* 0x170BBB04: lea eax, [ebp + ecx*4 - 0xf28] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170BBB0B: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + ecx * 4 + (-0x7A8); /* 0x170BBB0E: lea eax, [ebp + ecx*4 - 0x7a8] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x170BBB15: mov dword ptr [ebp - 0x18], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x170BBB18: fild dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BBB1B: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BBB26; /* 0x170BBB1E: jge 0x170bbb26 */
L_170BBB20:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BBB20: fadd dword ptr [0x1700142c] */
L_170BBB26:
    _st[0] *= (double)*(float*)ADDR(0x1700608C); /* 0x170BBB26: fmul dword ptr [0x1700608c] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x170BBB2C: fdiv dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BBB2F: fstp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x4)); /* 0x170BBB32: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x14)); /* 0x170BBB35: mov edx, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170BBB38: fld dword ptr [ebp - 0x18] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170BBB3B: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170BBB3D: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BBB3F: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BBB41: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x170BBB42: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBB02; /* 0x170BBB44: jb 0x170bbb02 */
L_170BBB46:
    ecx = MEM32(ebp + 0x18); /* 0x170BBB46: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BBB49: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170BBB4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBBA4; /* 0x170BBB4D: jbe 0x170bbba4 */
L_170BBB4F:
    MEM32(ebp + (-0x4)) = ecx; /* 0x170BBB4F: mov dword ptr [ebp - 4], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BBB52: fild dword ptr [ebp - 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BBB5D; /* 0x170BBB55: jge 0x170bbb5d */
L_170BBB57:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BBB57: fadd dword ptr [0x1700142c] */
L_170BBB5D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BBB5D: fstp dword ptr [ebp - 4] */
L_170BBB60:
    /* test esi, esi */ /* 0x170BBB60: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + esi * 4 + (-0xB68); /* 0x170BBB62: lea eax, [ebp + esi*4 - 0xb68] */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BBB69: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + esi * 4 + (-0x3E8); /* 0x170BBB6C: lea eax, [ebp + esi*4 - 0x3e8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x170BBB73: mov dword ptr [ebp - 0x14], esi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x170BBB76: fild dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BBB79: mov dword ptr [ebp - 0x28], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BBB84; /* 0x170BBB7C: jge 0x170bbb84 */
L_170BBB7E:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BBB7E: fadd dword ptr [0x1700142c] */
L_170BBB84:
    _st[0] *= (double)*(float*)ADDR(0x17005D30); /* 0x170BBB84: fmul dword ptr [0x17005d30] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170BBB8A: fdiv dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BBB8D: fstp dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x170BBB90: mov eax, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x18)); /* 0x170BBB93: mov edx, dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170BBB96: fld dword ptr [ebp - 0x14] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170BBB99: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170BBB9B: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BBB9D: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BBB9F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ecx */ /* 0x170BBBA0: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBB60; /* 0x170BBBA2: jb 0x170bbb60 */
L_170BBBA4:
    eax = MEM32(ebp + 0x8); /* 0x170BBBA4: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170BBBA7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BBBA9: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x170BBBAC: push edi */
    fp_push(0.0); /* 0x170BBBAD: fldz  */
    edi = eax; /* 0x170BBBAF: mov edi, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BBBB1: fstp dword ptr [ebp - 0xc] */
    esi = ebp + (-0x10); /* 0x170BBBB4: lea esi, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170BBBB7: fld dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BBBBA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BBBBC: fst dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BBBBF: inc edx */
    _flag_k = FK_INC;
    fp_push(0.0); /* 0x170BBBC0: fldz  */
    MEM32(ebp + 0x10) = edx; /* 0x170BBBC2: mov dword ptr [ebp + 0x10], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBC7: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BBBC8: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x170BBBCB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BBBCD: fstp dword ptr [ebp - 0xc] */
    edi = eax + 0xC; /* 0x170BBBD0: lea edi, [eax + 0xc] */
    fp_push(1.0); /* 0x170BBBD3: fld1  */
    esi = ebp + (-0x10); /* 0x170BBBD5: lea esi, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BBBD8: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBDB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBDC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BBBDD: add eax, 0x18 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x170BBBE0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBBE2: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBC5C; /* 0x170BBBE3: jbe 0x170bbc5c */
L_170BBBE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BBBE5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170BBBE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBC54; /* 0x170BBBE9: jbe 0x170bbc54 */
L_170BBBEB:
    esi = MEM32(ebp + 0x10); /* 0x170BBBEB: mov esi, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x170BBBEE: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x170BBBEE: shl esi, 2 */
    fp_push(*(float*)&MEM32(ebp + esi + (-0xB68))); /* 0x170BBBF1: fld dword ptr [ebp + esi - 0xb68] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BBBF8: fst dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x170BBBFB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BBBFD: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + esi + (-0x3E8))); /* 0x170BBC00: fld dword ptr [ebp + esi - 0x3e8] */
    esi = eax + 0xC; /* 0x170BBC07: lea esi, [eax + 0xc] */
    MEM32(ebp + 0x8) = esi; /* 0x170BBC0A: mov dword ptr [ebp + 8], esi */
L_170BBC0D:
    fp_push(_st[0]); /* 0x170BBC0D: fld st(0) */
    edi = eax; /* 0x170BBC0F: mov edi, eax */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x7A8)); /* 0x170BBC11: fmul dword ptr [ebp + edx*4 - 0x7a8] */
    esi = ebp + (-0x24); /* 0x170BBC18: lea esi, [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BBC1B: add eax, 0x18 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BBC1E: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x170BBC21: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0xF28)); /* 0x170BBC23: fmul dword ptr [ebp + edx*4 - 0xf28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BBC2A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x170BBC2D: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[2]; /* 0x170BBC30: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BBC32: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170BBC35: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[2]; /* 0x170BBC38: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BBC3A: fstp dword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC3D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC3E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC3F: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x170BBC40: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x18u; /* 0x170BBC43: add dword ptr [ebp + 8], 0x18 */
    _flag_k = FK_ADD;
    esi = ebp + (-0x10); /* 0x170BBC47: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC4A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC4B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BBC4C: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x170BBC4D: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC4F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBC0D; /* 0x170BBC50: jb 0x170bbc0d */
L_170BBC52:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BBC52: fstp st(0) */
L_170BBC54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x170BBC54: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x170BBC57: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBBE5; /* 0x170BBC5A: jb 0x170bbbe5 */
L_170BBC5C:
    fp_push(0.0); /* 0x170BBC5C: fldz  */
    edi = eax; /* 0x170BBC5E: mov edi, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BBC60: fstp dword ptr [ebp - 0x24] */
    esi = ebp + (-0x24); /* 0x170BBC63: lea esi, [ebp - 0x24] */
    fp_push(0.0); /* 0x170BBC66: fldz  */
    edx = ebx + (-0x1); /* 0x170BBC68: lea edx, [ebx - 1] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BBC6B: fstp dword ptr [ebp - 0x20] */
    MEM32(ebp + 0x10) = edx; /* 0x170BBC6E: mov dword ptr [ebp + 0x10], edx */
    _st[0] = -_st[0]; /* 0x170BBC71: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BBC73: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC76: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x170BBC77: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC79: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC7A: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BBC7B: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x170BBC7E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BBC80: fstp dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = 0xBF800000u; /* 0x170BBC83: mov dword ptr [ebp - 0x1c], 0xbf800000 */
    edi = eax + 0xC; /* 0x170BBC8A: lea edi, [eax + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x170BBC8D: mov eax, dword ptr [ebp + 0xc] */
    esi = ebp + (-0x24); /* 0x170BBC90: lea esi, [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC93: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC94: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BBC95: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BBC96: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x170BBC98: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBCB6; /* 0x170BBC9A: jbe 0x170bbcb6 */
L_170BBC9C:
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) & 0); /* 0x170BBC9C: and word ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edi = esi + 0x2; /* 0x170BBCA0: lea edi, [esi + 2] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x170BBCA3: mov word ptr [eax + 2], di */
    edi = esi + 0x1; /* 0x170BBCA7: lea edi, [esi + 1] */
    MEM16(eax + 0x4) = (uint16_t)(LO16(edi)); /* 0x170BBCAA: mov word ptr [eax + 4], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBCAE: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BBCB1: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x170BBCB2: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBC9C; /* 0x170BBCB4: jb 0x170bbc9c */
L_170BBCB6:
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) & 0); /* 0x170BBCB6: and word ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BBCBA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BBCBC: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BBCBD: inc esi */
    _flag_k = FK_INC;
    MEM16(eax + 0x4) = (uint16_t)(LO16(esi)); /* 0x170BBCBE: mov word ptr [eax + 4], si */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edx)); /* 0x170BBCC2: mov word ptr [eax + 2], dx */
    esi = ecx + (-0x1); /* 0x170BBCC6: lea esi, [ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBCC9: add eax, 6 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x170BBCCC: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBD46; /* 0x170BBCCE: jbe 0x170bbd46 */
L_170BBCD0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170BBCD0: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = esi; /* 0x170BBCD1: mov dword ptr [ebp + 8], esi */
L_170BBCD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BBCD4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x170BBCD6: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edx + ebx; /* 0x170BBCD9: lea esi, [edx + ebx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBD1B; /* 0x170BBCDC: jbe 0x170bbd1b */
L_170BBCDE:
    edi = ecx + edx; /* 0x170BBCDE: lea edi, [ecx + edx] */
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x170BBCE1: mov word ptr [eax], di */
    edi = ecx + edx + 0x1; /* 0x170BBCE4: lea edi, [ecx + edx + 1] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x170BBCE8: mov word ptr [eax + 2], di */
    ebx = ecx + esi; /* 0x170BBCEC: lea ebx, [ecx + esi] */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ebx)); /* 0x170BBCEF: mov word ptr [eax + 4], bx */
    ebx = MEM32(ebp + 0x14); /* 0x170BBCF3: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBCF6: add eax, 6 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x170BBCF9: mov word ptr [eax], di */
    edi = edx + ebx + 0x1; /* 0x170BBCFC: lea edi, [edx + ebx + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x170BBD00: add edi, ecx */
    _flag_k = FK_ADD;
    MEM16(eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x170BBD02: mov word ptr [eax + 2], di */
    edi = ecx + esi; /* 0x170BBD06: lea edi, [ecx + esi] */
    MEM16(eax + 0x4) = (uint16_t)(LO16(edi)); /* 0x170BBD09: mov word ptr [eax + 4], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBD0D: add eax, 6 */
    _flag_k = FK_ADD;
    edi = ebx + (-0x1); /* 0x170BBD10: lea edi, [ebx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BBD13: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x170BBD14: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x170BBD16: mov dword ptr [ebp + 0x10], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBCDE; /* 0x170BBD19: jb 0x170bbcde */
L_170BBD1B:
    edi = edx + ecx; /* 0x170BBD1B: lea edi, [edx + ecx] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edx)); /* 0x170BBD1E: mov word ptr [eax + 2], dx */
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x170BBD22: mov word ptr [eax], di */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170BBD25: add ecx, esi */
    _flag_k = FK_ADD;
    MEM16(eax + 0x4) = (uint16_t)(LO16(ecx)); /* 0x170BBD27: mov word ptr [eax + 4], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBD2B: add eax, 6 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x170BBD2E: mov word ptr [eax], dx */
    MEM16(eax + 0x2) = (uint16_t)(LO16(esi)); /* 0x170BBD31: mov word ptr [eax + 2], si */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ecx)); /* 0x170BBD35: mov word ptr [eax + 4], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBD39: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x170BBD3C: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    edx = esi; /* 0x170BBD3F: mov edx, esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BBCD4; /* 0x170BBD41: jne 0x170bbcd4 */
L_170BBD43:
    ecx = MEM32(ebp + 0x18); /* 0x170BBD43: mov ecx, dword ptr [ebp + 0x18] */
L_170BBD46:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x170BBD46: add ecx, -2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x170BBD49: imul ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BBD4C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BBD4D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x170BBD4F: add ebx, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x170BBD51: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170BBD54: pop edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBD72; /* 0x170BBD55: jbe 0x170bbd72 */
L_170BBD57:
    esi = edx + ecx; /* 0x170BBD57: lea esi, [edx + ecx] */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x170BBD5A: mov word ptr [eax], si */
    esi = edx + ecx + 0x1; /* 0x170BBD5D: lea esi, [edx + ecx + 1] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(esi)); /* 0x170BBD61: mov word ptr [eax + 2], si */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ebx)); /* 0x170BBD65: mov word ptr [eax + 4], bx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BBD69: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BBD6C: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x170BBD6D: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBD57; /* 0x170BBD70: jb 0x170bbd57 */
L_170BBD72:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170BBD72: add edx, ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x170BBD74: pop esi */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ebx)); /* 0x170BBD75: mov word ptr [eax + 4], bx */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x170BBD79: mov word ptr [eax], dx */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x170BBD7C: mov word ptr [eax + 2], cx */
    ebx = POP32_VAL(esp); /* 0x170BBD80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BBD81: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BBD82: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BBD8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBD8Au);

L_170BBD8A:
    edi = edi; /* 0x170BBD8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBD8C: push ebp */
    ebp = esp; /* 0x170BBD8D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170BBD8F: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170BBD92: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BBD95: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(0x17005D0C)); /* 0x170BBD97: fld dword ptr [0x17005d0c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x170BBD9D: mov dword ptr [ebp - 4], ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BBDA0: fucompp  */
    fp_pop(); fp_pop();
    MEM32(ebp + (-0x8)) = ecx; /* 0x170BBDA2: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x170BBDA5: mov dword ptr [ebp - 0xc], ecx */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBDA8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BBDAA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BBDB4; /* 0x170BBDAD: jp 0x170bbdb4 */
L_170BBDAF:
    fp_push(1.0); /* 0x170BBDAF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170BBDB1: fstp dword ptr [ebp + 0xc] */
L_170BBDB4:
    PUSH32(esp, ebx); /* 0x170BBDB4: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170BBDB5: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x170BBDB8: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170BBDBB: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BBDC1; /* 0x170BBDBC: jne 0x170bbdc1 */
L_170BBDBE:
    PUSH32(esp, 8); /* 0x170BBDBE: push 8 */
    ebx = POP32_VAL(esp); /* 0x170BBDC0: pop ebx */
L_170BBDC1:
    edi = MEM32(ebp + 0x14); /* 0x170BBDC1: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x170BBDC4: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BBDCC; /* 0x170BBDC7: jne 0x170bbdcc */
L_170BBDC9:
    PUSH32(esp, 8); /* 0x170BBDC9: push 8 */
    edi = POP32_VAL(esp); /* 0x170BBDCB: pop edi */
L_170BBDCC:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x170BBDCC: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BBDF0; /* 0x170BBDCF: je 0x170bbdf0 */
L_170BBDD1:
    /* cmp MEM32(ebp + 0x18), ecx */ /* 0x170BBDD1: cmp dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BBDF0; /* 0x170BBDD4: je 0x170bbdf0 */
L_170BBDD6:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170BBDD6: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170BBDD9: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBDDF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BBDE1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170BBDF0; /* 0x170BBDE4: jnp 0x170bbdf0 */
L_170BBDE6:
    /* cmp ebx, 2 */ /* 0x170BBDE6: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBDF0; /* 0x170BBDE9: jb 0x170bbdf0 */
L_170BBDEB:
    /* cmp edi, 2 */ /* 0x170BBDEB: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BBDFA; /* 0x170BBDEE: jae 0x170bbdfa */
L_170BBDF0:
    eax = 0x8876086Cu; /* 0x170BBDF0: mov eax, 0x8876086c */
    goto L_170BBECB; /* 0x170BBDF5: jmp 0x170bbecb */
L_170BBDFA:
    eax = 0xF0u; /* 0x170BBDFA: mov eax, 0xf0 */
    /* cmp ebx, eax */ /* 0x170BBDFF: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBE05; /* 0x170BBE01: jbe 0x170bbe05 */
L_170BBE03:
    ebx = eax; /* 0x170BBE03: mov ebx, eax */
L_170BBE05:
    /* cmp edi, eax */ /* 0x170BBE05: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BBE0B; /* 0x170BBE07: jbe 0x170bbe0b */
L_170BBE09:
    edi = eax; /* 0x170BBE09: mov edi, eax */
L_170BBE0B:
    PUSH32(esp, esi); /* 0x170BBE0B: push esi */
    eax = edi + (-0x1); /* 0x170BBE0C: lea eax, [edi - 1] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x170BBE0F: imul eax, ebx */
    ecx = ebp + (-0x4); /* 0x170BBE12: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170BBE15: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BBE16: push dword ptr [ebp + 8] */
    esi = eax + eax; /* 0x170BBE19: lea esi, [eax + eax] */
    PUSH32(esp, 0x12u); /* 0x170BBE1C: push 0x12 */
    PUSH32(esp, 0x220u); /* 0x170BBE1E: push 0x220 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BBE23: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170BBE26: push eax */
    PUSH32(esp, esi); /* 0x170BBE27: push esi */
    RECOMP_CALL(sub_17065125); /* 0x170BBE28: call 0x17065125 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BBE2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BBECA; /* 0x170BBE2F: jl 0x170bbeca */
L_170BBE35:
    eax = MEM32(ebp + (-0x4)); /* 0x170BBE35: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BBE38: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xC); /* 0x170BBE3A: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x170BBE3D: push edx */
    PUSH32(esp, 0); /* 0x170BBE3E: push 0 */
    PUSH32(esp, eax); /* 0x170BBE40: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x170BBE41: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170BBE44: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BBE47: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BBE49: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BBE4C: push edx */
    PUSH32(esp, 0); /* 0x170BBE4D: push 0 */
    PUSH32(esp, eax); /* 0x170BBE4F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x170BBE50: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170BBE53: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BBE56: push edi */
    PUSH32(esp, ebx); /* 0x170BBE57: push ebx */
    PUSH32(esp, ecx); /* 0x170BBE58: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BBE59: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BBE5C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BBE5F: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_170BBADB); /* 0x170BBE62: call 0x170bbadb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170BBE67: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BBE6A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BBE6C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x170BBE6D: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170BBE70: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BBE73: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BBE75: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BBE76: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x1C); /* 0x170BBE79: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x170BBE7C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBEC0; /* 0x170BBE7E: je 0x170bbec0 */
L_170BBE80:
    eax = esi + esi * 2; /* 0x170BBE80: lea eax, [esi + esi*2] */
    PUSH32(esp, edi); /* 0x170BBE83: push edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170BBE84: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170BBE84: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170BBE87: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x170BBE88: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BBE8D: mov esi, eax */
    /* test esi, esi */ /* 0x170BBE8F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BBEA4; /* 0x170BBE91: jge 0x170bbea4 */
L_170BBE93:
    eax = MEM32(ebp + (-0x4)); /* 0x170BBE93: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170BBE96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBEA0; /* 0x170BBE98: je 0x170bbea0 */
L_170BBE9A:
    ecx = MEM32(eax); /* 0x170BBE9A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BBE9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BBE9D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170BBEA0:
    eax = esi; /* 0x170BBEA0: mov eax, esi */
    goto L_170BBECA; /* 0x170BBEA2: jmp 0x170bbeca */
L_170BBEA4:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BBEA4: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(edi); /* 0x170BBEA7: mov eax, dword ptr [edi] */
    esi = MEM32(ecx); /* 0x170BBEA9: mov esi, dword ptr [ecx] */
    ecx = MEM32(eax); /* 0x170BBEAB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BBEAD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BBEAE: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170BBEB1: push eax */
    PUSH32(esp, 0); /* 0x170BBEB2: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BBEB4: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(esi + 0x50)); /* 0x170BBEB7: call dword ptr [esi + 0x50] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BBEBA: mov esi, eax */
    /* test esi, esi */ /* 0x170BBEBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BBE93; /* 0x170BBEBE: jl 0x170bbe93 */
L_170BBEC0:
    eax = MEM32(ebp + (-0x4)); /* 0x170BBEC0: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x18); /* 0x170BBEC3: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ecx) = eax; /* 0x170BBEC6: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BBEC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BBECA:
    esi = POP32_VAL(esp); /* 0x170BBECA: pop esi */
L_170BBECB:
    edi = POP32_VAL(esp); /* 0x170BBECB: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BBECC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BBECD: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170BBECE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170BBED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBED6u);

L_170BBED6:
    edi = edi; /* 0x170BBED6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBED8: push ebp */
    ebp = esp; /* 0x170BBED9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BBEDB: push esi */
    PUSH32(esp, edi); /* 0x170BBEDC: push edi */
    edi = MEM32(ebp + 0x18); /* 0x170BBEDD: mov edi, dword ptr [ebp + 0x18] */
    esi = MEM32(edi + 0x1B8); /* 0x170BBEE0: mov esi, dword ptr [edi + 0x1b8] */
    /* cmp MEM32(esi), 0x32u */ /* 0x170BBEE6: cmp dword ptr [esi], 0x32 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BBF12; /* 0x170BBEE9: jl 0x170bbf12 */
L_170BBEEB:
    PUSH32(esp, 0x198u); /* 0x170BBEEB: push 0x198 */
    RECOMP_CALL(sub_1721B254); /* 0x170BBEF0: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BBEF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BBEF7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BBF2C; /* 0x170BBEF8: je 0x170bbf2c */
L_170BBEFA:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x170BBEFA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x194)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x194) = MEM32(eax + 0x194) & 0; /* 0x170BBEFD: and dword ptr [eax + 0x194], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x194) = eax; /* 0x170BBF04: mov dword ptr [esi + 0x194], eax */
    esi = eax; /* 0x170BBF0A: mov esi, eax */
    MEM32(edi + 0x1B8) = eax; /* 0x170BBF0C: mov dword ptr [edi + 0x1b8], eax */
L_170BBF12:
    eax = MEM32(esi); /* 0x170BBF12: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x170BBF14: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x170BBF17: fld qword ptr [ecx] */
    eax = esi + eax * 8 + 0x4; /* 0x170BBF19: lea eax, [esi + eax*8 + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BBF1D: fstp dword ptr [eax] */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x170BBF1F: fld qword ptr [ecx + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x170BBF22: mov ecx, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BBF25: fstp dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x170BBF28: inc dword ptr [esi] */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x170BBF2A: mov dword ptr [ecx], eax */
L_170BBF2C:
    edi = POP32_VAL(esp); /* 0x170BBF2C: pop edi */
    esi = POP32_VAL(esp); /* 0x170BBF2D: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BBF2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BBF2F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BBF37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBF37u);

L_170BBF37:
    edi = edi; /* 0x170BBF37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBF39: push ebp */
    ebp = esp; /* 0x170BBF3A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0x0001873Bu */ /* 0x170BBF3C: cmp dword ptr [ebp + 8], 0x1873b */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x0001873Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BBF57; /* 0x170BBF43: jb 0x170bbf57 */
L_170BBF45:
    /* cmp MEM32(ebp + 0x8), 0x0001873Cu */ /* 0x170BBF45: cmp dword ptr [ebp + 8], 0x1873c */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x0001873Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170BBF57; /* 0x170BBF4C: ja 0x170bbf57 */
L_170BBF4E:
    eax = MEM32(ebp + 0xC); /* 0x170BBF4E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x8007000Eu; /* 0x170BBF51: mov dword ptr [eax], 0x8007000e */
L_170BBF57:
    ebp = POP32_VAL(esp); /* 0x170BBF57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BBF58: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BBF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBF60u);

L_170BBF60:
    edi = edi; /* 0x170BBF60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBF62: push ebp */
    ebp = esp; /* 0x170BBF63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170BBF65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BBF68: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx)); /* 0x170BBF6A: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BBF6C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBF6E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BBF70: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BBF84; /* 0x170BBF73: jp 0x170bbf84 */
L_170BBF75:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BBF75: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170BBF78: fld dword ptr [edx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BBF7B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBF7D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BBF7F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170BBFDC; /* 0x170BBF82: jnp 0x170bbfdc */
L_170BBF84:
    fp_push(*(float*)&MEM32(esi)); /* 0x170BBF84: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BBF86: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BBF88: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBF8A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BBF8C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BBFA0; /* 0x170BBF8F: jp 0x170bbfa0 */
L_170BBF91:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x170BBF91: fld dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BBF94: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BBF97: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBF99: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BBF9B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170BBFDC; /* 0x170BBF9E: jnp 0x170bbfdc */
L_170BBFA0:
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BBFA0: fld dword ptr [ecx] */
    eax = ebp + (-0x8); /* 0x170BBFA2: lea eax, [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x170BBFA5: fsub dword ptr [edx] */
    PUSH32(esp, eax); /* 0x170BBFA7: push eax */
    eax = ebp + (-0x10); /* 0x170BBFA8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x170BBFAB: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BBFAC: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BBFAF: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x4); /* 0x170BBFB2: fsub dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BBFB5: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(esi)); /* 0x170BBFB8: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x170BBFBA: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BBFBC: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x170BBFBF: fld dword ptr [esi + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x170BBFC2: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BBFC5: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_170BDEE2); /* 0x170BBFC8: call 0x170bdee2 */
    RECOMP_FLAGS_IN();
    _st[0] = fabs(_st[0]); /* 0x170BBFCD: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006090)); /* 0x170BBFCF: fcomp qword ptr [0x17006090] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BBFD5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BBFD7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BBFE1; /* 0x170BBFDA: jp 0x170bbfe1 */
L_170BBFDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BBFDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BBFDE: inc eax */
    _flag_k = FK_INC;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BBFDF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BBFE0: ret  */
L_170BBFE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BBFE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BBFE3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BBFE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BBFEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BBFEAu);

L_170BBFEA:
    edi = edi; /* 0x170BBFEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BBFEC: push ebp */
    ebp = esp; /* 0x170BBFED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x170BBFEF: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170BBFF5: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BBFFA: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x118); /* 0x170BBFFD: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x170BC003: push eax */
    PUSH32(esp, 0xD4u); /* 0x170BC004: push 0xd4 */
    PUSH32(esp, ebx); /* 0x170BC009: push ebx */
    RECOMP_ICALL(MEM32(0x17001028)); /* 0x170BC00A: call dword ptr [0x17001028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC026; /* 0x170BC012: ja 0x170bc026 */
L_170BC014:
    PUSH32(esp, 0x170060B8u); /* 0x170BC014: push 0x170060b8 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BC019: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC01F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BC0A7; /* 0x170BC021: jmp 0x170bc0a7 */
L_170BC026:
    PUSH32(esp, edi); /* 0x170BC026: push edi */
    edi = MEM32(ebp + (-0xBC)); /* 0x170BC027: mov edi, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 6); /* 0x170BC02D: push 6 */
    PUSH32(esp, ebx); /* 0x170BC02F: push ebx */
    RECOMP_ICALL(MEM32(0x17001018)); /* 0x170BC030: call dword ptr [0x17001018] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x40); /* 0x170BC036: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x170BC039: push ecx */
    PUSH32(esp, 0x3Cu); /* 0x170BC03A: push 0x3c */
    PUSH32(esp, eax); /* 0x170BC03C: push eax */
    RECOMP_ICALL(MEM32(0x17001078)); /* 0x170BC03D: call dword ptr [0x17001078] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & 0; /* 0x170BC043: and dword ptr [ebp - 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x40); /* 0x170BC047: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170BC04A: push eax */
    MEM32(ebp + (-0x40)) = edi; /* 0x170BC04B: mov dword ptr [ebp - 0x40], edi */
    RECOMP_ICALL(MEM32(0x1700103C)); /* 0x170BC04E: call dword ptr [0x1700103c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170BC054: push eax */
    PUSH32(esp, ebx); /* 0x170BC055: push ebx */
    RECOMP_ICALL(MEM32(0x1700105C)); /* 0x170BC056: call dword ptr [0x1700105c] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x170BC05C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = edi; /* 0x170BC05E: mov dword ptr [ebp - 0x44], edi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x44))); /* 0x170BC061: fild dword ptr [ebp - 0x44] */
    MEM32(esi + 0x18) = eax; /* 0x170BC064: mov dword ptr [esi + 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BC06F; /* 0x170BC067: jge 0x170bc06f */
L_170BC069:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BC069: fadd dword ptr [0x1700142c] */
L_170BC06F:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170BC06F: fdivr dword ptr [0x17001424] */
    edi = POP32_VAL(esp); /* 0x170BC075: pop edi */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x170BC076: fst dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BC079: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x170BC07F: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BC082: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BC084: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BC086: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170BC09D; /* 0x170BC089: jnp 0x170bc09d */
L_170BC08B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BC08B: fstp st(0) */
    fp_push(*(float*)&MEM32(0x170060B0)); /* 0x170BC08D: fld dword ptr [0x170060b0] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + 0x4)); /* 0x170BC093: fcom dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BC096: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BC098: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BC0A2; /* 0x170BC09B: jp 0x170bc0a2 */
L_170BC09D:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170BC09D: fstp dword ptr [esi + 4] */
    goto L_170BC0A4; /* 0x170BC0A0: jmp 0x170bc0a4 */
L_170BC0A2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BC0A2: fstp st(0) */
L_170BC0A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC0A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BC0A6: inc eax */
    _flag_k = FK_INC;
L_170BC0A7:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BC0A7: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x170BC0AA: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC0AF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC0B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC0B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC0B6u);

L_170BC0B6:
    edi = edi; /* 0x170BC0B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC0B8: push ebp */
    ebp = esp; /* 0x170BC0B9: mov ebp, esp */
    eax = MEM32(esi + 0x1BC); /* 0x170BC0BB: mov eax, dword ptr [esi + 0x1bc] */
    /* test eax, eax */ /* 0x170BC0C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC0CB; /* 0x170BC0C3: je 0x170bc0cb */
L_170BC0C5:
    PUSH32(esp, eax); /* 0x170BC0C5: push eax */
    RECOMP_CALL(sub_170BDBD2); /* 0x170BC0C6: call 0x170bdbd2 */
    RECOMP_FLAGS_IN();
L_170BC0CB:
    eax = MEM32(esi + 0x18); /* 0x170BC0CB: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x170BC0CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC0E7; /* 0x170BC0D0: je 0x170bc0e7 */
L_170BC0D2:
    PUSH32(esp, eax); /* 0x170BC0D2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BC0D3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1700105C)); /* 0x170BC0D6: call dword ptr [0x1700105c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC0DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC0E7; /* 0x170BC0DE: je 0x170bc0e7 */
L_170BC0E0:
    PUSH32(esp, eax); /* 0x170BC0E0: push eax */
    RECOMP_ICALL(MEM32(0x17001060)); /* 0x170BC0E1: call dword ptr [0x17001060] */
    RECOMP_FLAGS_IN();
L_170BC0E7:
    /* cmp MEM32(esi + 0xC), 1 */ /* 0x170BC0E7: cmp dword ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC0FA; /* 0x170BC0EB: jne 0x170bc0fa */
L_170BC0ED:
    eax = MEM32(esi + 0x1C); /* 0x170BC0ED: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x170BC0F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC0FA; /* 0x170BC0F2: je 0x170bc0fa */
L_170BC0F4:
    PUSH32(esp, eax); /* 0x170BC0F4: push eax */
    RECOMP_CALL(sub_171C6A5F); /* 0x170BC0F5: call 0x171c6a5f */
    RECOMP_FLAGS_IN();
L_170BC0FA:
    PUSH32(esp, esi); /* 0x170BC0FA: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x170BC0FB: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC100: pop ecx */
    ebp = POP32_VAL(esp); /* 0x170BC101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC102: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC10A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC10Au);

L_170BC10A:
    edi = edi; /* 0x170BC10A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC10C: push ebp */
    ebp = esp; /* 0x170BC10D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BC10F: push ecx */
    eax = MEM32(edi + 0x8); /* 0x170BC110: mov eax, dword ptr [edi + 8] */
    /* cmp MEM32(edi + 0x4), eax */ /* 0x170BC113: cmp dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC131; /* 0x170BC116: jb 0x170bc131 */
L_170BC118:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x32u; /* 0x170BC118: add eax, 0x32 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x170BC11B: mov dword ptr [edi + 8], eax */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x170BC11E: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x170BC11E: shl eax, 5 */
    PUSH32(esp, eax); /* 0x170BC121: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x170BC122: push dword ptr [edi] */
    RECOMP_CALL(sub_1721B260); /* 0x170BC124: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC129: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC12B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BC12C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC19D; /* 0x170BC12D: je 0x170bc19d */
L_170BC12F:
    MEM32(edi) = eax; /* 0x170BC12F: mov dword ptr [edi], eax */
L_170BC131:
    PUSH32(esp, esi); /* 0x170BC131: push esi */
    esi = MEM32(edi + 0x4); /* 0x170BC132: mov esi, dword ptr [edi + 4] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x170BC135: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x170BC135: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi); /* 0x170BC138: add esi, dword ptr [edi] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x4B0u); /* 0x170BC13A: push 0x4b0 */
    RECOMP_CALL(sub_1721B254); /* 0x170BC13F: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC144: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC146: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BC147: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC19C; /* 0x170BC14A: je 0x170bc19c */
L_170BC14C:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170BC14C: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170BC150: push ebx */
    PUSH32(esp, 0x32u); /* 0x170BC151: push 0x32 */
    ebx = POP32_VAL(esp); /* 0x170BC153: pop ebx */
    PUSH32(esp, 0x190u); /* 0x170BC154: push 0x190 */
    MEM32(esi) = eax; /* 0x170BC159: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = ebx; /* 0x170BC15B: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_1721B254); /* 0x170BC15E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BC163: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x170BC165: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170BC167: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC177; /* 0x170BC168: jne 0x170bc177 */
L_170BC16A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BC16A: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B224); /* 0x170BC16D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC172: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC173: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BC19B; /* 0x170BC175: jmp 0x170bc19b */
L_170BC177:
    ecx = MEM32(ebp + 0x8); /* 0x170BC177: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = eax; /* 0x170BC17A: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = edx; /* 0x170BC17D: mov dword ptr [esi + 0x10], edx */
    MEM32(esi + 0x14) = ebx; /* 0x170BC180: mov dword ptr [esi + 0x14], ebx */
    ebx = MEM32(ecx); /* 0x170BC183: mov ebx, dword ptr [ecx] */
    MEM32(eax) = ebx; /* 0x170BC185: mov dword ptr [eax], ebx */
    ecx = MEM32(ecx + 0x4); /* 0x170BC187: mov ecx, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x170BC18A: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x170BC18D: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x170BC190: mov dword ptr [esi + 0x18], edx */
    MEM32(esi + 0x1C) = edx; /* 0x170BC193: mov dword ptr [esi + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 1; /* 0x170BC196: inc dword ptr [edi + 4] */
    _flag_k = FK_INC;
    eax = esi; /* 0x170BC199: mov eax, esi */
L_170BC19B:
    ebx = POP32_VAL(esp); /* 0x170BC19B: pop ebx */
L_170BC19C:
    esi = POP32_VAL(esp); /* 0x170BC19C: pop esi */
L_170BC19D:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC19D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC19E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC1A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC1A6u);

L_170BC1A6:
    edi = edi; /* 0x170BC1A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC1A8: push ebp */
    ebp = esp; /* 0x170BC1A9: mov ebp, esp */
    eax = MEM32(esi + 0x8); /* 0x170BC1AB: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x170BC1AE: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC1CF; /* 0x170BC1B1: jb 0x170bc1cf */
L_170BC1B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x32u; /* 0x170BC1B3: add eax, 0x32 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x170BC1B6: mov dword ptr [esi + 8], eax */
    eax = eax + eax * 2; /* 0x170BC1B9: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BC1BC: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BC1BC: shl eax, 3 */
    PUSH32(esp, eax); /* 0x170BC1BF: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x170BC1C0: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B260); /* 0x170BC1C2: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC1C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC1C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BC1CA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC1FF; /* 0x170BC1CB: je 0x170bc1ff */
L_170BC1CD:
    MEM32(esi) = eax; /* 0x170BC1CD: mov dword ptr [esi], eax */
L_170BC1CF:
    eax = MEM32(esi + 0x4); /* 0x170BC1CF: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x170BC1D2: mov ecx, dword ptr [esi] */
    eax = eax + eax * 2; /* 0x170BC1D4: lea eax, [eax + eax*2] */
    eax = ecx + eax * 8; /* 0x170BC1D7: lea eax, [ecx + eax*8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BC1DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BC1DC: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BC1DD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x170BC1DF: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax + 0x4) = ecx; /* 0x170BC1E2: mov dword ptr [eax + 4], ecx */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170BC1E5: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x170BC1E8: add edx, 3 */
    _flag_k = FK_ADD;
    MEM32(eax) = edx; /* 0x170BC1EB: mov dword ptr [eax], edx */
    ecx = MEM32(esi + 0x10); /* 0x170BC1ED: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x170BC1F0: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0; /* 0x170BC1F4: and dword ptr [eax + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170BC1F8: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + 0x8) = ecx; /* 0x170BC1F9: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x170BC1FC: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
L_170BC1FF:
    ebp = POP32_VAL(esp); /* 0x170BC1FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC200: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC208(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC208u);

L_170BC208:
    /* test edi, edi */ /* 0x170BC208: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC24F; /* 0x170BC20A: je 0x170bc24f */
L_170BC20C:
    PUSH32(esp, esi); /* 0x170BC20C: push esi */
    esi = MEM32(edi); /* 0x170BC20D: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x170BC20F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC247; /* 0x170BC211: je 0x170bc247 */
L_170BC213:
    eax = MEM32(edi + 0x4); /* 0x170BC213: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x170BC216: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC23F; /* 0x170BC218: je 0x170bc23f */
L_170BC21A:
    PUSH32(esp, ebx); /* 0x170BC21A: push ebx */
    ebx = eax; /* 0x170BC21B: mov ebx, eax */
L_170BC21D:
    eax = MEM32(esi); /* 0x170BC21D: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170BC21F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC22A; /* 0x170BC221: je 0x170bc22a */
L_170BC223:
    PUSH32(esp, eax); /* 0x170BC223: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x170BC224: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC229: pop ecx */
L_170BC22A:
    eax = MEM32(esi + 0xC); /* 0x170BC22A: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x170BC22D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC238; /* 0x170BC22F: je 0x170bc238 */
L_170BC231:
    PUSH32(esp, eax); /* 0x170BC231: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x170BC232: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC237: pop ecx */
L_170BC238:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x170BC238: add esi, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170BC23B: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BC21D; /* 0x170BC23C: jne 0x170bc21d */
L_170BC23E:
    ebx = POP32_VAL(esp); /* 0x170BC23E: pop ebx */
L_170BC23F:
    PUSH32(esp, MEM32(edi)); /* 0x170BC23F: push dword ptr [edi] */
    RECOMP_CALL(sub_1721B224); /* 0x170BC241: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC246: pop ecx */
L_170BC247:
    PUSH32(esp, edi); /* 0x170BC247: push edi */
    RECOMP_CALL(sub_1721B224); /* 0x170BC248: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC24D: pop ecx */
    esi = POP32_VAL(esp); /* 0x170BC24E: pop esi */
L_170BC24F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC24F: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC255(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC255u);

L_170BC255:
    eax = MEM32(esi + 0x14); /* 0x170BC255: mov eax, dword ptr [esi + 0x14] */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x170BC258: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC279; /* 0x170BC25B: jb 0x170bc279 */
L_170BC25D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x64u; /* 0x170BC25D: add eax, 0x64 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x170BC260: mov dword ptr [esi + 0x14], eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BC263: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BC263: shl eax, 3 */
    PUSH32(esp, eax); /* 0x170BC266: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x170BC267: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B260); /* 0x170BC26A: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC26F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC271: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BC272: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC276; /* 0x170BC273: jne 0x170bc276 */
L_170BC275:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC275: ret  */
L_170BC276:
    MEM32(esi + 0xC) = eax; /* 0x170BC276: mov dword ptr [esi + 0xc], eax */
L_170BC279:
    edx = MEM32(edi); /* 0x170BC279: mov edx, dword ptr [edi] */
    eax = MEM32(esi + 0x10); /* 0x170BC27B: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0xC); /* 0x170BC27E: mov ecx, dword ptr [esi + 0xc] */
    MEM32(ecx + eax * 8) = edx; /* 0x170BC281: mov dword ptr [ecx + eax*8], edx */
    edx = MEM32(edi + 0x4); /* 0x170BC284: mov edx, dword ptr [edi + 4] */
    MEM32(ecx + eax * 8 + 0x4) = edx; /* 0x170BC287: mov dword ptr [ecx + eax*8 + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x170BC28B: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x170BC28E: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC291: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BC293: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC294: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC29A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC29Au);

L_170BC29A:
    edi = edi; /* 0x170BC29A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC29C: push ebp */
    ebp = esp; /* 0x170BC29D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BC29F: push ecx */
    eax = MEM32(ecx); /* 0x170BC2A0: mov eax, dword ptr [ecx] */
    SET_LO16(edx, MEM16(eax)); /* 0x170BC2A2: mov dx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BC2A5: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x170BC2A8: mov dword ptr [ecx], eax */
    PUSH32(esp, esi); /* 0x170BC2AA: push esi */
    SET_LO16(esi, MEM16(eax)); /* 0x170BC2AB: mov si, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BC2AE: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x170BC2B1: mov dword ptr [ecx], eax */
    eax = (uint32_t)LO16(edx); /* 0x170BC2B3: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BC2B6: mov dword ptr [ebp - 4], eax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x170BC2B9: movsx eax, si */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BC2BC: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BC2BF: mov dword ptr [ebp - 4], eax */
    _st[0] *= (double)*(float*)ADDR(0x17006104); /* 0x170BC2C2: fmul dword ptr [0x17006104] */
    esi = POP32_VAL(esp); /* 0x170BC2C8: pop esi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BC2C9: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170BC2CC: faddp st(1) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC2CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC2CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC2D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC2D5u);

L_170BC2D5:
    edi = edi; /* 0x170BC2D5: mov edi, edi */
    PUSH32(esp, esi); /* 0x170BC2D7: push esi */
    esi = ecx; /* 0x170BC2D8: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x170BC2DA: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x170BC2DC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x170BC2E1: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170BC2E4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC2E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BC2EA: pop ecx */
    esi = POP32_VAL(esp); /* 0x170BC2EB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC2EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC2F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC2F2u);

L_170BC2F2:
    edi = edi; /* 0x170BC2F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC2F4: push ebp */
    ebp = esp; /* 0x170BC2F5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170BC2F7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170BC2FA: push ebx */
    ebx = ecx; /* 0x170BC2FB: mov ebx, ecx */
    MEM32(ebx + 0x14) = eax; /* 0x170BC2FD: mov dword ptr [ebx + 0x14], eax */
    eax = eax + eax * 2; /* 0x170BC300: lea eax, [eax + eax*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170BC303: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170BC303: shl eax, 1 */
    PUSH32(esp, edi); /* 0x170BC305: push edi */
    PUSH32(esp, eax); /* 0x170BC306: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BC307: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170BC30C: mov edi, eax */
    /* test edi, edi */ /* 0x170BC30E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC310: pop ecx */
    MEM32(ebp + 0x8) = edi; /* 0x170BC311: mov dword ptr [ebp + 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC31D; /* 0x170BC314: jne 0x170bc31d */
L_170BC316:
    eax = 0x8007000Eu; /* 0x170BC316: mov eax, 0x8007000e */
    goto L_170BC349; /* 0x170BC31B: jmp 0x170bc349 */
L_170BC31D:
    eax = MEM32(ebx + 0x10); /* 0x170BC31D: mov eax, dword ptr [ebx + 0x10] */
    ecx = eax + eax * 2; /* 0x170BC320: lea ecx, [eax + eax*2] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x170BC323: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x170BC323: shl ecx, 1 */
    eax = ecx; /* 0x170BC325: mov eax, ecx */
    PUSH32(esp, esi); /* 0x170BC327: push esi */
    esi = MEM32(ebx + 0xC); /* 0x170BC328: mov esi, dword ptr [ebx + 0xc] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BC32B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BC32B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC32E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170BC330: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BC332: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BC335: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x170BC337: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170BC33A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170BC33F: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x170BC342: pop ecx */
    MEM32(ebx + 0xC) = eax; /* 0x170BC343: mov dword ptr [ebx + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC346: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BC348: pop esi */
L_170BC349:
    edi = POP32_VAL(esp); /* 0x170BC349: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BC34A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BC34B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC34C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC354(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC354u);

L_170BC354:
    edi = edi; /* 0x170BC354: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC356: push ebp */
    ebp = esp; /* 0x170BC357: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x170BC359: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(ecx + 0xC); /* 0x170BC35C: mov edx, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x170BC35F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BC360: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170BC363: push edi */
    eax = eax + eax * 2; /* 0x170BC364: lea eax, [eax + eax*2] */
    edi = edx + eax * 2; /* 0x170BC367: lea edi, [edx + eax*2] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BC36A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x170BC36B: movsw word ptr es:[edi], word ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1; /* 0x170BC36D: inc dword ptr [ecx + 0x10] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x170BC370: pop edi */
    esi = POP32_VAL(esp); /* 0x170BC371: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BC372: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC373: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC37B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC37Bu);

L_170BC37B:
    edi = edi; /* 0x170BC37B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC37D: push ebp */
    ebp = esp; /* 0x170BC37E: mov ebp, esp */
    eax = ecx; /* 0x170BC380: mov eax, ecx */
    ecx = MEM32(eax + 0x10); /* 0x170BC382: mov ecx, dword ptr [eax + 0x10] */
    ecx = ecx + ecx * 2; /* 0x170BC385: lea ecx, [ecx + ecx*2] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x170BC388: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x170BC388: shl ecx, 1 */
    edx = ecx; /* 0x170BC38A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BC38C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BC38C: shr ecx, 2 */
    PUSH32(esp, esi); /* 0x170BC38F: push esi */
    esi = MEM32(eax + 0xC); /* 0x170BC390: mov esi, dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x170BC393: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170BC394: mov edi, dword ptr [ebp + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC397: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170BC399: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BC39B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BC39E: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x170BC3A0: mov ecx, dword ptr [eax + 4] */
    esi = MEM32(eax); /* 0x170BC3A3: mov esi, dword ptr [eax] */
    edi = MEM32(ebp + 0xC); /* 0x170BC3A5: mov edi, dword ptr [ebp + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BC3A8: lea ecx, [ecx + ecx*2] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x170BC3AB: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x170BC3AB: shl ecx, 3 */
    eax = ecx; /* 0x170BC3AE: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BC3B0: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BC3B0: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC3B3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170BC3B5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BC3B7: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BC3BA: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170BC3BC: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC3BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BC3BF: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BC3C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BC3C1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BC3C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC3C9u);

L_170BC3C9:
    edi = edi; /* 0x170BC3C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC3CB: push ebp */
    ebp = esp; /* 0x170BC3CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x170BC3CE: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BC3D1: push esi */
    PUSH32(esp, edi); /* 0x170BC3D2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BC3D3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BC3D5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BC3D7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BC3D9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x170BC3DB: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170BC3DE: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BC3E1: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x170BC3E4: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x170BC3E7: mov dword ptr [ebp - 0x18], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BC3FE; /* 0x170BC3EA: jbe 0x170bc3fe */
L_170BC3EC:
    eax = MEM32(ebp + 0xC); /* 0x170BC3EC: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x170BC3EF: mov eax, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x170BC3F2: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x4); /* 0x170BC3F5: add edx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BC3F8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x170BC3F9: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC3EC; /* 0x170BC3FC: jb 0x170bc3ec */
L_170BC3FE:
    eax = ebp + (-0x4); /* 0x170BC3FE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170BC401: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BC402: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x12u); /* 0x170BC405: push 0x12 */
    PUSH32(esp, 0x220u); /* 0x170BC407: push 0x220 */
    PUSH32(esp, edx); /* 0x170BC40C: push edx */
    PUSH32(esp, ecx); /* 0x170BC40D: push ecx */
    RECOMP_CALL(sub_17065125); /* 0x170BC40E: call 0x17065125 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170BC413: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170BC415: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_170BC4F4; /* 0x170BC418: jl 0x170bc4f4 */
L_170BC41E:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC41E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BC421: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xC); /* 0x170BC423: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x170BC426: push edx */
    PUSH32(esp, eax); /* 0x170BC427: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x170BC428: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170BC42B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170BC42D: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_170BC4F4; /* 0x170BC430: jl 0x170bc4f4 */
L_170BC436:
    eax = MEM32(ebp + (-0xC)); /* 0x170BC436: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x170BC439: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x170BC43B: push 0x800 */
    edx = ebp + (-0x1C); /* 0x170BC440: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x170BC443: push edx */
    PUSH32(esp, edi); /* 0x170BC444: push edi */
    PUSH32(esp, edi); /* 0x170BC445: push edi */
    PUSH32(esp, eax); /* 0x170BC446: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x170BC447: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170BC44A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170BC44C: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_170BC4F4; /* 0x170BC44F: jl 0x170bc4f4 */
L_170BC455:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC455: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BC458: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x18); /* 0x170BC45A: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x170BC45D: push edx */
    PUSH32(esp, edi); /* 0x170BC45E: push edi */
    PUSH32(esp, eax); /* 0x170BC45F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x170BC460: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170BC463: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x170BC465: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_170BC4F4; /* 0x170BC468: jl 0x170bc4f4 */
L_170BC46E:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x170BC46E: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x170BC471: mov eax, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x18)); /* 0x170BC474: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x170BC477: push ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BC478: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x170BC47B: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x170BC47E: mov dword ptr [ebp - 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BC4E1; /* 0x170BC481: jbe 0x170bc4e1 */
L_170BC483:
    eax = MEM32(ebp + 0xC); /* 0x170BC483: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BC486: push dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x170BC489: mov ecx, dword ptr [ebp - 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x170BC48C: mov ecx, dword ptr [eax + ecx*4] */
    edi = MEM32(ecx + 0x10); /* 0x170BC48F: mov edi, dword ptr [ecx + 0x10] */
    ebx = MEM32(ecx + 0x4); /* 0x170BC492: mov ebx, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x170BC495: push esi */
    RECOMP_CALL(sub_170BC37B); /* 0x170BC496: call 0x170bc37b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC49B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x170BC49D: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BC4F1; /* 0x170BC4A0: jl 0x170bc4f1 */
L_170BC4A2:
    /* test edi, edi */ /* 0x170BC4A2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC4BF; /* 0x170BC4A4: jbe 0x170bc4bf */
L_170BC4A6:
    eax = esi + 0x4; /* 0x170BC4A6: lea eax, [esi + 4] */
    edx = edi; /* 0x170BC4A9: mov edx, edi */
L_170BC4AB:
    ecx = MEM32(ebp + (-0x14)); /* 0x170BC4AB: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM16(eax + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax + (-0x4)) = (uint16_t)(MEM16(eax + (-0x4)) + LO16(ecx)); /* 0x170BC4AE: add word ptr [eax - 4], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(MEM16(eax + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax + (-0x2)) = (uint16_t)(MEM16(eax + (-0x2)) + LO16(ecx)); /* 0x170BC4B2: add word ptr [eax - 2], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax) = (uint16_t)(MEM16(eax) + LO16(ecx)); /* 0x170BC4B6: add word ptr [eax], cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x170BC4B9: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170BC4BC: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BC4AB; /* 0x170BC4BD: jne 0x170bc4ab */
L_170BC4BF:
    ecx = MEM32(ebp + (-0x10)); /* 0x170BC4BF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + ebx; /* 0x170BC4C2: add dword ptr [ebp - 0x14], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170BC4C5: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = edi + edi * 2; /* 0x170BC4C8: lea eax, [edi + edi*2] */
    esi = esi + eax * 2; /* 0x170BC4CB: lea esi, [esi + eax*2] */
    eax = ebx + ebx * 2; /* 0x170BC4CE: lea eax, [ebx + ebx*2] */
    eax = ecx + eax * 8; /* 0x170BC4D1: lea eax, [ecx + eax*8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BC4D4: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x170BC4D7: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x170BC4DA: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC483; /* 0x170BC4DD: jb 0x170bc483 */
L_170BC4DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BC4DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BC4E1:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC4E1: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x14); /* 0x170BC4E4: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x170BC4E7: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x170BC4E9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BC4EB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170BC4EC: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_170BC4F3; /* 0x170BC4EF: jmp 0x170bc4f3 */
L_170BC4F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BC4F1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BC4F3:
    ebx = POP32_VAL(esp); /* 0x170BC4F3: pop ebx */
L_170BC4F4:
    /* cmp MEM32(ebp + (-0x18)), edi */ /* 0x170BC4F4: cmp dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC502; /* 0x170BC4F7: je 0x170bc502 */
L_170BC4F9:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC4F9: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BC4FC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BC4FE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BC4FF: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
L_170BC502:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC502: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, edi */ /* 0x170BC505: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC512; /* 0x170BC507: je 0x170bc512 */
L_170BC509:
    ecx = MEM32(eax); /* 0x170BC509: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BC50B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BC50C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x170BC50F: mov dword ptr [ebp - 4], edi */
L_170BC512:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x170BC512: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC520; /* 0x170BC515: je 0x170bc520 */
L_170BC517:
    eax = MEM32(ebp + (-0xC)); /* 0x170BC517: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x170BC51A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BC51C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x170BC51D: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_170BC520:
    eax = MEM32(ebp + (-0xC)); /* 0x170BC520: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, edi */ /* 0x170BC523: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170BC525: pop edi */
    esi = POP32_VAL(esp); /* 0x170BC526: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC52F; /* 0x170BC527: je 0x170bc52f */
L_170BC529:
    ecx = MEM32(eax); /* 0x170BC529: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BC52B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BC52C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170BC52F:
    eax = MEM32(ebp + 0x8); /* 0x170BC52F: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC532: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BC533: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BC53B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC53Bu);

L_170BC53B:
    edi = edi; /* 0x170BC53B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC53D: push ebp */
    ebp = esp; /* 0x170BC53E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BC540: push esi */
    esi = ecx; /* 0x170BC541: mov esi, ecx */
    RECOMP_CALL(sub_170BC2D5); /* 0x170BC543: call 0x170bc2d5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170BC548: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC555; /* 0x170BC54C: je 0x170bc555 */
L_170BC54E:
    PUSH32(esp, esi); /* 0x170BC54E: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170BC54F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BC554: pop ecx */
L_170BC555:
    eax = esi; /* 0x170BC555: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BC557: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BC558: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC559: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC561(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC561u);

L_170BC561:
    edi = edi; /* 0x170BC561: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC563: push ebp */
    ebp = esp; /* 0x170BC564: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BC566: push ecx */
    PUSH32(esp, ecx); /* 0x170BC567: push ecx */
    PUSH32(esp, ebx); /* 0x170BC568: push ebx */
    PUSH32(esp, esi); /* 0x170BC569: push esi */
    PUSH32(esp, edi); /* 0x170BC56A: push edi */
    goto L_170BC5A2; /* 0x170BC56B: jmp 0x170bc5a2 */
L_170BC56D:
    ecx = MEM32(ebp + 0x14); /* 0x170BC56D: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0xFFFFu; /* 0x170BC570: add dword ptr [ebp + 0x18], 0xffff */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_170BC29A); /* 0x170BC577: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170BC57C: mov esi, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BC57F: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BC582: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BC585: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BC58A: fmul dword ptr [esi + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x170BC58D: mov ebx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x170BC590: mov esi, dword ptr [ebp + 0xc] */
    edi = ebp + (-0x8); /* 0x170BC593: lea edi, [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BC596: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_170BC255); /* 0x170BC599: call 0x170bc255 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC59E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC5B3; /* 0x170BC5A0: je 0x170bc5b3 */
L_170BC5A2:
    /* cmp MEM16(ebp + 0x18), 0 */ /* 0x170BC5A2: cmp word ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x18)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC56D; /* 0x170BC5A7: jne 0x170bc56d */
L_170BC5A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC5A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BC5AB: inc eax */
    _flag_k = FK_INC;
L_170BC5AC:
    edi = POP32_VAL(esp); /* 0x170BC5AC: pop edi */
    esi = POP32_VAL(esp); /* 0x170BC5AD: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BC5AE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC5AF: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BC5B0: ret 0x14 */
L_170BC5B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC5B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170BC5AC; /* 0x170BC5B5: jmp 0x170bc5ac */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BC5BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC5BCu);

L_170BC5BC:
    edi = edi; /* 0x170BC5BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC5BE: push ebp */
    ebp = esp; /* 0x170BC5BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170BC5C1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x170BC5C4: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170BC5CA: fld dword ptr [ebp + 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x14); /* 0x170BC5CD: fadd dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x170BC5D0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BC5D2: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x170BC5D5: fld dword ptr [ebp + 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x170BC5D8: fadd dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x170BC5DB: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BC5DD: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x24)); /* 0x170BC5E0: fld dword ptr [ebp + 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x170BC5E3: fadd dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x170BC5E6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BC5E8: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x28)); /* 0x170BC5EB: fld dword ptr [ebp + 0x28] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x20); /* 0x170BC5EE: fadd dword ptr [ebp + 0x20] */
    _st[0] *= _st[1]; /* 0x170BC5F1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BC5F3: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170BC5F6: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170BC5F9: fadd dword ptr [ebp - 0x10] */
    _st[0] *= _st[1]; /* 0x170BC5FC: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BC5FE: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170BC601: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170BC604: fadd dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x170BC607: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BC609: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BC60C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170BC60E: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x170BC611: fsub dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170BC614: fld dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x20); /* 0x170BC617: fsub dword ptr [ebp + 0x20] */
    fp_push(_st[0]); /* 0x170BC61A: fld st(0) */
    _st[0] *= _st[1]; /* 0x170BC61C: fmul st(1) */
    fp_push(_st[2]); /* 0x170BC61E: fld st(2) */
    _st[0] *= _st[3]; /* 0x170BC620: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170BC622: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x2C)); /* 0x170BC624: fcomp dword ptr [ebp + 0x2c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BC627: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BC629: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x170BC62B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BC62E: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC686; /* 0x170BC630: jne 0x170bc686 */
L_170BC632:
    fp_push(*(float*)&MEM32(ebp + 0x2C)); /* 0x170BC632: fld dword ptr [ebp + 0x2c] */
    PUSH32(esp, ecx); /* 0x170BC635: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BC636: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BC639: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BC63C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BC63F: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BC642: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BC645: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BC648: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BC64B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BC64E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BC651: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BC5BC); /* 0x170BC654: call 0x170bc5bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC69E; /* 0x170BC65B: je 0x170bc69e */
L_170BC65D:
    fp_push(*(float*)&MEM32(ebp + 0x2C)); /* 0x170BC65D: fld dword ptr [ebp + 0x2c] */
    PUSH32(esp, ecx); /* 0x170BC660: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BC661: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170BC664: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BC667: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BC66A: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x170BC66D: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BC670: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BC673: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BC676: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BC679: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BC67C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BC5BC); /* 0x170BC67F: call 0x170bc5bc */
    RECOMP_FLAGS_IN();
    goto L_170BC69A; /* 0x170BC684: jmp 0x170bc69a */
L_170BC686:
    PUSH32(esp, ebx); /* 0x170BC686: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170BC687: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170BC68A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170BC68B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BC68E: push edi */
    edi = ebp + 0x1C; /* 0x170BC68F: lea edi, [ebp + 0x1c] */
    RECOMP_CALL(sub_170BC255); /* 0x170BC692: call 0x170bc255 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170BC697: pop edi */
    esi = POP32_VAL(esp); /* 0x170BC698: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BC699: pop ebx */
L_170BC69A:
    /* test eax, eax */ /* 0x170BC69A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC6A2; /* 0x170BC69C: jne 0x170bc6a2 */
L_170BC69E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC69E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BC6A5; /* 0x170BC6A0: jmp 0x170bc6a5 */
L_170BC6A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BC6A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BC6A4: inc eax */
    _flag_k = FK_INC;
L_170BC6A5:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC6A5: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170BC6A6: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170BC6AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC6AEu);

L_170BC6AE:
    edi = edi; /* 0x170BC6AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC6B0: push ebp */
    ebp = esp; /* 0x170BC6B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170BC6B3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x170BC6B6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x170BC6B9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BC6BC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 2 */ /* 0x170BC6BE: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x170BC6C1: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x170BC6C4: mov dword ptr [ebp - 8], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC85F; /* 0x170BC6C7: jb 0x170bc85f */
L_170BC6CD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170BC6CD: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x170BC6CE: push ebx */
    ebx = MEM32(eax); /* 0x170BC6CF: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x170BC6D1: push esi */
    esi = ebx + 0x18; /* 0x170BC6D2: lea esi, [ebx + 0x18] */
    PUSH32(esp, edi); /* 0x170BC6D5: push edi */
    MEM32(ebp + (-0x10)) = esi; /* 0x170BC6D6: mov dword ptr [ebp - 0x10], esi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BC775; /* 0x170BC6D9: je 0x170bc775 */
L_170BC6DF:
    MEM32(ebp + (-0xC)) = edx; /* 0x170BC6DF: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x170BC6E2: mov dword ptr [ebp - 0x18], ecx */
L_170BC6E5:
    edi = MEM32(ebx + 0x4); /* 0x170BC6E5: mov edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BC6E8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 2 */ /* 0x170BC6EC: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC722; /* 0x170BC6EF: jb 0x170bc722 */
L_170BC6F1:
    /* cmp MEM32(ebx), 4 */ /* 0x170BC6F1: cmp dword ptr [ebx], 4 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC6FB; /* 0x170BC6F4: je 0x170bc6fb */
L_170BC6F6:
    /* cmp MEM32(esi), 4 */ /* 0x170BC6F6: cmp dword ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC722; /* 0x170BC6F9: jne 0x170bc722 */
L_170BC6FB:
    eax = MEM32(ebx + 0xC); /* 0x170BC6FB: mov eax, dword ptr [ebx + 0xc] */
    esi = MEM32(esi + 0xC); /* 0x170BC6FE: mov esi, dword ptr [esi + 0xc] */
    edx = eax + edi * 8 + (-0x10); /* 0x170BC701: lea edx, [eax + edi*8 - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170BC705: add esi, 8 */
    _flag_k = FK_ADD;
    ecx = edx + 0x8; /* 0x170BC708: lea ecx, [edx + 8] */
    RECOMP_CALL(sub_170BBF60); /* 0x170BC70B: call 0x170bbf60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x170BC712: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC722; /* 0x170BC715: je 0x170bc722 */
L_170BC717:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) - 1; /* 0x170BC717: dec dword ptr [ebx + 4] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = 1; /* 0x170BC71A: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BC721: dec edi */
    _flag_k = FK_DEC;
L_170BC722:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x170BC722: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC754; /* 0x170BC726: je 0x170bc754 */
L_170BC728:
    esi = MEM32(ebx + 0xC); /* 0x170BC728: mov esi, dword ptr [ebx + 0xc] */
    edx = esi; /* 0x170BC72B: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0xC)); /* 0x170BC72D: sub edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    ecx = edi * 8 + (-0x8); /* 0x170BC730: lea ecx, [edi*8 - 8] */
    MEM32(ebp + (-0x14)) = edx; /* 0x170BC737: mov dword ptr [ebp - 0x14], edx */
    edi = edx + 0x8; /* 0x170BC73A: lea edi, [edx + 8] */
    edx = ecx; /* 0x170BC73D: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BC73F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BC73F: shr ecx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170BC742: add esi, 8 */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC745: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170BC747: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BC749: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BC74C: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x14)); /* 0x170BC74E: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebx + 0xC) = ecx; /* 0x170BC751: mov dword ptr [ebx + 0xc], ecx */
L_170BC754:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170BC754: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC761; /* 0x170BC758: je 0x170bc761 */
L_170BC75A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170BC75A: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 8; /* 0x170BC75D: add dword ptr [ebp - 0xc], 8 */
    _flag_k = FK_ADD;
L_170BC761:
    esi = MEM32(ebp + (-0x10)); /* 0x170BC761: mov esi, dword ptr [ebp - 0x10] */
    ebx = esi; /* 0x170BC764: mov ebx, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x170BC766: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x170BC769: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = esi; /* 0x170BC76C: mov dword ptr [ebp - 0x10], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BC6E5; /* 0x170BC76F: jne 0x170bc6e5 */
L_170BC775:
    esi = MEM32(ebx + 0x4); /* 0x170BC775: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x170BC778: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BC77B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 2 */ /* 0x170BC77F: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(eax); /* 0x170BC782: mov edx, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = esi; /* 0x170BC784: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x10)) = edx; /* 0x170BC787: mov dword ptr [ebp - 0x10], edx */
    if (CMP_B(_flag_a, _flag_b)) goto L_170BC7E2; /* 0x170BC78A: jb 0x170bc7e2 */
L_170BC78C:
    /* cmp MEM32(ebx), 4 */ /* 0x170BC78C: cmp dword ptr [ebx], 4 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC796; /* 0x170BC78F: je 0x170bc796 */
L_170BC791:
    /* cmp MEM32(edx), 4 */ /* 0x170BC791: cmp dword ptr [edx], 4 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC7E2; /* 0x170BC794: jne 0x170bc7e2 */
L_170BC796:
    /* cmp esi, 2 */ /* 0x170BC796: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x170BC799: mov eax, dword ptr [ebx + 0xc] */
    edi = eax + esi * 8 + (-0x10); /* 0x170BC79C: lea edi, [eax + esi*8 - 0x10] */
    eax = edi + 0x8; /* 0x170BC7A0: lea eax, [edi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC7AC; /* 0x170BC7A3: jne 0x170bc7ac */
L_170BC7A5:
    /* test ecx, ecx */ /* 0x170BC7A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC7AC; /* 0x170BC7A7: je 0x170bc7ac */
L_170BC7A9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 8; /* 0x170BC7A9: sub edi, 8 */
    _flag_k = FK_CMP;
L_170BC7AC:
    esi = MEM32(edx + 0xC); /* 0x170BC7AC: mov esi, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170BC7AF: add esi, 8 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x170BC7B2: mov ecx, eax */
    edx = edi; /* 0x170BC7B4: mov edx, edi */
    RECOMP_CALL(sub_170BBF60); /* 0x170BC7B6: call 0x170bbf60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC7BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC7DC; /* 0x170BC7BD: je 0x170bc7dc */
L_170BC7BF:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) - 1; /* 0x170BC7BF: dec dword ptr [ebx + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x10)); /* 0x170BC7C2: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(edi); /* 0x170BC7C5: mov ecx, dword ptr [edi] */
    eax = MEM32(eax + 0xC); /* 0x170BC7C7: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x170BC7CA: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    MEM32(eax) = ecx; /* 0x170BC7CD: mov dword ptr [eax], ecx */
    ecx = MEM32(edi + 0x4); /* 0x170BC7CF: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x170BC7D2: mov dword ptr [ebp - 4], 1 */
    MEM32(eax + 0x4) = ecx; /* 0x170BC7D9: mov dword ptr [eax + 4], ecx */
L_170BC7DC:
    eax = MEM32(ebp + 0x8); /* 0x170BC7DC: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x170BC7DF: mov esi, dword ptr [ebp - 0xc] */
L_170BC7E2:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x170BC7E2: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC819; /* 0x170BC7E6: je 0x170bc819 */
L_170BC7E8:
    edi = MEM32(ebx + 0xC); /* 0x170BC7E8: mov edi, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x170BC7EB: mov ecx, dword ptr [ebp - 8] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x170BC7EE: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x170BC7EE: shl ecx, 3 */
    edx = edi; /* 0x170BC7F1: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x170BC7F3: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = esi * 8 + (-0x8); /* 0x170BC7F5: lea ecx, [esi*8 - 8] */
    esi = edi + 0x8; /* 0x170BC7FC: lea esi, [edi + 8] */
    MEM32(ebp + (-0x14)) = edx; /* 0x170BC7FF: mov dword ptr [ebp - 0x14], edx */
    edi = edx + 0x8; /* 0x170BC802: lea edi, [edx + 8] */
    edx = ecx; /* 0x170BC805: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BC807: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BC807: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC80A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x170BC80C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BC80E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BC811: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x14)); /* 0x170BC813: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebx + 0xC) = ecx; /* 0x170BC816: mov dword ptr [ebx + 0xc], ecx */
L_170BC819:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BC819: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x170BC81B: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC823; /* 0x170BC81E: je 0x170bc823 */
L_170BC820:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170BC820: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
L_170BC823:
    ecx = MEM32(ebp + (-0x8)); /* 0x170BC823: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - ecx; /* 0x170BC826: sub dword ptr [eax + 0x10], ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x4); /* 0x170BC829: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, ebx */ /* 0x170BC82C: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(eax); /* 0x170BC82E: mov edx, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC859; /* 0x170BC830: je 0x170bc859 */
L_170BC832:
    MEM32(ebp + 0x8) = ebx; /* 0x170BC832: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x170BC835: mov dword ptr [ebp - 0x18], ecx */
L_170BC838:
    /* cmp MEM32(edx + 0x4), 1 */ /* 0x170BC838: cmp dword ptr [edx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BC845; /* 0x170BC83C: jne 0x170bc845 */
L_170BC83E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BC83E: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x18u; /* 0x170BC83F: add dword ptr [ebp + 8], 0x18 */
    _flag_k = FK_ADD;
    goto L_170BC851; /* 0x170BC843: jmp 0x170bc851 */
L_170BC845:
    edi = edx; /* 0x170BC845: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x8); /* 0x170BC847: sub edi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, 6); /* 0x170BC84A: push 6 */
    ecx = POP32_VAL(esp); /* 0x170BC84C: pop ecx */
    esi = edx; /* 0x170BC84D: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BC84F: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_170BC851:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BC851: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x170BC854: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BC838; /* 0x170BC857: jne 0x170bc838 */
L_170BC859:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - ebx; /* 0x170BC859: sub dword ptr [eax + 4], ebx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170BC85C: pop edi */
    esi = POP32_VAL(esp); /* 0x170BC85D: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BC85E: pop ebx */
L_170BC85F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC85F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BC860: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BC868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC868u);

L_170BC868:
    edi = edi; /* 0x170BC868: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC86A: push ebp */
    ebp = esp; /* 0x170BC86B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BC86D: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BC86E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170BC872: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC892; /* 0x170BC874: je 0x170bc892 */
L_170BC876:
    /* cmp edi, 1 */ /* 0x170BC876: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BC892; /* 0x170BC879: je 0x170bc892 */
L_170BC87B:
    PUSH32(esp, 0x17006110u); /* 0x170BC87B: push 0x17006110 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BC880: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x170BC886: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_170BC99F; /* 0x170BC88D: jmp 0x170bc99f */
L_170BC892:
    PUSH32(esp, esi); /* 0x170BC892: push esi */
    PUSH32(esp, 1); /* 0x170BC893: push 1 */
    PUSH32(esp, 0x1C0u); /* 0x170BC895: push 0x1c0 */
    RECOMP_CALL(sub_1721B26C); /* 0x170BC89A: call 0x1721b26c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BC89F: mov esi, eax */
    /* test esi, esi */ /* 0x170BC8A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC8A3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BC8A4: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC8B3; /* 0x170BC8A5: jne 0x170bc8b3 */
L_170BC8A7:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170BC8A7: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170BC992; /* 0x170BC8AE: jmp 0x170bc992 */
L_170BC8B3:
    eax = MEM32(ebp + 0xC); /* 0x170BC8B3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x170BC8B6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170BC8B7: mov ebx, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = edi; /* 0x170BC8BA: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x4) = eax; /* 0x170BC8BD: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_170BBFEA); /* 0x170BC8C0: call 0x170bbfea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC8C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC8D5; /* 0x170BC8C7: jne 0x170bc8d5 */
L_170BC8C9:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170BC8C9: mov dword ptr [ebp - 4], 0x80004005 */
    goto L_170BC991; /* 0x170BC8D0: jmp 0x170bc991 */
L_170BC8D5:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170BC8D5: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170BC8D8: push edi */
    PUSH32(esp, ecx); /* 0x170BC8D9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BC8DA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BDA22); /* 0x170BC8DD: call 0x170bda22 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BC8E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1BC) = eax; /* 0x170BC8E4: mov dword ptr [esi + 0x1bc], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC8C9; /* 0x170BC8EA: je 0x170bc8c9 */
L_170BC8EC:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x170BC8EC: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_171C64A0); /* 0x170BC8F0: call 0x171c64a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BC8F5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BC8F7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BC907; /* 0x170BC8F9: jne 0x170bc907 */
L_170BC8FB:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170BC8FB: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170BC991; /* 0x170BC902: jmp 0x170bc991 */
L_170BC907:
    PUSH32(esp, 0x170BE0AFu); /* 0x170BC907: push 0x170be0af */
    PUSH32(esp, 0x0001870Au); /* 0x170BC90C: push 0x1870a */
    PUSH32(esp, ebx); /* 0x170BC911: push ebx */
    RECOMP_CALL(sub_171C667D); /* 0x170BC912: call 0x171c667d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17129E95u); /* 0x170BC917: push 0x17129e95 */
    PUSH32(esp, 0x00018706u); /* 0x170BC91C: push 0x18706 */
    PUSH32(esp, ebx); /* 0x170BC921: push ebx */
    RECOMP_CALL(sub_171C667D); /* 0x170BC922: call 0x171c667d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170BE10Fu); /* 0x170BC927: push 0x170be10f */
    PUSH32(esp, 0x0001870Bu); /* 0x170BC92C: push 0x1870b */
    PUSH32(esp, ebx); /* 0x170BC931: push ebx */
    RECOMP_CALL(sub_171C667D); /* 0x170BC932: call 0x171c667d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170BBF37u); /* 0x170BC937: push 0x170bbf37 */
    PUSH32(esp, 0x0001870Du); /* 0x170BC93C: push 0x1870d */
    PUSH32(esp, ebx); /* 0x170BC941: push ebx */
    RECOMP_CALL(sub_171C667D); /* 0x170BC942: call 0x171c667d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170BBED6u); /* 0x170BC947: push 0x170bbed6 */
    PUSH32(esp, 0x0001870Fu); /* 0x170BC94C: push 0x1870f */
    PUSH32(esp, ebx); /* 0x170BC951: push ebx */
    RECOMP_CALL(sub_171C667D); /* 0x170BC952: call 0x171c667d */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x170BC957: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170BC959: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x170BC95C: fstp qword ptr [esp + 0x10] */
    fp_push(0.0); /* 0x170BC960: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x170BC962: fstp qword ptr [esp + 8] */
    fp_push(0.0); /* 0x170BC966: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x170BC968: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x170BC96B: push ebx */
    RECOMP_CALL(sub_171C665A); /* 0x170BC96C: call 0x171c665a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17006108)); /* 0x170BC971: fld qword ptr [0x17006108] */
    PUSH32(esp, ecx); /* 0x170BC977: push ecx */
    PUSH32(esp, ecx); /* 0x170BC978: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x170BC979: fstp qword ptr [esp] */
    PUSH32(esp, 0x0001872Cu); /* 0x170BC97C: push 0x1872c */
    PUSH32(esp, ebx); /* 0x170BC981: push ebx */
    RECOMP_CALL(sub_171C655F); /* 0x170BC982: call 0x171c655f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x170BC987: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x1C) = ebx; /* 0x170BC98A: mov dword ptr [esi + 0x1c], ebx */
    MEM32(eax) = esi; /* 0x170BC98D: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BC98F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BC991:
    ebx = POP32_VAL(esp); /* 0x170BC991: pop ebx */
L_170BC992:
    /* test esi, esi */ /* 0x170BC992: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BC99E; /* 0x170BC994: je 0x170bc99e */
L_170BC996:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BC996: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BC0B6); /* 0x170BC999: call 0x170bc0b6 */
    RECOMP_FLAGS_IN();
L_170BC99E:
    esi = POP32_VAL(esp); /* 0x170BC99E: pop esi */
L_170BC99F:
    eax = MEM32(ebp + (-0x4)); /* 0x170BC99F: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BC9A2: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BC9A3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BC9AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC9ABu);

L_170BC9AB:
    eax = ecx; /* 0x170BC9AB: mov eax, ecx */
    fp_push(0.0); /* 0x170BC9AD: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BC9AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x170BC9B1: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x170BC9B3: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x170BC9B6: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x170BC9B9: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x170BC9BC: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x170BC9BF: mov dword ptr [eax + 0x14], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170BC9C2: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170BC9C5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x170BC9C7: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x170BC9CA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170BC9CC: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x170BC9CF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170BC9D1: fstp dword ptr [eax + 0x24] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BC9D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BC9DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BC9DAu);

L_170BC9DA:
    edi = edi; /* 0x170BC9DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BC9DC: push ebp */
    ebp = esp; /* 0x170BC9DD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170BC9DF: push ebx */
    PUSH32(esp, esi); /* 0x170BC9E0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BC9E1: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 2; /* 0x170BC9E4: lea eax, [esi + esi*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BC9E7: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BC9E7: shl eax, 3 */
    PUSH32(esp, edi); /* 0x170BC9EA: push edi */
    ebx = ecx; /* 0x170BC9EB: mov ebx, ecx */
    PUSH32(esp, eax); /* 0x170BC9ED: push eax */
    MEM32(ebx + 0x8) = esi; /* 0x170BC9EE: mov dword ptr [ebx + 8], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BC9F1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170BC9F6: mov edi, eax */
    /* test edi, edi */ /* 0x170BC9F8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BC9FA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCA10; /* 0x170BC9FB: je 0x170bca10 */
L_170BC9FD:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BC9FD: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x170BCA02: push esi */
    PUSH32(esp, 0x18u); /* 0x170BCA03: push 0x18 */
    PUSH32(esp, edi); /* 0x170BCA05: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x170BCA06: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = edi; /* 0x170BCA0B: mov dword ptr [ebp + 8], edi */
    goto L_170BCA14; /* 0x170BCA0E: jmp 0x170bca14 */
L_170BCA10:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170BCA10: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BCA14:
    edi = MEM32(ebp + 0x8); /* 0x170BCA14: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x170BCA17: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BCA22; /* 0x170BCA19: jne 0x170bca22 */
L_170BCA1B:
    eax = 0x8007000Eu; /* 0x170BCA1B: mov eax, 0x8007000e */
    goto L_170BCA4A; /* 0x170BCA20: jmp 0x170bca4a */
L_170BCA22:
    eax = MEM32(ebx + 0x4); /* 0x170BCA22: mov eax, dword ptr [ebx + 4] */
    esi = MEM32(ebx); /* 0x170BCA25: mov esi, dword ptr [ebx] */
    ecx = eax + eax * 2; /* 0x170BCA27: lea ecx, [eax + eax*2] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x170BCA2A: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x170BCA2A: shl ecx, 3 */
    eax = ecx; /* 0x170BCA2D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BCA2F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BCA2F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BCA32: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170BCA34: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BCA36: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170BCA39: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx)); /* 0x170BCA3B: push dword ptr [ebx] */
    RECOMP_CALL(sub_1721B010); /* 0x170BCA3D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170BCA42: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x170BCA45: mov dword ptr [ebx], eax */
    ecx = POP32_VAL(esp); /* 0x170BCA47: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCA48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BCA4A:
    edi = POP32_VAL(esp); /* 0x170BCA4A: pop edi */
    esi = POP32_VAL(esp); /* 0x170BCA4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BCA4C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BCA4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BCA4E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BCA56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCA56u);

L_170BCA56:
    edi = edi; /* 0x170BCA56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCA58: push ebp */
    ebp = esp; /* 0x170BCA59: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170BCA5B: push ebx */
    ebx = ecx; /* 0x170BCA5C: mov ebx, ecx */
    eax = MEM32(ebx + 0x4); /* 0x170BCA5E: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, esi); /* 0x170BCA61: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170BCA62: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170BCA65: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x170BCA67: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCA76; /* 0x170BCA6A: jbe 0x170bca76 */
L_170BCA6C:
    PUSH32(esp, eax); /* 0x170BCA6C: push eax */
    RECOMP_CALL(sub_170BC9DA); /* 0x170BCA6D: call 0x170bc9da */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCA72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCAE3; /* 0x170BCA74: jl 0x170bcae3 */
L_170BCA76:
    eax = MEM32(ebx + 0x10); /* 0x170BCA76: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebp + 0x10); /* 0x170BCA79: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170BCA7C: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x170BCA7E: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCA8F; /* 0x170BCA81: jbe 0x170bca8f */
L_170BCA83:
    PUSH32(esp, eax); /* 0x170BCA83: push eax */
    ecx = ebx; /* 0x170BCA84: mov ecx, ebx */
    RECOMP_CALL(sub_170BC2F2); /* 0x170BCA86: call 0x170bc2f2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCA8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCAE3; /* 0x170BCA8D: jl 0x170bcae3 */
L_170BCA8F:
    eax = MEM32(ebx + 0x4); /* 0x170BCA8F: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x14); /* 0x170BCA92: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BCA95: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170BCA97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x170BCA99: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x170BCA9B: mov eax, dword ptr [ebx + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCADE; /* 0x170BCA9E: jbe 0x170bcade */
L_170BCAA0:
    ecx = MEM32(ebp + 0x8); /* 0x170BCAA0: mov ecx, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x170BCAA3: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BCAA6: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BCAA6: shl eax, 3 */
    PUSH32(esp, edi); /* 0x170BCAA9: push edi */
L_170BCAAA:
    esi = MEM32(ebx); /* 0x170BCAAA: mov esi, dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ecx + edx * 8)); /* 0x170BCAAC: fld dword ptr [ecx + edx*8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + esi) = _v; } /* 0x170BCAAF: fstp dword ptr [eax + esi] */
    esi = MEM32(ebx); /* 0x170BCAB2: mov esi, dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ecx + edx * 8 + 0x4)); /* 0x170BCAB4: fld dword ptr [ecx + edx*8 + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BCAB8: inc edx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + esi + 0x4) = _v; } /* 0x170BCAB9: fstp dword ptr [eax + esi + 4] */
    esi = MEM32(ebx); /* 0x170BCABD: mov esi, dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebx + 0x24)); /* 0x170BCABF: fld dword ptr [ebx + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + esi + 0x8) = _v; } /* 0x170BCAC2: fstp dword ptr [eax + esi + 8] */
    esi = MEM32(ebx); /* 0x170BCAC6: mov esi, dword ptr [ebx] */
    edi = eax + esi + 0xC; /* 0x170BCAC8: lea edi, [eax + esi + 0xc] */
    esi = ebx + 0x18; /* 0x170BCACC: lea esi, [ebx + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCACF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCAD0: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BCAD1: add eax, 0x18 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x170BCAD4: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCAD7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BCAAA; /* 0x170BCAD8: jb 0x170bcaaa */
L_170BCADA:
    esi = MEM32(ebp + 0xC); /* 0x170BCADA: mov esi, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x170BCADD: pop edi */
L_170BCADE:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + esi; /* 0x170BCADE: add dword ptr [ebx + 4], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCAE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BCAE3:
    esi = POP32_VAL(esp); /* 0x170BCAE3: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BCAE4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BCAE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BCAE6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BCAEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCAEEu);

L_170BCAEE:
    edi = edi; /* 0x170BCAEE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCAF0: push ebp */
    ebp = esp; /* 0x170BCAF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170BCAF3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x170BCAF6: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170BCAFA: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x170BCAFF: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BCB00: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x170BCB03: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BCB06: push edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x170BCB07: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170BCB0A: mov ecx, dword ptr [ebp + 8] */
    edi = eax + (-0x2); /* 0x170BCB0D: lea edi, [eax - 2] */
    ebx = 0x170060A4u; /* 0x170BCB10: mov ebx, 0x170060a4 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BCB1C; /* 0x170BCB15: jne 0x170bcb1c */
L_170BCB17:
    ebx = 0x17006098u; /* 0x170BCB17: mov ebx, 0x17006098 */
L_170BCB1C:
    /* cmp eax, 3 */ /* 0x170BCB1C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BCB28; /* 0x170BCB1F: jae 0x170bcb28 */
L_170BCB21:
    eax = 0x80004005u; /* 0x170BCB21: mov eax, 0x80004005 */
    goto L_170BCBA1; /* 0x170BCB26: jmp 0x170bcba1 */
L_170BCB28:
    edx = ebp + (-0xC); /* 0x170BCB28: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x170BCB2B: push edx */
    PUSH32(esp, edi); /* 0x170BCB2C: push edi */
    PUSH32(esp, eax); /* 0x170BCB2D: push eax */
    PUSH32(esp, ecx); /* 0x170BCB2E: push ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x170BCB2F: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_170BCA56); /* 0x170BCB32: call 0x170bca56 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCB37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCBA1; /* 0x170BCB39: jl 0x170bcba1 */
L_170BCB3B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x170BCB3B: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170BCB3F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BCB41: push esi */
    esi = MEM32(ebp + (-0xC)); /* 0x170BCB42: mov esi, dword ptr [ebp - 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCB9E; /* 0x170BCB45: jbe 0x170bcb9e */
L_170BCB47:
    /* test MEM8(ebp + (-0x10)), 1 */ /* 0x170BCB47: test byte ptr [ebp - 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCB6C; /* 0x170BCB4B: je 0x170bcb6c */
L_170BCB4D:
    ecx = MEM32(ebx); /* 0x170BCB4D: mov ecx, dword ptr [ebx] */
    eax = esi + 0x1; /* 0x170BCB4F: lea eax, [esi + 1] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCB52: mov word ptr [ebp + ecx*2 - 0xc], ax */
    ecx = MEM32(ebx + 0x4); /* 0x170BCB57: mov ecx, dword ptr [ebx + 4] */
    eax = esi + 0x2; /* 0x170BCB5A: lea eax, [esi + 2] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCB5D: mov word ptr [ebp + ecx*2 - 0xc], ax */
    eax = MEM32(ebx + 0x8); /* 0x170BCB62: mov eax, dword ptr [ebx + 8] */
    MEM16(ebp + eax * 2 + (-0xC)) = (uint16_t)(LO16(esi)); /* 0x170BCB65: mov word ptr [ebp + eax*2 - 0xc], si */
    goto L_170BCB89; /* 0x170BCB6A: jmp 0x170bcb89 */
L_170BCB6C:
    eax = MEM32(ebx); /* 0x170BCB6C: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebx + 0x4); /* 0x170BCB6E: mov ecx, dword ptr [ebx + 4] */
    MEM16(ebp + eax * 2 + (-0xC)) = (uint16_t)(LO16(esi)); /* 0x170BCB71: mov word ptr [ebp + eax*2 - 0xc], si */
    eax = esi + 0x2; /* 0x170BCB76: lea eax, [esi + 2] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCB79: mov word ptr [ebp + ecx*2 - 0xc], ax */
    ecx = MEM32(ebx + 0x8); /* 0x170BCB7E: mov ecx, dword ptr [ebx + 8] */
    eax = esi + 0x1; /* 0x170BCB81: lea eax, [esi + 1] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCB84: mov word ptr [ebp + ecx*2 - 0xc], ax */
L_170BCB89:
    ecx = MEM32(ebp + (-0x14)); /* 0x170BCB89: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0xC); /* 0x170BCB8C: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170BCB8F: push eax */
    RECOMP_CALL(sub_170BC354); /* 0x170BCB90: call 0x170bc354 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x170BCB95: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BCB98: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BCB99: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BCB47; /* 0x170BCB9C: jb 0x170bcb47 */
L_170BCB9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCB9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BCBA0: pop esi */
L_170BCBA1:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BCBA1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170BCBA4: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BCBA5: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x170BCBA6: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BCBAB: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BCBAC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170BCBB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCBB4u);

L_170BCBB4:
    edi = edi; /* 0x170BCBB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCBB6: push ebp */
    ebp = esp; /* 0x170BCBB7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170BCBB9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170BCBBC: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x170BCBC1: push ebx */
    PUSH32(esp, esi); /* 0x170BCBC2: push esi */
    PUSH32(esp, edi); /* 0x170BCBC3: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BCBC4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x170BCBC7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x170BCBCA: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BCBCC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BCBCE: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x170BCBCF: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x170BCBD1: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x170BCBD5: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170BCBD8: mov ecx, dword ptr [ebp + 8] */
    edi = 0x170060A4u; /* 0x170BCBDB: mov edi, 0x170060a4 */
    ebx = eax; /* 0x170BCBE0: mov ebx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BCBE9; /* 0x170BCBE2: jne 0x170bcbe9 */
L_170BCBE4:
    edi = 0x17006098u; /* 0x170BCBE4: mov edi, 0x17006098 */
L_170BCBE9:
    eax = ebp + (-0xC); /* 0x170BCBE9: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170BCBEC: push eax */
    PUSH32(esp, ebx); /* 0x170BCBED: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BCBEE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x170BCBF1: push ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x170BCBF2: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_170BCA56); /* 0x170BCBF5: call 0x170bca56 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCBFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCC36; /* 0x170BCBFC: jl 0x170bcc36 */
L_170BCBFE:
    /* test ebx, ebx */ /* 0x170BCBFE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0xC)); /* 0x170BCC00: mov esi, dword ptr [ebp - 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCC34; /* 0x170BCC03: jbe 0x170bcc34 */
L_170BCC05:
    eax = MEM32(edi); /* 0x170BCC05: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x170BCC07: mov ecx, dword ptr [edi + 4] */
    MEM16(ebp + eax * 2 + (-0xC)) = (uint16_t)(LO16(esi)); /* 0x170BCC0A: mov word ptr [ebp + eax*2 - 0xc], si */
    eax = esi + 0x2; /* 0x170BCC0F: lea eax, [esi + 2] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCC12: mov word ptr [ebp + ecx*2 - 0xc], ax */
    ecx = MEM32(edi + 0x8); /* 0x170BCC17: mov ecx, dword ptr [edi + 8] */
    eax = esi + 0x1; /* 0x170BCC1A: lea eax, [esi + 1] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCC1D: mov word ptr [ebp + ecx*2 - 0xc], ax */
    ecx = MEM32(ebp + (-0x10)); /* 0x170BCC22: mov ecx, dword ptr [ebp - 0x10] */
    eax = ebp + (-0xC); /* 0x170BCC25: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170BCC28: push eax */
    RECOMP_CALL(sub_170BC354); /* 0x170BCC29: call 0x170bc354 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x170BCC2E: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170BCC31: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BCC05; /* 0x170BCC32: jne 0x170bcc05 */
L_170BCC34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCC34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BCC36:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BCC36: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170BCC39: pop edi */
    esi = POP32_VAL(esp); /* 0x170BCC3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BCC3B: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x170BCC3C: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BCC41: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BCC42: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170BCC4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCC4Au);

L_170BCC4A:
    edi = edi; /* 0x170BCC4A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCC4C: push ebp */
    ebp = esp; /* 0x170BCC4D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170BCC4F: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x170BCC52: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170BCC56: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x170BCC5B: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BCC5C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x170BCC5F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BCC62: push edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x170BCC63: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170BCC66: mov ecx, dword ptr [ebp + 8] */
    ebx = eax + (-0x2); /* 0x170BCC69: lea ebx, [eax - 2] */
    edi = 0x170060A4u; /* 0x170BCC6C: mov edi, 0x170060a4 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BCC78; /* 0x170BCC71: jne 0x170bcc78 */
L_170BCC73:
    edi = 0x17006098u; /* 0x170BCC73: mov edi, 0x17006098 */
L_170BCC78:
    /* cmp eax, 3 */ /* 0x170BCC78: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BCC84; /* 0x170BCC7B: jae 0x170bcc84 */
L_170BCC7D:
    eax = 0x80004005u; /* 0x170BCC7D: mov eax, 0x80004005 */
    goto L_170BCCD1; /* 0x170BCC82: jmp 0x170bccd1 */
L_170BCC84:
    edx = ebp + (-0x14); /* 0x170BCC84: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x170BCC87: push edx */
    PUSH32(esp, ebx); /* 0x170BCC88: push ebx */
    PUSH32(esp, eax); /* 0x170BCC89: push eax */
    PUSH32(esp, ecx); /* 0x170BCC8A: push ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x170BCC8B: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_170BCA56); /* 0x170BCC8E: call 0x170bca56 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCC93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCCD1; /* 0x170BCC95: jl 0x170bccd1 */
L_170BCC97:
    PUSH32(esp, esi); /* 0x170BCC97: push esi */
    esi = MEM32(ebp + (-0x14)); /* 0x170BCC98: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BCC9B: inc esi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x170BCC9C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCCCE; /* 0x170BCC9E: jbe 0x170bccce */
L_170BCCA0:
    eax = MEM32(edi); /* 0x170BCCA0: mov eax, dword ptr [edi] */
    SET_LO16(ecx, MEM16(ebp + (-0x14))); /* 0x170BCCA2: mov cx, word ptr [ebp - 0x14] */
    MEM16(ebp + eax * 2 + (-0xC)) = (uint16_t)(LO16(ecx)); /* 0x170BCCA6: mov word ptr [ebp + eax*2 - 0xc], cx */
    ecx = MEM32(edi + 0x4); /* 0x170BCCAB: mov ecx, dword ptr [edi + 4] */
    eax = esi + 0x1; /* 0x170BCCAE: lea eax, [esi + 1] */
    MEM16(ebp + ecx * 2 + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x170BCCB1: mov word ptr [ebp + ecx*2 - 0xc], ax */
    eax = MEM32(edi + 0x8); /* 0x170BCCB6: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x170BCCB9: mov ecx, dword ptr [ebp - 0x10] */
    MEM16(ebp + eax * 2 + (-0xC)) = (uint16_t)(LO16(esi)); /* 0x170BCCBC: mov word ptr [ebp + eax*2 - 0xc], si */
    eax = ebp + (-0xC); /* 0x170BCCC1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170BCCC4: push eax */
    RECOMP_CALL(sub_170BC354); /* 0x170BCCC5: call 0x170bc354 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BCCCA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170BCCCB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BCCA0; /* 0x170BCCCC: jne 0x170bcca0 */
L_170BCCCE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCCCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BCCD0: pop esi */
L_170BCCD1:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BCCD1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170BCCD4: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BCCD5: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x170BCCD6: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BCCDB: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BCCDC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170BCCE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCCE4u);

L_170BCCE4:
    edi = edi; /* 0x170BCCE4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCCE6: push ebp */
    ebp = esp; /* 0x170BCCE7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BCCE9: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x170BCCEA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BCCEE: push ebx */
    ebx = ecx; /* 0x170BCCEF: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0x170060A4u; /* 0x170BCCF1: mov dword ptr [ebp - 4], 0x170060a4 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BCD01; /* 0x170BCCF8: jne 0x170bcd01 */
L_170BCCFA:
    MEM32(ebp + (-0x4)) = 0x17006098u; /* 0x170BCCFA: mov dword ptr [ebp - 4], 0x17006098 */
L_170BCD01:
    eax = MEM32(ebx + 0x4); /* 0x170BCD01: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170BCD04: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x170BCD07: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCD1C; /* 0x170BCD0A: jbe 0x170bcd1c */
L_170BCD0C:
    PUSH32(esp, eax); /* 0x170BCD0C: push eax */
    ecx = ebx; /* 0x170BCD0D: mov ecx, ebx */
    RECOMP_CALL(sub_170BC9DA); /* 0x170BCD0F: call 0x170bc9da */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCD14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCE06; /* 0x170BCD16: jl 0x170bce06 */
L_170BCD1C:
    eax = MEM32(ebx + 0x10); /* 0x170BCD1C: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BCD1F: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x170BCD22: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCD37; /* 0x170BCD25: jbe 0x170bcd37 */
L_170BCD27:
    PUSH32(esp, eax); /* 0x170BCD27: push eax */
    ecx = ebx; /* 0x170BCD28: mov ecx, ebx */
    RECOMP_CALL(sub_170BC2F2); /* 0x170BCD2A: call 0x170bc2f2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCD2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCE06; /* 0x170BCD31: jl 0x170bce06 */
L_170BCD37:
    eax = MEM32(ebx + 0x4); /* 0x170BCD37: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(ebp + 0xC); /* 0x170BCD3A: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x170BCD3D: mov ecx, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x170BCD40: lea eax, [eax + eax*2] */
    PUSH32(esp, esi); /* 0x170BCD43: push esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BCD44: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BCD44: shl eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170BCD47: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = 4; /* 0x170BCD49: mov dword ptr [ebp + 0x10], 4 */
    PUSH32(esp, edi); /* 0x170BCD50: push edi */
L_170BCD51:
    edi = MEM32(ebx); /* 0x170BCD51: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170BCD53: add edi, eax */
    _flag_k = FK_ADD;
    esi = ecx + edx; /* 0x170BCD55: lea esi, [ecx + edx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD58: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD59: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD5A: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx); /* 0x170BCD5B: mov esi, dword ptr [ebx] */
    edi = eax + esi + 0xC; /* 0x170BCD5D: lea edi, [eax + esi + 0xc] */
    esi = edx; /* 0x170BCD61: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD63: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD64: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x170BCD65: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BCD68: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x170BCD6B: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCD6E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BCD51; /* 0x170BCD6F: jne 0x170bcd51 */
L_170BCD71:
    eax = MEM32(ebx + 0x10); /* 0x170BCD71: mov eax, dword ptr [ebx + 0x10] */
    edx = MEM32(ebx + 0xC); /* 0x170BCD74: mov edx, dword ptr [ebx + 0xc] */
    SET_LO16(esi, MEM16(ebx + 0x4)); /* 0x170BCD77: mov si, word ptr [ebx + 4] */
    ecx = eax + eax * 2; /* 0x170BCD7B: lea ecx, [eax + eax*2] */
    eax = MEM32(ebp + (-0x4)); /* 0x170BCD7E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x170BCD81: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x170BCD83: pop edi */
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(esi)); /* 0x170BCD84: mov word ptr [edx + ecx*2], si */
    ecx = MEM32(ebx + 0x10); /* 0x170BCD88: mov ecx, dword ptr [ebx + 0x10] */
    SET_LO16(edx, MEM16(ebx + 0x4)); /* 0x170BCD8B: mov dx, word ptr [ebx + 4] */
    esi = MEM32(ebx + 0xC); /* 0x170BCD8F: mov esi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCD92: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x170BCD95: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edx, LO16(edx) + 2); /* 0x170BCD98: add dx, 2 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCD9C: mov word ptr [esi + ecx*2], dx */
    ecx = MEM32(ebx + 0x10); /* 0x170BCDA0: mov ecx, dword ptr [ebx + 0x10] */
    SET_LO16(edx, MEM16(ebx + 0x4)); /* 0x170BCDA3: mov dx, word ptr [ebx + 4] */
    esi = MEM32(ebx + 0xC); /* 0x170BCDA7: mov esi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCDAA: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x170BCDAD: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(edx, LO16(edx) + 1); /* 0x170BCDB0: inc dx */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCDB2: mov word ptr [esi + ecx*2], dx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x170BCDB6: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebx + 0x10); /* 0x170BCDB9: mov ecx, dword ptr [ebx + 0x10] */
    SET_LO16(esi, MEM16(ebx + 0x4)); /* 0x170BCDBC: mov si, word ptr [ebx + 4] */
    edx = MEM32(ebx + 0xC); /* 0x170BCDC0: mov edx, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCDC3: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x170BCDC6: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(esi)); /* 0x170BCDC8: mov word ptr [edx + ecx*2], si */
    ecx = MEM32(ebx + 0x10); /* 0x170BCDCC: mov ecx, dword ptr [ebx + 0x10] */
    SET_LO16(edx, MEM16(ebx + 0x4)); /* 0x170BCDCF: mov dx, word ptr [ebx + 4] */
    esi = MEM32(ebx + 0xC); /* 0x170BCDD3: mov esi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCDD6: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x170BCDD9: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edx, LO16(edx) + 3); /* 0x170BCDDC: add dx, 3 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCDE0: mov word ptr [esi + ecx*2], dx */
    ecx = MEM32(ebx + 0x10); /* 0x170BCDE4: mov ecx, dword ptr [ebx + 0x10] */
    SET_LO16(edx, MEM16(ebx + 0x4)); /* 0x170BCDE7: mov dx, word ptr [ebx + 4] */
    ecx = ecx + ecx * 2; /* 0x170BCDEB: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x170BCDEE: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0xC); /* 0x170BCDF1: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edx, LO16(edx) + 2); /* 0x170BCDF4: add dx, 2 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCDF8: mov word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x170BCDFC: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 4; /* 0x170BCDFF: add dword ptr [ebx + 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCE03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BCE05: pop esi */
L_170BCE06:
    ebx = POP32_VAL(esp); /* 0x170BCE06: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BCE07: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BCE08: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170BCE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCE10u);

L_170BCE10:
    edi = edi; /* 0x170BCE10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCE12: push ebp */
    ebp = esp; /* 0x170BCE13: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BCE15: push ecx */
    PUSH32(esp, ebx); /* 0x170BCE16: push ebx */
    PUSH32(esp, esi); /* 0x170BCE17: push esi */
    PUSH32(esp, edi); /* 0x170BCE18: push edi */
    edi = MEM32(ebp + 0x10); /* 0x170BCE19: mov edi, dword ptr [ebp + 0x10] */
    eax = edi + (-0x2); /* 0x170BCE1C: lea eax, [edi - 2] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170BCE1F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170BCE1F: shr eax, 1 */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x170BCE21: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x170BCE25: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BCE27: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BCE36; /* 0x170BCE2A: je 0x170bce36 */
L_170BCE2C:
    esi = 0x170060A4u; /* 0x170BCE2C: mov esi, 0x170060a4 */
    MEM32(ebp + 0x14) = esi; /* 0x170BCE31: mov dword ptr [ebp + 0x14], esi */
    goto L_170BCE40; /* 0x170BCE34: jmp 0x170bce40 */
L_170BCE36:
    MEM32(ebp + 0x14) = 0x17006098u; /* 0x170BCE36: mov dword ptr [ebp + 0x14], 0x17006098 */
    esi = MEM32(ebp + 0x14); /* 0x170BCE3D: mov esi, dword ptr [ebp + 0x14] */
L_170BCE40:
    eax = MEM32(ebx + 0x4); /* 0x170BCE40: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170BCE43: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x170BCE45: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCE5A; /* 0x170BCE48: jbe 0x170bce5a */
L_170BCE4A:
    PUSH32(esp, eax); /* 0x170BCE4A: push eax */
    ecx = ebx; /* 0x170BCE4B: mov ecx, ebx */
    RECOMP_CALL(sub_170BC9DA); /* 0x170BCE4D: call 0x170bc9da */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCE52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCF40; /* 0x170BCE54: jl 0x170bcf40 */
L_170BCE5A:
    eax = MEM32(ebx + 0x10); /* 0x170BCE5A: mov eax, dword ptr [ebx + 0x10] */
    eax = edi + eax + (-0x2); /* 0x170BCE5D: lea eax, [edi + eax - 2] */
    /* cmp eax, MEM32(ebx + 0x14) */ /* 0x170BCE61: cmp eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCE76; /* 0x170BCE64: jbe 0x170bce76 */
L_170BCE66:
    PUSH32(esp, eax); /* 0x170BCE66: push eax */
    ecx = ebx; /* 0x170BCE67: mov ecx, ebx */
    RECOMP_CALL(sub_170BC2F2); /* 0x170BCE69: call 0x170bc2f2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BCE6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BCF40; /* 0x170BCE70: jl 0x170bcf40 */
L_170BCE76:
    /* test edi, edi */ /* 0x170BCE76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x170BCE78: mov eax, dword ptr [ebx + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCEB4; /* 0x170BCE7B: jbe 0x170bceb4 */
L_170BCE7D:
    edx = MEM32(ebp + 0xC); /* 0x170BCE7D: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x170BCE80: mov ecx, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x170BCE83: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BCE86: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BCE86: shl eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170BCE89: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x170BCE8B: mov dword ptr [ebp + 0xc], edi */
L_170BCE8E:
    edi = MEM32(ebx); /* 0x170BCE8E: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170BCE90: add edi, eax */
    _flag_k = FK_ADD;
    esi = ecx + edx; /* 0x170BCE92: lea esi, [ecx + edx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCE95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCE96: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCE97: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx); /* 0x170BCE98: mov esi, dword ptr [ebx] */
    edi = eax + esi + 0xC; /* 0x170BCE9A: lea edi, [eax + esi + 0xc] */
    esi = edx; /* 0x170BCE9E: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCEA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCEA1: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x170BCEA2: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BCEA5: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x170BCEA8: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BCEAB: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BCE8E; /* 0x170BCEAC: jne 0x170bce8e */
L_170BCEAE:
    esi = MEM32(ebp + 0x14); /* 0x170BCEAE: mov esi, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x10); /* 0x170BCEB1: mov edi, dword ptr [ebp + 0x10] */
L_170BCEB4:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BCEB4: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x170BCEB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x170BCEB9: mov eax, dword ptr [ebx + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BCF3B; /* 0x170BCEBC: jbe 0x170bcf3b */
L_170BCEBE:
    MEM32(ebp + 0x14) = ecx; /* 0x170BCEBE: mov dword ptr [ebp + 0x14], ecx */
L_170BCEC1:
    ecx = MEM32(ebx + 0x10); /* 0x170BCEC1: mov ecx, dword ptr [ebx + 0x10] */
    edx = MEM32(ebx + 0xC); /* 0x170BCEC4: mov edx, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCEC7: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi); /* 0x170BCECA: add ecx, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x170BCECC: mov word ptr [edx + ecx*2], ax */
    ecx = MEM32(ebx + 0x10); /* 0x170BCED0: mov ecx, dword ptr [ebx + 0x10] */
    edi = MEM32(ebx + 0xC); /* 0x170BCED3: mov edi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCED6: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x4); /* 0x170BCED9: add ecx, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    edx = eax + 0x3; /* 0x170BCEDC: lea edx, [eax + 3] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCEDF: mov word ptr [edi + ecx*2], dx */
    ecx = MEM32(ebx + 0x10); /* 0x170BCEE3: mov ecx, dword ptr [ebx + 0x10] */
    edi = MEM32(ebx + 0xC); /* 0x170BCEE6: mov edi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCEE9: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x8); /* 0x170BCEEC: add ecx, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    edx = eax + 0x1; /* 0x170BCEEF: lea edx, [eax + 1] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCEF2: mov word ptr [edi + ecx*2], dx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x170BCEF6: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebx + 0x10); /* 0x170BCEF9: mov ecx, dword ptr [ebx + 0x10] */
    edx = MEM32(ebx + 0xC); /* 0x170BCEFC: mov edx, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCEFF: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi); /* 0x170BCF02: add ecx, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x170BCF04: mov word ptr [edx + ecx*2], ax */
    ecx = MEM32(ebx + 0x10); /* 0x170BCF08: mov ecx, dword ptr [ebx + 0x10] */
    edi = MEM32(ebx + 0xC); /* 0x170BCF0B: mov edi, dword ptr [ebx + 0xc] */
    ecx = ecx + ecx * 2; /* 0x170BCF0E: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x4); /* 0x170BCF11: add ecx, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    edx = eax + 0x2; /* 0x170BCF14: lea edx, [eax + 2] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x170BCF17: mov word ptr [edi + ecx*2], dx */
    ecx = MEM32(ebx + 0x10); /* 0x170BCF1B: mov ecx, dword ptr [ebx + 0x10] */
    edi = MEM32(ebx + 0xC); /* 0x170BCF1E: mov edi, dword ptr [ebx + 0xc] */
    edx = ecx + ecx * 2; /* 0x170BCF21: lea edx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x8); /* 0x170BCF24: add edx, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    ecx = eax + 0x3; /* 0x170BCF27: lea ecx, [eax + 3] */
    MEM16(edi + edx * 2) = (uint16_t)(LO16(ecx)); /* 0x170BCF2A: mov word ptr [edi + edx*2], cx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x170BCF2E: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BCF31: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BCF32: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x170BCF33: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BCEC1; /* 0x170BCF36: jne 0x170bcec1 */
L_170BCF38:
    edi = MEM32(ebp + 0x10); /* 0x170BCF38: mov edi, dword ptr [ebp + 0x10] */
L_170BCF3B:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + edi; /* 0x170BCF3B: add dword ptr [ebx + 4], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCF3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BCF40:
    edi = POP32_VAL(esp); /* 0x170BCF40: pop edi */
    esi = POP32_VAL(esp); /* 0x170BCF41: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BCF42: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BCF43: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BCF44: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BCF4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCF4Cu);

L_170BCF4C:
    edi = edi; /* 0x170BCF4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCF4E: push ebp */
    ebp = esp; /* 0x170BCF4F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BCF51: push esi */
    PUSH32(esp, edi); /* 0x170BCF52: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BCF53: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BCF55: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), edi */ /* 0x170BCF57: cmp dword ptr [ecx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BCF84; /* 0x170BCF5A: jbe 0x170bcf84 */
L_170BCF5C:
    edx = MEM32(ebp + 0x8); /* 0x170BCF5C: mov edx, dword ptr [ebp + 8] */
L_170BCF5F:
    eax = MEM32(ecx); /* 0x170BCF5F: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170BCF61: add eax, edi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax)); /* 0x170BCF63: fld dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BCF65: inc esi */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170BCF66: fadd dword ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x170BCF68: add edi, 0x18 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BCF6B: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170BCF6D: fld dword ptr [edx + 4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x170BCF70: fadd dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BCF73: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170BCF76: fld dword ptr [edx + 8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x170BCF79: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170BCF7C: fstp dword ptr [eax + 8] */
    /* cmp esi, MEM32(ecx + 0x4) */ /* 0x170BCF7F: cmp esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BCF5F; /* 0x170BCF82: jb 0x170bcf5f */
L_170BCF84:
    edi = POP32_VAL(esp); /* 0x170BCF84: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BCF85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170BCF87: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BCF88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BCF89: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BCF91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BCF91u);

L_170BCF91:
    edi = edi; /* 0x170BCF91: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BCF93: push ebp */
    ebp = esp; /* 0x170BCF94: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x170BCF96: sub esp, 0x2c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BCF99: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170BCF9D: push ebx */
    PUSH32(esp, esi); /* 0x170BCF9E: push esi */
    esi = eax; /* 0x170BCF9F: mov esi, eax */
    eax = MEM32(esi + 0x10); /* 0x170BCFA1: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x170BCFA4: push edi */
    edi = ecx; /* 0x170BCFA5: mov edi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x170BCFA7: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + eax * 8 + (-0x8); /* 0x170BCFAA: lea eax, [ecx + eax*8 - 8] */
    ecx = MEM32(eax + 0x4); /* 0x170BCFAE: mov ecx, dword ptr [eax + 4] */
    ebx = MEM32(eax); /* 0x170BCFB1: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x170BCFB3: mov dword ptr [ebp - 0x20], ecx */
    ecx = ebx; /* 0x170BCFB6: mov ecx, ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x170BCFB8: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(eax + 0x4); /* 0x170BCFBB: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x170BCFBE: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x170BCFC1: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BCFC4: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x170BCFC7: movzx eax, word ptr [ebp + 0x10] */
    ecx = ebx; /* 0x170BCFCB: mov ecx, ebx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170BCFCD: mov dword ptr [ebp - 0x1c], ecx */
    ecx = eax + (-0x1); /* 0x170BCFD0: lea ecx, [eax - 1] */
    /* test ecx, ecx */ /* 0x170BCFD3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x170BCFD5: mov dword ptr [ebp - 0xc], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BD0A2; /* 0x170BCFD8: jle 0x170bd0a2 */
L_170BCFDE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x170BCFDE: add eax, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x170BCFE1: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x170BCFE5: mov dword ptr [ebp - 8], eax */
L_170BCFE8:
    ecx = MEM32(ebp + 0xC); /* 0x170BCFE8: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BCFEB: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BCFF0: fmul dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BCFF3: fstp dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BCFF6: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BCFFB: fmul dword ptr [edi + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x170BCFFE: mov eax, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x170BD001: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BD004: fstp dword ptr [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD021; /* 0x170BD007: jne 0x170bd021 */
L_170BD009:
    RECOMP_CALL(sub_170BC29A); /* 0x170BD009: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD00E: fmul dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BD011: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BD014: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD019: fmul dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BD01C: fstp dword ptr [ebp - 0x10] */
    goto L_170BD05B; /* 0x170BD01F: jmp 0x170bd05b */
L_170BD021:
    RECOMP_CALL(sub_170BC29A); /* 0x170BD021: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD026: fmul dword ptr [edi + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x170BD029: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BD02C: fstp dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BD02F: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD034: fmul dword ptr [edi + 8] */
    eax = ecx; /* 0x170BD037: mov eax, ecx */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x170BD039: fld dword ptr [0x1700141c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0xFFFFFFF8u; /* 0x170BD03F: add dword ptr [eax], -8 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x170BD042: fld dword ptr [ebp - 0x2c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x170BD045: fadd dword ptr [ebp - 0x1c] */
    _st[0] *= _st[1]; /* 0x170BD048: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BD04A: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x170BD04D: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BD04F: fadd dword ptr [ebp - 0x18] */
    _st[0] *= _st[1]; /* 0x170BD052: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BD054: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BD057: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BD059: fstp st(0) */
L_170BD05B:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x170BD05B: fld dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x170BD05E: push ecx */
    fp_push(_st[0]); /* 0x170BD05F: fld st(0) */
    _st[0] *= _st[1]; /* 0x170BD061: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD063: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BD066: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BD069: push dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BD06C: fstp st(0) */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x170BD06E: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x170BD071: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BD074: push dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x170BD077: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BD078: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x170BD07B: push esi */
    PUSH32(esp, edi); /* 0x170BD07C: push edi */
    RECOMP_CALL(sub_170BC5BC); /* 0x170BD07D: call 0x170bc5bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD082: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD0BA; /* 0x170BD084: je 0x170bd0ba */
L_170BD086:
    eax = MEM32(ebp + (-0x10)); /* 0x170BD086: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BD089: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x14)); /* 0x170BD08C: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170BD08F: mov dword ptr [ebp - 0x20], eax */
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x170BD092: movzx eax, word ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x170BD096: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x170BD099: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BCFE8; /* 0x170BD09C: jl 0x170bcfe8 */
L_170BD0A2:
    ebx = MEM32(ebp + 0x8); /* 0x170BD0A2: mov ebx, dword ptr [ebp + 8] */
    edi = ebp + (-0x14); /* 0x170BD0A5: lea edi, [ebp - 0x14] */
    RECOMP_CALL(sub_170BC255); /* 0x170BD0A8: call 0x170bc255 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170BD0AD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170BD0AF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170BD0B1: neg eax */
    _flag_k = FK_CMP;
L_170BD0B3:
    edi = POP32_VAL(esp); /* 0x170BD0B3: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD0B4: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BD0B5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BD0B6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BD0B7: ret 0xc */
L_170BD0BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD0BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170BD0B3; /* 0x170BD0BC: jmp 0x170bd0b3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BD0C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD0C3u);

L_170BD0C3:
    edi = edi; /* 0x170BD0C3: mov edi, edi */
    PUSH32(esp, ebx); /* 0x170BD0C5: push ebx */
    PUSH32(esp, esi); /* 0x170BD0C6: push esi */
    PUSH32(esp, edi); /* 0x170BD0C7: push edi */
    esi = ecx; /* 0x170BD0C8: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BD0CA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x170BD0CC: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x64u); /* 0x170BD0CF: push 0x64 */
    MEM32(esi + 0x10) = ebx; /* 0x170BD0D1: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x170BD0D4: mov dword ptr [esi + 4], ebx */
    edi = POP32_VAL(esp); /* 0x170BD0D7: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD0EF; /* 0x170BD0D8: jne 0x170bd0ef */
L_170BD0DA:
    PUSH32(esp, 0x258u); /* 0x170BD0DA: push 0x258 */
    MEM32(esi + 0x14) = edi; /* 0x170BD0DF: mov dword ptr [esi + 0x14], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BD0E2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170BD0E7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170BD0E9: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x170BD0EA: mov dword ptr [esi + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD122; /* 0x170BD0ED: je 0x170bd122 */
L_170BD0EF:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x170BD0EF: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD129; /* 0x170BD0F2: jne 0x170bd129 */
L_170BD0F4:
    PUSH32(esp, 0x960u); /* 0x170BD0F4: push 0x960 */
    MEM32(esi + 0x8) = edi; /* 0x170BD0F9: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BD0FC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD101: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BD103: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD105: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD11A; /* 0x170BD106: je 0x170bd11a */
L_170BD108:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BD108: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170BD10D: push edi */
    PUSH32(esp, 0x18u); /* 0x170BD10E: push 0x18 */
    PUSH32(esp, ebx); /* 0x170BD110: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x170BD111: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x170BD116: mov eax, ebx */
    goto L_170BD11C; /* 0x170BD118: jmp 0x170bd11c */
L_170BD11A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD11A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BD11C:
    /* test eax, eax */ /* 0x170BD11C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x170BD11E: mov dword ptr [esi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD129; /* 0x170BD120: jne 0x170bd129 */
L_170BD122:
    eax = 0x8007000Eu; /* 0x170BD122: mov eax, 0x8007000e */
    goto L_170BD12B; /* 0x170BD127: jmp 0x170bd12b */
L_170BD129:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD129: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BD12B:
    edi = POP32_VAL(esp); /* 0x170BD12B: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD12C: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BD12D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BD12E: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BD134(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD134u);

L_170BD134:
    edi = edi; /* 0x170BD134: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD136: push ebp */
    ebp = esp; /* 0x170BD137: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170BD139: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BD13C: push ebx */
    ebx = eax; /* 0x170BD13D: mov ebx, eax */
    PUSH32(esp, esi); /* 0x170BD13F: push esi */
    esi = MEM32(ebx); /* 0x170BD140: mov esi, dword ptr [ebx] */
    eax = MEM32(esi); /* 0x170BD142: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BD144: mov dword ptr [ebp - 4], eax */
    eax = esi + 0x4; /* 0x170BD147: lea eax, [esi + 4] */
    MEM32(ebx) = eax; /* 0x170BD14A: mov dword ptr [ebx], eax */
    ecx = MEM32(eax); /* 0x170BD14C: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170BD14E: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x18u */ /* 0x170BD151: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx) = eax; /* 0x170BD154: mov dword ptr [ebx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD15F; /* 0x170BD156: je 0x170bd15f */
L_170BD158:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD158: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BD279; /* 0x170BD15A: jmp 0x170bd279 */
L_170BD15F:
    PUSH32(esp, edi); /* 0x170BD15F: push edi */
    ecx = ebx; /* 0x170BD160: mov ecx, ebx */
    RECOMP_CALL(sub_170BC29A); /* 0x170BD162: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x170BD167: mov edi, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD16A: fmul dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BD16D: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_170BC29A); /* 0x170BD170: call 0x170bc29a */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170BD175: fmul dword ptr [edi + 8] */
    edi = MEM32(ebp + 0xC); /* 0x170BD178: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x14); /* 0x170BD17B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x170BD17E: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BD17F: fstp dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_170BC10A); /* 0x170BD182: call 0x170bc10a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170BD187: mov edi, eax */
    /* test edi, edi */ /* 0x170BD189: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x170BD18B: mov dword ptr [ebp - 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD197; /* 0x170BD18E: jne 0x170bd197 */
L_170BD190:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD190: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BD278; /* 0x170BD192: jmp 0x170bd278 */
L_170BD197:
    eax = MEM32(ebp + (-0x4)); /* 0x170BD197: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x170BD19A: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), esi */ /* 0x170BD19C: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x170BD19E: mov dword ptr [ebp - 0xc], esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BD209; /* 0x170BD1A1: jae 0x170bd209 */
L_170BD1A3:
    eax = MEM32(ebx); /* 0x170BD1A3: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BD1A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x170BD1A7: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BD1AA: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x170BD1AD: mov dword ptr [ebx], eax */
    SET_LO16(edx, MEM16(eax)); /* 0x170BD1AF: mov dx, word ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x170BD1B2: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x170BD1B5: mov dword ptr [ebx], eax */
    eax = (uint32_t)LO16(ecx); /* 0x170BD1B7: movzx eax, cx */
    PUSH32(esp, eax); /* 0x170BD1BA: push eax */
    esi = edi; /* 0x170BD1BB: mov esi, edi */
    MEM32(ebp + 0xC) = ecx; /* 0x170BD1BD: mov dword ptr [ebp + 0xc], ecx */
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(edx)); /* 0x170BD1C0: mov word ptr [ebp - 4], dx */
    RECOMP_CALL(sub_170BC1A6); /* 0x170BD1C4: call 0x170bc1a6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD1C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD190; /* 0x170BD1CB: je 0x170bd190 */
L_170BD1CD:
    /* cmp MEM16(ebp + 0xC), 1 */ /* 0x170BD1CD: cmp word ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM16(ebp + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD1E4; /* 0x170BD1D2: jne 0x170bd1e4 */
L_170BD1D4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BD1D4: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x170BD1D7: push ebx */
    PUSH32(esp, eax); /* 0x170BD1D8: push eax */
    PUSH32(esp, edi); /* 0x170BD1D9: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BD1DA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BC561); /* 0x170BD1DD: call 0x170bc561 */
    RECOMP_FLAGS_IN();
    goto L_170BD1FE; /* 0x170BD1E2: jmp 0x170bd1fe */
L_170BD1E4:
    /* cmp MEM16(ebp + 0xC), 2 */ /* 0x170BD1E4: cmp word ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM16(ebp + 0xC)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD1FC; /* 0x170BD1E9: jne 0x170bd1fc */
L_170BD1EB:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BD1EB: push dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x170BD1EE: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170BD1F1: push ebx */
    PUSH32(esp, eax); /* 0x170BD1F2: push eax */
    eax = edi; /* 0x170BD1F3: mov eax, edi */
    RECOMP_CALL(sub_170BCF91); /* 0x170BD1F5: call 0x170bcf91 */
    RECOMP_FLAGS_IN();
    goto L_170BD1FE; /* 0x170BD1FA: jmp 0x170bd1fe */
L_170BD1FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD1FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BD1FE:
    /* test eax, eax */ /* 0x170BD1FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD190; /* 0x170BD200: je 0x170bd190 */
L_170BD202:
    eax = MEM32(ebp + (-0xC)); /* 0x170BD202: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebx), eax */ /* 0x170BD205: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BD1A3; /* 0x170BD207: jb 0x170bd1a3 */
L_170BD209:
    eax = MEM32(edi + 0x10); /* 0x170BD209: mov eax, dword ptr [edi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x170BD20C: fld dword ptr [ebp - 0x14] */
    ecx = MEM32(edi + 0xC); /* 0x170BD20F: mov ecx, dword ptr [edi + 0xc] */
    ecx = ecx + eax * 8 + (-0x8); /* 0x170BD212: lea ecx, [ecx + eax*8 - 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BD216: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BD218: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BD21A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BD21C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BD230; /* 0x170BD21F: jp 0x170bd230 */
L_170BD221:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x170BD221: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BD224: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BD227: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BD229: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BD22B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170BD258; /* 0x170BD22E: jnp 0x170bd258 */
L_170BD230:
    PUSH32(esp, 1); /* 0x170BD230: push 1 */
    esi = edi; /* 0x170BD232: mov esi, edi */
    RECOMP_CALL(sub_170BC1A6); /* 0x170BD234: call 0x170bc1a6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD239: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD190; /* 0x170BD23B: je 0x170bd190 */
L_170BD241:
    esi = MEM32(ebp + (-0x8)); /* 0x170BD241: mov esi, dword ptr [ebp - 8] */
    edi = ebp + (-0x14); /* 0x170BD244: lea edi, [ebp - 0x14] */
    ebx = eax; /* 0x170BD247: mov ebx, eax */
    RECOMP_CALL(sub_170BC255); /* 0x170BD249: call 0x170bc255 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD24E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD190; /* 0x170BD250: je 0x170bd190 */
L_170BD256:
    edi = esi; /* 0x170BD256: mov edi, esi */
L_170BD258:
    ecx = MEM32(edi + 0x4); /* 0x170BD258: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x170BD25B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x170BD25D: mov eax, dword ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD275; /* 0x170BD25F: je 0x170bd275 */
L_170BD261:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x170BD261: add eax, 0xc */
    _flag_k = FK_ADD;
L_170BD264:
    edx = MEM32(eax + (-0x4)); /* 0x170BD264: mov edx, dword ptr [eax - 4] */
    esi = MEM32(edi + 0xC); /* 0x170BD267: mov esi, dword ptr [edi + 0xc] */
    edx = esi + edx * 8; /* 0x170BD26A: lea edx, [esi + edx*8] */
    MEM32(eax) = edx; /* 0x170BD26D: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BD26F: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170BD272: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BD264; /* 0x170BD273: jne 0x170bd264 */
L_170BD275:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BD277: inc eax */
    _flag_k = FK_INC;
L_170BD278:
    edi = POP32_VAL(esp); /* 0x170BD278: pop edi */
L_170BD279:
    esi = POP32_VAL(esp); /* 0x170BD279: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BD27A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BD27B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BD27C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BD284(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD284u);

L_170BD284:
    edi = edi; /* 0x170BD284: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD286: push ebp */
    ebp = esp; /* 0x170BD287: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170BD289: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BD28C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x170BD290: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BD293: push esi */
    PUSH32(esp, edi); /* 0x170BD294: push edi */
    PUSH32(esp, 0xCu); /* 0x170BD295: push 0xc */
    edi = eax; /* 0x170BD297: mov edi, eax */
    RECOMP_CALL(sub_1721B254); /* 0x170BD299: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BD29E: mov esi, eax */
    /* test esi, esi */ /* 0x170BD2A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD2A2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD2BB; /* 0x170BD2A3: je 0x170bd2bb */
L_170BD2A5:
    PUSH32(esp, 0x140u); /* 0x170BD2A5: push 0x140 */
    RECOMP_CALL(sub_1721B254); /* 0x170BD2AA: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD2AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD2B1: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD2C4; /* 0x170BD2B2: jne 0x170bd2c4 */
L_170BD2B4:
    PUSH32(esp, esi); /* 0x170BD2B4: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x170BD2B5: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BD2BA: pop ecx */
L_170BD2BB:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170BD2BB: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170BD30E; /* 0x170BD2C2: jmp 0x170bd30e */
L_170BD2C4:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170BD2C4: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x170BD2C8: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = 0xAu; /* 0x170BD2CA: mov dword ptr [esi + 8], 0xa */
    eax = MEM32(edi + 0x10); /* 0x170BD2D1: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(edi + 0x14); /* 0x170BD2D4: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170BD2D7: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x170BD2D9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x170BD2DB: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BD2DE: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BD2FC; /* 0x170BD2E1: jae 0x170bd2fc */
L_170BD2E3:
    PUSH32(esp, esi); /* 0x170BD2E3: push esi */
    PUSH32(esp, edi); /* 0x170BD2E4: push edi */
    eax = ebp + (-0x8); /* 0x170BD2E5: lea eax, [ebp - 8] */
    RECOMP_CALL(sub_170BD134); /* 0x170BD2E8: call 0x170bd134 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD2ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD315; /* 0x170BD2EF: je 0x170bd315 */
L_170BD2F1:
    eax = MEM32(edi + 0x10); /* 0x170BD2F1: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x14); /* 0x170BD2F4: add eax, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170BD2F7: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BD2E3; /* 0x170BD2FA: jb 0x170bd2e3 */
L_170BD2FC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x170BD2FC: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x170BD300: mov dword ptr [ebx], esi */
L_170BD302:
    edi = MEM32(ebp + (-0xC)); /* 0x170BD302: mov edi, dword ptr [ebp - 0xc] */
    /* test edi, edi */ /* 0x170BD305: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD30E; /* 0x170BD307: je 0x170bd30e */
L_170BD309:
    RECOMP_CALL(sub_170BC208); /* 0x170BD309: call 0x170bc208 */
    RECOMP_FLAGS_IN();
L_170BD30E:
    eax = MEM32(ebp + (-0x4)); /* 0x170BD30E: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170BD311: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD312: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BD313: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BD314: ret  */
L_170BD315:
    PUSH32(esp, 0x1700613Cu); /* 0x170BD315: push 0x1700613c */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD31A: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170BD320: mov dword ptr [ebp - 4], 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_170BD302; /* 0x170BD327: jmp 0x170bd302 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BD32E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD32Eu);

L_170BD32E:
    edi = edi; /* 0x170BD32E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD330: push ebp */
    ebp = esp; /* 0x170BD331: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x170BD333: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BD336: push ebx */
    PUSH32(esp, esi); /* 0x170BD337: push esi */
    PUSH32(esp, edi); /* 0x170BD338: push edi */
    ebx = ebp + (-0x4); /* 0x170BD339: lea ebx, [ebp - 4] */
    esi = eax; /* 0x170BD33C: mov esi, eax */
    RECOMP_CALL(sub_170BD284); /* 0x170BD33E: call 0x170bd284 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD343: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x4)); /* 0x170BD345: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BD348: mov dword ptr [ebp - 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BD449; /* 0x170BD34B: jl 0x170bd449 */
L_170BD351:
    eax = MEM32(edi + 0x4); /* 0x170BD351: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x170BD354: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(edi); /* 0x170BD356: mov ebx, dword ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD36B; /* 0x170BD358: je 0x170bd36b */
L_170BD35A:
    MEM32(ebp + (-0xC)) = eax; /* 0x170BD35A: mov dword ptr [ebp - 0xc], eax */
L_170BD35D:
    PUSH32(esp, ebx); /* 0x170BD35D: push ebx */
    RECOMP_CALL(sub_170BC6AE); /* 0x170BD35E: call 0x170bc6ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x170BD363: add ebx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x170BD366: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BD35D; /* 0x170BD369: jne 0x170bd35d */
L_170BD36B:
    eax = esi + 0x20; /* 0x170BD36B: lea eax, [esi + 0x20] */
    MEM32(esi + 0x1B8) = eax; /* 0x170BD36E: mov dword ptr [esi + 0x1b8], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x170BD374: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x194)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x194) = MEM32(eax + 0x194) & 0; /* 0x170BD377: and dword ptr [eax + 0x194], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x1BC); /* 0x170BD37E: mov eax, dword ptr [esi + 0x1bc] */
    /* test eax, eax */ /* 0x170BD384: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD396; /* 0x170BD386: je 0x170bd396 */
L_170BD388:
    PUSH32(esp, eax); /* 0x170BD388: push eax */
    RECOMP_CALL(sub_170BE04F); /* 0x170BD389: call 0x170be04f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD38E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD42C; /* 0x170BD390: je 0x170bd42c */
L_170BD396:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x170BD396: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x170BD399: fldz  */
    PUSH32(esp, esi); /* 0x170BD39B: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BD39C: fstp qword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x170BD39F: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_171C68D9); /* 0x170BD3A2: call 0x171c68d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x4); /* 0x170BD3A7: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x170BD3AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x170BD3AC: mov eax, dword ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD3FC; /* 0x170BD3AE: je 0x170bd3fc */
L_170BD3B0:
    edi = eax + 0xC; /* 0x170BD3B0: lea edi, [eax + 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x170BD3B3: mov dword ptr [ebp - 0x10], ecx */
L_170BD3B6:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x170BD3B6: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_171C6919); /* 0x170BD3B9: call 0x171c6919 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x170BD3BE: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BD3C1: dec eax */
    _flag_k = FK_DEC;
    ebx = MEM32(edi); /* 0x170BD3C2: mov ebx, dword ptr [edi] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BD3E9; /* 0x170BD3C4: je 0x170bd3e9 */
L_170BD3C6:
    MEM32(ebp + (-0xC)) = eax; /* 0x170BD3C6: mov dword ptr [ebp - 0xc], eax */
L_170BD3C9:
    fp_push(*(float*)&MEM32(ebx)); /* 0x170BD3C9: fld dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x170BD3CB: push ebx */
    eax = ebp + (-0x28); /* 0x170BD3CC: lea eax, [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x170BD3CF: fstp qword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x170BD3D2: fld dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x170BD3D5: push eax */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x170BD3D6: push dword ptr [esi + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BD3D9: fstp qword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_171C6A86); /* 0x170BD3DC: call 0x171c6a86 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x170BD3E1: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x170BD3E4: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BD3C9; /* 0x170BD3E7: jne 0x170bd3c9 */
L_170BD3E9:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x170BD3E9: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_171C6B81); /* 0x170BD3EC: call 0x171c6b81 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x170BD3F1: add edi, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x170BD3F4: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BD3B6; /* 0x170BD3F7: jne 0x170bd3b6 */
L_170BD3F9:
    edi = MEM32(ebp + (-0x4)); /* 0x170BD3F9: mov edi, dword ptr [ebp - 4] */
L_170BD3FC:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x170BD3FC: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_171C6BA7); /* 0x170BD3FF: call 0x171c6ba7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x170BD404: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170BD406: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BD40F; /* 0x170BD408: jge 0x170bd40f */
L_170BD40A:
    MEM32(ebp + (-0x8)) = eax; /* 0x170BD40A: mov dword ptr [ebp - 8], eax */
    goto L_170BD42C; /* 0x170BD40D: jmp 0x170bd42c */
L_170BD40F:
    eax = MEM32(esi + 0x1BC); /* 0x170BD40F: mov eax, dword ptr [esi + 0x1bc] */
    /* test eax, eax */ /* 0x170BD415: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD42C; /* 0x170BD417: je 0x170bd42c */
L_170BD419:
    ecx = MEM32(eax + 0x18); /* 0x170BD419: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x170BD41C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BD425; /* 0x170BD41E: jge 0x170bd425 */
L_170BD420:
    MEM32(ebp + (-0x8)) = ecx; /* 0x170BD420: mov dword ptr [ebp - 8], ecx */
    goto L_170BD42C; /* 0x170BD423: jmp 0x170bd42c */
L_170BD425:
    PUSH32(esp, edi); /* 0x170BD425: push edi */
    PUSH32(esp, eax); /* 0x170BD426: push eax */
    RECOMP_CALL(sub_170BE569); /* 0x170BD427: call 0x170be569 */
    RECOMP_FLAGS_IN();
L_170BD42C:
    eax = MEM32(esi + 0x1B4); /* 0x170BD42C: mov eax, dword ptr [esi + 0x1b4] */
    /* test eax, eax */ /* 0x170BD432: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD449; /* 0x170BD434: je 0x170bd449 */
L_170BD436:
    ebx = MEM32(eax + 0x194); /* 0x170BD436: mov ebx, dword ptr [eax + 0x194] */
    PUSH32(esp, eax); /* 0x170BD43C: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x170BD43D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x170BD442: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD444: pop ecx */
    eax = ebx; /* 0x170BD445: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD436; /* 0x170BD447: jne 0x170bd436 */
L_170BD449:
    /* test edi, edi */ /* 0x170BD449: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD452; /* 0x170BD44B: je 0x170bd452 */
L_170BD44D:
    RECOMP_CALL(sub_170BC208); /* 0x170BD44D: call 0x170bc208 */
    RECOMP_FLAGS_IN();
L_170BD452:
    esi = MEM32(esi + 0x1BC); /* 0x170BD452: mov esi, dword ptr [esi + 0x1bc] */
    /* test esi, esi */ /* 0x170BD458: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD462; /* 0x170BD45A: je 0x170bd462 */
L_170BD45C:
    PUSH32(esp, esi); /* 0x170BD45C: push esi */
    RECOMP_CALL(sub_170BDA8D); /* 0x170BD45D: call 0x170bda8d */
    RECOMP_FLAGS_IN();
L_170BD462:
    eax = MEM32(ebp + (-0x8)); /* 0x170BD462: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x170BD465: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD466: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BD467: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BD468: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BD469: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BD46F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD46Fu);

L_170BD46F:
    edi = edi; /* 0x170BD46F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD471: push ebp */
    ebp = esp; /* 0x170BD472: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x170BD474: sub esp, 0x6c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x170BD477: mov edx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x170BD47A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BD47C: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x170BD47F: push ebx */
    fp_push(0.0); /* 0x170BD480: fldz  */
    PUSH32(esp, esi); /* 0x170BD482: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BD483: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BD485: fstp dword ptr [ebp - 0x1c] */
    /* cmp edx, esi */ /* 0x170BD488: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x170BD48A: fldz  */
    PUSH32(esp, edi); /* 0x170BD48C: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BD48D: fstp dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = esi; /* 0x170BD490: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x170BD493: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x170BD496: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x170BD499: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x170BD49C: mov dword ptr [ebp - 0xc], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7E1; /* 0x170BD49F: je 0x170bd7e1 */
L_170BD4A5:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x170BD4A5: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7E1; /* 0x170BD4A8: je 0x170bd7e1 */
L_170BD4AE:
    ecx = MEM32(ebp + 0x1C); /* 0x170BD4AE: mov ecx, dword ptr [ebp + 0x1c] */
    /* cmp ecx, esi */ /* 0x170BD4B1: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD4E7; /* 0x170BD4B3: je 0x170bd4e7 */
L_170BD4B5:
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170BD4B5: fld dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170BD4B8: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BD4BE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BD4C0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BD4CC; /* 0x170BD4C3: jp 0x170bd4cc */
L_170BD4C5:
    PUSH32(esp, 0x170062E4u); /* 0x170BD4C5: push 0x170062e4 */
    goto L_170BD4E1; /* 0x170BD4CA: jmp 0x170bd4e1 */
L_170BD4CC:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD4CC: fld dword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170BD4CF: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BD4D5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BD4D7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BD4F1; /* 0x170BD4DA: jp 0x170bd4f1 */
L_170BD4DC:
    PUSH32(esp, 0x170062B4u); /* 0x170BD4DC: push 0x170062b4 */
L_170BD4E1:
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD4E1: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
L_170BD4E7:
    ebx = 0x8876086Cu; /* 0x170BD4E7: mov ebx, 0x8876086c */
    goto L_170BD830; /* 0x170BD4EC: jmp 0x170bd830 */
L_170BD4F1:
    PUSH32(esp, edx); /* 0x170BD4F1: push edx */
    MEM32(ecx) = esi; /* 0x170BD4F2: mov dword ptr [ecx], esi */
    RECOMP_CALL(sub_1721B278); /* 0x170BD4F4: call 0x1721b278 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BD4F9: mov esi, eax */
    edi = esi; /* 0x170BD4FB: mov edi, esi */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x170BD4FD: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x170BD4FD: shl edi, 2 */
    PUSH32(esp, edi); /* 0x170BD500: push edi */
    MEM32(ebp + (-0xC)) = esi; /* 0x170BD501: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BD504: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD50B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BD50C: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BD50D: mov dword ptr [ebp - 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD51C; /* 0x170BD510: jne 0x170bd51c */
L_170BD512:
    ebx = 0x8007000Eu; /* 0x170BD512: mov ebx, 0x8007000e */
    goto L_170BD80C; /* 0x170BD517: jmp 0x170bd80c */
L_170BD51C:
    ecx = edi; /* 0x170BD51C: mov ecx, edi */
    edi = MEM32(ebp + (-0x8)); /* 0x170BD51E: mov edi, dword ptr [ebp - 8] */
    edx = ecx; /* 0x170BD521: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170BD523: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170BD523: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD526: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170BD528: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170BD52A: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170BD52C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170BD52F: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = ebp + (-0x6C); /* 0x170BD531: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x170BD534: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD535: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x17001070)); /* 0x170BD538: call dword ptr [0x17001070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD53E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD549; /* 0x170BD540: jne 0x170bd549 */
L_170BD542:
    PUSH32(esp, 0x17006270u); /* 0x170BD542: push 0x17006270 */
    goto L_170BD554; /* 0x170BD547: jmp 0x170bd554 */
L_170BD549:
    /* test MEM8(ebp + (-0x39)), 2 */ /* 0x170BD549: test byte ptr [ebp - 0x39], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x39))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD564; /* 0x170BD54D: jne 0x170bd564 */
L_170BD54F:
    PUSH32(esp, 0x17006240u); /* 0x170BD54F: push 0x17006240 */
L_170BD554:
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD554: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    ebx = 0x8876086Cu; /* 0x170BD55A: mov ebx, 0x8876086c */
    goto L_170BD80C; /* 0x170BD55F: jmp 0x170bd80c */
L_170BD564:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD564: fld dword ptr [ebp + 0x18] */
    eax = ebp + (-0x14); /* 0x170BD567: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x170BD56A: push eax */
    PUSH32(esp, ecx); /* 0x170BD56B: push ecx */
    PUSH32(esp, ecx); /* 0x170BD56C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170BD56D: fstp dword ptr [esp + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BD571: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170BD573: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170BD576: inc edi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD577: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD57A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BC868); /* 0x170BD57D: call 0x170bc868 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD582: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BD584: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BD59B; /* 0x170BD586: jge 0x170bd59b */
L_170BD588:
    PUSH32(esp, 0x17006218u); /* 0x170BD588: push 0x17006218 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD58D: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14)); /* 0x170BD593: mov esi, dword ptr [ebp - 0x14] */
    goto L_170BD800; /* 0x170BD596: jmp 0x170bd800 */
L_170BD59B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x170BD59B: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170BD59F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x14)); /* 0x170BD5A1: mov esi, dword ptr [ebp - 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD747; /* 0x170BD5A4: jbe 0x170bd747 */
L_170BD5AA:
    edi = 0x172304F8u; /* 0x170BD5AA: mov edi, 0x172304f8 */
L_170BD5AF:
    eax = MEM32(ebp + 0x10); /* 0x170BD5AF: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x170BD5B2: mov ecx, dword ptr [ebp + 0x14] */
    ebx = (uint32_t)MEM16(eax + ecx * 2); /* 0x170BD5B5: movzx ebx, word ptr [eax + ecx*2] */
    PUSH32(esp, edi); /* 0x170BD5B9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD5BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x28), eax */ /* 0x170BD5BC: cmp dword ptr [ebp + 0x28], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x170BD5BF: push eax */
    PUSH32(esp, eax); /* 0x170BD5C0: push eax */
    eax = ebp + (-0x34); /* 0x170BD5C1: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x170BD5C4: push eax */
    PUSH32(esp, 2); /* 0x170BD5C5: push 2 */
    PUSH32(esp, ebx); /* 0x170BD5C7: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD5C8: push dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD5D5; /* 0x170BD5CB: je 0x170bd5d5 */
L_170BD5CD:
    RECOMP_ICALL(MEM32(0x1700102C)); /* 0x170BD5CD: call dword ptr [0x1700102c] */
    RECOMP_FLAGS_IN();
    goto L_170BD5DB; /* 0x170BD5D3: jmp 0x170bd5db */
L_170BD5D5:
    RECOMP_ICALL(MEM32(0x1700106C)); /* 0x170BD5D5: call dword ptr [0x1700106c] */
    RECOMP_FLAGS_IN();
L_170BD5DB:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x170BD5DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = eax; /* 0x170BD5DE: mov dword ptr [ebp + 0x18], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7A9; /* 0x170BD5E1: je 0x170bd7a9 */
L_170BD5E7:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BD5E7: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BD613; /* 0x170BD5EA: jbe 0x170bd613 */
L_170BD5EC:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170BD5EC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD5FB; /* 0x170BD5F0: je 0x170bd5fb */
L_170BD5F2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BD5F2: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B224); /* 0x170BD5F5: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BD5FA: pop ecx */
L_170BD5FB:
    eax = MEM32(ebp + 0x18); /* 0x170BD5FB: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x170BD5FE: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BD5FF: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1721B254); /* 0x170BD602: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD607: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD609: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BD60A: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD7BB; /* 0x170BD60D: je 0x170bd7bb */
L_170BD613:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170BD613: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170BD617: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BD618: push dword ptr [ebp - 4] */
    eax = ebp + (-0x34); /* 0x170BD61B: lea eax, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BD61E: push dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x170BD621: push eax */
    PUSH32(esp, 2); /* 0x170BD622: push 2 */
    PUSH32(esp, ebx); /* 0x170BD624: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD625: push dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD632; /* 0x170BD628: je 0x170bd632 */
L_170BD62A:
    RECOMP_ICALL(MEM32(0x1700102C)); /* 0x170BD62A: call dword ptr [0x1700102c] */
    RECOMP_FLAGS_IN();
    goto L_170BD638; /* 0x170BD630: jmp 0x170bd638 */
L_170BD632:
    RECOMP_ICALL(MEM32(0x1700106C)); /* 0x170BD632: call dword ptr [0x1700106c] */
    RECOMP_FLAGS_IN();
L_170BD638:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x170BD638: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7C2; /* 0x170BD63B: je 0x170bd7c2 */
L_170BD641:
    eax = MEM32(ebp + (-0x4)); /* 0x170BD641: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x10) = eax; /* 0x170BD644: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0x18); /* 0x170BD647: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x14) = eax; /* 0x170BD64A: mov dword ptr [esi + 0x14], eax */
    eax = esi; /* 0x170BD64D: mov eax, esi */
    RECOMP_CALL(sub_170BD32E); /* 0x170BD64F: call 0x170bd32e */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD654: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BD656: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BD7D4; /* 0x170BD658: jl 0x170bd7d4 */
L_170BD65E:
    eax = ebp + (-0x20); /* 0x170BD65E: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x170BD661: push eax */
    eax = MEM32(esi + 0x1BC); /* 0x170BD662: mov eax, dword ptr [esi + 0x1bc] */
    ecx = MEM32(eax + 0x1C); /* 0x170BD668: mov ecx, dword ptr [eax + 0x1c] */
    RECOMP_CALL(sub_170BCF4C); /* 0x170BD66B: call 0x170bcf4c */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x170BD670: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax + 0x1C); /* 0x170BD676: mov eax, dword ptr [eax + 0x1c] */
    ecx = MEM32(ebp + (-0x8)); /* 0x170BD679: mov ecx, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0x14); /* 0x170BD67C: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x28u); /* 0x170BD67F: push 0x28 */
    MEM32(ecx + ebx * 4) = eax; /* 0x170BD681: mov dword ptr [ecx + ebx*4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BD684: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD689: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BD68B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD697; /* 0x170BD68C: je 0x170bd697 */
L_170BD68E:
    ecx = eax; /* 0x170BD68E: mov ecx, eax */
    RECOMP_CALL(sub_170BC9AB); /* 0x170BD690: call 0x170bc9ab */
    RECOMP_FLAGS_IN();
    goto L_170BD699; /* 0x170BD695: jmp 0x170bd699 */
L_170BD697:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD697: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BD699:
    ecx = MEM32(esi + 0x1BC); /* 0x170BD699: mov ecx, dword ptr [esi + 0x1bc] */
    MEM32(ecx + 0x1C) = eax; /* 0x170BD69F: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(esi + 0x1BC); /* 0x170BD6A2: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x170BD6A8: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7B4; /* 0x170BD6AC: je 0x170bd7b4 */
L_170BD6B2:
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x24)); /* 0x170BD6B2: movsx eax, word ptr [ebp - 0x24] */
    MEM32(ebp + 0x18) = eax; /* 0x170BD6B6: mov dword ptr [ebp + 0x18], eax */
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x22)); /* 0x170BD6B9: movsx eax, word ptr [ebp - 0x22] */
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x170BD6BD: fild dword ptr [ebp + 0x18] */
    MEM32(ebp + 0x18) = eax; /* 0x170BD6C0: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + 0x24); /* 0x170BD6C3: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x170BD6C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x170BD6C8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD6CA: fmul dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x20)); /* 0x170BD6CD: fadd dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170BD6D0: fstp dword ptr [ebp - 0x20] */
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x170BD6D3: fild dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x18) = _v; } /* 0x170BD6D6: fst dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD6D9: fmul dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x170BD6DC: fadd dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BD6DF: fstp dword ptr [ebp - 0x1c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD738; /* 0x170BD6E2: je 0x170bd738 */
L_170BD6E4:
    ecx = MEM32(ebp + (-0x34)); /* 0x170BD6E4: mov ecx, dword ptr [ebp - 0x34] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x34))); /* 0x170BD6E7: fild dword ptr [ebp - 0x34] */
    /* test ecx, ecx */ /* 0x170BD6EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BD6F4; /* 0x170BD6EC: jge 0x170bd6f4 */
L_170BD6EE:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BD6EE: fadd dword ptr [0x1700142c] */
L_170BD6F4:
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD6F4: fmul dword ptr [esi + 8] */
    ecx = MEM32(ebp + (-0x30)); /* 0x170BD6F7: mov ecx, dword ptr [ebp - 0x30] */
    /* test ecx, ecx */ /* 0x170BD6FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BD6FC: fstp dword ptr [eax] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x30))); /* 0x170BD6FE: fild dword ptr [ebp - 0x30] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BD709; /* 0x170BD701: jge 0x170bd709 */
L_170BD703:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BD703: fadd dword ptr [0x1700142c] */
L_170BD709:
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD709: fmul dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170BD70C: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x24) = eax; /* 0x170BD70F: mov dword ptr [ebp + 0x24], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x14)) = _v; } /* 0x170BD712: fstp dword ptr [eax - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x2C))); /* 0x170BD715: fild dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD718: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x10)) = _v; } /* 0x170BD71B: fstp dword ptr [eax - 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x170BD71E: fild dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD721: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0xC)) = _v; } /* 0x170BD724: fstp dword ptr [eax - 0xc] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD727: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x8)) = _v; } /* 0x170BD72A: fstp dword ptr [eax - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD72D: fld dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170BD730: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x4)) = _v; } /* 0x170BD733: fstp dword ptr [eax - 4] */
    goto L_170BD73A; /* 0x170BD736: jmp 0x170bd73a */
L_170BD738:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BD738: fstp st(0) */
L_170BD73A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BD73A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0xC)) */ /* 0x170BD73B: cmp ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ebx; /* 0x170BD73E: mov dword ptr [ebp + 0x14], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BD5AF; /* 0x170BD741: jb 0x170bd5af */
L_170BD747:
    edi = MEM32(ebp + 0x1C); /* 0x170BD747: mov edi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x170BD74A: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BD74B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BD74E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BD751: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BC3C9); /* 0x170BD754: call 0x170bc3c9 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD759: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BD75B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BD7F1; /* 0x170BD75D: jl 0x170bd7f1 */
L_170BD763:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x170BD763: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD7F1; /* 0x170BD767: je 0x170bd7f1 */
L_170BD76D:
    eax = MEM32(edi); /* 0x170BD76D: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BD76F: push dword ptr [ebp + 0x20] */
    ecx = MEM32(eax); /* 0x170BD772: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BD774: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170BD775: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    eax = eax + eax * 2; /* 0x170BD778: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170BD77B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170BD77B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170BD77E: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x170BD77F: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD784: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BD786: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BD7F1; /* 0x170BD788: jl 0x170bd7f1 */
L_170BD78A:
    ecx = MEM32(edi); /* 0x170BD78A: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x20); /* 0x170BD78C: mov eax, dword ptr [ebp + 0x20] */
    eax = MEM32(eax); /* 0x170BD78F: mov eax, dword ptr [eax] */
    ebx = MEM32(ecx); /* 0x170BD791: mov ebx, dword ptr [ecx] */
    ecx = MEM32(eax); /* 0x170BD793: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BD795: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BD796: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x170BD799: fldz  */
    PUSH32(esp, eax); /* 0x170BD79B: push eax */
    PUSH32(esp, ecx); /* 0x170BD79C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD79D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(edi)); /* 0x170BD7A0: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(ebx + 0x58)); /* 0x170BD7A2: call dword ptr [ebx + 0x58] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BD7A5: mov ebx, eax */
    goto L_170BD7F1; /* 0x170BD7A7: jmp 0x170bd7f1 */
L_170BD7A9:
    PUSH32(esp, 0x170061F0u); /* 0x170BD7A9: push 0x170061f0 */
L_170BD7AE:
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD7AE: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
L_170BD7B4:
    ebx = 0x8007000Eu; /* 0x170BD7B4: mov ebx, 0x8007000e */
    goto L_170BD7F1; /* 0x170BD7B9: jmp 0x170bd7f1 */
L_170BD7BB:
    PUSH32(esp, 0x170061C4u); /* 0x170BD7BB: push 0x170061c4 */
    RECOMP_BACKEDGE();
    goto L_170BD7AE; /* 0x170BD7C0: jmp 0x170bd7ae */
L_170BD7C2:
    PUSH32(esp, 0x170061F0u); /* 0x170BD7C2: push 0x170061f0 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD7C7: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    ebx = 0x80004005u; /* 0x170BD7CD: mov ebx, 0x80004005 */
    goto L_170BD7F1; /* 0x170BD7D2: jmp 0x170bd7f1 */
L_170BD7D4:
    PUSH32(esp, 0x17006190u); /* 0x170BD7D4: push 0x17006190 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD7D9: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    goto L_170BD7F1; /* 0x170BD7DF: jmp 0x170bd7f1 */
L_170BD7E1:
    PUSH32(esp, 0x1700616Cu); /* 0x170BD7E1: push 0x1700616c */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD7E6: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    ebx = 0x8876086Cu; /* 0x170BD7EC: mov ebx, 0x8876086c */
L_170BD7F1:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170BD7F1: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD800; /* 0x170BD7F5: je 0x170bd800 */
L_170BD7F7:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BD7F7: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B224); /* 0x170BD7FA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BD7FF: pop ecx */
L_170BD800:
    /* test esi, esi */ /* 0x170BD800: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD80C; /* 0x170BD802: je 0x170bd80c */
L_170BD804:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD804: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BC0B6); /* 0x170BD807: call 0x170bc0b6 */
    RECOMP_FLAGS_IN();
L_170BD80C:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x170BD80C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD830; /* 0x170BD810: je 0x170bd830 */
L_170BD812:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BD812: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x170BD814: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BD830; /* 0x170BD817: jbe 0x170bd830 */
L_170BD819:
    eax = MEM32(ebp + (-0x8)); /* 0x170BD819: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax + esi * 4); /* 0x170BD81C: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x170BD81F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD82A; /* 0x170BD821: je 0x170bd82a */
L_170BD823:
    PUSH32(esp, 1); /* 0x170BD823: push 1 */
    RECOMP_CALL(sub_170BC53B); /* 0x170BD825: call 0x170bc53b */
    RECOMP_FLAGS_IN();
L_170BD82A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BD82A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x170BD82B: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BD819; /* 0x170BD82E: jb 0x170bd819 */
L_170BD830:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BD830: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x170BD833: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BD838: pop ecx */
    edi = POP32_VAL(esp); /* 0x170BD839: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD83A: pop esi */
    eax = ebx; /* 0x170BD83B: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170BD83D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BD83E: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170BD83F: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170BD847(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD847u);

L_170BD847:
    edi = edi; /* 0x170BD847: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD849: push ebp */
    ebp = esp; /* 0x170BD84A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170BD84C: push ebx */
    PUSH32(esp, esi); /* 0x170BD84D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x170BD84E: mov esi, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x170BD851: mov eax, esi */
    PUSH32(esp, edi); /* 0x170BD853: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BD854: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax + 0x1; /* 0x170BD856: lea edi, [eax + 1] */
L_170BD859:
    SET_LO8(ecx, MEM8(eax)); /* 0x170BD859: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BD85B: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x170BD85C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD859; /* 0x170BD85E: jne 0x170bd859 */
L_170BD860:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x170BD860: sub eax, edi */
    _flag_k = FK_CMP;
    eax = eax + eax + 0x2; /* 0x170BD862: lea eax, [eax + eax + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170BD866: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x170BD869: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B1B0); /* 0x170BD86C: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x170BD871: mov edi, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD873: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BD8A0; /* 0x170BD875: jmp 0x170bd8a0 */
L_170BD877:
    PUSH32(esp, eax); /* 0x170BD877: push eax */
    RECOMP_ICALL(MEM32(0x170010E0)); /* 0x170BD878: call dword ptr [0x170010e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BD87E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BD896; /* 0x170BD880: je 0x170bd896 */
L_170BD882:
    SET_LO16(ecx, (int32_t)(int8_t)MEM8(esi + 0x1)); /* 0x170BD882: movsx cx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BD887: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(eax, MEM8(esi)); /* 0x170BD889: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x170BD88B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x170BD88D: mov word ptr [edi + ebx*2], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BD891: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BD892: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BD893: inc esi */
    _flag_k = FK_INC;
    goto L_170BD8A0; /* 0x170BD894: jmp 0x170bd8a0 */
L_170BD896:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(esi)); /* 0x170BD896: movsx ax, byte ptr [esi] */
    MEM16(edi + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x170BD89A: mov word ptr [edi + ebx*2], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BD89E: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BD89F: inc esi */
    _flag_k = FK_INC;
L_170BD8A0:
    SET_LO8(eax, MEM8(esi)); /* 0x170BD8A0: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x170BD8A2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BD877; /* 0x170BD8A4: jne 0x170bd877 */
L_170BD8A6:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD8A6: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x170BD8A9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BD8AB: push dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM16(edi + ebx * 2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edi + ebx * 2) = (uint16_t)(MEM16(edi + ebx * 2) & 0); /* 0x170BD8AE: and word ptr [edi + ebx*2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BD8B3: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BD8B6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x170BD8B9: push ecx */
    PUSH32(esp, ecx); /* 0x170BD8BA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170BD8BB: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170BD8BF: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD8C2: fstp dword ptr [esp] */
    PUSH32(esp, edi); /* 0x170BD8C5: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BD8C6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BD8C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BD46F); /* 0x170BD8CC: call 0x170bd46f */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0xC); /* 0x170BD8D1: lea esp, [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x170BD8D4: pop edi */
    esi = POP32_VAL(esp); /* 0x170BD8D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BD8D6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BD8D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170BD8D8: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170BD8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BD8E0u);

L_170BD8E0:
    edi = edi; /* 0x170BD8E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BD8E2: push ebp */
    ebp = esp; /* 0x170BD8E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB4u; /* 0x170BD8E5: sub esp, 0xb4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170BD8EB: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BD8F0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x170BD8F3: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0xA0)) = eax; /* 0x170BD8F6: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebp + 0x20); /* 0x170BD8FC: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x170BD8FF: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170BD900: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x170BD903: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebp + 0x24); /* 0x170BD909: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x170BD90C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BD90D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170BD910: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170BD911: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x170BD914: mov dword ptr [ebp - 0xa4], eax */
    eax = ebp + (-0x98); /* 0x170BD91A: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x170BD920: push eax */
    MEM32(ebp + (-0xB4)) = esi; /* 0x170BD921: mov dword ptr [ebp - 0xb4], esi */
    MEM32(ebp + (-0xB0)) = edi; /* 0x170BD927: mov dword ptr [ebp - 0xb0], edi */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x170BD92D: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x1700119C)); /* 0x170BD937: call dword ptr [0x1700119c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x170BD93D: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BD9DD; /* 0x170BD944: je 0x170bd9dd */
L_170BD94A:
    edi = MEM32(0x1700111C); /* 0x170BD94A: mov edi, dword ptr [0x1700111c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BD950: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BD952: push esi */
    PUSH32(esp, esi); /* 0x170BD953: push esi */
    PUSH32(esp, esi); /* 0x170BD954: push esi */
    PUSH32(esp, esi); /* 0x170BD955: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x170BD956: push -1 */
    PUSH32(esp, ebx); /* 0x170BD958: push ebx */
    PUSH32(esp, esi); /* 0x170BD959: push esi */
    PUSH32(esp, esi); /* 0x170BD95A: push esi */
    RECOMP_ICALL(edi); /* 0x170BD95B: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xAC)) = eax; /* 0x170BD95D: mov dword ptr [ebp - 0xac], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170BD963: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x170BD966: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B1B0); /* 0x170BD969: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0xAC)), esi */ /* 0x170BD96E: cmp dword ptr [ebp - 0xac], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xAC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xA8)) = esp; /* 0x170BD974: mov dword ptr [ebp - 0xa8], esp */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BD98E; /* 0x170BD97A: jne 0x170bd98e */
L_170BD97C:
    PUSH32(esp, 0x1700616Cu); /* 0x170BD97C: push 0x1700616c */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BD981: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x170BD987: mov eax, 0x8876086c */
    goto L_170BDA08; /* 0x170BD98C: jmp 0x170bda08 */
L_170BD98E:
    PUSH32(esp, esi); /* 0x170BD98E: push esi */
    PUSH32(esp, esi); /* 0x170BD98F: push esi */
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x170BD990: push dword ptr [ebp - 0xac] */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x170BD996: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x170BD99C: push -1 */
    PUSH32(esp, ebx); /* 0x170BD99E: push ebx */
    PUSH32(esp, esi); /* 0x170BD99F: push esi */
    PUSH32(esp, esi); /* 0x170BD9A0: push esi */
    RECOMP_ICALL(edi); /* 0x170BD9A1: call edi */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD9A3: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x170BD9A6: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x170BD9AC: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x170BD9B2: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, ecx); /* 0x170BD9B8: push ecx */
    PUSH32(esp, ecx); /* 0x170BD9B9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170BD9BA: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170BD9BE: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD9C1: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x170BD9C4: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, MEM32(ebp + (-0xB0))); /* 0x170BD9CA: push dword ptr [ebp - 0xb0] */
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x170BD9D0: push dword ptr [ebp - 0xb4] */
    RECOMP_CALL(sub_170BD847); /* 0x170BD9D6: call 0x170bd847 */
    RECOMP_FLAGS_IN();
    goto L_170BDA08; /* 0x170BD9DB: jmp 0x170bda08 */
L_170BD9DD:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x170BD9DD: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, 1); /* 0x170BD9E0: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x170BD9E2: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x170BD9E8: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x170BD9EE: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, ecx); /* 0x170BD9F4: push ecx */
    PUSH32(esp, ecx); /* 0x170BD9F5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170BD9F6: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170BD9FA: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BD9FD: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x170BDA00: push ebx */
    PUSH32(esp, edi); /* 0x170BDA01: push edi */
    PUSH32(esp, esi); /* 0x170BDA02: push esi */
    RECOMP_CALL(sub_170BD46F); /* 0x170BDA03: call 0x170bd46f */
    RECOMP_FLAGS_IN();
L_170BDA08:
    esp = ebp + (-0xC0); /* 0x170BDA08: lea esp, [ebp - 0xc0] */
    ecx = MEM32(ebp + (-0x4)); /* 0x170BDA0E: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x170BDA11: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170BDA16: pop edi */
    esi = POP32_VAL(esp); /* 0x170BDA17: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BDA18: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BDA19: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170BDA1A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170BDA22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDA22u);

L_170BDA22:
    edi = edi; /* 0x170BDA22: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDA24: push ebp */
    ebp = esp; /* 0x170BDA25: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BDA27: push esi */
    PUSH32(esp, 1); /* 0x170BDA28: push 1 */
    PUSH32(esp, 0x20u); /* 0x170BDA2A: push 0x20 */
    RECOMP_CALL(sub_1721B26C); /* 0x170BDA2C: call 0x1721b26c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BDA31: mov esi, eax */
    /* test esi, esi */ /* 0x170BDA33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDA35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BDA36: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDA7D; /* 0x170BDA37: je 0x170bda7d */
L_170BDA39:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170BDA39: fld dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x170BDA3C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x170BDA3F: sub eax, 0 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x170BDA42: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170BDA44: fstp dword ptr [esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BDA54; /* 0x170BDA46: je 0x170bda54 */
L_170BDA48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BDA48: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDA58; /* 0x170BDA49: jne 0x170bda58 */
L_170BDA4B:
    MEM32(esi + 0x4) = 1; /* 0x170BDA4B: mov dword ptr [esi + 4], 1 */
    goto L_170BDA58; /* 0x170BDA52: jmp 0x170bda58 */
L_170BDA54:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170BDA54: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BDA58:
    PUSH32(esp, 0x28u); /* 0x170BDA58: push 0x28 */
    RECOMP_CALL(sub_1721B01C); /* 0x170BDA5A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BDA5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDA61: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDA6D; /* 0x170BDA62: je 0x170bda6d */
L_170BDA64:
    ecx = eax; /* 0x170BDA64: mov ecx, eax */
    RECOMP_CALL(sub_170BC9AB); /* 0x170BDA66: call 0x170bc9ab */
    RECOMP_FLAGS_IN();
    goto L_170BDA6F; /* 0x170BDA6B: jmp 0x170bda6f */
L_170BDA6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BDA6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BDA6F:
    /* test eax, eax */ /* 0x170BDA6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = eax; /* 0x170BDA71: mov dword ptr [esi + 0x1c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BDA81; /* 0x170BDA74: jne 0x170bda81 */
L_170BDA76:
    PUSH32(esp, esi); /* 0x170BDA76: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x170BDA77: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BDA7C: pop ecx */
L_170BDA7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BDA7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BDA83; /* 0x170BDA7F: jmp 0x170bda83 */
L_170BDA81:
    eax = esi; /* 0x170BDA81: mov eax, esi */
L_170BDA83:
    esi = POP32_VAL(esp); /* 0x170BDA83: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BDA84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BDA85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BDA8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDA8Du);

L_170BDA8D:
    edi = edi; /* 0x170BDA8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDA8F: push ebp */
    ebp = esp; /* 0x170BDA90: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BDA92: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BDA93: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x170BDA96: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BDAAE; /* 0x170BDA9A: je 0x170bdaae */
L_170BDA9C:
    eax = MEM32(esi + 0x8); /* 0x170BDA9C: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x170BDA9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDAAE; /* 0x170BDAA1: je 0x170bdaae */
L_170BDAA3:
    PUSH32(esp, eax); /* 0x170BDAA3: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x170BDAA4: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170BDAA9: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDAAD: pop ecx */
L_170BDAAE:
    esi = POP32_VAL(esp); /* 0x170BDAAE: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BDAAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BDAB0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BDAB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDAB8u);

L_170BDAB8:
    edi = edi; /* 0x170BDAB8: mov edi, edi */
    PUSH32(esp, esi); /* 0x170BDABA: push esi */
    esi = eax; /* 0x170BDABB: mov esi, eax */
    /* test esi, esi */ /* 0x170BDABD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDADD; /* 0x170BDABF: je 0x170bdadd */
L_170BDAC1:
    eax = MEM32(esi + 0x18); /* 0x170BDAC1: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x170BDAC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDACF; /* 0x170BDAC6: je 0x170bdacf */
L_170BDAC8:
    PUSH32(esp, eax); /* 0x170BDAC8: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x170BDAC9: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BDACE: pop ecx */
L_170BDACF:
    esi = MEM32(esi + 0x1C); /* 0x170BDACF: mov esi, dword ptr [esi + 0x1c] */
    /* test esi, esi */ /* 0x170BDAD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDADD; /* 0x170BDAD4: je 0x170bdadd */
L_170BDAD6:
    PUSH32(esp, esi); /* 0x170BDAD6: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x170BDAD7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BDADC: pop ecx */
L_170BDADD:
    esi = POP32_VAL(esp); /* 0x170BDADD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BDADE: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BDAE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDAE4u);

L_170BDAE4:
    /* cmp MEM32(ecx), 3 */ /* 0x170BDAE4: cmp dword ptr [ecx], 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BDAF3; /* 0x170BDAE7: jne 0x170bdaf3 */
L_170BDAE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BDAE9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 3 */ /* 0x170BDAEB: cmp dword ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170BDAEE: setne cl */
    goto L_170BDAFD; /* 0x170BDAF1: jmp 0x170bdafd */
L_170BDAF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BDAF3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 3 */ /* 0x170BDAF5: cmp dword ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170BDAF8: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BDAFB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BDAFC: inc ecx */
    _flag_k = FK_INC;
L_170BDAFD:
    eax = ecx; /* 0x170BDAFD: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BDAFF: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BDB05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDB05u);

L_170BDB05:
    edi = edi; /* 0x170BDB05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDB07: push ebp */
    ebp = esp; /* 0x170BDB08: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170BDB0A: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x170BDB0D: mov ecx, dword ptr [eax] */
    fp_push(0.0); /* 0x170BDB0F: fldz  */
    eax = MEM32(eax + 0x4); /* 0x170BDB11: mov eax, dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BDB14: fstp dword ptr [ebp - 0xc] */
    /* cmp eax, 1 */ /* 0x170BDB17: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BDB1A: push ebx */
    ebx = ecx; /* 0x170BDB1B: mov ebx, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BDB23; /* 0x170BDB1D: jne 0x170bdb23 */
L_170BDB1F:
    eax = ecx; /* 0x170BDB1F: mov eax, ecx */
    goto L_170BDB8A; /* 0x170BDB21: jmp 0x170bdb8a */
L_170BDB23:
    /* test eax, eax */ /* 0x170BDB23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDB88; /* 0x170BDB25: je 0x170bdb88 */
L_170BDB27:
    PUSH32(esp, esi); /* 0x170BDB27: push esi */
    PUSH32(esp, edi); /* 0x170BDB28: push edi */
    edi = eax; /* 0x170BDB29: mov edi, eax */
L_170BDB2B:
    edx = MEM32(ecx + 0xC); /* 0x170BDB2B: mov edx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170BDB2E: mov eax, dword ptr [ecx + 0x10] */
    /* test eax, eax */ /* 0x170BDB31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edx); /* 0x170BDB33: mov esi, dword ptr [edx] */
    MEM32(ebp + (-0x4)) = esi; /* 0x170BDB35: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x170BDB38: mov dword ptr [ebp - 8], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDB67; /* 0x170BDB3B: je 0x170bdb67 */
L_170BDB3D:
    esi = eax; /* 0x170BDB3D: mov esi, eax */
L_170BDB3F:
    fp_push(*(float*)&MEM32(edx)); /* 0x170BDB3F: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x170BDB41: fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDB44: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BDB46: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDB50; /* 0x170BDB49: jp 0x170bdb50 */
L_170BDB4B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BDB4B: fstp dword ptr [ebp - 8] */
    goto L_170BDB61; /* 0x170BDB4E: jmp 0x170bdb61 */
L_170BDB50:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4))); /* 0x170BDB50: fcom dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDB53: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170BDB55: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BDB5F; /* 0x170BDB58: jne 0x170bdb5f */
L_170BDB5A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BDB5A: fstp dword ptr [ebp - 4] */
    goto L_170BDB61; /* 0x170BDB5D: jmp 0x170bdb61 */
L_170BDB5F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BDB5F: fstp st(0) */
L_170BDB61:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x170BDB61: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170BDB64: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDB3F; /* 0x170BDB65: jne 0x170bdb3f */
L_170BDB67:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170BDB67: fld dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170BDB6A: fsub dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x170BDB6D: fcom dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDB70: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170BDB72: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BDB7E; /* 0x170BDB75: jne 0x170bdb7e */
L_170BDB77:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BDB77: fstp dword ptr [ebp - 0xc] */
    ebx = ecx; /* 0x170BDB7A: mov ebx, ecx */
    goto L_170BDB80; /* 0x170BDB7C: jmp 0x170bdb80 */
L_170BDB7E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BDB7E: fstp st(0) */
L_170BDB80:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x170BDB80: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BDB83: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDB2B; /* 0x170BDB84: jne 0x170bdb2b */
L_170BDB86:
    edi = POP32_VAL(esp); /* 0x170BDB86: pop edi */
    esi = POP32_VAL(esp); /* 0x170BDB87: pop esi */
L_170BDB88:
    eax = ebx; /* 0x170BDB88: mov eax, ebx */
L_170BDB8A:
    ebx = POP32_VAL(esp); /* 0x170BDB8A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BDB8B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BDB8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BDB92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDB92u);

L_170BDB92:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BDB92: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDB95: fld dword ptr [ecx] */
    fp_push(_st[0]); /* 0x170BDB97: fld st(0) */
    _st[0] *= _st[1]; /* 0x170BDB99: fmul st(1) */
    fp_push(_st[2]); /* 0x170BDB9B: fld st(2) */
    _st[0] *= _st[3]; /* 0x170BDB9D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170BDB9F: faddp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x170BDBA1: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BDBA3: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x170BDBA5: fcom qword ptr [0x17001da8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDBAB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170BDBAD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BDBBC; /* 0x170BDBB0: jne 0x170bdbbc */
L_170BDBB2:
    _st[0] = sqrt(_st[0]); /* 0x170BDBB2: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170BDBB4: fdivr dword ptr [0x17001424] */
    goto L_170BDBC0; /* 0x170BDBBA: jmp 0x170bdbc0 */
L_170BDBBC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BDBBC: fstp st(0) */
    fp_push(1.0); /* 0x170BDBBE: fld1  */
L_170BDBC0:
    fp_push(_st[0]); /* 0x170BDBC0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170BDBC2: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x170BDBC4: fstp dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170BDBC6: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x170BDBC9: fstp dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BDBCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BDBD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDBD2u);

L_170BDBD2:
    edi = edi; /* 0x170BDBD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDBD4: push ebp */
    ebp = esp; /* 0x170BDBD5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BDBD7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BDBD8: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x1C); /* 0x170BDBDB: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x170BDBDE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDBE9; /* 0x170BDBE0: je 0x170bdbe9 */
L_170BDBE2:
    PUSH32(esp, 1); /* 0x170BDBE2: push 1 */
    RECOMP_CALL(sub_170BC53B); /* 0x170BDBE4: call 0x170bc53b */
    RECOMP_FLAGS_IN();
L_170BDBE9:
    PUSH32(esp, esi); /* 0x170BDBE9: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x170BDBEA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BDBEF: pop ecx */
    esi = POP32_VAL(esp); /* 0x170BDBF0: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BDBF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BDBF2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BDBFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDBFAu);

L_170BDBFA:
    edi = edi; /* 0x170BDBFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDBFC: push ebp */
    ebp = esp; /* 0x170BDBFD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x170BDBFF: sub esp, 0x98 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x4); /* 0x170BDC05: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BDC08: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x170BDC09: push ebx */
    ebx = MEM32(ecx + 0xC); /* 0x170BDC0A: mov ebx, dword ptr [ecx + 0xc] */
    ecx = MEM32(ecx + 0x10); /* 0x170BDC0D: mov ecx, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x170BDC10: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BDCDE; /* 0x170BDC13: je 0x170bdcde */
L_170BDC19:
    fp_push(0.0); /* 0x170BDC19: fldz  */
    PUSH32(esp, esi); /* 0x170BDC1B: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BDC1C: fstp dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BDC1F: mov dword ptr [ebp - 8], eax */
    fp_push(0.0); /* 0x170BDC22: fldz  */
    PUSH32(esp, edi); /* 0x170BDC24: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BDC25: fstp dword ptr [ebp - 0x18] */
L_170BDC28:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BDC28: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_170BDB92); /* 0x170BDC2B: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x170BDC30: mov esi, ecx */
    edi = ebp + (-0x44); /* 0x170BDC32: lea edi, [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC35: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC36: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC37: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x44); /* 0x170BDC38: lea esi, [ebp - 0x44] */
    edi = ebp + (-0x50); /* 0x170BDC3B: lea edi, [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC3E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC3F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC40: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x44); /* 0x170BDC41: lea esi, [ebp - 0x44] */
    edi = ebp + (-0x5C); /* 0x170BDC44: lea edi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC49: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x44); /* 0x170BDC4A: lea esi, [ebp - 0x44] */
    edi = ebp + (-0x68); /* 0x170BDC4D: lea edi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC52: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx); /* 0x170BDC53: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x170BDC55: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebx + 0x4); /* 0x170BDC58: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BDC5B: mov dword ptr [ebp - 0x28], eax */
    esi = ebp + (-0x2C); /* 0x170BDC5E: lea esi, [ebp - 0x2c] */
    edi = ebp + (-0x98); /* 0x170BDC61: lea edi, [ebp - 0x98] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC67: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC68: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC69: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx); /* 0x170BDC6A: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170BDC6C: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x4); /* 0x170BDC6F: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BDC72: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x8); /* 0x170BDC75: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BDC78: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x170BDC7A: mov dword ptr [ebp - 0xc], ecx */
    esi = ebp + (-0x14); /* 0x170BDC7D: lea esi, [ebp - 0x14] */
    edi = ebp + (-0x8C); /* 0x170BDC80: lea edi, [ebp - 0x8c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC86: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC87: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDC88: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BDC89: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x170BDC8C: add ebx, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx); /* 0x170BDC8F: mov ecx, dword ptr [ebx] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x170BDC91: mov dword ptr [ebp - 0x38], ecx */
    ecx = MEM32(ebx + 0x4); /* 0x170BDC94: mov ecx, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x170BDC97: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(eax); /* 0x170BDC9A: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x170BDC9C: mov dword ptr [ebp - 0x30], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0xCu; /* 0x170BDC9F: add dword ptr [ebp - 4], 0xc */
    _flag_k = FK_ADD;
    esi = ebp + (-0x38); /* 0x170BDCA3: lea esi, [ebp - 0x38] */
    edi = ebp + (-0x80); /* 0x170BDCA6: lea edi, [ebp - 0x80] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCA9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCAA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCAB: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x170BDCAC: mov ecx, dword ptr [ebx] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x170BDCAE: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ebx + 0x4); /* 0x170BDCB1: mov ecx, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170BDCB4: mov dword ptr [ebp - 0x1c], ecx */
    esi = ebp + (-0x20); /* 0x170BDCB7: lea esi, [ebp - 0x20] */
    edi = ebp + (-0x74); /* 0x170BDCBA: lea edi, [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCBD: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x68); /* 0x170BDCBE: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x170BDCC1: push ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCC2: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x98); /* 0x170BDCC3: lea ecx, [ebp - 0x98] */
    PUSH32(esp, ecx); /* 0x170BDCC9: push ecx */
    ecx = MEM32(eax + 0x1C); /* 0x170BDCCA: mov ecx, dword ptr [eax + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDCCD: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_170BCCE4); /* 0x170BDCCE: call 0x170bcce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x170BDCD3: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDC28; /* 0x170BDCD6: jne 0x170bdc28 */
L_170BDCDC:
    edi = POP32_VAL(esp); /* 0x170BDCDC: pop edi */
    esi = POP32_VAL(esp); /* 0x170BDCDD: pop esi */
L_170BDCDE:
    ebx = POP32_VAL(esp); /* 0x170BDCDE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BDCDF: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BDCE0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BDCE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDCE8u);

L_170BDCE8:
    edi = edi; /* 0x170BDCE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDCEA: push ebp */
    ebp = esp; /* 0x170BDCEB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x170BDCED: sub esp, 0x30 */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x4); /* 0x170BDCF0: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x170BDCF3: push ebx */
    ebx = MEM32(eax + 0xC); /* 0x170BDCF4: mov ebx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x14); /* 0x170BDCF7: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, esi); /* 0x170BDCFA: push esi */
    PUSH32(esp, edi); /* 0x170BDCFB: push edi */
    edi = ecx + ecx; /* 0x170BDCFC: lea edi, [ecx + ecx] */
    esi = edi + edi * 2; /* 0x170BDCFF: lea esi, [edi + edi*2] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x170BDD02: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x170BDD02: shl esi, 2 */
    PUSH32(esp, esi); /* 0x170BDD05: push esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x170BDD06: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BDD09: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x170BDD0C: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BDD0F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BDD14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDD16: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BDD17: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDD32; /* 0x170BDD1A: je 0x170bdd32 */
L_170BDD1C:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BDD1C: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170BDD21: push edi */
    PUSH32(esp, 0xCu); /* 0x170BDD22: push 0xc */
    PUSH32(esp, eax); /* 0x170BDD24: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x170BDD25: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x170BDD2A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BDD2D: mov dword ptr [ebp - 4], eax */
    goto L_170BDD36; /* 0x170BDD30: jmp 0x170bdd36 */
L_170BDD32:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BDD32: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BDD36:
    PUSH32(esp, esi); /* 0x170BDD36: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x170BDD37: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BDD3C: mov esi, eax */
    /* test esi, esi */ /* 0x170BDD3E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDD40: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDD56; /* 0x170BDD41: je 0x170bdd56 */
L_170BDD43:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BDD43: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170BDD48: push edi */
    PUSH32(esp, 0xCu); /* 0x170BDD49: push 0xc */
    PUSH32(esp, esi); /* 0x170BDD4B: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x170BDD4C: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = esi; /* 0x170BDD51: mov dword ptr [ebp - 0xc], esi */
    goto L_170BDD5A; /* 0x170BDD54: jmp 0x170bdd5a */
L_170BDD56:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x170BDD56: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BDD5A:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170BDD5A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BDDE9; /* 0x170BDD5E: je 0x170bdde9 */
L_170BDD64:
    ecx = MEM32(ebp + (-0xC)); /* 0x170BDD64: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x170BDD67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDDE9; /* 0x170BDD69: je 0x170bdde9 */
L_170BDD6B:
    eax = MEM32(ebp + (-0x14)); /* 0x170BDD6B: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x170BDD6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDDD4; /* 0x170BDD70: je 0x170bddd4 */
L_170BDD72:
    edx = MEM32(ebp + (-0x4)); /* 0x170BDD72: mov edx, dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x170BDD75: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BDD77: fstp dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BDD7A: mov dword ptr [ebp - 0x10], eax */
L_170BDD7D:
    esi = MEM32(ebp + (-0x8)); /* 0x170BDD7D: mov esi, dword ptr [ebp - 8] */
    edi = ecx; /* 0x170BDD80: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD82: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD83: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD84: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx); /* 0x170BDD85: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x24)) = eax; /* 0x170BDD87: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebx + 0x4); /* 0x170BDD8A: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170BDD8D: mov dword ptr [ebp - 0x20], eax */
    edi = edx; /* 0x170BDD90: mov edi, edx */
    esi = ebp + (-0x24); /* 0x170BDD92: lea esi, [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD96: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDD97: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x170BDD98: mov esi, dword ptr [ebp - 8] */
    PUSH32(esp, 0xCu); /* 0x170BDD9B: push 0xc */
    eax = POP32_VAL(esp); /* 0x170BDD9D: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170BDD9E: add ecx, eax */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x170BDDA0: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDA2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDA3: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x170BDDA4: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDA7: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx); /* 0x170BDDA8: mov esi, dword ptr [ebx] */
    MEM32(ebp + (-0x30)) = esi; /* 0x170BDDAA: mov dword ptr [ebp - 0x30], esi */
    esi = MEM32(ebx + 0x4); /* 0x170BDDAD: mov esi, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x2C)) = esi; /* 0x170BDDB0: mov dword ptr [ebp - 0x2c], esi */
    esi = MEM32(ebp + 0x8); /* 0x170BDDB3: mov esi, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x170BDDB6: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170BDDB8: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = esi; /* 0x170BDDBA: mov dword ptr [ebp - 0x28], esi */
    edi = edx; /* 0x170BDDBD: mov edi, edx */
    esi = ebp + (-0x30); /* 0x170BDDBF: lea esi, [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDC2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDC3: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170BDDC4: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x170BDDC6: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x170BDDC8: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x170BDDCB: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDDCE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDD7D; /* 0x170BDDCF: jne 0x170bdd7d */
L_170BDDD1:
    edi = MEM32(ebp + (-0x18)); /* 0x170BDDD1: mov edi, dword ptr [ebp - 0x18] */
L_170BDDD4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BDDD4: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x170BDDD7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1C); /* 0x170BDDDA: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, edi); /* 0x170BDDDD: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BDDDE: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BDDE1: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_170BCE10); /* 0x170BDDE4: call 0x170bce10 */
    RECOMP_FLAGS_IN();
L_170BDDE9:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BDDE9: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x170BDDEC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BDDF1: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170BDDF4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BDDF9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BDDFA: pop ecx */
    edi = POP32_VAL(esp); /* 0x170BDDFB: pop edi */
    esi = POP32_VAL(esp); /* 0x170BDDFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BDDFD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BDDFE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BDDFF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BDE07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDE07u);

L_170BDE07:
    edi = edi; /* 0x170BDE07: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDE09: push ebp */
    ebp = esp; /* 0x170BDE0A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x170BDE0C: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170BDE0F: fld dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x8); /* 0x170BDE12: mov ecx, dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BDE15: fld dword ptr [0x17001430] */
    PUSH32(esp, esi); /* 0x170BDE1B: push esi */
    fp_push(_st[1]); /* 0x170BDE1C: fld st(1) */
    PUSH32(esp, edi); /* 0x170BDE1E: push edi */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BDE1F: fucompp  */
    fp_pop(); fp_pop();
    MEM32(ebp + (-0x4)) = ecx; /* 0x170BDE21: mov dword ptr [ebp - 4], ecx */
    fp_push(0.0); /* 0x170BDE24: fldz  */
    edi = ebp + (-0x20); /* 0x170BDE26: lea edi, [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170BDE29: fstp dword ptr [ebp - 0x14] */
    esi = ebp + (-0x14); /* 0x170BDE2C: lea esi, [ebp - 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDE2F: fnstsw ax */
    fp_push(0.0); /* 0x170BDE31: fldz  */
    /* test HI8(eax), 0x44u */ /* 0x170BDE33: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BDE36: fstp dword ptr [ebp - 0x10] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDE49; /* 0x170BDE39: jp 0x170bde49 */
L_170BDE3B:
    fp_push(1.0); /* 0x170BDE3B: fld1  */
    MEM32(ebp + 0x8) = 1; /* 0x170BDE3D: mov dword ptr [ebp + 8], 1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BDE44: fstp dword ptr [ebp - 0xc] */
    goto L_170BDE54; /* 0x170BDE47: jmp 0x170bde54 */
L_170BDE49:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170BDE49: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = 0xBF800000u; /* 0x170BDE4D: mov dword ptr [ebp - 0xc], 0xbf800000 */
L_170BDE54:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE54: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE55: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE56: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebx + 0x1C); /* 0x170BDE57: mov edi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x170BDE5A: add edi, 0x18 */
    _flag_k = FK_ADD;
    esi = ebp + (-0x20); /* 0x170BDE5D: lea esi, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE60: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE61: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BDE62: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx + 0x1C); /* 0x170BDE63: mov eax, dword ptr [ebx + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170BDE66: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDE69: fld dword ptr [ecx] */
    RECOMP_CALL(sub_1721B050); /* 0x170BDE6B: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x170BDE70: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170BDE73: add esi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x170BDE76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDED7; /* 0x170BDE78: je 0x170bded7 */
L_170BDE7A:
    MEM32(ebp + (-0x4)) = eax; /* 0x170BDE7A: mov dword ptr [ebp - 4], eax */
L_170BDE7D:
    fp_push(*(float*)&MEM32(esi)); /* 0x170BDE7D: fld dword ptr [esi] */
    RECOMP_CALL(sub_1721B050); /* 0x170BDE7F: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170BDE84: add esi, 4 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(esi)); /* 0x170BDE87: fld dword ptr [esi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BDE89: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1721B050); /* 0x170BDE8C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170BDE91: mov edi, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x170BDE93: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170BDE96: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x170BDE99: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BDEC2; /* 0x170BDE9C: je 0x170bdec2 */
L_170BDE9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BDE9E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BDEB3; /* 0x170BDE9F: je 0x170bdeb3 */
L_170BDEA1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BDEA1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDECF; /* 0x170BDEA2: jne 0x170bdecf */
L_170BDEA4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BDEA4: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x170BDEA7: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x170BDEAA: push edi */
    PUSH32(esp, esi); /* 0x170BDEAB: push esi */
    RECOMP_CALL(sub_170BCC4A); /* 0x170BDEAC: call 0x170bcc4a */
    RECOMP_FLAGS_IN();
    goto L_170BDECF; /* 0x170BDEB1: jmp 0x170bdecf */
L_170BDEB3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BDEB3: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x170BDEB6: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x170BDEB9: push edi */
    PUSH32(esp, esi); /* 0x170BDEBA: push esi */
    RECOMP_CALL(sub_170BCAEE); /* 0x170BDEBB: call 0x170bcaee */
    RECOMP_FLAGS_IN();
    goto L_170BDECF; /* 0x170BDEC0: jmp 0x170bdecf */
L_170BDEC2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BDEC2: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x1C); /* 0x170BDEC5: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x170BDEC8: push edi */
    PUSH32(esp, esi); /* 0x170BDEC9: push esi */
    RECOMP_CALL(sub_170BCBB4); /* 0x170BDECA: call 0x170bcbb4 */
    RECOMP_FLAGS_IN();
L_170BDECF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x170BDECF: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    esi = esi + edi * 8; /* 0x170BDED2: lea esi, [esi + edi*8] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDE7D; /* 0x170BDED5: jne 0x170bde7d */
L_170BDED7:
    edi = POP32_VAL(esp); /* 0x170BDED7: pop edi */
    esi = POP32_VAL(esp); /* 0x170BDED8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BDED9: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BDEDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BDEE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDEE2u);

L_170BDEE2:
    edi = edi; /* 0x170BDEE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDEE4: push ebp */
    ebp = esp; /* 0x170BDEE5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170BDEE7: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BDEEA: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BDEF0: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BDEF3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDEF5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BDEF7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDF11; /* 0x170BDEFA: jp 0x170bdf11 */
L_170BDEFC:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BDEFC: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDF02: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BDF04: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDF06: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BDF08: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDF11; /* 0x170BDF0B: jp 0x170bdf11 */
L_170BDF0D:
    fp_push(0.0); /* 0x170BDF0D: fldz  */
    goto L_170BDF18; /* 0x170BDF0F: jmp 0x170bdf18 */
L_170BDF11:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BDF11: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDF14: fld dword ptr [ecx] */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x170BDF16: fpatan  */
L_170BDF18:
    ecx = MEM32(ebp + 0xC); /* 0x170BDF18: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BDF1B: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BDF21: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BDF24: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDF26: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BDF28: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDF42; /* 0x170BDF2B: jp 0x170bdf42 */
L_170BDF2D:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170BDF2D: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDF33: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170BDF35: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDF37: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170BDF39: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDF42; /* 0x170BDF3C: jp 0x170bdf42 */
L_170BDF3E:
    fp_push(0.0); /* 0x170BDF3E: fldz  */
    goto L_170BDF49; /* 0x170BDF40: jmp 0x170bdf49 */
L_170BDF42:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170BDF42: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170BDF45: fld dword ptr [ecx] */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x170BDF47: fpatan  */
L_170BDF49:
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x170BDF49: fsubrp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006338)); /* 0x170BDF4B: fcom qword ptr [0x17006338] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDF51: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BDF53: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BDF60; /* 0x170BDF56: jp 0x170bdf60 */
L_170BDF58:
    _st[0] += *(double*)ADDR(0x17006330); /* 0x170BDF58: fadd qword ptr [0x17006330] */
    goto L_170BDF73; /* 0x170BDF5E: jmp 0x170bdf73 */
L_170BDF60:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006328)); /* 0x170BDF60: fcom qword ptr [0x17006328] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BDF66: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170BDF68: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BDF73; /* 0x170BDF6B: jne 0x170bdf73 */
L_170BDF6D:
    _st[0] -= *(double*)ADDR(0x17006330); /* 0x170BDF6D: fsub qword ptr [0x17006330] */
L_170BDF73:
    ebp = POP32_VAL(esp); /* 0x170BDF73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BDF74: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BDF7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BDF7Cu);

L_170BDF7C:
    edi = edi; /* 0x170BDF7C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BDF7E: push ebp */
    ebp = esp; /* 0x170BDF7F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BDF81: push esi */
    esi = eax; /* 0x170BDF82: mov esi, eax */
    eax = MEM32(esi + 0x10); /* 0x170BDF84: mov eax, dword ptr [esi + 0x10] */
    eax = eax + eax * 2; /* 0x170BDF87: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170BDF8A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170BDF8A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170BDF8D: push eax */
    RECOMP_CALL(sub_1721B254); /* 0x170BDF8E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BDF93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BDF95: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x170BDF96: mov dword ptr [esi + 0x18], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDFFC; /* 0x170BDF99: je 0x170bdffc */
L_170BDF9B:
    ecx = MEM32(esi + 0x4); /* 0x170BDF9B: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x170BDF9E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi); /* 0x170BDFA0: mov esi, dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BDFF9; /* 0x170BDFA2: je 0x170bdff9 */
L_170BDFA4:
    PUSH32(esp, ebx); /* 0x170BDFA4: push ebx */
    PUSH32(esp, edi); /* 0x170BDFA5: push edi */
    edx = esi + 0x4; /* 0x170BDFA6: lea edx, [esi + 4] */
    ebx = ecx; /* 0x170BDFA9: mov ebx, ecx */
L_170BDFAB:
    esi = MEM32(edx); /* 0x170BDFAB: mov esi, dword ptr [edx] */
    ecx = MEM32(edx + 0x8); /* 0x170BDFAD: mov ecx, dword ptr [edx + 8] */
    MEM32(edx + 0xC) = eax; /* 0x170BDFB0: mov dword ptr [edx + 0xc], eax */
    goto L_170BDFEE; /* 0x170BDFB3: jmp 0x170bdfee */
L_170BDFB5:
    /* cmp MEM32(ebp + 0x8), 0x900u */ /* 0x170BDFB5: cmp dword ptr [ebp + 8], 0x900 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x900u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx + 0x8; /* 0x170BDFBC: lea edi, [ecx + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x170BDFBF: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x170BDFC1: fsub dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x1723CA7C) = _v; } /* 0x170BDFC3: fst dword ptr [0x1723ca7c] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170BDFC9: fld dword ptr [ecx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x170BDFCC: fsub dword ptr [ecx + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x1723CA80) = _v; } /* 0x170BDFCF: fst dword ptr [0x1723ca80] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BDFDD; /* 0x170BDFD5: jne 0x170bdfdd */
L_170BDFD7:
    _st[0] = -_st[0]; /* 0x170BDFD7: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BDFD9: fstp dword ptr [eax] */
    goto L_170BDFE1; /* 0x170BDFDB: jmp 0x170bdfe1 */
L_170BDFDD:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BDFDD: fstp dword ptr [eax] */
    _st[0] = -_st[0]; /* 0x170BDFDF: fchs  */
L_170BDFE1:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BDFE1: fstp dword ptr [eax + 4] */
    ecx = edi; /* 0x170BDFE4: mov ecx, edi */
    fp_push(0.0); /* 0x170BDFE6: fldz  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x170BDFE8: add eax, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x4)) = _v; } /* 0x170BDFEB: fstp dword ptr [eax - 4] */
L_170BDFEE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170BDFEE: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDFB5; /* 0x170BDFEF: jne 0x170bdfb5 */
L_170BDFF1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BDFF1: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170BDFF4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BDFAB; /* 0x170BDFF5: jne 0x170bdfab */
L_170BDFF7:
    edi = POP32_VAL(esp); /* 0x170BDFF7: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BDFF8: pop ebx */
L_170BDFF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BDFF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BDFFB: inc eax */
    _flag_k = FK_INC;
L_170BDFFC:
    esi = POP32_VAL(esp); /* 0x170BDFFC: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BDFFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BDFFE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BE006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE006u);

L_170BE006:
    edi = edi; /* 0x170BE006: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE008: push ebp */
    ebp = esp; /* 0x170BE009: mov ebp, esp */
    eax = MEM32(esi + 0xC); /* 0x170BE00B: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x170BE00E: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BE030; /* 0x170BE011: jb 0x170be030 */
L_170BE013:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3E8u; /* 0x170BE013: add eax, 0x3e8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = eax; /* 0x170BE018: mov dword ptr [esi + 0xc], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170BE01B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170BE01B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170BE01E: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x170BE01F: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1721B260); /* 0x170BE022: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE027: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BE029: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170BE02A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE046; /* 0x170BE02B: je 0x170be046 */
L_170BE02D:
    MEM32(esi + 0x8) = eax; /* 0x170BE02D: mov dword ptr [esi + 8], eax */
L_170BE030:
    eax = MEM32(esi + 0x10); /* 0x170BE030: mov eax, dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170BE033: fld dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x8); /* 0x170BE036: mov ecx, dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x170BE039: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x170BE03C: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE03F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE041: inc eax */
    _flag_k = FK_INC;
L_170BE042:
    ebp = POP32_VAL(esp); /* 0x170BE042: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE043: ret 4 */
L_170BE046:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE046: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170BE042; /* 0x170BE048: jmp 0x170be042 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BE04F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE04Fu);

L_170BE04F:
    edi = edi; /* 0x170BE04F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE051: push ebp */
    ebp = esp; /* 0x170BE052: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170BE054: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BE055: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x170BE058: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE09E; /* 0x170BE05C: je 0x170be09e */
L_170BE05E:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170BE05E: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFA0u); /* 0x170BE062: push 0xfa0 */
    RECOMP_CALL(sub_1721B254); /* 0x170BE067: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE06C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BE06E: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x170BE06F: mov dword ptr [esi + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE0A3; /* 0x170BE072: je 0x170be0a3 */
L_170BE074:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x170BE074: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x170BE078: fldz  */
    PUSH32(esp, ecx); /* 0x170BE07A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE07B: fstp dword ptr [esp] */
    MEM32(esi + 0xC) = 0x3E8u; /* 0x170BE07E: mov dword ptr [esi + 0xc], 0x3e8 */
    RECOMP_CALL(sub_170BE006); /* 0x170BE085: call 0x170be006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE08A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE0A3; /* 0x170BE08C: je 0x170be0a3 */
L_170BE08E:
    ecx = MEM32(esi + 0x1C); /* 0x170BE08E: mov ecx, dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_170BD0C3); /* 0x170BE091: call 0x170bd0c3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE096: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BE0A3; /* 0x170BE098: jl 0x170be0a3 */
L_170BE09A:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x170BE09A: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE09E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE09E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE0A0: inc eax */
    _flag_k = FK_INC;
    goto L_170BE0A5; /* 0x170BE0A1: jmp 0x170be0a5 */
L_170BE0A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE0A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE0A5:
    esi = POP32_VAL(esp); /* 0x170BE0A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BE0A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE0A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BE0AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE0AFu);

L_170BE0AF:
    edi = edi; /* 0x170BE0AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE0B1: push ebp */
    ebp = esp; /* 0x170BE0B2: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x170BE0B4: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170BE0B7: push esi */
    esi = MEM32(eax + 0x1BC); /* 0x170BE0B8: mov esi, dword ptr [eax + 0x1bc] */
    eax = MEM32(esi + 0x8); /* 0x170BE0BE: mov eax, dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BE0C1: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x170BE0C3: fadd dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BE0C9: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x10); /* 0x170BE0CB: mov eax, dword ptr [esi + 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x170BE0CE: fild dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE0D1: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x14) = eax; /* 0x170BE0D2: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x170BE0D5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x170BE0D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BE0E2; /* 0x170BE0DA: jge 0x170be0e2 */
L_170BE0DC:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BE0DC: fadd dword ptr [0x1700142c] */
L_170BE0E2:
    PUSH32(esp, ecx); /* 0x170BE0E2: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE0E3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BE006); /* 0x170BE0E6: call 0x170be006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE0EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE0FE; /* 0x170BE0ED: je 0x170be0fe */
L_170BE0EF:
    fp_push(0.0); /* 0x170BE0EF: fldz  */
    PUSH32(esp, ecx); /* 0x170BE0F1: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE0F2: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BE006); /* 0x170BE0F5: call 0x170be006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE0FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE105; /* 0x170BE0FC: jne 0x170be105 */
L_170BE0FE:
    MEM32(esi + 0x18) = 0x8007000Eu; /* 0x170BE0FE: mov dword ptr [esi + 0x18], 0x8007000e */
L_170BE105:
    esi = POP32_VAL(esp); /* 0x170BE105: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BE106: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BE107: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BE10F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE10Fu);

L_170BE10F:
    edi = edi; /* 0x170BE10F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE111: push ebp */
    ebp = esp; /* 0x170BE112: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x170BE114: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170BE117: push esi */
    esi = MEM32(eax + 0x1BC); /* 0x170BE118: mov esi, dword ptr [eax + 0x1bc] */
    PUSH32(esp, edi); /* 0x170BE11E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170BE11F: mov edi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x170BE122: fld dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x170BE124: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE125: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BE006); /* 0x170BE128: call 0x170be006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE12D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE141; /* 0x170BE12F: je 0x170be141 */
L_170BE131:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x170BE131: fld dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x170BE134: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE135: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BE006); /* 0x170BE138: call 0x170be006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE13D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE148; /* 0x170BE13F: jne 0x170be148 */
L_170BE141:
    MEM32(esi + 0x18) = 0x8007000Eu; /* 0x170BE141: mov dword ptr [esi + 0x18], 0x8007000e */
L_170BE148:
    eax = MEM32(esi + 0x14); /* 0x170BE148: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x170BE14B: mov ecx, dword ptr [esi + 8] */
    eax = ecx + eax * 4; /* 0x170BE14E: lea eax, [ecx + eax*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BE151: fld dword ptr [eax] */
    edi = POP32_VAL(esp); /* 0x170BE153: pop edi */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x170BE154: fadd dword ptr [0x17001424] */
    esi = POP32_VAL(esp); /* 0x170BE15A: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BE15B: fstp dword ptr [eax] */
    ebp = POP32_VAL(esp); /* 0x170BE15D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BE15E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BE166(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE166u);

L_170BE166:
    edi = edi; /* 0x170BE166: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE168: push ebp */
    ebp = esp; /* 0x170BE169: mov ebp, esp */
    ecx = MEM32(eax + 0x4); /* 0x170BE16B: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x170BE16E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BE170: push esi */
    esi = MEM32(eax); /* 0x170BE171: mov esi, dword ptr [eax] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE1A5; /* 0x170BE173: je 0x170be1a5 */
L_170BE175:
    PUSH32(esp, edi); /* 0x170BE175: push edi */
    edi = ecx; /* 0x170BE176: mov edi, ecx */
L_170BE178:
    eax = MEM32(esi); /* 0x170BE178: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170BE17A: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE191; /* 0x170BE17D: je 0x170be191 */
L_170BE17F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE17F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE19E; /* 0x170BE180: jne 0x170be19e */
L_170BE182:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE182: push dword ptr [ebp + 0xc] */
    eax = esi; /* 0x170BE185: mov eax, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE187: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BDCE8); /* 0x170BE18A: call 0x170bdce8 */
    RECOMP_FLAGS_IN();
    goto L_170BE19E; /* 0x170BE18F: jmp 0x170be19e */
L_170BE191:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE191: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x170BE194: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE196: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BDBFA); /* 0x170BE199: call 0x170bdbfa */
    RECOMP_FLAGS_IN();
L_170BE19E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x170BE19E: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BE1A1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE178; /* 0x170BE1A2: jne 0x170be178 */
L_170BE1A4:
    edi = POP32_VAL(esp); /* 0x170BE1A4: pop edi */
L_170BE1A5:
    esi = POP32_VAL(esp); /* 0x170BE1A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x170BE1A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BE1A7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BE1AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE1AFu);

L_170BE1AF:
    edi = edi; /* 0x170BE1AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE1B1: push ebp */
    ebp = esp; /* 0x170BE1B2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BE1B4: push ecx */
    PUSH32(esp, ebx); /* 0x170BE1B5: push ebx */
    PUSH32(esp, edi); /* 0x170BE1B6: push edi */
    edi = eax; /* 0x170BE1B7: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x170BE1B9: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BE1BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 2 */ /* 0x170BE1BE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BE266; /* 0x170BE1C1: jb 0x170be266 */
L_170BE1C7:
    edx = MEM32(edi); /* 0x170BE1C7: mov edx, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x170BE1C9: push esi */
    esi = edx; /* 0x170BE1CA: mov esi, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BE1CC: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE1CF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE265; /* 0x170BE1D0: je 0x170be265 */
L_170BE1D6:
    MEM32(ebp + (-0x4)) = eax; /* 0x170BE1D6: mov dword ptr [ebp - 4], eax */
L_170BE1D9:
    eax = edx; /* 0x170BE1D9: mov eax, edx */
    ecx = esi; /* 0x170BE1DB: mov ecx, esi */
    RECOMP_CALL(sub_170BDAE4); /* 0x170BE1DD: call 0x170bdae4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE1E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE211; /* 0x170BE1E4: je 0x170be211 */
L_170BE1E6:
    /* cmp eax, 3 */ /* 0x170BE1E6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE229; /* 0x170BE1E9: jne 0x170be229 */
L_170BE1EB:
    eax = MEM32(esi + 0x4); /* 0x170BE1EB: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x10); /* 0x170BE1EE: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x170BE1F1: push dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE1F4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE1F5: dec eax */
    _flag_k = FK_DEC;
    eax = eax + eax * 2; /* 0x170BE1F6: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x170BE1F9: lea eax, [ecx + eax*4] */
    PUSH32(esp, eax); /* 0x170BE1FC: push eax */
    RECOMP_CALL(sub_170BDEE2); /* 0x170BE1FD: call 0x170bdee2 */
    RECOMP_FLAGS_IN();
    _st[0] = fabs(_st[0]); /* 0x170BE202: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006318)); /* 0x170BE204: fcomp qword ptr [0x17006318] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE20A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BE20C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BE229; /* 0x170BE20F: jp 0x170be229 */
L_170BE211:
    eax = MEM32(esi + 0x4); /* 0x170BE211: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE214: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + eax; /* 0x170BE215: add dword ptr [edx + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0xC); /* 0x170BE218: mov eax, dword ptr [esi + 0xc] */
    MEM32(edx + 0xC) = eax; /* 0x170BE21B: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x170BE21E: mov eax, dword ptr [esi + 0x10] */
    MEM32(edx + 0x10) = eax; /* 0x170BE221: mov dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170BE224: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BE228: inc ebx */
    _flag_k = FK_INC;
L_170BE229:
    esi = edx; /* 0x170BE229: mov esi, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BE22B: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x170BE22E: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE1D9; /* 0x170BE231: jne 0x170be1d9 */
L_170BE233:
    /* test ebx, ebx */ /* 0x170BE233: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE265; /* 0x170BE235: je 0x170be265 */
L_170BE237:
    eax = MEM32(edi + 0x4); /* 0x170BE237: mov eax, dword ptr [edi + 4] */
    edx = MEM32(edi); /* 0x170BE23A: mov edx, dword ptr [edi] */
    ecx = eax; /* 0x170BE23C: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x170BE23E: sub ecx, ebx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x170BE240: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ecx; /* 0x170BE242: mov dword ptr [edi + 4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE265; /* 0x170BE245: je 0x170be265 */
L_170BE247:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BE247: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE249:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x170BE249: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE254; /* 0x170BE24D: jne 0x170be254 */
L_170BE24F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x170BE24F: add ebx, 0x18 */
    _flag_k = FK_ADD;
    goto L_170BE25F; /* 0x170BE252: jmp 0x170be25f */
L_170BE254:
    edi = edx; /* 0x170BE254: mov edi, edx */
    PUSH32(esp, 6); /* 0x170BE256: push 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x170BE258: sub edi, ebx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170BE25A: pop ecx */
    esi = edx; /* 0x170BE25B: mov esi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BE25D: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_170BE25F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BE25F: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE262: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE249; /* 0x170BE263: jne 0x170be249 */
L_170BE265:
    esi = POP32_VAL(esp); /* 0x170BE265: pop esi */
L_170BE266:
    edi = POP32_VAL(esp); /* 0x170BE266: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BE267: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE268: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BE269: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BE26F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE26Fu);

L_170BE26F:
    edi = edi; /* 0x170BE26F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE271: push ebp */
    ebp = esp; /* 0x170BE272: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170BE274: sub esp, 0x18 */
    _flag_k = FK_CMP;
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x170BE277: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x170BE27B: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BE27D: fstp qword ptr [ebp - 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE320; /* 0x170BE280: je 0x170be320 */
L_170BE286:
    RECOMP_CALL(sub_170BDB05); /* 0x170BE286: call 0x170bdb05 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x10); /* 0x170BE28B: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 3 */ /* 0x170BE28E: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170BE320; /* 0x170BE291: jb 0x170be320 */
L_170BE297:
    edx = MEM32(eax + 0xC); /* 0x170BE297: mov edx, dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(edx)); /* 0x170BE29A: fld dword ptr [edx] */
    eax = edx + ecx * 8 + (-0x10); /* 0x170BE29C: lea eax, [edx + ecx*8 - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170BE2A0: dec ecx */
    _flag_k = FK_DEC;
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x170BE2A1: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170BE2A3: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170BE2A6: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x170BE2A9: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170BE2AC: fstp dword ptr [ebp - 0xc] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE2EC; /* 0x170BE2AF: je 0x170be2ec */
L_170BE2B1:
    PUSH32(esp, esi); /* 0x170BE2B1: push esi */
    esi = ecx; /* 0x170BE2B2: mov esi, ecx */
L_170BE2B4:
    eax = edx; /* 0x170BE2B4: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x170BE2B6: add edx, 8 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx)); /* 0x170BE2B9: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x170BE2BB: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170BE2BD: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170BE2C0: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x170BE2C3: fsub dword ptr [eax + 4] */
    eax = ebp + (-0x8); /* 0x170BE2C6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x170BE2C9: push eax */
    eax = ebp + (-0x10); /* 0x170BE2CA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x170BE2CD: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170BE2CE: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_170BDEE2); /* 0x170BE2D1: call 0x170bdee2 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x170BE2D6: fadd qword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170BE2D9: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x8)); /* 0x170BE2DA: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BE2DD: mov dword ptr [ebp - 0x10], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BE2E0: fstp qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x4)); /* 0x170BE2E3: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x170BE2E6: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE2B4; /* 0x170BE2E9: jne 0x170be2b4 */
L_170BE2EB:
    esi = POP32_VAL(esp); /* 0x170BE2EB: pop esi */
L_170BE2EC:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x170BE2EC: fld qword ptr [ebp - 0x18] */
    _st[0] = fabs(_st[0]); /* 0x170BE2EF: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x170063A0)); /* 0x170BE2F1: fcomp qword ptr [0x170063a0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE2F7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BE2F9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BE30B; /* 0x170BE2FC: jp 0x170be30b */
L_170BE2FE:
    PUSH32(esp, 0x17006340u); /* 0x170BE2FE: push 0x17006340 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x170BE303: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    goto L_170BE320; /* 0x170BE309: jmp 0x170be320 */
L_170BE30B:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x170BE30B: fld qword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x170BE30E: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE314: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170BE316: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x901u; /* 0x170BE319: mov eax, 0x901 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE325; /* 0x170BE31E: je 0x170be325 */
L_170BE320:
    eax = 0x900u; /* 0x170BE320: mov eax, 0x900 */
L_170BE325:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE325: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BE326: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BE32C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE32Cu);

L_170BE32C:
    edi = edi; /* 0x170BE32C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE32E: push ebp */
    ebp = esp; /* 0x170BE32F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170BE331: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BE334: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170BE335: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x4); /* 0x170BE338: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x170BE33B: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE33D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x170BE33F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE4DC; /* 0x170BE341: je 0x170be4dc */
L_170BE347:
    /* cmp MEM32(ecx), 4 */ /* 0x170BE347: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE34F; /* 0x170BE34A: jne 0x170be34f */
L_170BE34C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x170BE34C: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
L_170BE34F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x170BE34F: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170BE352: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE347; /* 0x170BE353: jne 0x170be347 */
L_170BE355:
    /* test eax, eax */ /* 0x170BE355: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE4DC; /* 0x170BE357: je 0x170be4dc */
L_170BE35D:
    eax = eax + eax * 2; /* 0x170BE35D: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170BE360: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170BE360: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170BE363: push eax */
    RECOMP_CALL(sub_1721B254); /* 0x170BE364: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BE369: pop ecx */
    ecx = eax; /* 0x170BE36A: mov ecx, eax */
    /* test ecx, ecx */ /* 0x170BE36C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x170BE36E: mov dword ptr [esi + 0x1c], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE4DF; /* 0x170BE371: je 0x170be4df */
L_170BE377:
    eax = MEM32(esi + 0x4); /* 0x170BE377: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x170BE37A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x170BE37C: mov edx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x170BE37E: push ebx */
    PUSH32(esp, edi); /* 0x170BE37F: push edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x170BE380: mov dword ptr [ebp - 8], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE3FF; /* 0x170BE383: je 0x170be3ff */
L_170BE385:
    MEM32(ebp + (-0xC)) = eax; /* 0x170BE385: mov dword ptr [ebp - 0xc], eax */
L_170BE388:
    /* cmp MEM32(edx), 3 */ /* 0x170BE388: cmp dword ptr [edx], 3 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE3F4; /* 0x170BE38B: je 0x170be3f4 */
L_170BE38D:
    ebx = MEM32(edx + 0x10); /* 0x170BE38D: mov ebx, dword ptr [edx + 0x10] */
    eax = MEM32(edx + 0x4); /* 0x170BE390: mov eax, dword ptr [edx + 4] */
    MEM32(edx + 0x14) = ecx; /* 0x170BE393: mov dword ptr [edx + 0x14], ecx */
    esi = ebx; /* 0x170BE396: mov esi, ebx */
    edi = ecx; /* 0x170BE398: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE39A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE39B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BE39C: mov dword ptr [ebp - 4], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE39F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_170BDB92); /* 0x170BE3A0: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x170BE3A5: push 0xc */
    esi = POP32_VAL(esp); /* 0x170BE3A7: pop esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170BE3A8: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x170BE3AA: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 2; /* 0x170BE3AC: sub dword ptr [ebp - 4], 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE3E1; /* 0x170BE3B0: je 0x170be3e1 */
L_170BE3B2:
    edi = MEM32(ebp + (-0x4)); /* 0x170BE3B2: mov edi, dword ptr [ebp - 4] */
    edx = ebx + (-0x4); /* 0x170BE3B5: lea edx, [ebx - 4] */
L_170BE3B8:
    fp_push(*(float*)&MEM32(edx + (-0x8))); /* 0x170BE3B8: fld dword ptr [edx - 8] */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170BE3BB: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x170BE3BD: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170BE3BF: fld dword ptr [edx + 8] */
    _st[0] += (double)*(float*)ADDR(edx + (-0x4)); /* 0x170BE3C2: fadd dword ptr [edx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x170BE3C5: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170BE3C8: fld dword ptr [edx + 0xc] */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x170BE3CB: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x170BE3CD: fstp dword ptr [ecx + 8] */
    RECOMP_CALL(sub_170BDB92); /* 0x170BE3D0: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x170BE3D5: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x170BE3D7: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170BE3D9: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BE3DB: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE3B8; /* 0x170BE3DC: jne 0x170be3b8 */
L_170BE3DE:
    edx = MEM32(ebp + (-0x8)); /* 0x170BE3DE: mov edx, dword ptr [ebp - 8] */
L_170BE3E1:
    esi = ebx + (-0xC); /* 0x170BE3E1: lea esi, [ebx - 0xc] */
    edi = ecx; /* 0x170BE3E4: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE3E6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE3E7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE3E8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_170BDB92); /* 0x170BE3E9: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170BE3EE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x170BE3F1: add ecx, 0xc */
    _flag_k = FK_ADD;
L_170BE3F4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BE3F4: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x170BE3F7: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x170BE3FA: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE388; /* 0x170BE3FD: jne 0x170be388 */
L_170BE3FF:
    eax = MEM32(esi + 0x4); /* 0x170BE3FF: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x170BE402: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x170BE404: mov edx, dword ptr [esi] */
    ecx = eax + eax * 2; /* 0x170BE406: lea ecx, [eax + eax*2] */
    edi = edx + ecx * 8 + (-0x18); /* 0x170BE409: lea edi, [edx + ecx*8 - 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE4DA; /* 0x170BE40D: je 0x170be4da */
L_170BE413:
    MEM32(ebp + 0x8) = eax; /* 0x170BE413: mov dword ptr [ebp + 8], eax */
L_170BE416:
    eax = MEM32(edi + 0x4); /* 0x170BE416: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x10); /* 0x170BE419: mov ecx, dword ptr [edi + 0x10] */
    esi = MEM32(edx + 0x10); /* 0x170BE41C: mov esi, dword ptr [edx + 0x10] */
    eax = eax + eax * 2 + (-0x6); /* 0x170BE41F: lea eax, [eax + eax*2 - 6] */
    ebx = ecx + eax * 4; /* 0x170BE423: lea ebx, [ecx + eax*4] */
    PUSH32(esp, esi); /* 0x170BE426: push esi */
    PUSH32(esp, ebx); /* 0x170BE427: push ebx */
    RECOMP_CALL(sub_170BDEE2); /* 0x170BE428: call 0x170bdee2 */
    RECOMP_FLAGS_IN();
    _st[0] = fabs(_st[0]); /* 0x170BE42D: fabs  */
    eax = edx; /* 0x170BE42F: mov eax, edx */
    ecx = edi; /* 0x170BE431: mov ecx, edi */
    RECOMP_CALL(sub_170BDAE4); /* 0x170BE433: call 0x170bdae4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE438: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE4AB; /* 0x170BE439: je 0x170be4ab */
L_170BE43B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE43B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BE48A; /* 0x170BE43C: je 0x170be48a */
L_170BE43E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BE43E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE4CA; /* 0x170BE43F: jne 0x170be4ca */
L_170BE445:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006318)); /* 0x170BE445: fcomp qword ptr [0x17006318] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE44B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BE44D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BE4CC; /* 0x170BE450: jp 0x170be4cc */
L_170BE452:
    fp_push(*(float*)&MEM32(esi)); /* 0x170BE452: fld dword ptr [esi] */
    eax = MEM32(edx + 0x14); /* 0x170BE454: mov eax, dword ptr [edx + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x170BE457: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BE459: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x170BE45B: fld dword ptr [ebx + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x170BE45E: fadd dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BE461: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x170BE464: fld dword ptr [ebx + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x8); /* 0x170BE467: fadd dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170BE46A: fstp dword ptr [eax + 8] */
    ecx = MEM32(edx + 0x14); /* 0x170BE46D: mov ecx, dword ptr [edx + 0x14] */
    RECOMP_CALL(sub_170BDB92); /* 0x170BE470: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x170BE475: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x14); /* 0x170BE478: mov ecx, dword ptr [edi + 0x14] */
    esi = MEM32(edx + 0x14); /* 0x170BE47B: mov esi, dword ptr [edx + 0x14] */
    eax = eax + eax * 2; /* 0x170BE47E: lea eax, [eax + eax*2] */
    edi = ecx + eax * 4 + (-0xC); /* 0x170BE481: lea edi, [ecx + eax*4 - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE485: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE486: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE487: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_170BE4CC; /* 0x170BE488: jmp 0x170be4cc */
L_170BE48A:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006320)); /* 0x170BE48A: fcomp qword ptr [0x17006320] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE490: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BE492: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BE4CC; /* 0x170BE495: jp 0x170be4cc */
L_170BE497:
    eax = MEM32(edi + 0x4); /* 0x170BE497: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x14); /* 0x170BE49A: mov ecx, dword ptr [edi + 0x14] */
    eax = eax + eax * 2; /* 0x170BE49D: lea eax, [eax + eax*2] */
    ecx = ecx + eax * 4 + (-0xC); /* 0x170BE4A0: lea ecx, [ecx + eax*4 - 0xc] */
    edi = ecx; /* 0x170BE4A4: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4A7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4A8: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_170BE4C3; /* 0x170BE4A9: jmp 0x170be4c3 */
L_170BE4AB:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17006320)); /* 0x170BE4AB: fcomp qword ptr [0x17006320] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170BE4B1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170BE4B3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170BE4CC; /* 0x170BE4B6: jp 0x170be4cc */
L_170BE4B8:
    edi = MEM32(edx + 0x14); /* 0x170BE4B8: mov edi, dword ptr [edx + 0x14] */
    esi = ebx; /* 0x170BE4BB: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4BD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4BE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE4BF: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(edx + 0x14); /* 0x170BE4C0: mov ecx, dword ptr [edx + 0x14] */
L_170BE4C3:
    RECOMP_CALL(sub_170BDB92); /* 0x170BE4C3: call 0x170bdb92 */
    RECOMP_FLAGS_IN();
    goto L_170BE4CC; /* 0x170BE4C8: jmp 0x170be4cc */
L_170BE4CA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BE4CA: fstp st(0) */
L_170BE4CC:
    edi = edx; /* 0x170BE4CC: mov edi, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x170BE4CE: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x170BE4D1: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE416; /* 0x170BE4D4: jne 0x170be416 */
L_170BE4DA:
    edi = POP32_VAL(esp); /* 0x170BE4DA: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BE4DB: pop ebx */
L_170BE4DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE4DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE4DE: inc eax */
    _flag_k = FK_INC;
L_170BE4DF:
    esi = POP32_VAL(esp); /* 0x170BE4DF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE4E0: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE4E1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BE4E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE4E9u);

L_170BE4E9:
    edi = edi; /* 0x170BE4E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE4EB: push ebp */
    ebp = esp; /* 0x170BE4EC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BE4EE: push ecx */
    PUSH32(esp, esi); /* 0x170BE4EF: push esi */
    esi = eax; /* 0x170BE4F0: mov esi, eax */
    PUSH32(esp, edi); /* 0x170BE4F2: push edi */
    edi = MEM32(esi + 0x4); /* 0x170BE4F3: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x170BE4F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE4FF; /* 0x170BE4F8: jne 0x170be4ff */
L_170BE4FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE4FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE4FC: inc eax */
    _flag_k = FK_INC;
    goto L_170BE553; /* 0x170BE4FD: jmp 0x170be553 */
L_170BE4FF:
    PUSH32(esp, ebx); /* 0x170BE4FF: push ebx */
    eax = esi; /* 0x170BE500: mov eax, esi */
    RECOMP_CALL(sub_170BE26F); /* 0x170BE502: call 0x170be26f */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x170BE507: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BE509: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x901u */ /* 0x170BE50B: cmp eax, 0x901 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x170BE510: mov dword ptr [ebp - 4], eax */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170BE513: sete bl */
L_170BE516:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BE516: push dword ptr [ebp - 4] */
    eax = esi; /* 0x170BE519: mov eax, esi */
    RECOMP_CALL(sub_170BDF7C); /* 0x170BE51B: call 0x170bdf7c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE520: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE559; /* 0x170BE522: je 0x170be559 */
L_170BE524:
    eax = esi; /* 0x170BE524: mov eax, esi */
    RECOMP_CALL(sub_170BE1AF); /* 0x170BE526: call 0x170be1af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x170BE52B: push esi */
    RECOMP_CALL(sub_170BE32C); /* 0x170BE52C: call 0x170be32c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE531: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x170BE533: mov eax, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE55D; /* 0x170BE535: je 0x170be55d */
L_170BE537:
    PUSH32(esp, ebx); /* 0x170BE537: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE538: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE166); /* 0x170BE53B: call 0x170be166 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BE540: mov eax, esi */
    RECOMP_CALL(sub_170BDAB8); /* 0x170BE542: call 0x170bdab8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BE547: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x170BE548: add esi, 0x20 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x170BE54B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE516; /* 0x170BE54D: jne 0x170be516 */
L_170BE54F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE54F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE551: inc eax */
    _flag_k = FK_INC;
L_170BE552:
    ebx = POP32_VAL(esp); /* 0x170BE552: pop ebx */
L_170BE553:
    edi = POP32_VAL(esp); /* 0x170BE553: pop edi */
    esi = POP32_VAL(esp); /* 0x170BE554: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE555: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE556: ret 4 */
L_170BE559:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE559: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170BE552; /* 0x170BE55B: jmp 0x170be552 */
L_170BE55D:
    RECOMP_CALL(sub_170BDAB8); /* 0x170BE55D: call 0x170bdab8 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_170BE559; /* 0x170BE562: jmp 0x170be559 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BE569(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE569u);

L_170BE569:
    edi = edi; /* 0x170BE569: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE56B: push ebp */
    ebp = esp; /* 0x170BE56C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x170BE56E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x170BE571: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170BE572: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170BE575: push ebx */
    RECOMP_CALL(sub_170BE4E9); /* 0x170BE576: call 0x170be4e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE57B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE598; /* 0x170BE57D: je 0x170be598 */
L_170BE57F:
    fp_push(0.0); /* 0x170BE57F: fldz  */
    PUSH32(esp, ecx); /* 0x170BE581: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE582: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BDE07); /* 0x170BE585: call 0x170bde07 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx)); /* 0x170BE58A: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x170BE58C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170BE58D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_170BDE07); /* 0x170BE590: call 0x170bde07 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE595: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BE597: inc eax */
    _flag_k = FK_INC;
L_170BE598:
    ebx = POP32_VAL(esp); /* 0x170BE598: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BE599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170BE59A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170BE5A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE5A2u);

L_170BE5A2:
    edi = edi; /* 0x170BE5A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE5A4: push ebp */
    ebp = esp; /* 0x170BE5A5: mov ebp, esp */
    ecx = MEM32(0x17230508); /* 0x170BE5A7: mov ecx, dword ptr [0x17230508] */
    eax = 0x170063D0u; /* 0x170BE5AD: mov eax, 0x170063d0 */
    /* cmp ecx, eax */ /* 0x170BE5B2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BE5C4; /* 0x170BE5B4: jbe 0x170be5c4 */
L_170BE5B6:
    edx = MEM32(ebp + 0x8); /* 0x170BE5B6: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(eax) */ /* 0x170BE5B9: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE5C9; /* 0x170BE5BB: je 0x170be5c9 */
L_170BE5BD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x170BE5BD: add eax, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x170BE5C0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BE5B6; /* 0x170BE5C2: jb 0x170be5b6 */
L_170BE5C4:
    eax = 0x170063A8u; /* 0x170BE5C4: mov eax, 0x170063a8 */
L_170BE5C9:
    ebp = POP32_VAL(esp); /* 0x170BE5C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE5CA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BE5D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE5D2u);

L_170BE5D2:
    edi = edi; /* 0x170BE5D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE5D4: push ebp */
    ebp = esp; /* 0x170BE5D5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170BE5D7: push ecx */
    eax = MEM32(ecx + 0x4); /* 0x170BE5D8: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x170BE5DB: push esi */
    esi = eax + eax * 4; /* 0x170BE5DC: lea esi, [eax + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edx + 0x4); /* 0x170BE5DF: add esi, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BE5E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi * 4 + 0x17006BD8), eax */ /* 0x170BE5E4: cmp dword ptr [esi*4 + 0x17006bd8], eax */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x17006BD8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE643; /* 0x170BE5EB: je 0x170be643 */
L_170BE5ED:
    PUSH32(esp, ebx); /* 0x170BE5ED: push ebx */
    PUSH32(esp, edi); /* 0x170BE5EE: push edi */
    edi = edx; /* 0x170BE5EF: mov edi, edx */
    PUSH32(esp, 5); /* 0x170BE5F1: push 5 */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BE5F3: mov dword ptr [ebp - 4], eax */
    esi = ecx + 0xC; /* 0x170BE5F6: lea esi, [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x170BE5F9: sub edi, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x170BE5FB: pop ebx */
L_170BE5FC:
    ecx = MEM32(esi); /* 0x170BE5FC: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x170BE5FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE605; /* 0x170BE600: jbe 0x170be605 */
L_170BE602:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BE602: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_170BE605:
    edx = MEM32(edi + esi); /* 0x170BE605: mov edx, dword ptr [edi + esi] */
    /* cmp ecx, edx */ /* 0x170BE608: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BE61D; /* 0x170BE60A: jae 0x170be61d */
L_170BE60C:
    /* test ecx, ecx */ /* 0x170BE60C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE617; /* 0x170BE60E: jne 0x170be617 */
L_170BE610:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x100u; /* 0x170BE610: add eax, 0x100 */
    _flag_k = FK_ADD;
    goto L_170BE631; /* 0x170BE615: jmp 0x170be631 */
L_170BE617:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x170BE617: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170BE619: add eax, edx */
    _flag_k = FK_ADD;
    goto L_170BE631; /* 0x170BE61B: jmp 0x170be631 */
L_170BE61D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_170BE631; /* 0x170BE61D: jbe 0x170be631 */
L_170BE61F:
    /* test edx, edx */ /* 0x170BE61F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE62A; /* 0x170BE621: jne 0x170be62a */
L_170BE623:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x01000000u; /* 0x170BE623: add eax, 0x1000000 */
    _flag_k = FK_ADD;
    goto L_170BE631; /* 0x170BE628: jmp 0x170be631 */
L_170BE62A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170BE62A: sub ecx, edx */
    _flag_k = FK_CMP;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x170BE62C: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x170BE62C: shl ecx, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170BE62F: add eax, ecx */
    _flag_k = FK_ADD;
L_170BE631:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170BE631: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x170BE634: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BE5FC; /* 0x170BE635: jne 0x170be5fc */
L_170BE637:
    ecx = eax; /* 0x170BE637: mov ecx, eax */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x170BE639: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x170BE639: shr ecx, 0x18 */
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x170BE63C: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170BE63F: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BE640: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE646; /* 0x170BE641: jne 0x170be646 */
L_170BE643:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x170BE643: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE646:
    esi = POP32_VAL(esp); /* 0x170BE646: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE647: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170BE648: ret  */
    RECOMP_REGS_OUT();
}

void sub_170BE64E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE64Eu);

L_170BE64E:
    edi = edi; /* 0x170BE64E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE650: push ebp */
    ebp = esp; /* 0x170BE651: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170BE653: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170BE656: push ebx */
    PUSH32(esp, esi); /* 0x170BE657: push esi */
    PUSH32(esp, edi); /* 0x170BE658: push edi */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x170BE659: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x170063A8u; /* 0x170BE65C: mov edi, 0x170063a8 */
    MEM32(ebp + 0x8) = eax; /* 0x170BE661: mov dword ptr [ebp + 8], eax */
    goto L_170BE6AC; /* 0x170BE664: jmp 0x170be6ac */
L_170BE666:
    PUSH32(esp, eax); /* 0x170BE666: push eax */
    RECOMP_CALL(sub_170BE5A2); /* 0x170BE667: call 0x170be5a2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BE66C: mov esi, eax */
    eax = MEM32(esi); /* 0x170BE66E: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170BE670: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE6A5; /* 0x170BE672: je 0x170be6a5 */
L_170BE674:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x170BE674: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE680; /* 0x170BE678: jne 0x170be680 */
L_170BE67A:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x170BE67A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE6A5; /* 0x170BE67E: je 0x170be6a5 */
L_170BE680:
    ecx = MEM32(ebp + 0x10); /* 0x170BE680: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ecx), eax */ /* 0x170BE683: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE6BB; /* 0x170BE685: je 0x170be6bb */
L_170BE687:
    edx = esi; /* 0x170BE687: mov edx, esi */
    RECOMP_CALL(sub_170BE5D2); /* 0x170BE689: call 0x170be5d2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x170BE68E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE6A5; /* 0x170BE691: je 0x170be6a5 */
L_170BE693:
    /* cmp eax, ebx */ /* 0x170BE693: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170BE6A5; /* 0x170BE695: ja 0x170be6a5 */
L_170BE697:
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE6A1; /* 0x170BE697: jne 0x170be6a1 */
L_170BE699:
    ecx = MEM32(esi + 0x8); /* 0x170BE699: mov ecx, dword ptr [esi + 8] */
    /* cmp ecx, MEM32(edi + 0x8) */ /* 0x170BE69C: cmp ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BE6A5; /* 0x170BE69F: jae 0x170be6a5 */
L_170BE6A1:
    ebx = eax; /* 0x170BE6A1: mov ebx, eax */
    edi = esi; /* 0x170BE6A3: mov edi, esi */
L_170BE6A5:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x170BE6A5: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x170BE6A9: mov eax, dword ptr [ebp + 8] */
L_170BE6AC:
    eax = MEM32(eax); /* 0x170BE6AC: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x170BE6AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BE666; /* 0x170BE6B0: jne 0x170be666 */
L_170BE6B2:
    eax = MEM32(edi); /* 0x170BE6B2: mov eax, dword ptr [edi] */
L_170BE6B4:
    edi = POP32_VAL(esp); /* 0x170BE6B4: pop edi */
    esi = POP32_VAL(esp); /* 0x170BE6B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BE6B6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170BE6B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BE6B8: ret 0xc */
L_170BE6BB:
    eax = MEM32(ecx); /* 0x170BE6BB: mov eax, dword ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_170BE6B4; /* 0x170BE6BD: jmp 0x170be6b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BE6C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE6C4u);

L_170BE6C4:
    edi = edi; /* 0x170BE6C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE6C6: push ebp */
    ebp = esp; /* 0x170BE6C7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x154u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x154u; /* 0x170BE6C9: sub esp, 0x154 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BE6CF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170BE6D3: push ebx */
    PUSH32(esp, esi); /* 0x170BE6D4: push esi */
    PUSH32(esp, edi); /* 0x170BE6D5: push edi */
    PUSH32(esp, 1); /* 0x170BE6D6: push 1 */
    RECOMP_CALL(sub_1702BB20); /* 0x170BE6D8: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170BE6DD: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x170BE6E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE721; /* 0x170BE6E2: je 0x170be721 */
L_170BE6E4:
    eax = MEM32(esi); /* 0x170BE6E4: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x170BE6E6: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170BE6E9: push ecx */
    PUSH32(esp, esi); /* 0x170BE6EA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x170BE6EB: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x170BE6EE: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x154); /* 0x170BE6F0: lea ecx, [ebp - 0x154] */
    PUSH32(esp, ecx); /* 0x170BE6F6: push ecx */
    PUSH32(esp, esi); /* 0x170BE6F7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x170BE6F8: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x170BE6FB: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x170BE6FD: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x170BE700: push ecx */
    PUSH32(esp, 0); /* 0x170BE701: push 0 */
    PUSH32(esp, esi); /* 0x170BE703: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x170BE704: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0xE), 0x10u */ /* 0x170BE707: test byte ptr [ebp + 0xe], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xE)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE721; /* 0x170BE70B: je 0x170be721 */
L_170BE70D:
    eax = MEM32(esi); /* 0x170BE70D: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x170BE70F: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x170BE712: push ecx */
    PUSH32(esp, esi); /* 0x170BE713: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x170BE714: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0x8)), 0x20u */ /* 0x170BE717: test byte ptr [ebp - 8], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE721; /* 0x170BE71B: je 0x170be721 */
L_170BE71D:
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | 0x10u)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | 0x10u));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 0x10u; /* 0x170BE71D: or dword ptr [ebp + 0xc], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE721:
    eax = 0x170063D0u; /* 0x170BE721: mov eax, 0x170063d0 */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x170BE726: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x17230508), eax */ /* 0x170BE729: cmp dword ptr [0x17230508], eax */
    _flag_a = (uint32_t)(MEM32(0x17230508)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = 0x170063A8u; /* 0x170BE72F: mov edi, 0x170063a8 */
    esi = eax; /* 0x170BE734: mov esi, eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BE7A1; /* 0x170BE736: jbe 0x170be7a1 */
L_170BE738:
    eax = MEM32(esi); /* 0x170BE738: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170BE73A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE792; /* 0x170BE73C: je 0x170be792 */
L_170BE73E:
    ecx = MEM32(ebp + (-0x4)); /* 0x170BE73E: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x170BE741: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE765; /* 0x170BE743: je 0x170be765 */
L_170BE745:
    edx = MEM32(ecx); /* 0x170BE745: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x170BE747: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BE748: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE74B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x170BE74E: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x170BE751: push dword ptr [ebp - 0x154] */
    PUSH32(esp, MEM32(ebp + (-0x150))); /* 0x170BE757: push dword ptr [ebp - 0x150] */
    PUSH32(esp, ecx); /* 0x170BE75D: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x170BE75E: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE761: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BE792; /* 0x170BE763: jl 0x170be792 */
L_170BE765:
    ecx = MEM32(ebp + 0x14); /* 0x170BE765: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ecx); /* 0x170BE768: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(esi) */ /* 0x170BE76A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE79F; /* 0x170BE76C: je 0x170be79f */
L_170BE76E:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x170BE76E: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE792; /* 0x170BE772: je 0x170be792 */
L_170BE774:
    edx = esi; /* 0x170BE774: mov edx, esi */
    RECOMP_CALL(sub_170BE5D2); /* 0x170BE776: call 0x170be5d2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x170BE77B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE792; /* 0x170BE77E: je 0x170be792 */
L_170BE780:
    /* cmp eax, ebx */ /* 0x170BE780: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170BE792; /* 0x170BE782: ja 0x170be792 */
L_170BE784:
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE78E; /* 0x170BE784: jne 0x170be78e */
L_170BE786:
    ecx = MEM32(esi + 0x8); /* 0x170BE786: mov ecx, dword ptr [esi + 8] */
    /* cmp ecx, MEM32(edi + 0x8) */ /* 0x170BE789: cmp ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170BE792; /* 0x170BE78C: jae 0x170be792 */
L_170BE78E:
    ebx = eax; /* 0x170BE78E: mov ebx, eax */
    edi = esi; /* 0x170BE790: mov edi, esi */
L_170BE792:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x170BE792: add esi, 0x24 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(0x17230508) */ /* 0x170BE795: cmp esi, dword ptr [0x17230508] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x17230508));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BE738; /* 0x170BE79B: jb 0x170be738 */
L_170BE79D:
    goto L_170BE7A1; /* 0x170BE79D: jmp 0x170be7a1 */
L_170BE79F:
    edi = esi; /* 0x170BE79F: mov edi, esi */
L_170BE7A1:
    eax = MEM32(ebp + (-0x4)); /* 0x170BE7A1: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170BE7A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE7B2; /* 0x170BE7A6: je 0x170be7b2 */
L_170BE7A8:
    ecx = MEM32(eax); /* 0x170BE7A8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BE7AA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BE7AB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BE7AE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE7B2:
    PUSH32(esp, 0); /* 0x170BE7B2: push 0 */
    RECOMP_CALL(sub_1702BB20); /* 0x170BE7B4: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x170BE7B9: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x170BE7BB: pop edi */
    esi = POP32_VAL(esp); /* 0x170BE7BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BE7BD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE7BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BE7BF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BE7C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE7C7u);

L_170BE7C7:
    edi = edi; /* 0x170BE7C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE7C9: push ebp */
    ebp = esp; /* 0x170BE7CA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170BE7CC: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x36314C41u */ /* 0x170BE7CF: cmp eax, 0x36314c41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36314C41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE7E1; /* 0x170BE7D4: je 0x170be7e1 */
L_170BE7D6:
    /* cmp eax, 0x36315220u */ /* 0x170BE7D6: cmp eax, 0x36315220 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36315220u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE7E4; /* 0x170BE7DB: jne 0x170be7e4 */
L_170BE7DD:
    PUSH32(esp, 0x24u); /* 0x170BE7DD: push 0x24 */
    goto L_170BE7E3; /* 0x170BE7DF: jmp 0x170be7e3 */
L_170BE7E1:
    PUSH32(esp, 0x33u); /* 0x170BE7E1: push 0x33 */
L_170BE7E3:
    eax = POP32_VAL(esp); /* 0x170BE7E3: pop eax */
L_170BE7E4:
    ebp = POP32_VAL(esp); /* 0x170BE7E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170BE7E5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170BE7ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE7EDu);

L_170BE7ED:
    edi = edi; /* 0x170BE7ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE7EF: push ebp */
    ebp = esp; /* 0x170BE7F0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x170BE7F2: sub esp, 0x54 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BE7F5: push esi */
    ecx = ebp + (-0x54); /* 0x170BE7F6: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170CEEA0); /* 0x170BE7F9: call 0x170ceea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BE7FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170BE800: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BE801: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x54); /* 0x170BE804: lea ecx, [ebp - 0x54] */
    PUSH32(esp, esi); /* 0x170BE807: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE808: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE80B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170D3547); /* 0x170BE80E: call 0x170d3547 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170BE813: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170BE819; /* 0x170BE815: jge 0x170be819 */
L_170BE817:
    esi = eax; /* 0x170BE817: mov esi, eax */
L_170BE819:
    ecx = ebp + (-0x54); /* 0x170BE819: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170CEEBE); /* 0x170BE81C: call 0x170ceebe */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BE821: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BE823: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE824: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BE825: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170BE82D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE82Du);

L_170BE82D:
    edi = edi; /* 0x170BE82D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE82F: push ebp */
    ebp = esp; /* 0x170BE830: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170BE832: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BE838: push ebx */
    ecx = ebp + (-0xC); /* 0x170BE839: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_170D3BDF); /* 0x170BE83C: call 0x170d3bdf */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x170BE841: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170D7623); /* 0x170BE844: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BE849: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170BE84B: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE85A; /* 0x170BE84E: jne 0x170be85a */
L_170BE850:
    ebx = 0x8876086Cu; /* 0x170BE850: mov ebx, 0x8876086c */
    goto L_170BE8FE; /* 0x170BE855: jmp 0x170be8fe */
L_170BE85A:
    PUSH32(esp, esi); /* 0x170BE85A: push esi */
    esi = MEM32(ebp + 0x14); /* 0x170BE85B: mov esi, dword ptr [ebp + 0x14] */
    /* cmp esi, ebx */ /* 0x170BE85E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE86C; /* 0x170BE860: jne 0x170be86c */
L_170BE862:
    ebx = 0x8876086Cu; /* 0x170BE862: mov ebx, 0x8876086c */
    goto L_170BE8FD; /* 0x170BE867: jmp 0x170be8fd */
L_170BE86C:
    /* cmp MEM32(ebp + 0x24), ebx */ /* 0x170BE86C: cmp dword ptr [ebp + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BE862; /* 0x170BE86F: je 0x170be862 */
L_170BE871:
    /* cmp MEM32(ebp + 0x28), 0xFFFFFFFFu */ /* 0x170BE871: cmp dword ptr [ebp + 0x28], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE87E; /* 0x170BE875: jne 0x170be87e */
L_170BE877:
    MEM32(ebp + 0x28) = 0x00080004u; /* 0x170BE877: mov dword ptr [ebp + 0x28], 0x80004 */
L_170BE87E:
    PUSH32(esp, ebx); /* 0x170BE87E: push ebx */
    PUSH32(esp, ebx); /* 0x170BE87F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BE880: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xC8); /* 0x170BE883: lea eax, [ebp - 0xc8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE889: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x74); /* 0x170BE88C: lea ecx, [ebp - 0x74] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE88F: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x170BE892: push eax */
    RECOMP_CALL(sub_170D7815); /* 0x170BE893: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170BE898: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BE8FB; /* 0x170BE89A: jl 0x170be8fb */
L_170BE89C:
    eax = MEM32(ebp + 0x18); /* 0x170BE89C: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x170BE89F: push edi */
    MEM32(ebp + (-0x5C)) = eax; /* 0x170BE8A0: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x170BE8A3: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x58)) = eax; /* 0x170BE8A6: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x80)); /* 0x170BE8A9: mov eax, dword ptr [ebp - 0x80] */
    MEM32(ebp + (-0x60)) = esi; /* 0x170BE8AC: mov dword ptr [ebp - 0x60], esi */
    esi = MEM32(ebp + 0x24); /* 0x170BE8AF: mov esi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x54)) = ebx; /* 0x170BE8B2: mov dword ptr [ebp - 0x54], ebx */
    edi = ebp + (-0x50); /* 0x170BE8B5: lea edi, [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE8B8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE8B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE8BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170BE8BB: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 6); /* 0x170BE8BC: push 6 */
    ecx = POP32_VAL(esp); /* 0x170BE8BE: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170BE8BF: push dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x40)) = ebx; /* 0x170BE8C2: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x3C)) = 1; /* 0x170BE8C5: mov dword ptr [ebp - 0x3c], 1 */
    esi = ebp + (-0x50); /* 0x170BE8CC: lea esi, [ebp - 0x50] */
    edi = ebp + (-0x38); /* 0x170BE8CF: lea edi, [ebp - 0x38] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BE8D2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BE8D4: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x2C); /* 0x170BE8D7: mov eax, dword ptr [ebp + 0x2c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170BE8DA: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x20); /* 0x170BE8DD: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BE8E0: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x60); /* 0x170BE8E3: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x170BE8E6: push eax */
    eax = ebp + (-0xC8); /* 0x170BE8E7: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x170BE8ED: push eax */
    ecx = ebp + (-0xC); /* 0x170BE8EE: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_170D74E1); /* 0x170BE8F1: call 0x170d74e1 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170BE8F6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x170BE8F8: pop edi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_170BE8FD; /* 0x170BE8F9: jge 0x170be8fd */
L_170BE8FB:
    ebx = eax; /* 0x170BE8FB: mov ebx, eax */
L_170BE8FD:
    esi = POP32_VAL(esp); /* 0x170BE8FD: pop esi */
L_170BE8FE:
    ecx = ebp + (-0x74); /* 0x170BE8FE: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170D780B); /* 0x170BE901: call 0x170d780b */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x170BE906: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_170D3BEE); /* 0x170BE909: call 0x170d3bee */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x170BE90E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170BE910: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE911: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170BE912: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170BE91A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE91Au);

L_170BE91A:
    edi = edi; /* 0x170BE91A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE91C: push ebp */
    ebp = esp; /* 0x170BE91D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xDCu; /* 0x170BE91F: sub esp, 0xdc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BE925: push esi */
    ecx = ebp + (-0x88); /* 0x170BE926: lea ecx, [ebp - 0x88] */
    esi = eax; /* 0x170BE92C: mov esi, eax */
    RECOMP_CALL(sub_170CEEA0); /* 0x170BE92E: call 0x170ceea0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x170BE933: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_170D7623); /* 0x170BE936: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170BE93B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE94B; /* 0x170BE93F: jne 0x170be94b */
L_170BE941:
    esi = 0x8876086Cu; /* 0x170BE941: mov esi, 0x8876086c */
    goto L_170BE9DA; /* 0x170BE946: jmp 0x170be9da */
L_170BE94B:
    /* test esi, esi */ /* 0x170BE94B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE941; /* 0x170BE94D: je 0x170be941 */
L_170BE94F:
    PUSH32(esp, 1); /* 0x170BE94F: push 1 */
    PUSH32(esp, 0); /* 0x170BE951: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BE953: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0xDC); /* 0x170BE956: lea eax, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BE95C: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x170BE95F: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x170BE962: push esi */
    PUSH32(esp, eax); /* 0x170BE963: push eax */
    RECOMP_CALL(sub_170D7815); /* 0x170BE964: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE969: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BE971; /* 0x170BE96B: jge 0x170be971 */
L_170BE96D:
    esi = eax; /* 0x170BE96D: mov esi, eax */
    goto L_170BE9DA; /* 0x170BE96F: jmp 0x170be9da */
L_170BE971:
    eax = ebp + (-0xDC); /* 0x170BE971: lea eax, [ebp - 0xdc] */
    PUSH32(esp, eax); /* 0x170BE977: push eax */
    ecx = ebp + (-0x88); /* 0x170BE978: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_170CEF44); /* 0x170BE97E: call 0x170cef44 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE983: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BE96D; /* 0x170BE985: jl 0x170be96d */
L_170BE987:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BE987: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x88); /* 0x170BE98A: lea ecx, [ebp - 0x88] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BE990: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BE993: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170D3801); /* 0x170BE996: call 0x170d3801 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BE99B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BE96D; /* 0x170BE99D: jl 0x170be96d */
L_170BE99F:
    eax = MEM32(esi); /* 0x170BE99F: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x34); /* 0x170BE9A1: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x170BE9A4: push ecx */
    PUSH32(esp, esi); /* 0x170BE9A5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x170BE9A6: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x170BE9A9: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BE9D8; /* 0x170BE9AD: jne 0x170be9d8 */
L_170BE9AF:
    eax = MEM32(esi); /* 0x170BE9AF: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x170BE9B1: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x170BE9B4: push ecx */
    PUSH32(esp, esi); /* 0x170BE9B5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170BE9B6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170BE9B9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BE9BC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BE9BE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BE9BF: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BE9C2: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x170BE9C4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BE9C7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BE9C9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BE9CA: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x170BE9CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BE9D8; /* 0x170BE9CF: je 0x170be9d8 */
L_170BE9D1:
    esi = 0x88760868u; /* 0x170BE9D1: mov esi, 0x88760868 */
    goto L_170BE9DA; /* 0x170BE9D6: jmp 0x170be9da */
L_170BE9D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BE9D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BE9DA:
    ecx = ebp + (-0x14); /* 0x170BE9DA: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_170D780B); /* 0x170BE9DD: call 0x170d780b */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x88); /* 0x170BE9E2: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_170CEEBE); /* 0x170BE9E8: call 0x170ceebe */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BE9ED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BE9EF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BE9F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BE9F1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BE9F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BE9F9u);

L_170BE9F9:
    edi = edi; /* 0x170BE9F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BE9FB: push ebp */
    ebp = esp; /* 0x170BE9FC: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BE9FE: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x170BEA01: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEA03: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEA06: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEA09: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEA0C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE91A); /* 0x170BEA0F: call 0x170be91a */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEA14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEA15: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEA1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEA1Du);

L_170BEA1D:
    edi = edi; /* 0x170BEA1D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEA1F: push ebp */
    ebp = esp; /* 0x170BEA20: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BEA22: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x170BEA25: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEA27: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEA2A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEA2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEA30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE91A); /* 0x170BEA33: call 0x170be91a */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEA38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEA39: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEA41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEA41u);

L_170BEA41:
    edi = edi; /* 0x170BEA41: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEA43: push ebp */
    ebp = esp; /* 0x170BEA44: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BEA46: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x170BEA49: push 2 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEA4B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEA4E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEA51: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEA54: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE91A); /* 0x170BEA57: call 0x170be91a */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEA5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEA5D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEA65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEA65u);

L_170BEA65:
    edi = edi; /* 0x170BEA65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEA67: push ebp */
    ebp = esp; /* 0x170BEA68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x170BEA6A: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BEA70: push esi */
    ecx = ebp + (-0x10); /* 0x170BEA71: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_170D3BDF); /* 0x170BEA74: call 0x170d3bdf */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x4); /* 0x170BEA79: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_170D77D7); /* 0x170BEA7C: call 0x170d77d7 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170BEA81: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEA91; /* 0x170BEA85: jne 0x170bea91 */
L_170BEA87:
    esi = 0x8876086Cu; /* 0x170BEA87: mov esi, 0x8876086c */
    goto L_170BEB2A; /* 0x170BEA8C: jmp 0x170beb2a */
L_170BEA91:
    esi = MEM32(ebp + 0x14); /* 0x170BEA91: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x170BEA94: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEA87; /* 0x170BEA96: je 0x170bea87 */
L_170BEA98:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170BEA98: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEA87; /* 0x170BEA9C: je 0x170bea87 */
L_170BEA9E:
    /* cmp MEM32(ebp + 0x2C), 0xFFFFFFFFu */ /* 0x170BEA9E: cmp dword ptr [ebp + 0x2c], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEAAB; /* 0x170BEAA2: jne 0x170beaab */
L_170BEAA4:
    MEM32(ebp + 0x2C) = 0x00080004u; /* 0x170BEAA4: mov dword ptr [ebp + 0x2c], 0x80004 */
L_170BEAAB:
    PUSH32(esp, 0); /* 0x170BEAAB: push 0 */
    PUSH32(esp, 0); /* 0x170BEAAD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BEAAF: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xB8); /* 0x170BEAB2: lea eax, [ebp - 0xb8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEAB8: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x4); /* 0x170BEABB: lea ecx, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEABE: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x170BEAC1: push eax */
    RECOMP_CALL(sub_170D7D13); /* 0x170BEAC2: call 0x170d7d13 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BEAC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BEACF; /* 0x170BEAC9: jge 0x170beacf */
L_170BEACB:
    esi = eax; /* 0x170BEACB: mov esi, eax */
    goto L_170BEB2A; /* 0x170BEACD: jmp 0x170beb2a */
L_170BEACF:
    eax = MEM32(ebp + 0x18); /* 0x170BEACF: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x170BEAD2: push edi */
    MEM32(ebp + (-0x60)) = eax; /* 0x170BEAD3: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + 0x1C); /* 0x170BEAD6: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x170BEAD9: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x20); /* 0x170BEADC: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, 6); /* 0x170BEADF: push 6 */
    ecx = POP32_VAL(esp); /* 0x170BEAE1: pop ecx */
    MEM32(ebp + (-0x58)) = eax; /* 0x170BEAE2: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x170BEAE5: mov eax, dword ptr [ebp - 0x70] */
    MEM32(ebp + (-0x64)) = esi; /* 0x170BEAE8: mov dword ptr [ebp - 0x64], esi */
    esi = MEM32(ebp + 0x28); /* 0x170BEAEB: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, 6); /* 0x170BEAEE: push 6 */
    edi = ebp + (-0x54); /* 0x170BEAF0: lea edi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BEAF3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x28); /* 0x170BEAF5: mov esi, dword ptr [ebp + 0x28] */
    ecx = POP32_VAL(esp); /* 0x170BEAF8: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x170BEAF9: push dword ptr [ebp + 0x2c] */
    edi = ebp + (-0x3C); /* 0x170BEAFC: lea edi, [ebp - 0x3c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170BEAFF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170BEB01: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x30); /* 0x170BEB04: mov eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BEB07: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x24); /* 0x170BEB0A: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170BEB0D: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x64); /* 0x170BEB10: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x170BEB13: push eax */
    eax = ebp + (-0xB8); /* 0x170BEB14: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x170BEB1A: push eax */
    ecx = ebp + (-0x10); /* 0x170BEB1B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_170D74E1); /* 0x170BEB1E: call 0x170d74e1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BEB23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170BEB25: pop edi */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BEACB; /* 0x170BEB26: jl 0x170beacb */
L_170BEB28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BEB28: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BEB2A:
    ecx = ebp + (-0x4); /* 0x170BEB2A: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_170D7D09); /* 0x170BEB2D: call 0x170d7d09 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x170BEB32: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_170D3BEE); /* 0x170BEB35: call 0x170d3bee */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BEB3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BEB3C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BEB3D: leave  */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x170BEB3E: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_170BEB46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEB46u);

L_170BEB46:
    edi = edi; /* 0x170BEB46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEB48: push ebp */
    ebp = esp; /* 0x170BEB49: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170BEB4B: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BEB51: push esi */
    ecx = ebp + (-0x74); /* 0x170BEB52: lea ecx, [ebp - 0x74] */
    esi = eax; /* 0x170BEB55: mov esi, eax */
    RECOMP_CALL(sub_170CEEA0); /* 0x170BEB57: call 0x170ceea0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x4); /* 0x170BEB5C: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_170D77D7); /* 0x170BEB5F: call 0x170d77d7 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170BEB64: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEB74; /* 0x170BEB68: jne 0x170beb74 */
L_170BEB6A:
    esi = 0x8876086Cu; /* 0x170BEB6A: mov esi, 0x8876086c */
    goto L_170BEBFD; /* 0x170BEB6F: jmp 0x170bebfd */
L_170BEB74:
    /* test esi, esi */ /* 0x170BEB74: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEB6A; /* 0x170BEB76: je 0x170beb6a */
L_170BEB78:
    PUSH32(esp, 1); /* 0x170BEB78: push 1 */
    PUSH32(esp, 0); /* 0x170BEB7A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEB7C: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0xC8); /* 0x170BEB7F: lea eax, [ebp - 0xc8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BEB85: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x4); /* 0x170BEB88: lea ecx, [ebp - 4] */
    PUSH32(esp, esi); /* 0x170BEB8B: push esi */
    PUSH32(esp, eax); /* 0x170BEB8C: push eax */
    RECOMP_CALL(sub_170D7D13); /* 0x170BEB8D: call 0x170d7d13 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BEB92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BEB9A; /* 0x170BEB94: jge 0x170beb9a */
L_170BEB96:
    esi = eax; /* 0x170BEB96: mov esi, eax */
    goto L_170BEBFD; /* 0x170BEB98: jmp 0x170bebfd */
L_170BEB9A:
    eax = ebp + (-0xC8); /* 0x170BEB9A: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x170BEBA0: push eax */
    ecx = ebp + (-0x74); /* 0x170BEBA1: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170CEF44); /* 0x170BEBA4: call 0x170cef44 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BEBA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BEB96; /* 0x170BEBAB: jl 0x170beb96 */
L_170BEBAD:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEBAD: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x74); /* 0x170BEBB0: lea ecx, [ebp - 0x74] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEBB3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEBB6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170D3801); /* 0x170BEBB9: call 0x170d3801 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BEBBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BEB96; /* 0x170BEBC0: jl 0x170beb96 */
L_170BEBC2:
    eax = MEM32(esi); /* 0x170BEBC2: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x20); /* 0x170BEBC4: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x170BEBC7: push ecx */
    PUSH32(esp, esi); /* 0x170BEBC8: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x170BEBC9: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x170BEBCC: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEBFB; /* 0x170BEBD0: jne 0x170bebfb */
L_170BEBD2:
    eax = MEM32(esi); /* 0x170BEBD2: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x170BEBD4: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x170BEBD7: push ecx */
    PUSH32(esp, esi); /* 0x170BEBD8: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170BEBD9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170BEBDC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BEBDF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BEBE1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BEBE2: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BEBE5: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x170BEBE7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BEBEA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BEBEC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BEBED: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x170BEBF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEBFB; /* 0x170BEBF2: je 0x170bebfb */
L_170BEBF4:
    esi = 0x88760868u; /* 0x170BEBF4: mov esi, 0x88760868 */
    goto L_170BEBFD; /* 0x170BEBF9: jmp 0x170bebfd */
L_170BEBFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BEBFB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BEBFD:
    ecx = ebp + (-0x4); /* 0x170BEBFD: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_170D7D09); /* 0x170BEC00: call 0x170d7d09 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x170BEC05: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170CEEBE); /* 0x170BEC08: call 0x170ceebe */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BEC0D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BEC0F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BEC10: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEC11: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEC19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEC19u);

L_170BEC19:
    edi = edi; /* 0x170BEC19: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEC1B: push ebp */
    ebp = esp; /* 0x170BEC1C: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BEC1E: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x170BEC21: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEC23: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEC26: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEC29: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEC2C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BEB46); /* 0x170BEC2F: call 0x170beb46 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEC34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEC35: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEC3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEC3Du);

L_170BEC3D:
    edi = edi; /* 0x170BEC3D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEC3F: push ebp */
    ebp = esp; /* 0x170BEC40: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BEC42: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x170BEC45: push 1 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEC47: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEC4A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEC4D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEC50: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BEB46); /* 0x170BEC53: call 0x170beb46 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEC58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEC59: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEC61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEC61u);

L_170BEC61:
    edi = edi; /* 0x170BEC61: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEC63: push ebp */
    ebp = esp; /* 0x170BEC64: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x170BEC66: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x170BEC69: push 2 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BEC6B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BEC6E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BEC71: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BEC74: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BEB46); /* 0x170BEC77: call 0x170beb46 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BEC7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170BEC7D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170BEC85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BEC85u);

L_170BEC85:
    edi = edi; /* 0x170BEC85: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BEC87: push ebp */
    ebp = esp; /* 0x170BEC88: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x170BEC8A: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x20); /* 0x170BEC90: mov eax, dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + 0x1C); /* 0x170BEC93: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x170BEC96: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170BEC97: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170BEC9A: push edi */
    edi = edx; /* 0x170BEC9B: mov edi, edx */
    /* test edi, edi */ /* 0x170BEC9D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BECAB; /* 0x170BEC9F: jne 0x170becab */
L_170BECA1:
    eax = 0x8876086Cu; /* 0x170BECA1: mov eax, 0x8876086c */
    goto L_170BF03A; /* 0x170BECA6: jmp 0x170bf03a */
L_170BECAB:
    PUSH32(esp, esi); /* 0x170BECAB: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x170BECAC: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x170BECAF: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BECB8; /* 0x170BECB2: jne 0x170becb8 */
L_170BECB4:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x170BECB4: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BECB8:
    /* test MEM32(ebp + 0x18), 0xFFE039ECu */ /* 0x170BECB8: test dword ptr [ebp + 0x18], 0xffe039ec */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xFFE039ECu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BECCB; /* 0x170BECBF: je 0x170beccb */
L_170BECC1:
    eax = 0x8876086Cu; /* 0x170BECC1: mov eax, 0x8876086c */
    goto L_170BF039; /* 0x170BECC6: jmp 0x170bf039 */
L_170BECCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BECCB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x170BECCD: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BECE0; /* 0x170BECCF: je 0x170bece0 */
L_170BECD1:
    /* cmp eax, 1 */ /* 0x170BECD1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BECE0; /* 0x170BECD4: je 0x170bece0 */
L_170BECD6:
    /* cmp eax, 2 */ /* 0x170BECD6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BECE0; /* 0x170BECD9: je 0x170bece0 */
L_170BECDB:
    /* cmp eax, 3 */ /* 0x170BECDB: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BECC1; /* 0x170BECDE: jne 0x170becc1 */
L_170BECE0:
    /* cmp ecx, edx */ /* 0x170BECE0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BECEB; /* 0x170BECE2: je 0x170beceb */
L_170BECE4:
    ecx = MEM32(ecx); /* 0x170BECE4: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x170BECE6: mov dword ptr [ebp - 0x10], ecx */
    goto L_170BECEE; /* 0x170BECE9: jmp 0x170becee */
L_170BECEB:
    MEM32(ebp + (-0x10)) = edx; /* 0x170BECEB: mov dword ptr [ebp - 0x10], edx */
L_170BECEE:
    /* cmp eax, 3 */ /* 0x170BECEE: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BED19; /* 0x170BECF1: je 0x170bed19 */
L_170BECF3:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BECF3: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_170BE5A2); /* 0x170BECF6: call 0x170be5a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170BECFB: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BECFC: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BECFF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x170BED02: push edi */
    RECOMP_CALL(sub_170BE6C4); /* 0x170BED03: call 0x170be6c4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BED08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x170BED0A: mov dword ptr [ebp - 0x10], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BED27; /* 0x170BED0D: jne 0x170bed27 */
L_170BED0F:
    eax = 0x8876086Au; /* 0x170BED0F: mov eax, 0x8876086a */
    goto L_170BF039; /* 0x170BED14: jmp 0x170bf039 */
L_170BED19:
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x170BED19: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BED29; /* 0x170BED1C: jne 0x170bed29 */
L_170BED1E:
    MEM32(ebp + (-0x10)) = 0x15u; /* 0x170BED1E: mov dword ptr [ebp - 0x10], 0x15 */
    goto L_170BED29; /* 0x170BED25: jmp 0x170bed29 */
L_170BED27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BED27: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BED29:
    /* cmp ebx, edx */ /* 0x170BED29: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BED34; /* 0x170BED2B: je 0x170bed34 */
L_170BED2D:
    eax = MEM32(ebx); /* 0x170BED2D: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BED2F: mov dword ptr [ebp - 8], eax */
    goto L_170BED37; /* 0x170BED32: jmp 0x170bed37 */
L_170BED34:
    MEM32(ebp + (-0x8)) = esi; /* 0x170BED34: mov dword ptr [ebp - 8], esi */
L_170BED37:
    eax = MEM32(ebp + 0xC); /* 0x170BED37: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x170BED3A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BED45; /* 0x170BED3C: je 0x170bed45 */
L_170BED3E:
    eax = MEM32(eax); /* 0x170BED3E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BED40: mov dword ptr [ebp - 4], eax */
    goto L_170BED48; /* 0x170BED43: jmp 0x170bed48 */
L_170BED45:
    MEM32(ebp + (-0x4)) = esi; /* 0x170BED45: mov dword ptr [ebp - 4], esi */
L_170BED48:
    eax = MEM32(ebp + 0x10); /* 0x170BED48: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, edx */ /* 0x170BED4B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BED56; /* 0x170BED4D: je 0x170bed56 */
L_170BED4F:
    eax = MEM32(eax); /* 0x170BED4F: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x170BED51: mov dword ptr [ebp - 0xc], eax */
    goto L_170BED59; /* 0x170BED54: jmp 0x170bed59 */
L_170BED56:
    MEM32(ebp + (-0xC)) = esi; /* 0x170BED56: mov dword ptr [ebp - 0xc], esi */
L_170BED59:
    eax = MEM32(ebp + 0x14); /* 0x170BED59: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, edx */ /* 0x170BED5C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BED67; /* 0x170BED5E: je 0x170bed67 */
L_170BED60:
    eax = MEM32(eax); /* 0x170BED60: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170BED62: mov dword ptr [ebp - 0x14], eax */
    goto L_170BED6A; /* 0x170BED65: jmp 0x170bed6a */
L_170BED67:
    MEM32(ebp + (-0x14)) = esi; /* 0x170BED67: mov dword ptr [ebp - 0x14], esi */
L_170BED6A:
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x170BED6A: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x100u; /* 0x170BED6D: mov eax, 0x100 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BED89; /* 0x170BED72: jne 0x170bed89 */
L_170BED74:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x170BED74: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BED81; /* 0x170BED77: jne 0x170bed81 */
L_170BED79:
    MEM32(ebp + (-0x4)) = eax; /* 0x170BED79: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BED7C: mov dword ptr [ebp - 8], eax */
    goto L_170BEDAC; /* 0x170BED7F: jmp 0x170bedac */
L_170BED81:
    eax = MEM32(ebp + (-0x4)); /* 0x170BED81: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BED84: mov dword ptr [ebp - 8], eax */
    goto L_170BED94; /* 0x170BED87: jmp 0x170bed94 */
L_170BED89:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x170BED89: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BED94; /* 0x170BED8C: jne 0x170bed94 */
L_170BED8E:
    eax = MEM32(ebp + (-0x8)); /* 0x170BED8E: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BED91: mov dword ptr [ebp - 4], eax */
L_170BED94:
    /* cmp MEM32(ebp + (-0x8)), edx */ /* 0x170BED94: cmp dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEDA0; /* 0x170BED97: jne 0x170beda0 */
L_170BED99:
    MEM32(ebp + (-0x8)) = 1; /* 0x170BED99: mov dword ptr [ebp - 8], 1 */
L_170BEDA0:
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x170BEDA0: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEDAC; /* 0x170BEDA3: jne 0x170bedac */
L_170BEDA5:
    MEM32(ebp + (-0x4)) = 1; /* 0x170BEDA5: mov dword ptr [ebp - 4], 1 */
L_170BEDAC:
    /* cmp MEM32(ebp + 0x24), 5 */ /* 0x170BEDAC: cmp dword ptr [ebp + 0x24], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEDC6; /* 0x170BEDB0: jne 0x170bedc6 */
L_170BEDB2:
    eax = MEM32(ebp + (-0x4)); /* 0x170BEDB2: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170BEDB5: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEDC0; /* 0x170BEDB8: jbe 0x170bedc0 */
L_170BEDBA:
    eax = MEM32(ebp + (-0x8)); /* 0x170BEDBA: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170BEDBD: mov dword ptr [ebp - 4], eax */
L_170BEDC0:
    eax = MEM32(ebp + (-0x4)); /* 0x170BEDC0: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x170BEDC3: mov dword ptr [ebp - 8], eax */
L_170BEDC6:
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x170BEDC6: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEDD0; /* 0x170BEDC9: je 0x170bedd0 */
L_170BEDCB:
    /* cmp MEM32(ebp + (-0xC)), edx */ /* 0x170BEDCB: cmp dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEDD7; /* 0x170BEDCE: jne 0x170bedd7 */
L_170BEDD0:
    MEM32(ebp + (-0xC)) = 1; /* 0x170BEDD0: mov dword ptr [ebp - 0xc], 1 */
L_170BEDD7:
    /* cmp MEM32(ebp + 0x20), 3 */ /* 0x170BEDD7: cmp dword ptr [ebp + 0x20], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = 0x31545844u; /* 0x170BEDDB: mov esi, 0x31545844 */
    ebx = 0x32545844u; /* 0x170BEDE0: mov ebx, 0x32545844 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEF05; /* 0x170BEDE5: je 0x170bef05 */
L_170BEDEB:
    eax = MEM32(edi); /* 0x170BEDEB: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x144); /* 0x170BEDED: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x170BEDF3: push ecx */
    PUSH32(esp, edi); /* 0x170BEDF4: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x170BEDF5: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x24), 4 */ /* 0x170BEDF8: cmp dword ptr [ebp + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x108)); /* 0x170BEDFC: mov edx, dword ptr [ebp - 0x108] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEE1C; /* 0x170BEE02: jne 0x170bee1c */
L_170BEE04:
    eax = MEM32(ebp + (-0xE4)); /* 0x170BEE04: mov eax, dword ptr [ebp - 0xe4] */
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x170BEE0A: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE12; /* 0x170BEE0D: jbe 0x170bee12 */
L_170BEE0F:
    MEM32(ebp + (-0xC)) = eax; /* 0x170BEE0F: mov dword ptr [ebp - 0xc], eax */
L_170BEE12:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170BEE12: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE64; /* 0x170BEE15: jbe 0x170bee64 */
L_170BEE17:
    MEM32(ebp + (-0x8)) = eax; /* 0x170BEE17: mov dword ptr [ebp - 8], eax */
    goto L_170BEE64; /* 0x170BEE1A: jmp 0x170bee64 */
L_170BEE1C:
    eax = MEM32(ebp + (-0xEC)); /* 0x170BEE1C: mov eax, dword ptr [ebp - 0xec] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170BEE22: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE2A; /* 0x170BEE25: jbe 0x170bee2a */
L_170BEE27:
    MEM32(ebp + (-0x8)) = eax; /* 0x170BEE27: mov dword ptr [ebp - 8], eax */
L_170BEE2A:
    eax = MEM32(ebp + (-0xE8)); /* 0x170BEE2A: mov eax, dword ptr [ebp - 0xe8] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x170BEE30: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE38; /* 0x170BEE33: jbe 0x170bee38 */
L_170BEE35:
    MEM32(ebp + (-0x4)) = eax; /* 0x170BEE35: mov dword ptr [ebp - 4], eax */
L_170BEE38:
    /* cmp MEM32(ebp + 0x24), 3 */ /* 0x170BEE38: cmp dword ptr [ebp + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEE6C; /* 0x170BEE3C: jne 0x170bee6c */
L_170BEE3E:
    /* test LO8(edx), 0x20u */ /* 0x170BEE3E: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEE48; /* 0x170BEE41: je 0x170bee48 */
L_170BEE43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BEE43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BEE45: inc eax */
    _flag_k = FK_INC;
    goto L_170BEE4E; /* 0x170BEE46: jmp 0x170bee4e */
L_170BEE48:
    eax = MEM32(ebp + (-0xDC)); /* 0x170BEE48: mov eax, dword ptr [ebp - 0xdc] */
L_170BEE4E:
    /* test eax, eax */ /* 0x170BEE4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEE6C; /* 0x170BEE50: je 0x170bee6c */
L_170BEE52:
    ecx = eax; /* 0x170BEE52: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x4))); /* 0x170BEE54: imul ecx, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x170BEE58: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE60; /* 0x170BEE5B: jbe 0x170bee60 */
L_170BEE5D:
    MEM32(ebp + (-0x8)) = ecx; /* 0x170BEE5D: mov dword ptr [ebp - 8], ecx */
L_170BEE60:
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x170BEE60: imul eax, dword ptr [ebp - 8] */
L_170BEE64:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x170BEE64: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEE6C; /* 0x170BEE67: jbe 0x170bee6c */
L_170BEE69:
    MEM32(ebp + (-0x4)) = eax; /* 0x170BEE69: mov dword ptr [ebp - 4], eax */
L_170BEE6C:
    eax = MEM32(ebp + 0x24); /* 0x170BEE6C: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170BEE6F: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BEE88; /* 0x170BEE72: je 0x170bee88 */
L_170BEE74:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BEE74: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BEE81; /* 0x170BEE75: je 0x170bee81 */
L_170BEE77:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BEE77: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BEE8D; /* 0x170BEE78: jne 0x170bee8d */
L_170BEE7A:
    eax = 0x00020000u; /* 0x170BEE7A: mov eax, 0x20000 */
    goto L_170BEE90; /* 0x170BEE7F: jmp 0x170bee90 */
L_170BEE81:
    eax = 0x00040000u; /* 0x170BEE81: mov eax, 0x40000 */
    goto L_170BEE90; /* 0x170BEE86: jmp 0x170bee90 */
L_170BEE88:
    PUSH32(esp, 2); /* 0x170BEE88: push 2 */
    eax = POP32_VAL(esp); /* 0x170BEE8A: pop eax */
    goto L_170BEE90; /* 0x170BEE8B: jmp 0x170bee90 */
L_170BEE8D:
    eax = MEM32(ebp + 0x24); /* 0x170BEE8D: mov eax, dword ptr [ebp + 0x24] */
L_170BEE90:
    /* cmp MEM32(ebp + (-0x14)), 1 */ /* 0x170BEE90: cmp dword ptr [ebp - 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEE94: jne 0x170beec6 */
L_170BEE96:
    /* test HI8(edx), 1 */ /* 0x170BEE96: test dh, 1 */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEE99: je 0x170beec6 */
L_170BEE9B:
    /* cmp MEM32(ebp + 0x24), 3 */ /* 0x170BEE9B: cmp dword ptr [ebp + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEE9F: jne 0x170beec6 */
L_170BEEA1:
    ecx = MEM32(ebp + (-0x10)); /* 0x170BEEA1: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, esi */ /* 0x170BEEA4: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEEA6: je 0x170beec6 */
L_170BEEA8:
    /* cmp ecx, ebx */ /* 0x170BEEA8: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEEAA: je 0x170beec6 */
L_170BEEAC:
    /* cmp ecx, 0x33545844u */ /* 0x170BEEAC: cmp ecx, 0x33545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEEB2: je 0x170beec6 */
L_170BEEB4:
    /* cmp ecx, 0x34545844u */ /* 0x170BEEB4: cmp ecx, 0x34545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEEBA: je 0x170beec6 */
L_170BEEBC:
    /* cmp ecx, 0x35545844u */ /* 0x170BEEBC: cmp ecx, 0x35545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEEC6; /* 0x170BEEC2: je 0x170beec6 */
L_170BEEC4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BEEC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BEEC6:
    /* test edx, eax */ /* 0x170BEEC6: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEF0B; /* 0x170BEEC8: je 0x170bef0b */
L_170BEECA:
    eax = MEM32(ebp + (-0x8)); /* 0x170BEECA: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BEECD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BEECF: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x170BEED0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x170BEED2: mov dword ptr [ebp - 8], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEEDF; /* 0x170BEED5: jbe 0x170beedf */
L_170BEED7:
    if (1u) _cf = (((MEM32(ebp + (-0x8))) >> 31) & 1u); /* 0x170BEED7: shl dword ptr [ebp - 8], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x8)) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) << 1u; /* 0x170BEED7: shl dword ptr [ebp - 8], 1 */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170BEEDA: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BEED7; /* 0x170BEEDD: jb 0x170beed7 */
L_170BEEDF:
    eax = MEM32(ebp + (-0x4)); /* 0x170BEEDF: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, ecx */ /* 0x170BEEE2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x170BEEE4: mov dword ptr [ebp - 4], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEEF1; /* 0x170BEEE7: jbe 0x170beef1 */
L_170BEEE9:
    if (1u) _cf = (((MEM32(ebp + (-0x4))) >> 31) & 1u); /* 0x170BEEE9: shl dword ptr [ebp - 4], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) << 1u; /* 0x170BEEE9: shl dword ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x170BEEEC: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BEEE9; /* 0x170BEEEF: jb 0x170beee9 */
L_170BEEF1:
    eax = MEM32(ebp + (-0xC)); /* 0x170BEEF1: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, ecx */ /* 0x170BEEF4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x170BEEF6: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEF0B; /* 0x170BEEF9: jbe 0x170bef0b */
L_170BEEFB:
    if (1u) _cf = (((MEM32(ebp + (-0xC))) >> 31) & 1u); /* 0x170BEEFB: shl dword ptr [ebp - 0xc], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0xC)) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) << 1u; /* 0x170BEEFB: shl dword ptr [ebp - 0xc], 1 */
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x170BEEFE: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BEEFB; /* 0x170BEF01: jb 0x170beefb */
L_170BEF03:
    goto L_170BEF0B; /* 0x170BEF03: jmp 0x170bef0b */
L_170BEF05:
    edx = MEM32(ebp + (-0x108)); /* 0x170BEF05: mov edx, dword ptr [ebp - 0x108] */
L_170BEF0B:
    eax = MEM32(ebp + (-0x10)); /* 0x170BEF0B: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, esi */ /* 0x170BEF0E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEF2B; /* 0x170BEF10: je 0x170bef2b */
L_170BEF12:
    /* cmp eax, ebx */ /* 0x170BEF12: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEF2B; /* 0x170BEF14: je 0x170bef2b */
L_170BEF16:
    /* cmp eax, 0x33545844u */ /* 0x170BEF16: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEF2B; /* 0x170BEF1B: je 0x170bef2b */
L_170BEF1D:
    /* cmp eax, 0x34545844u */ /* 0x170BEF1D: cmp eax, 0x34545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEF2B; /* 0x170BEF22: je 0x170bef2b */
L_170BEF24:
    /* cmp eax, 0x35545844u */ /* 0x170BEF24: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEF45; /* 0x170BEF29: jne 0x170bef45 */
L_170BEF2B:
    eax = MEM32(ebp + (-0x8)); /* 0x170BEF2B: mov eax, dword ptr [ebp - 8] */
    ecx = eax + 0x3; /* 0x170BEF2E: lea ecx, [eax + 3] */
    eax = MEM32(ebp + (-0x4)); /* 0x170BEF31: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x170BEF34: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax + 0x3; /* 0x170BEF37: lea edi, [eax + 3] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x170BEF3A: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x170BEF3D: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BEF40: mov dword ptr [ebp - 4], edi */
    goto L_170BEF4B; /* 0x170BEF43: jmp 0x170bef4b */
L_170BEF45:
    ecx = MEM32(ebp + (-0x8)); /* 0x170BEF45: mov ecx, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x170BEF48: mov edi, dword ptr [ebp - 4] */
L_170BEF4B:
    eax = MEM32(ebp + 0x24); /* 0x170BEF4B: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170BEF4E: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BEF67; /* 0x170BEF51: je 0x170bef67 */
L_170BEF53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BEF53: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BEF60; /* 0x170BEF54: je 0x170bef60 */
L_170BEF56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BEF56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170BEF6E; /* 0x170BEF57: jne 0x170bef6e */
L_170BEF59:
    eax = 0x00010000u; /* 0x170BEF59: mov eax, 0x10000 */
    goto L_170BEF71; /* 0x170BEF5E: jmp 0x170bef71 */
L_170BEF60:
    eax = 0x8000u; /* 0x170BEF60: mov eax, 0x8000 */
    goto L_170BEF71; /* 0x170BEF65: jmp 0x170bef71 */
L_170BEF67:
    eax = 0x4000u; /* 0x170BEF67: mov eax, 0x4000 */
    goto L_170BEF71; /* 0x170BEF6C: jmp 0x170bef71 */
L_170BEF6E:
    eax = MEM32(ebp + 0x24); /* 0x170BEF6E: mov eax, dword ptr [ebp + 0x24] */
L_170BEF71:
    /* cmp MEM32(ebp + 0x20), 3 */ /* 0x170BEF71: cmp dword ptr [ebp + 0x20], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEFA4; /* 0x170BEF75: je 0x170befa4 */
L_170BEF77:
    /* test edx, eax */ /* 0x170BEF77: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEF98; /* 0x170BEF79: je 0x170bef98 */
L_170BEF7B:
    /* test HI8(edx), 1 */ /* 0x170BEF7B: test dh, 1 */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEFA4; /* 0x170BEF7E: je 0x170befa4 */
L_170BEF80:
    eax = ecx + (-0x1); /* 0x170BEF80: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x170BEF83: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEF98; /* 0x170BEF85: jne 0x170bef98 */
L_170BEF87:
    eax = edi + (-0x1); /* 0x170BEF87: lea eax, [edi - 1] */
    /* test edi, eax */ /* 0x170BEF8A: test edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEF98; /* 0x170BEF8C: jne 0x170bef98 */
L_170BEF8E:
    eax = MEM32(ebp + (-0xC)); /* 0x170BEF8E: mov eax, dword ptr [ebp - 0xc] */
    edx = eax + (-0x1); /* 0x170BEF91: lea edx, [eax - 1] */
    /* test eax, edx */ /* 0x170BEF94: test eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEFA4; /* 0x170BEF96: je 0x170befa4 */
L_170BEF98:
    MEM32(ebp + (-0x14)) = 1; /* 0x170BEF98: mov dword ptr [ebp - 0x14], 1 */
    ecx = MEM32(ebp + (-0x14)); /* 0x170BEF9F: mov ecx, dword ptr [ebp - 0x14] */
    goto L_170BEFFE; /* 0x170BEFA2: jmp 0x170beffe */
L_170BEFA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BEFA4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170BEFA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x170BEFA8: mov eax, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEFB3; /* 0x170BEFAA: je 0x170befb3 */
L_170BEFAC:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170BEFAC: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170BEFAC: shr eax, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170BEFAE: inc esi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x170BEFAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEFAC; /* 0x170BEFB1: jne 0x170befac */
L_170BEFB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BEFB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170BEFB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x170BEFB7: mov eax, edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEFC2; /* 0x170BEFB9: je 0x170befc2 */
L_170BEFBB:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170BEFBB: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170BEFBB: shr eax, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170BEFBD: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x170BEFBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEFBB; /* 0x170BEFC0: jne 0x170befbb */
L_170BEFC2:
    eax = MEM32(ebp + (-0xC)); /* 0x170BEFC2: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170BEFC5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170BEFCC; /* 0x170BEFC7: jmp 0x170befcc */
L_170BEFC9:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170BEFC9: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170BEFC9: shr eax, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170BEFCB: inc edx */
    _flag_k = FK_INC;
L_170BEFCC:
    /* test eax, eax */ /* 0x170BEFCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEFC9; /* 0x170BEFCE: jne 0x170befc9 */
L_170BEFD0:
    /* cmp esi, ecx */ /* 0x170BEFD0: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x170BEFD2: mov eax, esi */
    if (CMP_A(_flag_a, _flag_b)) goto L_170BEFD8; /* 0x170BEFD4: ja 0x170befd8 */
L_170BEFD6:
    eax = ecx; /* 0x170BEFD6: mov eax, ecx */
L_170BEFD8:
    /* cmp MEM32(ebp + 0x24), 4 */ /* 0x170BEFD8: cmp dword ptr [ebp + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BEFE4; /* 0x170BEFDC: jne 0x170befe4 */
L_170BEFDE:
    /* cmp edx, eax */ /* 0x170BEFDE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BEFE4; /* 0x170BEFE0: jbe 0x170befe4 */
L_170BEFE2:
    eax = edx; /* 0x170BEFE2: mov eax, edx */
L_170BEFE4:
    ecx = MEM32(ebp + (-0x14)); /* 0x170BEFE4: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp ecx, eax */ /* 0x170BEFE7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170BEFEF; /* 0x170BEFE9: ja 0x170befef */
L_170BEFEB:
    /* test ecx, ecx */ /* 0x170BEFEB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BEFF1; /* 0x170BEFED: jne 0x170beff1 */
L_170BEFEF:
    ecx = eax; /* 0x170BEFEF: mov ecx, eax */
L_170BEFF1:
    /* cmp ecx, 1 */ /* 0x170BEFF1: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BEFFE; /* 0x170BEFF4: je 0x170beffe */
L_170BEFF6:
    /* test MEM8(ebp + 0x19), 4 */ /* 0x170BEFF6: test byte ptr [ebp + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BEFFE; /* 0x170BEFFA: je 0x170beffe */
L_170BEFFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170BEFFC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BEFFE:
    eax = MEM32(ebp + 0x8); /* 0x170BEFFE: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x170BF001: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF00A; /* 0x170BF003: je 0x170bf00a */
L_170BF005:
    edx = MEM32(ebp + (-0x8)); /* 0x170BF005: mov edx, dword ptr [ebp - 8] */
    MEM32(eax) = edx; /* 0x170BF008: mov dword ptr [eax], edx */
L_170BF00A:
    eax = MEM32(ebp + 0xC); /* 0x170BF00A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x170BF00D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF016; /* 0x170BF00F: je 0x170bf016 */
L_170BF011:
    edx = MEM32(ebp + (-0x4)); /* 0x170BF011: mov edx, dword ptr [ebp - 4] */
    MEM32(eax) = edx; /* 0x170BF014: mov dword ptr [eax], edx */
L_170BF016:
    eax = MEM32(ebp + 0x10); /* 0x170BF016: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x170BF019: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF022; /* 0x170BF01B: je 0x170bf022 */
L_170BF01D:
    edx = MEM32(ebp + (-0xC)); /* 0x170BF01D: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax) = edx; /* 0x170BF020: mov dword ptr [eax], edx */
L_170BF022:
    eax = MEM32(ebp + 0x14); /* 0x170BF022: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x170BF025: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF02B; /* 0x170BF027: je 0x170bf02b */
L_170BF029:
    MEM32(eax) = ecx; /* 0x170BF029: mov dword ptr [eax], ecx */
L_170BF02B:
    eax = MEM32(ebp + 0x1C); /* 0x170BF02B: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x170BF02E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF037; /* 0x170BF030: je 0x170bf037 */
L_170BF032:
    ecx = MEM32(ebp + (-0x10)); /* 0x170BF032: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x170BF035: mov dword ptr [eax], ecx */
L_170BF037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BF037: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF039:
    esi = POP32_VAL(esp); /* 0x170BF039: pop esi */
L_170BF03A:
    edi = POP32_VAL(esp); /* 0x170BF03A: pop edi */
    ebx = POP32_VAL(esp); /* 0x170BF03B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BF03C: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170BF03D: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170BF045(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF045u);

L_170BF045:
    edi = edi; /* 0x170BF045: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF047: push ebp */
    ebp = esp; /* 0x170BF048: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x170BF04A: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 3); /* 0x170BF04D: push 3 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF04F: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF052: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BF055: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BF058: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x170BF05B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF05D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF060: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BEC85); /* 0x170BF063: call 0x170bec85 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BF068: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170BF069: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170BF071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF071u);

L_170BF071:
    edi = edi; /* 0x170BF071: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF073: push ebp */
    ebp = esp; /* 0x170BF074: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x170BF076: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 5); /* 0x170BF079: push 5 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF07B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BF07E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BF081: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF084: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x170BF087: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF089: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF08C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BEC85); /* 0x170BF08F: call 0x170bec85 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BF094: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170BF095: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170BF09D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF09Du);

L_170BF09D:
    edi = edi; /* 0x170BF09D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF09F: push ebp */
    ebp = esp; /* 0x170BF0A0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x170BF0A2: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x170BF0A5: push 4 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BF0A7: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF0AA: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF0AD: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BF0B0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BF0B3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF0B6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF0B9: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170BEC85); /* 0x170BF0BC: call 0x170bec85 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170BF0C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170BF0C2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170BF0CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF0CAu);

L_170BF0CA:
    edi = edi; /* 0x170BF0CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF0CC: push ebp */
    ebp = esp; /* 0x170BF0CD: mov ebp, esp */
    PUSH32(esp, edi); /* 0x170BF0CF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170BF0D0: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x170BF0D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF0DD; /* 0x170BF0D5: je 0x170bf0dd */
L_170BF0D7:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x170BF0D7: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF0E4; /* 0x170BF0DB: jne 0x170bf0e4 */
L_170BF0DD:
    eax = 0x8876086Cu; /* 0x170BF0DD: mov eax, 0x8876086c */
    goto L_170BF135; /* 0x170BF0E2: jmp 0x170bf135 */
L_170BF0E4:
    PUSH32(esp, esi); /* 0x170BF0E4: push esi */
    esi = MEM32(ebp + 0x18); /* 0x170BF0E5: mov esi, dword ptr [ebp + 0x18] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x170BF0E8: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF0EF; /* 0x170BF0EB: jne 0x170bf0ef */
L_170BF0ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BF0ED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF0EF:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF0EF: push dword ptr [ebp + 0x20] */
    eax = ebp + 0x1C; /* 0x170BF0F2: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x170BF0F5: push eax */
    PUSH32(esp, esi); /* 0x170BF0F6: push esi */
    eax = ebp + 0x14; /* 0x170BF0F7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x170BF0FA: push eax */
    eax = ebp + 0x10; /* 0x170BF0FB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170BF0FE: push eax */
    eax = ebp + 0xC; /* 0x170BF0FF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170BF102: push eax */
    PUSH32(esp, edi); /* 0x170BF103: push edi */
    RECOMP_CALL(sub_170BF045); /* 0x170BF104: call 0x170bf045 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF109: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF134; /* 0x170BF10B: jl 0x170bf134 */
L_170BF10D:
    eax = MEM32(edi); /* 0x170BF10D: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x170BF10F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BF111: push dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFE07FFFu);
    esi = esi & 0xFFE07FFFu; /* 0x170BF114: and esi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF11A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF11D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x170BF120: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BF121: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF124: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF127: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BF12A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x170BF12B: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF12E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF134; /* 0x170BF130: jl 0x170bf134 */
L_170BF132:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BF132: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF134:
    esi = POP32_VAL(esp); /* 0x170BF134: pop esi */
L_170BF135:
    edi = POP32_VAL(esp); /* 0x170BF135: pop edi */
    ebp = POP32_VAL(esp); /* 0x170BF136: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170BF137: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170BF13F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF13Fu);

L_170BF13F:
    edi = edi; /* 0x170BF13F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF141: push ebp */
    ebp = esp; /* 0x170BF142: mov ebp, esp */
    PUSH32(esp, edi); /* 0x170BF144: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170BF145: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x170BF148: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF152; /* 0x170BF14A: je 0x170bf152 */
L_170BF14C:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x170BF14C: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF159; /* 0x170BF150: jne 0x170bf159 */
L_170BF152:
    eax = 0x8876086Cu; /* 0x170BF152: mov eax, 0x8876086c */
    goto L_170BF1A3; /* 0x170BF157: jmp 0x170bf1a3 */
L_170BF159:
    PUSH32(esp, esi); /* 0x170BF159: push esi */
    esi = MEM32(ebp + 0x14); /* 0x170BF15A: mov esi, dword ptr [ebp + 0x14] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x170BF15D: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF164; /* 0x170BF160: jne 0x170bf164 */
L_170BF162:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BF162: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF164:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF164: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x18; /* 0x170BF167: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x170BF16A: push eax */
    PUSH32(esp, esi); /* 0x170BF16B: push esi */
    eax = ebp + 0x10; /* 0x170BF16C: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170BF16F: push eax */
    eax = ebp + 0xC; /* 0x170BF170: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170BF173: push eax */
    PUSH32(esp, edi); /* 0x170BF174: push edi */
    RECOMP_CALL(sub_170BF071); /* 0x170BF175: call 0x170bf071 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF17A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF1A2; /* 0x170BF17C: jl 0x170bf1a2 */
L_170BF17E:
    eax = MEM32(edi); /* 0x170BF17E: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x170BF180: push 0 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF182: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFE07FFFu);
    esi = esi & 0xFFE07FFFu; /* 0x170BF185: and esi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170BF18B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BF18E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x170BF191: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF192: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF195: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BF198: push edi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x170BF199: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF19C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF1A2; /* 0x170BF19E: jl 0x170bf1a2 */
L_170BF1A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BF1A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF1A2:
    esi = POP32_VAL(esp); /* 0x170BF1A2: pop esi */
L_170BF1A3:
    edi = POP32_VAL(esp); /* 0x170BF1A3: pop edi */
    ebp = POP32_VAL(esp); /* 0x170BF1A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170BF1A5: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170BF1AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF1ADu);

L_170BF1AD:
    edi = edi; /* 0x170BF1AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF1AF: push ebp */
    ebp = esp; /* 0x170BF1B0: mov ebp, esp */
    PUSH32(esp, edi); /* 0x170BF1B2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170BF1B3: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x170BF1B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF1C0; /* 0x170BF1B8: je 0x170bf1c0 */
L_170BF1BA:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170BF1BA: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF1C7; /* 0x170BF1BE: jne 0x170bf1c7 */
L_170BF1C0:
    eax = 0x8876086Cu; /* 0x170BF1C0: mov eax, 0x8876086c */
    goto L_170BF222; /* 0x170BF1C5: jmp 0x170bf222 */
L_170BF1C7:
    PUSH32(esp, esi); /* 0x170BF1C7: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x170BF1C8: mov esi, dword ptr [ebp + 0x1c] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x170BF1CB: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF1D2; /* 0x170BF1CE: jne 0x170bf1d2 */
L_170BF1D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BF1D0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF1D2:
    PUSH32(esp, 4); /* 0x170BF1D2: push 4 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BF1D4: push dword ptr [ebp + 0x24] */
    eax = ebp + 0x20; /* 0x170BF1D7: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x170BF1DA: push eax */
    PUSH32(esp, esi); /* 0x170BF1DB: push esi */
    eax = ebp + 0x18; /* 0x170BF1DC: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x170BF1DF: push eax */
    eax = ebp + 0x14; /* 0x170BF1E0: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x170BF1E3: push eax */
    eax = ebp + 0x10; /* 0x170BF1E4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170BF1E7: push eax */
    eax = ebp + 0xC; /* 0x170BF1E8: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170BF1EB: push eax */
    edx = edi; /* 0x170BF1EC: mov edx, edi */
    RECOMP_CALL(sub_170BEC85); /* 0x170BF1EE: call 0x170bec85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF1F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF221; /* 0x170BF1F5: jl 0x170bf221 */
L_170BF1F7:
    PUSH32(esp, 0); /* 0x170BF1F7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170BF1F9: push dword ptr [ebp + 0x28] */
    eax = MEM32(edi); /* 0x170BF1FC: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170BF1FE: push dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFE07FFFu);
    esi = esi & 0xFFE07FFFu; /* 0x170BF201: and esi, 0xffe07fff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170BF207: push dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x170BF20A: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170BF20B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170BF20E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF211: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170BF214: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170BF217: push edi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x170BF218: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170BF21B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF221; /* 0x170BF21D: jl 0x170bf221 */
L_170BF21F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BF21F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF221:
    esi = POP32_VAL(esp); /* 0x170BF221: pop esi */
L_170BF222:
    edi = POP32_VAL(esp); /* 0x170BF222: pop edi */
    ebp = POP32_VAL(esp); /* 0x170BF223: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170BF224: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170BF22C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF22Cu);

L_170BF22C:
    edi = edi; /* 0x170BF22C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF22E: push ebp */
    ebp = esp; /* 0x170BF22F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE0u; /* 0x170BF231: sub esp, 0xe0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BF237: push ebx */
    PUSH32(esp, esi); /* 0x170BF238: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BF239: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4C); /* 0x170BF23B: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x170BF23E: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_170D7623); /* 0x170BF241: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x170BF246: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, esi */ /* 0x170BF249: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF257; /* 0x170BF24B: jne 0x170bf257 */
L_170BF24D:
    esi = 0x8876086Cu; /* 0x170BF24D: mov esi, 0x8876086c */
    goto L_170BF2DB; /* 0x170BF252: jmp 0x170bf2db */
L_170BF257:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x170BF257: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF24D; /* 0x170BF25A: je 0x170bf24d */
L_170BF25C:
    eax = MEM32(ebx); /* 0x170BF25C: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x170BF25E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x170BF25F: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8C); /* 0x170BF262: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, ecx); /* 0x170BF268: push ecx */
    PUSH32(esp, esi); /* 0x170BF269: push esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x170BF26A: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx); /* 0x170BF26D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x170BF26F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x170BF270: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170BF273: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170BF27B; /* 0x170BF275: jge 0x170bf27b */
L_170BF277:
    esi = eax; /* 0x170BF277: mov esi, eax */
    goto L_170BF2DB; /* 0x170BF279: jmp 0x170bf2db */
L_170BF27B:
    eax = MEM32(ebp + (-0x74)); /* 0x170BF27B: mov eax, dword ptr [ebp - 0x74] */
    PUSH32(esp, edi); /* 0x170BF27E: push edi */
    edi = eax; /* 0x170BF27F: mov edi, eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170BF281: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170BF281: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170BF284: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BF285: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF28A: mov esi, eax */
    /* test esi, esi */ /* 0x170BF28C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170BF28E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF2A4; /* 0x170BF28F: je 0x170bf2a4 */
L_170BF291:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BF291: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x170BF296: push edi */
    PUSH32(esp, 0x10u); /* 0x170BF297: push 0x10 */
    PUSH32(esp, esi); /* 0x170BF299: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x170BF29A: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = esi; /* 0x170BF29F: mov dword ptr [ebp - 0xc], esi */
    goto L_170BF2A8; /* 0x170BF2A2: jmp 0x170bf2a8 */
L_170BF2A4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x170BF2A4: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF2A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BF2A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x170BF2AA: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF2B6; /* 0x170BF2AD: jne 0x170bf2b6 */
L_170BF2AF:
    esi = 0x8007000Eu; /* 0x170BF2AF: mov esi, 0x8007000e */
    goto L_170BF2C0; /* 0x170BF2B4: jmp 0x170bf2c0 */
L_170BF2B6:
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x170BF2B6: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x170BF2B9: mov dword ptr [ebp - 8], eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_170BF2EE; /* 0x170BF2BC: ja 0x170bf2ee */
L_170BF2BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BF2BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF2C0:
    eax = MEM32(ebp + (-0x4)); /* 0x170BF2C0: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170BF2C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170BF2C5: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF2D2; /* 0x170BF2C6: je 0x170bf2d2 */
L_170BF2C8:
    ecx = MEM32(eax); /* 0x170BF2C8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF2CA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF2CB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BF2CE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF2D2:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BF2D2: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170BF2D5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BF2DA: pop ecx */
L_170BF2DB:
    ecx = ebp + (-0x4C); /* 0x170BF2DB: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_170D780B); /* 0x170BF2DE: call 0x170d780b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170BF2E3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BF2E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BF2E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BF2E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BF2E8: ret 0xc */
L_170BF2EB:
    ebx = MEM32(ebp + 0x8); /* 0x170BF2EB: mov ebx, dword ptr [ebp + 8] */
L_170BF2EE:
    eax = MEM32(ebx); /* 0x170BF2EE: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x6C); /* 0x170BF2F0: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, ecx); /* 0x170BF2F3: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF2F4: push dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x170BF2F7: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x170BF2F8: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF2FB: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BF2FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170BF2FF: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF2C0; /* 0x170BF301: jl 0x170bf2c0 */
L_170BF303:
    eax = MEM32(ebx); /* 0x170BF303: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x4); /* 0x170BF305: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170BF308: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF309: push dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x170BF30C: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x170BF30D: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x170BF310: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x4C); /* 0x170BF313: lea ecx, [ebp - 0x4c] */
    eax = ebp + (-0xE0); /* 0x170BF316: lea eax, [ebp - 0xe0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF325; /* 0x170BF31C: jne 0x170bf325 */
L_170BF31E:
    PUSH32(esp, 0x00020000u); /* 0x170BF31E: push 0x20000 */
    goto L_170BF326; /* 0x170BF323: jmp 0x170bf326 */
L_170BF325:
    PUSH32(esp, edi); /* 0x170BF325: push edi */
L_170BF326:
    PUSH32(esp, edi); /* 0x170BF326: push edi */
    PUSH32(esp, edi); /* 0x170BF327: push edi */
    PUSH32(esp, edi); /* 0x170BF328: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BF329: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x170BF32C: push eax */
    RECOMP_CALL(sub_170D7815); /* 0x170BF32D: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF332: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF334: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF2C0; /* 0x170BF336: jl 0x170bf2c0 */
L_170BF338:
    eax = MEM32(ebp + (-0x54)); /* 0x170BF338: mov eax, dword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x170BF33B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x50)); /* 0x170BF33D: mov ecx, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BF340: mov dword ptr [ebp - 0x18], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x170BF343: fild dword ptr [ebp - 0x18] */
    ebx = eax; /* 0x170BF346: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170BF348: mov dword ptr [ebp - 0x1c], ecx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BF353; /* 0x170BF34B: jge 0x170bf353 */
L_170BF34D:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BF34D: fadd dword ptr [0x1700142c] */
L_170BF353:
    /* test ecx, ecx */ /* 0x170BF353: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170BF355: fdivr dword ptr [0x17001424] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x170BF35B: mov dword ptr [ebp - 0x18], ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170BF35E: fst dword ptr [ebp - 0x28] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x170BF361: fild dword ptr [ebp - 0x18] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BF36C; /* 0x170BF364: jge 0x170bf36c */
L_170BF366:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BF366: fadd dword ptr [0x1700142c] */
L_170BF36C:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170BF36C: fdivr dword ptr [0x17001424] */
    eax = ebp + (-0xE0); /* 0x170BF372: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x170BF378: push eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BF379: fst dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x170BF37C: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF37E: fstp dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BF381: fst dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF384: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF386: fstp st(0) */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF388: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF38D: mov esi, eax */
    /* test esi, esi */ /* 0x170BF38F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF438; /* 0x170BF391: je 0x170bf438 */
L_170BF397:
    ecx = esi; /* 0x170BF397: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF399: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x170BF39E: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x170BF3A2: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BF40B; /* 0x170BF3A6: jle 0x170bf40b */
L_170BF3A8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x170BF3A8: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170BF3AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0xC)); /* 0x170BF3AE: mov edi, dword ptr [ebp - 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BF3F1; /* 0x170BF3B1: jle 0x170bf3f1 */
L_170BF3B3:
    fp_push((double)(int32_t)MEM32(ebp + (-0x10))); /* 0x170BF3B3: fild dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170BF3B6: fadd dword ptr [0x1700141c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x170BF3BC: fmul dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BF3BF: fstp dword ptr [ebp - 0x18] */
L_170BF3C2:
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x170BF3C2: fild dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x18)); /* 0x170BF3C5: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF3C8: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x34)) = eax; /* 0x170BF3CB: mov dword ptr [ebp - 0x34], eax */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170BF3CE: fadd dword ptr [0x1700141c] */
    eax = ebp + (-0x30); /* 0x170BF3D4: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170BF3D7: push eax */
    eax = ebp + (-0x38); /* 0x170BF3D8: lea eax, [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x170BF3DB: fmul dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x170BF3DE: push eax */
    PUSH32(esp, edi); /* 0x170BF3DF: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF3E0: fstp dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF3E3: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x170BF3E6: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x170BF3E9: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x14)), ebx */ /* 0x170BF3EC: cmp dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF3C2; /* 0x170BF3EF: jl 0x170bf3c2 */
L_170BF3F1:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BF3F1: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BF3F4: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x170BF3F6: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BF3F8: push dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x170BF3FB: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BF3FD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x170BF400: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x170BF403: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x170BF406: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF3A8; /* 0x170BF409: jl 0x170bf3a8 */
L_170BF40B:
    eax = MEM32(esi); /* 0x170BF40B: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BF40D: push 1 */
    ecx = esi; /* 0x170BF40F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BF411: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170BF413: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170BF416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BF424; /* 0x170BF418: je 0x170bf424 */
L_170BF41A:
    ecx = MEM32(eax); /* 0x170BF41A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF41C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF41D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BF420: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BF424:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170BF424: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x170BF427: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x170BF42A: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BF2EB; /* 0x170BF42D: jb 0x170bf2eb */
L_170BF433:
    RECOMP_BACKEDGE();
    goto L_170BF2BE; /* 0x170BF433: jmp 0x170bf2be */
L_170BF438:
    esi = 0x8876086Cu; /* 0x170BF438: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_170BF2C0; /* 0x170BF43D: jmp 0x170bf2c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BF447(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BF447u);

L_170BF447:
    edi = edi; /* 0x170BF447: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BF449: push ebp */
    ebp = esp; /* 0x170BF44A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE8u; /* 0x170BF44C: sub esp, 0xe8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BF452: push esi */
    PUSH32(esp, edi); /* 0x170BF453: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BF454: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x54); /* 0x170BF456: lea ecx, [ebp - 0x54] */
    MEM32(ebp + (-0x8)) = edi; /* 0x170BF459: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_170D7623); /* 0x170BF45C: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170BF461: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x170BF464: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF472; /* 0x170BF466: jne 0x170bf472 */
L_170BF468:
    esi = 0x8876086Cu; /* 0x170BF468: mov esi, 0x8876086c */
    goto L_170BFB59; /* 0x170BF46D: jmp 0x170bfb59 */
L_170BF472:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x170BF472: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF468; /* 0x170BF475: je 0x170bf468 */
L_170BF477:
    eax = MEM32(esi); /* 0x170BF477: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170BF479: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x170BF47A: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xE8); /* 0x170BF47D: lea ecx, [ebp - 0xe8] */
    PUSH32(esp, ecx); /* 0x170BF483: push ecx */
    PUSH32(esp, edi); /* 0x170BF484: push edi */
    MEM32(ebp + (-0x40)) = eax; /* 0x170BF485: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(esi); /* 0x170BF488: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170BF48A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x170BF48B: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170BF48E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170BF499; /* 0x170BF490: jge 0x170bf499 */
L_170BF492:
    esi = eax; /* 0x170BF492: mov esi, eax */
    goto L_170BFB59; /* 0x170BF494: jmp 0x170bfb59 */
L_170BF499:
    eax = MEM32(ebp + (-0xD0)); /* 0x170BF499: mov eax, dword ptr [ebp - 0xd0] */
    PUSH32(esp, ebx); /* 0x170BF49F: push ebx */
    ebx = eax; /* 0x170BF4A0: mov ebx, eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170BF4A2: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170BF4A2: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170BF4A5: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BF4A6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF4AB: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF4AD: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170BF4AF: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF4C5; /* 0x170BF4B0: je 0x170bf4c5 */
L_170BF4B2:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BF4B2: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x170BF4B7: push ebx */
    PUSH32(esp, 0x10u); /* 0x170BF4B8: push 0x10 */
    PUSH32(esp, esi); /* 0x170BF4BA: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x170BF4BB: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = esi; /* 0x170BF4C0: mov dword ptr [ebp - 0x14], esi */
    goto L_170BF4C8; /* 0x170BF4C3: jmp 0x170bf4c8 */
L_170BF4C5:
    MEM32(ebp + (-0x14)) = edi; /* 0x170BF4C5: mov dword ptr [ebp - 0x14], edi */
L_170BF4C8:
    /* cmp MEM32(ebp + (-0x14)), edi */ /* 0x170BF4C8: cmp dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF4D7; /* 0x170BF4CB: jne 0x170bf4d7 */
L_170BF4CD:
    esi = 0x8007000Eu; /* 0x170BF4CD: mov esi, 0x8007000e */
    goto L_170BFB3F; /* 0x170BF4D2: jmp 0x170bfb3f */
L_170BF4D7:
    /* cmp MEM32(ebp + (-0x40)), edi */ /* 0x170BF4D7: cmp dword ptr [ebp - 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edi; /* 0x170BF4DA: mov dword ptr [ebp - 0x20], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BFB3D; /* 0x170BF4DD: jbe 0x170bfb3d */
L_170BF4E3:
    eax = MEM32(ebp + 0x8); /* 0x170BF4E3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF4E6: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BF4E8: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BF4EB: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF4EC: push dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x170BF4EF: push edi */
    PUSH32(esp, eax); /* 0x170BF4F0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BF4F1: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF4F4: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF4F6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF4F8: jl 0x170bfb3f */
L_170BF4FE:
    eax = MEM32(ebp + 0x8); /* 0x170BF4FE: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF501: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xC8); /* 0x170BF503: lea edx, [ebp - 0xc8] */
    PUSH32(esp, edx); /* 0x170BF509: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF50A: push dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x170BF50D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x170BF50E: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF511: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF513: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF515: jl 0x170bfb3f */
L_170BF51B:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x170BF51B: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x54); /* 0x170BF51E: lea ecx, [ebp - 0x54] */
    eax = ebp + (-0xA8); /* 0x170BF521: lea eax, [ebp - 0xa8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BF530; /* 0x170BF527: jne 0x170bf530 */
L_170BF529:
    PUSH32(esp, 0x00020000u); /* 0x170BF529: push 0x20000 */
    goto L_170BF531; /* 0x170BF52E: jmp 0x170bf531 */
L_170BF530:
    PUSH32(esp, edi); /* 0x170BF530: push edi */
L_170BF531:
    PUSH32(esp, edi); /* 0x170BF531: push edi */
    PUSH32(esp, edi); /* 0x170BF532: push edi */
    PUSH32(esp, edi); /* 0x170BF533: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF534: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x170BF537: push eax */
    RECOMP_CALL(sub_170D7815); /* 0x170BF538: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF53D: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF53F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF541: jl 0x170bfb3f */
L_170BF547:
    eax = ebp + (-0xA8); /* 0x170BF547: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF54D: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF54E: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF553: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF555: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BF557: je 0x170bfb69 */
L_170BF55D:
    ecx = esi; /* 0x170BF55D: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF55F: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF564: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + (-0xB0)); /* 0x170BF56A: mov eax, dword ptr [ebp - 0xb0] */
    /* test eax, eax */ /* 0x170BF570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x170BF572: mov dword ptr [ebp - 0x3c], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x3C))); /* 0x170BF575: fild dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170BF578: mov dword ptr [ebp - 0x10], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BF583; /* 0x170BF57B: jge 0x170bf583 */
L_170BF57D:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BF57D: fadd dword ptr [0x1700142c] */
L_170BF583:
    /* cmp eax, edi */ /* 0x170BF583: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = _st[1] / _st[0]; /* 0x170BF585: fdivr st(1) */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BF587: mov dword ptr [ebp - 0xc], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170BF58A: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x170BF58D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF58F: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170BF592: fld dword ptr [ebp - 0x18] */
    _st[0] += _st[0]; /* 0x170BF595: fadd st(0), st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170BF597: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BF59A: fst dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF59D: fstp dword ptr [ebp - 0x30] */
    if (CMP_G(_flag_a, _flag_b)) goto L_170BF656; /* 0x170BF5A0: jg 0x170bf656 */
L_170BF5A6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF5A6: fstp st(0) */
L_170BF5A8:
    eax = MEM32(esi); /* 0x170BF5A8: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BF5AA: push 1 */
    ecx = esi; /* 0x170BF5AC: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BF5AE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BF5B0: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BF5B3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF5C0; /* 0x170BF5B5: je 0x170bf5c0 */
L_170BF5B7:
    ecx = MEM32(eax); /* 0x170BF5B7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF5B9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF5BA: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BF5BD: mov dword ptr [ebp - 8], edi */
L_170BF5C0:
    eax = MEM32(ebp + 0x8); /* 0x170BF5C0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF5C3: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BF5C5: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BF5C8: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF5C9: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 1); /* 0x170BF5CC: push 1 */
    PUSH32(esp, eax); /* 0x170BF5CE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BF5CF: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF5D2: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF5D4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF5D6: jl 0x170bfb3f */
L_170BF5DC:
    PUSH32(esp, edi); /* 0x170BF5DC: push edi */
    PUSH32(esp, edi); /* 0x170BF5DD: push edi */
    PUSH32(esp, edi); /* 0x170BF5DE: push edi */
    PUSH32(esp, edi); /* 0x170BF5DF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF5E0: push dword ptr [ebp - 8] */
    eax = ebp + (-0xA8); /* 0x170BF5E3: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF5E9: push eax */
    ecx = ebp + (-0x54); /* 0x170BF5EA: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D7815); /* 0x170BF5ED: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF5F2: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF5F4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF5F6: jl 0x170bfb3f */
L_170BF5FC:
    eax = ebp + (-0xA8); /* 0x170BF5FC: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF602: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF603: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF608: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF60A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BF60C: je 0x170bfb69 */
L_170BF612:
    ecx = esi; /* 0x170BF612: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF614: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x170BF619: fldz  */
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BF61B: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF61E: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170BF621: fld dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BF624: mov dword ptr [ebp - 0xc], edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BF627: fst dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF62A: fstp dword ptr [ebp - 0x30] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BF726; /* 0x170BF62D: jle 0x170bf726 */
L_170BF633:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF633: fld dword ptr [0x17001424] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BF639: mov ebx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BF63C: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BF63F: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BF642: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BF644: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF646: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BF649: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BF64B: fstp dword ptr [ebp - 0x1c] */
    goto L_170BF6CF; /* 0x170BF64E: jmp 0x170bf6cf */
L_170BF650:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF650: fld dword ptr [0x17001424] */
L_170BF656:
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BF656: fild dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BF659: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BF65C: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BF65F: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BF661: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF663: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BF666: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BF668: fstp dword ptr [ebp - 0x1c] */
    goto L_170BF673; /* 0x170BF66B: jmp 0x170bf673 */
L_170BF66D:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF66D: fld dword ptr [0x17001424] */
L_170BF673:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BF673: fild dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170BF676: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF679: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BF67C: mov dword ptr [ebp - 0x28], eax */
    _st[0] += _st[0]; /* 0x170BF67F: fadd st(0), st(0) */
    eax = ebp + (-0x38); /* 0x170BF681: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BF684: push eax */
    eax = ebp + (-0x2C); /* 0x170BF685: lea eax, [ebp - 0x2c] */
    _st[0] += _st[1]; /* 0x170BF688: fadd st(1) */
    PUSH32(esp, eax); /* 0x170BF68A: push eax */
    PUSH32(esp, ebx); /* 0x170BF68B: push ebx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF68C: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BF68F: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BF691: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF694: fstp st(0) */
    fp_push(1.0); /* 0x170BF696: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BF698: fstp dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF69B: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BF69E: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BF6A1: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BF6A4: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BF6A7: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF66D; /* 0x170BF6AA: jl 0x170bf66d */
L_170BF6AC:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BF6AC: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BF6AF: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BF6B2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BF6B4: push edi */
    PUSH32(esp, ebx); /* 0x170BF6B5: push ebx */
    ecx = esi; /* 0x170BF6B6: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BF6B8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BF6BB: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BF6BC: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BF6BF: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF650; /* 0x170BF6C2: jl 0x170bf650 */
L_170BF6C4:
    RECOMP_BACKEDGE();
    goto L_170BF5A8; /* 0x170BF6C4: jmp 0x170bf5a8 */
L_170BF6C9:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF6C9: fld dword ptr [0x17001424] */
L_170BF6CF:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BF6CF: fild dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170BF6D2: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF6D5: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BF6D8: mov dword ptr [ebp - 0x28], eax */
    _st[0] += _st[0]; /* 0x170BF6DB: fadd st(0), st(0) */
    eax = ebp + (-0x38); /* 0x170BF6DD: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BF6E0: push eax */
    eax = ebp + (-0x2C); /* 0x170BF6E1: lea eax, [ebp - 0x2c] */
    _st[0] += _st[1]; /* 0x170BF6E4: fadd st(1) */
    PUSH32(esp, eax); /* 0x170BF6E6: push eax */
    PUSH32(esp, ebx); /* 0x170BF6E7: push ebx */
    MEM32(ebp + (-0x2C)) = 0xBF800000u; /* 0x170BF6E8: mov dword ptr [ebp - 0x2c], 0xbf800000 */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF6EF: fmul dword ptr [ebp - 0x18] */
    _st[0] -= _st[1]; /* 0x170BF6F2: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BF6F4: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF6F7: fstp st(0) */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF6F9: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BF6FC: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BF6FF: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BF702: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BF705: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF6C9; /* 0x170BF708: jl 0x170bf6c9 */
L_170BF70A:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BF70A: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BF70D: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BF710: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BF712: push edi */
    PUSH32(esp, ebx); /* 0x170BF713: push ebx */
    ecx = esi; /* 0x170BF714: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BF716: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BF719: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BF71A: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BF71D: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF633; /* 0x170BF720: jl 0x170bf633 */
L_170BF726:
    eax = MEM32(esi); /* 0x170BF726: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BF728: push 1 */
    ecx = esi; /* 0x170BF72A: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BF72C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BF72E: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BF731: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF73E; /* 0x170BF733: je 0x170bf73e */
L_170BF735:
    ecx = MEM32(eax); /* 0x170BF735: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF737: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF738: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BF73B: mov dword ptr [ebp - 8], edi */
L_170BF73E:
    eax = MEM32(ebp + 0x8); /* 0x170BF73E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF741: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BF743: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BF746: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF747: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 2); /* 0x170BF74A: push 2 */
    PUSH32(esp, eax); /* 0x170BF74C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BF74D: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF750: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF752: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF754: jl 0x170bfb3f */
L_170BF75A:
    PUSH32(esp, edi); /* 0x170BF75A: push edi */
    PUSH32(esp, edi); /* 0x170BF75B: push edi */
    PUSH32(esp, edi); /* 0x170BF75C: push edi */
    PUSH32(esp, edi); /* 0x170BF75D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF75E: push dword ptr [ebp - 8] */
    eax = ebp + (-0xA8); /* 0x170BF761: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF767: push eax */
    ecx = ebp + (-0x54); /* 0x170BF768: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D7815); /* 0x170BF76B: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF770: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF772: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF774: jl 0x170bfb3f */
L_170BF77A:
    eax = ebp + (-0xA8); /* 0x170BF77A: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF780: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF781: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF786: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF788: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BF78A: je 0x170bfb69 */
L_170BF790:
    ecx = esi; /* 0x170BF790: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF792: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170BF797: fld dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BF79A: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF79D: fst dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x170BF7A0: fldz  */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BF7A2: mov dword ptr [ebp - 0xc], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BF7A5: fstp dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF7A8: fstp dword ptr [ebp - 0x30] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BF821; /* 0x170BF7AB: jle 0x170bf821 */
L_170BF7AD:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF7AD: fld dword ptr [0x17001424] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BF7B3: mov ebx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BF7B6: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BF7B9: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BF7BC: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BF7BE: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF7C0: fmul dword ptr [ebp - 0x18] */
    _st[0] -= _st[1]; /* 0x170BF7C3: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BF7C5: fstp dword ptr [ebp - 0x1c] */
    goto L_170BF7D0; /* 0x170BF7C8: jmp 0x170bf7d0 */
L_170BF7CA:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF7CA: fld dword ptr [0x17001424] */
L_170BF7D0:
    eax = MEM32(ebp + (-0x1C)); /* 0x170BF7D0: mov eax, dword ptr [ebp - 0x1c] */
    fp_push(1.0); /* 0x170BF7D3: fld1  */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF7D5: push dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170BF7D8: fstp dword ptr [ebp - 0x28] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BF7DB: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x170BF7DE: mov dword ptr [ebp - 0x24], eax */
    eax = ebp + (-0x38); /* 0x170BF7E1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BF7E4: push eax */
    eax = ebp + (-0x2C); /* 0x170BF7E5: lea eax, [ebp - 0x2c] */
    _st[0] += _st[0]; /* 0x170BF7E8: fadd st(0), st(0) */
    PUSH32(esp, eax); /* 0x170BF7EA: push eax */
    PUSH32(esp, ebx); /* 0x170BF7EB: push ebx */
    _st[0] += _st[1]; /* 0x170BF7EC: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF7EE: fmul dword ptr [ebp - 0x18] */
    _st[0] -= _st[1]; /* 0x170BF7F1: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BF7F3: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF7F6: fstp st(0) */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF7F8: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BF7FB: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BF7FE: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BF801: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BF804: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF7CA; /* 0x170BF807: jl 0x170bf7ca */
L_170BF809:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BF809: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BF80C: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BF80F: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BF811: push edi */
    PUSH32(esp, ebx); /* 0x170BF812: push ebx */
    ecx = esi; /* 0x170BF813: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BF815: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BF818: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BF819: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BF81C: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF7AD; /* 0x170BF81F: jl 0x170bf7ad */
L_170BF821:
    eax = MEM32(esi); /* 0x170BF821: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BF823: push 1 */
    ecx = esi; /* 0x170BF825: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BF827: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BF829: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BF82C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF839; /* 0x170BF82E: je 0x170bf839 */
L_170BF830:
    ecx = MEM32(eax); /* 0x170BF830: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF832: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF833: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BF836: mov dword ptr [ebp - 8], edi */
L_170BF839:
    eax = MEM32(ebp + 0x8); /* 0x170BF839: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF83C: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BF83E: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BF841: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF842: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 3); /* 0x170BF845: push 3 */
    PUSH32(esp, eax); /* 0x170BF847: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BF848: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF84B: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF84D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF84F: jl 0x170bfb3f */
L_170BF855:
    PUSH32(esp, edi); /* 0x170BF855: push edi */
    PUSH32(esp, edi); /* 0x170BF856: push edi */
    PUSH32(esp, edi); /* 0x170BF857: push edi */
    PUSH32(esp, edi); /* 0x170BF858: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF859: push dword ptr [ebp - 8] */
    eax = ebp + (-0xA8); /* 0x170BF85C: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF862: push eax */
    ecx = ebp + (-0x54); /* 0x170BF863: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D7815); /* 0x170BF866: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF86B: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF86D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF86F: jl 0x170bfb3f */
L_170BF875:
    eax = ebp + (-0xA8); /* 0x170BF875: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF87B: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF87C: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF881: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF883: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BF885: je 0x170bfb69 */
L_170BF88B:
    ecx = esi; /* 0x170BF88B: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF88D: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170BF892: fld dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BF895: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF898: fst dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x170BF89B: fldz  */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BF89D: mov dword ptr [ebp - 0xc], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BF8A0: fstp dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF8A3: fstp dword ptr [ebp - 0x30] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BF91E; /* 0x170BF8A6: jle 0x170bf91e */
L_170BF8A8:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF8A8: fld dword ptr [0x17001424] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BF8AE: mov ebx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BF8B1: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BF8B4: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BF8B7: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BF8B9: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF8BB: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BF8BE: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BF8C0: fstp dword ptr [ebp - 0x1c] */
    goto L_170BF8CB; /* 0x170BF8C3: jmp 0x170bf8cb */
L_170BF8C5:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF8C5: fld dword ptr [0x17001424] */
L_170BF8CB:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BF8CB: fild dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170BF8CE: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF8D1: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x24)) = eax; /* 0x170BF8D4: mov dword ptr [ebp - 0x24], eax */
    _st[0] += _st[0]; /* 0x170BF8D7: fadd st(0), st(0) */
    eax = ebp + (-0x38); /* 0x170BF8D9: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BF8DC: push eax */
    eax = ebp + (-0x2C); /* 0x170BF8DD: lea eax, [ebp - 0x2c] */
    _st[0] += _st[1]; /* 0x170BF8E0: fadd st(1) */
    PUSH32(esp, eax); /* 0x170BF8E2: push eax */
    PUSH32(esp, ebx); /* 0x170BF8E3: push ebx */
    MEM32(ebp + (-0x28)) = 0xBF800000u; /* 0x170BF8E4: mov dword ptr [ebp - 0x28], 0xbf800000 */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF8EB: fmul dword ptr [ebp - 0x18] */
    _st[0] -= _st[1]; /* 0x170BF8EE: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BF8F0: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF8F3: fstp st(0) */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF8F5: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BF8F8: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BF8FB: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BF8FE: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BF901: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF8C5; /* 0x170BF904: jl 0x170bf8c5 */
L_170BF906:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BF906: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BF909: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BF90C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BF90E: push edi */
    PUSH32(esp, ebx); /* 0x170BF90F: push ebx */
    ecx = esi; /* 0x170BF910: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BF912: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BF915: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BF916: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BF919: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF8A8; /* 0x170BF91C: jl 0x170bf8a8 */
L_170BF91E:
    eax = MEM32(esi); /* 0x170BF91E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BF920: push 1 */
    ecx = esi; /* 0x170BF922: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BF924: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BF926: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BF929: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BF936; /* 0x170BF92B: je 0x170bf936 */
L_170BF92D:
    ecx = MEM32(eax); /* 0x170BF92D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BF92F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BF930: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BF933: mov dword ptr [ebp - 8], edi */
L_170BF936:
    eax = MEM32(ebp + 0x8); /* 0x170BF936: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BF939: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BF93B: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BF93E: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BF93F: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 4); /* 0x170BF942: push 4 */
    PUSH32(esp, eax); /* 0x170BF944: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BF945: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF948: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF94A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF94C: jl 0x170bfb3f */
L_170BF952:
    PUSH32(esp, edi); /* 0x170BF952: push edi */
    PUSH32(esp, edi); /* 0x170BF953: push edi */
    PUSH32(esp, edi); /* 0x170BF954: push edi */
    PUSH32(esp, edi); /* 0x170BF955: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BF956: push dword ptr [ebp - 8] */
    eax = ebp + (-0xA8); /* 0x170BF959: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF95F: push eax */
    ecx = ebp + (-0x54); /* 0x170BF960: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D7815); /* 0x170BF963: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF968: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF96A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BF96C: jl 0x170bfb3f */
L_170BF972:
    eax = ebp + (-0xA8); /* 0x170BF972: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BF978: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BF979: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BF97E: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BF980: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BF982: je 0x170bfb69 */
L_170BF988:
    ecx = esi; /* 0x170BF988: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BF98A: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170BF98F: fld dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BF992: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BF995: fst dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BF998: fstp dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BF99B: mov dword ptr [ebp - 0xc], edi */
    fp_push(0.0); /* 0x170BF99E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BF9A0: fstp dword ptr [ebp - 0x30] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BFA19; /* 0x170BF9A3: jle 0x170bfa19 */
L_170BF9A5:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF9A5: fld dword ptr [0x17001424] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BF9AB: mov ebx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BF9AE: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BF9B1: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BF9B4: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BF9B6: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF9B8: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BF9BB: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BF9BD: fstp dword ptr [ebp - 0x1c] */
    goto L_170BF9C8; /* 0x170BF9C0: jmp 0x170bf9c8 */
L_170BF9C2:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BF9C2: fld dword ptr [0x17001424] */
L_170BF9C8:
    eax = MEM32(ebp + (-0x1C)); /* 0x170BF9C8: mov eax, dword ptr [ebp - 0x1c] */
    fp_push(1.0); /* 0x170BF9CB: fld1  */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BF9CD: push dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170BF9D0: fstp dword ptr [ebp - 0x24] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BF9D3: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BF9D6: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x38); /* 0x170BF9D9: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BF9DC: push eax */
    eax = ebp + (-0x2C); /* 0x170BF9DD: lea eax, [ebp - 0x2c] */
    _st[0] += _st[0]; /* 0x170BF9E0: fadd st(0), st(0) */
    PUSH32(esp, eax); /* 0x170BF9E2: push eax */
    PUSH32(esp, ebx); /* 0x170BF9E3: push ebx */
    _st[0] += _st[1]; /* 0x170BF9E4: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BF9E6: fmul dword ptr [ebp - 0x18] */
    _st[0] -= _st[1]; /* 0x170BF9E9: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BF9EB: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BF9EE: fstp st(0) */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BF9F0: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BF9F3: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BF9F6: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BF9F9: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BF9FC: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF9C2; /* 0x170BF9FF: jl 0x170bf9c2 */
L_170BFA01:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BFA01: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BFA04: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BFA07: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BFA09: push edi */
    PUSH32(esp, ebx); /* 0x170BFA0A: push ebx */
    ecx = esi; /* 0x170BFA0B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BFA0D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BFA10: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BFA11: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BFA14: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BF9A5; /* 0x170BFA17: jl 0x170bf9a5 */
L_170BFA19:
    eax = MEM32(esi); /* 0x170BFA19: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BFA1B: push 1 */
    ecx = esi; /* 0x170BFA1D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BFA1F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BFA21: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BFA24: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFA31; /* 0x170BFA26: je 0x170bfa31 */
L_170BFA28:
    ecx = MEM32(eax); /* 0x170BFA28: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFA2A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BFA2B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BFA2E: mov dword ptr [ebp - 8], edi */
L_170BFA31:
    eax = MEM32(ebp + 0x8); /* 0x170BFA31: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170BFA34: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x170BFA36: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BFA39: push edx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x170BFA3A: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 5); /* 0x170BFA3D: push 5 */
    PUSH32(esp, eax); /* 0x170BFA3F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x170BFA40: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFA43: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BFA45: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BFA47: jl 0x170bfb3f */
L_170BFA4D:
    PUSH32(esp, edi); /* 0x170BFA4D: push edi */
    PUSH32(esp, edi); /* 0x170BFA4E: push edi */
    PUSH32(esp, edi); /* 0x170BFA4F: push edi */
    PUSH32(esp, edi); /* 0x170BFA50: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BFA51: push dword ptr [ebp - 8] */
    eax = ebp + (-0xA8); /* 0x170BFA54: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BFA5A: push eax */
    ecx = ebp + (-0x54); /* 0x170BFA5B: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D7815); /* 0x170BFA5E: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFA63: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BFA65: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFB3F; /* 0x170BFA67: jl 0x170bfb3f */
L_170BFA6D:
    eax = ebp + (-0xA8); /* 0x170BFA6D: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x170BFA73: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BFA74: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFA79: mov esi, eax */
    /* cmp esi, edi */ /* 0x170BFA7B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB69; /* 0x170BFA7D: je 0x170bfb69 */
L_170BFA83:
    ecx = esi; /* 0x170BFA83: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BFA85: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x170BFA8A: fld dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x170BFA8D: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BFA90: fst dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BFA93: fstp dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0xC)) = edi; /* 0x170BFA96: mov dword ptr [ebp - 0xc], edi */
    fp_push(0.0); /* 0x170BFA99: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BFA9B: fstp dword ptr [ebp - 0x30] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BFB16; /* 0x170BFA9E: jle 0x170bfb16 */
L_170BFAA0:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BFAA0: fld dword ptr [0x17001424] */
    ebx = MEM32(ebp + (-0x14)); /* 0x170BFAA6: mov ebx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x170BFAA9: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x170BFAAC: mov dword ptr [ebp - 4], edi */
    _st[0] += _st[0]; /* 0x170BFAAF: fadd st(0), st(0) */
    _st[0] += _st[1]; /* 0x170BFAB1: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BFAB3: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BFAB6: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BFAB8: fstp dword ptr [ebp - 0x1c] */
    goto L_170BFAC3; /* 0x170BFABB: jmp 0x170bfac3 */
L_170BFABD:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BFABD: fld dword ptr [0x17001424] */
L_170BFAC3:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x170BFAC3: fild dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170BFAC6: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BFAC9: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x28)) = eax; /* 0x170BFACC: mov dword ptr [ebp - 0x28], eax */
    _st[0] += _st[0]; /* 0x170BFACF: fadd st(0), st(0) */
    eax = ebp + (-0x38); /* 0x170BFAD1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x170BFAD4: push eax */
    eax = ebp + (-0x2C); /* 0x170BFAD5: lea eax, [ebp - 0x2c] */
    _st[0] += _st[1]; /* 0x170BFAD8: fadd st(1) */
    PUSH32(esp, eax); /* 0x170BFADA: push eax */
    PUSH32(esp, ebx); /* 0x170BFADB: push ebx */
    MEM32(ebp + (-0x24)) = 0xBF800000u; /* 0x170BFADC: mov dword ptr [ebp - 0x24], 0xbf800000 */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170BFAE3: fmul dword ptr [ebp - 0x18] */
    _st[0] = _st[1] - _st[0]; /* 0x170BFAE6: fsubr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x170BFAE8: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BFAEB: fstp st(0) */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BFAED: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x170BFAF0: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x170BFAF3: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x170BFAF6: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170BFAF9: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFABD; /* 0x170BFAFC: jl 0x170bfabd */
L_170BFAFE:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BFAFE: push dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0xC)); /* 0x170BFB01: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BFB04: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170BFB06: push edi */
    PUSH32(esp, ebx); /* 0x170BFB07: push ebx */
    ecx = esi; /* 0x170BFB08: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BFB0A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170BFB0D: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x170BFB0E: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BFB11: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFAA0; /* 0x170BFB14: jl 0x170bfaa0 */
L_170BFB16:
    eax = MEM32(esi); /* 0x170BFB16: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BFB18: push 1 */
    ecx = esi; /* 0x170BFB1A: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BFB1C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x170BFB1E: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BFB21: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB2E; /* 0x170BFB23: je 0x170bfb2e */
L_170BFB25:
    ecx = MEM32(eax); /* 0x170BFB25: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFB27: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BFB28: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BFB2B: mov dword ptr [ebp - 8], edi */
L_170BFB2E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 1; /* 0x170BFB2E: inc dword ptr [ebp - 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x20)); /* 0x170BFB31: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x170BFB34: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BF4E3; /* 0x170BFB37: jb 0x170bf4e3 */
L_170BFB3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BFB3D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BFB3F:
    eax = MEM32(ebp + (-0x8)); /* 0x170BFB3F: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x170BFB42: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x170BFB44: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB50; /* 0x170BFB45: je 0x170bfb50 */
L_170BFB47:
    ecx = MEM32(eax); /* 0x170BFB47: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFB49: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BFB4A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x170BFB4D: mov dword ptr [ebp - 8], edi */
L_170BFB50:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BFB50: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x170BFB53: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BFB58: pop ecx */
L_170BFB59:
    ecx = ebp + (-0x54); /* 0x170BFB59: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_170D780B); /* 0x170BFB5C: call 0x170d780b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170BFB61: pop edi */
    eax = esi; /* 0x170BFB62: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BFB64: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BFB65: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BFB66: ret 0xc */
L_170BFB69:
    esi = 0x8876086Cu; /* 0x170BFB69: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_170BFB3F; /* 0x170BFB6E: jmp 0x170bfb3f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BFB75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BFB75u);

L_170BFB75:
    edi = edi; /* 0x170BFB75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BFB77: push ebp */
    ebp = esp; /* 0x170BFB78: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE0u; /* 0x170BFB7A: sub esp, 0xe0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170BFB80: push ebx */
    PUSH32(esp, esi); /* 0x170BFB81: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BFB82: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170BFB84: push edi */
    ecx = ebp + (-0x20); /* 0x170BFB85: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170BFB88: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_170D77D7); /* 0x170BFB8B: call 0x170d77d7 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x170BFB90: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x170BFB93: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BFBA1; /* 0x170BFB95: jne 0x170bfba1 */
L_170BFB97:
    esi = 0x8876086Cu; /* 0x170BFB97: mov esi, 0x8876086c */
    goto L_170BFC22; /* 0x170BFB9C: jmp 0x170bfc22 */
L_170BFBA1:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x170BFBA1: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFB97; /* 0x170BFBA4: je 0x170bfb97 */
L_170BFBA6:
    eax = MEM32(edi); /* 0x170BFBA6: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x170BFBA8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x170BFBA9: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8C); /* 0x170BFBAC: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, ecx); /* 0x170BFBB2: push ecx */
    PUSH32(esp, ebx); /* 0x170BFBB3: push ebx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x170BFBB4: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(edi); /* 0x170BFBB7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x170BFBB9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x170BFBBA: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170BFBBD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170BFBC5; /* 0x170BFBBF: jge 0x170bfbc5 */
L_170BFBC1:
    esi = eax; /* 0x170BFBC1: mov esi, eax */
    goto L_170BFC22; /* 0x170BFBC3: jmp 0x170bfc22 */
L_170BFBC5:
    eax = MEM32(ebp + (-0x7C)); /* 0x170BFBC5: mov eax, dword ptr [ebp - 0x7c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x170BFBC8: mov dword ptr [ebp - 0x24], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170BFBCB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170BFBCB: shl eax, 4 */
    PUSH32(esp, eax); /* 0x170BFBCE: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BFBCF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFBD4: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170BFBD6: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170BFBD8: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFBF0; /* 0x170BFBD9: je 0x170bfbf0 */
L_170BFBDB:
    PUSH32(esp, 0x1706E47Eu); /* 0x170BFBDB: push 0x1706e47e */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x170BFBE0: push dword ptr [ebp - 0x24] */
    PUSH32(esp, 0x10u); /* 0x170BFBE3: push 0x10 */
    PUSH32(esp, esi); /* 0x170BFBE5: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x170BFBE6: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = esi; /* 0x170BFBEB: mov dword ptr [ebp - 0xc], esi */
    goto L_170BFBF3; /* 0x170BFBEE: jmp 0x170bfbf3 */
L_170BFBF0:
    MEM32(ebp + (-0xC)) = ebx; /* 0x170BFBF0: mov dword ptr [ebp - 0xc], ebx */
L_170BFBF3:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x170BFBF3: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BFBFF; /* 0x170BFBF6: jne 0x170bfbff */
L_170BFBF8:
    esi = 0x8007000Eu; /* 0x170BFBF8: mov esi, 0x8007000e */
    goto L_170BFC09; /* 0x170BFBFD: jmp 0x170bfc09 */
L_170BFBFF:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x170BFBFF: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x170BFC02: mov dword ptr [ebp - 8], ebx */
    if (CMP_A(_flag_a, _flag_b)) goto L_170BFC36; /* 0x170BFC05: ja 0x170bfc36 */
L_170BFC07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BFC07: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BFC09:
    eax = MEM32(ebp + (-0x4)); /* 0x170BFC09: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, ebx */ /* 0x170BFC0C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFC19; /* 0x170BFC0E: je 0x170bfc19 */
L_170BFC10:
    ecx = MEM32(eax); /* 0x170BFC10: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFC12: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BFC13: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x170BFC16: mov dword ptr [ebp - 4], ebx */
L_170BFC19:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BFC19: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170BFC1C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BFC21: pop ecx */
L_170BFC22:
    ecx = ebp + (-0x20); /* 0x170BFC22: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_170D7D09); /* 0x170BFC25: call 0x170d7d09 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170BFC2A: pop edi */
    eax = esi; /* 0x170BFC2B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170BFC2D: pop esi */
    ebx = POP32_VAL(esp); /* 0x170BFC2E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BFC2F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170BFC30: ret 0xc */
L_170BFC33:
    edi = MEM32(ebp + 0x8); /* 0x170BFC33: mov edi, dword ptr [ebp + 8] */
L_170BFC36:
    eax = MEM32(edi); /* 0x170BFC36: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x70); /* 0x170BFC38: lea ecx, [ebp - 0x70] */
    PUSH32(esp, ecx); /* 0x170BFC3B: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BFC3C: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x170BFC3F: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x170BFC40: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFC43: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170BFC45: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFC09; /* 0x170BFC47: jl 0x170bfc09 */
L_170BFC49:
    eax = MEM32(edi); /* 0x170BFC49: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x4); /* 0x170BFC4B: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170BFC4E: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170BFC4F: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x170BFC52: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x170BFC53: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x170BFC56: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x20); /* 0x170BFC59: lea ecx, [ebp - 0x20] */
    eax = ebp + (-0xE0); /* 0x170BFC5C: lea eax, [ebp - 0xe0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BFC6B; /* 0x170BFC62: jne 0x170bfc6b */
L_170BFC64:
    PUSH32(esp, 0x00020000u); /* 0x170BFC64: push 0x20000 */
    goto L_170BFC6C; /* 0x170BFC69: jmp 0x170bfc6c */
L_170BFC6B:
    PUSH32(esp, ebx); /* 0x170BFC6B: push ebx */
L_170BFC6C:
    PUSH32(esp, ebx); /* 0x170BFC6C: push ebx */
    PUSH32(esp, ebx); /* 0x170BFC6D: push ebx */
    PUSH32(esp, ebx); /* 0x170BFC6E: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170BFC6F: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x170BFC72: push eax */
    RECOMP_CALL(sub_170D7D13); /* 0x170BFC73: call 0x170d7d13 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFC78: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170BFC7A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFC09; /* 0x170BFC7C: jl 0x170bfc09 */
L_170BFC7E:
    eax = ebp + (-0xE0); /* 0x170BFC7E: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x170BFC84: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x170BFC85: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFC8A: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170BFC8C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFDD2; /* 0x170BFC8E: je 0x170bfdd2 */
L_170BFC94:
    ecx = esi; /* 0x170BFC94: mov ecx, esi */
    RECOMP_CALL(sub_170C4D09); /* 0x170BFC96: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170BFC9B: fld dword ptr [0x17001424] */
    ecx = MEM32(ebp + (-0x60)); /* 0x170BFCA1: mov ecx, dword ptr [ebp - 0x60] */
    /* test ecx, ecx */ /* 0x170BFCA4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x5C)); /* 0x170BFCA6: mov edx, dword ptr [ebp - 0x5c] */
    eax = MEM32(ebp + (-0x58)); /* 0x170BFCA9: mov eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170BFCAC: mov dword ptr [ebp - 0x1c], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x1C))); /* 0x170BFCAF: fild dword ptr [ebp - 0x1c] */
    ebx = ecx; /* 0x170BFCB2: mov ebx, ecx */
    MEM32(ebp + (-0x24)) = edx; /* 0x170BFCB4: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x38)) = eax; /* 0x170BFCB7: mov dword ptr [ebp - 0x38], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BFCC2; /* 0x170BFCBA: jge 0x170bfcc2 */
L_170BFCBC:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BFCBC: fadd dword ptr [0x1700142c] */
L_170BFCC2:
    /* test edx, edx */ /* 0x170BFCC2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = _st[1] / _st[0]; /* 0x170BFCC4: fdivr st(1) */
    MEM32(ebp + (-0x1C)) = edx; /* 0x170BFCC6: mov dword ptr [ebp - 0x1c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x170BFCC9: fstp dword ptr [ebp - 0x28] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x1C))); /* 0x170BFCCC: fild dword ptr [ebp - 0x1c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BFCD7; /* 0x170BFCCF: jge 0x170bfcd7 */
L_170BFCD1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BFCD1: fadd dword ptr [0x1700142c] */
L_170BFCD7:
    /* test eax, eax */ /* 0x170BFCD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = _st[1] / _st[0]; /* 0x170BFCD9: fdivr st(1) */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170BFCDB: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x170BFCDE: fstp dword ptr [ebp - 0x34] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x1C))); /* 0x170BFCE1: fild dword ptr [ebp - 0x1c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170BFCEC; /* 0x170BFCE4: jge 0x170bfcec */
L_170BFCE6:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170BFCE6: fadd dword ptr [0x1700142c] */
L_170BFCEC:
    _st[0] = _st[1] / _st[0]; /* 0x170BFCEC: fdivr st(1) */
    ecx = MEM32(ebp + (-0x28)); /* 0x170BFCEE: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x170BFCF1: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x170BFCF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x54)) = ecx; /* 0x170BFCF7: mov dword ptr [ebp - 0x54], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x170BFCFA: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x50)) = ecx; /* 0x170BFCFD: mov dword ptr [ebp - 0x50], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BFD00: fstp dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x30)); /* 0x170BFD03: mov ecx, dword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170BFD06: fstp st(0) */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x170BFD08: mov dword ptr [ebp - 0x4c], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BFDA3; /* 0x170BFD0B: jle 0x170bfda3 */
L_170BFD11:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x170BFD11: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x170BFD15: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170BFD94; /* 0x170BFD19: jle 0x170bfd94 */
L_170BFD1B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x170BFD1B: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170BFD1F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0xC)); /* 0x170BFD21: mov edi, dword ptr [ebp - 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170BFD79; /* 0x170BFD24: jle 0x170bfd79 */
L_170BFD26:
    fp_push((double)(int32_t)MEM32(ebp + (-0x10))); /* 0x170BFD26: fild dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170BFD29: fadd dword ptr [0x1700141c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x170BFD2F: fmul dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x170BFD32: fstp dword ptr [ebp - 0x3c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x170BFD35: fild dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170BFD38: fadd dword ptr [0x1700141c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x170BFD3E: fmul dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170BFD41: fstp dword ptr [ebp - 0x1c] */
L_170BFD44:
    eax = MEM32(ebp + (-0x3C)); /* 0x170BFD44: mov eax, dword ptr [ebp - 0x3c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x170BFD47: fild dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170BFD4A: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x44)) = eax; /* 0x170BFD4D: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x170BFD50: mov eax, dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x170BFD53: fadd dword ptr [0x1700141c] */
    MEM32(ebp + (-0x40)) = eax; /* 0x170BFD59: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x54); /* 0x170BFD5C: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x170BFD5F: push eax */
    eax = ebp + (-0x48); /* 0x170BFD60: lea eax, [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x170BFD63: fmul dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x170BFD66: push eax */
    PUSH32(esp, edi); /* 0x170BFD67: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x170BFD68: fstp dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x170BFD6B: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x170BFD6E: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x170BFD71: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x170BFD74: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFD44; /* 0x170BFD77: jl 0x170bfd44 */
L_170BFD79:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170BFD79: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x170BFD7C: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170BFD7E: push dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x170BFD81: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170BFD83: push dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170BFD86: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x170BFD89: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x170BFD8C: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x170BFD8F: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFD1B; /* 0x170BFD92: jl 0x170bfd1b */
L_170BFD94:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x170BFD94: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x170BFD97: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x170BFD9A: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170BFD11; /* 0x170BFD9D: jl 0x170bfd11 */
L_170BFDA3:
    eax = MEM32(esi); /* 0x170BFDA3: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x170BFDA5: push 1 */
    ecx = esi; /* 0x170BFDA7: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x170BFDA9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170BFDAB: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170BFDAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BFDBC; /* 0x170BFDB0: je 0x170bfdbc */
L_170BFDB2:
    ecx = MEM32(eax); /* 0x170BFDB2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFDB4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170BFDB5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170BFDB8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170BFDBC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170BFDBC: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x170BFDBF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170BFDC2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x170BFDC4: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BFC33; /* 0x170BFDC7: jb 0x170bfc33 */
L_170BFDCD:
    RECOMP_BACKEDGE();
    goto L_170BFC07; /* 0x170BFDCD: jmp 0x170bfc07 */
L_170BFDD2:
    esi = 0x8876086Cu; /* 0x170BFDD2: mov esi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_170BFC09; /* 0x170BFDD7: jmp 0x170bfc09 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170BFDE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BFDE1u);

L_170BFDE1:
    edi = edi; /* 0x170BFDE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BFDE3: push ebp */
    ebp = esp; /* 0x170BFDE4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x170BFDE6: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x170BFDE9: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BFDEC: fld dword ptr [eax] */
    PUSH32(esp, 3); /* 0x170BFDEE: push 3 */
    PUSH32(esp, 3); /* 0x170BFDF0: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x60)) = _v; } /* 0x170BFDF2: fstp qword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170BFDF5: fld dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x10); /* 0x170BFDF8: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x170BFDFB: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x170BFDFD: fstp qword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BFE00: fld dword ptr [eax] */
    PUSH32(esp, 0); /* 0x170BFE02: push 0 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x170BFE04: fstp qword ptr [ebp - 0x40] */
    ecx = ebp + (-0x20); /* 0x170BFE07: lea ecx, [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170BFE0A: fld dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x14); /* 0x170BFE0D: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x170BFE10: push dword ptr [eax + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BFE13: fstp qword ptr [ebp - 0x38] */
    PUSH32(esp, 7); /* 0x170BFE16: push 7 */
    PUSH32(esp, ecx); /* 0x170BFE18: push ecx */
    PUSH32(esp, ecx); /* 0x170BFE19: push ecx */
    PUSH32(esp, ecx); /* 0x170BFE1A: push ecx */
    PUSH32(esp, 0); /* 0x170BFE1B: push 0 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x170BFE1D: push dword ptr [eax + 4] */
    ecx = ebp + (-0x60); /* 0x170BFE20: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x170BFE23: push ecx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x170BFE24: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x170BFE27: push dword ptr [eax] */
    RECOMP_CALL(sub_170EA22F); /* 0x170BFE29: call 0x170ea22f */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x170BFE2E: fld qword ptr [ebp - 0x20] */
    eax = MEM32(ebp + 0x8); /* 0x170BFE31: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BFE34: fstp dword ptr [eax] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x170BFE36: fld qword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BFE39: fstp dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x170BFE3C: fld qword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170BFE3F: fstp dword ptr [eax + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x170BFE42: fld qword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170BFE45: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BFE48: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BFE49: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BFE51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BFE51u);

L_170BFE51:
    edi = edi; /* 0x170BFE51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BFE53: push ebp */
    ebp = esp; /* 0x170BFE54: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x170BFE56: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x170BFE59: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BFE5C: fld dword ptr [eax] */
    PUSH32(esp, 3); /* 0x170BFE5E: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x60)) = _v; } /* 0x170BFE60: fstp qword ptr [ebp - 0x60] */
    PUSH32(esp, 3); /* 0x170BFE63: push 3 */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170BFE65: fld dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x170BFE68: push 3 */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x58)) = _v; } /* 0x170BFE6A: fstp qword ptr [ebp - 0x58] */
    PUSH32(esp, 0); /* 0x170BFE6D: push 0 */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170BFE6F: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x10); /* 0x170BFE72: mov eax, dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x170BFE75: fstp qword ptr [ebp - 0x50] */
    ecx = ebp + (-0x20); /* 0x170BFE78: lea ecx, [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170BFE7B: fld dword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x170BFE7D: fstp qword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170BFE80: fld dword ptr [eax + 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x170BFE83: fstp qword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170BFE86: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x14); /* 0x170BFE89: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x170BFE8C: push dword ptr [eax + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x170BFE8F: fstp qword ptr [ebp - 0x30] */
    PUSH32(esp, 7); /* 0x170BFE92: push 7 */
    PUSH32(esp, ecx); /* 0x170BFE94: push ecx */
    PUSH32(esp, ecx); /* 0x170BFE95: push ecx */
    PUSH32(esp, ecx); /* 0x170BFE96: push ecx */
    PUSH32(esp, 0); /* 0x170BFE97: push 0 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x170BFE99: push dword ptr [eax + 4] */
    ecx = ebp + (-0x60); /* 0x170BFE9C: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x170BFE9F: push ecx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x170BFEA0: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x170BFEA3: push dword ptr [eax] */
    RECOMP_CALL(sub_170EA22F); /* 0x170BFEA5: call 0x170ea22f */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x170BFEAA: fld qword ptr [ebp - 0x20] */
    eax = MEM32(ebp + 0x8); /* 0x170BFEAD: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170BFEB0: fstp dword ptr [eax] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x170BFEB2: fld qword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170BFEB5: fstp dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x170BFEB8: fld qword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170BFEBB: fstp dword ptr [eax + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x170BFEBE: fld qword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170BFEC1: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170BFEC4: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170BFEC5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170BFECD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170BFECDu);

L_170BFECD:
    edi = edi; /* 0x170BFECD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170BFECF: push ebp */
    ebp = esp; /* 0x170BFED0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x170BFED2: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170BFED5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170BFED6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x170BFED8: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x170BFEDB: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x170BFEDE: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x170BFEE1: mov dword ptr [ebp - 0xc], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170BFEED; /* 0x170BFEE4: je 0x170bfeed */
L_170BFEE6:
    eax = MEM32(ebp + 0xC); /* 0x170BFEE6: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, esi */ /* 0x170BFEE9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170BFEF7; /* 0x170BFEEB: jne 0x170bfef7 */
L_170BFEED:
    eax = 0x8876086Cu; /* 0x170BFEED: mov eax, 0x8876086c */
    goto L_170C0059; /* 0x170BFEF2: jmp 0x170c0059 */
L_170BFEF7:
    ecx = MEM32(eax); /* 0x170BFEF7: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x170BFEF9: push ebx */
    edx = ebp + (-0x8); /* 0x170BFEFA: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x170BFEFD: push edx */
    PUSH32(esp, eax); /* 0x170BFEFE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170BFEFF: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BFF02: mov ebx, eax */
    /* cmp ebx, esi */ /* 0x170BFF04: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170C002B; /* 0x170BFF06: jl 0x170c002b */
L_170BFF0C:
    eax = MEM32(ebp + (-0x8)); /* 0x170BFF0C: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x170BFF0F: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170BFF11: push edi */
    PUSH32(esp, eax); /* 0x170BFF12: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BFF13: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BFF16: mov ebx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x170BFF18: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x170BFF1B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFF1D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170BFF1E: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170BFF21: mov esi, eax */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x170BFF23: shr esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 4u; /* 0x170BFF23: shr esi, 4 */
    PUSH32(esp, 4); /* 0x170BFF26: push 4 */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x170BFF28: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x170BFF28: shl esi, 2 */
    edi = POP32_VAL(esp); /* 0x170BFF2B: pop edi */
    /* cmp esi, edi */ /* 0x170BFF2C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170BFF36; /* 0x170BFF2E: jbe 0x170bff36 */
L_170BFF30:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x170BFF30: add edi, edi */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x170BFF32: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BFF30; /* 0x170BFF34: jb 0x170bff30 */
L_170BFF36:
    eax = edi; /* 0x170BFF36: mov eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170BFF38: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170BFF38: shl eax, 3 */
    PUSH32(esp, eax); /* 0x170BFF3B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170BFF3C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170BFF41: pop ecx */
    ecx = eax; /* 0x170BFF42: mov ecx, eax */
    /* test ecx, ecx */ /* 0x170BFF44: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x170BFF46: mov dword ptr [ebp - 0xc], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170BFF55; /* 0x170BFF49: jne 0x170bff55 */
L_170BFF4B:
    ebx = 0x8007000Eu; /* 0x170BFF4B: mov ebx, 0x8007000e */
    goto L_170C002A; /* 0x170BFF50: jmp 0x170c002a */
L_170BFF55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170BFF55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170BFF57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170BFF66; /* 0x170BFF59: jbe 0x170bff66 */
L_170BFF5B:
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x170BFF5B: fld dword ptr [ebx + eax*4] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + eax * 8) = _v; } /* 0x170BFF5E: fstp qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170BFF61: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x170BFF62: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170BFF5B; /* 0x170BFF64: jb 0x170bff5b */
L_170BFF66:
    eax = MEM32(ebp + 0xC); /* 0x170BFF66: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170BFF69: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x4); /* 0x170BFF6B: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x170BFF6E: push edx */
    PUSH32(esp, eax); /* 0x170BFF6F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BFF70: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BFF73: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BFF75: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C002A; /* 0x170BFF77: jl 0x170c002a */
L_170BFF7D:
    eax = ebp + (-0x14); /* 0x170BFF7D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x170BFF80: push eax */
    eax = ebp + (-0x1C); /* 0x170BFF81: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170BFF84: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x170BFF85: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BFF88: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFF8A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x170BFF8B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170BFF8E: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x170BFF8F: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170BFF92: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170BFF94: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170BFF95: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170BFF98: push eax */
    RECOMP_CALL(sub_170EAC3D); /* 0x170BFF99: call 0x170eac3d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170BFF9E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170BFFA0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C002A; /* 0x170BFFA2: jl 0x170c002a */
L_170BFFA8:
    eax = MEM32(ebp + (-0xC)); /* 0x170BFFA8: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170BFFAB: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = edi; /* 0x170BFFAC: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170BFFAF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170BFFB1: push edi */
    PUSH32(esp, edi); /* 0x170BFFB2: push edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x170BFFB3: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B200); /* 0x170BFFB6: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    esi = 0x00030000u; /* 0x170BFFBB: mov esi, 0x30000 */
    PUSH32(esp, esi); /* 0x170BFFC0: push esi */
    PUSH32(esp, edi); /* 0x170BFFC1: push edi */
    MEM32(ebp + 0xC) = eax; /* 0x170BFFC2: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1721B200); /* 0x170BFFC5: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x170BFFCA: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x170BFFCD: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x170BFFD0: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_170C0001; /* 0x170BFFD3: je 0x170c0001 */
L_170BFFD5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BFFD5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170BFFEE; /* 0x170BFFD6: je 0x170bffee */
L_170BFFD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170BFFD8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170C0014; /* 0x170BFFD9: jne 0x170c0014 */
L_170BFFDB:
    eax = ebp + (-0x1C); /* 0x170BFFDB: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170BFFDE: push eax */
    PUSH32(esp, 0x170BFE51u); /* 0x170BFFDF: push 0x170bfe51 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BFFE4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BF447); /* 0x170BFFE7: call 0x170bf447 */
    RECOMP_FLAGS_IN();
    goto L_170C0012; /* 0x170BFFEC: jmp 0x170c0012 */
L_170BFFEE:
    eax = ebp + (-0x1C); /* 0x170BFFEE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170BFFF1: push eax */
    PUSH32(esp, 0x170BFE51u); /* 0x170BFFF2: push 0x170bfe51 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170BFFF7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BFB75); /* 0x170BFFFA: call 0x170bfb75 */
    RECOMP_FLAGS_IN();
    goto L_170C0012; /* 0x170BFFFF: jmp 0x170c0012 */
L_170C0001:
    eax = ebp + (-0x1C); /* 0x170C0001: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170C0004: push eax */
    PUSH32(esp, 0x170BFDE1u); /* 0x170C0005: push 0x170bfde1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C000A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BF22C); /* 0x170C000D: call 0x170bf22c */
    RECOMP_FLAGS_IN();
L_170C0012:
    ebx = eax; /* 0x170C0012: mov ebx, eax */
L_170C0014:
    RECOMP_CALL(sub_1721B218); /* 0x170C0014: call 0x1721b218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x170C0019: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C001A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B200); /* 0x170C001D: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, edi */ /* 0x170C0022: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170C0024: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170C0025: pop ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170C002A; /* 0x170C0026: jl 0x170c002a */
L_170C0028:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170C0028: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170C002A:
    edi = POP32_VAL(esp); /* 0x170C002A: pop edi */
L_170C002B:
    eax = MEM32(ebp + (-0x4)); /* 0x170C002B: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170C002E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C003C; /* 0x170C0030: je 0x170c003c */
L_170C0032:
    ecx = MEM32(eax); /* 0x170C0032: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0034: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170C0035: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170C0038: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170C003C:
    eax = MEM32(ebp + (-0x8)); /* 0x170C003C: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x170C003F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C004D; /* 0x170C0041: je 0x170c004d */
L_170C0043:
    ecx = MEM32(eax); /* 0x170C0043: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0045: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170C0046: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x170C0049: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170C004D:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170C004D: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x170C0050: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170C0055: pop ecx */
    eax = ebx; /* 0x170C0056: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170C0058: pop ebx */
L_170C0059:
    esi = POP32_VAL(esp); /* 0x170C0059: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C005A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170C005B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170C0063(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0063u);

L_170C0063:
    edi = edi; /* 0x170C0063: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0065: push ebp */
    ebp = esp; /* 0x170C0066: mov ebp, esp */
    PUSH32(esp, 3); /* 0x170C0068: push 3 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C006A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C006D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BFECD); /* 0x170C0070: call 0x170bfecd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170C0075: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170C0076: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170C007E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C007Eu);

L_170C007E:
    edi = edi; /* 0x170C007E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0080: push ebp */
    ebp = esp; /* 0x170C0081: mov ebp, esp */
    PUSH32(esp, 5); /* 0x170C0083: push 5 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0085: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0088: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BFECD); /* 0x170C008B: call 0x170bfecd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170C0090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170C0091: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170C0099(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0099u);

L_170C0099:
    edi = edi; /* 0x170C0099: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C009B: push ebp */
    ebp = esp; /* 0x170C009C: mov ebp, esp */
    PUSH32(esp, 4); /* 0x170C009E: push 4 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C00A0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C00A3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BFECD); /* 0x170C00A6: call 0x170bfecd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170C00AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170C00AC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170C0ADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0ADBu);

L_170C0ADB:
    edi = edi; /* 0x170C0ADB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0ADD: push ebp */
    ebp = esp; /* 0x170C0ADE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170C0AE0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0AE3: push esi */
    ecx = ebp + (-0x10); /* 0x170C0AE4: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1721BA18); /* 0x170C0AE7: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x170C0AEC: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0AEE: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x170C0AF1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1721BA2F); /* 0x170C0AF4: call 0x1721ba2f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0AF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C0B0B; /* 0x170C0AFB: jl 0x170c0b0b */
L_170C0AFD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0AFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170C0B00: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170C0B03: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170BE7ED); /* 0x170C0B06: call 0x170be7ed */
    RECOMP_FLAGS_IN();
L_170C0B0B:
    ecx = ebp + (-0x10); /* 0x170C0B0B: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x170C0B0E: mov esi, eax */
    RECOMP_CALL(sub_1721BD0D); /* 0x170C0B10: call 0x1721bd0d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170C0B15: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0B17: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0B18: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170C0B19: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170C0B21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0B21u);

L_170C0B21:
    edi = edi; /* 0x170C0B21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0B23: push ebp */
    ebp = esp; /* 0x170C0B24: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170C0B26: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0B29: push esi */
    ecx = ebp + (-0x10); /* 0x170C0B2A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1721BA18); /* 0x170C0B2D: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x170C0B32: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0B34: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x170C0B37: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1721BA2F); /* 0x170C0B3A: call 0x1721ba2f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0B3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C0B51; /* 0x170C0B41: jl 0x170c0b51 */
L_170C0B43:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0B43: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170C0B46: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170C0B49: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170BE7ED); /* 0x170C0B4C: call 0x170be7ed */
    RECOMP_FLAGS_IN();
L_170C0B51:
    ecx = ebp + (-0x10); /* 0x170C0B51: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x170C0B54: mov esi, eax */
    RECOMP_CALL(sub_1721BD0D); /* 0x170C0B56: call 0x1721bd0d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170C0B5B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0B5D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0B5E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170C0B5F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170C0B67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0B67u);

L_170C0B67:
    edi = edi; /* 0x170C0B67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0B69: push ebp */
    ebp = esp; /* 0x170C0B6A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170C0B6C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0B6F: push esi */
    ecx = ebp + (-0xC); /* 0x170C0B70: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_170D3C30); /* 0x170C0B73: call 0x170d3c30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x170C0B78: push 0 */
    PUSH32(esp, 1); /* 0x170C0B7A: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0B7C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0xC); /* 0x170C0B7F: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0B82: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721BD56); /* 0x170C0B85: call 0x1721bd56 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0B8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C0B9C; /* 0x170C0B8C: jl 0x170c0b9c */
L_170C0B8E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170C0B8E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170C0B91: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170C0B94: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170BE7ED); /* 0x170C0B97: call 0x170be7ed */
    RECOMP_FLAGS_IN();
L_170C0B9C:
    ecx = ebp + (-0xC); /* 0x170C0B9C: lea ecx, [ebp - 0xc] */
    esi = eax; /* 0x170C0B9F: mov esi, eax */
    RECOMP_CALL(sub_1721BD1D); /* 0x170C0BA1: call 0x1721bd1d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170C0BA6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0BA8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0BA9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170C0BAA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170C0BB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0BB2u);

L_170C0BB2:
    edi = edi; /* 0x170C0BB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0BB4: push ebp */
    ebp = esp; /* 0x170C0BB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170C0BB7: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0BBA: push esi */
    ecx = ebp + (-0xC); /* 0x170C0BBB: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_170D3C30); /* 0x170C0BBE: call 0x170d3c30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x170C0BC3: push 1 */
    PUSH32(esp, 1); /* 0x170C0BC5: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0BC7: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0xC); /* 0x170C0BCA: lea ecx, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0BCD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721BD56); /* 0x170C0BD0: call 0x1721bd56 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0BD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C0BE7; /* 0x170C0BD7: jl 0x170c0be7 */
L_170C0BD9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170C0BD9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170C0BDC: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170C0BDF: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170BE7ED); /* 0x170C0BE2: call 0x170be7ed */
    RECOMP_FLAGS_IN();
L_170C0BE7:
    ecx = ebp + (-0xC); /* 0x170C0BE7: lea ecx, [ebp - 0xc] */
    esi = eax; /* 0x170C0BEA: mov esi, eax */
    RECOMP_CALL(sub_1721BD1D); /* 0x170C0BEC: call 0x1721bd1d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170C0BF1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0BF3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0BF4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170C0BF5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170C0BFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0BFDu);

L_170C0BFD:
    edi = edi; /* 0x170C0BFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0BFF: push ebp */
    ebp = esp; /* 0x170C0C00: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x170C0C02: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170C0C05: push ebx */
    PUSH32(esp, esi); /* 0x170C0C06: push esi */
    PUSH32(esp, edi); /* 0x170C0C07: push edi */
    ecx = ebp + (-0x64); /* 0x170C0C08: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_170CEEA0); /* 0x170C0C0B: call 0x170ceea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170C0C10: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170C0C12: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C15: je 0x170c0c6f */
L_170C0C17:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x170C0C17: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C1A: je 0x170c0c6f */
L_170C0C1C:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x170C0C1C: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C1F: je 0x170c0c6f */
L_170C0C21:
    PUSH32(esp, 1); /* 0x170C0C21: push 1 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170C0C23: push dword ptr [ebp + 0x28] */
    ecx = ebp + (-0x64); /* 0x170C0C26: lea ecx, [ebp - 0x64] */
    PUSH32(esp, ebx); /* 0x170C0C29: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170C0C2A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170C0C2D: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_170D3547); /* 0x170C0C30: call 0x170d3547 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170C0C35: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170C0C3D; /* 0x170C0C37: jge 0x170c0c3d */
L_170C0C39:
    esi = eax; /* 0x170C0C39: mov esi, eax */
    goto L_170C0C74; /* 0x170C0C3B: jmp 0x170c0c74 */
L_170C0C3D:
    esi = MEM32(ebp + 0x1C); /* 0x170C0C3D: mov esi, dword ptr [ebp + 0x1c] */
    /* cmp esi, ebx */ /* 0x170C0C40: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebp + (-0x10); /* 0x170C0C42: lea edi, [ebp - 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0C85; /* 0x170C0C45: je 0x170c0c85 */
L_170C0C47:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C49: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C4A: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x170C0C4B: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C4E: jl 0x170c0c6f */
L_170C0C50:
    eax = MEM32(ebp + (-0x8)); /* 0x170C0C50: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0x58)) */ /* 0x170C0C53: cmp eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C56: jg 0x170c0c6f */
L_170C0C58:
    /* cmp MEM32(ebp + (-0x10)), eax */ /* 0x170C0C58: cmp dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C5B: jg 0x170c0c6f */
L_170C0C5D:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x170C0C5D: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C60: jl 0x170c0c6f */
L_170C0C62:
    eax = MEM32(ebp + (-0x4)); /* 0x170C0C62: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x54)) */ /* 0x170C0C65: cmp eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170C0C6F; /* 0x170C0C68: jg 0x170c0c6f */
L_170C0C6A:
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x170C0C6A: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170C0C8C; /* 0x170C0C6D: jle 0x170c0c8c */
L_170C0C6F:
    esi = 0x8876086Cu; /* 0x170C0C6F: mov esi, 0x8876086c */
L_170C0C74:
    ecx = ebp + (-0x64); /* 0x170C0C74: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_170CEEBE); /* 0x170C0C77: call 0x170ceebe */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170C0C7C: pop edi */
    eax = esi; /* 0x170C0C7D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0C7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x170C0C80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0C81: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170C0C82: ret 0x24 */
L_170C0C85:
    esi = ebp + (-0x4C); /* 0x170C0C85: lea esi, [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C88: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C89: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C8A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0C8B: movsd dword ptr es:[edi], dword ptr [esi] */
L_170C0C8C:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170C0C8C: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x10); /* 0x170C0C8F: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170C0C92: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x170C0C95: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x170C0C96: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x170C0C99: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x170C0C9C: push dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x170C0C9F: push dword ptr [ebp - 0x60] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170C0CA2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0CA5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0CA8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE82D); /* 0x170C0CAB: call 0x170be82d */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170C0CB0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170C0C39; /* 0x170C0CB2: jl 0x170c0c39 */
L_170C0CB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170C0CB4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170C0C74; /* 0x170C0CB6: jmp 0x170c0c74 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170C0CBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0CBDu);

L_170C0CBD:
    edi = edi; /* 0x170C0CBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0CBF: push ebp */
    ebp = esp; /* 0x170C0CC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170C0CC2: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0CC8: push esi */
    ecx = ebp + (-0x74); /* 0x170C0CC9: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170D7623); /* 0x170C0CCC: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170C0CD1: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x170C0CD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170C0CE2; /* 0x170C0CD6: jne 0x170c0ce2 */
L_170C0CD8:
    esi = 0x8876086Cu; /* 0x170C0CD8: mov esi, 0x8876086c */
    goto L_170C0F04; /* 0x170C0CDD: jmp 0x170c0f04 */
L_170C0CE2:
    PUSH32(esp, ebx); /* 0x170C0CE2: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x170C0CE3: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x170C0CE6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170C0CF4; /* 0x170C0CE8: jne 0x170c0cf4 */
L_170C0CEA:
    esi = 0x8876086Cu; /* 0x170C0CEA: mov esi, 0x8876086c */
    goto L_170C0F03; /* 0x170C0CEF: jmp 0x170c0f03 */
L_170C0CF4:
    ecx = MEM32(eax); /* 0x170C0CF4: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170C0CF6: push edi */
    edx = ebp + (-0x60); /* 0x170C0CF7: lea edx, [ebp - 0x60] */
    PUSH32(esp, edx); /* 0x170C0CFA: push edx */
    PUSH32(esp, eax); /* 0x170C0CFB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x170C0CFC: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x170C0CFF: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x40); /* 0x170C0D01: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x170C0D04: push ecx */
    PUSH32(esp, ebx); /* 0x170C0D05: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x170C0D06: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x170C0D09: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x170C0D0C: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 5 */ /* 0x170C0D11: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0D14: je 0x170c0e6a */
L_170C0D1A:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x170C0D1A: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0D1E: jne 0x170c0e6a */
L_170C0D24:
    esi = MEM32(ebp + 0xC); /* 0x170C0D24: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x18); /* 0x170C0D27: mov edi, dword ptr [ebp + 0x18] */
    /* cmp esi, edi */ /* 0x170C0D2A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0D4D; /* 0x170C0D2C: je 0x170c0d4d */
L_170C0D2E:
    /* test esi, esi */ /* 0x170C0D2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0D30: je 0x170c0e6a */
L_170C0D36:
    /* test edi, edi */ /* 0x170C0D36: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0D38: je 0x170c0e6a */
L_170C0D3E:
    ecx = 0x100u; /* 0x170C0D3E: mov ecx, 0x100 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170C0D43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170C0D45: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_170C0E6A; /* 0x170C0D47: jne 0x170c0e6a */
L_170C0D4D:
    esi = MEM32(ebp + 0x10); /* 0x170C0D4D: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170C0D50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x170C0D52: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0D65; /* 0x170C0D54: je 0x170c0d65 */
L_170C0D56:
    edi = ebp + (-0x10); /* 0x170C0D56: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D59: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D5A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D5B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D5C: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(ebp + (-0x8)); /* 0x170C0D5D: mov edx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x170C0D60: mov esi, dword ptr [ebp - 4] */
    goto L_170C0D77; /* 0x170C0D63: jmp 0x170c0d77 */
L_170C0D65:
    edx = MEM32(ebp + (-0x48)); /* 0x170C0D65: mov edx, dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x44)); /* 0x170C0D68: mov esi, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170C0D6B: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x170C0D6E: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x170C0D71: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = esi; /* 0x170C0D74: mov dword ptr [ebp - 4], esi */
L_170C0D77:
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x170C0D77: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0D91; /* 0x170C0D7A: je 0x170c0d91 */
L_170C0D7C:
    esi = MEM32(ebp + 0x1C); /* 0x170C0D7C: mov esi, dword ptr [ebp + 0x1c] */
    edi = ebp + (-0x20); /* 0x170C0D7F: lea edi, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D82: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D83: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D84: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170C0D85: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x14)); /* 0x170C0D86: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x18)); /* 0x170C0D89: mov eax, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + (-0x4)); /* 0x170C0D8C: mov esi, dword ptr [ebp - 4] */
    goto L_170C0DA3; /* 0x170C0D8F: jmp 0x170c0da3 */
L_170C0D91:
    ecx = MEM32(ebp + (-0x24)); /* 0x170C0D91: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170C0D94: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170C0D97: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x170C0D9A: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = eax; /* 0x170C0D9D: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x170C0DA0: mov dword ptr [ebp - 0x14], ecx */
L_170C0DA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x20)); /* 0x170C0DA3: sub eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x10)); /* 0x170C0DA6: sub edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    /* cmp edx, eax */ /* 0x170C0DA9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0DAB: jne 0x170c0e6a */
L_170C0DB1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x170C0DB1: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0xC)); /* 0x170C0DB4: sub esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* cmp esi, ecx */ /* 0x170C0DB7: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E6A; /* 0x170C0DB9: jne 0x170c0e6a */
L_170C0DBF:
    eax = MEM32(ebx); /* 0x170C0DBF: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x14; /* 0x170C0DC1: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x170C0DC4: push ecx */
    PUSH32(esp, ebx); /* 0x170C0DC5: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170C0DC6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x170C0DC9: push 1 */
    RECOMP_CALL(sub_1702BB20); /* 0x170C0DCB: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170C0DD0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x34)), edi */ /* 0x170C0DD2: cmp dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E0C; /* 0x170C0DD5: jne 0x170c0e0c */
L_170C0DD7:
    /* cmp MEM32(ebp + (-0x54)), 2 */ /* 0x170C0DD7: cmp dword ptr [ebp - 0x54], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E0C; /* 0x170C0DDB: jne 0x170c0e0c */
L_170C0DDD:
    /* test MEM8(ebp + (-0x38)), 1 */ /* 0x170C0DDD: test byte ptr [ebp - 0x38], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x38))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C0E0C; /* 0x170C0DE1: je 0x170c0e0c */
L_170C0DE3:
    /* cmp MEM32(ebp + (-0x30)), edi */ /* 0x170C0DE3: cmp dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E0C; /* 0x170C0DE6: jne 0x170c0e0c */
L_170C0DE8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0DE8: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x14); /* 0x170C0DEB: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x170C0DEE: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x170C0DF0: push ebx */
    PUSH32(esp, eax); /* 0x170C0DF1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x80)); /* 0x170C0DF2: call dword ptr [ecx + 0x80] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170C0DF8: mov esi, eax */
    /* cmp esi, edi */ /* 0x170C0DFA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170C0E0C; /* 0x170C0DFC: jl 0x170c0e0c */
L_170C0DFE:
    eax = MEM32(ebp + 0x14); /* 0x170C0DFE: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x170C0E01: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0E03: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170C0E04: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    goto L_170C0F02; /* 0x170C0E07: jmp 0x170c0f02 */
L_170C0E0C:
    /* cmp MEM32(ebp + (-0x54)), edi */ /* 0x170C0E0C: cmp dword ptr [ebp - 0x54], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = 0x80004005u; /* 0x170C0E0F: mov esi, 0x80004005 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E53; /* 0x170C0E14: jne 0x170c0e53 */
L_170C0E16:
    /* cmp MEM32(ebp + (-0x34)), edi */ /* 0x170C0E16: cmp dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E36; /* 0x170C0E19: jne 0x170c0e36 */
L_170C0E1B:
    eax = MEM32(ebp + 0x14); /* 0x170C0E1B: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x170C0E1E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170C0E20: push edi */
    edx = ebp + (-0x10); /* 0x170C0E21: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x170C0E24: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0E25: push dword ptr [ebp + 8] */
    edx = ebp + (-0x20); /* 0x170C0E28: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x170C0E2B: push edx */
    PUSH32(esp, ebx); /* 0x170C0E2C: push ebx */
    PUSH32(esp, eax); /* 0x170C0E2D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x88)); /* 0x170C0E2E: call dword ptr [ecx + 0x88] */
    RECOMP_FLAGS_IN();
    goto L_170C0E51; /* 0x170C0E34: jmp 0x170c0e51 */
L_170C0E36:
    /* cmp MEM32(ebp + (-0x34)), 2 */ /* 0x170C0E36: cmp dword ptr [ebp - 0x34], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E53; /* 0x170C0E3A: jne 0x170c0e53 */
L_170C0E3C:
    eax = MEM32(ebp + 0x14); /* 0x170C0E3C: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x170C0E3F: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x170C0E41: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x170C0E44: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0E45: push dword ptr [ebp + 8] */
    edx = ebp + (-0x20); /* 0x170C0E48: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x170C0E4B: push edx */
    PUSH32(esp, ebx); /* 0x170C0E4C: push ebx */
    PUSH32(esp, eax); /* 0x170C0E4D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x78)); /* 0x170C0E4E: call dword ptr [ecx + 0x78] */
    RECOMP_FLAGS_IN();
L_170C0E51:
    esi = eax; /* 0x170C0E51: mov esi, eax */
L_170C0E53:
    PUSH32(esp, edi); /* 0x170C0E53: push edi */
    RECOMP_CALL(sub_1702BB20); /* 0x170C0E54: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x170C0E59: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x170C0E5C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0E5E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170C0E5F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x170C0E62: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170C0F00; /* 0x170C0E64: jge 0x170c0f00 */
L_170C0E6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170C0E6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170C0E6C: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170C0E6D: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0E77; /* 0x170C0E70: jne 0x170c0e77 */
L_170C0E72:
    eax = 0x00010001u; /* 0x170C0E72: mov eax, 0x10001 */
L_170C0E77:
    PUSH32(esp, eax); /* 0x170C0E77: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170C0E78: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170C0E7A: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170C0E7B: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0xC8); /* 0x170C0E7E: lea eax, [ebp - 0xc8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170C0E84: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x74); /* 0x170C0E87: lea ecx, [ebp - 0x74] */
    PUSH32(esp, ebx); /* 0x170C0E8A: push ebx */
    PUSH32(esp, eax); /* 0x170C0E8B: push eax */
    RECOMP_CALL(sub_170D7815); /* 0x170C0E8C: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170C0E91: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_170C0E99; /* 0x170C0E93: jge 0x170c0e99 */
L_170C0E95:
    esi = eax; /* 0x170C0E95: mov esi, eax */
    goto L_170C0F02; /* 0x170C0E97: jmp 0x170c0f02 */
L_170C0E99:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170C0E99: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0xA0); /* 0x170C0E9C: lea eax, [ebp - 0xa0] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170C0EA2: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x170C0EA5: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170C0EA6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xC0))); /* 0x170C0EA9: push dword ptr [ebp - 0xc0] */
    PUSH32(esp, MEM32(ebp + (-0xC4))); /* 0x170C0EAF: push dword ptr [ebp - 0xc4] */
    PUSH32(esp, MEM32(ebp + (-0xC8))); /* 0x170C0EB5: push dword ptr [ebp - 0xc8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170C0EBB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0EBE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0EC1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BE82D); /* 0x170C0EC4: call 0x170be82d */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170C0EC9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_170C0E95; /* 0x170C0ECB: jl 0x170c0e95 */
L_170C0ECD:
    /* cmp MEM32(ebp + (-0x34)), edi */ /* 0x170C0ECD: cmp dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170C0F00; /* 0x170C0ED0: jne 0x170c0f00 */
L_170C0ED2:
    /* cmp MEM32(ebp + (-0x54)), edi */ /* 0x170C0ED2: cmp dword ptr [ebp - 0x54], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0F00; /* 0x170C0ED5: je 0x170c0f00 */
L_170C0ED7:
    eax = MEM32(ebx); /* 0x170C0ED7: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x170C0ED9: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x170C0EDC: push ecx */
    PUSH32(esp, ebx); /* 0x170C0EDD: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170C0EDE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170C0EE1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170C0EE4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0EE6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170C0EE7: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170C0EEA: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x170C0EEC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170C0EEF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170C0EF1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170C0EF2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x170C0EF5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0F00; /* 0x170C0EF7: je 0x170c0f00 */
L_170C0EF9:
    esi = 0x88760868u; /* 0x170C0EF9: mov esi, 0x88760868 */
    goto L_170C0F02; /* 0x170C0EFE: jmp 0x170c0f02 */
L_170C0F00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170C0F00: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170C0F02:
    edi = POP32_VAL(esp); /* 0x170C0F02: pop edi */
L_170C0F03:
    ebx = POP32_VAL(esp); /* 0x170C0F03: pop ebx */
L_170C0F04:
    ecx = ebp + (-0x74); /* 0x170C0F04: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_170D780B); /* 0x170C0F07: call 0x170d780b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170C0F0C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0F0E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0F0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170C0F10: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170C0F18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170C0F18u);

L_170C0F18:
    edi = edi; /* 0x170C0F18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170C0F1A: push ebp */
    ebp = esp; /* 0x170C0F1B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x170C0F1D: sub esp, 0x6c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170C0F20: push esi */
    PUSH32(esp, edi); /* 0x170C0F21: push edi */
    ecx = ebp + (-0x6C); /* 0x170C0F22: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_170CEEA0); /* 0x170C0F25: call 0x170ceea0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170C0F2A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F2E: je 0x170c0f8f */
L_170C0F30:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x170C0F30: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F34: je 0x170c0f8f */
L_170C0F36:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x170C0F36: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F3A: je 0x170c0f8f */
L_170C0F3C:
    PUSH32(esp, 1); /* 0x170C0F3C: push 1 */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170C0F3E: push dword ptr [ebp + 0x28] */
    ecx = ebp + (-0x6C); /* 0x170C0F41: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, 0); /* 0x170C0F44: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170C0F46: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170C0F49: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_170D3547); /* 0x170C0F4C: call 0x170d3547 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0F51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170C0F59; /* 0x170C0F53: jge 0x170c0f59 */
L_170C0F55:
    esi = eax; /* 0x170C0F55: mov esi, eax */
    goto L_170C0F94; /* 0x170C0F57: jmp 0x170c0f94 */
L_170C0F59:
    esi = MEM32(ebp + 0x1C); /* 0x170C0F59: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x170C0F5C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x170C0F5E: push 6 */
    edi = ebp + (-0x18); /* 0x170C0F60: lea edi, [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x170C0F63: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170C0FA4; /* 0x170C0F64: je 0x170c0fa4 */
L_170C0F66:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170C0F66: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x10)); /* 0x170C0F68: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x60)) */ /* 0x170C0F6B: cmp eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F6E: ja 0x170c0f8f */
L_170C0F70:
    /* cmp MEM32(ebp + (-0x18)), eax */ /* 0x170C0F70: cmp dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F73: ja 0x170c0f8f */
L_170C0F75:
    eax = MEM32(ebp + (-0xC)); /* 0x170C0F75: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x5C)) */ /* 0x170C0F78: cmp eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F7B: ja 0x170c0f8f */
L_170C0F7D:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x170C0F7D: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F80: ja 0x170c0f8f */
L_170C0F82:
    eax = MEM32(ebp + (-0x4)); /* 0x170C0F82: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + (-0x58)) */ /* 0x170C0F85: cmp eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170C0F8F; /* 0x170C0F88: ja 0x170c0f8f */
L_170C0F8A:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x170C0F8A: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170C0FA9; /* 0x170C0F8D: jbe 0x170c0fa9 */
L_170C0F8F:
    esi = 0x8876086Cu; /* 0x170C0F8F: mov esi, 0x8876086c */
L_170C0F94:
    ecx = ebp + (-0x6C); /* 0x170C0F94: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_170CEEBE); /* 0x170C0F97: call 0x170ceebe */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170C0F9C: pop edi */
    eax = esi; /* 0x170C0F9D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170C0F9F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170C0FA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170C0FA1: ret 0x24 */
L_170C0FA4:
    esi = ebp + (-0x54); /* 0x170C0FA4: lea esi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170C0FA7: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_170C0FA9:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170C0FA9: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x18); /* 0x170C0FAC: lea eax, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170C0FAF: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x170C0FB2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x170C0FB3: push dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x170C0FB6: push dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x170C0FB9: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x170C0FBC: push dword ptr [ebp - 0x6c] */
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x170C0FBF: push dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170C0FC2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170C0FC5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170C0FC8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170BEA65); /* 0x170C0FCB: call 0x170bea65 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170C0FD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170C0F55; /* 0x170C0FD2: jl 0x170c0f55 */
L_170C0FD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170C0FD4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_170C0F94; /* 0x170C0FD6: jmp 0x170c0f94 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
